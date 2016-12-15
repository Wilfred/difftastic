#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 182
#define SYMBOL_COUNT 31
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_if = 4,
    anon_sym_COLON = 5,
    anon_sym_elif = 6,
    anon_sym_else = 7,
    anon_sym_while = 8,
    anon_sym_PLUS = 9,
    sym_identifier = 10,
    sym_comment = 11,
    sym__newline = 12,
    sym__indent = 13,
    sym__dedent = 14,
    sym_module = 15,
    sym__statement = 16,
    sym__simple_statement = 17,
    sym_print_statement = 18,
    sym_expression_statement = 19,
    sym__compound_statement = 20,
    sym_if_statement = 21,
    sym_elif_clause = 22,
    sym_else_clause = 23,
    sym_while_statement = 24,
    sym__suite = 25,
    sym__expression = 26,
    sym_binary_operator = 27,
    aux_sym_module_repeat1 = 28,
    aux_sym_print_statement_repeat1 = 29,
    aux_sym_if_statement_repeat1 = 30,
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
    [anon_sym_while] = "while",
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
    [sym_while_statement] = "while_statement",
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
    [anon_sym_while] = {
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
    [sym_while_statement] = {
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
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
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'h')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_while);
        case 27:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(27);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 28:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(28);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 30:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(30);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 31:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(31);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 32:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(32);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 33:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(33);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 34:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(34);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 35:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(35);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 36:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(36);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
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
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(41);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
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
            if (lookahead == ',')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 43:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(43);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 44:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(44);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 45:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(45);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 46:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(46);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 49:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(49);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 50:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(50);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 51:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(51);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(17);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 27},
    [2] = {.lex_state = 28},
    [3] = {.lex_state = 28},
    [4] = {.lex_state = 28},
    [5] = {.lex_state = 29, .external_tokens = 2},
    [6] = {.lex_state = 30},
    [7] = {.lex_state = 31, .external_tokens = 2},
    [8] = {.lex_state = 32, .external_tokens = 2},
    [9] = {.lex_state = 33, .external_tokens = 2},
    [10] = {.lex_state = 31, .external_tokens = 2},
    [11] = {.lex_state = 31, .external_tokens = 2},
    [12] = {.lex_state = 34, .external_tokens = 2},
    [13] = {.lex_state = 31, .external_tokens = 2},
    [14] = {.lex_state = 30},
    [15] = {.lex_state = 31, .external_tokens = 2},
    [16] = {.lex_state = 28},
    [17] = {.lex_state = 29, .external_tokens = 2},
    [18] = {.lex_state = 31, .external_tokens = 2},
    [19] = {.lex_state = 35},
    [20] = {.lex_state = 35},
    [21] = {.lex_state = 36, .external_tokens = 3},
    [22] = {.lex_state = 28},
    [23] = {.lex_state = 35},
    [24] = {.lex_state = 37, .external_tokens = 4},
    [25] = {.lex_state = 33, .external_tokens = 2},
    [26] = {.lex_state = 38, .external_tokens = 2},
    [27] = {.lex_state = 41},
    [28] = {.lex_state = 31, .external_tokens = 2},
    [29] = {.lex_state = 36, .external_tokens = 3},
    [30] = {.lex_state = 31, .external_tokens = 2},
    [31] = {.lex_state = 28},
    [32] = {.lex_state = 28},
    [33] = {.lex_state = 33, .external_tokens = 2},
    [34] = {.lex_state = 37, .external_tokens = 4},
    [35] = {.lex_state = 32, .external_tokens = 2},
    [36] = {.lex_state = 37, .external_tokens = 4},
    [37] = {.lex_state = 37, .external_tokens = 4},
    [38] = {.lex_state = 37, .external_tokens = 4},
    [39] = {.lex_state = 33, .external_tokens = 2},
    [40] = {.lex_state = 37, .external_tokens = 4},
    [41] = {.lex_state = 37, .external_tokens = 4},
    [42] = {.lex_state = 35},
    [43] = {.lex_state = 36, .external_tokens = 3},
    [44] = {.lex_state = 28},
    [45] = {.lex_state = 42, .external_tokens = 4},
    [46] = {.lex_state = 37, .external_tokens = 4},
    [47] = {.lex_state = 43, .external_tokens = 4},
    [48] = {.lex_state = 43, .external_tokens = 4},
    [49] = {.lex_state = 44, .external_tokens = 4},
    [50] = {.lex_state = 45, .external_tokens = 4},
    [51] = {.lex_state = 28},
    [52] = {.lex_state = 42, .external_tokens = 4},
    [53] = {.lex_state = 41},
    [54] = {.lex_state = 37, .external_tokens = 4},
    [55] = {.lex_state = 36, .external_tokens = 3},
    [56] = {.lex_state = 37, .external_tokens = 4},
    [57] = {.lex_state = 43, .external_tokens = 4},
    [58] = {.lex_state = 37, .external_tokens = 4},
    [59] = {.lex_state = 43, .external_tokens = 4},
    [60] = {.lex_state = 42, .external_tokens = 4},
    [61] = {.lex_state = 28},
    [62] = {.lex_state = 46, .external_tokens = 4},
    [63] = {.lex_state = 28},
    [64] = {.lex_state = 42, .external_tokens = 4},
    [65] = {.lex_state = 42, .external_tokens = 4},
    [66] = {.lex_state = 35},
    [67] = {.lex_state = 36, .external_tokens = 3},
    [68] = {.lex_state = 43, .external_tokens = 4},
    [69] = {.lex_state = 28},
    [70] = {.lex_state = 43, .external_tokens = 4},
    [71] = {.lex_state = 37, .external_tokens = 4},
    [72] = {.lex_state = 43, .external_tokens = 4},
    [73] = {.lex_state = 43, .external_tokens = 4},
    [74] = {.lex_state = 37, .external_tokens = 4},
    [75] = {.lex_state = 35},
    [76] = {.lex_state = 36, .external_tokens = 3},
    [77] = {.lex_state = 43, .external_tokens = 4},
    [78] = {.lex_state = 29, .external_tokens = 2},
    [79] = {.lex_state = 28},
    [80] = {.lex_state = 47, .external_tokens = 2},
    [81] = {.lex_state = 28},
    [82] = {.lex_state = 29, .external_tokens = 2},
    [83] = {.lex_state = 29, .external_tokens = 2},
    [84] = {.lex_state = 35},
    [85] = {.lex_state = 36, .external_tokens = 3},
    [86] = {.lex_state = 33, .external_tokens = 2},
    [87] = {.lex_state = 28},
    [88] = {.lex_state = 33, .external_tokens = 2},
    [89] = {.lex_state = 31, .external_tokens = 2},
    [90] = {.lex_state = 33, .external_tokens = 2},
    [91] = {.lex_state = 33, .external_tokens = 2},
    [92] = {.lex_state = 31, .external_tokens = 2},
    [93] = {.lex_state = 35},
    [94] = {.lex_state = 36, .external_tokens = 3},
    [95] = {.lex_state = 33, .external_tokens = 2},
    [96] = {.lex_state = 28},
    [97] = {.lex_state = 28},
    [98] = {.lex_state = 28},
    [99] = {.lex_state = 36, .external_tokens = 3},
    [100] = {.lex_state = 28},
    [101] = {.lex_state = 41},
    [102] = {.lex_state = 28},
    [103] = {.lex_state = 28},
    [104] = {.lex_state = 0, .external_tokens = 5},
    [105] = {.lex_state = 31, .external_tokens = 5},
    [106] = {.lex_state = 37, .external_tokens = 4},
    [107] = {.lex_state = 33, .external_tokens = 5},
    [108] = {.lex_state = 31, .external_tokens = 5},
    [109] = {.lex_state = 33, .external_tokens = 5},
    [110] = {.lex_state = 33, .external_tokens = 5},
    [111] = {.lex_state = 31, .external_tokens = 5},
    [112] = {.lex_state = 31, .external_tokens = 5},
    [113] = {.lex_state = 33, .external_tokens = 5},
    [114] = {.lex_state = 31, .external_tokens = 5},
    [115] = {.lex_state = 33, .external_tokens = 5},
    [116] = {.lex_state = 0, .external_tokens = 5},
    [117] = {.lex_state = 31, .external_tokens = 5},
    [118] = {.lex_state = 47, .external_tokens = 5},
    [119] = {.lex_state = 33, .external_tokens = 5},
    [120] = {.lex_state = 33, .external_tokens = 5},
    [121] = {.lex_state = 31, .external_tokens = 5},
    [122] = {.lex_state = 28},
    [123] = {.lex_state = 29, .external_tokens = 5},
    [124] = {.lex_state = 28},
    [125] = {.lex_state = 29, .external_tokens = 5},
    [126] = {.lex_state = 33, .external_tokens = 5},
    [127] = {.lex_state = 31, .external_tokens = 5},
    [128] = {.lex_state = 32, .external_tokens = 2},
    [129] = {.lex_state = 31, .external_tokens = 5},
    [130] = {.lex_state = 28},
    [131] = {.lex_state = 36, .external_tokens = 3},
    [132] = {.lex_state = 33, .external_tokens = 5},
    [133] = {.lex_state = 33, .external_tokens = 5},
    [134] = {.lex_state = 34, .external_tokens = 5},
    [135] = {.lex_state = 28},
    [136] = {.lex_state = 34, .external_tokens = 5},
    [137] = {.lex_state = 33, .external_tokens = 5},
    [138] = {.lex_state = 31, .external_tokens = 5},
    [139] = {.lex_state = 29, .external_tokens = 5},
    [140] = {.lex_state = 33, .external_tokens = 5},
    [141] = {.lex_state = 37, .external_tokens = 4},
    [142] = {.lex_state = 0, .external_tokens = 5},
    [143] = {.lex_state = 35},
    [144] = {.lex_state = 36, .external_tokens = 3},
    [145] = {.lex_state = 28},
    [146] = {.lex_state = 38, .external_tokens = 5},
    [147] = {.lex_state = 48, .external_tokens = 5},
    [148] = {.lex_state = 28},
    [149] = {.lex_state = 48, .external_tokens = 5},
    [150] = {.lex_state = 31, .external_tokens = 5},
    [151] = {.lex_state = 49, .external_tokens = 5},
    [152] = {.lex_state = 28},
    [153] = {.lex_state = 28},
    [154] = {.lex_state = 50, .external_tokens = 5},
    [155] = {.lex_state = 28},
    [156] = {.lex_state = 49, .external_tokens = 5},
    [157] = {.lex_state = 49, .external_tokens = 5},
    [158] = {.lex_state = 49, .external_tokens = 5},
    [159] = {.lex_state = 36, .external_tokens = 3},
    [160] = {.lex_state = 28},
    [161] = {.lex_state = 31, .external_tokens = 5},
    [162] = {.lex_state = 51, .external_tokens = 5},
    [163] = {.lex_state = 28},
    [164] = {.lex_state = 51, .external_tokens = 5},
    [165] = {.lex_state = 52, .external_tokens = 5},
    [166] = {.lex_state = 28},
    [167] = {.lex_state = 28},
    [168] = {.lex_state = 53, .external_tokens = 5},
    [169] = {.lex_state = 28},
    [170] = {.lex_state = 52, .external_tokens = 5},
    [171] = {.lex_state = 52, .external_tokens = 5},
    [172] = {.lex_state = 52, .external_tokens = 5},
    [173] = {.lex_state = 35},
    [174] = {.lex_state = 36, .external_tokens = 3},
    [175] = {.lex_state = 33, .external_tokens = 5},
    [176] = {.lex_state = 35},
    [177] = {.lex_state = 36, .external_tokens = 3},
    [178] = {.lex_state = 33, .external_tokens = 5},
    [179] = {.lex_state = 31, .external_tokens = 5},
    [180] = {.lex_state = 29, .external_tokens = 5},
    [181] = {.lex_state = 29, .external_tokens = 5},
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
        [sym_module] = STATE(6),
        [sym__statement] = STATE(108),
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__compound_statement] = STATE(111),
        [sym_if_statement] = STATE(112),
        [sym_elif_clause] = STATE(113),
        [sym_else_clause] = STATE(114),
        [sym_while_statement] = STATE(112),
        [sym__suite] = STATE(115),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(104),
        [aux_sym_module_repeat1] = STATE(117),
        [aux_sym_print_statement_repeat1] = STATE(118),
        [aux_sym_if_statement_repeat1] = STATE(119),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_if] = ACTIONS(9),
        [anon_sym_COLON] = ACTIONS(11),
        [anon_sym_elif] = ACTIONS(13),
        [anon_sym_else] = ACTIONS(15),
        [anon_sym_while] = ACTIONS(17),
        [anon_sym_PLUS] = ACTIONS(19),
        [sym_identifier] = ACTIONS(21),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(25),
        [sym__indent] = ACTIONS(27),
        [sym__dedent] = ACTIONS(29),
    },
    [1] = {
        [sym_module] = STATE(6),
        [sym__statement] = STATE(7),
        [sym__simple_statement] = STATE(8),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(10),
        [sym_if_statement] = STATE(11),
        [sym_while_statement] = STATE(11),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [aux_sym_module_repeat1] = STATE(13),
        [ts_builtin_sym_end] = ACTIONS(31),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(35),
        [anon_sym_while] = ACTIONS(37),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
    },
    [2] = {
        [sym__expression] = STATE(78),
        [sym_binary_operator] = STATE(5),
        [sym_identifier] = ACTIONS(41),
        [sym_comment] = ACTIONS(23),
    },
    [3] = {
        [sym__expression] = STATE(84),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [4] = {
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_SEMI] = ACTIONS(45),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_COMMA] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(47),
        [anon_sym_elif] = ACTIONS(47),
        [anon_sym_else] = ACTIONS(47),
        [anon_sym_while] = ACTIONS(47),
        [anon_sym_PLUS] = ACTIONS(45),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(45),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(51),
        [sym_comment] = ACTIONS(23),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(53),
        [anon_sym_SEMI] = ACTIONS(53),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(55),
        [anon_sym_while] = ACTIONS(55),
        [sym_identifier] = ACTIONS(57),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(53),
    },
    [8] = {
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(59),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(61),
        [anon_sym_SEMI] = ACTIONS(61),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_if] = ACTIONS(63),
        [anon_sym_elif] = ACTIONS(63),
        [anon_sym_else] = ACTIONS(63),
        [anon_sym_while] = ACTIONS(63),
        [sym_identifier] = ACTIONS(65),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(61),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(67),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_SEMI] = ACTIONS(73),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_if] = ACTIONS(75),
        [anon_sym_while] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(73),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(79),
    },
    [13] = {
        [sym__statement] = STATE(15),
        [sym__simple_statement] = STATE(8),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(10),
        [sym_if_statement] = STATE(11),
        [sym_while_statement] = STATE(11),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(35),
        [anon_sym_while] = ACTIONS(37),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(89),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [sym_comment] = ACTIONS(23),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(93),
    },
    [16] = {
        [sym__expression] = STATE(17),
        [sym_binary_operator] = STATE(5),
        [sym_identifier] = ACTIONS(41),
        [sym_comment] = ACTIONS(23),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(99),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(105),
    },
    [19] = {
        [anon_sym_COLON] = ACTIONS(45),
        [anon_sym_PLUS] = ACTIONS(45),
        [sym_comment] = ACTIONS(23),
    },
    [20] = {
        [anon_sym_COLON] = ACTIONS(111),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [21] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__suite] = STATE(26),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(115),
    },
    [22] = {
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [23] = {
        [anon_sym_COLON] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(99),
        [sym_comment] = ACTIONS(23),
    },
    [24] = {
        [sym__statement] = STATE(34),
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(36),
        [sym_if_statement] = STATE(37),
        [sym_while_statement] = STATE(37),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [aux_sym_module_repeat1] = STATE(38),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(119),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(121),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(123),
    },
    [26] = {
        [sym_else_clause] = STATE(28),
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(131),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(129),
    },
    [27] = {
        [anon_sym_COLON] = ACTIONS(137),
        [sym_comment] = ACTIONS(23),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(139),
    },
    [29] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__suite] = STATE(30),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(115),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(147),
        [anon_sym_if] = ACTIONS(147),
        [anon_sym_while] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(145),
    },
    [31] = {
        [sym__expression] = STATE(66),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [32] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(151),
    },
    [34] = {
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(55),
        [anon_sym_while] = ACTIONS(55),
        [sym_identifier] = ACTIONS(57),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(53),
    },
    [35] = {
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(157),
    },
    [36] = {
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(67),
    },
    [37] = {
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_if] = ACTIONS(75),
        [anon_sym_while] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(73),
    },
    [38] = {
        [sym__statement] = STATE(40),
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(36),
        [sym_if_statement] = STATE(37),
        [sym_while_statement] = STATE(37),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(119),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(159),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_elif] = ACTIONS(163),
        [anon_sym_else] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(161),
    },
    [40] = {
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(93),
    },
    [41] = {
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(105),
    },
    [42] = {
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [43] = {
        [sym__simple_statement] = STATE(47),
        [sym_print_statement] = STATE(48),
        [sym_expression_statement] = STATE(48),
        [sym__suite] = STATE(49),
        [sym__expression] = STATE(50),
        [sym_binary_operator] = STATE(45),
        [anon_sym_print] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(173),
    },
    [44] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(45),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(23),
    },
    [45] = {
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_COMMA] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(47),
        [anon_sym_elif] = ACTIONS(47),
        [anon_sym_else] = ACTIONS(47),
        [anon_sym_while] = ACTIONS(47),
        [anon_sym_PLUS] = ACTIONS(45),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(45),
    },
    [46] = {
        [sym__statement] = STATE(34),
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(36),
        [sym_if_statement] = STATE(37),
        [sym_while_statement] = STATE(37),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [aux_sym_module_repeat1] = STATE(58),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(119),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(177),
    },
    [47] = {
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(123),
    },
    [48] = {
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_if] = ACTIONS(63),
        [anon_sym_elif] = ACTIONS(63),
        [anon_sym_else] = ACTIONS(63),
        [anon_sym_while] = ACTIONS(63),
        [sym_identifier] = ACTIONS(65),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(61),
    },
    [49] = {
        [sym_else_clause] = STATE(54),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_else] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(131),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(129),
    },
    [50] = {
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(181),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(79),
    },
    [51] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(45),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(23),
    },
    [52] = {
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(99),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(99),
    },
    [53] = {
        [anon_sym_COLON] = ACTIONS(183),
        [sym_comment] = ACTIONS(23),
    },
    [54] = {
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(139),
    },
    [55] = {
        [sym__simple_statement] = STATE(47),
        [sym_print_statement] = STATE(48),
        [sym_expression_statement] = STATE(48),
        [sym__suite] = STATE(56),
        [sym__expression] = STATE(50),
        [sym_binary_operator] = STATE(45),
        [anon_sym_print] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(173),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(147),
        [anon_sym_if] = ACTIONS(147),
        [anon_sym_while] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(145),
    },
    [57] = {
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(151),
    },
    [58] = {
        [sym__statement] = STATE(40),
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(36),
        [sym_if_statement] = STATE(37),
        [sym_while_statement] = STATE(37),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(119),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(185),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_elif] = ACTIONS(163),
        [anon_sym_else] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(161),
    },
    [60] = {
        [aux_sym_print_statement_repeat1] = STATE(62),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_elif] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(181),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(193),
    },
    [61] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(45),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(23),
    },
    [62] = {
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_elif] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(201),
    },
    [63] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(45),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(23),
    },
    [64] = {
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(181),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(205),
    },
    [65] = {
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(181),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(211),
    },
    [66] = {
        [anon_sym_COLON] = ACTIONS(215),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [67] = {
        [sym__simple_statement] = STATE(47),
        [sym_print_statement] = STATE(48),
        [sym_expression_statement] = STATE(48),
        [sym__suite] = STATE(68),
        [sym__expression] = STATE(50),
        [sym_binary_operator] = STATE(45),
        [anon_sym_print] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(173),
    },
    [68] = {
        [sym_elif_clause] = STATE(70),
        [sym_else_clause] = STATE(71),
        [aux_sym_if_statement_repeat1] = STATE(72),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(217),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(223),
    },
    [69] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [70] = {
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(229),
    },
    [71] = {
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(235),
    },
    [72] = {
        [sym_elif_clause] = STATE(73),
        [sym_else_clause] = STATE(74),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(235),
    },
    [73] = {
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(241),
    },
    [74] = {
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(247),
    },
    [75] = {
        [anon_sym_COLON] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [76] = {
        [sym__simple_statement] = STATE(47),
        [sym_print_statement] = STATE(48),
        [sym_expression_statement] = STATE(48),
        [sym__suite] = STATE(77),
        [sym__expression] = STATE(50),
        [sym_binary_operator] = STATE(45),
        [anon_sym_print] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(173),
    },
    [77] = {
        [anon_sym_print] = ACTIONS(251),
        [anon_sym_if] = ACTIONS(251),
        [anon_sym_elif] = ACTIONS(251),
        [anon_sym_else] = ACTIONS(251),
        [anon_sym_while] = ACTIONS(251),
        [sym_identifier] = ACTIONS(253),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(255),
    },
    [78] = {
        [aux_sym_print_statement_repeat1] = STATE(80),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_elif] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(193),
    },
    [79] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(5),
        [sym_identifier] = ACTIONS(41),
        [sym_comment] = ACTIONS(23),
    },
    [80] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_elif] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(201),
    },
    [81] = {
        [sym__expression] = STATE(82),
        [sym_binary_operator] = STATE(5),
        [sym_identifier] = ACTIONS(41),
        [sym_comment] = ACTIONS(23),
    },
    [82] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(205),
    },
    [83] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(211),
    },
    [84] = {
        [anon_sym_COLON] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [85] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__suite] = STATE(86),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(115),
    },
    [86] = {
        [sym_elif_clause] = STATE(88),
        [sym_else_clause] = STATE(89),
        [aux_sym_if_statement_repeat1] = STATE(90),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(217),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(223),
    },
    [87] = {
        [sym__expression] = STATE(93),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [88] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(229),
    },
    [89] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(235),
    },
    [90] = {
        [sym_elif_clause] = STATE(91),
        [sym_else_clause] = STATE(92),
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(235),
    },
    [91] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(241),
    },
    [92] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(247),
    },
    [93] = {
        [anon_sym_COLON] = ACTIONS(265),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [94] = {
        [sym__simple_statement] = STATE(25),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__suite] = STATE(95),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(115),
    },
    [95] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(251),
        [anon_sym_if] = ACTIONS(251),
        [anon_sym_elif] = ACTIONS(251),
        [anon_sym_else] = ACTIONS(251),
        [anon_sym_while] = ACTIONS(251),
        [sym_identifier] = ACTIONS(253),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(255),
    },
    [96] = {
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [97] = {
        [sym__expression] = STATE(180),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [98] = {
        [sym__expression] = STATE(176),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [99] = {
        [sym__simple_statement] = STATE(132),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__suite] = STATE(115),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(104),
        [anon_sym_print] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(273),
    },
    [100] = {
        [sym__expression] = STATE(173),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [101] = {
        [anon_sym_COLON] = ACTIONS(275),
        [sym_comment] = ACTIONS(23),
    },
    [102] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(19),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(23),
    },
    [103] = {
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [104] = {
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_SEMI] = ACTIONS(45),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_COMMA] = ACTIONS(45),
        [anon_sym_if] = ACTIONS(47),
        [anon_sym_COLON] = ACTIONS(45),
        [anon_sym_elif] = ACTIONS(47),
        [anon_sym_else] = ACTIONS(47),
        [anon_sym_while] = ACTIONS(47),
        [anon_sym_PLUS] = ACTIONS(45),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(45),
        [sym__dedent] = ACTIONS(45),
    },
    [105] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [106] = {
        [sym__statement] = STATE(34),
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(36),
        [sym_if_statement] = STATE(37),
        [sym_while_statement] = STATE(37),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [aux_sym_module_repeat1] = STATE(141),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(119),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(280),
    },
    [107] = {
        [ts_builtin_sym_end] = ACTIONS(282),
        [anon_sym_SEMI] = ACTIONS(282),
        [anon_sym_print] = ACTIONS(285),
        [anon_sym_if] = ACTIONS(285),
        [anon_sym_elif] = ACTIONS(285),
        [anon_sym_else] = ACTIONS(285),
        [anon_sym_while] = ACTIONS(285),
        [sym_identifier] = ACTIONS(288),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(282),
        [sym__dedent] = ACTIONS(282),
    },
    [108] = {
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_print] = ACTIONS(294),
        [anon_sym_if] = ACTIONS(294),
        [anon_sym_while] = ACTIONS(294),
        [sym_identifier] = ACTIONS(297),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(291),
        [sym__dedent] = ACTIONS(291),
    },
    [109] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(300),
        [sym__dedent] = ACTIONS(123),
    },
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(61),
        [anon_sym_SEMI] = ACTIONS(61),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_if] = ACTIONS(63),
        [anon_sym_elif] = ACTIONS(63),
        [anon_sym_else] = ACTIONS(63),
        [anon_sym_while] = ACTIONS(63),
        [sym_identifier] = ACTIONS(65),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(61),
        [sym__dedent] = ACTIONS(61),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(67),
        [sym__dedent] = ACTIONS(67),
    },
    [112] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_SEMI] = ACTIONS(73),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_if] = ACTIONS(75),
        [anon_sym_while] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(73),
        [sym__dedent] = ACTIONS(73),
    },
    [113] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(306),
        [anon_sym_if] = ACTIONS(306),
        [anon_sym_elif] = ACTIONS(306),
        [anon_sym_else] = ACTIONS(306),
        [anon_sym_while] = ACTIONS(306),
        [sym_identifier] = ACTIONS(309),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [114] = {
        [ts_builtin_sym_end] = ACTIONS(312),
        [anon_sym_SEMI] = ACTIONS(312),
        [anon_sym_print] = ACTIONS(316),
        [anon_sym_if] = ACTIONS(316),
        [anon_sym_while] = ACTIONS(316),
        [sym_identifier] = ACTIONS(320),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(312),
        [sym__dedent] = ACTIONS(312),
    },
    [115] = {
        [sym_elif_clause] = STATE(137),
        [sym_else_clause] = STATE(138),
        [aux_sym_if_statement_repeat1] = STATE(119),
        [ts_builtin_sym_end] = ACTIONS(324),
        [anon_sym_SEMI] = ACTIONS(324),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_elif] = ACTIONS(334),
        [anon_sym_else] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(329),
        [sym_identifier] = ACTIONS(340),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(324),
        [sym__dedent] = ACTIONS(324),
    },
    [116] = {
        [aux_sym_print_statement_repeat1] = STATE(118),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(351),
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_if] = ACTIONS(351),
        [anon_sym_COLON] = ACTIONS(362),
        [anon_sym_elif] = ACTIONS(351),
        [anon_sym_else] = ACTIONS(351),
        [anon_sym_while] = ACTIONS(351),
        [anon_sym_PLUS] = ACTIONS(365),
        [sym_identifier] = ACTIONS(368),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [117] = {
        [sym__statement] = STATE(127),
        [sym__simple_statement] = STATE(128),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(111),
        [sym_if_statement] = STATE(112),
        [sym_while_statement] = STATE(112),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(374),
        [anon_sym_while] = ACTIONS(376),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(89),
        [sym__dedent] = ACTIONS(378),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(380),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_elif] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [119] = {
        [sym_elif_clause] = STATE(120),
        [sym_else_clause] = STATE(121),
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(382),
        [anon_sym_else] = ACTIONS(384),
        [anon_sym_while] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [120] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [121] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [122] = {
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(205),
        [sym__dedent] = ACTIONS(205),
    },
    [124] = {
        [sym__expression] = STATE(125),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(388),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [126] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_elif] = ACTIONS(163),
        [anon_sym_else] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(161),
        [sym__dedent] = ACTIONS(161),
    },
    [127] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(93),
        [sym__dedent] = ACTIONS(93),
    },
    [128] = {
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(391),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [130] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [131] = {
        [sym__simple_statement] = STATE(132),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__suite] = STATE(133),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(104),
        [anon_sym_print] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(273),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [133] = {
        [sym_elif_clause] = STATE(137),
        [sym_else_clause] = STATE(138),
        [aux_sym_if_statement_repeat1] = STATE(119),
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_elif] = ACTIONS(334),
        [anon_sym_else] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(397),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(393),
        [sym__dedent] = ACTIONS(393),
    },
    [134] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(405),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [135] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [136] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(407),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [137] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [138] = {
        [ts_builtin_sym_end] = ACTIONS(410),
        [anon_sym_SEMI] = ACTIONS(410),
        [anon_sym_print] = ACTIONS(413),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_while] = ACTIONS(413),
        [sym_identifier] = ACTIONS(416),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(410),
        [sym__dedent] = ACTIONS(410),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [141] = {
        [sym__statement] = STATE(40),
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(9),
        [sym_expression_statement] = STATE(9),
        [sym__compound_statement] = STATE(36),
        [sym_if_statement] = STATE(37),
        [sym_while_statement] = STATE(37),
        [sym__expression] = STATE(12),
        [sym_binary_operator] = STATE(5),
        [anon_sym_print] = ACTIONS(33),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(119),
        [sym_identifier] = ACTIONS(39),
        [sym_comment] = ACTIONS(23),
        [sym__dedent] = ACTIONS(378),
    },
    [142] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_COLON] = ACTIONS(99),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(365),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [143] = {
        [anon_sym_COLON] = ACTIONS(419),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [144] = {
        [sym__simple_statement] = STATE(132),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__suite] = STATE(146),
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(104),
        [anon_sym_print] = ACTIONS(421),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(273),
    },
    [145] = {
        [sym__expression] = STATE(151),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [146] = {
        [sym_else_clause] = STATE(150),
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_else] = ACTIONS(384),
        [anon_sym_while] = ACTIONS(131),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(129),
        [sym__dedent] = ACTIONS(129),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(423),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [148] = {
        [sym__expression] = STATE(149),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [149] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(425),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [150] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(139),
        [sym__dedent] = ACTIONS(139),
    },
    [151] = {
        [aux_sym_print_statement_repeat1] = STATE(154),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(428),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(430),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(193),
        [sym__dedent] = ACTIONS(193),
    },
    [152] = {
        [sym__expression] = STATE(158),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [153] = {
        [sym__expression] = STATE(157),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [154] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(432),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [155] = {
        [sym__expression] = STATE(156),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [156] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(430),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(205),
        [sym__dedent] = ACTIONS(205),
    },
    [157] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(434),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [158] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(430),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [159] = {
        [sym__simple_statement] = STATE(132),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__suite] = STATE(161),
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(104),
        [anon_sym_print] = ACTIONS(437),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(273),
    },
    [160] = {
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [161] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(147),
        [anon_sym_if] = ACTIONS(147),
        [anon_sym_while] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(145),
        [sym__dedent] = ACTIONS(145),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(439),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [163] = {
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(441),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [165] = {
        [aux_sym_print_statement_repeat1] = STATE(168),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(444),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(446),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(193),
        [sym__dedent] = ACTIONS(193),
    },
    [166] = {
        [sym__expression] = STATE(172),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [167] = {
        [sym__expression] = STATE(171),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [168] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(448),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [169] = {
        [sym__expression] = STATE(170),
        [sym_binary_operator] = STATE(104),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(23),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(446),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(205),
        [sym__dedent] = ACTIONS(205),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(450),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [172] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(446),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [173] = {
        [anon_sym_COLON] = ACTIONS(453),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [174] = {
        [sym__simple_statement] = STATE(132),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__suite] = STATE(175),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(104),
        [anon_sym_print] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(273),
    },
    [175] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(251),
        [anon_sym_if] = ACTIONS(251),
        [anon_sym_elif] = ACTIONS(251),
        [anon_sym_else] = ACTIONS(251),
        [anon_sym_while] = ACTIONS(251),
        [sym_identifier] = ACTIONS(253),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(255),
        [sym__dedent] = ACTIONS(255),
    },
    [176] = {
        [anon_sym_COLON] = ACTIONS(455),
        [anon_sym_PLUS] = ACTIONS(113),
        [sym_comment] = ACTIONS(23),
    },
    [177] = {
        [sym__simple_statement] = STATE(132),
        [sym_print_statement] = STATE(110),
        [sym_expression_statement] = STATE(110),
        [sym__suite] = STATE(178),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(104),
        [anon_sym_print] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(23),
        [sym__indent] = ACTIONS(273),
    },
    [178] = {
        [sym_elif_clause] = STATE(137),
        [sym_else_clause] = STATE(179),
        [aux_sym_if_statement_repeat1] = STATE(119),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(382),
        [anon_sym_else] = ACTIONS(384),
        [anon_sym_while] = ACTIONS(217),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [180] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_print] = ACTIONS(460),
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_if] = ACTIONS(460),
        [anon_sym_elif] = ACTIONS(460),
        [anon_sym_else] = ACTIONS(460),
        [anon_sym_while] = ACTIONS(460),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(463),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(457),
        [sym__dedent] = ACTIONS(457),
    },
    [181] = {
        [aux_sym_print_statement_repeat1] = STATE(118),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(466),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_elif] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(386),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(23),
        [sym__newline] = ACTIONS(193),
        [sym__dedent] = ACTIONS(193),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(14),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(96),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(97),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(98),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(99),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(100),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(101),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(102),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(103),
    [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(104),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(105),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(106),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
    [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
    [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [277] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [282] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [285] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [288] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [291] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [294] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [297] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [300] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(129),
    [303] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [306] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [309] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [312] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_if_statement, 6),
    [316] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_if_statement, 6),
    [320] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_if_statement, 6),
    [324] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [329] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [334] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(100),
    [337] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(101),
    [340] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [345] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [351] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [357] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(130),
    [362] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(131),
    [365] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(103),
    [368] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
    [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
    [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
    [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [388] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(124),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [393] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [397] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [401] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [407] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(135),
    [410] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [413] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [416] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [425] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(148),
    [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [434] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(153),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [441] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(163),
    [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(167),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [457] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [460] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [463] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
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
