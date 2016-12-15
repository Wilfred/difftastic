#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 154
#define SYMBOL_COUNT 29
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
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
        case 35:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(35);
            if (lookahead == '#')
                ADVANCE(2);
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
        case 36:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(36);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
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
        case 37:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(37);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
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
        case 38:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(38);
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
        case 39:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(39);
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
        case 40:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(40);
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
        case 41:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(41);
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
    [37] = {.lex_state = 32, .external_tokens = 4},
    [38] = {.lex_state = 27, .external_tokens = 2},
    [39] = {.lex_state = 32, .external_tokens = 4},
    [40] = {.lex_state = 32, .external_tokens = 4},
    [41] = {.lex_state = 32, .external_tokens = 4},
    [42] = {.lex_state = 28, .external_tokens = 2},
    [43] = {.lex_state = 32, .external_tokens = 4},
    [44] = {.lex_state = 32, .external_tokens = 4},
    [45] = {.lex_state = 30},
    [46] = {.lex_state = 31, .external_tokens = 3},
    [47] = {.lex_state = 23},
    [48] = {.lex_state = 34, .external_tokens = 4},
    [49] = {.lex_state = 32, .external_tokens = 4},
    [50] = {.lex_state = 35, .external_tokens = 4},
    [51] = {.lex_state = 35, .external_tokens = 4},
    [52] = {.lex_state = 35, .external_tokens = 4},
    [53] = {.lex_state = 36, .external_tokens = 4},
    [54] = {.lex_state = 23},
    [55] = {.lex_state = 34, .external_tokens = 4},
    [56] = {.lex_state = 23},
    [57] = {.lex_state = 33},
    [58] = {.lex_state = 35, .external_tokens = 4},
    [59] = {.lex_state = 32, .external_tokens = 4},
    [60] = {.lex_state = 35, .external_tokens = 4},
    [61] = {.lex_state = 35, .external_tokens = 4},
    [62] = {.lex_state = 32, .external_tokens = 4},
    [63] = {.lex_state = 31, .external_tokens = 3},
    [64] = {.lex_state = 32, .external_tokens = 4},
    [65] = {.lex_state = 35, .external_tokens = 4},
    [66] = {.lex_state = 32, .external_tokens = 4},
    [67] = {.lex_state = 35, .external_tokens = 4},
    [68] = {.lex_state = 34, .external_tokens = 4},
    [69] = {.lex_state = 23},
    [70] = {.lex_state = 37, .external_tokens = 4},
    [71] = {.lex_state = 23},
    [72] = {.lex_state = 34, .external_tokens = 4},
    [73] = {.lex_state = 34, .external_tokens = 4},
    [74] = {.lex_state = 30},
    [75] = {.lex_state = 31, .external_tokens = 3},
    [76] = {.lex_state = 35, .external_tokens = 4},
    [77] = {.lex_state = 24, .external_tokens = 2},
    [78] = {.lex_state = 23},
    [79] = {.lex_state = 38, .external_tokens = 2},
    [80] = {.lex_state = 23},
    [81] = {.lex_state = 24, .external_tokens = 2},
    [82] = {.lex_state = 24, .external_tokens = 2},
    [83] = {.lex_state = 30},
    [84] = {.lex_state = 31, .external_tokens = 3},
    [85] = {.lex_state = 28, .external_tokens = 2},
    [86] = {.lex_state = 23},
    [87] = {.lex_state = 23},
    [88] = {.lex_state = 23},
    [89] = {.lex_state = 31, .external_tokens = 3},
    [90] = {.lex_state = 23},
    [91] = {.lex_state = 33},
    [92] = {.lex_state = 23},
    [93] = {.lex_state = 0, .external_tokens = 5},
    [94] = {.lex_state = 26, .external_tokens = 5},
    [95] = {.lex_state = 32, .external_tokens = 4},
    [96] = {.lex_state = 28, .external_tokens = 5},
    [97] = {.lex_state = 26, .external_tokens = 5},
    [98] = {.lex_state = 28, .external_tokens = 5},
    [99] = {.lex_state = 28, .external_tokens = 5},
    [100] = {.lex_state = 26, .external_tokens = 5},
    [101] = {.lex_state = 26, .external_tokens = 5},
    [102] = {.lex_state = 28, .external_tokens = 5},
    [103] = {.lex_state = 26, .external_tokens = 5},
    [104] = {.lex_state = 28, .external_tokens = 5},
    [105] = {.lex_state = 0, .external_tokens = 5},
    [106] = {.lex_state = 26, .external_tokens = 5},
    [107] = {.lex_state = 38, .external_tokens = 5},
    [108] = {.lex_state = 28, .external_tokens = 5},
    [109] = {.lex_state = 28, .external_tokens = 5},
    [110] = {.lex_state = 26, .external_tokens = 5},
    [111] = {.lex_state = 23},
    [112] = {.lex_state = 24, .external_tokens = 5},
    [113] = {.lex_state = 23},
    [114] = {.lex_state = 24, .external_tokens = 5},
    [115] = {.lex_state = 28, .external_tokens = 5},
    [116] = {.lex_state = 26, .external_tokens = 5},
    [117] = {.lex_state = 27, .external_tokens = 2},
    [118] = {.lex_state = 26, .external_tokens = 5},
    [119] = {.lex_state = 23},
    [120] = {.lex_state = 31, .external_tokens = 3},
    [121] = {.lex_state = 28, .external_tokens = 5},
    [122] = {.lex_state = 28, .external_tokens = 5},
    [123] = {.lex_state = 29, .external_tokens = 5},
    [124] = {.lex_state = 23},
    [125] = {.lex_state = 29, .external_tokens = 5},
    [126] = {.lex_state = 28, .external_tokens = 5},
    [127] = {.lex_state = 26, .external_tokens = 5},
    [128] = {.lex_state = 24, .external_tokens = 5},
    [129] = {.lex_state = 28, .external_tokens = 5},
    [130] = {.lex_state = 32, .external_tokens = 4},
    [131] = {.lex_state = 0, .external_tokens = 5},
    [132] = {.lex_state = 31, .external_tokens = 3},
    [133] = {.lex_state = 23},
    [134] = {.lex_state = 26, .external_tokens = 5},
    [135] = {.lex_state = 39, .external_tokens = 5},
    [136] = {.lex_state = 23},
    [137] = {.lex_state = 39, .external_tokens = 5},
    [138] = {.lex_state = 40, .external_tokens = 5},
    [139] = {.lex_state = 23},
    [140] = {.lex_state = 23},
    [141] = {.lex_state = 41, .external_tokens = 5},
    [142] = {.lex_state = 23},
    [143] = {.lex_state = 40, .external_tokens = 5},
    [144] = {.lex_state = 40, .external_tokens = 5},
    [145] = {.lex_state = 40, .external_tokens = 5},
    [146] = {.lex_state = 30},
    [147] = {.lex_state = 31, .external_tokens = 3},
    [148] = {.lex_state = 28, .external_tokens = 5},
    [149] = {.lex_state = 30},
    [150] = {.lex_state = 31, .external_tokens = 3},
    [151] = {.lex_state = 28, .external_tokens = 5},
    [152] = {.lex_state = 24, .external_tokens = 5},
    [153] = {.lex_state = 24, .external_tokens = 5},
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
        [sym__statement] = STATE(97),
        [sym__simple_statement] = STATE(98),
        [sym_print_statement] = STATE(99),
        [sym_expression_statement] = STATE(99),
        [sym__compound_statement] = STATE(100),
        [sym_if_statement] = STATE(101),
        [sym_elif_clause] = STATE(102),
        [sym_else_clause] = STATE(103),
        [sym__suite] = STATE(104),
        [sym__expression] = STATE(105),
        [sym_binary_operator] = STATE(93),
        [aux_sym_module_repeat1] = STATE(106),
        [aux_sym_print_statement_repeat1] = STATE(107),
        [aux_sym_if_statement_repeat1] = STATE(108),
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
        [sym__expression] = STATE(77),
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
        [aux_sym_module_repeat1] = STATE(41),
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
        [sym__expression] = STATE(83),
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
        [sym__expression] = STATE(45),
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
        [anon_sym_print] = ACTIONS(51),
        [anon_sym_if] = ACTIONS(51),
        [sym_identifier] = ACTIONS(53),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(49),
    },
    [38] = {
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(171),
    },
    [39] = {
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(65),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(63),
    },
    [40] = {
        [anon_sym_print] = ACTIONS(71),
        [anon_sym_if] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(69),
    },
    [41] = {
        [sym__statement] = STATE(43),
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
        [sym__dedent] = ACTIONS(173),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(175),
    },
    [43] = {
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(89),
    },
    [44] = {
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(101),
    },
    [45] = {
        [anon_sym_COLON] = ACTIONS(181),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [46] = {
        [sym__simple_statement] = STATE(50),
        [sym_print_statement] = STATE(51),
        [sym_expression_statement] = STATE(51),
        [sym__suite] = STATE(52),
        [sym__expression] = STATE(53),
        [sym_binary_operator] = STATE(48),
        [anon_sym_print] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(187),
    },
    [47] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(48),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(21),
    },
    [48] = {
        [anon_sym_print] = ACTIONS(43),
        [anon_sym_COMMA] = ACTIONS(41),
        [anon_sym_if] = ACTIONS(43),
        [anon_sym_elif] = ACTIONS(43),
        [anon_sym_else] = ACTIONS(43),
        [anon_sym_PLUS] = ACTIONS(41),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(41),
    },
    [49] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [aux_sym_module_repeat1] = STATE(66),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(191),
    },
    [50] = {
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(117),
    },
    [51] = {
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(59),
        [anon_sym_elif] = ACTIONS(59),
        [anon_sym_else] = ACTIONS(59),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(57),
    },
    [52] = {
        [sym_elif_clause] = STATE(58),
        [sym_else_clause] = STATE(59),
        [aux_sym_if_statement_repeat1] = STATE(60),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(193),
        [anon_sym_else] = ACTIONS(195),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(123),
    },
    [53] = {
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_elif] = ACTIONS(77),
        [anon_sym_else] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(197),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(75),
    },
    [54] = {
        [sym__expression] = STATE(55),
        [sym_binary_operator] = STATE(48),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(21),
    },
    [55] = {
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(95),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(95),
    },
    [56] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [57] = {
        [anon_sym_COLON] = ACTIONS(199),
        [sym_comment] = ACTIONS(21),
    },
    [58] = {
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(135),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(141),
    },
    [60] = {
        [sym_elif_clause] = STATE(61),
        [sym_else_clause] = STATE(62),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_elif] = ACTIONS(193),
        [anon_sym_else] = ACTIONS(195),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(141),
    },
    [61] = {
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(147),
    },
    [62] = {
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(153),
    },
    [63] = {
        [sym__simple_statement] = STATE(50),
        [sym_print_statement] = STATE(51),
        [sym_expression_statement] = STATE(51),
        [sym__suite] = STATE(64),
        [sym__expression] = STATE(53),
        [sym_binary_operator] = STATE(48),
        [anon_sym_print] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(187),
    },
    [64] = {
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(159),
    },
    [65] = {
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_elif] = ACTIONS(167),
        [anon_sym_else] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(165),
    },
    [66] = {
        [sym__statement] = STATE(43),
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
        [sym__dedent] = ACTIONS(201),
    },
    [67] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(175),
    },
    [68] = {
        [aux_sym_print_statement_repeat1] = STATE(70),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(197),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(209),
    },
    [69] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(48),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(21),
    },
    [70] = {
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(217),
    },
    [71] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(48),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(21),
    },
    [72] = {
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(197),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(221),
    },
    [73] = {
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(197),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(227),
    },
    [74] = {
        [anon_sym_COLON] = ACTIONS(231),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [75] = {
        [sym__simple_statement] = STATE(50),
        [sym_print_statement] = STATE(51),
        [sym_expression_statement] = STATE(51),
        [sym__suite] = STATE(76),
        [sym__expression] = STATE(53),
        [sym_binary_operator] = STATE(48),
        [anon_sym_print] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(187),
    },
    [76] = {
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(237),
    },
    [77] = {
        [aux_sym_print_statement_repeat1] = STATE(79),
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(209),
    },
    [78] = {
        [sym__expression] = STATE(82),
        [sym_binary_operator] = STATE(4),
        [sym_identifier] = ACTIONS(37),
        [sym_comment] = ACTIONS(21),
    },
    [79] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(217),
    },
    [80] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(4),
        [sym_identifier] = ACTIONS(37),
        [sym_comment] = ACTIONS(21),
    },
    [81] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
    },
    [82] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(227),
    },
    [83] = {
        [anon_sym_COLON] = ACTIONS(243),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [84] = {
        [sym__simple_statement] = STATE(24),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__suite] = STATE(85),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [anon_sym_print] = ACTIONS(31),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(111),
    },
    [85] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(237),
    },
    [86] = {
        [sym__expression] = STATE(153),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [87] = {
        [sym__expression] = STATE(152),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [88] = {
        [sym__expression] = STATE(149),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [89] = {
        [sym__simple_statement] = STATE(121),
        [sym_print_statement] = STATE(99),
        [sym_expression_statement] = STATE(99),
        [sym__suite] = STATE(104),
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(93),
        [anon_sym_print] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(251),
    },
    [90] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(18),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(21),
    },
    [91] = {
        [anon_sym_COLON] = ACTIONS(253),
        [sym_comment] = ACTIONS(21),
    },
    [92] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [93] = {
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
    [94] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [95] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [aux_sym_module_repeat1] = STATE(130),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(113),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__dedent] = ACTIONS(258),
    },
    [96] = {
        [ts_builtin_sym_end] = ACTIONS(260),
        [anon_sym_SEMI] = ACTIONS(260),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [sym_identifier] = ACTIONS(266),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(260),
        [sym__dedent] = ACTIONS(260),
    },
    [97] = {
        [ts_builtin_sym_end] = ACTIONS(269),
        [anon_sym_SEMI] = ACTIONS(269),
        [anon_sym_print] = ACTIONS(272),
        [anon_sym_if] = ACTIONS(272),
        [sym_identifier] = ACTIONS(275),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(269),
        [sym__dedent] = ACTIONS(269),
    },
    [98] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(278),
        [sym__dedent] = ACTIONS(117),
    },
    [99] = {
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
    [100] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_SEMI] = ACTIONS(63),
        [anon_sym_print] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(65),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(63),
        [sym__dedent] = ACTIONS(63),
    },
    [101] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [anon_sym_SEMI] = ACTIONS(69),
        [anon_sym_print] = ACTIONS(71),
        [anon_sym_if] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(69),
        [sym__dedent] = ACTIONS(69),
    },
    [102] = {
        [ts_builtin_sym_end] = ACTIONS(281),
        [anon_sym_SEMI] = ACTIONS(281),
        [anon_sym_print] = ACTIONS(284),
        [anon_sym_if] = ACTIONS(284),
        [anon_sym_elif] = ACTIONS(284),
        [anon_sym_else] = ACTIONS(284),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(281),
        [sym__dedent] = ACTIONS(281),
    },
    [103] = {
        [ts_builtin_sym_end] = ACTIONS(290),
        [anon_sym_SEMI] = ACTIONS(290),
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [sym_identifier] = ACTIONS(296),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(290),
        [sym__dedent] = ACTIONS(290),
    },
    [104] = {
        [sym_elif_clause] = STATE(126),
        [sym_else_clause] = STATE(127),
        [aux_sym_if_statement_repeat1] = STATE(108),
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_elif] = ACTIONS(307),
        [anon_sym_else] = ACTIONS(310),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [105] = {
        [aux_sym_print_statement_repeat1] = STATE(107),
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(334),
        [anon_sym_elif] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(337),
        [sym_identifier] = ACTIONS(340),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(317),
        [sym__dedent] = ACTIONS(317),
    },
    [106] = {
        [sym__statement] = STATE(116),
        [sym__simple_statement] = STATE(117),
        [sym_print_statement] = STATE(8),
        [sym_expression_statement] = STATE(8),
        [sym__compound_statement] = STATE(100),
        [sym_if_statement] = STATE(101),
        [sym__expression] = STATE(11),
        [sym_binary_operator] = STATE(4),
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(31),
        [anon_sym_if] = ACTIONS(346),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(85),
        [sym__dedent] = ACTIONS(348),
    },
    [107] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(350),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [108] = {
        [sym_elif_clause] = STATE(109),
        [sym_else_clause] = STATE(110),
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_elif] = ACTIONS(352),
        [anon_sym_else] = ACTIONS(354),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [109] = {
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
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [111] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [112] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(356),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
    [113] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [114] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(358),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [115] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(89),
        [sym__dedent] = ACTIONS(89),
    },
    [117] = {
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(361),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [119] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [120] = {
        [sym__simple_statement] = STATE(121),
        [sym_print_statement] = STATE(99),
        [sym_expression_statement] = STATE(99),
        [sym__suite] = STATE(122),
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(93),
        [anon_sym_print] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(251),
    },
    [121] = {
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
    [122] = {
        [sym_elif_clause] = STATE(126),
        [sym_else_clause] = STATE(127),
        [aux_sym_if_statement_repeat1] = STATE(108),
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(366),
        [anon_sym_if] = ACTIONS(366),
        [anon_sym_elif] = ACTIONS(307),
        [anon_sym_else] = ACTIONS(310),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(363),
        [sym__dedent] = ACTIONS(363),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_elif] = ACTIONS(77),
        [anon_sym_else] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(372),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(75),
        [sym__dedent] = ACTIONS(75),
    },
    [124] = {
        [sym__expression] = STATE(125),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(374),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [126] = {
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
    [127] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [128] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(356),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(227),
        [sym__dedent] = ACTIONS(227),
    },
    [129] = {
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
    [130] = {
        [sym__statement] = STATE(43),
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
        [sym__dedent] = ACTIONS(348),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_COLON] = ACTIONS(95),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(337),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [132] = {
        [sym__simple_statement] = STATE(121),
        [sym_print_statement] = STATE(99),
        [sym_expression_statement] = STATE(99),
        [sym__suite] = STATE(134),
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(93),
        [anon_sym_print] = ACTIONS(377),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(251),
    },
    [133] = {
        [sym__expression] = STATE(138),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [134] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(159),
        [sym__dedent] = ACTIONS(159),
    },
    [135] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(379),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(75),
        [sym__dedent] = ACTIONS(75),
    },
    [136] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [137] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(381),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [138] = {
        [aux_sym_print_statement_repeat1] = STATE(141),
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(384),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [139] = {
        [sym__expression] = STATE(145),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [140] = {
        [sym__expression] = STATE(144),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(388),
        [anon_sym_if] = ACTIONS(211),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [142] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(93),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(21),
    },
    [143] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_PLUS] = ACTIONS(390),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [145] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(227),
        [sym__dedent] = ACTIONS(227),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [147] = {
        [sym__simple_statement] = STATE(121),
        [sym_print_statement] = STATE(99),
        [sym_expression_statement] = STATE(99),
        [sym__suite] = STATE(148),
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(93),
        [anon_sym_print] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(251),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(109),
        [sym_comment] = ACTIONS(21),
    },
    [150] = {
        [sym__simple_statement] = STATE(121),
        [sym_print_statement] = STATE(99),
        [sym_expression_statement] = STATE(99),
        [sym__suite] = STATE(151),
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(93),
        [anon_sym_print] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(21),
        [sym__indent] = ACTIONS(251),
    },
    [151] = {
        [sym_elif_clause] = STATE(126),
        [sym_else_clause] = STATE(127),
        [aux_sym_if_statement_repeat1] = STATE(108),
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(352),
        [anon_sym_else] = ACTIONS(354),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [152] = {
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(400),
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(400),
        [anon_sym_elif] = ACTIONS(400),
        [anon_sym_else] = ACTIONS(400),
        [anon_sym_PLUS] = ACTIONS(356),
        [sym_identifier] = ACTIONS(403),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(397),
        [sym__dedent] = ACTIONS(397),
    },
    [153] = {
        [aux_sym_print_statement_repeat1] = STATE(107),
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(406),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(356),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(21),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(86),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(87),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(88),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(89),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(90),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(91),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(92),
    [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(93),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(94),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(95),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(96),
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
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [255] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [260] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [263] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [266] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [269] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [272] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [275] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [278] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(118),
    [281] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [284] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [287] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
    [293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
    [296] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
    [299] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [303] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [307] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(90),
    [310] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(91),
    [313] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [317] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [323] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [329] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(119),
    [334] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(120),
    [337] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(92),
    [340] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [358] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(113),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [363] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [366] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [369] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4),
    [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [374] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(124),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [381] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(136),
    [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [390] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(140),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [397] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [400] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [403] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
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
