#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 216
#define SYMBOL_COUNT 35
#define TOKEN_COUNT 17
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
    anon_sym_PLUS = 11,
    sym_identifier = 12,
    sym_comment = 13,
    sym__newline = 14,
    sym__indent = 15,
    sym__dedent = 16,
    sym_module = 17,
    sym__statement = 18,
    sym__simple_statement = 19,
    sym_print_statement = 20,
    sym_expression_statement = 21,
    sym__compound_statement = 22,
    sym_if_statement = 23,
    sym_elif_clause = 24,
    sym_else_clause = 25,
    sym_for_statement = 26,
    sym_while_statement = 27,
    sym__suite = 28,
    sym_expression_list = 29,
    sym__expression = 30,
    sym_binary_operator = 31,
    aux_sym_module_repeat1 = 32,
    aux_sym_print_statement_repeat1 = 33,
    aux_sym_if_statement_repeat1 = 34,
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
    [sym__suite] = "_suite",
    [sym_expression_list] = "expression_list",
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(18);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'o')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'r')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_for);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_if);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_in);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'r')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(23);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 't')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_print);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'h')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_while);
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(33);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 35:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(35);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 36:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(36);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 37:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(37);
            if (lookahead == '#')
                ADVANCE(2);
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 40:
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
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(41);
            LEX_ERROR();
        case 41:
            if (lookahead == 'n')
                ADVANCE(42);
            LEX_ERROR();
        case 42:
            ACCEPT_TOKEN(anon_sym_in);
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
            if (lookahead == ':')
                ADVANCE(6);
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
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(21);
            LEX_ERROR();
        case 45:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(45);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(49);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 50:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(50);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 51:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(51);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 52:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(52);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 53:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(53);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 54:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(54);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 55:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(55);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(41);
            LEX_ERROR();
        case 56:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(56);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(41);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 58:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(58);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(41);
            LEX_ERROR();
        case 59:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(59);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(18);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 60:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(60);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        case 64:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(64);
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
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
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
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'p')
                ADVANCE(21);
            if (lookahead == 'w')
                ADVANCE(26);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 31},
    [2] = {.lex_state = 33},
    [3] = {.lex_state = 33},
    [4] = {.lex_state = 33},
    [5] = {.lex_state = 33},
    [6] = {.lex_state = 34, .external_tokens = 2},
    [7] = {.lex_state = 35},
    [8] = {.lex_state = 36, .external_tokens = 2},
    [9] = {.lex_state = 37, .external_tokens = 2},
    [10] = {.lex_state = 38, .external_tokens = 2},
    [11] = {.lex_state = 36, .external_tokens = 2},
    [12] = {.lex_state = 36, .external_tokens = 2},
    [13] = {.lex_state = 39, .external_tokens = 2},
    [14] = {.lex_state = 36, .external_tokens = 2},
    [15] = {.lex_state = 35},
    [16] = {.lex_state = 36, .external_tokens = 2},
    [17] = {.lex_state = 33},
    [18] = {.lex_state = 34, .external_tokens = 2},
    [19] = {.lex_state = 36, .external_tokens = 2},
    [20] = {.lex_state = 40},
    [21] = {.lex_state = 43},
    [22] = {.lex_state = 44, .external_tokens = 3},
    [23] = {.lex_state = 33},
    [24] = {.lex_state = 40},
    [25] = {.lex_state = 45, .external_tokens = 4},
    [26] = {.lex_state = 38, .external_tokens = 2},
    [27] = {.lex_state = 46, .external_tokens = 2},
    [28] = {.lex_state = 49},
    [29] = {.lex_state = 36, .external_tokens = 2},
    [30] = {.lex_state = 44, .external_tokens = 3},
    [31] = {.lex_state = 36, .external_tokens = 2},
    [32] = {.lex_state = 33},
    [33] = {.lex_state = 33},
    [34] = {.lex_state = 33},
    [35] = {.lex_state = 38, .external_tokens = 2},
    [36] = {.lex_state = 45, .external_tokens = 4},
    [37] = {.lex_state = 37, .external_tokens = 2},
    [38] = {.lex_state = 45, .external_tokens = 4},
    [39] = {.lex_state = 45, .external_tokens = 4},
    [40] = {.lex_state = 45, .external_tokens = 4},
    [41] = {.lex_state = 38, .external_tokens = 2},
    [42] = {.lex_state = 45, .external_tokens = 4},
    [43] = {.lex_state = 45, .external_tokens = 4},
    [44] = {.lex_state = 43},
    [45] = {.lex_state = 44, .external_tokens = 3},
    [46] = {.lex_state = 33},
    [47] = {.lex_state = 50, .external_tokens = 4},
    [48] = {.lex_state = 45, .external_tokens = 4},
    [49] = {.lex_state = 51, .external_tokens = 4},
    [50] = {.lex_state = 51, .external_tokens = 4},
    [51] = {.lex_state = 52, .external_tokens = 4},
    [52] = {.lex_state = 53, .external_tokens = 4},
    [53] = {.lex_state = 33},
    [54] = {.lex_state = 50, .external_tokens = 4},
    [55] = {.lex_state = 49},
    [56] = {.lex_state = 45, .external_tokens = 4},
    [57] = {.lex_state = 44, .external_tokens = 3},
    [58] = {.lex_state = 45, .external_tokens = 4},
    [59] = {.lex_state = 51, .external_tokens = 4},
    [60] = {.lex_state = 45, .external_tokens = 4},
    [61] = {.lex_state = 51, .external_tokens = 4},
    [62] = {.lex_state = 50, .external_tokens = 4},
    [63] = {.lex_state = 33},
    [64] = {.lex_state = 54, .external_tokens = 4},
    [65] = {.lex_state = 33},
    [66] = {.lex_state = 50, .external_tokens = 4},
    [67] = {.lex_state = 50, .external_tokens = 4},
    [68] = {.lex_state = 55},
    [69] = {.lex_state = 40},
    [70] = {.lex_state = 33},
    [71] = {.lex_state = 56},
    [72] = {.lex_state = 33},
    [73] = {.lex_state = 40},
    [74] = {.lex_state = 40},
    [75] = {.lex_state = 33},
    [76] = {.lex_state = 49},
    [77] = {.lex_state = 44, .external_tokens = 3},
    [78] = {.lex_state = 52, .external_tokens = 4},
    [79] = {.lex_state = 45, .external_tokens = 4},
    [80] = {.lex_state = 43},
    [81] = {.lex_state = 44, .external_tokens = 3},
    [82] = {.lex_state = 51, .external_tokens = 4},
    [83] = {.lex_state = 33},
    [84] = {.lex_state = 51, .external_tokens = 4},
    [85] = {.lex_state = 45, .external_tokens = 4},
    [86] = {.lex_state = 51, .external_tokens = 4},
    [87] = {.lex_state = 51, .external_tokens = 4},
    [88] = {.lex_state = 45, .external_tokens = 4},
    [89] = {.lex_state = 43},
    [90] = {.lex_state = 44, .external_tokens = 3},
    [91] = {.lex_state = 51, .external_tokens = 4},
    [92] = {.lex_state = 34, .external_tokens = 2},
    [93] = {.lex_state = 33},
    [94] = {.lex_state = 57, .external_tokens = 2},
    [95] = {.lex_state = 33},
    [96] = {.lex_state = 34, .external_tokens = 2},
    [97] = {.lex_state = 34, .external_tokens = 2},
    [98] = {.lex_state = 55},
    [99] = {.lex_state = 33},
    [100] = {.lex_state = 49},
    [101] = {.lex_state = 44, .external_tokens = 3},
    [102] = {.lex_state = 46, .external_tokens = 2},
    [103] = {.lex_state = 36, .external_tokens = 2},
    [104] = {.lex_state = 43},
    [105] = {.lex_state = 44, .external_tokens = 3},
    [106] = {.lex_state = 38, .external_tokens = 2},
    [107] = {.lex_state = 33},
    [108] = {.lex_state = 38, .external_tokens = 2},
    [109] = {.lex_state = 36, .external_tokens = 2},
    [110] = {.lex_state = 38, .external_tokens = 2},
    [111] = {.lex_state = 38, .external_tokens = 2},
    [112] = {.lex_state = 36, .external_tokens = 2},
    [113] = {.lex_state = 43},
    [114] = {.lex_state = 44, .external_tokens = 3},
    [115] = {.lex_state = 38, .external_tokens = 2},
    [116] = {.lex_state = 33},
    [117] = {.lex_state = 33},
    [118] = {.lex_state = 33},
    [119] = {.lex_state = 44, .external_tokens = 3},
    [120] = {.lex_state = 33},
    [121] = {.lex_state = 49},
    [122] = {.lex_state = 33},
    [123] = {.lex_state = 33},
    [124] = {.lex_state = 33},
    [125] = {.lex_state = 33},
    [126] = {.lex_state = 0, .external_tokens = 5},
    [127] = {.lex_state = 36, .external_tokens = 5},
    [128] = {.lex_state = 45, .external_tokens = 4},
    [129] = {.lex_state = 38, .external_tokens = 5},
    [130] = {.lex_state = 36, .external_tokens = 5},
    [131] = {.lex_state = 38, .external_tokens = 5},
    [132] = {.lex_state = 38, .external_tokens = 5},
    [133] = {.lex_state = 36, .external_tokens = 5},
    [134] = {.lex_state = 36, .external_tokens = 5},
    [135] = {.lex_state = 38, .external_tokens = 5},
    [136] = {.lex_state = 36, .external_tokens = 5},
    [137] = {.lex_state = 38, .external_tokens = 5},
    [138] = {.lex_state = 58},
    [139] = {.lex_state = 0, .external_tokens = 5},
    [140] = {.lex_state = 36, .external_tokens = 5},
    [141] = {.lex_state = 59, .external_tokens = 5},
    [142] = {.lex_state = 38, .external_tokens = 5},
    [143] = {.lex_state = 38, .external_tokens = 5},
    [144] = {.lex_state = 36, .external_tokens = 5},
    [145] = {.lex_state = 33},
    [146] = {.lex_state = 0, .external_tokens = 5},
    [147] = {.lex_state = 38, .external_tokens = 5},
    [148] = {.lex_state = 36, .external_tokens = 5},
    [149] = {.lex_state = 37, .external_tokens = 2},
    [150] = {.lex_state = 36, .external_tokens = 5},
    [151] = {.lex_state = 33},
    [152] = {.lex_state = 44, .external_tokens = 3},
    [153] = {.lex_state = 38, .external_tokens = 5},
    [154] = {.lex_state = 38, .external_tokens = 5},
    [155] = {.lex_state = 39, .external_tokens = 5},
    [156] = {.lex_state = 33},
    [157] = {.lex_state = 39, .external_tokens = 5},
    [158] = {.lex_state = 38, .external_tokens = 5},
    [159] = {.lex_state = 36, .external_tokens = 5},
    [160] = {.lex_state = 0, .external_tokens = 5},
    [161] = {.lex_state = 44, .external_tokens = 3},
    [162] = {.lex_state = 33},
    [163] = {.lex_state = 46, .external_tokens = 5},
    [164] = {.lex_state = 60, .external_tokens = 5},
    [165] = {.lex_state = 33},
    [166] = {.lex_state = 60, .external_tokens = 5},
    [167] = {.lex_state = 36, .external_tokens = 5},
    [168] = {.lex_state = 38, .external_tokens = 5},
    [169] = {.lex_state = 45, .external_tokens = 4},
    [170] = {.lex_state = 61, .external_tokens = 5},
    [171] = {.lex_state = 33},
    [172] = {.lex_state = 33},
    [173] = {.lex_state = 62, .external_tokens = 5},
    [174] = {.lex_state = 33},
    [175] = {.lex_state = 61, .external_tokens = 5},
    [176] = {.lex_state = 61, .external_tokens = 5},
    [177] = {.lex_state = 61, .external_tokens = 5},
    [178] = {.lex_state = 36, .external_tokens = 5},
    [179] = {.lex_state = 0, .external_tokens = 5},
    [180] = {.lex_state = 43},
    [181] = {.lex_state = 44, .external_tokens = 3},
    [182] = {.lex_state = 46, .external_tokens = 5},
    [183] = {.lex_state = 36, .external_tokens = 5},
    [184] = {.lex_state = 49},
    [185] = {.lex_state = 55},
    [186] = {.lex_state = 44, .external_tokens = 3},
    [187] = {.lex_state = 33},
    [188] = {.lex_state = 36, .external_tokens = 5},
    [189] = {.lex_state = 63, .external_tokens = 5},
    [190] = {.lex_state = 33},
    [191] = {.lex_state = 63, .external_tokens = 5},
    [192] = {.lex_state = 64, .external_tokens = 5},
    [193] = {.lex_state = 33},
    [194] = {.lex_state = 33},
    [195] = {.lex_state = 65, .external_tokens = 5},
    [196] = {.lex_state = 33},
    [197] = {.lex_state = 64, .external_tokens = 5},
    [198] = {.lex_state = 64, .external_tokens = 5},
    [199] = {.lex_state = 64, .external_tokens = 5},
    [200] = {.lex_state = 43},
    [201] = {.lex_state = 44, .external_tokens = 3},
    [202] = {.lex_state = 38, .external_tokens = 5},
    [203] = {.lex_state = 43},
    [204] = {.lex_state = 44, .external_tokens = 3},
    [205] = {.lex_state = 38, .external_tokens = 5},
    [206] = {.lex_state = 36, .external_tokens = 5},
    [207] = {.lex_state = 0, .external_tokens = 5},
    [208] = {.lex_state = 34, .external_tokens = 5},
    [209] = {.lex_state = 33},
    [210] = {.lex_state = 33},
    [211] = {.lex_state = 57, .external_tokens = 5},
    [212] = {.lex_state = 33},
    [213] = {.lex_state = 34, .external_tokens = 5},
    [214] = {.lex_state = 34, .external_tokens = 5},
    [215] = {.lex_state = 34, .external_tokens = 5},
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
        [sym_module] = STATE(7),
        [sym__statement] = STATE(130),
        [sym__simple_statement] = STATE(131),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__compound_statement] = STATE(133),
        [sym_if_statement] = STATE(134),
        [sym_elif_clause] = STATE(135),
        [sym_else_clause] = STATE(136),
        [sym_for_statement] = STATE(134),
        [sym_while_statement] = STATE(134),
        [sym__suite] = STATE(137),
        [sym_expression_list] = STATE(138),
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(126),
        [aux_sym_module_repeat1] = STATE(140),
        [aux_sym_print_statement_repeat1] = STATE(141),
        [aux_sym_if_statement_repeat1] = STATE(142),
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
        [anon_sym_PLUS] = ACTIONS(23),
        [sym_identifier] = ACTIONS(25),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(29),
        [sym__indent] = ACTIONS(31),
        [sym__dedent] = ACTIONS(33),
    },
    [1] = {
        [sym_module] = STATE(7),
        [sym__statement] = STATE(8),
        [sym__simple_statement] = STATE(9),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(11),
        [sym_if_statement] = STATE(12),
        [sym_for_statement] = STATE(12),
        [sym_while_statement] = STATE(12),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [aux_sym_module_repeat1] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(35),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(39),
        [anon_sym_for] = ACTIONS(41),
        [anon_sym_while] = ACTIONS(43),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
    },
    [2] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(6),
        [sym_identifier] = ACTIONS(47),
        [sym_comment] = ACTIONS(27),
    },
    [3] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [4] = {
        [sym_expression_list] = STATE(98),
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [5] = {
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(51),
        [anon_sym_SEMI] = ACTIONS(51),
        [anon_sym_print] = ACTIONS(53),
        [anon_sym_COMMA] = ACTIONS(51),
        [anon_sym_if] = ACTIONS(53),
        [anon_sym_elif] = ACTIONS(53),
        [anon_sym_else] = ACTIONS(53),
        [anon_sym_for] = ACTIONS(53),
        [anon_sym_while] = ACTIONS(53),
        [anon_sym_PLUS] = ACTIONS(51),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(51),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(57),
        [sym_comment] = ACTIONS(27),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(59),
        [anon_sym_SEMI] = ACTIONS(59),
        [anon_sym_print] = ACTIONS(61),
        [anon_sym_if] = ACTIONS(61),
        [anon_sym_for] = ACTIONS(61),
        [anon_sym_while] = ACTIONS(61),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(59),
    },
    [9] = {
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(65),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_elif] = ACTIONS(69),
        [anon_sym_else] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(67),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_SEMI] = ACTIONS(73),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_if] = ACTIONS(75),
        [anon_sym_for] = ACTIONS(75),
        [anon_sym_while] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(73),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(79),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_elif] = ACTIONS(87),
        [anon_sym_else] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_PLUS] = ACTIONS(89),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(85),
    },
    [14] = {
        [sym__statement] = STATE(16),
        [sym__simple_statement] = STATE(9),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(11),
        [sym_if_statement] = STATE(12),
        [sym_for_statement] = STATE(12),
        [sym_while_statement] = STATE(12),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(39),
        [anon_sym_for] = ACTIONS(41),
        [anon_sym_while] = ACTIONS(43),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(95),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [sym_comment] = ACTIONS(27),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(99),
    },
    [17] = {
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(6),
        [sym_identifier] = ACTIONS(47),
        [sym_comment] = ACTIONS(27),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(111),
    },
    [20] = {
        [anon_sym_COMMA] = ACTIONS(51),
        [anon_sym_COLON] = ACTIONS(51),
        [anon_sym_in] = ACTIONS(51),
        [anon_sym_PLUS] = ACTIONS(51),
        [sym_comment] = ACTIONS(27),
    },
    [21] = {
        [anon_sym_COLON] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [22] = {
        [sym__simple_statement] = STATE(26),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__suite] = STATE(27),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(121),
    },
    [23] = {
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [24] = {
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_COLON] = ACTIONS(105),
        [anon_sym_in] = ACTIONS(105),
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_comment] = ACTIONS(27),
    },
    [25] = {
        [sym__statement] = STATE(36),
        [sym__simple_statement] = STATE(37),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(38),
        [sym_if_statement] = STATE(39),
        [sym_for_statement] = STATE(39),
        [sym_while_statement] = STATE(39),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [aux_sym_module_repeat1] = STATE(40),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(127),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(129),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(133),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(131),
    },
    [27] = {
        [sym_else_clause] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(137),
    },
    [28] = {
        [anon_sym_COLON] = ACTIONS(145),
        [sym_comment] = ACTIONS(27),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(147),
    },
    [30] = {
        [sym__simple_statement] = STATE(26),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__suite] = STATE(31),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(121),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(153),
    },
    [32] = {
        [sym__expression] = STATE(80),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [33] = {
        [sym_expression_list] = STATE(68),
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [34] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_elif] = ACTIONS(161),
        [anon_sym_else] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(161),
        [anon_sym_while] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(159),
    },
    [36] = {
        [anon_sym_print] = ACTIONS(61),
        [anon_sym_if] = ACTIONS(61),
        [anon_sym_for] = ACTIONS(61),
        [anon_sym_while] = ACTIONS(61),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(59),
    },
    [37] = {
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(165),
    },
    [38] = {
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_if] = ACTIONS(75),
        [anon_sym_for] = ACTIONS(75),
        [anon_sym_while] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(73),
    },
    [39] = {
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(79),
    },
    [40] = {
        [sym__statement] = STATE(42),
        [sym__simple_statement] = STATE(37),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(38),
        [sym_if_statement] = STATE(39),
        [sym_for_statement] = STATE(39),
        [sym_while_statement] = STATE(39),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(127),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(167),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(169),
    },
    [42] = {
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(99),
    },
    [43] = {
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(111),
    },
    [44] = {
        [anon_sym_COLON] = ACTIONS(175),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [45] = {
        [sym__simple_statement] = STATE(49),
        [sym_print_statement] = STATE(50),
        [sym_expression_statement] = STATE(50),
        [sym__suite] = STATE(51),
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(47),
        [anon_sym_print] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(181),
    },
    [46] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(47),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(27),
    },
    [47] = {
        [anon_sym_print] = ACTIONS(53),
        [anon_sym_COMMA] = ACTIONS(51),
        [anon_sym_if] = ACTIONS(53),
        [anon_sym_elif] = ACTIONS(53),
        [anon_sym_else] = ACTIONS(53),
        [anon_sym_for] = ACTIONS(53),
        [anon_sym_while] = ACTIONS(53),
        [anon_sym_PLUS] = ACTIONS(51),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(51),
    },
    [48] = {
        [sym__statement] = STATE(36),
        [sym__simple_statement] = STATE(37),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(38),
        [sym_if_statement] = STATE(39),
        [sym_for_statement] = STATE(39),
        [sym_while_statement] = STATE(39),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [aux_sym_module_repeat1] = STATE(60),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(127),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(185),
    },
    [49] = {
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(133),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(131),
    },
    [50] = {
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_elif] = ACTIONS(69),
        [anon_sym_else] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(67),
    },
    [51] = {
        [sym_else_clause] = STATE(56),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(137),
    },
    [52] = {
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_elif] = ACTIONS(87),
        [anon_sym_else] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_PLUS] = ACTIONS(189),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(85),
    },
    [53] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(47),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(27),
    },
    [54] = {
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(105),
    },
    [55] = {
        [anon_sym_COLON] = ACTIONS(191),
        [sym_comment] = ACTIONS(27),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(147),
    },
    [57] = {
        [sym__simple_statement] = STATE(49),
        [sym_print_statement] = STATE(50),
        [sym_expression_statement] = STATE(50),
        [sym__suite] = STATE(58),
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(47),
        [anon_sym_print] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(181),
    },
    [58] = {
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(153),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_elif] = ACTIONS(161),
        [anon_sym_else] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(161),
        [anon_sym_while] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(159),
    },
    [60] = {
        [sym__statement] = STATE(42),
        [sym__simple_statement] = STATE(37),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(38),
        [sym_if_statement] = STATE(39),
        [sym_for_statement] = STATE(39),
        [sym_while_statement] = STATE(39),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(127),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(193),
    },
    [61] = {
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(169),
    },
    [62] = {
        [aux_sym_print_statement_repeat1] = STATE(64),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_elif] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(189),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(201),
    },
    [63] = {
        [sym__expression] = STATE(67),
        [sym_binary_operator] = STATE(47),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(27),
    },
    [64] = {
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(209),
    },
    [65] = {
        [sym__expression] = STATE(66),
        [sym_binary_operator] = STATE(47),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(27),
    },
    [66] = {
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(189),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(213),
    },
    [67] = {
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(189),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(219),
    },
    [68] = {
        [anon_sym_in] = ACTIONS(223),
        [sym_comment] = ACTIONS(27),
    },
    [69] = {
        [aux_sym_print_statement_repeat1] = STATE(71),
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_COLON] = ACTIONS(227),
        [anon_sym_in] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [70] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(231),
        [anon_sym_in] = ACTIONS(231),
        [sym_comment] = ACTIONS(27),
    },
    [72] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_in] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_COLON] = ACTIONS(219),
        [anon_sym_in] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [75] = {
        [sym_expression_list] = STATE(76),
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [76] = {
        [anon_sym_COLON] = ACTIONS(233),
        [sym_comment] = ACTIONS(27),
    },
    [77] = {
        [sym__simple_statement] = STATE(49),
        [sym_print_statement] = STATE(50),
        [sym_expression_statement] = STATE(50),
        [sym__suite] = STATE(78),
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(47),
        [anon_sym_print] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(181),
    },
    [78] = {
        [sym_else_clause] = STATE(79),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(239),
    },
    [79] = {
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(245),
    },
    [80] = {
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [81] = {
        [sym__simple_statement] = STATE(49),
        [sym_print_statement] = STATE(50),
        [sym_expression_statement] = STATE(50),
        [sym__suite] = STATE(82),
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(47),
        [anon_sym_print] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(181),
    },
    [82] = {
        [sym_elif_clause] = STATE(84),
        [sym_else_clause] = STATE(85),
        [aux_sym_if_statement_repeat1] = STATE(86),
        [anon_sym_print] = ACTIONS(249),
        [anon_sym_if] = ACTIONS(249),
        [anon_sym_elif] = ACTIONS(251),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(249),
        [anon_sym_while] = ACTIONS(249),
        [sym_identifier] = ACTIONS(253),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(255),
    },
    [83] = {
        [sym__expression] = STATE(89),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [84] = {
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_while] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(261),
    },
    [85] = {
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(267),
    },
    [86] = {
        [sym_elif_clause] = STATE(87),
        [sym_else_clause] = STATE(88),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(251),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(267),
    },
    [87] = {
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(273),
    },
    [88] = {
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(279),
    },
    [89] = {
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [90] = {
        [sym__simple_statement] = STATE(49),
        [sym_print_statement] = STATE(50),
        [sym_expression_statement] = STATE(50),
        [sym__suite] = STATE(91),
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(47),
        [anon_sym_print] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(181),
    },
    [91] = {
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(287),
    },
    [92] = {
        [aux_sym_print_statement_repeat1] = STATE(94),
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_elif] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(89),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(201),
    },
    [93] = {
        [sym__expression] = STATE(97),
        [sym_binary_operator] = STATE(6),
        [sym_identifier] = ACTIONS(47),
        [sym_comment] = ACTIONS(27),
    },
    [94] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(209),
    },
    [95] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(6),
        [sym_identifier] = ACTIONS(47),
        [sym_comment] = ACTIONS(27),
    },
    [96] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(89),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(213),
    },
    [97] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(89),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(219),
    },
    [98] = {
        [anon_sym_in] = ACTIONS(293),
        [sym_comment] = ACTIONS(27),
    },
    [99] = {
        [sym_expression_list] = STATE(100),
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [100] = {
        [anon_sym_COLON] = ACTIONS(295),
        [sym_comment] = ACTIONS(27),
    },
    [101] = {
        [sym__simple_statement] = STATE(26),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__suite] = STATE(102),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(121),
    },
    [102] = {
        [sym_else_clause] = STATE(103),
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(239),
    },
    [103] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(245),
    },
    [104] = {
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [105] = {
        [sym__simple_statement] = STATE(26),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__suite] = STATE(106),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(121),
    },
    [106] = {
        [sym_elif_clause] = STATE(108),
        [sym_else_clause] = STATE(109),
        [aux_sym_if_statement_repeat1] = STATE(110),
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(249),
        [anon_sym_if] = ACTIONS(249),
        [anon_sym_elif] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(249),
        [anon_sym_while] = ACTIONS(249),
        [sym_identifier] = ACTIONS(253),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(255),
    },
    [107] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [108] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_while] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(261),
    },
    [109] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(267),
    },
    [110] = {
        [sym_elif_clause] = STATE(111),
        [sym_else_clause] = STATE(112),
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(267),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(273),
    },
    [112] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(279),
    },
    [113] = {
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [114] = {
        [sym__simple_statement] = STATE(26),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__suite] = STATE(115),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(121),
    },
    [115] = {
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(287),
    },
    [116] = {
        [sym__expression] = STATE(208),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [117] = {
        [sym__expression] = STATE(207),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [118] = {
        [sym__expression] = STATE(203),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [119] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(137),
        [sym__expression] = STATE(155),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [120] = {
        [sym__expression] = STATE(200),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [121] = {
        [anon_sym_COLON] = ACTIONS(311),
        [sym_comment] = ACTIONS(27),
    },
    [122] = {
        [sym_expression_list] = STATE(185),
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [123] = {
        [sym_expression_list] = STATE(184),
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [124] = {
        [sym__expression] = STATE(180),
        [sym_binary_operator] = STATE(20),
        [sym_identifier] = ACTIONS(49),
        [sym_comment] = ACTIONS(27),
    },
    [125] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [126] = {
        [ts_builtin_sym_end] = ACTIONS(51),
        [anon_sym_SEMI] = ACTIONS(51),
        [anon_sym_print] = ACTIONS(53),
        [anon_sym_COMMA] = ACTIONS(51),
        [anon_sym_if] = ACTIONS(53),
        [anon_sym_COLON] = ACTIONS(51),
        [anon_sym_elif] = ACTIONS(53),
        [anon_sym_else] = ACTIONS(53),
        [anon_sym_for] = ACTIONS(53),
        [anon_sym_in] = ACTIONS(53),
        [anon_sym_while] = ACTIONS(53),
        [anon_sym_PLUS] = ACTIONS(51),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(51),
        [sym__dedent] = ACTIONS(51),
    },
    [127] = {
        [ts_builtin_sym_end] = ACTIONS(313),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(111),
        [sym__dedent] = ACTIONS(111),
    },
    [128] = {
        [sym__statement] = STATE(36),
        [sym__simple_statement] = STATE(37),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(38),
        [sym_if_statement] = STATE(39),
        [sym_for_statement] = STATE(39),
        [sym_while_statement] = STATE(39),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [aux_sym_module_repeat1] = STATE(169),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(127),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(316),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(318),
        [anon_sym_SEMI] = ACTIONS(318),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_elif] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [sym_identifier] = ACTIONS(324),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(318),
        [sym__dedent] = ACTIONS(318),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(327),
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_print] = ACTIONS(330),
        [anon_sym_if] = ACTIONS(330),
        [anon_sym_for] = ACTIONS(330),
        [anon_sym_while] = ACTIONS(330),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(327),
        [sym__dedent] = ACTIONS(327),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(133),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(336),
        [sym__dedent] = ACTIONS(131),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_elif] = ACTIONS(69),
        [anon_sym_else] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(67),
        [sym__dedent] = ACTIONS(67),
    },
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_SEMI] = ACTIONS(73),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_if] = ACTIONS(75),
        [anon_sym_for] = ACTIONS(75),
        [anon_sym_while] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(73),
        [sym__dedent] = ACTIONS(73),
    },
    [134] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [135] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(342),
        [anon_sym_if] = ACTIONS(342),
        [anon_sym_elif] = ACTIONS(342),
        [anon_sym_else] = ACTIONS(342),
        [anon_sym_for] = ACTIONS(342),
        [anon_sym_while] = ACTIONS(342),
        [sym_identifier] = ACTIONS(345),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(339),
        [sym__dedent] = ACTIONS(339),
    },
    [136] = {
        [ts_builtin_sym_end] = ACTIONS(348),
        [anon_sym_SEMI] = ACTIONS(348),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [sym_identifier] = ACTIONS(358),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(348),
        [sym__dedent] = ACTIONS(348),
    },
    [137] = {
        [sym_elif_clause] = STATE(158),
        [sym_else_clause] = STATE(178),
        [aux_sym_if_statement_repeat1] = STATE(142),
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_elif] = ACTIONS(375),
        [anon_sym_else] = ACTIONS(378),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(363),
        [sym__dedent] = ACTIONS(363),
    },
    [138] = {
        [anon_sym_COLON] = ACTIONS(387),
        [anon_sym_in] = ACTIONS(389),
        [sym_comment] = ACTIONS(27),
    },
    [139] = {
        [aux_sym_print_statement_repeat1] = STATE(141),
        [ts_builtin_sym_end] = ACTIONS(391),
        [anon_sym_SEMI] = ACTIONS(391),
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_COLON] = ACTIONS(408),
        [anon_sym_elif] = ACTIONS(397),
        [anon_sym_else] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(414),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_PLUS] = ACTIONS(419),
        [sym_identifier] = ACTIONS(422),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(391),
        [sym__dedent] = ACTIONS(391),
    },
    [140] = {
        [sym__statement] = STATE(148),
        [sym__simple_statement] = STATE(149),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(133),
        [sym_if_statement] = STATE(134),
        [sym_for_statement] = STATE(134),
        [sym_while_statement] = STATE(134),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(428),
        [anon_sym_for] = ACTIONS(430),
        [anon_sym_while] = ACTIONS(432),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(434),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(436),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_COLON] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_in] = ACTIONS(438),
        [anon_sym_while] = ACTIONS(203),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [142] = {
        [sym_elif_clause] = STATE(143),
        [sym_else_clause] = STATE(144),
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(440),
        [anon_sym_else] = ACTIONS(442),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [143] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [145] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_in] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(444),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(213),
        [sym__dedent] = ACTIONS(213),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [149] = {
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(446),
    },
    [150] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(111),
        [sym__dedent] = ACTIONS(111),
    },
    [151] = {
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [152] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(154),
        [sym__expression] = STATE(155),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [153] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(133),
        [anon_sym_else] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(131),
        [sym__dedent] = ACTIONS(131),
    },
    [154] = {
        [sym_elif_clause] = STATE(158),
        [sym_else_clause] = STATE(159),
        [aux_sym_if_statement_repeat1] = STATE(142),
        [ts_builtin_sym_end] = ACTIONS(448),
        [anon_sym_SEMI] = ACTIONS(448),
        [anon_sym_print] = ACTIONS(452),
        [anon_sym_if] = ACTIONS(452),
        [anon_sym_elif] = ACTIONS(375),
        [anon_sym_else] = ACTIONS(378),
        [anon_sym_for] = ACTIONS(452),
        [anon_sym_while] = ACTIONS(452),
        [sym_identifier] = ACTIONS(456),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(448),
        [sym__dedent] = ACTIONS(448),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_elif] = ACTIONS(87),
        [anon_sym_else] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_PLUS] = ACTIONS(460),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(85),
        [sym__dedent] = ACTIONS(85),
    },
    [156] = {
        [sym__expression] = STATE(157),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [157] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(462),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [158] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_while] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(261),
        [sym__dedent] = ACTIONS(261),
    },
    [159] = {
        [ts_builtin_sym_end] = ACTIONS(465),
        [anon_sym_SEMI] = ACTIONS(465),
        [anon_sym_print] = ACTIONS(468),
        [anon_sym_if] = ACTIONS(468),
        [anon_sym_for] = ACTIONS(468),
        [anon_sym_while] = ACTIONS(468),
        [sym_identifier] = ACTIONS(471),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(465),
        [sym__dedent] = ACTIONS(465),
    },
    [160] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_COLON] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_in] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(444),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(219),
        [sym__dedent] = ACTIONS(219),
    },
    [161] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(163),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(474),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [162] = {
        [sym__expression] = STATE(170),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [163] = {
        [sym_else_clause] = STATE(167),
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(442),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_else] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_PLUS] = ACTIONS(476),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(85),
        [sym__dedent] = ACTIONS(85),
    },
    [165] = {
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(478),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [167] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [168] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(161),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_elif] = ACTIONS(161),
        [anon_sym_else] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(161),
        [anon_sym_while] = ACTIONS(161),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(159),
        [sym__dedent] = ACTIONS(159),
    },
    [169] = {
        [sym__statement] = STATE(42),
        [sym__simple_statement] = STATE(37),
        [sym_print_statement] = STATE(10),
        [sym_expression_statement] = STATE(10),
        [sym__compound_statement] = STATE(38),
        [sym_if_statement] = STATE(39),
        [sym_for_statement] = STATE(39),
        [sym_while_statement] = STATE(39),
        [sym__expression] = STATE(13),
        [sym_binary_operator] = STATE(6),
        [anon_sym_print] = ACTIONS(37),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(127),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(27),
        [sym__dedent] = ACTIONS(434),
    },
    [170] = {
        [aux_sym_print_statement_repeat1] = STATE(173),
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(483),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [171] = {
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [172] = {
        [sym__expression] = STATE(176),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [173] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [174] = {
        [sym__expression] = STATE(175),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [175] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(483),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(213),
        [sym__dedent] = ACTIONS(213),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(487),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(483),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(219),
        [sym__dedent] = ACTIONS(219),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(490),
        [anon_sym_SEMI] = ACTIONS(490),
        [anon_sym_print] = ACTIONS(494),
        [anon_sym_if] = ACTIONS(494),
        [anon_sym_for] = ACTIONS(494),
        [anon_sym_while] = ACTIONS(494),
        [sym_identifier] = ACTIONS(498),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(490),
        [sym__dedent] = ACTIONS(490),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_COLON] = ACTIONS(105),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_in] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(419),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [180] = {
        [anon_sym_COLON] = ACTIONS(502),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [181] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(182),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(474),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [182] = {
        [sym_else_clause] = STATE(183),
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(442),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [184] = {
        [anon_sym_COLON] = ACTIONS(387),
        [sym_comment] = ACTIONS(27),
    },
    [185] = {
        [anon_sym_in] = ACTIONS(389),
        [sym_comment] = ACTIONS(27),
    },
    [186] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(188),
        [sym__expression] = STATE(189),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(504),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [187] = {
        [sym__expression] = STATE(192),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [188] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [189] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_SEMI] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(87),
        [anon_sym_PLUS] = ACTIONS(506),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(85),
        [sym__dedent] = ACTIONS(85),
    },
    [190] = {
        [sym__expression] = STATE(191),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [191] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(508),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [192] = {
        [aux_sym_print_statement_repeat1] = STATE(195),
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(511),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(513),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [193] = {
        [sym__expression] = STATE(199),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [194] = {
        [sym__expression] = STATE(198),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [195] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [196] = {
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [197] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(513),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(213),
        [sym__dedent] = ACTIONS(213),
    },
    [198] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(517),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [199] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(513),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(219),
        [sym__dedent] = ACTIONS(219),
    },
    [200] = {
        [anon_sym_COLON] = ACTIONS(520),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [201] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(202),
        [sym__expression] = STATE(155),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [202] = {
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [203] = {
        [anon_sym_COLON] = ACTIONS(522),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_comment] = ACTIONS(27),
    },
    [204] = {
        [sym__simple_statement] = STATE(153),
        [sym_print_statement] = STATE(132),
        [sym_expression_statement] = STATE(132),
        [sym__suite] = STATE(205),
        [sym__expression] = STATE(155),
        [sym_binary_operator] = STATE(126),
        [anon_sym_print] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(27),
        [sym__indent] = ACTIONS(309),
    },
    [205] = {
        [sym_elif_clause] = STATE(158),
        [sym_else_clause] = STATE(206),
        [aux_sym_if_statement_repeat1] = STATE(142),
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(249),
        [anon_sym_if] = ACTIONS(249),
        [anon_sym_elif] = ACTIONS(440),
        [anon_sym_else] = ACTIONS(442),
        [anon_sym_for] = ACTIONS(249),
        [anon_sym_while] = ACTIONS(249),
        [sym_identifier] = ACTIONS(253),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(255),
        [sym__dedent] = ACTIONS(255),
    },
    [206] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [207] = {
        [ts_builtin_sym_end] = ACTIONS(524),
        [anon_sym_SEMI] = ACTIONS(524),
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_COMMA] = ACTIONS(524),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_COLON] = ACTIONS(524),
        [anon_sym_elif] = ACTIONS(527),
        [anon_sym_else] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_in] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_PLUS] = ACTIONS(444),
        [sym_identifier] = ACTIONS(530),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(524),
        [sym__dedent] = ACTIONS(524),
    },
    [208] = {
        [aux_sym_print_statement_repeat1] = STATE(211),
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(533),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_elif] = ACTIONS(195),
        [anon_sym_else] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(535),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [209] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [210] = {
        [sym__expression] = STATE(214),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [211] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [212] = {
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(126),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(27),
    },
    [213] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(535),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(213),
        [sym__dedent] = ACTIONS(213),
    },
    [214] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(539),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(535),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(27),
        [sym__newline] = ACTIONS(219),
        [sym__dedent] = ACTIONS(219),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(116),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(117),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(118),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(119),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(120),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(121),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(122),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(123),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(124),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(125),
    [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(126),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(127),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(128),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(129),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [313] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [318] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [321] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [324] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [327] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [330] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [333] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [336] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(150),
    [339] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [342] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [345] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [348] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [353] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [358] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [363] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_for_statement, 6),
    [369] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_for_statement, 6),
    [375] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(120),
    [378] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(121),
    [381] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_for_statement, 6),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [391] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [397] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [403] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(151),
    [408] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(152),
    [414] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(125),
    [422] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
    [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
    [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
    [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [448] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [452] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [456] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4),
    [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(156),
    [465] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [468] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [471] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
    [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [478] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(165),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [487] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(172),
    [490] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [494] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [498] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
    [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [508] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(190),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [517] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(194),
    [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [524] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [527] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [530] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [539] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(210),
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
