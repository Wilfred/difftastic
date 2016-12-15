#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 331
#define SYMBOL_COUNT 43
#define TOKEN_COUNT 21
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
    anon_sym_PLUS = 15,
    sym_identifier = 16,
    sym_comment = 17,
    sym__newline = 18,
    sym__indent = 19,
    sym__dedent = 20,
    sym_module = 21,
    sym__statement = 22,
    sym__simple_statement = 23,
    sym_print_statement = 24,
    sym_expression_statement = 25,
    sym__compound_statement = 26,
    sym_if_statement = 27,
    sym_elif_clause = 28,
    sym_else_clause = 29,
    sym_for_statement = 30,
    sym_while_statement = 31,
    sym_try_statement = 32,
    sym_except_clause = 33,
    sym_finally_clause = 34,
    sym__suite = 35,
    sym_expression_list = 36,
    sym__expression = 37,
    sym_binary_operator = 38,
    aux_sym_module_repeat1 = 39,
    aux_sym_print_statement_repeat1 = 40,
    aux_sym_if_statement_repeat1 = 41,
    aux_sym_try_statement_repeat1 = 42,
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
    [sym__suite] = "_suite",
    [sym_expression_list] = "expression_list",
    [sym__expression] = "_expression",
    [sym_binary_operator] = "binary_operator",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(9);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(31);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 5:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 6:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 7:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 8:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(sym_identifier);
        case 9:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_as);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(12);
            if (lookahead == 'x')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(13);
            if (lookahead == 's')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_elif);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_else);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 't')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_except);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'n')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(8);
            if (lookahead == 'y')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_finally);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'r')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_for);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_if);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_in);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'r')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'n')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 't')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_print);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'r')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(8);
            if (lookahead == 'y')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_try);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'h')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_while);
        case 47:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(47);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'o')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(50);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            LEX_ERROR();
        case 51:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(51);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 52:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(52);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 53:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(53);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 54:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(54);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 55:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(55);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 57:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(57);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 58:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(58);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(34);
            LEX_ERROR();
        case 59:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(59);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(60);
            if (lookahead == 'e')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(68);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 60:
            if (lookahead == 's')
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            ACCEPT_TOKEN(anon_sym_as);
        case 62:
            if (lookahead == 'x')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (lookahead == 'c')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            if (lookahead == 'e')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            if (lookahead == 'p')
                ADVANCE(66);
            LEX_ERROR();
        case 66:
            if (lookahead == 't')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            ACCEPT_TOKEN(anon_sym_except);
        case 68:
            if (lookahead == 'i')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            if (lookahead == 'n')
                ADVANCE(70);
            LEX_ERROR();
        case 70:
            if (lookahead == 'a')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            if (lookahead == 'l')
                ADVANCE(72);
            LEX_ERROR();
        case 72:
            if (lookahead == 'l')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            if (lookahead == 'y')
                ADVANCE(74);
            LEX_ERROR();
        case 74:
            ACCEPT_TOKEN(anon_sym_finally);
        case 75:
            if (lookahead == 'n')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            ACCEPT_TOKEN(anon_sym_in);
        case 77:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(77);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 78:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(78);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(68);
            LEX_ERROR();
        case 79:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(79);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == 'e')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(68);
            LEX_ERROR();
        case 80:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(80);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(82);
            if (lookahead == 'x')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(83);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 84:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(84);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 85:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(85);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 86:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(86);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 87:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(87);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 88:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(88);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 89:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(89);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 90:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(90);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(60);
            LEX_ERROR();
        case 91:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(91);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 92:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(92);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(94);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(75);
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
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 96:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(96);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(75);
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
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(68);
            if (lookahead == 'i')
                ADVANCE(75);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(68);
            LEX_ERROR();
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(68);
            LEX_ERROR();
        case 103:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 105:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(105);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(31);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(31);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 111:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
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
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 114:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 115:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 116:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 47},
    [2] = {.lex_state = 50},
    [3] = {.lex_state = 50},
    [4] = {.lex_state = 50},
    [5] = {.lex_state = 50},
    [6] = {.lex_state = 51},
    [7] = {.lex_state = 52, .external_tokens = 2},
    [8] = {.lex_state = 53},
    [9] = {.lex_state = 54, .external_tokens = 2},
    [10] = {.lex_state = 55, .external_tokens = 2},
    [11] = {.lex_state = 56, .external_tokens = 2},
    [12] = {.lex_state = 54, .external_tokens = 2},
    [13] = {.lex_state = 54, .external_tokens = 2},
    [14] = {.lex_state = 57, .external_tokens = 2},
    [15] = {.lex_state = 54, .external_tokens = 2},
    [16] = {.lex_state = 53},
    [17] = {.lex_state = 54, .external_tokens = 2},
    [18] = {.lex_state = 50},
    [19] = {.lex_state = 52, .external_tokens = 2},
    [20] = {.lex_state = 54, .external_tokens = 2},
    [21] = {.lex_state = 58, .external_tokens = 3},
    [22] = {.lex_state = 50},
    [23] = {.lex_state = 59},
    [24] = {.lex_state = 77, .external_tokens = 4},
    [25] = {.lex_state = 78},
    [26] = {.lex_state = 78},
    [27] = {.lex_state = 78},
    [28] = {.lex_state = 79},
    [29] = {.lex_state = 50},
    [30] = {.lex_state = 59},
    [31] = {.lex_state = 50},
    [32] = {.lex_state = 51},
    [33] = {.lex_state = 80, .external_tokens = 2},
    [34] = {.lex_state = 54, .external_tokens = 2},
    [35] = {.lex_state = 80, .external_tokens = 2},
    [36] = {.lex_state = 51},
    [37] = {.lex_state = 83, .external_tokens = 2},
    [38] = {.lex_state = 80, .external_tokens = 2},
    [39] = {.lex_state = 54, .external_tokens = 2},
    [40] = {.lex_state = 54, .external_tokens = 2},
    [41] = {.lex_state = 58, .external_tokens = 3},
    [42] = {.lex_state = 77, .external_tokens = 4},
    [43] = {.lex_state = 56, .external_tokens = 2},
    [44] = {.lex_state = 83, .external_tokens = 2},
    [45] = {.lex_state = 50},
    [46] = {.lex_state = 50},
    [47] = {.lex_state = 50},
    [48] = {.lex_state = 51},
    [49] = {.lex_state = 56, .external_tokens = 2},
    [50] = {.lex_state = 77, .external_tokens = 4},
    [51] = {.lex_state = 55, .external_tokens = 2},
    [52] = {.lex_state = 77, .external_tokens = 4},
    [53] = {.lex_state = 77, .external_tokens = 4},
    [54] = {.lex_state = 77, .external_tokens = 4},
    [55] = {.lex_state = 56, .external_tokens = 2},
    [56] = {.lex_state = 77, .external_tokens = 4},
    [57] = {.lex_state = 77, .external_tokens = 4},
    [58] = {.lex_state = 58, .external_tokens = 3},
    [59] = {.lex_state = 78},
    [60] = {.lex_state = 50},
    [61] = {.lex_state = 51},
    [62] = {.lex_state = 84, .external_tokens = 4},
    [63] = {.lex_state = 77, .external_tokens = 4},
    [64] = {.lex_state = 84, .external_tokens = 4},
    [65] = {.lex_state = 51},
    [66] = {.lex_state = 85, .external_tokens = 4},
    [67] = {.lex_state = 84, .external_tokens = 4},
    [68] = {.lex_state = 77, .external_tokens = 4},
    [69] = {.lex_state = 77, .external_tokens = 4},
    [70] = {.lex_state = 58, .external_tokens = 3},
    [71] = {.lex_state = 50},
    [72] = {.lex_state = 86, .external_tokens = 4},
    [73] = {.lex_state = 77, .external_tokens = 4},
    [74] = {.lex_state = 87, .external_tokens = 4},
    [75] = {.lex_state = 87, .external_tokens = 4},
    [76] = {.lex_state = 85, .external_tokens = 4},
    [77] = {.lex_state = 88, .external_tokens = 4},
    [78] = {.lex_state = 50},
    [79] = {.lex_state = 86, .external_tokens = 4},
    [80] = {.lex_state = 87, .external_tokens = 4},
    [81] = {.lex_state = 77, .external_tokens = 4},
    [82] = {.lex_state = 87, .external_tokens = 4},
    [83] = {.lex_state = 86, .external_tokens = 4},
    [84] = {.lex_state = 50},
    [85] = {.lex_state = 89, .external_tokens = 4},
    [86] = {.lex_state = 50},
    [87] = {.lex_state = 86, .external_tokens = 4},
    [88] = {.lex_state = 86, .external_tokens = 4},
    [89] = {.lex_state = 58, .external_tokens = 3},
    [90] = {.lex_state = 77, .external_tokens = 4},
    [91] = {.lex_state = 90},
    [92] = {.lex_state = 50},
    [93] = {.lex_state = 58, .external_tokens = 3},
    [94] = {.lex_state = 91},
    [95] = {.lex_state = 58, .external_tokens = 3},
    [96] = {.lex_state = 84, .external_tokens = 4},
    [97] = {.lex_state = 84, .external_tokens = 4},
    [98] = {.lex_state = 91},
    [99] = {.lex_state = 58, .external_tokens = 3},
    [100] = {.lex_state = 92, .external_tokens = 4},
    [101] = {.lex_state = 77, .external_tokens = 4},
    [102] = {.lex_state = 94},
    [103] = {.lex_state = 95},
    [104] = {.lex_state = 50},
    [105] = {.lex_state = 96},
    [106] = {.lex_state = 50},
    [107] = {.lex_state = 97},
    [108] = {.lex_state = 97},
    [109] = {.lex_state = 50},
    [110] = {.lex_state = 51},
    [111] = {.lex_state = 58, .external_tokens = 3},
    [112] = {.lex_state = 92, .external_tokens = 4},
    [113] = {.lex_state = 77, .external_tokens = 4},
    [114] = {.lex_state = 91},
    [115] = {.lex_state = 58, .external_tokens = 3},
    [116] = {.lex_state = 98, .external_tokens = 4},
    [117] = {.lex_state = 50},
    [118] = {.lex_state = 98, .external_tokens = 4},
    [119] = {.lex_state = 77, .external_tokens = 4},
    [120] = {.lex_state = 98, .external_tokens = 4},
    [121] = {.lex_state = 98, .external_tokens = 4},
    [122] = {.lex_state = 77, .external_tokens = 4},
    [123] = {.lex_state = 91},
    [124] = {.lex_state = 58, .external_tokens = 3},
    [125] = {.lex_state = 98, .external_tokens = 4},
    [126] = {.lex_state = 52, .external_tokens = 2},
    [127] = {.lex_state = 50},
    [128] = {.lex_state = 100, .external_tokens = 2},
    [129] = {.lex_state = 50},
    [130] = {.lex_state = 52, .external_tokens = 2},
    [131] = {.lex_state = 52, .external_tokens = 2},
    [132] = {.lex_state = 58, .external_tokens = 3},
    [133] = {.lex_state = 54, .external_tokens = 2},
    [134] = {.lex_state = 90},
    [135] = {.lex_state = 50},
    [136] = {.lex_state = 58, .external_tokens = 3},
    [137] = {.lex_state = 91},
    [138] = {.lex_state = 58, .external_tokens = 3},
    [139] = {.lex_state = 80, .external_tokens = 2},
    [140] = {.lex_state = 80, .external_tokens = 2},
    [141] = {.lex_state = 78},
    [142] = {.lex_state = 77, .external_tokens = 4},
    [143] = {.lex_state = 78},
    [144] = {.lex_state = 101},
    [145] = {.lex_state = 102},
    [146] = {.lex_state = 91},
    [147] = {.lex_state = 58, .external_tokens = 3},
    [148] = {.lex_state = 103, .external_tokens = 2},
    [149] = {.lex_state = 54, .external_tokens = 2},
    [150] = {.lex_state = 94},
    [151] = {.lex_state = 50},
    [152] = {.lex_state = 51},
    [153] = {.lex_state = 58, .external_tokens = 3},
    [154] = {.lex_state = 103, .external_tokens = 2},
    [155] = {.lex_state = 54, .external_tokens = 2},
    [156] = {.lex_state = 91},
    [157] = {.lex_state = 58, .external_tokens = 3},
    [158] = {.lex_state = 104, .external_tokens = 2},
    [159] = {.lex_state = 50},
    [160] = {.lex_state = 104, .external_tokens = 2},
    [161] = {.lex_state = 54, .external_tokens = 2},
    [162] = {.lex_state = 104, .external_tokens = 2},
    [163] = {.lex_state = 104, .external_tokens = 2},
    [164] = {.lex_state = 54, .external_tokens = 2},
    [165] = {.lex_state = 91},
    [166] = {.lex_state = 58, .external_tokens = 3},
    [167] = {.lex_state = 104, .external_tokens = 2},
    [168] = {.lex_state = 50},
    [169] = {.lex_state = 50},
    [170] = {.lex_state = 50},
    [171] = {.lex_state = 58, .external_tokens = 3},
    [172] = {.lex_state = 50},
    [173] = {.lex_state = 51},
    [174] = {.lex_state = 50},
    [175] = {.lex_state = 50},
    [176] = {.lex_state = 50},
    [177] = {.lex_state = 51},
    [178] = {.lex_state = 50},
    [179] = {.lex_state = 50},
    [180] = {.lex_state = 51},
    [181] = {.lex_state = 50},
    [182] = {.lex_state = 0, .external_tokens = 5},
    [183] = {.lex_state = 54, .external_tokens = 5},
    [184] = {.lex_state = 77, .external_tokens = 4},
    [185] = {.lex_state = 56, .external_tokens = 5},
    [186] = {.lex_state = 54, .external_tokens = 5},
    [187] = {.lex_state = 56, .external_tokens = 5},
    [188] = {.lex_state = 56, .external_tokens = 5},
    [189] = {.lex_state = 54, .external_tokens = 5},
    [190] = {.lex_state = 54, .external_tokens = 5},
    [191] = {.lex_state = 104, .external_tokens = 5},
    [192] = {.lex_state = 83, .external_tokens = 5},
    [193] = {.lex_state = 80, .external_tokens = 5},
    [194] = {.lex_state = 54, .external_tokens = 5},
    [195] = {.lex_state = 56, .external_tokens = 5},
    [196] = {.lex_state = 105},
    [197] = {.lex_state = 0, .external_tokens = 5},
    [198] = {.lex_state = 54, .external_tokens = 5},
    [199] = {.lex_state = 106, .external_tokens = 5},
    [200] = {.lex_state = 104, .external_tokens = 5},
    [201] = {.lex_state = 80, .external_tokens = 5},
    [202] = {.lex_state = 83, .external_tokens = 5},
    [203] = {.lex_state = 80, .external_tokens = 5},
    [204] = {.lex_state = 54, .external_tokens = 5},
    [205] = {.lex_state = 54, .external_tokens = 5},
    [206] = {.lex_state = 51},
    [207] = {.lex_state = 104, .external_tokens = 5},
    [208] = {.lex_state = 54, .external_tokens = 5},
    [209] = {.lex_state = 58, .external_tokens = 3},
    [210] = {.lex_state = 50},
    [211] = {.lex_state = 56, .external_tokens = 5},
    [212] = {.lex_state = 83, .external_tokens = 5},
    [213] = {.lex_state = 107, .external_tokens = 5},
    [214] = {.lex_state = 50},
    [215] = {.lex_state = 107, .external_tokens = 5},
    [216] = {.lex_state = 56, .external_tokens = 5},
    [217] = {.lex_state = 77, .external_tokens = 4},
    [218] = {.lex_state = 56, .external_tokens = 5},
    [219] = {.lex_state = 108, .external_tokens = 5},
    [220] = {.lex_state = 50},
    [221] = {.lex_state = 50},
    [222] = {.lex_state = 109, .external_tokens = 5},
    [223] = {.lex_state = 50},
    [224] = {.lex_state = 108, .external_tokens = 5},
    [225] = {.lex_state = 108, .external_tokens = 5},
    [226] = {.lex_state = 108, .external_tokens = 5},
    [227] = {.lex_state = 50},
    [228] = {.lex_state = 110, .external_tokens = 5},
    [229] = {.lex_state = 50},
    [230] = {.lex_state = 110, .external_tokens = 5},
    [231] = {.lex_state = 54, .external_tokens = 5},
    [232] = {.lex_state = 55, .external_tokens = 2},
    [233] = {.lex_state = 54, .external_tokens = 5},
    [234] = {.lex_state = 50},
    [235] = {.lex_state = 58, .external_tokens = 3},
    [236] = {.lex_state = 56, .external_tokens = 5},
    [237] = {.lex_state = 57, .external_tokens = 5},
    [238] = {.lex_state = 50},
    [239] = {.lex_state = 57, .external_tokens = 5},
    [240] = {.lex_state = 104, .external_tokens = 5},
    [241] = {.lex_state = 54, .external_tokens = 5},
    [242] = {.lex_state = 110, .external_tokens = 5},
    [243] = {.lex_state = 58, .external_tokens = 3},
    [244] = {.lex_state = 50},
    [245] = {.lex_state = 80, .external_tokens = 5},
    [246] = {.lex_state = 111, .external_tokens = 5},
    [247] = {.lex_state = 50},
    [248] = {.lex_state = 111, .external_tokens = 5},
    [249] = {.lex_state = 112, .external_tokens = 5},
    [250] = {.lex_state = 50},
    [251] = {.lex_state = 50},
    [252] = {.lex_state = 113, .external_tokens = 5},
    [253] = {.lex_state = 50},
    [254] = {.lex_state = 112, .external_tokens = 5},
    [255] = {.lex_state = 112, .external_tokens = 5},
    [256] = {.lex_state = 112, .external_tokens = 5},
    [257] = {.lex_state = 58, .external_tokens = 3},
    [258] = {.lex_state = 50},
    [259] = {.lex_state = 103, .external_tokens = 5},
    [260] = {.lex_state = 114, .external_tokens = 5},
    [261] = {.lex_state = 50},
    [262] = {.lex_state = 114, .external_tokens = 5},
    [263] = {.lex_state = 54, .external_tokens = 5},
    [264] = {.lex_state = 115, .external_tokens = 5},
    [265] = {.lex_state = 50},
    [266] = {.lex_state = 50},
    [267] = {.lex_state = 116, .external_tokens = 5},
    [268] = {.lex_state = 50},
    [269] = {.lex_state = 115, .external_tokens = 5},
    [270] = {.lex_state = 115, .external_tokens = 5},
    [271] = {.lex_state = 115, .external_tokens = 5},
    [272] = {.lex_state = 54, .external_tokens = 5},
    [273] = {.lex_state = 80, .external_tokens = 5},
    [274] = {.lex_state = 54, .external_tokens = 5},
    [275] = {.lex_state = 0, .external_tokens = 5},
    [276] = {.lex_state = 58, .external_tokens = 3},
    [277] = {.lex_state = 54, .external_tokens = 5},
    [278] = {.lex_state = 91},
    [279] = {.lex_state = 90},
    [280] = {.lex_state = 58, .external_tokens = 3},
    [281] = {.lex_state = 80, .external_tokens = 5},
    [282] = {.lex_state = 58, .external_tokens = 3},
    [283] = {.lex_state = 78},
    [284] = {.lex_state = 91},
    [285] = {.lex_state = 58, .external_tokens = 3},
    [286] = {.lex_state = 103, .external_tokens = 5},
    [287] = {.lex_state = 54, .external_tokens = 5},
    [288] = {.lex_state = 51},
    [289] = {.lex_state = 94},
    [290] = {.lex_state = 58, .external_tokens = 3},
    [291] = {.lex_state = 50},
    [292] = {.lex_state = 117, .external_tokens = 5},
    [293] = {.lex_state = 50},
    [294] = {.lex_state = 117, .external_tokens = 5},
    [295] = {.lex_state = 118, .external_tokens = 5},
    [296] = {.lex_state = 50},
    [297] = {.lex_state = 50},
    [298] = {.lex_state = 119, .external_tokens = 5},
    [299] = {.lex_state = 50},
    [300] = {.lex_state = 118, .external_tokens = 5},
    [301] = {.lex_state = 118, .external_tokens = 5},
    [302] = {.lex_state = 118, .external_tokens = 5},
    [303] = {.lex_state = 91},
    [304] = {.lex_state = 58, .external_tokens = 3},
    [305] = {.lex_state = 50},
    [306] = {.lex_state = 104, .external_tokens = 5},
    [307] = {.lex_state = 120, .external_tokens = 5},
    [308] = {.lex_state = 50},
    [309] = {.lex_state = 120, .external_tokens = 5},
    [310] = {.lex_state = 121, .external_tokens = 5},
    [311] = {.lex_state = 50},
    [312] = {.lex_state = 50},
    [313] = {.lex_state = 122, .external_tokens = 5},
    [314] = {.lex_state = 50},
    [315] = {.lex_state = 121, .external_tokens = 5},
    [316] = {.lex_state = 121, .external_tokens = 5},
    [317] = {.lex_state = 121, .external_tokens = 5},
    [318] = {.lex_state = 91},
    [319] = {.lex_state = 58, .external_tokens = 3},
    [320] = {.lex_state = 104, .external_tokens = 5},
    [321] = {.lex_state = 54, .external_tokens = 5},
    [322] = {.lex_state = 110, .external_tokens = 5},
    [323] = {.lex_state = 52, .external_tokens = 5},
    [324] = {.lex_state = 50},
    [325] = {.lex_state = 50},
    [326] = {.lex_state = 100, .external_tokens = 5},
    [327] = {.lex_state = 50},
    [328] = {.lex_state = 52, .external_tokens = 5},
    [329] = {.lex_state = 52, .external_tokens = 5},
    [330] = {.lex_state = 52, .external_tokens = 5},
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
        [sym_module] = STATE(8),
        [sym__statement] = STATE(186),
        [sym__simple_statement] = STATE(187),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__compound_statement] = STATE(189),
        [sym_if_statement] = STATE(190),
        [sym_elif_clause] = STATE(191),
        [sym_else_clause] = STATE(192),
        [sym_for_statement] = STATE(190),
        [sym_while_statement] = STATE(190),
        [sym_try_statement] = STATE(190),
        [sym_except_clause] = STATE(193),
        [sym_finally_clause] = STATE(194),
        [sym__suite] = STATE(195),
        [sym_expression_list] = STATE(196),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(182),
        [aux_sym_module_repeat1] = STATE(198),
        [aux_sym_print_statement_repeat1] = STATE(199),
        [aux_sym_if_statement_repeat1] = STATE(200),
        [aux_sym_try_statement_repeat1] = STATE(201),
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
        [anon_sym_PLUS] = ACTIONS(31),
        [sym_identifier] = ACTIONS(33),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(37),
        [sym__indent] = ACTIONS(39),
        [sym__dedent] = ACTIONS(41),
    },
    [1] = {
        [sym_module] = STATE(8),
        [sym__statement] = STATE(9),
        [sym__simple_statement] = STATE(10),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(12),
        [sym_if_statement] = STATE(13),
        [sym_for_statement] = STATE(13),
        [sym_while_statement] = STATE(13),
        [sym_try_statement] = STATE(13),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [aux_sym_module_repeat1] = STATE(15),
        [ts_builtin_sym_end] = ACTIONS(43),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(47),
        [anon_sym_for] = ACTIONS(49),
        [anon_sym_while] = ACTIONS(51),
        [anon_sym_try] = ACTIONS(53),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
    },
    [2] = {
        [sym__expression] = STATE(126),
        [sym_binary_operator] = STATE(7),
        [sym_identifier] = ACTIONS(57),
        [sym_comment] = ACTIONS(35),
    },
    [3] = {
        [sym__expression] = STATE(156),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [4] = {
        [sym_expression_list] = STATE(150),
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [5] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [6] = {
        [anon_sym_COLON] = ACTIONS(61),
        [sym_comment] = ACTIONS(35),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_SEMI] = ACTIONS(63),
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_COMMA] = ACTIONS(63),
        [anon_sym_if] = ACTIONS(65),
        [anon_sym_elif] = ACTIONS(65),
        [anon_sym_else] = ACTIONS(65),
        [anon_sym_for] = ACTIONS(65),
        [anon_sym_while] = ACTIONS(65),
        [anon_sym_try] = ACTIONS(65),
        [anon_sym_except] = ACTIONS(65),
        [anon_sym_finally] = ACTIONS(65),
        [anon_sym_PLUS] = ACTIONS(63),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(63),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [sym_comment] = ACTIONS(35),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(71),
        [anon_sym_SEMI] = ACTIONS(71),
        [anon_sym_print] = ACTIONS(73),
        [anon_sym_if] = ACTIONS(73),
        [anon_sym_for] = ACTIONS(73),
        [anon_sym_while] = ACTIONS(73),
        [anon_sym_try] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(71),
    },
    [10] = {
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(77),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(79),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_try] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(85),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_SEMI] = ACTIONS(91),
        [anon_sym_print] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(93),
        [anon_sym_try] = ACTIONS(93),
        [sym_identifier] = ACTIONS(95),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(91),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_elif] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_except] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
    },
    [15] = {
        [sym__statement] = STATE(17),
        [sym__simple_statement] = STATE(10),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(12),
        [sym_if_statement] = STATE(13),
        [sym_for_statement] = STATE(13),
        [sym_while_statement] = STATE(13),
        [sym_try_statement] = STATE(13),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(47),
        [anon_sym_for] = ACTIONS(49),
        [anon_sym_while] = ACTIONS(51),
        [anon_sym_try] = ACTIONS(53),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(107),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [sym_comment] = ACTIONS(35),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(111),
    },
    [18] = {
        [sym__expression] = STATE(19),
        [sym_binary_operator] = STATE(7),
        [sym_identifier] = ACTIONS(57),
        [sym_comment] = ACTIONS(35),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(123),
    },
    [21] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(26),
        [sym_expression_statement] = STATE(26),
        [sym__suite] = STATE(27),
        [sym__expression] = STATE(28),
        [sym_binary_operator] = STATE(23),
        [anon_sym_print] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(133),
    },
    [22] = {
        [sym__expression] = STATE(144),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [23] = {
        [anon_sym_COMMA] = ACTIONS(63),
        [anon_sym_COLON] = ACTIONS(63),
        [anon_sym_in] = ACTIONS(63),
        [anon_sym_except] = ACTIONS(63),
        [anon_sym_as] = ACTIONS(63),
        [anon_sym_finally] = ACTIONS(63),
        [anon_sym_PLUS] = ACTIONS(63),
        [sym_comment] = ACTIONS(35),
    },
    [24] = {
        [sym__statement] = STATE(50),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [aux_sym_module_repeat1] = STATE(142),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(143),
    },
    [25] = {
        [anon_sym_except] = ACTIONS(145),
        [anon_sym_finally] = ACTIONS(145),
        [sym_comment] = ACTIONS(35),
    },
    [26] = {
        [anon_sym_except] = ACTIONS(79),
        [anon_sym_finally] = ACTIONS(79),
        [sym_comment] = ACTIONS(35),
    },
    [27] = {
        [sym_except_clause] = STATE(33),
        [sym_finally_clause] = STATE(34),
        [aux_sym_try_statement_repeat1] = STATE(35),
        [anon_sym_except] = ACTIONS(147),
        [anon_sym_finally] = ACTIONS(149),
        [sym_comment] = ACTIONS(35),
    },
    [28] = {
        [anon_sym_except] = ACTIONS(97),
        [anon_sym_finally] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [29] = {
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [30] = {
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_COLON] = ACTIONS(117),
        [anon_sym_in] = ACTIONS(117),
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_as] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_comment] = ACTIONS(35),
    },
    [31] = {
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [32] = {
        [anon_sym_COLON] = ACTIONS(153),
        [sym_comment] = ACTIONS(35),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_else] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_except] = ACTIONS(157),
        [anon_sym_finally] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(155),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(161),
    },
    [35] = {
        [sym_else_clause] = STATE(37),
        [sym_except_clause] = STATE(38),
        [sym_finally_clause] = STATE(39),
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_else] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_except] = ACTIONS(169),
        [anon_sym_finally] = ACTIONS(171),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(161),
    },
    [36] = {
        [anon_sym_COLON] = ACTIONS(173),
        [sym_comment] = ACTIONS(35),
    },
    [37] = {
        [sym_finally_clause] = STATE(40),
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(171),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(175),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_else] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_except] = ACTIONS(183),
        [anon_sym_finally] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(181),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(175),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(187),
    },
    [41] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(44),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [42] = {
        [sym__statement] = STATE(50),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [aux_sym_module_repeat1] = STATE(54),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(195),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(145),
    },
    [44] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_finally] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(201),
    },
    [45] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [46] = {
        [sym_expression_list] = STATE(102),
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [47] = {
        [sym__expression] = STATE(98),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [48] = {
        [anon_sym_COLON] = ACTIONS(207),
        [sym_comment] = ACTIONS(35),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(209),
    },
    [50] = {
        [anon_sym_print] = ACTIONS(73),
        [anon_sym_if] = ACTIONS(73),
        [anon_sym_for] = ACTIONS(73),
        [anon_sym_while] = ACTIONS(73),
        [anon_sym_try] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(71),
    },
    [51] = {
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(215),
    },
    [52] = {
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_try] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(85),
    },
    [53] = {
        [anon_sym_print] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(93),
        [anon_sym_try] = ACTIONS(93),
        [sym_identifier] = ACTIONS(95),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(91),
    },
    [54] = {
        [sym__statement] = STATE(56),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(217),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(221),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_while] = ACTIONS(221),
        [anon_sym_try] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(219),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(111),
    },
    [57] = {
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(123),
    },
    [58] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(26),
        [sym_expression_statement] = STATE(26),
        [sym__suite] = STATE(59),
        [sym__expression] = STATE(28),
        [sym_binary_operator] = STATE(23),
        [anon_sym_print] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(133),
    },
    [59] = {
        [sym_except_clause] = STATE(62),
        [sym_finally_clause] = STATE(63),
        [aux_sym_try_statement_repeat1] = STATE(64),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(227),
        [sym_comment] = ACTIONS(35),
    },
    [60] = {
        [sym__expression] = STATE(91),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [61] = {
        [anon_sym_COLON] = ACTIONS(229),
        [sym_comment] = ACTIONS(35),
    },
    [62] = {
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_else] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_except] = ACTIONS(157),
        [anon_sym_finally] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(155),
    },
    [63] = {
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(161),
    },
    [64] = {
        [sym_else_clause] = STATE(66),
        [sym_except_clause] = STATE(67),
        [sym_finally_clause] = STATE(68),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(235),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(161),
    },
    [65] = {
        [anon_sym_COLON] = ACTIONS(237),
        [sym_comment] = ACTIONS(35),
    },
    [66] = {
        [sym_finally_clause] = STATE(69),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(235),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(175),
    },
    [67] = {
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_else] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_except] = ACTIONS(183),
        [anon_sym_finally] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(181),
    },
    [68] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(175),
    },
    [69] = {
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(187),
    },
    [70] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(76),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [71] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(72),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(35),
    },
    [72] = {
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_COMMA] = ACTIONS(63),
        [anon_sym_if] = ACTIONS(65),
        [anon_sym_elif] = ACTIONS(65),
        [anon_sym_else] = ACTIONS(65),
        [anon_sym_for] = ACTIONS(65),
        [anon_sym_while] = ACTIONS(65),
        [anon_sym_try] = ACTIONS(65),
        [anon_sym_except] = ACTIONS(65),
        [anon_sym_finally] = ACTIONS(65),
        [anon_sym_PLUS] = ACTIONS(63),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(63),
    },
    [73] = {
        [sym__statement] = STATE(50),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [aux_sym_module_repeat1] = STATE(81),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(247),
    },
    [74] = {
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(145),
    },
    [75] = {
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(79),
    },
    [76] = {
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_finally] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(201),
    },
    [77] = {
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_elif] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_except] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(249),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(97),
    },
    [78] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(72),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(35),
    },
    [79] = {
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(117),
    },
    [80] = {
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(209),
    },
    [81] = {
        [sym__statement] = STATE(56),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(251),
    },
    [82] = {
        [anon_sym_print] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(221),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_while] = ACTIONS(221),
        [anon_sym_try] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(219),
    },
    [83] = {
        [aux_sym_print_statement_repeat1] = STATE(85),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_elif] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_except] = ACTIONS(253),
        [anon_sym_finally] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(249),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(259),
    },
    [84] = {
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(72),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(35),
    },
    [85] = {
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_elif] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(267),
    },
    [86] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(72),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(35),
    },
    [87] = {
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(249),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(271),
    },
    [88] = {
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(249),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(277),
    },
    [89] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(90),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [90] = {
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(285),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(289),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [92] = {
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [93] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(97),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [94] = {
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [95] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(96),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [96] = {
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(297),
    },
    [97] = {
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(299),
        [anon_sym_finally] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(303),
    },
    [98] = {
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [99] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(100),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [100] = {
        [sym_else_clause] = STATE(101),
        [anon_sym_print] = ACTIONS(307),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(307),
        [sym_identifier] = ACTIONS(309),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(311),
    },
    [101] = {
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(317),
    },
    [102] = {
        [anon_sym_in] = ACTIONS(319),
        [sym_comment] = ACTIONS(35),
    },
    [103] = {
        [aux_sym_print_statement_repeat1] = STATE(105),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [104] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_COLON] = ACTIONS(327),
        [anon_sym_in] = ACTIONS(327),
        [sym_comment] = ACTIONS(35),
    },
    [106] = {
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(271),
        [anon_sym_in] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_COLON] = ACTIONS(277),
        [anon_sym_in] = ACTIONS(277),
        [anon_sym_except] = ACTIONS(277),
        [anon_sym_finally] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [109] = {
        [sym_expression_list] = STATE(110),
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [110] = {
        [anon_sym_COLON] = ACTIONS(329),
        [sym_comment] = ACTIONS(35),
    },
    [111] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(112),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [112] = {
        [sym_else_clause] = STATE(113),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(335),
    },
    [113] = {
        [anon_sym_print] = ACTIONS(337),
        [anon_sym_if] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(337),
        [anon_sym_try] = ACTIONS(337),
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(341),
    },
    [114] = {
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [115] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(116),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [116] = {
        [sym_elif_clause] = STATE(118),
        [sym_else_clause] = STATE(119),
        [aux_sym_if_statement_repeat1] = STATE(120),
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_elif] = ACTIONS(347),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [sym_identifier] = ACTIONS(349),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(351),
    },
    [117] = {
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [118] = {
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_elif] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(357),
    },
    [119] = {
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(363),
    },
    [120] = {
        [sym_elif_clause] = STATE(121),
        [sym_else_clause] = STATE(122),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_elif] = ACTIONS(347),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(363),
    },
    [121] = {
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_if] = ACTIONS(365),
        [anon_sym_elif] = ACTIONS(365),
        [anon_sym_else] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_while] = ACTIONS(365),
        [anon_sym_try] = ACTIONS(365),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(369),
    },
    [122] = {
        [anon_sym_print] = ACTIONS(371),
        [anon_sym_if] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_while] = ACTIONS(371),
        [anon_sym_try] = ACTIONS(371),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(375),
    },
    [123] = {
        [anon_sym_COLON] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [124] = {
        [sym__simple_statement] = STATE(74),
        [sym_print_statement] = STATE(75),
        [sym_expression_statement] = STATE(75),
        [sym__suite] = STATE(125),
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(72),
        [anon_sym_print] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(243),
    },
    [125] = {
        [anon_sym_print] = ACTIONS(379),
        [anon_sym_if] = ACTIONS(379),
        [anon_sym_elif] = ACTIONS(379),
        [anon_sym_else] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_while] = ACTIONS(379),
        [anon_sym_try] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(383),
    },
    [126] = {
        [aux_sym_print_statement_repeat1] = STATE(128),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_elif] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_except] = ACTIONS(253),
        [anon_sym_finally] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
    },
    [127] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(7),
        [sym_identifier] = ACTIONS(57),
        [sym_comment] = ACTIONS(35),
    },
    [128] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_elif] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
    },
    [129] = {
        [sym__expression] = STATE(130),
        [sym_binary_operator] = STATE(7),
        [sym_identifier] = ACTIONS(57),
        [sym_comment] = ACTIONS(35),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
    },
    [132] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(133),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(285),
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(285),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_as] = ACTIONS(389),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [135] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [136] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(140),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [137] = {
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [138] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(139),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(297),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(299),
        [anon_sym_finally] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(303),
    },
    [141] = {
        [anon_sym_except] = ACTIONS(209),
        [anon_sym_finally] = ACTIONS(209),
        [sym_comment] = ACTIONS(35),
    },
    [142] = {
        [sym__statement] = STATE(56),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(395),
    },
    [143] = {
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [sym_comment] = ACTIONS(35),
    },
    [144] = {
        [aux_sym_print_statement_repeat1] = STATE(145),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(259),
        [anon_sym_finally] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_except] = ACTIONS(267),
        [anon_sym_finally] = ACTIONS(267),
        [sym_comment] = ACTIONS(35),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [147] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(148),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [148] = {
        [sym_else_clause] = STATE(149),
        [ts_builtin_sym_end] = ACTIONS(311),
        [anon_sym_SEMI] = ACTIONS(311),
        [anon_sym_print] = ACTIONS(307),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_else] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(307),
        [sym_identifier] = ACTIONS(309),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(311),
    },
    [149] = {
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(317),
    },
    [150] = {
        [anon_sym_in] = ACTIONS(399),
        [sym_comment] = ACTIONS(35),
    },
    [151] = {
        [sym_expression_list] = STATE(152),
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [152] = {
        [anon_sym_COLON] = ACTIONS(401),
        [sym_comment] = ACTIONS(35),
    },
    [153] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(154),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [154] = {
        [sym_else_clause] = STATE(155),
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_SEMI] = ACTIONS(335),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_else] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(335),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_print] = ACTIONS(337),
        [anon_sym_if] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(337),
        [anon_sym_try] = ACTIONS(337),
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(341),
    },
    [156] = {
        [anon_sym_COLON] = ACTIONS(403),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [157] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(158),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [158] = {
        [sym_elif_clause] = STATE(160),
        [sym_else_clause] = STATE(161),
        [aux_sym_if_statement_repeat1] = STATE(162),
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_elif] = ACTIONS(405),
        [anon_sym_else] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [sym_identifier] = ACTIONS(349),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(351),
    },
    [159] = {
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [160] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_elif] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(357),
    },
    [161] = {
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(363),
    },
    [162] = {
        [sym_elif_clause] = STATE(163),
        [sym_else_clause] = STATE(164),
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_elif] = ACTIONS(405),
        [anon_sym_else] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(363),
    },
    [163] = {
        [ts_builtin_sym_end] = ACTIONS(369),
        [anon_sym_SEMI] = ACTIONS(369),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_if] = ACTIONS(365),
        [anon_sym_elif] = ACTIONS(365),
        [anon_sym_else] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_while] = ACTIONS(365),
        [anon_sym_try] = ACTIONS(365),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(369),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(371),
        [anon_sym_if] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_while] = ACTIONS(371),
        [anon_sym_try] = ACTIONS(371),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(375),
    },
    [165] = {
        [anon_sym_COLON] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [166] = {
        [sym__simple_statement] = STATE(43),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__suite] = STATE(167),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(193),
    },
    [167] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(379),
        [anon_sym_if] = ACTIONS(379),
        [anon_sym_elif] = ACTIONS(379),
        [anon_sym_else] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_while] = ACTIONS(379),
        [anon_sym_try] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(383),
    },
    [168] = {
        [sym__expression] = STATE(323),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [169] = {
        [sym__expression] = STATE(322),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [170] = {
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [171] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(195),
        [sym__expression] = STATE(237),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(411),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [172] = {
        [sym__expression] = STATE(303),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [173] = {
        [anon_sym_COLON] = ACTIONS(417),
        [sym_comment] = ACTIONS(35),
    },
    [174] = {
        [sym_expression_list] = STATE(289),
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [175] = {
        [sym_expression_list] = STATE(288),
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [176] = {
        [sym__expression] = STATE(284),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [177] = {
        [anon_sym_COLON] = ACTIONS(419),
        [sym_comment] = ACTIONS(35),
    },
    [178] = {
        [sym__expression] = STATE(279),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [179] = {
        [sym__expression] = STATE(278),
        [sym_binary_operator] = STATE(23),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [180] = {
        [anon_sym_COLON] = ACTIONS(421),
        [sym_comment] = ACTIONS(35),
    },
    [181] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_SEMI] = ACTIONS(63),
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_COMMA] = ACTIONS(63),
        [anon_sym_if] = ACTIONS(65),
        [anon_sym_COLON] = ACTIONS(63),
        [anon_sym_elif] = ACTIONS(65),
        [anon_sym_else] = ACTIONS(65),
        [anon_sym_for] = ACTIONS(65),
        [anon_sym_in] = ACTIONS(65),
        [anon_sym_while] = ACTIONS(65),
        [anon_sym_try] = ACTIONS(65),
        [anon_sym_except] = ACTIONS(65),
        [anon_sym_as] = ACTIONS(65),
        [anon_sym_finally] = ACTIONS(65),
        [anon_sym_PLUS] = ACTIONS(63),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(63),
        [sym__dedent] = ACTIONS(63),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(423),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [184] = {
        [sym__statement] = STATE(50),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [aux_sym_module_repeat1] = STATE(217),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(426),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(428),
        [anon_sym_SEMI] = ACTIONS(428),
        [anon_sym_print] = ACTIONS(431),
        [anon_sym_if] = ACTIONS(431),
        [anon_sym_elif] = ACTIONS(431),
        [anon_sym_else] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_while] = ACTIONS(431),
        [anon_sym_try] = ACTIONS(431),
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [sym_identifier] = ACTIONS(434),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(428),
        [sym__dedent] = ACTIONS(428),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(440),
        [anon_sym_if] = ACTIONS(440),
        [anon_sym_for] = ACTIONS(440),
        [anon_sym_while] = ACTIONS(440),
        [anon_sym_try] = ACTIONS(440),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(446),
        [sym__dedent] = ACTIONS(145),
    },
    [188] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [189] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_try] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(85),
        [sym__dedent] = ACTIONS(85),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_SEMI] = ACTIONS(91),
        [anon_sym_print] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(93),
        [anon_sym_try] = ACTIONS(93),
        [sym_identifier] = ACTIONS(95),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(91),
        [sym__dedent] = ACTIONS(91),
    },
    [191] = {
        [ts_builtin_sym_end] = ACTIONS(449),
        [anon_sym_SEMI] = ACTIONS(449),
        [anon_sym_print] = ACTIONS(452),
        [anon_sym_if] = ACTIONS(452),
        [anon_sym_elif] = ACTIONS(452),
        [anon_sym_else] = ACTIONS(452),
        [anon_sym_for] = ACTIONS(452),
        [anon_sym_while] = ACTIONS(452),
        [anon_sym_try] = ACTIONS(452),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(449),
        [sym__dedent] = ACTIONS(449),
    },
    [192] = {
        [sym_finally_clause] = STATE(205),
        [ts_builtin_sym_end] = ACTIONS(458),
        [anon_sym_SEMI] = ACTIONS(458),
        [anon_sym_print] = ACTIONS(464),
        [anon_sym_if] = ACTIONS(464),
        [anon_sym_for] = ACTIONS(464),
        [anon_sym_while] = ACTIONS(464),
        [anon_sym_try] = ACTIONS(464),
        [anon_sym_finally] = ACTIONS(470),
        [sym_identifier] = ACTIONS(472),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(458),
        [sym__dedent] = ACTIONS(458),
    },
    [193] = {
        [ts_builtin_sym_end] = ACTIONS(478),
        [anon_sym_SEMI] = ACTIONS(478),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_else] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_except] = ACTIONS(481),
        [anon_sym_finally] = ACTIONS(481),
        [sym_identifier] = ACTIONS(484),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(478),
        [sym__dedent] = ACTIONS(478),
    },
    [194] = {
        [ts_builtin_sym_end] = ACTIONS(487),
        [anon_sym_SEMI] = ACTIONS(487),
        [anon_sym_print] = ACTIONS(491),
        [anon_sym_if] = ACTIONS(491),
        [anon_sym_for] = ACTIONS(491),
        [anon_sym_while] = ACTIONS(491),
        [anon_sym_try] = ACTIONS(491),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(487),
        [sym__dedent] = ACTIONS(487),
    },
    [195] = {
        [sym_elif_clause] = STATE(240),
        [sym_else_clause] = STATE(272),
        [sym_except_clause] = STATE(273),
        [sym_finally_clause] = STATE(274),
        [aux_sym_if_statement_repeat1] = STATE(200),
        [aux_sym_try_statement_repeat1] = STATE(201),
        [ts_builtin_sym_end] = ACTIONS(499),
        [anon_sym_SEMI] = ACTIONS(499),
        [anon_sym_print] = ACTIONS(508),
        [anon_sym_if] = ACTIONS(508),
        [anon_sym_elif] = ACTIONS(517),
        [anon_sym_else] = ACTIONS(520),
        [anon_sym_for] = ACTIONS(508),
        [anon_sym_while] = ACTIONS(508),
        [anon_sym_try] = ACTIONS(508),
        [anon_sym_except] = ACTIONS(525),
        [anon_sym_finally] = ACTIONS(529),
        [sym_identifier] = ACTIONS(534),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(499),
        [sym__dedent] = ACTIONS(499),
    },
    [196] = {
        [anon_sym_COLON] = ACTIONS(543),
        [anon_sym_in] = ACTIONS(545),
        [sym_comment] = ACTIONS(35),
    },
    [197] = {
        [aux_sym_print_statement_repeat1] = STATE(199),
        [ts_builtin_sym_end] = ACTIONS(547),
        [anon_sym_SEMI] = ACTIONS(547),
        [anon_sym_print] = ACTIONS(553),
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(553),
        [anon_sym_COLON] = ACTIONS(564),
        [anon_sym_elif] = ACTIONS(553),
        [anon_sym_else] = ACTIONS(553),
        [anon_sym_for] = ACTIONS(553),
        [anon_sym_in] = ACTIONS(570),
        [anon_sym_while] = ACTIONS(553),
        [anon_sym_try] = ACTIONS(553),
        [anon_sym_except] = ACTIONS(553),
        [anon_sym_as] = ACTIONS(575),
        [anon_sym_finally] = ACTIONS(553),
        [anon_sym_PLUS] = ACTIONS(578),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(547),
        [sym__dedent] = ACTIONS(547),
    },
    [198] = {
        [sym__statement] = STATE(231),
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(189),
        [sym_if_statement] = STATE(190),
        [sym_for_statement] = STATE(190),
        [sym_while_statement] = STATE(190),
        [sym_try_statement] = STATE(190),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(587),
        [anon_sym_for] = ACTIONS(589),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(593),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(107),
        [sym__dedent] = ACTIONS(595),
    },
    [199] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_COLON] = ACTIONS(327),
        [anon_sym_elif] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_in] = ACTIONS(599),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [200] = {
        [sym_elif_clause] = STATE(207),
        [sym_else_clause] = STATE(208),
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(363),
        [sym__dedent] = ACTIONS(363),
    },
    [201] = {
        [sym_else_clause] = STATE(202),
        [sym_except_clause] = STATE(203),
        [sym_finally_clause] = STATE(204),
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_else] = ACTIONS(605),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_except] = ACTIONS(607),
        [anon_sym_finally] = ACTIONS(470),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(161),
        [sym__dedent] = ACTIONS(161),
    },
    [202] = {
        [sym_finally_clause] = STATE(205),
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(470),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [203] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_else] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_except] = ACTIONS(183),
        [anon_sym_finally] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(181),
        [sym__dedent] = ACTIONS(181),
    },
    [204] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [205] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [206] = {
        [anon_sym_COLON] = ACTIONS(609),
        [sym_comment] = ACTIONS(35),
    },
    [207] = {
        [ts_builtin_sym_end] = ACTIONS(369),
        [anon_sym_SEMI] = ACTIONS(369),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_if] = ACTIONS(365),
        [anon_sym_elif] = ACTIONS(365),
        [anon_sym_else] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_while] = ACTIONS(365),
        [anon_sym_try] = ACTIONS(365),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(369),
        [sym__dedent] = ACTIONS(369),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(371),
        [anon_sym_if] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_while] = ACTIONS(371),
        [anon_sym_try] = ACTIONS(371),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(375),
        [sym__dedent] = ACTIONS(375),
    },
    [209] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(212),
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(611),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [210] = {
        [sym__expression] = STATE(219),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [211] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(145),
        [sym__dedent] = ACTIONS(145),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_finally] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [213] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(613),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [214] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(615),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [216] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [217] = {
        [sym__statement] = STATE(56),
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(11),
        [sym_expression_statement] = STATE(11),
        [sym__compound_statement] = STATE(52),
        [sym_if_statement] = STATE(53),
        [sym_for_statement] = STATE(53),
        [sym_while_statement] = STATE(53),
        [sym_try_statement] = STATE(53),
        [sym__expression] = STATE(14),
        [sym_binary_operator] = STATE(7),
        [anon_sym_print] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(141),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
        [sym__dedent] = ACTIONS(595),
    },
    [218] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(221),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_while] = ACTIONS(221),
        [anon_sym_try] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(219),
        [sym__dedent] = ACTIONS(219),
    },
    [219] = {
        [aux_sym_print_statement_repeat1] = STATE(222),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(618),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(620),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
        [sym__dedent] = ACTIONS(259),
    },
    [220] = {
        [sym__expression] = STATE(226),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [221] = {
        [sym__expression] = STATE(225),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [222] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(622),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [223] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [224] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(620),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [225] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(624),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [226] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(620),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [227] = {
        [sym__expression] = STATE(228),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [228] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_in] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(627),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [229] = {
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [230] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_COLON] = ACTIONS(117),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_in] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(629),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [231] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(111),
        [sym__dedent] = ACTIONS(111),
    },
    [232] = {
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(632),
    },
    [233] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [234] = {
        [sym__expression] = STATE(242),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [235] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(236),
        [sym__expression] = STATE(237),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(411),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [236] = {
        [sym_elif_clause] = STATE(240),
        [sym_else_clause] = STATE(241),
        [aux_sym_if_statement_repeat1] = STATE(200),
        [ts_builtin_sym_end] = ACTIONS(634),
        [anon_sym_SEMI] = ACTIONS(634),
        [anon_sym_print] = ACTIONS(640),
        [anon_sym_if] = ACTIONS(640),
        [anon_sym_elif] = ACTIONS(517),
        [anon_sym_else] = ACTIONS(520),
        [anon_sym_for] = ACTIONS(640),
        [anon_sym_while] = ACTIONS(640),
        [anon_sym_try] = ACTIONS(640),
        [anon_sym_except] = ACTIONS(646),
        [anon_sym_finally] = ACTIONS(646),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(634),
        [sym__dedent] = ACTIONS(634),
    },
    [237] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_elif] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_except] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(655),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [238] = {
        [sym__expression] = STATE(239),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(657),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [240] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_elif] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(357),
        [sym__dedent] = ACTIONS(357),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(660),
        [anon_sym_SEMI] = ACTIONS(660),
        [anon_sym_print] = ACTIONS(663),
        [anon_sym_if] = ACTIONS(663),
        [anon_sym_for] = ACTIONS(663),
        [anon_sym_while] = ACTIONS(663),
        [anon_sym_try] = ACTIONS(663),
        [sym_identifier] = ACTIONS(666),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(660),
        [sym__dedent] = ACTIONS(660),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(669),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(627),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [243] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(245),
        [sym__expression] = STATE(246),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(672),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [244] = {
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [245] = {
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_except] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(674),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [247] = {
        [sym__expression] = STATE(248),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [248] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(676),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [249] = {
        [aux_sym_print_statement_repeat1] = STATE(252),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_except] = ACTIONS(253),
        [anon_sym_finally] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(681),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
        [sym__dedent] = ACTIONS(259),
    },
    [250] = {
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [251] = {
        [sym__expression] = STATE(255),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [252] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(683),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [253] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(681),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(685),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [256] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(681),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [257] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(259),
        [sym__expression] = STATE(260),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(688),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [258] = {
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [259] = {
        [sym_else_clause] = STATE(263),
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_SEMI] = ACTIONS(335),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(335),
        [sym__dedent] = ACTIONS(335),
    },
    [260] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(690),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [261] = {
        [sym__expression] = STATE(262),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [262] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(692),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [263] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_print] = ACTIONS(337),
        [anon_sym_if] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(337),
        [anon_sym_try] = ACTIONS(337),
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(341),
        [sym__dedent] = ACTIONS(341),
    },
    [264] = {
        [aux_sym_print_statement_repeat1] = STATE(267),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(697),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
        [sym__dedent] = ACTIONS(259),
    },
    [265] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [266] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [268] = {
        [sym__expression] = STATE(269),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [269] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(697),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [270] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(701),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [271] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(697),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(704),
        [anon_sym_SEMI] = ACTIONS(704),
        [anon_sym_print] = ACTIONS(708),
        [anon_sym_if] = ACTIONS(708),
        [anon_sym_for] = ACTIONS(708),
        [anon_sym_while] = ACTIONS(708),
        [anon_sym_try] = ACTIONS(708),
        [sym_identifier] = ACTIONS(712),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(704),
        [sym__dedent] = ACTIONS(704),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_else] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_except] = ACTIONS(157),
        [anon_sym_finally] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(155),
        [sym__dedent] = ACTIONS(155),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(161),
        [sym__dedent] = ACTIONS(161),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_COLON] = ACTIONS(117),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_in] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_as] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(578),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [276] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(277),
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(611),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [277] = {
        [ts_builtin_sym_end] = ACTIONS(285),
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(285),
        [sym__dedent] = ACTIONS(285),
    },
    [278] = {
        [anon_sym_COLON] = ACTIONS(716),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [279] = {
        [anon_sym_COMMA] = ACTIONS(718),
        [anon_sym_COLON] = ACTIONS(720),
        [anon_sym_as] = ACTIONS(718),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [280] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(281),
        [sym__expression] = STATE(246),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(672),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(299),
        [anon_sym_finally] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [282] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(26),
        [sym_expression_statement] = STATE(26),
        [sym__suite] = STATE(283),
        [sym__expression] = STATE(28),
        [sym_binary_operator] = STATE(23),
        [anon_sym_print] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(133),
    },
    [283] = {
        [sym_except_clause] = STATE(273),
        [sym_finally_clause] = STATE(274),
        [aux_sym_try_statement_repeat1] = STATE(201),
        [anon_sym_except] = ACTIONS(722),
        [anon_sym_finally] = ACTIONS(724),
        [sym_comment] = ACTIONS(35),
    },
    [284] = {
        [anon_sym_COLON] = ACTIONS(726),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [285] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(286),
        [sym__expression] = STATE(260),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(688),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [286] = {
        [sym_else_clause] = STATE(287),
        [ts_builtin_sym_end] = ACTIONS(311),
        [anon_sym_SEMI] = ACTIONS(311),
        [anon_sym_print] = ACTIONS(307),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(307),
        [sym_identifier] = ACTIONS(309),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(311),
        [sym__dedent] = ACTIONS(311),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(317),
        [sym__dedent] = ACTIONS(317),
    },
    [288] = {
        [anon_sym_COLON] = ACTIONS(543),
        [sym_comment] = ACTIONS(35),
    },
    [289] = {
        [anon_sym_in] = ACTIONS(545),
        [sym_comment] = ACTIONS(35),
    },
    [290] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(212),
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(728),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [291] = {
        [sym__expression] = STATE(295),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [292] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(730),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [293] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [294] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(732),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [295] = {
        [aux_sym_print_statement_repeat1] = STATE(298),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_finally] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(737),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
        [sym__dedent] = ACTIONS(259),
    },
    [296] = {
        [sym__expression] = STATE(302),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [297] = {
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [298] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [299] = {
        [sym__expression] = STATE(300),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(737),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(741),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(737),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [303] = {
        [anon_sym_COLON] = ACTIONS(744),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [304] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(306),
        [sym__expression] = STATE(307),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(746),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [305] = {
        [sym__expression] = STATE(310),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(379),
        [anon_sym_if] = ACTIONS(379),
        [anon_sym_elif] = ACTIONS(379),
        [anon_sym_else] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_while] = ACTIONS(379),
        [anon_sym_try] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_SEMI] = ACTIONS(97),
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_elif] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(748),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [308] = {
        [sym__expression] = STATE(309),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(750),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [310] = {
        [aux_sym_print_statement_repeat1] = STATE(313),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_elif] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(755),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
        [sym__dedent] = ACTIONS(259),
    },
    [311] = {
        [sym__expression] = STATE(317),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [312] = {
        [sym__expression] = STATE(316),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_elif] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [314] = {
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(755),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [316] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(759),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(755),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [318] = {
        [anon_sym_COLON] = ACTIONS(762),
        [anon_sym_PLUS] = ACTIONS(151),
        [sym_comment] = ACTIONS(35),
    },
    [319] = {
        [sym__simple_statement] = STATE(211),
        [sym_print_statement] = STATE(188),
        [sym_expression_statement] = STATE(188),
        [sym__suite] = STATE(320),
        [sym__expression] = STATE(307),
        [sym_binary_operator] = STATE(182),
        [anon_sym_print] = ACTIONS(746),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(35),
        [sym__indent] = ACTIONS(415),
    },
    [320] = {
        [sym_elif_clause] = STATE(240),
        [sym_else_clause] = STATE(321),
        [aux_sym_if_statement_repeat1] = STATE(200),
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [sym_identifier] = ACTIONS(349),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [321] = {
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(363),
        [sym__dedent] = ACTIONS(363),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(764),
        [anon_sym_SEMI] = ACTIONS(764),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_COMMA] = ACTIONS(764),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_COLON] = ACTIONS(770),
        [anon_sym_elif] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_in] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_except] = ACTIONS(767),
        [anon_sym_finally] = ACTIONS(767),
        [anon_sym_PLUS] = ACTIONS(627),
        [sym_identifier] = ACTIONS(774),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(764),
        [sym__dedent] = ACTIONS(764),
    },
    [323] = {
        [aux_sym_print_statement_repeat1] = STATE(326),
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(777),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_elif] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_for] = ACTIONS(253),
        [anon_sym_while] = ACTIONS(253),
        [anon_sym_try] = ACTIONS(253),
        [anon_sym_except] = ACTIONS(253),
        [anon_sym_finally] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(779),
        [sym_identifier] = ACTIONS(257),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(259),
        [sym__dedent] = ACTIONS(259),
    },
    [324] = {
        [sym__expression] = STATE(330),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [325] = {
        [sym__expression] = STATE(329),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_elif] = ACTIONS(261),
        [anon_sym_else] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [327] = {
        [sym__expression] = STATE(328),
        [sym_binary_operator] = STATE(182),
        [sym_identifier] = ACTIONS(409),
        [sym_comment] = ACTIONS(35),
    },
    [328] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(779),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [329] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(783),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(779),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(35),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(16),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(168),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(169),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(170),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(171),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(172),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(173),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(174),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(175),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(176),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(177),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(178),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(179),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(180),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(181),
    [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(182),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(183),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(184),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(185),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
    [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
    [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [423] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [428] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [431] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [434] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [440] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [443] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [446] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(233),
    [449] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [452] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [455] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [458] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [464] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
    [472] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [478] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [481] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [484] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [487] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [491] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [495] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [499] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [508] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [517] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(172),
    [520] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(206),
    [525] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(178),
    [529] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(180),
    [534] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [547] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [553] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [559] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(234),
    [564] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(235),
    [570] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [575] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(179),
    [578] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(181),
    [581] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [615] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(214),
    [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [624] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(221),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [629] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(229),
    [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [634] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [640] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [646] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [649] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [657] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(238),
    [660] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [663] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [666] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [669] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(243),
    [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
    [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [676] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(247),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [685] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(251),
    [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
    [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [692] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(261),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [701] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(266),
    [704] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [708] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [712] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
    [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [732] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(293),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [741] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(297),
    [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [750] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(308),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [759] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(312),
    [762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [764] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [767] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [770] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(243),
    [774] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [783] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(325),
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
