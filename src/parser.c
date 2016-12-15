#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 363
#define SYMBOL_COUNT 47
#define TOKEN_COUNT 22
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
    anon_sym_PLUS = 16,
    sym_identifier = 17,
    sym_comment = 18,
    sym__newline = 19,
    sym__indent = 20,
    sym__dedent = 21,
    sym_module = 22,
    sym__statement = 23,
    sym__simple_statement = 24,
    sym_print_statement = 25,
    sym_expression_statement = 26,
    sym__compound_statement = 27,
    sym_if_statement = 28,
    sym_elif_clause = 29,
    sym_else_clause = 30,
    sym_for_statement = 31,
    sym_while_statement = 32,
    sym_try_statement = 33,
    sym_except_clause = 34,
    sym_finally_clause = 35,
    sym_with_statement = 36,
    sym_with_item = 37,
    sym__suite = 38,
    sym_expression_list = 39,
    sym__expression = 40,
    sym_binary_operator = 41,
    aux_sym_module_repeat1 = 42,
    aux_sym_print_statement_repeat1 = 43,
    aux_sym_if_statement_repeat1 = 44,
    aux_sym_try_statement_repeat1 = 45,
    aux_sym_with_statement_repeat1 = 46,
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
    [sym__suite] = "_suite",
    [sym_expression_list] = "expression_list",
    [sym__expression] = "_expression",
    [sym_binary_operator] = "binary_operator",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
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
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'h')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(47);
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
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 't')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'h')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_with);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'o')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'f')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(53);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            LEX_ERROR();
        case 54:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(54);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 55:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(55);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 61:
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
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'e')
                ADVANCE(64);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 'i')
                ADVANCE(77);
            LEX_ERROR();
        case 62:
            if (lookahead == 's')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            ACCEPT_TOKEN(anon_sym_as);
        case 64:
            if (lookahead == 'x')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            if (lookahead == 'c')
                ADVANCE(66);
            LEX_ERROR();
        case 66:
            if (lookahead == 'e')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 'p')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 't')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            ACCEPT_TOKEN(anon_sym_except);
        case 70:
            if (lookahead == 'i')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            if (lookahead == 'n')
                ADVANCE(72);
            LEX_ERROR();
        case 72:
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            if (lookahead == 'l')
                ADVANCE(74);
            LEX_ERROR();
        case 74:
            if (lookahead == 'l')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            if (lookahead == 'y')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            ACCEPT_TOKEN(anon_sym_finally);
        case 77:
            if (lookahead == 'n')
                ADVANCE(78);
            LEX_ERROR();
        case 78:
            ACCEPT_TOKEN(anon_sym_in);
        case 79:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(79);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 80:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(80);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(62);
            LEX_ERROR();
        case 81:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(81);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(6);
            LEX_ERROR();
        case 82:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(82);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(34);
            LEX_ERROR();
        case 83:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(83);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(52);
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
                ADVANCE(52);
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
                ADVANCE(52);
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
                ADVANCE(52);
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
            if (lookahead == 'e')
                ADVANCE(64);
            if (lookahead == 'f')
                ADVANCE(70);
            LEX_ERROR();
        case 89:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(89);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == 'e')
                ADVANCE(64);
            if (lookahead == 'f')
                ADVANCE(70);
            LEX_ERROR();
        case 90:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(90);
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
                ADVANCE(91);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(92);
            if (lookahead == 'x')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(93);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(6);
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
            if (lookahead == 'e')
                ADVANCE(64);
            if (lookahead == 'f')
                ADVANCE(70);
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
            if (lookahead == 'e')
                ADVANCE(64);
            if (lookahead == 'f')
                ADVANCE(70);
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
                ADVANCE(64);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 'i')
                ADVANCE(77);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(77);
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
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(77);
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
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(77);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
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
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            if (lookahead == 'l')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_identifier);
        case 105:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(105);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(91);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(52);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
            LEX_ERROR();
        case 110:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(110);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(77);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(91);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(91);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(91);
            if (lookahead == 'f')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(39);
            if (lookahead == 'w')
                ADVANCE(42);
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
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(52);
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
    [1] = {.lex_state = 50},
    [2] = {.lex_state = 53},
    [3] = {.lex_state = 53},
    [4] = {.lex_state = 53},
    [5] = {.lex_state = 53},
    [6] = {.lex_state = 54},
    [7] = {.lex_state = 53},
    [8] = {.lex_state = 55, .external_tokens = 2},
    [9] = {.lex_state = 56},
    [10] = {.lex_state = 57, .external_tokens = 2},
    [11] = {.lex_state = 58, .external_tokens = 2},
    [12] = {.lex_state = 59, .external_tokens = 2},
    [13] = {.lex_state = 57, .external_tokens = 2},
    [14] = {.lex_state = 57, .external_tokens = 2},
    [15] = {.lex_state = 60, .external_tokens = 2},
    [16] = {.lex_state = 57, .external_tokens = 2},
    [17] = {.lex_state = 56},
    [18] = {.lex_state = 57, .external_tokens = 2},
    [19] = {.lex_state = 53},
    [20] = {.lex_state = 55, .external_tokens = 2},
    [21] = {.lex_state = 57, .external_tokens = 2},
    [22] = {.lex_state = 61},
    [23] = {.lex_state = 79},
    [24] = {.lex_state = 80},
    [25] = {.lex_state = 53},
    [26] = {.lex_state = 53},
    [27] = {.lex_state = 61},
    [28] = {.lex_state = 81},
    [29] = {.lex_state = 53},
    [30] = {.lex_state = 82, .external_tokens = 3},
    [31] = {.lex_state = 79},
    [32] = {.lex_state = 53},
    [33] = {.lex_state = 82, .external_tokens = 3},
    [34] = {.lex_state = 83, .external_tokens = 4},
    [35] = {.lex_state = 59, .external_tokens = 2},
    [36] = {.lex_state = 57, .external_tokens = 2},
    [37] = {.lex_state = 53},
    [38] = {.lex_state = 53},
    [39] = {.lex_state = 53},
    [40] = {.lex_state = 54},
    [41] = {.lex_state = 53},
    [42] = {.lex_state = 59, .external_tokens = 2},
    [43] = {.lex_state = 83, .external_tokens = 4},
    [44] = {.lex_state = 58, .external_tokens = 2},
    [45] = {.lex_state = 83, .external_tokens = 4},
    [46] = {.lex_state = 83, .external_tokens = 4},
    [47] = {.lex_state = 83, .external_tokens = 4},
    [48] = {.lex_state = 59, .external_tokens = 2},
    [49] = {.lex_state = 83, .external_tokens = 4},
    [50] = {.lex_state = 83, .external_tokens = 4},
    [51] = {.lex_state = 79},
    [52] = {.lex_state = 82, .external_tokens = 3},
    [53] = {.lex_state = 79},
    [54] = {.lex_state = 82, .external_tokens = 3},
    [55] = {.lex_state = 53},
    [56] = {.lex_state = 84, .external_tokens = 4},
    [57] = {.lex_state = 83, .external_tokens = 4},
    [58] = {.lex_state = 85, .external_tokens = 4},
    [59] = {.lex_state = 85, .external_tokens = 4},
    [60] = {.lex_state = 83, .external_tokens = 4},
    [61] = {.lex_state = 86, .external_tokens = 4},
    [62] = {.lex_state = 53},
    [63] = {.lex_state = 84, .external_tokens = 4},
    [64] = {.lex_state = 85, .external_tokens = 4},
    [65] = {.lex_state = 83, .external_tokens = 4},
    [66] = {.lex_state = 85, .external_tokens = 4},
    [67] = {.lex_state = 84, .external_tokens = 4},
    [68] = {.lex_state = 53},
    [69] = {.lex_state = 87, .external_tokens = 4},
    [70] = {.lex_state = 53},
    [71] = {.lex_state = 84, .external_tokens = 4},
    [72] = {.lex_state = 84, .external_tokens = 4},
    [73] = {.lex_state = 83, .external_tokens = 4},
    [74] = {.lex_state = 82, .external_tokens = 3},
    [75] = {.lex_state = 53},
    [76] = {.lex_state = 83, .external_tokens = 4},
    [77] = {.lex_state = 88},
    [78] = {.lex_state = 88},
    [79] = {.lex_state = 88},
    [80] = {.lex_state = 89},
    [81] = {.lex_state = 53},
    [82] = {.lex_state = 54},
    [83] = {.lex_state = 90, .external_tokens = 4},
    [84] = {.lex_state = 83, .external_tokens = 4},
    [85] = {.lex_state = 90, .external_tokens = 4},
    [86] = {.lex_state = 54},
    [87] = {.lex_state = 93, .external_tokens = 4},
    [88] = {.lex_state = 90, .external_tokens = 4},
    [89] = {.lex_state = 83, .external_tokens = 4},
    [90] = {.lex_state = 83, .external_tokens = 4},
    [91] = {.lex_state = 82, .external_tokens = 3},
    [92] = {.lex_state = 93, .external_tokens = 4},
    [93] = {.lex_state = 82, .external_tokens = 3},
    [94] = {.lex_state = 83, .external_tokens = 4},
    [95] = {.lex_state = 80},
    [96] = {.lex_state = 53},
    [97] = {.lex_state = 82, .external_tokens = 3},
    [98] = {.lex_state = 94},
    [99] = {.lex_state = 82, .external_tokens = 3},
    [100] = {.lex_state = 90, .external_tokens = 4},
    [101] = {.lex_state = 90, .external_tokens = 4},
    [102] = {.lex_state = 88},
    [103] = {.lex_state = 83, .external_tokens = 4},
    [104] = {.lex_state = 88},
    [105] = {.lex_state = 95},
    [106] = {.lex_state = 53},
    [107] = {.lex_state = 96},
    [108] = {.lex_state = 53},
    [109] = {.lex_state = 97},
    [110] = {.lex_state = 97},
    [111] = {.lex_state = 94},
    [112] = {.lex_state = 82, .external_tokens = 3},
    [113] = {.lex_state = 98, .external_tokens = 4},
    [114] = {.lex_state = 83, .external_tokens = 4},
    [115] = {.lex_state = 100},
    [116] = {.lex_state = 101},
    [117] = {.lex_state = 102},
    [118] = {.lex_state = 53},
    [119] = {.lex_state = 54},
    [120] = {.lex_state = 82, .external_tokens = 3},
    [121] = {.lex_state = 98, .external_tokens = 4},
    [122] = {.lex_state = 83, .external_tokens = 4},
    [123] = {.lex_state = 94},
    [124] = {.lex_state = 82, .external_tokens = 3},
    [125] = {.lex_state = 103, .external_tokens = 4},
    [126] = {.lex_state = 53},
    [127] = {.lex_state = 103, .external_tokens = 4},
    [128] = {.lex_state = 83, .external_tokens = 4},
    [129] = {.lex_state = 103, .external_tokens = 4},
    [130] = {.lex_state = 103, .external_tokens = 4},
    [131] = {.lex_state = 83, .external_tokens = 4},
    [132] = {.lex_state = 94},
    [133] = {.lex_state = 82, .external_tokens = 3},
    [134] = {.lex_state = 103, .external_tokens = 4},
    [135] = {.lex_state = 55, .external_tokens = 2},
    [136] = {.lex_state = 53},
    [137] = {.lex_state = 105, .external_tokens = 2},
    [138] = {.lex_state = 53},
    [139] = {.lex_state = 55, .external_tokens = 2},
    [140] = {.lex_state = 55, .external_tokens = 2},
    [141] = {.lex_state = 79},
    [142] = {.lex_state = 57, .external_tokens = 2},
    [143] = {.lex_state = 79},
    [144] = {.lex_state = 82, .external_tokens = 3},
    [145] = {.lex_state = 88},
    [146] = {.lex_state = 53},
    [147] = {.lex_state = 54},
    [148] = {.lex_state = 106, .external_tokens = 2},
    [149] = {.lex_state = 57, .external_tokens = 2},
    [150] = {.lex_state = 106, .external_tokens = 2},
    [151] = {.lex_state = 54},
    [152] = {.lex_state = 107, .external_tokens = 2},
    [153] = {.lex_state = 106, .external_tokens = 2},
    [154] = {.lex_state = 57, .external_tokens = 2},
    [155] = {.lex_state = 57, .external_tokens = 2},
    [156] = {.lex_state = 82, .external_tokens = 3},
    [157] = {.lex_state = 107, .external_tokens = 2},
    [158] = {.lex_state = 82, .external_tokens = 3},
    [159] = {.lex_state = 57, .external_tokens = 2},
    [160] = {.lex_state = 80},
    [161] = {.lex_state = 53},
    [162] = {.lex_state = 82, .external_tokens = 3},
    [163] = {.lex_state = 94},
    [164] = {.lex_state = 82, .external_tokens = 3},
    [165] = {.lex_state = 106, .external_tokens = 2},
    [166] = {.lex_state = 106, .external_tokens = 2},
    [167] = {.lex_state = 94},
    [168] = {.lex_state = 82, .external_tokens = 3},
    [169] = {.lex_state = 108, .external_tokens = 2},
    [170] = {.lex_state = 57, .external_tokens = 2},
    [171] = {.lex_state = 100},
    [172] = {.lex_state = 53},
    [173] = {.lex_state = 54},
    [174] = {.lex_state = 82, .external_tokens = 3},
    [175] = {.lex_state = 108, .external_tokens = 2},
    [176] = {.lex_state = 57, .external_tokens = 2},
    [177] = {.lex_state = 94},
    [178] = {.lex_state = 82, .external_tokens = 3},
    [179] = {.lex_state = 109, .external_tokens = 2},
    [180] = {.lex_state = 53},
    [181] = {.lex_state = 109, .external_tokens = 2},
    [182] = {.lex_state = 57, .external_tokens = 2},
    [183] = {.lex_state = 109, .external_tokens = 2},
    [184] = {.lex_state = 109, .external_tokens = 2},
    [185] = {.lex_state = 57, .external_tokens = 2},
    [186] = {.lex_state = 94},
    [187] = {.lex_state = 82, .external_tokens = 3},
    [188] = {.lex_state = 109, .external_tokens = 2},
    [189] = {.lex_state = 53},
    [190] = {.lex_state = 53},
    [191] = {.lex_state = 53},
    [192] = {.lex_state = 82, .external_tokens = 3},
    [193] = {.lex_state = 53},
    [194] = {.lex_state = 54},
    [195] = {.lex_state = 53},
    [196] = {.lex_state = 53},
    [197] = {.lex_state = 53},
    [198] = {.lex_state = 54},
    [199] = {.lex_state = 53},
    [200] = {.lex_state = 53},
    [201] = {.lex_state = 54},
    [202] = {.lex_state = 53},
    [203] = {.lex_state = 53},
    [204] = {.lex_state = 0, .external_tokens = 5},
    [205] = {.lex_state = 57, .external_tokens = 5},
    [206] = {.lex_state = 83, .external_tokens = 4},
    [207] = {.lex_state = 59, .external_tokens = 5},
    [208] = {.lex_state = 57, .external_tokens = 5},
    [209] = {.lex_state = 59, .external_tokens = 5},
    [210] = {.lex_state = 59, .external_tokens = 5},
    [211] = {.lex_state = 57, .external_tokens = 5},
    [212] = {.lex_state = 57, .external_tokens = 5},
    [213] = {.lex_state = 109, .external_tokens = 5},
    [214] = {.lex_state = 107, .external_tokens = 5},
    [215] = {.lex_state = 106, .external_tokens = 5},
    [216] = {.lex_state = 57, .external_tokens = 5},
    [217] = {.lex_state = 79},
    [218] = {.lex_state = 59, .external_tokens = 5},
    [219] = {.lex_state = 110},
    [220] = {.lex_state = 0, .external_tokens = 5},
    [221] = {.lex_state = 57, .external_tokens = 5},
    [222] = {.lex_state = 111, .external_tokens = 5},
    [223] = {.lex_state = 109, .external_tokens = 5},
    [224] = {.lex_state = 106, .external_tokens = 5},
    [225] = {.lex_state = 79},
    [226] = {.lex_state = 82, .external_tokens = 3},
    [227] = {.lex_state = 53},
    [228] = {.lex_state = 59, .external_tokens = 5},
    [229] = {.lex_state = 57, .external_tokens = 5},
    [230] = {.lex_state = 112, .external_tokens = 5},
    [231] = {.lex_state = 53},
    [232] = {.lex_state = 112, .external_tokens = 5},
    [233] = {.lex_state = 59, .external_tokens = 5},
    [234] = {.lex_state = 83, .external_tokens = 4},
    [235] = {.lex_state = 59, .external_tokens = 5},
    [236] = {.lex_state = 113, .external_tokens = 5},
    [237] = {.lex_state = 53},
    [238] = {.lex_state = 53},
    [239] = {.lex_state = 114, .external_tokens = 5},
    [240] = {.lex_state = 53},
    [241] = {.lex_state = 113, .external_tokens = 5},
    [242] = {.lex_state = 113, .external_tokens = 5},
    [243] = {.lex_state = 113, .external_tokens = 5},
    [244] = {.lex_state = 107, .external_tokens = 5},
    [245] = {.lex_state = 106, .external_tokens = 5},
    [246] = {.lex_state = 57, .external_tokens = 5},
    [247] = {.lex_state = 57, .external_tokens = 5},
    [248] = {.lex_state = 54},
    [249] = {.lex_state = 109, .external_tokens = 5},
    [250] = {.lex_state = 57, .external_tokens = 5},
    [251] = {.lex_state = 82, .external_tokens = 3},
    [252] = {.lex_state = 107, .external_tokens = 5},
    [253] = {.lex_state = 53},
    [254] = {.lex_state = 115, .external_tokens = 5},
    [255] = {.lex_state = 53},
    [256] = {.lex_state = 115, .external_tokens = 5},
    [257] = {.lex_state = 57, .external_tokens = 5},
    [258] = {.lex_state = 58, .external_tokens = 2},
    [259] = {.lex_state = 57, .external_tokens = 5},
    [260] = {.lex_state = 53},
    [261] = {.lex_state = 82, .external_tokens = 3},
    [262] = {.lex_state = 59, .external_tokens = 5},
    [263] = {.lex_state = 60, .external_tokens = 5},
    [264] = {.lex_state = 53},
    [265] = {.lex_state = 60, .external_tokens = 5},
    [266] = {.lex_state = 109, .external_tokens = 5},
    [267] = {.lex_state = 57, .external_tokens = 5},
    [268] = {.lex_state = 115, .external_tokens = 5},
    [269] = {.lex_state = 82, .external_tokens = 3},
    [270] = {.lex_state = 53},
    [271] = {.lex_state = 106, .external_tokens = 5},
    [272] = {.lex_state = 116, .external_tokens = 5},
    [273] = {.lex_state = 53},
    [274] = {.lex_state = 116, .external_tokens = 5},
    [275] = {.lex_state = 117, .external_tokens = 5},
    [276] = {.lex_state = 53},
    [277] = {.lex_state = 53},
    [278] = {.lex_state = 118, .external_tokens = 5},
    [279] = {.lex_state = 53},
    [280] = {.lex_state = 117, .external_tokens = 5},
    [281] = {.lex_state = 117, .external_tokens = 5},
    [282] = {.lex_state = 117, .external_tokens = 5},
    [283] = {.lex_state = 82, .external_tokens = 3},
    [284] = {.lex_state = 53},
    [285] = {.lex_state = 108, .external_tokens = 5},
    [286] = {.lex_state = 119, .external_tokens = 5},
    [287] = {.lex_state = 53},
    [288] = {.lex_state = 119, .external_tokens = 5},
    [289] = {.lex_state = 57, .external_tokens = 5},
    [290] = {.lex_state = 120, .external_tokens = 5},
    [291] = {.lex_state = 53},
    [292] = {.lex_state = 53},
    [293] = {.lex_state = 121, .external_tokens = 5},
    [294] = {.lex_state = 53},
    [295] = {.lex_state = 120, .external_tokens = 5},
    [296] = {.lex_state = 120, .external_tokens = 5},
    [297] = {.lex_state = 120, .external_tokens = 5},
    [298] = {.lex_state = 57, .external_tokens = 5},
    [299] = {.lex_state = 106, .external_tokens = 5},
    [300] = {.lex_state = 57, .external_tokens = 5},
    [301] = {.lex_state = 82, .external_tokens = 3},
    [302] = {.lex_state = 57, .external_tokens = 5},
    [303] = {.lex_state = 0, .external_tokens = 5},
    [304] = {.lex_state = 79},
    [305] = {.lex_state = 82, .external_tokens = 3},
    [306] = {.lex_state = 57, .external_tokens = 5},
    [307] = {.lex_state = 81},
    [308] = {.lex_state = 80},
    [309] = {.lex_state = 53},
    [310] = {.lex_state = 82, .external_tokens = 3},
    [311] = {.lex_state = 94},
    [312] = {.lex_state = 106, .external_tokens = 5},
    [313] = {.lex_state = 82, .external_tokens = 3},
    [314] = {.lex_state = 88},
    [315] = {.lex_state = 94},
    [316] = {.lex_state = 82, .external_tokens = 3},
    [317] = {.lex_state = 108, .external_tokens = 5},
    [318] = {.lex_state = 57, .external_tokens = 5},
    [319] = {.lex_state = 54},
    [320] = {.lex_state = 100},
    [321] = {.lex_state = 82, .external_tokens = 3},
    [322] = {.lex_state = 53},
    [323] = {.lex_state = 122, .external_tokens = 5},
    [324] = {.lex_state = 53},
    [325] = {.lex_state = 122, .external_tokens = 5},
    [326] = {.lex_state = 123, .external_tokens = 5},
    [327] = {.lex_state = 53},
    [328] = {.lex_state = 53},
    [329] = {.lex_state = 124, .external_tokens = 5},
    [330] = {.lex_state = 53},
    [331] = {.lex_state = 123, .external_tokens = 5},
    [332] = {.lex_state = 123, .external_tokens = 5},
    [333] = {.lex_state = 123, .external_tokens = 5},
    [334] = {.lex_state = 94},
    [335] = {.lex_state = 82, .external_tokens = 3},
    [336] = {.lex_state = 53},
    [337] = {.lex_state = 109, .external_tokens = 5},
    [338] = {.lex_state = 125, .external_tokens = 5},
    [339] = {.lex_state = 53},
    [340] = {.lex_state = 125, .external_tokens = 5},
    [341] = {.lex_state = 126, .external_tokens = 5},
    [342] = {.lex_state = 53},
    [343] = {.lex_state = 53},
    [344] = {.lex_state = 127, .external_tokens = 5},
    [345] = {.lex_state = 53},
    [346] = {.lex_state = 126, .external_tokens = 5},
    [347] = {.lex_state = 126, .external_tokens = 5},
    [348] = {.lex_state = 126, .external_tokens = 5},
    [349] = {.lex_state = 94},
    [350] = {.lex_state = 82, .external_tokens = 3},
    [351] = {.lex_state = 109, .external_tokens = 5},
    [352] = {.lex_state = 57, .external_tokens = 5},
    [353] = {.lex_state = 79},
    [354] = {.lex_state = 0, .external_tokens = 5},
    [355] = {.lex_state = 55, .external_tokens = 5},
    [356] = {.lex_state = 53},
    [357] = {.lex_state = 53},
    [358] = {.lex_state = 105, .external_tokens = 5},
    [359] = {.lex_state = 53},
    [360] = {.lex_state = 55, .external_tokens = 5},
    [361] = {.lex_state = 55, .external_tokens = 5},
    [362] = {.lex_state = 55, .external_tokens = 5},
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
        [sym_module] = STATE(9),
        [sym__statement] = STATE(208),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__compound_statement] = STATE(211),
        [sym_if_statement] = STATE(212),
        [sym_elif_clause] = STATE(213),
        [sym_else_clause] = STATE(214),
        [sym_for_statement] = STATE(212),
        [sym_while_statement] = STATE(212),
        [sym_try_statement] = STATE(212),
        [sym_except_clause] = STATE(215),
        [sym_finally_clause] = STATE(216),
        [sym_with_statement] = STATE(212),
        [sym_with_item] = STATE(217),
        [sym__suite] = STATE(218),
        [sym_expression_list] = STATE(219),
        [sym__expression] = STATE(220),
        [sym_binary_operator] = STATE(204),
        [aux_sym_module_repeat1] = STATE(221),
        [aux_sym_print_statement_repeat1] = STATE(222),
        [aux_sym_if_statement_repeat1] = STATE(223),
        [aux_sym_try_statement_repeat1] = STATE(224),
        [aux_sym_with_statement_repeat1] = STATE(225),
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
        [anon_sym_PLUS] = ACTIONS(33),
        [sym_identifier] = ACTIONS(35),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(39),
        [sym__indent] = ACTIONS(41),
        [sym__dedent] = ACTIONS(43),
    },
    [1] = {
        [sym_module] = STATE(9),
        [sym__statement] = STATE(10),
        [sym__simple_statement] = STATE(11),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(13),
        [sym_if_statement] = STATE(14),
        [sym_for_statement] = STATE(14),
        [sym_while_statement] = STATE(14),
        [sym_try_statement] = STATE(14),
        [sym_with_statement] = STATE(14),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [aux_sym_module_repeat1] = STATE(16),
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(49),
        [anon_sym_for] = ACTIONS(51),
        [anon_sym_while] = ACTIONS(53),
        [anon_sym_try] = ACTIONS(55),
        [anon_sym_with] = ACTIONS(57),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
    },
    [2] = {
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(8),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(37),
    },
    [3] = {
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [4] = {
        [sym_expression_list] = STATE(171),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [5] = {
        [sym__expression] = STATE(167),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [6] = {
        [anon_sym_COLON] = ACTIONS(65),
        [sym_comment] = ACTIONS(37),
    },
    [7] = {
        [sym_with_item] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_COMMA] = ACTIONS(67),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_elif] = ACTIONS(69),
        [anon_sym_else] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [anon_sym_try] = ACTIONS(69),
        [anon_sym_except] = ACTIONS(69),
        [anon_sym_finally] = ACTIONS(69),
        [anon_sym_with] = ACTIONS(69),
        [anon_sym_PLUS] = ACTIONS(67),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(67),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [sym_comment] = ACTIONS(37),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_for] = ACTIONS(77),
        [anon_sym_while] = ACTIONS(77),
        [anon_sym_try] = ACTIONS(77),
        [anon_sym_with] = ACTIONS(77),
        [sym_identifier] = ACTIONS(79),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(75),
    },
    [11] = {
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(81),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(83),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(91),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(89),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(95),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
    },
    [16] = {
        [sym__statement] = STATE(18),
        [sym__simple_statement] = STATE(11),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(13),
        [sym_if_statement] = STATE(14),
        [sym_for_statement] = STATE(14),
        [sym_while_statement] = STATE(14),
        [sym_try_statement] = STATE(14),
        [sym_with_statement] = STATE(14),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(49),
        [anon_sym_for] = ACTIONS(51),
        [anon_sym_while] = ACTIONS(53),
        [anon_sym_try] = ACTIONS(55),
        [anon_sym_with] = ACTIONS(57),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(111),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [sym_comment] = ACTIONS(37),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(115),
    },
    [19] = {
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(8),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(37),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(127),
    },
    [22] = {
        [anon_sym_COMMA] = ACTIONS(67),
        [anon_sym_COLON] = ACTIONS(67),
        [anon_sym_in] = ACTIONS(67),
        [anon_sym_except] = ACTIONS(67),
        [anon_sym_as] = ACTIONS(67),
        [anon_sym_finally] = ACTIONS(67),
        [anon_sym_PLUS] = ACTIONS(67),
        [sym_comment] = ACTIONS(37),
    },
    [23] = {
        [aux_sym_with_statement_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_COLON] = ACTIONS(135),
        [sym_comment] = ACTIONS(37),
    },
    [24] = {
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [25] = {
        [sym__expression] = STATE(28),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [26] = {
        [sym__expression] = STATE(27),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [27] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_in] = ACTIONS(121),
        [anon_sym_except] = ACTIONS(121),
        [anon_sym_as] = ACTIONS(121),
        [anon_sym_finally] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_comment] = ACTIONS(37),
    },
    [28] = {
        [anon_sym_COMMA] = ACTIONS(143),
        [anon_sym_COLON] = ACTIONS(143),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [29] = {
        [sym_with_item] = STATE(143),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [30] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(142),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [31] = {
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(149),
        [sym_comment] = ACTIONS(37),
    },
    [32] = {
        [sym_with_item] = STATE(141),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [33] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(36),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [34] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [aux_sym_module_repeat1] = STATE(47),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(161),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_elif] = ACTIONS(165),
        [anon_sym_else] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_except] = ACTIONS(165),
        [anon_sym_finally] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(163),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(169),
    },
    [37] = {
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [38] = {
        [sym_expression_list] = STATE(115),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [39] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [40] = {
        [anon_sym_COLON] = ACTIONS(175),
        [sym_comment] = ACTIONS(37),
    },
    [41] = {
        [sym_with_item] = STATE(51),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_elif] = ACTIONS(179),
        [anon_sym_else] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_except] = ACTIONS(179),
        [anon_sym_finally] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(177),
    },
    [43] = {
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_if] = ACTIONS(77),
        [anon_sym_for] = ACTIONS(77),
        [anon_sym_while] = ACTIONS(77),
        [anon_sym_try] = ACTIONS(77),
        [anon_sym_with] = ACTIONS(77),
        [sym_identifier] = ACTIONS(79),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(75),
    },
    [44] = {
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(183),
    },
    [45] = {
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(91),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(89),
    },
    [46] = {
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(95),
    },
    [47] = {
        [sym__statement] = STATE(49),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(185),
    },
    [48] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_elif] = ACTIONS(189),
        [anon_sym_else] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_except] = ACTIONS(189),
        [anon_sym_finally] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(187),
    },
    [49] = {
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(115),
    },
    [50] = {
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(127),
    },
    [51] = {
        [aux_sym_with_statement_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_COLON] = ACTIONS(193),
        [sym_comment] = ACTIONS(37),
    },
    [52] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(73),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(201),
        [sym_comment] = ACTIONS(37),
    },
    [54] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(60),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [55] = {
        [sym__expression] = STATE(67),
        [sym_binary_operator] = STATE(56),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(37),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_COMMA] = ACTIONS(67),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_elif] = ACTIONS(69),
        [anon_sym_else] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [anon_sym_try] = ACTIONS(69),
        [anon_sym_except] = ACTIONS(69),
        [anon_sym_finally] = ACTIONS(69),
        [anon_sym_with] = ACTIONS(69),
        [anon_sym_PLUS] = ACTIONS(67),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(67),
    },
    [57] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [aux_sym_module_repeat1] = STATE(65),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(205),
    },
    [58] = {
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_elif] = ACTIONS(165),
        [anon_sym_else] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_except] = ACTIONS(165),
        [anon_sym_finally] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(163),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(83),
    },
    [60] = {
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(169),
    },
    [61] = {
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(207),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(101),
    },
    [62] = {
        [sym__expression] = STATE(63),
        [sym_binary_operator] = STATE(56),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(37),
    },
    [63] = {
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(121),
    },
    [64] = {
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_elif] = ACTIONS(179),
        [anon_sym_else] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_except] = ACTIONS(179),
        [anon_sym_finally] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(177),
    },
    [65] = {
        [sym__statement] = STATE(49),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(209),
    },
    [66] = {
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_elif] = ACTIONS(189),
        [anon_sym_else] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_except] = ACTIONS(189),
        [anon_sym_finally] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(187),
    },
    [67] = {
        [aux_sym_print_statement_repeat1] = STATE(69),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(207),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(217),
    },
    [68] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(56),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(37),
    },
    [69] = {
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(225),
    },
    [70] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(56),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(37),
    },
    [71] = {
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(207),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(229),
    },
    [72] = {
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
        [anon_sym_PLUS] = ACTIONS(207),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(235),
    },
    [73] = {
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(243),
    },
    [74] = {
        [sym__simple_statement] = STATE(77),
        [sym_print_statement] = STATE(78),
        [sym_expression_statement] = STATE(78),
        [sym__suite] = STATE(79),
        [sym__expression] = STATE(80),
        [sym_binary_operator] = STATE(22),
        [anon_sym_print] = ACTIONS(245),
        [sym_identifier] = ACTIONS(247),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(249),
    },
    [75] = {
        [sym__expression] = STATE(105),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [76] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [aux_sym_module_repeat1] = STATE(103),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(251),
    },
    [77] = {
        [anon_sym_except] = ACTIONS(163),
        [anon_sym_finally] = ACTIONS(163),
        [sym_comment] = ACTIONS(37),
    },
    [78] = {
        [anon_sym_except] = ACTIONS(83),
        [anon_sym_finally] = ACTIONS(83),
        [sym_comment] = ACTIONS(37),
    },
    [79] = {
        [sym_except_clause] = STATE(83),
        [sym_finally_clause] = STATE(84),
        [aux_sym_try_statement_repeat1] = STATE(85),
        [anon_sym_except] = ACTIONS(253),
        [anon_sym_finally] = ACTIONS(255),
        [sym_comment] = ACTIONS(37),
    },
    [80] = {
        [anon_sym_except] = ACTIONS(101),
        [anon_sym_finally] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [81] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [82] = {
        [anon_sym_COLON] = ACTIONS(257),
        [sym_comment] = ACTIONS(37),
    },
    [83] = {
        [anon_sym_print] = ACTIONS(259),
        [anon_sym_if] = ACTIONS(259),
        [anon_sym_else] = ACTIONS(259),
        [anon_sym_for] = ACTIONS(259),
        [anon_sym_while] = ACTIONS(259),
        [anon_sym_try] = ACTIONS(259),
        [anon_sym_except] = ACTIONS(259),
        [anon_sym_finally] = ACTIONS(259),
        [anon_sym_with] = ACTIONS(259),
        [sym_identifier] = ACTIONS(261),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(263),
    },
    [84] = {
        [anon_sym_print] = ACTIONS(265),
        [anon_sym_if] = ACTIONS(265),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_while] = ACTIONS(265),
        [anon_sym_try] = ACTIONS(265),
        [anon_sym_with] = ACTIONS(265),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(269),
    },
    [85] = {
        [sym_else_clause] = STATE(87),
        [sym_except_clause] = STATE(88),
        [sym_finally_clause] = STATE(89),
        [anon_sym_print] = ACTIONS(265),
        [anon_sym_if] = ACTIONS(265),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_while] = ACTIONS(265),
        [anon_sym_try] = ACTIONS(265),
        [anon_sym_except] = ACTIONS(273),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(265),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(269),
    },
    [86] = {
        [anon_sym_COLON] = ACTIONS(277),
        [sym_comment] = ACTIONS(37),
    },
    [87] = {
        [sym_finally_clause] = STATE(90),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(283),
    },
    [88] = {
        [anon_sym_print] = ACTIONS(285),
        [anon_sym_if] = ACTIONS(285),
        [anon_sym_else] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_while] = ACTIONS(285),
        [anon_sym_try] = ACTIONS(285),
        [anon_sym_except] = ACTIONS(285),
        [anon_sym_finally] = ACTIONS(285),
        [anon_sym_with] = ACTIONS(285),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(289),
    },
    [89] = {
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(283),
    },
    [90] = {
        [anon_sym_print] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_while] = ACTIONS(291),
        [anon_sym_try] = ACTIONS(291),
        [anon_sym_with] = ACTIONS(291),
        [sym_identifier] = ACTIONS(293),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(295),
    },
    [91] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(92),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [92] = {
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(301),
    },
    [93] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(94),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [94] = {
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_with] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(307),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_COLON] = ACTIONS(311),
        [anon_sym_as] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [96] = {
        [sym__expression] = STATE(98),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [97] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(101),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [98] = {
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [99] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(100),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [100] = {
        [anon_sym_print] = ACTIONS(315),
        [anon_sym_if] = ACTIONS(315),
        [anon_sym_else] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_while] = ACTIONS(315),
        [anon_sym_try] = ACTIONS(315),
        [anon_sym_except] = ACTIONS(315),
        [anon_sym_finally] = ACTIONS(315),
        [anon_sym_with] = ACTIONS(315),
        [sym_identifier] = ACTIONS(317),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(319),
    },
    [101] = {
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(325),
    },
    [102] = {
        [anon_sym_except] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(177),
        [sym_comment] = ACTIONS(37),
    },
    [103] = {
        [sym__statement] = STATE(49),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(327),
    },
    [104] = {
        [anon_sym_except] = ACTIONS(187),
        [anon_sym_finally] = ACTIONS(187),
        [sym_comment] = ACTIONS(37),
    },
    [105] = {
        [aux_sym_print_statement_repeat1] = STATE(107),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [106] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [sym_comment] = ACTIONS(37),
    },
    [108] = {
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_in] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [111] = {
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [112] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(113),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [113] = {
        [sym_else_clause] = STATE(114),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(339),
    },
    [114] = {
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(345),
    },
    [115] = {
        [anon_sym_in] = ACTIONS(347),
        [sym_comment] = ACTIONS(37),
    },
    [116] = {
        [aux_sym_print_statement_repeat1] = STATE(117),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(351),
        [anon_sym_in] = ACTIONS(351),
        [sym_comment] = ACTIONS(37),
    },
    [118] = {
        [sym_expression_list] = STATE(119),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [119] = {
        [anon_sym_COLON] = ACTIONS(353),
        [sym_comment] = ACTIONS(37),
    },
    [120] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(121),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [121] = {
        [sym_else_clause] = STATE(122),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [sym_identifier] = ACTIONS(357),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(359),
    },
    [122] = {
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_if] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(361),
        [anon_sym_try] = ACTIONS(361),
        [anon_sym_with] = ACTIONS(361),
        [sym_identifier] = ACTIONS(363),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(365),
    },
    [123] = {
        [anon_sym_COLON] = ACTIONS(367),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [124] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(125),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [125] = {
        [sym_elif_clause] = STATE(127),
        [sym_else_clause] = STATE(128),
        [aux_sym_if_statement_repeat1] = STATE(129),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_elif] = ACTIONS(371),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [anon_sym_try] = ACTIONS(369),
        [anon_sym_with] = ACTIONS(369),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(375),
    },
    [126] = {
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [127] = {
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(381),
    },
    [128] = {
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(387),
    },
    [129] = {
        [sym_elif_clause] = STATE(130),
        [sym_else_clause] = STATE(131),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_elif] = ACTIONS(371),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(387),
    },
    [130] = {
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_elif] = ACTIONS(389),
        [anon_sym_else] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(393),
    },
    [131] = {
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(399),
    },
    [132] = {
        [anon_sym_COLON] = ACTIONS(401),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [133] = {
        [sym__simple_statement] = STATE(58),
        [sym_print_statement] = STATE(59),
        [sym_expression_statement] = STATE(59),
        [sym__suite] = STATE(134),
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(56),
        [anon_sym_print] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(199),
    },
    [134] = {
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [sym_identifier] = ACTIONS(405),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(407),
    },
    [135] = {
        [aux_sym_print_statement_repeat1] = STATE(137),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
    },
    [136] = {
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(8),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(37),
    },
    [137] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
    },
    [138] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(8),
        [sym_identifier] = ACTIONS(61),
        [sym_comment] = ACTIONS(37),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
    },
    [140] = {
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
        [anon_sym_PLUS] = ACTIONS(105),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
    },
    [141] = {
        [anon_sym_COMMA] = ACTIONS(413),
        [anon_sym_COLON] = ACTIONS(413),
        [sym_comment] = ACTIONS(37),
    },
    [142] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(243),
    },
    [143] = {
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_COLON] = ACTIONS(415),
        [sym_comment] = ACTIONS(37),
    },
    [144] = {
        [sym__simple_statement] = STATE(77),
        [sym_print_statement] = STATE(78),
        [sym_expression_statement] = STATE(78),
        [sym__suite] = STATE(145),
        [sym__expression] = STATE(80),
        [sym_binary_operator] = STATE(22),
        [anon_sym_print] = ACTIONS(245),
        [sym_identifier] = ACTIONS(247),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(249),
    },
    [145] = {
        [sym_except_clause] = STATE(148),
        [sym_finally_clause] = STATE(149),
        [aux_sym_try_statement_repeat1] = STATE(150),
        [anon_sym_except] = ACTIONS(417),
        [anon_sym_finally] = ACTIONS(419),
        [sym_comment] = ACTIONS(37),
    },
    [146] = {
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [147] = {
        [anon_sym_COLON] = ACTIONS(421),
        [sym_comment] = ACTIONS(37),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(263),
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_print] = ACTIONS(259),
        [anon_sym_if] = ACTIONS(259),
        [anon_sym_else] = ACTIONS(259),
        [anon_sym_for] = ACTIONS(259),
        [anon_sym_while] = ACTIONS(259),
        [anon_sym_try] = ACTIONS(259),
        [anon_sym_except] = ACTIONS(259),
        [anon_sym_finally] = ACTIONS(259),
        [anon_sym_with] = ACTIONS(259),
        [sym_identifier] = ACTIONS(261),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(263),
    },
    [149] = {
        [ts_builtin_sym_end] = ACTIONS(269),
        [anon_sym_SEMI] = ACTIONS(269),
        [anon_sym_print] = ACTIONS(265),
        [anon_sym_if] = ACTIONS(265),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_while] = ACTIONS(265),
        [anon_sym_try] = ACTIONS(265),
        [anon_sym_with] = ACTIONS(265),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(269),
    },
    [150] = {
        [sym_else_clause] = STATE(152),
        [sym_except_clause] = STATE(153),
        [sym_finally_clause] = STATE(154),
        [ts_builtin_sym_end] = ACTIONS(269),
        [anon_sym_SEMI] = ACTIONS(269),
        [anon_sym_print] = ACTIONS(265),
        [anon_sym_if] = ACTIONS(265),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_while] = ACTIONS(265),
        [anon_sym_try] = ACTIONS(265),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(265),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(269),
    },
    [151] = {
        [anon_sym_COLON] = ACTIONS(429),
        [sym_comment] = ACTIONS(37),
    },
    [152] = {
        [sym_finally_clause] = STATE(155),
        [ts_builtin_sym_end] = ACTIONS(283),
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(283),
    },
    [153] = {
        [ts_builtin_sym_end] = ACTIONS(289),
        [anon_sym_SEMI] = ACTIONS(289),
        [anon_sym_print] = ACTIONS(285),
        [anon_sym_if] = ACTIONS(285),
        [anon_sym_else] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_while] = ACTIONS(285),
        [anon_sym_try] = ACTIONS(285),
        [anon_sym_except] = ACTIONS(285),
        [anon_sym_finally] = ACTIONS(285),
        [anon_sym_with] = ACTIONS(285),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(289),
    },
    [154] = {
        [ts_builtin_sym_end] = ACTIONS(283),
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(283),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(295),
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_print] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_while] = ACTIONS(291),
        [anon_sym_try] = ACTIONS(291),
        [anon_sym_with] = ACTIONS(291),
        [sym_identifier] = ACTIONS(293),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(295),
    },
    [156] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(157),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [157] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(301),
    },
    [158] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(159),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [159] = {
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_with] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(307),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_COLON] = ACTIONS(433),
        [anon_sym_as] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [161] = {
        [sym__expression] = STATE(163),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [162] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(166),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [163] = {
        [anon_sym_COLON] = ACTIONS(435),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [164] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(165),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [165] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(315),
        [anon_sym_if] = ACTIONS(315),
        [anon_sym_else] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_while] = ACTIONS(315),
        [anon_sym_try] = ACTIONS(315),
        [anon_sym_except] = ACTIONS(315),
        [anon_sym_finally] = ACTIONS(315),
        [anon_sym_with] = ACTIONS(315),
        [sym_identifier] = ACTIONS(317),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(319),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(325),
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(325),
    },
    [167] = {
        [anon_sym_COLON] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [168] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(169),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [169] = {
        [sym_else_clause] = STATE(170),
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(339),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(345),
    },
    [171] = {
        [anon_sym_in] = ACTIONS(439),
        [sym_comment] = ACTIONS(37),
    },
    [172] = {
        [sym_expression_list] = STATE(173),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [173] = {
        [anon_sym_COLON] = ACTIONS(441),
        [sym_comment] = ACTIONS(37),
    },
    [174] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(175),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [175] = {
        [sym_else_clause] = STATE(176),
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [sym_identifier] = ACTIONS(357),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(359),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(365),
        [anon_sym_SEMI] = ACTIONS(365),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_if] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(361),
        [anon_sym_try] = ACTIONS(361),
        [anon_sym_with] = ACTIONS(361),
        [sym_identifier] = ACTIONS(363),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(365),
    },
    [177] = {
        [anon_sym_COLON] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [178] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(179),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [179] = {
        [sym_elif_clause] = STATE(181),
        [sym_else_clause] = STATE(182),
        [aux_sym_if_statement_repeat1] = STATE(183),
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_elif] = ACTIONS(445),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [anon_sym_try] = ACTIONS(369),
        [anon_sym_with] = ACTIONS(369),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(375),
    },
    [180] = {
        [sym__expression] = STATE(186),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [181] = {
        [ts_builtin_sym_end] = ACTIONS(381),
        [anon_sym_SEMI] = ACTIONS(381),
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(381),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(387),
    },
    [183] = {
        [sym_elif_clause] = STATE(184),
        [sym_else_clause] = STATE(185),
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_elif] = ACTIONS(445),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(387),
    },
    [184] = {
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_elif] = ACTIONS(389),
        [anon_sym_else] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(393),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(399),
    },
    [186] = {
        [anon_sym_COLON] = ACTIONS(447),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [187] = {
        [sym__simple_statement] = STATE(35),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__suite] = STATE(188),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(145),
    },
    [188] = {
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [sym_identifier] = ACTIONS(405),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(407),
    },
    [189] = {
        [sym__expression] = STATE(355),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [190] = {
        [sym_with_item] = STATE(353),
        [sym__expression] = STATE(354),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [191] = {
        [sym__expression] = STATE(349),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [192] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(218),
        [sym__expression] = STATE(263),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(451),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [193] = {
        [sym__expression] = STATE(334),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [194] = {
        [anon_sym_COLON] = ACTIONS(457),
        [sym_comment] = ACTIONS(37),
    },
    [195] = {
        [sym_expression_list] = STATE(320),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [196] = {
        [sym_expression_list] = STATE(319),
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [197] = {
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [198] = {
        [anon_sym_COLON] = ACTIONS(459),
        [sym_comment] = ACTIONS(37),
    },
    [199] = {
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [200] = {
        [sym__expression] = STATE(307),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(461),
        [sym_comment] = ACTIONS(37),
    },
    [202] = {
        [sym_with_item] = STATE(304),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [203] = {
        [sym__expression] = STATE(303),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [204] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_print] = ACTIONS(69),
        [anon_sym_COMMA] = ACTIONS(67),
        [anon_sym_if] = ACTIONS(69),
        [anon_sym_COLON] = ACTIONS(67),
        [anon_sym_elif] = ACTIONS(69),
        [anon_sym_else] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_in] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(69),
        [anon_sym_try] = ACTIONS(69),
        [anon_sym_except] = ACTIONS(69),
        [anon_sym_as] = ACTIONS(69),
        [anon_sym_finally] = ACTIONS(69),
        [anon_sym_with] = ACTIONS(69),
        [anon_sym_PLUS] = ACTIONS(67),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(67),
        [sym__dedent] = ACTIONS(67),
    },
    [205] = {
        [ts_builtin_sym_end] = ACTIONS(463),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [206] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [aux_sym_module_repeat1] = STATE(234),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(466),
    },
    [207] = {
        [ts_builtin_sym_end] = ACTIONS(468),
        [anon_sym_SEMI] = ACTIONS(468),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_if] = ACTIONS(471),
        [anon_sym_elif] = ACTIONS(471),
        [anon_sym_else] = ACTIONS(471),
        [anon_sym_for] = ACTIONS(471),
        [anon_sym_while] = ACTIONS(471),
        [anon_sym_try] = ACTIONS(471),
        [anon_sym_except] = ACTIONS(471),
        [anon_sym_finally] = ACTIONS(471),
        [anon_sym_with] = ACTIONS(471),
        [sym_identifier] = ACTIONS(474),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(468),
        [sym__dedent] = ACTIONS(468),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(477),
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_print] = ACTIONS(480),
        [anon_sym_if] = ACTIONS(480),
        [anon_sym_for] = ACTIONS(480),
        [anon_sym_while] = ACTIONS(480),
        [anon_sym_try] = ACTIONS(480),
        [anon_sym_with] = ACTIONS(480),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(477),
        [sym__dedent] = ACTIONS(477),
    },
    [209] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_elif] = ACTIONS(165),
        [anon_sym_else] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_except] = ACTIONS(165),
        [anon_sym_finally] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(486),
        [sym__dedent] = ACTIONS(163),
    },
    [210] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(83),
        [sym__dedent] = ACTIONS(83),
    },
    [211] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(91),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(89),
        [sym__dedent] = ACTIONS(89),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [213] = {
        [ts_builtin_sym_end] = ACTIONS(489),
        [anon_sym_SEMI] = ACTIONS(489),
        [anon_sym_print] = ACTIONS(492),
        [anon_sym_if] = ACTIONS(492),
        [anon_sym_elif] = ACTIONS(492),
        [anon_sym_else] = ACTIONS(492),
        [anon_sym_for] = ACTIONS(492),
        [anon_sym_while] = ACTIONS(492),
        [anon_sym_try] = ACTIONS(492),
        [anon_sym_with] = ACTIONS(492),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(489),
        [sym__dedent] = ACTIONS(489),
    },
    [214] = {
        [sym_finally_clause] = STATE(247),
        [ts_builtin_sym_end] = ACTIONS(498),
        [anon_sym_SEMI] = ACTIONS(498),
        [anon_sym_print] = ACTIONS(504),
        [anon_sym_if] = ACTIONS(504),
        [anon_sym_for] = ACTIONS(504),
        [anon_sym_while] = ACTIONS(504),
        [anon_sym_try] = ACTIONS(504),
        [anon_sym_finally] = ACTIONS(510),
        [anon_sym_with] = ACTIONS(504),
        [sym_identifier] = ACTIONS(512),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(498),
        [sym__dedent] = ACTIONS(498),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(518),
        [anon_sym_SEMI] = ACTIONS(518),
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_else] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_except] = ACTIONS(521),
        [anon_sym_finally] = ACTIONS(521),
        [anon_sym_with] = ACTIONS(521),
        [sym_identifier] = ACTIONS(524),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(518),
        [sym__dedent] = ACTIONS(518),
    },
    [216] = {
        [ts_builtin_sym_end] = ACTIONS(527),
        [anon_sym_SEMI] = ACTIONS(527),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [sym_identifier] = ACTIONS(535),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(527),
        [sym__dedent] = ACTIONS(527),
    },
    [217] = {
        [aux_sym_with_statement_repeat1] = STATE(225),
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_COLON] = ACTIONS(543),
        [sym_comment] = ACTIONS(37),
    },
    [218] = {
        [sym_elif_clause] = STATE(266),
        [sym_else_clause] = STATE(298),
        [sym_except_clause] = STATE(299),
        [sym_finally_clause] = STATE(300),
        [aux_sym_if_statement_repeat1] = STATE(223),
        [aux_sym_try_statement_repeat1] = STATE(224),
        [ts_builtin_sym_end] = ACTIONS(547),
        [anon_sym_SEMI] = ACTIONS(547),
        [anon_sym_print] = ACTIONS(558),
        [anon_sym_if] = ACTIONS(558),
        [anon_sym_elif] = ACTIONS(569),
        [anon_sym_else] = ACTIONS(572),
        [anon_sym_for] = ACTIONS(558),
        [anon_sym_while] = ACTIONS(558),
        [anon_sym_try] = ACTIONS(558),
        [anon_sym_except] = ACTIONS(577),
        [anon_sym_finally] = ACTIONS(581),
        [anon_sym_with] = ACTIONS(558),
        [sym_identifier] = ACTIONS(586),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(547),
        [sym__dedent] = ACTIONS(547),
    },
    [219] = {
        [anon_sym_COLON] = ACTIONS(597),
        [anon_sym_in] = ACTIONS(599),
        [sym_comment] = ACTIONS(37),
    },
    [220] = {
        [aux_sym_print_statement_repeat1] = STATE(222),
        [ts_builtin_sym_end] = ACTIONS(601),
        [anon_sym_SEMI] = ACTIONS(601),
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_COLON] = ACTIONS(620),
        [anon_sym_elif] = ACTIONS(607),
        [anon_sym_else] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_in] = ACTIONS(628),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_except] = ACTIONS(607),
        [anon_sym_as] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_PLUS] = ACTIONS(636),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(601),
        [sym__dedent] = ACTIONS(601),
    },
    [221] = {
        [sym__statement] = STATE(257),
        [sym__simple_statement] = STATE(258),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(211),
        [sym_if_statement] = STATE(212),
        [sym_for_statement] = STATE(212),
        [sym_while_statement] = STATE(212),
        [sym_try_statement] = STATE(212),
        [sym_with_statement] = STATE(212),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_for] = ACTIONS(647),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(653),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(111),
        [sym__dedent] = ACTIONS(655),
    },
    [222] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(657),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_COLON] = ACTIONS(351),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_in] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [223] = {
        [sym_elif_clause] = STATE(249),
        [sym_else_clause] = STATE(250),
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_elif] = ACTIONS(661),
        [anon_sym_else] = ACTIONS(663),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(387),
        [sym__dedent] = ACTIONS(387),
    },
    [224] = {
        [sym_else_clause] = STATE(244),
        [sym_except_clause] = STATE(245),
        [sym_finally_clause] = STATE(246),
        [ts_builtin_sym_end] = ACTIONS(269),
        [anon_sym_SEMI] = ACTIONS(269),
        [anon_sym_print] = ACTIONS(265),
        [anon_sym_if] = ACTIONS(265),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_while] = ACTIONS(265),
        [anon_sym_try] = ACTIONS(265),
        [anon_sym_except] = ACTIONS(667),
        [anon_sym_finally] = ACTIONS(510),
        [anon_sym_with] = ACTIONS(265),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(269),
        [sym__dedent] = ACTIONS(269),
    },
    [225] = {
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(669),
        [sym_comment] = ACTIONS(37),
    },
    [226] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(229),
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(671),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [227] = {
        [sym__expression] = STATE(236),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [228] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_elif] = ACTIONS(165),
        [anon_sym_else] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_except] = ACTIONS(165),
        [anon_sym_finally] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(163),
        [sym__dedent] = ACTIONS(163),
    },
    [229] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [230] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(673),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [231] = {
        [sym__expression] = STATE(232),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [232] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(675),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [233] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_elif] = ACTIONS(179),
        [anon_sym_else] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_except] = ACTIONS(179),
        [anon_sym_finally] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [234] = {
        [sym__statement] = STATE(49),
        [sym__simple_statement] = STATE(44),
        [sym_print_statement] = STATE(12),
        [sym_expression_statement] = STATE(12),
        [sym__compound_statement] = STATE(45),
        [sym_if_statement] = STATE(46),
        [sym_for_statement] = STATE(46),
        [sym_while_statement] = STATE(46),
        [sym_try_statement] = STATE(46),
        [sym_with_statement] = STATE(46),
        [sym__expression] = STATE(15),
        [sym_binary_operator] = STATE(8),
        [anon_sym_print] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(159),
        [sym_identifier] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
        [sym__dedent] = ACTIONS(655),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_elif] = ACTIONS(189),
        [anon_sym_else] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_except] = ACTIONS(189),
        [anon_sym_finally] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [236] = {
        [aux_sym_print_statement_repeat1] = STATE(239),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(678),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(680),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [237] = {
        [sym__expression] = STATE(243),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [238] = {
        [sym__expression] = STATE(242),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(682),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [240] = {
        [sym__expression] = STATE(241),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(680),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(684),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [243] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(680),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [244] = {
        [sym_finally_clause] = STATE(247),
        [ts_builtin_sym_end] = ACTIONS(283),
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(510),
        [anon_sym_with] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(283),
        [sym__dedent] = ACTIONS(283),
    },
    [245] = {
        [ts_builtin_sym_end] = ACTIONS(289),
        [anon_sym_SEMI] = ACTIONS(289),
        [anon_sym_print] = ACTIONS(285),
        [anon_sym_if] = ACTIONS(285),
        [anon_sym_else] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_while] = ACTIONS(285),
        [anon_sym_try] = ACTIONS(285),
        [anon_sym_except] = ACTIONS(285),
        [anon_sym_finally] = ACTIONS(285),
        [anon_sym_with] = ACTIONS(285),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(289),
        [sym__dedent] = ACTIONS(289),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(283),
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(283),
        [sym__dedent] = ACTIONS(283),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(295),
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_print] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_while] = ACTIONS(291),
        [anon_sym_try] = ACTIONS(291),
        [anon_sym_with] = ACTIONS(291),
        [sym_identifier] = ACTIONS(293),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(295),
        [sym__dedent] = ACTIONS(295),
    },
    [248] = {
        [anon_sym_COLON] = ACTIONS(687),
        [sym_comment] = ACTIONS(37),
    },
    [249] = {
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_elif] = ACTIONS(389),
        [anon_sym_else] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(393),
        [sym__dedent] = ACTIONS(393),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(399),
        [sym__dedent] = ACTIONS(399),
    },
    [251] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(252),
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(671),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [252] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [253] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_in] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(689),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [255] = {
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [256] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_in] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(691),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [258] = {
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(694),
    },
    [259] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [260] = {
        [sym__expression] = STATE(268),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [261] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(262),
        [sym__expression] = STATE(263),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(451),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [262] = {
        [sym_elif_clause] = STATE(266),
        [sym_else_clause] = STATE(267),
        [aux_sym_if_statement_repeat1] = STATE(223),
        [ts_builtin_sym_end] = ACTIONS(696),
        [anon_sym_SEMI] = ACTIONS(696),
        [anon_sym_print] = ACTIONS(702),
        [anon_sym_if] = ACTIONS(702),
        [anon_sym_elif] = ACTIONS(569),
        [anon_sym_else] = ACTIONS(572),
        [anon_sym_for] = ACTIONS(702),
        [anon_sym_while] = ACTIONS(702),
        [anon_sym_try] = ACTIONS(702),
        [anon_sym_except] = ACTIONS(708),
        [anon_sym_finally] = ACTIONS(708),
        [anon_sym_with] = ACTIONS(702),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(696),
        [sym__dedent] = ACTIONS(696),
    },
    [263] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(717),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [264] = {
        [sym__expression] = STATE(265),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [265] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(719),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [266] = {
        [ts_builtin_sym_end] = ACTIONS(381),
        [anon_sym_SEMI] = ACTIONS(381),
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(381),
        [sym__dedent] = ACTIONS(381),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(722),
        [anon_sym_SEMI] = ACTIONS(722),
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_for] = ACTIONS(725),
        [anon_sym_while] = ACTIONS(725),
        [anon_sym_try] = ACTIONS(725),
        [anon_sym_with] = ACTIONS(725),
        [sym_identifier] = ACTIONS(728),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(722),
        [sym__dedent] = ACTIONS(722),
    },
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(731),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(689),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [269] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(271),
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(734),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [270] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [271] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(315),
        [anon_sym_if] = ACTIONS(315),
        [anon_sym_else] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_while] = ACTIONS(315),
        [anon_sym_try] = ACTIONS(315),
        [anon_sym_except] = ACTIONS(315),
        [anon_sym_finally] = ACTIONS(315),
        [anon_sym_with] = ACTIONS(315),
        [sym_identifier] = ACTIONS(317),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(319),
        [sym__dedent] = ACTIONS(319),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(736),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [273] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(738),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [275] = {
        [aux_sym_print_statement_repeat1] = STATE(278),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(743),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [276] = {
        [sym__expression] = STATE(282),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [277] = {
        [sym__expression] = STATE(281),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [279] = {
        [sym__expression] = STATE(280),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [280] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(743),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(747),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [282] = {
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
        [anon_sym_PLUS] = ACTIONS(743),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [283] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(285),
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(750),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [284] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [285] = {
        [sym_else_clause] = STATE(289),
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(663),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [sym_identifier] = ACTIONS(357),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(359),
        [sym__dedent] = ACTIONS(359),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(752),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [287] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(754),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [289] = {
        [ts_builtin_sym_end] = ACTIONS(365),
        [anon_sym_SEMI] = ACTIONS(365),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_if] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(361),
        [anon_sym_try] = ACTIONS(361),
        [anon_sym_with] = ACTIONS(361),
        [sym_identifier] = ACTIONS(363),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(365),
        [sym__dedent] = ACTIONS(365),
    },
    [290] = {
        [aux_sym_print_statement_repeat1] = STATE(293),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(759),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [291] = {
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [292] = {
        [sym__expression] = STATE(296),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [293] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(761),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [294] = {
        [sym__expression] = STATE(295),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [295] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(759),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(763),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [297] = {
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
        [anon_sym_PLUS] = ACTIONS(759),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [298] = {
        [ts_builtin_sym_end] = ACTIONS(766),
        [anon_sym_SEMI] = ACTIONS(766),
        [anon_sym_print] = ACTIONS(770),
        [anon_sym_if] = ACTIONS(770),
        [anon_sym_for] = ACTIONS(770),
        [anon_sym_while] = ACTIONS(770),
        [anon_sym_try] = ACTIONS(770),
        [anon_sym_with] = ACTIONS(770),
        [sym_identifier] = ACTIONS(774),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(766),
        [sym__dedent] = ACTIONS(766),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(263),
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_print] = ACTIONS(259),
        [anon_sym_if] = ACTIONS(259),
        [anon_sym_else] = ACTIONS(259),
        [anon_sym_for] = ACTIONS(259),
        [anon_sym_while] = ACTIONS(259),
        [anon_sym_try] = ACTIONS(259),
        [anon_sym_except] = ACTIONS(259),
        [anon_sym_finally] = ACTIONS(259),
        [anon_sym_with] = ACTIONS(259),
        [sym_identifier] = ACTIONS(261),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(263),
        [sym__dedent] = ACTIONS(263),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(269),
        [anon_sym_SEMI] = ACTIONS(269),
        [anon_sym_print] = ACTIONS(265),
        [anon_sym_if] = ACTIONS(265),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_while] = ACTIONS(265),
        [anon_sym_try] = ACTIONS(265),
        [anon_sym_with] = ACTIONS(265),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(269),
        [sym__dedent] = ACTIONS(269),
    },
    [301] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(302),
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(671),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
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
        [anon_sym_PLUS] = ACTIONS(636),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [304] = {
        [aux_sym_with_statement_repeat1] = STATE(225),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_COLON] = ACTIONS(778),
        [sym_comment] = ACTIONS(37),
    },
    [305] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(306),
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(671),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_with] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(307),
        [sym__dedent] = ACTIONS(307),
    },
    [307] = {
        [anon_sym_COMMA] = ACTIONS(143),
        [anon_sym_COLON] = ACTIONS(780),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [308] = {
        [anon_sym_COMMA] = ACTIONS(783),
        [anon_sym_COLON] = ACTIONS(785),
        [anon_sym_as] = ACTIONS(783),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [309] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(22),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [310] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(312),
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(734),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [311] = {
        [anon_sym_COLON] = ACTIONS(787),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(325),
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(325),
        [sym__dedent] = ACTIONS(325),
    },
    [313] = {
        [sym__simple_statement] = STATE(77),
        [sym_print_statement] = STATE(78),
        [sym_expression_statement] = STATE(78),
        [sym__suite] = STATE(314),
        [sym__expression] = STATE(80),
        [sym_binary_operator] = STATE(22),
        [anon_sym_print] = ACTIONS(245),
        [sym_identifier] = ACTIONS(247),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(249),
    },
    [314] = {
        [sym_except_clause] = STATE(299),
        [sym_finally_clause] = STATE(300),
        [aux_sym_try_statement_repeat1] = STATE(224),
        [anon_sym_except] = ACTIONS(789),
        [anon_sym_finally] = ACTIONS(791),
        [sym_comment] = ACTIONS(37),
    },
    [315] = {
        [anon_sym_COLON] = ACTIONS(793),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [316] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(317),
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(750),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [317] = {
        [sym_else_clause] = STATE(318),
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(663),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(339),
        [sym__dedent] = ACTIONS(339),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [319] = {
        [anon_sym_COLON] = ACTIONS(597),
        [sym_comment] = ACTIONS(37),
    },
    [320] = {
        [anon_sym_in] = ACTIONS(599),
        [sym_comment] = ACTIONS(37),
    },
    [321] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(252),
        [sym__expression] = STATE(323),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(795),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [322] = {
        [sym__expression] = STATE(326),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [323] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(797),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [324] = {
        [sym__expression] = STATE(325),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(799),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [326] = {
        [aux_sym_print_statement_repeat1] = STATE(329),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(802),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(804),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [327] = {
        [sym__expression] = STATE(333),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [328] = {
        [sym__expression] = STATE(332),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [329] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(806),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [330] = {
        [sym__expression] = STATE(331),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [331] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(804),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [332] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(808),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [333] = {
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
        [anon_sym_PLUS] = ACTIONS(804),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [334] = {
        [anon_sym_COLON] = ACTIONS(811),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [335] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(337),
        [sym__expression] = STATE(338),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(813),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [336] = {
        [sym__expression] = STATE(341),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [sym_identifier] = ACTIONS(405),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [338] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(815),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [339] = {
        [sym__expression] = STATE(340),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(817),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [341] = {
        [aux_sym_print_statement_repeat1] = STATE(344),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(820),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(822),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [342] = {
        [sym__expression] = STATE(348),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [343] = {
        [sym__expression] = STATE(347),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(824),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [345] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(822),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(826),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [348] = {
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
        [anon_sym_PLUS] = ACTIONS(822),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [349] = {
        [anon_sym_COLON] = ACTIONS(829),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_comment] = ACTIONS(37),
    },
    [350] = {
        [sym__simple_statement] = STATE(228),
        [sym_print_statement] = STATE(210),
        [sym_expression_statement] = STATE(210),
        [sym__suite] = STATE(351),
        [sym__expression] = STATE(338),
        [sym_binary_operator] = STATE(204),
        [anon_sym_print] = ACTIONS(813),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(37),
        [sym__indent] = ACTIONS(455),
    },
    [351] = {
        [sym_elif_clause] = STATE(266),
        [sym_else_clause] = STATE(352),
        [aux_sym_if_statement_repeat1] = STATE(223),
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_elif] = ACTIONS(661),
        [anon_sym_else] = ACTIONS(663),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [anon_sym_try] = ACTIONS(369),
        [anon_sym_with] = ACTIONS(369),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(375),
        [sym__dedent] = ACTIONS(375),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(387),
        [sym__dedent] = ACTIONS(387),
    },
    [353] = {
        [anon_sym_COMMA] = ACTIONS(831),
        [anon_sym_COLON] = ACTIONS(831),
        [sym_comment] = ACTIONS(37),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(834),
        [anon_sym_SEMI] = ACTIONS(834),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_COMMA] = ACTIONS(840),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_COLON] = ACTIONS(844),
        [anon_sym_elif] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(837),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_in] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_except] = ACTIONS(837),
        [anon_sym_as] = ACTIONS(849),
        [anon_sym_finally] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_PLUS] = ACTIONS(851),
        [sym_identifier] = ACTIONS(853),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(834),
        [sym__dedent] = ACTIONS(834),
    },
    [355] = {
        [aux_sym_print_statement_repeat1] = STATE(358),
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(856),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(858),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [356] = {
        [sym__expression] = STATE(362),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [357] = {
        [sym__expression] = STATE(361),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(860),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [359] = {
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(204),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(37),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(858),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [361] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(862),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [362] = {
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
        [anon_sym_PLUS] = ACTIONS(858),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(37),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(17),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(189),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(190),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(191),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(192),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(193),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(194),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(195),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(196),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(197),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(198),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(199),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(200),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(201),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(202),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(203),
    [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(204),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(205),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(206),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(207),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
    [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
    [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [463] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [468] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [471] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [474] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [477] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [480] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [483] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [486] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(259),
    [489] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [492] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [495] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [498] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [504] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
    [512] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [518] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [521] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [524] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [527] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [531] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [535] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [539] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(29),
    [543] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(301),
    [547] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [558] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [569] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(193),
    [572] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(248),
    [577] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(199),
    [581] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(201),
    [586] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [601] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [607] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [613] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(260),
    [620] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(261),
    [628] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [633] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(200),
    [636] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(203),
    [639] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [675] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(231),
    [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [684] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(238),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [691] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(255),
    [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [696] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [702] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [708] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [711] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [719] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(264),
    [722] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [725] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [728] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [731] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(269),
    [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
    [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [738] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(273),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [747] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(277),
    [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
    [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [754] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(287),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [763] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(292),
    [766] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [770] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [774] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [780] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(269),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(324),
    [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [808] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(328),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [817] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(339),
    [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [826] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(343),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [831] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [834] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [837] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [840] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [844] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(269),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [853] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [862] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(357),
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
