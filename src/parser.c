#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 143
#define SYMBOL_COUNT 30
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_if = 4,
    anon_sym_COLON = 5,
    anon_sym_elif = 6,
    anon_sym_else = 7,
    anon_sym_PLUS = 8,
    sym_identifier = 9,
    sym_comment = 10,
    sym__newline = 11,
    sym__indent = 12,
    sym__dedent = 13,
    sym_module = 14,
    sym__statement = 15,
    sym__simple_statement = 16,
    sym_print_statement = 17,
    sym_expression_statement = 18,
    sym__compound_statement = 19,
    sym_if_statement = 20,
    sym_elif_clause = 21,
    sym_else_clause = 22,
    sym__suite = 23,
    sym__expression = 24,
    sym_binary_operator = 25,
    aux_sym_module_repeat1 = 26,
    aux_sym_print_statement_repeat1 = 27,
    aux_sym_if_statement_repeat1 = 28,
    aux_sym__suite_repeat1 = 29,
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
    [sym__suite] = "_suite",
    [sym__expression] = "_expression",
    [sym_binary_operator] = "binary_operator",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym__suite_repeat1] = "_suite_repeat1",
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
    [sym__suite] = {
        .visible = false,
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
    [aux_sym__suite_repeat1] = {
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(11);
            if (lookahead == 's')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_identifier);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_elif);
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_else);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_if);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'r')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'n')
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
            ACCEPT_TOKEN(anon_sym_print);
        case 22:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(22);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 23:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(23);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            LEX_ERROR();
        case 24:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(24);
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
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 25:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(25);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 26:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(26);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 27:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(27);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 28:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(28);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 29:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(29);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 30:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(30);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 31:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(31);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 32:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(32);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 33:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(33);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 34:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(34);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            LEX_ERROR();
        case 35:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(35);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(36);
            LEX_ERROR();
        case 36:
            if (lookahead == 'l')
                ADVANCE(37);
            LEX_ERROR();
        case 37:
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(40);
            LEX_ERROR();
        case 38:
            if (lookahead == 'f')
                ADVANCE(39);
            LEX_ERROR();
        case 39:
            ACCEPT_TOKEN(anon_sym_elif);
        case 40:
            if (lookahead == 'e')
                ADVANCE(41);
            LEX_ERROR();
        case 41:
            ACCEPT_TOKEN(anon_sym_else);
        case 42:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(42);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(36);
            LEX_ERROR();
        case 43:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(43);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(36);
            LEX_ERROR();
        case 44:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(44);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(36);
            LEX_ERROR();
        case 45:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(45);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 46:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(46);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        case 48:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(48);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 22},
    [2] = {.lex_state = 23},
    [3] = {.lex_state = 23},
    [4] = {.lex_state = 24, .external_tokens = 2},
    [5] = {.lex_state = 25},
    [6] = {.lex_state = 26, .external_tokens = 2},
    [7] = {.lex_state = 27, .external_tokens = 2},
    [8] = {.lex_state = 28, .external_tokens = 2},
    [9] = {.lex_state = 26, .external_tokens = 2},
    [10] = {.lex_state = 26, .external_tokens = 2},
    [11] = {.lex_state = 29, .external_tokens = 2},
    [12] = {.lex_state = 26, .external_tokens = 2},
    [13] = {.lex_state = 25},
    [14] = {.lex_state = 26, .external_tokens = 2},
    [15] = {.lex_state = 23},
    [16] = {.lex_state = 24, .external_tokens = 2},
    [17] = {.lex_state = 26, .external_tokens = 2},
    [18] = {.lex_state = 30},
    [19] = {.lex_state = 30},
    [20] = {.lex_state = 31, .external_tokens = 3},
    [21] = {.lex_state = 23},
    [22] = {.lex_state = 30},
    [23] = {.lex_state = 32, .external_tokens = 4},
    [24] = {.lex_state = 28, .external_tokens = 2},
    [25] = {.lex_state = 28, .external_tokens = 2},
    [26] = {.lex_state = 23},
    [27] = {.lex_state = 33},
    [28] = {.lex_state = 28, .external_tokens = 2},
    [29] = {.lex_state = 26, .external_tokens = 2},
    [30] = {.lex_state = 28, .external_tokens = 2},
    [31] = {.lex_state = 28, .external_tokens = 2},
    [32] = {.lex_state = 26, .external_tokens = 2},
    [33] = {.lex_state = 31, .external_tokens = 3},
    [34] = {.lex_state = 26, .external_tokens = 2},
    [35] = {.lex_state = 23},
    [36] = {.lex_state = 28, .external_tokens = 2},
    [37] = {.lex_state = 34, .external_tokens = 5},
    [38] = {.lex_state = 27, .external_tokens = 2},
    [39] = {.lex_state = 26, .external_tokens = 5},
    [40] = {.lex_state = 26, .external_tokens = 5},
    [41] = {.lex_state = 26, .external_tokens = 5},
    [42] = {.lex_state = 32},
    [43] = {.lex_state = 28, .external_tokens = 2},
    [44] = {.lex_state = 34, .external_tokens = 5},
    [45] = {.lex_state = 32},
    [46] = {.lex_state = 28, .external_tokens = 2},
    [47] = {.lex_state = 34, .external_tokens = 5},
    [48] = {.lex_state = 34, .external_tokens = 5},
    [49] = {.lex_state = 30},
    [50] = {.lex_state = 31, .external_tokens = 3},
    [51] = {.lex_state = 23},
    [52] = {.lex_state = 0, .external_tokens = 5},
    [53] = {.lex_state = 32, .external_tokens = 4},
    [54] = {.lex_state = 28, .external_tokens = 5},
    [55] = {.lex_state = 28, .external_tokens = 5},
    [56] = {.lex_state = 35, .external_tokens = 5},
    [57] = {.lex_state = 42, .external_tokens = 5},
    [58] = {.lex_state = 23},
    [59] = {.lex_state = 43, .external_tokens = 5},
    [60] = {.lex_state = 23},
    [61] = {.lex_state = 33},
    [62] = {.lex_state = 28, .external_tokens = 5},
    [63] = {.lex_state = 26, .external_tokens = 5},
    [64] = {.lex_state = 35, .external_tokens = 5},
    [65] = {.lex_state = 28, .external_tokens = 5},
    [66] = {.lex_state = 26, .external_tokens = 5},
    [67] = {.lex_state = 31, .external_tokens = 3},
    [68] = {.lex_state = 26, .external_tokens = 5},
    [69] = {.lex_state = 28, .external_tokens = 5},
    [70] = {.lex_state = 34, .external_tokens = 5},
    [71] = {.lex_state = 28, .external_tokens = 5},
    [72] = {.lex_state = 34, .external_tokens = 5},
    [73] = {.lex_state = 28, .external_tokens = 5},
    [74] = {.lex_state = 43, .external_tokens = 5},
    [75] = {.lex_state = 23},
    [76] = {.lex_state = 44, .external_tokens = 5},
    [77] = {.lex_state = 23},
    [78] = {.lex_state = 43, .external_tokens = 5},
    [79] = {.lex_state = 43, .external_tokens = 5},
    [80] = {.lex_state = 30},
    [81] = {.lex_state = 31, .external_tokens = 3},
    [82] = {.lex_state = 28, .external_tokens = 5},
    [83] = {.lex_state = 24, .external_tokens = 2},
    [84] = {.lex_state = 23},
    [85] = {.lex_state = 45, .external_tokens = 2},
    [86] = {.lex_state = 23},
    [87] = {.lex_state = 24, .external_tokens = 2},
    [88] = {.lex_state = 24, .external_tokens = 2},
    [89] = {.lex_state = 30},
    [90] = {.lex_state = 31, .external_tokens = 3},
    [91] = {.lex_state = 28, .external_tokens = 2},
    [92] = {.lex_state = 22},
    [93] = {.lex_state = 23},
    [94] = {.lex_state = 23},
    [95] = {.lex_state = 23},
    [96] = {.lex_state = 31, .external_tokens = 3},
    [97] = {.lex_state = 23},
    [98] = {.lex_state = 33},
    [99] = {.lex_state = 23},
    [100] = {.lex_state = 26, .external_tokens = 5},
    [101] = {.lex_state = 28, .external_tokens = 5},
    [102] = {.lex_state = 26, .external_tokens = 5},
    [103] = {.lex_state = 28, .external_tokens = 5},
    [104] = {.lex_state = 28, .external_tokens = 5},
    [105] = {.lex_state = 26, .external_tokens = 5},
    [106] = {.lex_state = 28, .external_tokens = 5},
    [107] = {.lex_state = 0, .external_tokens = 5},
    [108] = {.lex_state = 45, .external_tokens = 5},
    [109] = {.lex_state = 28, .external_tokens = 5},
    [110] = {.lex_state = 23},
    [111] = {.lex_state = 24, .external_tokens = 5},
    [112] = {.lex_state = 23},
    [113] = {.lex_state = 24, .external_tokens = 5},
    [114] = {.lex_state = 23},
    [115] = {.lex_state = 31, .external_tokens = 3},
    [116] = {.lex_state = 28, .external_tokens = 5},
    [117] = {.lex_state = 29, .external_tokens = 5},
    [118] = {.lex_state = 23},
    [119] = {.lex_state = 29, .external_tokens = 5},
    [120] = {.lex_state = 24, .external_tokens = 5},
    [121] = {.lex_state = 34, .external_tokens = 5},
    [122] = {.lex_state = 0, .external_tokens = 5},
    [123] = {.lex_state = 31, .external_tokens = 3},
    [124] = {.lex_state = 23},
    [125] = {.lex_state = 46, .external_tokens = 5},
    [126] = {.lex_state = 23},
    [127] = {.lex_state = 46, .external_tokens = 5},
    [128] = {.lex_state = 47, .external_tokens = 5},
    [129] = {.lex_state = 23},
    [130] = {.lex_state = 23},
    [131] = {.lex_state = 48, .external_tokens = 5},
    [132] = {.lex_state = 23},
    [133] = {.lex_state = 47, .external_tokens = 5},
    [134] = {.lex_state = 47, .external_tokens = 5},
    [135] = {.lex_state = 47, .external_tokens = 5},
    [136] = {.lex_state = 30},
    [137] = {.lex_state = 31, .external_tokens = 3},
    [138] = {.lex_state = 30},
    [139] = {.lex_state = 31, .external_tokens = 3},
    [140] = {.lex_state = 28, .external_tokens = 5},
    [141] = {.lex_state = 24, .external_tokens = 5},
    [142] = {.lex_state = 24, .external_tokens = 5},
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
        [sym_module] = STATE(5),
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(103),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_elif_clause] = STATE(104),
        [sym_else_clause] = STATE(105),
        [sym__suite] = STATE(106),
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(52),
        [aux_sym_module_repeat1] = STATE(12),
        [aux_sym_print_statement_repeat1] = STATE(108),
        [aux_sym_if_statement_repeat1] = STATE(109),
        [aux_sym__suite_repeat1] = STATE(72),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_if] = ACTIONS(9),
        [anon_sym_COLON] = ACTIONS(11),
        [anon_sym_elif] = ACTIONS(13),
        [anon_sym_else] = ACTIONS(15),
        [anon_sym_PLUS] = ACTIONS(17),
        [sym_identifier] = ACTIONS(19),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(23),
        [sym__indent] = ACTIONS(25),
        [sym__dedent] = ACTIONS(27),
    },
    [1] = {
        [sym_module] = STATE(5),
        [sym__statement] = STATE(6),
        [sym__simple_statement] = STATE(7),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(9),
        [sym_if_statement] = STATE(10),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [aux_sym_module_repeat1] = STATE(12),
        [ts_builtin_sym_end] = ACTIONS(29),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(33),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
    },
    [2] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(4),
        [sym_identifier] = ACTIONS(37),
        [sym_comment] = ACTIONS(21),
    },
    [3] = {
        [sym__expression] = STATE(19),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(41),
        [anon_sym_SEMI] = ACTIONS(41),
        [anon_sym_print] = ACTIONS(43),
        [anon_sym_COMMA] = ACTIONS(41),
        [anon_sym_if] = ACTIONS(43),
        [anon_sym_elif] = ACTIONS(43),
        [anon_sym_else] = ACTIONS(43),
        [anon_sym_PLUS] = ACTIONS(41),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(41),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(47),
        [sym_comment] = ACTIONS(21),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(49),
        [anon_sym_SEMI] = ACTIONS(49),
        [anon_sym_print] = ACTIONS(51),
        [anon_sym_if] = ACTIONS(51),
        [sym_identifier] = ACTIONS(53),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(49),
    },
    [7] = {
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(55),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(57),
        [anon_sym_SEMI] = ACTIONS(57),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(59),
        [anon_sym_elif] = ACTIONS(59),
        [anon_sym_else] = ACTIONS(59),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(57),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_SEMI] = ACTIONS(63),
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(65),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(63),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [anon_sym_SEMI] = ACTIONS(69),
        [anon_sym_print] = ACTIONS(71),
        [anon_sym_if] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(69),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_elif] = ACTIONS(77),
        [anon_sym_else] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(75),
    },
    [12] = {
        [sym__statement] = STATE(14),
        [sym__simple_statement] = STATE(7),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(9),
        [sym_if_statement] = STATE(10),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(33),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(85),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(87),
        [sym_comment] = ACTIONS(21),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(89),
    },
    [15] = {
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(4),
        [sym_identifier] = ACTIONS(37),
        [sym_comment] = ACTIONS(21),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(95),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(101),
    },
    [18] = {
        [anon_sym_COLON] = ACTIONS(41),
        [anon_sym_PLUS] = ACTIONS(41),
        [sym_comment] = ACTIONS(21),
    },
    [19] = {
        [anon_sym_COLON] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [20] = {
        [sym__simple_statement] = STATE(24),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__suite] = STATE(25),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(111),
    },
    [21] = {
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [22] = {
        [anon_sym_COLON] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(95),
        [sym_comment] = ACTIONS(21),
    },
    [23] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(115),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(117),
    },
    [25] = {
        [sym_elif_clause] = STATE(28),
        [sym_else_clause] = STATE(29),
        [aux_sym_if_statement_repeat1] = STATE(30),
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(127),
        [anon_sym_else] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(123),
    },
    [26] = {
        [sym__expression] = STATE(89),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [27] = {
        [anon_sym_COLON] = ACTIONS(133),
        [sym_comment] = ACTIONS(21),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(135),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
    },
    [30] = {
        [sym_elif_clause] = STATE(31),
        [sym_else_clause] = STATE(32),
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_elif] = ACTIONS(127),
        [anon_sym_else] = ACTIONS(129),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(147),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(153),
    },
    [33] = {
        [sym__simple_statement] = STATE(24),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__suite] = STATE(34),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(111),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(159),
    },
    [35] = {
        [sym__expression] = STATE(49),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_elif] = ACTIONS(167),
        [anon_sym_else] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(165),
    },
    [37] = {
        [aux_sym__suite_repeat1] = STATE(44),
        [anon_sym_SEMI] = ACTIONS(171),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(173),
    },
    [38] = {
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(175),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_SEMI] = ACTIONS(63),
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(65),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(63),
        [sym__dedent] = ACTIONS(63),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [anon_sym_SEMI] = ACTIONS(69),
        [anon_sym_print] = ACTIONS(71),
        [anon_sym_if] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(69),
        [sym__dedent] = ACTIONS(69),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [42] = {
        [sym__statement] = STATE(48),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_elif] = ACTIONS(179),
        [anon_sym_else] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(177),
    },
    [44] = {
        [anon_sym_SEMI] = ACTIONS(183),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(183),
        [sym__dedent] = ACTIONS(185),
    },
    [45] = {
        [sym__statement] = STATE(47),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
    },
    [46] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_elif] = ACTIONS(189),
        [anon_sym_else] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(187),
    },
    [47] = {
        [anon_sym_SEMI] = ACTIONS(193),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(193),
        [sym__dedent] = ACTIONS(193),
    },
    [48] = {
        [anon_sym_SEMI] = ACTIONS(195),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(195),
        [sym__dedent] = ACTIONS(195),
    },
    [49] = {
        [anon_sym_COLON] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [50] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(56),
        [sym__expression] = STATE(57),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [51] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [52] = {
        [ts_builtin_sym_end] = ACTIONS(41),
        [anon_sym_SEMI] = ACTIONS(41),
        [anon_sym_print] = ACTIONS(43),
        [anon_sym_COMMA] = ACTIONS(41),
        [anon_sym_if] = ACTIONS(43),
        [anon_sym_COLON] = ACTIONS(41),
        [anon_sym_elif] = ACTIONS(43),
        [anon_sym_else] = ACTIONS(43),
        [anon_sym_PLUS] = ACTIONS(41),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(41),
        [sym__dedent] = ACTIONS(41),
    },
    [53] = {
        [sym__statement] = STATE(70),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(207),
    },
    [54] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(57),
        [anon_sym_SEMI] = ACTIONS(57),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(59),
        [anon_sym_elif] = ACTIONS(59),
        [anon_sym_else] = ACTIONS(59),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(57),
        [sym__dedent] = ACTIONS(57),
    },
    [56] = {
        [sym_elif_clause] = STATE(62),
        [sym_else_clause] = STATE(63),
        [aux_sym_if_statement_repeat1] = STATE(64),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(211),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [57] = {
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_elif] = ACTIONS(75),
        [anon_sym_else] = ACTIONS(75),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(75),
        [sym__dedent] = ACTIONS(75),
    },
    [58] = {
        [sym__expression] = STATE(59),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [59] = {
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_elif] = ACTIONS(95),
        [anon_sym_else] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(95),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [60] = {
        [sym__expression] = STATE(80),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [61] = {
        [anon_sym_COLON] = ACTIONS(215),
        [sym_comment] = ACTIONS(21),
    },
    [62] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [63] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [64] = {
        [sym_elif_clause] = STATE(65),
        [sym_else_clause] = STATE(66),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(211),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [65] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [66] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [67] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(68),
        [sym__expression] = STATE(57),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [68] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(159),
        [sym__dedent] = ACTIONS(159),
    },
    [69] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_elif] = ACTIONS(167),
        [anon_sym_else] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(165),
        [sym__dedent] = ACTIONS(165),
    },
    [70] = {
        [aux_sym__suite_repeat1] = STATE(72),
        [anon_sym_SEMI] = ACTIONS(171),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(217),
    },
    [71] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_elif] = ACTIONS(179),
        [anon_sym_else] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(183),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(183),
        [sym__dedent] = ACTIONS(219),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_elif] = ACTIONS(189),
        [anon_sym_else] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [74] = {
        [aux_sym_print_statement_repeat1] = STATE(76),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
    [75] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [76] = {
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [77] = {
        [sym__expression] = STATE(78),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [78] = {
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [79] = {
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [80] = {
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [81] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(82),
        [sym__expression] = STATE(57),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [82] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [83] = {
        [aux_sym_print_statement_repeat1] = STATE(85),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
    },
    [84] = {
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(4),
        [sym_identifier] = ACTIONS(37),
        [sym_comment] = ACTIONS(21),
    },
    [85] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_if] = ACTIONS(247),
        [anon_sym_elif] = ACTIONS(247),
        [anon_sym_else] = ACTIONS(247),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(225),
    },
    [86] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(4),
        [sym_identifier] = ACTIONS(37),
        [sym_comment] = ACTIONS(21),
    },
    [87] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_elif] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(255),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(229),
    },
    [88] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(231),
    },
    [89] = {
        [anon_sym_COLON] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [90] = {
        [sym__simple_statement] = STATE(24),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__suite] = STATE(91),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(111),
    },
    [91] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(235),
    },
    [92] = {
        [sym__statement] = STATE(121),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
    },
    [93] = {
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [94] = {
        [sym__expression] = STATE(141),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [95] = {
        [sym__expression] = STATE(138),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [96] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(106),
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(263),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [97] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [98] = {
        [anon_sym_COLON] = ACTIONS(265),
        [sym_comment] = ACTIONS(21),
    },
    [99] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [100] = {
        [sym__statement] = STATE(121),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(270),
        [anon_sym_if] = ACTIONS(273),
        [sym_identifier] = ACTIONS(276),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [101] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [102] = {
        [aux_sym__suite_repeat1] = STATE(72),
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_SEMI] = ACTIONS(294),
        [anon_sym_print] = ACTIONS(300),
        [anon_sym_if] = ACTIONS(300),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(294),
        [sym__dedent] = ACTIONS(306),
    },
    [103] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(310),
        [sym__dedent] = ACTIONS(117),
    },
    [104] = {
        [ts_builtin_sym_end] = ACTIONS(313),
        [anon_sym_SEMI] = ACTIONS(313),
        [anon_sym_print] = ACTIONS(316),
        [anon_sym_if] = ACTIONS(316),
        [anon_sym_elif] = ACTIONS(316),
        [anon_sym_else] = ACTIONS(316),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(313),
        [sym__dedent] = ACTIONS(313),
    },
    [105] = {
        [ts_builtin_sym_end] = ACTIONS(322),
        [anon_sym_SEMI] = ACTIONS(322),
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [sym_identifier] = ACTIONS(328),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(322),
        [sym__dedent] = ACTIONS(322),
    },
    [106] = {
        [sym_elif_clause] = STATE(62),
        [sym_else_clause] = STATE(63),
        [aux_sym_if_statement_repeat1] = STATE(109),
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(342),
        [sym_identifier] = ACTIONS(345),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [107] = {
        [aux_sym_print_statement_repeat1] = STATE(108),
        [ts_builtin_sym_end] = ACTIONS(349),
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_COLON] = ACTIONS(366),
        [anon_sym_elif] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(369),
        [sym_identifier] = ACTIONS(372),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(349),
        [sym__dedent] = ACTIONS(349),
    },
    [108] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_COMMA] = ACTIONS(378),
        [anon_sym_if] = ACTIONS(247),
        [anon_sym_elif] = ACTIONS(247),
        [anon_sym_else] = ACTIONS(247),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [109] = {
        [sym_elif_clause] = STATE(65),
        [sym_else_clause] = STATE(66),
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_elif] = ACTIONS(380),
        [anon_sym_else] = ACTIONS(382),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [110] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_elif] = ACTIONS(253),
        [anon_sym_else] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(384),
        [sym_identifier] = ACTIONS(255),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [112] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [113] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [114] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [115] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(116),
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(263),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [116] = {
        [sym_elif_clause] = STATE(62),
        [sym_else_clause] = STATE(63),
        [aux_sym_if_statement_repeat1] = STATE(109),
        [ts_builtin_sym_end] = ACTIONS(389),
        [anon_sym_SEMI] = ACTIONS(389),
        [anon_sym_print] = ACTIONS(392),
        [anon_sym_if] = ACTIONS(392),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(342),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(389),
        [sym__dedent] = ACTIONS(389),
    },
    [117] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_elif] = ACTIONS(77),
        [anon_sym_else] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(398),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(75),
        [sym__dedent] = ACTIONS(75),
    },
    [118] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [119] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(400),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [120] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(384),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [121] = {
        [anon_sym_SEMI] = ACTIONS(403),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(403),
        [sym__dedent] = ACTIONS(403),
    },
    [122] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_COLON] = ACTIONS(95),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(369),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [123] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(68),
        [sym__expression] = STATE(125),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(406),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [124] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(408),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(75),
        [sym__dedent] = ACTIONS(75),
    },
    [126] = {
        [sym__expression] = STATE(127),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [127] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(410),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [128] = {
        [aux_sym_print_statement_repeat1] = STATE(131),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(413),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(415),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
    [129] = {
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [130] = {
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(247),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [132] = {
        [sym__expression] = STATE(133),
        [sym_binary_operator] = STATE(52),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(21),
    },
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(415),
        [sym_identifier] = ACTIONS(255),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [134] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(419),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [135] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(415),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [136] = {
        [anon_sym_COLON] = ACTIONS(422),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [137] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(82),
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(263),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [138] = {
        [anon_sym_COLON] = ACTIONS(424),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [139] = {
        [sym__simple_statement] = STATE(54),
        [sym_print_statement] = STATE(55),
        [sym_expression_statement] = STATE(55),
        [sym__suite] = STATE(140),
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(52),
        [anon_sym_print] = ACTIONS(263),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(203),
    },
    [140] = {
        [sym_elif_clause] = STATE(62),
        [sym_else_clause] = STATE(63),
        [aux_sym_if_statement_repeat1] = STATE(109),
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(380),
        [anon_sym_else] = ACTIONS(382),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(426),
        [anon_sym_SEMI] = ACTIONS(426),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(426),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_PLUS] = ACTIONS(384),
        [sym_identifier] = ACTIONS(432),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(426),
        [sym__dedent] = ACTIONS(426),
    },
    [142] = {
        [aux_sym_print_statement_repeat1] = STATE(108),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(384),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(92),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(93),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(94),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(95),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(96),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(97),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(98),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(99),
    [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(52),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(53),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(101),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 4),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 4),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 4),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__suite_repeat1, 3),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__suite_repeat1, 2),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
    [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [267] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [270] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), SHIFT(2),
    [273] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), SHIFT(35),
    [276] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), SHIFT(4),
    [279] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3), REDUCE(sym__suite, 4),
    [283] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3), REDUCE(sym__suite, 4),
    [287] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3), REDUCE(sym__suite, 4),
    [291] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [294] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2), REDUCE(aux_sym__suite_repeat1, 2), REDUCE(aux_sym__suite_repeat1, 3), SHIFT(42),
    [300] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [303] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [306] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__suite_repeat1, 2), REDUCE(aux_sym__suite_repeat1, 3), SHIFT(71),
    [310] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(41),
    [313] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [316] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [319] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [322] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
    [325] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
    [328] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
    [331] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [335] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [339] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(97),
    [342] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(98),
    [345] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [349] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [355] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [361] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(114),
    [366] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(115),
    [369] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(99),
    [372] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
    [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
    [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [386] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(112),
    [389] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [392] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [395] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [400] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(118),
    [403] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__suite_repeat1, 2), REDUCE(aux_sym__suite_repeat1, 3),
    [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [410] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(126),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(130),
    [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [426] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [429] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [432] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
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
