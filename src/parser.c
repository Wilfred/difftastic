#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 405
#define SYMBOL_COUNT 58
#define TOKEN_COUNT 28
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
    anon_sym_STAR = 20,
    anon_sym_PLUS = 21,
    sym_number = 22,
    sym_identifier = 23,
    sym_comment = 24,
    sym__newline = 25,
    sym__indent = 26,
    sym__dedent = 27,
    sym_module = 28,
    sym__statement = 29,
    sym__simple_statement = 30,
    sym_print_statement = 31,
    sym_expression_statement = 32,
    sym__compound_statement = 33,
    sym_if_statement = 34,
    sym_elif_clause = 35,
    sym_else_clause = 36,
    sym_for_statement = 37,
    sym_while_statement = 38,
    sym_try_statement = 39,
    sym_except_clause = 40,
    sym_finally_clause = 41,
    sym_with_statement = 42,
    sym_with_item = 43,
    sym_function_definition = 44,
    sym_parameters = 45,
    sym_default_parameter = 46,
    sym_splat_parameter = 47,
    sym__suite = 48,
    sym_expression_list = 49,
    sym__expression = 50,
    sym_binary_operator = 51,
    aux_sym_module_repeat1 = 52,
    aux_sym_print_statement_repeat1 = 53,
    aux_sym_if_statement_repeat1 = 54,
    aux_sym_try_statement_repeat1 = 55,
    aux_sym_with_statement_repeat1 = 56,
    aux_sym_parameters_repeat1 = 57,
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
    [anon_sym_STAR] = "*",
    [anon_sym_PLUS] = "+",
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
    [sym_splat_parameter] = "splat_parameter",
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
    [anon_sym_STAR] = {
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
    [sym_splat_parameter] = {
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(13);
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
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_number);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            ACCEPT_TOKEN(sym_number);
        case 11:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 12:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 13:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(sym_identifier);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 's')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_as);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_def);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(21);
            if (lookahead == 'x')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_elif);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_else);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'p')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_except);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'o')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'y')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_finally);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'r')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_for);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(41);
            if (lookahead == 'n')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_if);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_in);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'r')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_print);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'r')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'y')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_try);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'h')
                ADVANCE(52);
            if (lookahead == 'i')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_while);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'h')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_with);
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
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'o')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(62);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            LEX_ERROR();
        case 63:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(63);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 64:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(64);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            LEX_ERROR();
        case 67:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(67);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 68:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(68);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 69:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(69);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 70:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(70);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 71:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(71);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 72:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(72);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            LEX_ERROR();
        case 73:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(73);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'p')
                ADVANCE(43);
            LEX_ERROR();
        case 74:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(74);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 75:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(75);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 76:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(76);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 77:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(77);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 78:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(78);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 79:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(79);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(80);
            if (lookahead == 'e')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(88);
            if (lookahead == 'i')
                ADVANCE(95);
            LEX_ERROR();
        case 80:
            if (lookahead == 's')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            ACCEPT_TOKEN(anon_sym_as);
        case 82:
            if (lookahead == 'x')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            if (lookahead == 'c')
                ADVANCE(84);
            LEX_ERROR();
        case 84:
            if (lookahead == 'e')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 'p')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            if (lookahead == 't')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            ACCEPT_TOKEN(anon_sym_except);
        case 88:
            if (lookahead == 'i')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'n')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'a')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 'l')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 'l')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'y')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            ACCEPT_TOKEN(anon_sym_finally);
        case 95:
            if (lookahead == 'n')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            ACCEPT_TOKEN(anon_sym_in);
        case 97:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(97);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(80);
            LEX_ERROR();
        case 99:
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
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(88);
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
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(88);
            LEX_ERROR();
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(103);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(104);
            if (lookahead == 'x')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 's')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 105:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(105);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 106:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(106);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 107:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(107);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(88);
            LEX_ERROR();
        case 108:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(108);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(88);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(88);
            if (lookahead == 'i')
                ADVANCE(95);
            LEX_ERROR();
        case 110:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(110);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(111);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 112:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(95);
            LEX_ERROR();
        case 113:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(95);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(95);
            LEX_ERROR();
        case 115:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 118:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(118);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(13);
            LEX_ERROR();
        case 119:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            LEX_ERROR();
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            LEX_ERROR();
        case 122:
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(103);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(111);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(13);
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
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(95);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(103);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(103);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(103);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(111);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(111);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 141:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(111);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 142:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 143:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 144:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
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
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 146:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 147:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(61);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        case 148:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
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
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(43);
            if (lookahead == 't')
                ADVANCE(48);
            if (lookahead == 'w')
                ADVANCE(51);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 59},
    [2] = {.lex_state = 62},
    [3] = {.lex_state = 62},
    [4] = {.lex_state = 62},
    [5] = {.lex_state = 62},
    [6] = {.lex_state = 63},
    [7] = {.lex_state = 62},
    [8] = {.lex_state = 64},
    [9] = {.lex_state = 65, .external_tokens = 2},
    [10] = {.lex_state = 66},
    [11] = {.lex_state = 67, .external_tokens = 2},
    [12] = {.lex_state = 68, .external_tokens = 2},
    [13] = {.lex_state = 69, .external_tokens = 2},
    [14] = {.lex_state = 67, .external_tokens = 2},
    [15] = {.lex_state = 67, .external_tokens = 2},
    [16] = {.lex_state = 70, .external_tokens = 2},
    [17] = {.lex_state = 67, .external_tokens = 2},
    [18] = {.lex_state = 66},
    [19] = {.lex_state = 67, .external_tokens = 2},
    [20] = {.lex_state = 62},
    [21] = {.lex_state = 65, .external_tokens = 2},
    [22] = {.lex_state = 67, .external_tokens = 2},
    [23] = {.lex_state = 71},
    [24] = {.lex_state = 72},
    [25] = {.lex_state = 63},
    [26] = {.lex_state = 73, .external_tokens = 3},
    [27] = {.lex_state = 74, .external_tokens = 4},
    [28] = {.lex_state = 69, .external_tokens = 2},
    [29] = {.lex_state = 67, .external_tokens = 2},
    [30] = {.lex_state = 62},
    [31] = {.lex_state = 62},
    [32] = {.lex_state = 62},
    [33] = {.lex_state = 63},
    [34] = {.lex_state = 62},
    [35] = {.lex_state = 64},
    [36] = {.lex_state = 69, .external_tokens = 2},
    [37] = {.lex_state = 74, .external_tokens = 4},
    [38] = {.lex_state = 68, .external_tokens = 2},
    [39] = {.lex_state = 74, .external_tokens = 4},
    [40] = {.lex_state = 74, .external_tokens = 4},
    [41] = {.lex_state = 74, .external_tokens = 4},
    [42] = {.lex_state = 69, .external_tokens = 2},
    [43] = {.lex_state = 74, .external_tokens = 4},
    [44] = {.lex_state = 74, .external_tokens = 4},
    [45] = {.lex_state = 71},
    [46] = {.lex_state = 63},
    [47] = {.lex_state = 73, .external_tokens = 3},
    [48] = {.lex_state = 62},
    [49] = {.lex_state = 75, .external_tokens = 4},
    [50] = {.lex_state = 74, .external_tokens = 4},
    [51] = {.lex_state = 76, .external_tokens = 4},
    [52] = {.lex_state = 76, .external_tokens = 4},
    [53] = {.lex_state = 74, .external_tokens = 4},
    [54] = {.lex_state = 77, .external_tokens = 4},
    [55] = {.lex_state = 62},
    [56] = {.lex_state = 75, .external_tokens = 4},
    [57] = {.lex_state = 76, .external_tokens = 4},
    [58] = {.lex_state = 74, .external_tokens = 4},
    [59] = {.lex_state = 76, .external_tokens = 4},
    [60] = {.lex_state = 75, .external_tokens = 4},
    [61] = {.lex_state = 62},
    [62] = {.lex_state = 78, .external_tokens = 4},
    [63] = {.lex_state = 62},
    [64] = {.lex_state = 75, .external_tokens = 4},
    [65] = {.lex_state = 75, .external_tokens = 4},
    [66] = {.lex_state = 79},
    [67] = {.lex_state = 97},
    [68] = {.lex_state = 98},
    [69] = {.lex_state = 62},
    [70] = {.lex_state = 62},
    [71] = {.lex_state = 79},
    [72] = {.lex_state = 99},
    [73] = {.lex_state = 62},
    [74] = {.lex_state = 73, .external_tokens = 3},
    [75] = {.lex_state = 97},
    [76] = {.lex_state = 62},
    [77] = {.lex_state = 73, .external_tokens = 3},
    [78] = {.lex_state = 74, .external_tokens = 4},
    [79] = {.lex_state = 97},
    [80] = {.lex_state = 74, .external_tokens = 4},
    [81] = {.lex_state = 97},
    [82] = {.lex_state = 73, .external_tokens = 3},
    [83] = {.lex_state = 62},
    [84] = {.lex_state = 74, .external_tokens = 4},
    [85] = {.lex_state = 100},
    [86] = {.lex_state = 100},
    [87] = {.lex_state = 100},
    [88] = {.lex_state = 101},
    [89] = {.lex_state = 62},
    [90] = {.lex_state = 63},
    [91] = {.lex_state = 102, .external_tokens = 4},
    [92] = {.lex_state = 74, .external_tokens = 4},
    [93] = {.lex_state = 102, .external_tokens = 4},
    [94] = {.lex_state = 63},
    [95] = {.lex_state = 105, .external_tokens = 4},
    [96] = {.lex_state = 102, .external_tokens = 4},
    [97] = {.lex_state = 74, .external_tokens = 4},
    [98] = {.lex_state = 74, .external_tokens = 4},
    [99] = {.lex_state = 73, .external_tokens = 3},
    [100] = {.lex_state = 105, .external_tokens = 4},
    [101] = {.lex_state = 73, .external_tokens = 3},
    [102] = {.lex_state = 74, .external_tokens = 4},
    [103] = {.lex_state = 98},
    [104] = {.lex_state = 62},
    [105] = {.lex_state = 73, .external_tokens = 3},
    [106] = {.lex_state = 106},
    [107] = {.lex_state = 73, .external_tokens = 3},
    [108] = {.lex_state = 102, .external_tokens = 4},
    [109] = {.lex_state = 102, .external_tokens = 4},
    [110] = {.lex_state = 100},
    [111] = {.lex_state = 74, .external_tokens = 4},
    [112] = {.lex_state = 100},
    [113] = {.lex_state = 107},
    [114] = {.lex_state = 62},
    [115] = {.lex_state = 108},
    [116] = {.lex_state = 62},
    [117] = {.lex_state = 109},
    [118] = {.lex_state = 109},
    [119] = {.lex_state = 106},
    [120] = {.lex_state = 73, .external_tokens = 3},
    [121] = {.lex_state = 110, .external_tokens = 4},
    [122] = {.lex_state = 74, .external_tokens = 4},
    [123] = {.lex_state = 112},
    [124] = {.lex_state = 113},
    [125] = {.lex_state = 114},
    [126] = {.lex_state = 62},
    [127] = {.lex_state = 63},
    [128] = {.lex_state = 73, .external_tokens = 3},
    [129] = {.lex_state = 110, .external_tokens = 4},
    [130] = {.lex_state = 74, .external_tokens = 4},
    [131] = {.lex_state = 106},
    [132] = {.lex_state = 73, .external_tokens = 3},
    [133] = {.lex_state = 115, .external_tokens = 4},
    [134] = {.lex_state = 62},
    [135] = {.lex_state = 115, .external_tokens = 4},
    [136] = {.lex_state = 74, .external_tokens = 4},
    [137] = {.lex_state = 115, .external_tokens = 4},
    [138] = {.lex_state = 115, .external_tokens = 4},
    [139] = {.lex_state = 74, .external_tokens = 4},
    [140] = {.lex_state = 106},
    [141] = {.lex_state = 73, .external_tokens = 3},
    [142] = {.lex_state = 115, .external_tokens = 4},
    [143] = {.lex_state = 65, .external_tokens = 2},
    [144] = {.lex_state = 62},
    [145] = {.lex_state = 117, .external_tokens = 2},
    [146] = {.lex_state = 62},
    [147] = {.lex_state = 65, .external_tokens = 2},
    [148] = {.lex_state = 65, .external_tokens = 2},
    [149] = {.lex_state = 63},
    [150] = {.lex_state = 64},
    [151] = {.lex_state = 118},
    [152] = {.lex_state = 119},
    [153] = {.lex_state = 120},
    [154] = {.lex_state = 121},
    [155] = {.lex_state = 118},
    [156] = {.lex_state = 119},
    [157] = {.lex_state = 120},
    [158] = {.lex_state = 63},
    [159] = {.lex_state = 72},
    [160] = {.lex_state = 63},
    [161] = {.lex_state = 62},
    [162] = {.lex_state = 122},
    [163] = {.lex_state = 63},
    [164] = {.lex_state = 72},
    [165] = {.lex_state = 120},
    [166] = {.lex_state = 97},
    [167] = {.lex_state = 73, .external_tokens = 3},
    [168] = {.lex_state = 97},
    [169] = {.lex_state = 73, .external_tokens = 3},
    [170] = {.lex_state = 67, .external_tokens = 2},
    [171] = {.lex_state = 67, .external_tokens = 2},
    [172] = {.lex_state = 73, .external_tokens = 3},
    [173] = {.lex_state = 100},
    [174] = {.lex_state = 62},
    [175] = {.lex_state = 63},
    [176] = {.lex_state = 123, .external_tokens = 2},
    [177] = {.lex_state = 67, .external_tokens = 2},
    [178] = {.lex_state = 123, .external_tokens = 2},
    [179] = {.lex_state = 63},
    [180] = {.lex_state = 124, .external_tokens = 2},
    [181] = {.lex_state = 123, .external_tokens = 2},
    [182] = {.lex_state = 67, .external_tokens = 2},
    [183] = {.lex_state = 67, .external_tokens = 2},
    [184] = {.lex_state = 73, .external_tokens = 3},
    [185] = {.lex_state = 124, .external_tokens = 2},
    [186] = {.lex_state = 73, .external_tokens = 3},
    [187] = {.lex_state = 67, .external_tokens = 2},
    [188] = {.lex_state = 98},
    [189] = {.lex_state = 62},
    [190] = {.lex_state = 73, .external_tokens = 3},
    [191] = {.lex_state = 106},
    [192] = {.lex_state = 73, .external_tokens = 3},
    [193] = {.lex_state = 123, .external_tokens = 2},
    [194] = {.lex_state = 123, .external_tokens = 2},
    [195] = {.lex_state = 106},
    [196] = {.lex_state = 73, .external_tokens = 3},
    [197] = {.lex_state = 125, .external_tokens = 2},
    [198] = {.lex_state = 67, .external_tokens = 2},
    [199] = {.lex_state = 112},
    [200] = {.lex_state = 62},
    [201] = {.lex_state = 63},
    [202] = {.lex_state = 73, .external_tokens = 3},
    [203] = {.lex_state = 125, .external_tokens = 2},
    [204] = {.lex_state = 67, .external_tokens = 2},
    [205] = {.lex_state = 106},
    [206] = {.lex_state = 73, .external_tokens = 3},
    [207] = {.lex_state = 126, .external_tokens = 2},
    [208] = {.lex_state = 62},
    [209] = {.lex_state = 126, .external_tokens = 2},
    [210] = {.lex_state = 67, .external_tokens = 2},
    [211] = {.lex_state = 126, .external_tokens = 2},
    [212] = {.lex_state = 126, .external_tokens = 2},
    [213] = {.lex_state = 67, .external_tokens = 2},
    [214] = {.lex_state = 106},
    [215] = {.lex_state = 73, .external_tokens = 3},
    [216] = {.lex_state = 126, .external_tokens = 2},
    [217] = {.lex_state = 62},
    [218] = {.lex_state = 127},
    [219] = {.lex_state = 62},
    [220] = {.lex_state = 73, .external_tokens = 3},
    [221] = {.lex_state = 62},
    [222] = {.lex_state = 63},
    [223] = {.lex_state = 62},
    [224] = {.lex_state = 62},
    [225] = {.lex_state = 62},
    [226] = {.lex_state = 63},
    [227] = {.lex_state = 62},
    [228] = {.lex_state = 62},
    [229] = {.lex_state = 63},
    [230] = {.lex_state = 62},
    [231] = {.lex_state = 64},
    [232] = {.lex_state = 63},
    [233] = {.lex_state = 62},
    [234] = {.lex_state = 128, .external_tokens = 5},
    [235] = {.lex_state = 129, .external_tokens = 5},
    [236] = {.lex_state = 67, .external_tokens = 5},
    [237] = {.lex_state = 74, .external_tokens = 4},
    [238] = {.lex_state = 69, .external_tokens = 5},
    [239] = {.lex_state = 67, .external_tokens = 5},
    [240] = {.lex_state = 69, .external_tokens = 5},
    [241] = {.lex_state = 69, .external_tokens = 5},
    [242] = {.lex_state = 67, .external_tokens = 5},
    [243] = {.lex_state = 67, .external_tokens = 5},
    [244] = {.lex_state = 126, .external_tokens = 5},
    [245] = {.lex_state = 124, .external_tokens = 5},
    [246] = {.lex_state = 123, .external_tokens = 5},
    [247] = {.lex_state = 67, .external_tokens = 5},
    [248] = {.lex_state = 97},
    [249] = {.lex_state = 63},
    [250] = {.lex_state = 119},
    [251] = {.lex_state = 120},
    [252] = {.lex_state = 69, .external_tokens = 5},
    [253] = {.lex_state = 130},
    [254] = {.lex_state = 128, .external_tokens = 5},
    [255] = {.lex_state = 67, .external_tokens = 5},
    [256] = {.lex_state = 131, .external_tokens = 5},
    [257] = {.lex_state = 126, .external_tokens = 5},
    [258] = {.lex_state = 123, .external_tokens = 5},
    [259] = {.lex_state = 97},
    [260] = {.lex_state = 73, .external_tokens = 3},
    [261] = {.lex_state = 62},
    [262] = {.lex_state = 69, .external_tokens = 5},
    [263] = {.lex_state = 67, .external_tokens = 5},
    [264] = {.lex_state = 132, .external_tokens = 5},
    [265] = {.lex_state = 62},
    [266] = {.lex_state = 132, .external_tokens = 5},
    [267] = {.lex_state = 69, .external_tokens = 5},
    [268] = {.lex_state = 74, .external_tokens = 4},
    [269] = {.lex_state = 69, .external_tokens = 5},
    [270] = {.lex_state = 133, .external_tokens = 5},
    [271] = {.lex_state = 62},
    [272] = {.lex_state = 62},
    [273] = {.lex_state = 134, .external_tokens = 5},
    [274] = {.lex_state = 62},
    [275] = {.lex_state = 133, .external_tokens = 5},
    [276] = {.lex_state = 133, .external_tokens = 5},
    [277] = {.lex_state = 133, .external_tokens = 5},
    [278] = {.lex_state = 124, .external_tokens = 5},
    [279] = {.lex_state = 123, .external_tokens = 5},
    [280] = {.lex_state = 67, .external_tokens = 5},
    [281] = {.lex_state = 67, .external_tokens = 5},
    [282] = {.lex_state = 63},
    [283] = {.lex_state = 126, .external_tokens = 5},
    [284] = {.lex_state = 67, .external_tokens = 5},
    [285] = {.lex_state = 73, .external_tokens = 3},
    [286] = {.lex_state = 124, .external_tokens = 5},
    [287] = {.lex_state = 62},
    [288] = {.lex_state = 135, .external_tokens = 5},
    [289] = {.lex_state = 62},
    [290] = {.lex_state = 135, .external_tokens = 5},
    [291] = {.lex_state = 67, .external_tokens = 5},
    [292] = {.lex_state = 68, .external_tokens = 2},
    [293] = {.lex_state = 67, .external_tokens = 5},
    [294] = {.lex_state = 62},
    [295] = {.lex_state = 73, .external_tokens = 3},
    [296] = {.lex_state = 69, .external_tokens = 5},
    [297] = {.lex_state = 70, .external_tokens = 5},
    [298] = {.lex_state = 62},
    [299] = {.lex_state = 70, .external_tokens = 5},
    [300] = {.lex_state = 126, .external_tokens = 5},
    [301] = {.lex_state = 67, .external_tokens = 5},
    [302] = {.lex_state = 135, .external_tokens = 5},
    [303] = {.lex_state = 73, .external_tokens = 3},
    [304] = {.lex_state = 62},
    [305] = {.lex_state = 123, .external_tokens = 5},
    [306] = {.lex_state = 136, .external_tokens = 5},
    [307] = {.lex_state = 62},
    [308] = {.lex_state = 136, .external_tokens = 5},
    [309] = {.lex_state = 137, .external_tokens = 5},
    [310] = {.lex_state = 62},
    [311] = {.lex_state = 62},
    [312] = {.lex_state = 138, .external_tokens = 5},
    [313] = {.lex_state = 62},
    [314] = {.lex_state = 137, .external_tokens = 5},
    [315] = {.lex_state = 137, .external_tokens = 5},
    [316] = {.lex_state = 137, .external_tokens = 5},
    [317] = {.lex_state = 73, .external_tokens = 3},
    [318] = {.lex_state = 62},
    [319] = {.lex_state = 125, .external_tokens = 5},
    [320] = {.lex_state = 139, .external_tokens = 5},
    [321] = {.lex_state = 62},
    [322] = {.lex_state = 139, .external_tokens = 5},
    [323] = {.lex_state = 67, .external_tokens = 5},
    [324] = {.lex_state = 140, .external_tokens = 5},
    [325] = {.lex_state = 62},
    [326] = {.lex_state = 62},
    [327] = {.lex_state = 141, .external_tokens = 5},
    [328] = {.lex_state = 62},
    [329] = {.lex_state = 140, .external_tokens = 5},
    [330] = {.lex_state = 140, .external_tokens = 5},
    [331] = {.lex_state = 140, .external_tokens = 5},
    [332] = {.lex_state = 67, .external_tokens = 5},
    [333] = {.lex_state = 123, .external_tokens = 5},
    [334] = {.lex_state = 67, .external_tokens = 5},
    [335] = {.lex_state = 63},
    [336] = {.lex_state = 72},
    [337] = {.lex_state = 63},
    [338] = {.lex_state = 73, .external_tokens = 3},
    [339] = {.lex_state = 67, .external_tokens = 5},
    [340] = {.lex_state = 73, .external_tokens = 3},
    [341] = {.lex_state = 67, .external_tokens = 5},
    [342] = {.lex_state = 128, .external_tokens = 5},
    [343] = {.lex_state = 71},
    [344] = {.lex_state = 97},
    [345] = {.lex_state = 73, .external_tokens = 3},
    [346] = {.lex_state = 67, .external_tokens = 5},
    [347] = {.lex_state = 99},
    [348] = {.lex_state = 98},
    [349] = {.lex_state = 62},
    [350] = {.lex_state = 73, .external_tokens = 3},
    [351] = {.lex_state = 106},
    [352] = {.lex_state = 123, .external_tokens = 5},
    [353] = {.lex_state = 73, .external_tokens = 3},
    [354] = {.lex_state = 100},
    [355] = {.lex_state = 106},
    [356] = {.lex_state = 73, .external_tokens = 3},
    [357] = {.lex_state = 125, .external_tokens = 5},
    [358] = {.lex_state = 67, .external_tokens = 5},
    [359] = {.lex_state = 63},
    [360] = {.lex_state = 112},
    [361] = {.lex_state = 73, .external_tokens = 3},
    [362] = {.lex_state = 62},
    [363] = {.lex_state = 142, .external_tokens = 5},
    [364] = {.lex_state = 62},
    [365] = {.lex_state = 142, .external_tokens = 5},
    [366] = {.lex_state = 143, .external_tokens = 5},
    [367] = {.lex_state = 62},
    [368] = {.lex_state = 62},
    [369] = {.lex_state = 144, .external_tokens = 5},
    [370] = {.lex_state = 62},
    [371] = {.lex_state = 143, .external_tokens = 5},
    [372] = {.lex_state = 143, .external_tokens = 5},
    [373] = {.lex_state = 143, .external_tokens = 5},
    [374] = {.lex_state = 106},
    [375] = {.lex_state = 73, .external_tokens = 3},
    [376] = {.lex_state = 62},
    [377] = {.lex_state = 126, .external_tokens = 5},
    [378] = {.lex_state = 145, .external_tokens = 5},
    [379] = {.lex_state = 62},
    [380] = {.lex_state = 145, .external_tokens = 5},
    [381] = {.lex_state = 146, .external_tokens = 5},
    [382] = {.lex_state = 62},
    [383] = {.lex_state = 62},
    [384] = {.lex_state = 147, .external_tokens = 5},
    [385] = {.lex_state = 62},
    [386] = {.lex_state = 146, .external_tokens = 5},
    [387] = {.lex_state = 146, .external_tokens = 5},
    [388] = {.lex_state = 146, .external_tokens = 5},
    [389] = {.lex_state = 106},
    [390] = {.lex_state = 73, .external_tokens = 3},
    [391] = {.lex_state = 126, .external_tokens = 5},
    [392] = {.lex_state = 67, .external_tokens = 5},
    [393] = {.lex_state = 97},
    [394] = {.lex_state = 148, .external_tokens = 5},
    [395] = {.lex_state = 62},
    [396] = {.lex_state = 148, .external_tokens = 5},
    [397] = {.lex_state = 65, .external_tokens = 5},
    [398] = {.lex_state = 62},
    [399] = {.lex_state = 62},
    [400] = {.lex_state = 117, .external_tokens = 5},
    [401] = {.lex_state = 62},
    [402] = {.lex_state = 65, .external_tokens = 5},
    [403] = {.lex_state = 65, .external_tokens = 5},
    [404] = {.lex_state = 65, .external_tokens = 5},
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
        [sym__statement] = STATE(239),
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__compound_statement] = STATE(242),
        [sym_if_statement] = STATE(243),
        [sym_elif_clause] = STATE(244),
        [sym_else_clause] = STATE(245),
        [sym_for_statement] = STATE(243),
        [sym_while_statement] = STATE(243),
        [sym_try_statement] = STATE(243),
        [sym_except_clause] = STATE(246),
        [sym_finally_clause] = STATE(247),
        [sym_with_statement] = STATE(243),
        [sym_with_item] = STATE(248),
        [sym_function_definition] = STATE(243),
        [sym_parameters] = STATE(249),
        [sym_default_parameter] = STATE(250),
        [sym_splat_parameter] = STATE(251),
        [sym__suite] = STATE(252),
        [sym_expression_list] = STATE(253),
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(234),
        [aux_sym_module_repeat1] = STATE(255),
        [aux_sym_print_statement_repeat1] = STATE(256),
        [aux_sym_if_statement_repeat1] = STATE(257),
        [aux_sym_try_statement_repeat1] = STATE(258),
        [aux_sym_with_statement_repeat1] = STATE(259),
        [aux_sym_parameters_repeat1] = STATE(154),
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
        [anon_sym_STAR] = ACTIONS(41),
        [anon_sym_PLUS] = ACTIONS(43),
        [sym_number] = ACTIONS(45),
        [sym_identifier] = ACTIONS(47),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(51),
        [sym__indent] = ACTIONS(53),
        [sym__dedent] = ACTIONS(55),
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
        [ts_builtin_sym_end] = ACTIONS(57),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(61),
        [anon_sym_for] = ACTIONS(63),
        [anon_sym_while] = ACTIONS(65),
        [anon_sym_try] = ACTIONS(67),
        [anon_sym_with] = ACTIONS(69),
        [anon_sym_def] = ACTIONS(71),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
    },
    [2] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(49),
    },
    [3] = {
        [sym__expression] = STATE(205),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [4] = {
        [sym_expression_list] = STATE(199),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [5] = {
        [sym__expression] = STATE(195),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [6] = {
        [anon_sym_COLON] = ACTIONS(79),
        [sym_comment] = ACTIONS(49),
    },
    [7] = {
        [sym_with_item] = STATE(166),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [8] = {
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(49),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_COMMA] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [anon_sym_def] = ACTIONS(85),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(83),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [sym_comment] = ACTIONS(49),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_SEMI] = ACTIONS(91),
        [anon_sym_print] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(93),
        [anon_sym_try] = ACTIONS(93),
        [anon_sym_with] = ACTIONS(93),
        [anon_sym_def] = ACTIONS(93),
        [sym_number] = ACTIONS(93),
        [sym_identifier] = ACTIONS(95),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(91),
    },
    [12] = {
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(97),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_try] = ACTIONS(101),
        [anon_sym_except] = ACTIONS(101),
        [anon_sym_finally] = ACTIONS(101),
        [anon_sym_with] = ACTIONS(101),
        [anon_sym_def] = ACTIONS(101),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(99),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(107),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(107),
        [sym_number] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(105),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(111),
    },
    [16] = {
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
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
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
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(61),
        [anon_sym_for] = ACTIONS(63),
        [anon_sym_while] = ACTIONS(65),
        [anon_sym_try] = ACTIONS(67),
        [anon_sym_with] = ACTIONS(69),
        [anon_sym_def] = ACTIONS(71),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(127),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [sym_comment] = ACTIONS(49),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [anon_sym_try] = ACTIONS(133),
        [anon_sym_with] = ACTIONS(133),
        [anon_sym_def] = ACTIONS(133),
        [sym_number] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(131),
    },
    [20] = {
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(49),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_SEMI] = ACTIONS(143),
        [anon_sym_print] = ACTIONS(145),
        [anon_sym_if] = ACTIONS(145),
        [anon_sym_for] = ACTIONS(145),
        [anon_sym_while] = ACTIONS(145),
        [anon_sym_try] = ACTIONS(145),
        [anon_sym_with] = ACTIONS(145),
        [anon_sym_def] = ACTIONS(145),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(143),
    },
    [23] = {
        [sym_parameters] = STATE(25),
        [anon_sym_LPAREN] = ACTIONS(149),
        [sym_comment] = ACTIONS(49),
    },
    [24] = {
        [sym_default_parameter] = STATE(152),
        [sym_splat_parameter] = STATE(153),
        [aux_sym_parameters_repeat1] = STATE(154),
        [anon_sym_RPAREN] = ACTIONS(151),
        [anon_sym_STAR] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(49),
    },
    [25] = {
        [anon_sym_COLON] = ACTIONS(157),
        [sym_comment] = ACTIONS(49),
    },
    [26] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(29),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(173),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_except] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(175),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_with] = ACTIONS(183),
        [anon_sym_def] = ACTIONS(183),
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(181),
    },
    [30] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [31] = {
        [sym_expression_list] = STATE(123),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [32] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [33] = {
        [anon_sym_COLON] = ACTIONS(187),
        [sym_comment] = ACTIONS(49),
    },
    [34] = {
        [sym_with_item] = STATE(67),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [35] = {
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(49),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(191),
        [anon_sym_SEMI] = ACTIONS(191),
        [anon_sym_print] = ACTIONS(193),
        [anon_sym_if] = ACTIONS(193),
        [anon_sym_elif] = ACTIONS(193),
        [anon_sym_else] = ACTIONS(193),
        [anon_sym_for] = ACTIONS(193),
        [anon_sym_while] = ACTIONS(193),
        [anon_sym_try] = ACTIONS(193),
        [anon_sym_except] = ACTIONS(193),
        [anon_sym_finally] = ACTIONS(193),
        [anon_sym_with] = ACTIONS(193),
        [anon_sym_def] = ACTIONS(193),
        [sym_number] = ACTIONS(193),
        [sym_identifier] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(191),
    },
    [37] = {
        [anon_sym_print] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(93),
        [anon_sym_try] = ACTIONS(93),
        [anon_sym_with] = ACTIONS(93),
        [anon_sym_def] = ACTIONS(93),
        [sym_number] = ACTIONS(93),
        [sym_identifier] = ACTIONS(95),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(91),
    },
    [38] = {
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(197),
    },
    [39] = {
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(107),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(107),
        [sym_number] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(105),
    },
    [40] = {
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(111),
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(199),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
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
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(201),
    },
    [43] = {
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [anon_sym_try] = ACTIONS(133),
        [anon_sym_with] = ACTIONS(133),
        [anon_sym_def] = ACTIONS(133),
        [sym_number] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(131),
    },
    [44] = {
        [anon_sym_print] = ACTIONS(145),
        [anon_sym_if] = ACTIONS(145),
        [anon_sym_for] = ACTIONS(145),
        [anon_sym_while] = ACTIONS(145),
        [anon_sym_try] = ACTIONS(145),
        [anon_sym_with] = ACTIONS(145),
        [anon_sym_def] = ACTIONS(145),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(143),
    },
    [45] = {
        [sym_parameters] = STATE(46),
        [anon_sym_LPAREN] = ACTIONS(149),
        [sym_comment] = ACTIONS(49),
    },
    [46] = {
        [anon_sym_COLON] = ACTIONS(207),
        [sym_comment] = ACTIONS(49),
    },
    [47] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(53),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [48] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(49),
    },
    [49] = {
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_COMMA] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [anon_sym_def] = ACTIONS(85),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(83),
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(217),
    },
    [51] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_except] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(175),
    },
    [52] = {
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_try] = ACTIONS(101),
        [anon_sym_except] = ACTIONS(101),
        [anon_sym_finally] = ACTIONS(101),
        [anon_sym_with] = ACTIONS(101),
        [anon_sym_def] = ACTIONS(101),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(99),
    },
    [53] = {
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_with] = ACTIONS(183),
        [anon_sym_def] = ACTIONS(183),
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(181),
    },
    [54] = {
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(219),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(117),
    },
    [55] = {
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(49),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(137),
    },
    [57] = {
        [anon_sym_print] = ACTIONS(193),
        [anon_sym_if] = ACTIONS(193),
        [anon_sym_elif] = ACTIONS(193),
        [anon_sym_else] = ACTIONS(193),
        [anon_sym_for] = ACTIONS(193),
        [anon_sym_while] = ACTIONS(193),
        [anon_sym_try] = ACTIONS(193),
        [anon_sym_except] = ACTIONS(193),
        [anon_sym_finally] = ACTIONS(193),
        [anon_sym_with] = ACTIONS(193),
        [anon_sym_def] = ACTIONS(193),
        [sym_number] = ACTIONS(193),
        [sym_identifier] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(191),
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(221),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(203),
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
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(201),
    },
    [60] = {
        [aux_sym_print_statement_repeat1] = STATE(62),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(225),
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
        [anon_sym_PLUS] = ACTIONS(219),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(229),
    },
    [61] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(49),
    },
    [62] = {
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_except] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(237),
    },
    [63] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(49),
    },
    [64] = {
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
        [anon_sym_PLUS] = ACTIONS(219),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(241),
    },
    [65] = {
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_except] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(219),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(247),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(83),
        [anon_sym_COLON] = ACTIONS(83),
        [anon_sym_in] = ACTIONS(83),
        [anon_sym_except] = ACTIONS(83),
        [anon_sym_as] = ACTIONS(83),
        [anon_sym_finally] = ACTIONS(83),
        [anon_sym_RPAREN] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_comment] = ACTIONS(49),
    },
    [67] = {
        [aux_sym_with_statement_repeat1] = STATE(75),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(253),
        [sym_comment] = ACTIONS(49),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(255),
        [anon_sym_as] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [69] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [70] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(137),
        [sym_comment] = ACTIONS(49),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_COLON] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [73] = {
        [sym_with_item] = STATE(81),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [74] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(80),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(265),
        [sym_comment] = ACTIONS(49),
    },
    [76] = {
        [sym_with_item] = STATE(79),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [77] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(78),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [78] = {
        [anon_sym_print] = ACTIONS(267),
        [anon_sym_if] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_while] = ACTIONS(267),
        [anon_sym_try] = ACTIONS(267),
        [anon_sym_with] = ACTIONS(267),
        [anon_sym_def] = ACTIONS(267),
        [sym_number] = ACTIONS(267),
        [sym_identifier] = ACTIONS(269),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(271),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_COLON] = ACTIONS(273),
        [sym_comment] = ACTIONS(49),
    },
    [80] = {
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(279),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [sym_comment] = ACTIONS(49),
    },
    [82] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(87),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(283),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(287),
    },
    [83] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(289),
    },
    [85] = {
        [anon_sym_except] = ACTIONS(175),
        [anon_sym_finally] = ACTIONS(175),
        [sym_comment] = ACTIONS(49),
    },
    [86] = {
        [anon_sym_except] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [sym_comment] = ACTIONS(49),
    },
    [87] = {
        [sym_except_clause] = STATE(91),
        [sym_finally_clause] = STATE(92),
        [aux_sym_try_statement_repeat1] = STATE(93),
        [anon_sym_except] = ACTIONS(291),
        [anon_sym_finally] = ACTIONS(293),
        [sym_comment] = ACTIONS(49),
    },
    [88] = {
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [89] = {
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [90] = {
        [anon_sym_COLON] = ACTIONS(295),
        [sym_comment] = ACTIONS(49),
    },
    [91] = {
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_else] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_number] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(301),
    },
    [92] = {
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(307),
    },
    [93] = {
        [sym_else_clause] = STATE(95),
        [sym_except_clause] = STATE(96),
        [sym_finally_clause] = STATE(97),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_else] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_except] = ACTIONS(311),
        [anon_sym_finally] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(307),
    },
    [94] = {
        [anon_sym_COLON] = ACTIONS(315),
        [sym_comment] = ACTIONS(49),
    },
    [95] = {
        [sym_finally_clause] = STATE(98),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(321),
    },
    [96] = {
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(327),
    },
    [97] = {
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(321),
    },
    [98] = {
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(333),
    },
    [99] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(100),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [100] = {
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(339),
    },
    [101] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(102),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [102] = {
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [anon_sym_def] = ACTIONS(341),
        [sym_number] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(345),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(347),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [104] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [105] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(109),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [106] = {
        [anon_sym_COLON] = ACTIONS(351),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [107] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(108),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [108] = {
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
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(357),
    },
    [109] = {
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_else] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [anon_sym_except] = ACTIONS(359),
        [anon_sym_finally] = ACTIONS(359),
        [anon_sym_with] = ACTIONS(359),
        [anon_sym_def] = ACTIONS(359),
        [sym_number] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(363),
    },
    [110] = {
        [anon_sym_except] = ACTIONS(191),
        [anon_sym_finally] = ACTIONS(191),
        [sym_comment] = ACTIONS(49),
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(365),
    },
    [112] = {
        [anon_sym_except] = ACTIONS(201),
        [anon_sym_finally] = ACTIONS(201),
        [sym_comment] = ACTIONS(49),
    },
    [113] = {
        [aux_sym_print_statement_repeat1] = STATE(115),
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [114] = {
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [sym_comment] = ACTIONS(49),
    },
    [116] = {
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_COLON] = ACTIONS(241),
        [anon_sym_in] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_except] = ACTIONS(247),
        [anon_sym_finally] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [119] = {
        [anon_sym_COLON] = ACTIONS(371),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [120] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(121),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [121] = {
        [sym_else_clause] = STATE(122),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_else] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_while] = ACTIONS(373),
        [anon_sym_try] = ACTIONS(373),
        [anon_sym_with] = ACTIONS(373),
        [anon_sym_def] = ACTIONS(373),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(377),
    },
    [122] = {
        [anon_sym_print] = ACTIONS(379),
        [anon_sym_if] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_while] = ACTIONS(379),
        [anon_sym_try] = ACTIONS(379),
        [anon_sym_with] = ACTIONS(379),
        [anon_sym_def] = ACTIONS(379),
        [sym_number] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(383),
    },
    [123] = {
        [anon_sym_in] = ACTIONS(385),
        [sym_comment] = ACTIONS(49),
    },
    [124] = {
        [aux_sym_print_statement_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_COLON] = ACTIONS(387),
        [anon_sym_in] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [sym_comment] = ACTIONS(49),
    },
    [126] = {
        [sym_expression_list] = STATE(127),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [127] = {
        [anon_sym_COLON] = ACTIONS(391),
        [sym_comment] = ACTIONS(49),
    },
    [128] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(129),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [129] = {
        [sym_else_clause] = STATE(130),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_else] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_while] = ACTIONS(393),
        [anon_sym_try] = ACTIONS(393),
        [anon_sym_with] = ACTIONS(393),
        [anon_sym_def] = ACTIONS(393),
        [sym_number] = ACTIONS(393),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(397),
    },
    [130] = {
        [anon_sym_print] = ACTIONS(399),
        [anon_sym_if] = ACTIONS(399),
        [anon_sym_for] = ACTIONS(399),
        [anon_sym_while] = ACTIONS(399),
        [anon_sym_try] = ACTIONS(399),
        [anon_sym_with] = ACTIONS(399),
        [anon_sym_def] = ACTIONS(399),
        [sym_number] = ACTIONS(399),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(403),
    },
    [131] = {
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [132] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(133),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [133] = {
        [sym_elif_clause] = STATE(135),
        [sym_else_clause] = STATE(136),
        [aux_sym_if_statement_repeat1] = STATE(137),
        [anon_sym_print] = ACTIONS(407),
        [anon_sym_if] = ACTIONS(407),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(407),
        [anon_sym_while] = ACTIONS(407),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(407),
        [anon_sym_def] = ACTIONS(407),
        [sym_number] = ACTIONS(407),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(413),
    },
    [134] = {
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [135] = {
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(419),
    },
    [136] = {
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(425),
    },
    [137] = {
        [sym_elif_clause] = STATE(138),
        [sym_else_clause] = STATE(139),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(425),
    },
    [138] = {
        [anon_sym_print] = ACTIONS(427),
        [anon_sym_if] = ACTIONS(427),
        [anon_sym_elif] = ACTIONS(427),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_while] = ACTIONS(427),
        [anon_sym_try] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(427),
        [anon_sym_def] = ACTIONS(427),
        [sym_number] = ACTIONS(427),
        [sym_identifier] = ACTIONS(429),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(431),
    },
    [139] = {
        [anon_sym_print] = ACTIONS(433),
        [anon_sym_if] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_while] = ACTIONS(433),
        [anon_sym_try] = ACTIONS(433),
        [anon_sym_with] = ACTIONS(433),
        [anon_sym_def] = ACTIONS(433),
        [sym_number] = ACTIONS(433),
        [sym_identifier] = ACTIONS(435),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(437),
    },
    [140] = {
        [anon_sym_COLON] = ACTIONS(439),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [141] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(142),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(215),
    },
    [142] = {
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(445),
    },
    [143] = {
        [aux_sym_print_statement_repeat1] = STATE(145),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(447),
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
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
    },
    [144] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(49),
    },
    [145] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_except] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
    },
    [146] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(49),
    },
    [147] = {
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
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_except] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(121),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(451),
        [sym_comment] = ACTIONS(49),
    },
    [150] = {
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(49),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(457),
        [anon_sym_EQ] = ACTIONS(459),
        [sym_comment] = ACTIONS(49),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(457),
        [sym_comment] = ACTIONS(49),
    },
    [153] = {
        [anon_sym_RPAREN] = ACTIONS(457),
        [sym_comment] = ACTIONS(49),
    },
    [154] = {
        [sym_default_parameter] = STATE(156),
        [sym_splat_parameter] = STATE(157),
        [anon_sym_STAR] = ACTIONS(153),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(49),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_RPAREN] = ACTIONS(465),
        [anon_sym_EQ] = ACTIONS(459),
        [sym_comment] = ACTIONS(49),
    },
    [156] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_RPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(49),
    },
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(49),
    },
    [158] = {
        [anon_sym_COLON] = ACTIONS(467),
        [sym_comment] = ACTIONS(49),
    },
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(469),
        [anon_sym_STAR] = ACTIONS(471),
        [sym_identifier] = ACTIONS(473),
        [sym_comment] = ACTIONS(49),
    },
    [160] = {
        [anon_sym_COLON] = ACTIONS(475),
        [sym_comment] = ACTIONS(49),
    },
    [161] = {
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [162] = {
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_RPAREN] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [163] = {
        [anon_sym_COLON] = ACTIONS(479),
        [sym_comment] = ACTIONS(49),
    },
    [164] = {
        [anon_sym_RPAREN] = ACTIONS(465),
        [anon_sym_STAR] = ACTIONS(481),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(49),
    },
    [165] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [sym_comment] = ACTIONS(49),
    },
    [166] = {
        [aux_sym_with_statement_repeat1] = STATE(168),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(487),
        [sym_comment] = ACTIONS(49),
    },
    [167] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(171),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [168] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(49),
    },
    [169] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(170),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(267),
        [anon_sym_if] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_while] = ACTIONS(267),
        [anon_sym_try] = ACTIONS(267),
        [anon_sym_with] = ACTIONS(267),
        [anon_sym_def] = ACTIONS(267),
        [sym_number] = ACTIONS(267),
        [sym_identifier] = ACTIONS(269),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(271),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(279),
    },
    [172] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(173),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(283),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(287),
    },
    [173] = {
        [sym_except_clause] = STATE(176),
        [sym_finally_clause] = STATE(177),
        [aux_sym_try_statement_repeat1] = STATE(178),
        [anon_sym_except] = ACTIONS(491),
        [anon_sym_finally] = ACTIONS(493),
        [sym_comment] = ACTIONS(49),
    },
    [174] = {
        [sym__expression] = STATE(188),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [175] = {
        [anon_sym_COLON] = ACTIONS(495),
        [sym_comment] = ACTIONS(49),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_else] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_number] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(301),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(307),
    },
    [178] = {
        [sym_else_clause] = STATE(180),
        [sym_except_clause] = STATE(181),
        [sym_finally_clause] = STATE(182),
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_else] = ACTIONS(497),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_except] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(307),
    },
    [179] = {
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(49),
    },
    [180] = {
        [sym_finally_clause] = STATE(183),
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(321),
    },
    [181] = {
        [ts_builtin_sym_end] = ACTIONS(327),
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(327),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(321),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_SEMI] = ACTIONS(333),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(333),
    },
    [184] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(185),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(339),
    },
    [186] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(187),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [anon_sym_def] = ACTIONS(341),
        [sym_number] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(345),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_COLON] = ACTIONS(507),
        [anon_sym_as] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [189] = {
        [sym__expression] = STATE(191),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [190] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(194),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [191] = {
        [anon_sym_COLON] = ACTIONS(509),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [192] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(193),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [193] = {
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
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(357),
    },
    [194] = {
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_else] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [anon_sym_except] = ACTIONS(359),
        [anon_sym_finally] = ACTIONS(359),
        [anon_sym_with] = ACTIONS(359),
        [anon_sym_def] = ACTIONS(359),
        [sym_number] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(363),
    },
    [195] = {
        [anon_sym_COLON] = ACTIONS(511),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [196] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(197),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [197] = {
        [sym_else_clause] = STATE(198),
        [ts_builtin_sym_end] = ACTIONS(377),
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_else] = ACTIONS(497),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_while] = ACTIONS(373),
        [anon_sym_try] = ACTIONS(373),
        [anon_sym_with] = ACTIONS(373),
        [anon_sym_def] = ACTIONS(373),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(377),
    },
    [198] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(379),
        [anon_sym_if] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_while] = ACTIONS(379),
        [anon_sym_try] = ACTIONS(379),
        [anon_sym_with] = ACTIONS(379),
        [anon_sym_def] = ACTIONS(379),
        [sym_number] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(383),
    },
    [199] = {
        [anon_sym_in] = ACTIONS(513),
        [sym_comment] = ACTIONS(49),
    },
    [200] = {
        [sym_expression_list] = STATE(201),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(515),
        [sym_comment] = ACTIONS(49),
    },
    [202] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(203),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [203] = {
        [sym_else_clause] = STATE(204),
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_else] = ACTIONS(497),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_while] = ACTIONS(393),
        [anon_sym_try] = ACTIONS(393),
        [anon_sym_with] = ACTIONS(393),
        [anon_sym_def] = ACTIONS(393),
        [sym_number] = ACTIONS(393),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(397),
    },
    [204] = {
        [ts_builtin_sym_end] = ACTIONS(403),
        [anon_sym_SEMI] = ACTIONS(403),
        [anon_sym_print] = ACTIONS(399),
        [anon_sym_if] = ACTIONS(399),
        [anon_sym_for] = ACTIONS(399),
        [anon_sym_while] = ACTIONS(399),
        [anon_sym_try] = ACTIONS(399),
        [anon_sym_with] = ACTIONS(399),
        [anon_sym_def] = ACTIONS(399),
        [sym_number] = ACTIONS(399),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(403),
    },
    [205] = {
        [anon_sym_COLON] = ACTIONS(517),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [206] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(207),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [207] = {
        [sym_elif_clause] = STATE(209),
        [sym_else_clause] = STATE(210),
        [aux_sym_if_statement_repeat1] = STATE(211),
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_print] = ACTIONS(407),
        [anon_sym_if] = ACTIONS(407),
        [anon_sym_elif] = ACTIONS(519),
        [anon_sym_else] = ACTIONS(497),
        [anon_sym_for] = ACTIONS(407),
        [anon_sym_while] = ACTIONS(407),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(407),
        [anon_sym_def] = ACTIONS(407),
        [sym_number] = ACTIONS(407),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(413),
    },
    [208] = {
        [sym__expression] = STATE(214),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [209] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(419),
    },
    [210] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(425),
    },
    [211] = {
        [sym_elif_clause] = STATE(212),
        [sym_else_clause] = STATE(213),
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(519),
        [anon_sym_else] = ACTIONS(497),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(425),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(427),
        [anon_sym_if] = ACTIONS(427),
        [anon_sym_elif] = ACTIONS(427),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_while] = ACTIONS(427),
        [anon_sym_try] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(427),
        [anon_sym_def] = ACTIONS(427),
        [sym_number] = ACTIONS(427),
        [sym_identifier] = ACTIONS(429),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(431),
    },
    [213] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(433),
        [anon_sym_if] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_while] = ACTIONS(433),
        [anon_sym_try] = ACTIONS(433),
        [anon_sym_with] = ACTIONS(433),
        [anon_sym_def] = ACTIONS(433),
        [sym_number] = ACTIONS(433),
        [sym_identifier] = ACTIONS(435),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(437),
    },
    [214] = {
        [anon_sym_COLON] = ACTIONS(521),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [215] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(216),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [216] = {
        [ts_builtin_sym_end] = ACTIONS(445),
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(445),
    },
    [217] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [218] = {
        [sym_with_item] = STATE(393),
        [sym__expression] = STATE(394),
        [sym_binary_operator] = STATE(234),
        [anon_sym_RPAREN] = ACTIONS(525),
        [anon_sym_STAR] = ACTIONS(527),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(530),
        [sym_comment] = ACTIONS(49),
    },
    [219] = {
        [sym__expression] = STATE(389),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [220] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(252),
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(534),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [221] = {
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [222] = {
        [anon_sym_COLON] = ACTIONS(540),
        [sym_comment] = ACTIONS(49),
    },
    [223] = {
        [sym_expression_list] = STATE(360),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [224] = {
        [sym_expression_list] = STATE(359),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [225] = {
        [sym__expression] = STATE(355),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [226] = {
        [anon_sym_COLON] = ACTIONS(542),
        [sym_comment] = ACTIONS(49),
    },
    [227] = {
        [sym__expression] = STATE(348),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [228] = {
        [sym__expression] = STATE(347),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [229] = {
        [anon_sym_COLON] = ACTIONS(544),
        [sym_comment] = ACTIONS(49),
    },
    [230] = {
        [sym_with_item] = STATE(344),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [231] = {
        [sym_identifier] = ACTIONS(546),
        [sym_comment] = ACTIONS(49),
    },
    [232] = {
        [anon_sym_COLON] = ACTIONS(548),
        [sym_comment] = ACTIONS(49),
    },
    [233] = {
        [sym__expression] = STATE(342),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [234] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_COMMA] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_COLON] = ACTIONS(83),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_in] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_as] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [anon_sym_def] = ACTIONS(85),
        [anon_sym_RPAREN] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(83),
        [sym__dedent] = ACTIONS(83),
    },
    [235] = {
        [sym_parameters] = STATE(249),
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_COLON] = ACTIONS(83),
        [anon_sym_elif] = ACTIONS(85),
        [anon_sym_else] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(85),
        [anon_sym_in] = ACTIONS(85),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(85),
        [anon_sym_except] = ACTIONS(85),
        [anon_sym_as] = ACTIONS(85),
        [anon_sym_finally] = ACTIONS(85),
        [anon_sym_with] = ACTIONS(85),
        [anon_sym_def] = ACTIONS(85),
        [anon_sym_LPAREN] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(556),
        [anon_sym_EQ] = ACTIONS(459),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(83),
        [sym__dedent] = ACTIONS(83),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(560),
        [anon_sym_SEMI] = ACTIONS(143),
        [anon_sym_print] = ACTIONS(145),
        [anon_sym_if] = ACTIONS(145),
        [anon_sym_for] = ACTIONS(145),
        [anon_sym_while] = ACTIONS(145),
        [anon_sym_try] = ACTIONS(145),
        [anon_sym_with] = ACTIONS(145),
        [anon_sym_def] = ACTIONS(145),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(143),
        [sym__dedent] = ACTIONS(143),
    },
    [237] = {
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
        [aux_sym_module_repeat1] = STATE(268),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(563),
    },
    [238] = {
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_SEMI] = ACTIONS(565),
        [anon_sym_print] = ACTIONS(568),
        [anon_sym_if] = ACTIONS(568),
        [anon_sym_elif] = ACTIONS(568),
        [anon_sym_else] = ACTIONS(568),
        [anon_sym_for] = ACTIONS(568),
        [anon_sym_while] = ACTIONS(568),
        [anon_sym_try] = ACTIONS(568),
        [anon_sym_except] = ACTIONS(568),
        [anon_sym_finally] = ACTIONS(568),
        [anon_sym_with] = ACTIONS(568),
        [anon_sym_def] = ACTIONS(568),
        [sym_number] = ACTIONS(568),
        [sym_identifier] = ACTIONS(571),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(565),
        [sym__dedent] = ACTIONS(565),
    },
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(574),
        [anon_sym_SEMI] = ACTIONS(574),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(580),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(574),
        [sym__dedent] = ACTIONS(574),
    },
    [240] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_except] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(583),
        [sym__dedent] = ACTIONS(175),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_print] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(101),
        [anon_sym_else] = ACTIONS(101),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(101),
        [anon_sym_try] = ACTIONS(101),
        [anon_sym_except] = ACTIONS(101),
        [anon_sym_finally] = ACTIONS(101),
        [anon_sym_with] = ACTIONS(101),
        [anon_sym_def] = ACTIONS(101),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(99),
        [sym__dedent] = ACTIONS(99),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(107),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(107),
        [sym_number] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [243] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(111),
        [sym__dedent] = ACTIONS(111),
    },
    [244] = {
        [ts_builtin_sym_end] = ACTIONS(586),
        [anon_sym_SEMI] = ACTIONS(586),
        [anon_sym_print] = ACTIONS(589),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_elif] = ACTIONS(589),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(589),
        [anon_sym_while] = ACTIONS(589),
        [anon_sym_try] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(589),
        [anon_sym_def] = ACTIONS(589),
        [sym_number] = ACTIONS(589),
        [sym_identifier] = ACTIONS(592),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(586),
        [sym__dedent] = ACTIONS(586),
    },
    [245] = {
        [sym_finally_clause] = STATE(281),
        [ts_builtin_sym_end] = ACTIONS(595),
        [anon_sym_SEMI] = ACTIONS(595),
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(609),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(595),
        [sym__dedent] = ACTIONS(595),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(615),
        [anon_sym_SEMI] = ACTIONS(615),
        [anon_sym_print] = ACTIONS(618),
        [anon_sym_if] = ACTIONS(618),
        [anon_sym_else] = ACTIONS(618),
        [anon_sym_for] = ACTIONS(618),
        [anon_sym_while] = ACTIONS(618),
        [anon_sym_try] = ACTIONS(618),
        [anon_sym_except] = ACTIONS(618),
        [anon_sym_finally] = ACTIONS(618),
        [anon_sym_with] = ACTIONS(618),
        [anon_sym_def] = ACTIONS(618),
        [sym_number] = ACTIONS(618),
        [sym_identifier] = ACTIONS(621),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(615),
        [sym__dedent] = ACTIONS(615),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(624),
        [anon_sym_SEMI] = ACTIONS(624),
        [anon_sym_print] = ACTIONS(628),
        [anon_sym_if] = ACTIONS(628),
        [anon_sym_for] = ACTIONS(628),
        [anon_sym_while] = ACTIONS(628),
        [anon_sym_try] = ACTIONS(628),
        [anon_sym_with] = ACTIONS(628),
        [anon_sym_def] = ACTIONS(628),
        [sym_number] = ACTIONS(628),
        [sym_identifier] = ACTIONS(632),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(624),
        [sym__dedent] = ACTIONS(624),
    },
    [248] = {
        [aux_sym_with_statement_repeat1] = STATE(259),
        [anon_sym_COMMA] = ACTIONS(636),
        [anon_sym_COLON] = ACTIONS(640),
        [sym_comment] = ACTIONS(49),
    },
    [249] = {
        [anon_sym_COLON] = ACTIONS(644),
        [sym_comment] = ACTIONS(49),
    },
    [250] = {
        [anon_sym_COMMA] = ACTIONS(646),
        [anon_sym_RPAREN] = ACTIONS(648),
        [sym_comment] = ACTIONS(49),
    },
    [251] = {
        [anon_sym_RPAREN] = ACTIONS(648),
        [sym_comment] = ACTIONS(49),
    },
    [252] = {
        [sym_elif_clause] = STATE(300),
        [sym_else_clause] = STATE(332),
        [sym_except_clause] = STATE(333),
        [sym_finally_clause] = STATE(334),
        [aux_sym_if_statement_repeat1] = STATE(257),
        [aux_sym_try_statement_repeat1] = STATE(258),
        [ts_builtin_sym_end] = ACTIONS(650),
        [anon_sym_SEMI] = ACTIONS(650),
        [anon_sym_print] = ACTIONS(662),
        [anon_sym_if] = ACTIONS(662),
        [anon_sym_elif] = ACTIONS(674),
        [anon_sym_else] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(662),
        [anon_sym_while] = ACTIONS(662),
        [anon_sym_try] = ACTIONS(662),
        [anon_sym_except] = ACTIONS(682),
        [anon_sym_finally] = ACTIONS(686),
        [anon_sym_with] = ACTIONS(662),
        [anon_sym_def] = ACTIONS(662),
        [sym_number] = ACTIONS(662),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(650),
        [sym__dedent] = ACTIONS(650),
    },
    [253] = {
        [anon_sym_COLON] = ACTIONS(703),
        [anon_sym_in] = ACTIONS(705),
        [sym_comment] = ACTIONS(49),
    },
    [254] = {
        [aux_sym_print_statement_repeat1] = STATE(256),
        [ts_builtin_sym_end] = ACTIONS(707),
        [anon_sym_SEMI] = ACTIONS(707),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_COMMA] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_COLON] = ACTIONS(727),
        [anon_sym_elif] = ACTIONS(713),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_in] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_except] = ACTIONS(713),
        [anon_sym_as] = ACTIONS(740),
        [anon_sym_finally] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_RPAREN] = ACTIONS(743),
        [anon_sym_PLUS] = ACTIONS(746),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(707),
        [sym__dedent] = ACTIONS(707),
    },
    [255] = {
        [sym__statement] = STATE(291),
        [sym__simple_statement] = STATE(292),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(242),
        [sym_if_statement] = STATE(243),
        [sym_for_statement] = STATE(243),
        [sym_while_statement] = STATE(243),
        [sym_try_statement] = STATE(243),
        [sym_with_statement] = STATE(243),
        [sym_function_definition] = STATE(243),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(761),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(765),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(767),
    },
    [256] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_in] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_except] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [257] = {
        [sym_elif_clause] = STATE(283),
        [sym_else_clause] = STATE(284),
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(425),
        [sym__dedent] = ACTIONS(425),
    },
    [258] = {
        [sym_else_clause] = STATE(278),
        [sym_except_clause] = STATE(279),
        [sym_finally_clause] = STATE(280),
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_else] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_except] = ACTIONS(779),
        [anon_sym_finally] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(307),
        [sym__dedent] = ACTIONS(307),
    },
    [259] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(781),
        [sym_comment] = ACTIONS(49),
    },
    [260] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(263),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(783),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [261] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [262] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(177),
        [anon_sym_else] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_except] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [263] = {
        [ts_builtin_sym_end] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_print] = ACTIONS(267),
        [anon_sym_if] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_while] = ACTIONS(267),
        [anon_sym_try] = ACTIONS(267),
        [anon_sym_with] = ACTIONS(267),
        [anon_sym_def] = ACTIONS(267),
        [sym_number] = ACTIONS(267),
        [sym_identifier] = ACTIONS(269),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(271),
        [sym__dedent] = ACTIONS(271),
    },
    [264] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(785),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [265] = {
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [266] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(787),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(191),
        [anon_sym_SEMI] = ACTIONS(191),
        [anon_sym_print] = ACTIONS(193),
        [anon_sym_if] = ACTIONS(193),
        [anon_sym_elif] = ACTIONS(193),
        [anon_sym_else] = ACTIONS(193),
        [anon_sym_for] = ACTIONS(193),
        [anon_sym_while] = ACTIONS(193),
        [anon_sym_try] = ACTIONS(193),
        [anon_sym_except] = ACTIONS(193),
        [anon_sym_finally] = ACTIONS(193),
        [anon_sym_with] = ACTIONS(193),
        [anon_sym_def] = ACTIONS(193),
        [sym_number] = ACTIONS(193),
        [sym_identifier] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(191),
        [sym__dedent] = ACTIONS(191),
    },
    [268] = {
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
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(161),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(171),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__dedent] = ACTIONS(767),
    },
    [269] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
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
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [270] = {
        [aux_sym_print_statement_repeat1] = STATE(273),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(790),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(792),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [271] = {
        [sym__expression] = STATE(277),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [272] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(794),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [274] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [275] = {
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
        [anon_sym_PLUS] = ACTIONS(792),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(796),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [277] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(792),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [278] = {
        [sym_finally_clause] = STATE(281),
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(321),
        [sym__dedent] = ACTIONS(321),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(327),
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(327),
        [sym__dedent] = ACTIONS(327),
    },
    [280] = {
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(321),
        [sym__dedent] = ACTIONS(321),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_SEMI] = ACTIONS(333),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(333),
        [sym__dedent] = ACTIONS(333),
    },
    [282] = {
        [anon_sym_COLON] = ACTIONS(799),
        [sym_comment] = ACTIONS(49),
    },
    [283] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(427),
        [anon_sym_if] = ACTIONS(427),
        [anon_sym_elif] = ACTIONS(427),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_while] = ACTIONS(427),
        [anon_sym_try] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(427),
        [anon_sym_def] = ACTIONS(427),
        [sym_number] = ACTIONS(427),
        [sym_identifier] = ACTIONS(429),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [284] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(433),
        [anon_sym_if] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_while] = ACTIONS(433),
        [anon_sym_try] = ACTIONS(433),
        [anon_sym_with] = ACTIONS(433),
        [anon_sym_def] = ACTIONS(433),
        [sym_number] = ACTIONS(433),
        [sym_identifier] = ACTIONS(435),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [285] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(286),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(783),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(339),
        [sym__dedent] = ACTIONS(339),
    },
    [287] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_COLON] = ACTIONS(241),
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
        [anon_sym_PLUS] = ACTIONS(801),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [289] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [290] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_in] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(803),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [291] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [anon_sym_try] = ACTIONS(133),
        [anon_sym_with] = ACTIONS(133),
        [anon_sym_def] = ACTIONS(133),
        [sym_number] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(131),
        [sym__dedent] = ACTIONS(131),
    },
    [292] = {
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(806),
    },
    [293] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_SEMI] = ACTIONS(143),
        [anon_sym_print] = ACTIONS(145),
        [anon_sym_if] = ACTIONS(145),
        [anon_sym_for] = ACTIONS(145),
        [anon_sym_while] = ACTIONS(145),
        [anon_sym_try] = ACTIONS(145),
        [anon_sym_with] = ACTIONS(145),
        [anon_sym_def] = ACTIONS(145),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(143),
        [sym__dedent] = ACTIONS(143),
    },
    [294] = {
        [sym__expression] = STATE(302),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [295] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(296),
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(534),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [296] = {
        [sym_elif_clause] = STATE(300),
        [sym_else_clause] = STATE(301),
        [aux_sym_if_statement_repeat1] = STATE(257),
        [ts_builtin_sym_end] = ACTIONS(808),
        [anon_sym_SEMI] = ACTIONS(808),
        [anon_sym_print] = ACTIONS(814),
        [anon_sym_if] = ACTIONS(814),
        [anon_sym_elif] = ACTIONS(674),
        [anon_sym_else] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(814),
        [anon_sym_while] = ACTIONS(814),
        [anon_sym_try] = ACTIONS(814),
        [anon_sym_except] = ACTIONS(820),
        [anon_sym_finally] = ACTIONS(820),
        [anon_sym_with] = ACTIONS(814),
        [anon_sym_def] = ACTIONS(814),
        [sym_number] = ACTIONS(814),
        [sym_identifier] = ACTIONS(823),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(808),
        [sym__dedent] = ACTIONS(808),
    },
    [297] = {
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
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(829),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [298] = {
        [sym__expression] = STATE(299),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(831),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(419),
        [sym__dedent] = ACTIONS(419),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(834),
        [anon_sym_SEMI] = ACTIONS(834),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(840),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(834),
        [sym__dedent] = ACTIONS(834),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(843),
        [anon_sym_elif] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_in] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_except] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(801),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [303] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(305),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(846),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [304] = {
        [sym__expression] = STATE(309),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [305] = {
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
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(357),
        [sym__dedent] = ACTIONS(357),
    },
    [306] = {
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
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(848),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [307] = {
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(850),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [309] = {
        [aux_sym_print_statement_repeat1] = STATE(312),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_except] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [310] = {
        [sym__expression] = STATE(316),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [311] = {
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(857),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_except] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [313] = {
        [sym__expression] = STATE(314),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [314] = {
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
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(859),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [316] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_except] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [317] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(319),
        [sym__expression] = STATE(320),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(862),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [318] = {
        [sym__expression] = STATE(324),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [319] = {
        [sym_else_clause] = STATE(323),
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_while] = ACTIONS(393),
        [anon_sym_try] = ACTIONS(393),
        [anon_sym_with] = ACTIONS(393),
        [anon_sym_def] = ACTIONS(393),
        [sym_number] = ACTIONS(393),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(397),
        [sym__dedent] = ACTIONS(397),
    },
    [320] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(864),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [321] = {
        [sym__expression] = STATE(322),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(866),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [323] = {
        [ts_builtin_sym_end] = ACTIONS(403),
        [anon_sym_SEMI] = ACTIONS(403),
        [anon_sym_print] = ACTIONS(399),
        [anon_sym_if] = ACTIONS(399),
        [anon_sym_for] = ACTIONS(399),
        [anon_sym_while] = ACTIONS(399),
        [anon_sym_try] = ACTIONS(399),
        [anon_sym_with] = ACTIONS(399),
        [anon_sym_def] = ACTIONS(399),
        [sym_number] = ACTIONS(399),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(403),
        [sym__dedent] = ACTIONS(403),
    },
    [324] = {
        [aux_sym_print_statement_repeat1] = STATE(327),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(871),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [325] = {
        [sym__expression] = STATE(331),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [326] = {
        [sym__expression] = STATE(330),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [327] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(873),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [328] = {
        [sym__expression] = STATE(329),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [329] = {
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
        [anon_sym_PLUS] = ACTIONS(871),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(875),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [331] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(871),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [332] = {
        [ts_builtin_sym_end] = ACTIONS(878),
        [anon_sym_SEMI] = ACTIONS(878),
        [anon_sym_print] = ACTIONS(882),
        [anon_sym_if] = ACTIONS(882),
        [anon_sym_for] = ACTIONS(882),
        [anon_sym_while] = ACTIONS(882),
        [anon_sym_try] = ACTIONS(882),
        [anon_sym_with] = ACTIONS(882),
        [anon_sym_def] = ACTIONS(882),
        [sym_number] = ACTIONS(882),
        [sym_identifier] = ACTIONS(886),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(878),
        [sym__dedent] = ACTIONS(878),
    },
    [333] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_else] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_number] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [334] = {
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(307),
        [sym__dedent] = ACTIONS(307),
    },
    [335] = {
        [anon_sym_COLON] = ACTIONS(890),
        [sym_comment] = ACTIONS(49),
    },
    [336] = {
        [anon_sym_RPAREN] = ACTIONS(525),
        [anon_sym_STAR] = ACTIONS(527),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(49),
    },
    [337] = {
        [anon_sym_COLON] = ACTIONS(896),
        [sym_comment] = ACTIONS(49),
    },
    [338] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(339),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(783),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [339] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_with] = ACTIONS(183),
        [anon_sym_def] = ACTIONS(183),
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(181),
        [sym__dedent] = ACTIONS(181),
    },
    [340] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(341),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(783),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_in] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_as] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(746),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [343] = {
        [sym_parameters] = STATE(249),
        [anon_sym_LPAREN] = ACTIONS(149),
        [sym_comment] = ACTIONS(49),
    },
    [344] = {
        [aux_sym_with_statement_repeat1] = STATE(259),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(899),
        [sym_comment] = ACTIONS(49),
    },
    [345] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(346),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(783),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [anon_sym_def] = ACTIONS(341),
        [sym_number] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [347] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_COLON] = ACTIONS(901),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [348] = {
        [anon_sym_COMMA] = ACTIONS(904),
        [anon_sym_COLON] = ACTIONS(906),
        [anon_sym_as] = ACTIONS(904),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [349] = {
        [sym__expression] = STATE(351),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [350] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(352),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(846),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [351] = {
        [anon_sym_COLON] = ACTIONS(908),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_print] = ACTIONS(359),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_else] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_while] = ACTIONS(359),
        [anon_sym_try] = ACTIONS(359),
        [anon_sym_except] = ACTIONS(359),
        [anon_sym_finally] = ACTIONS(359),
        [anon_sym_with] = ACTIONS(359),
        [anon_sym_def] = ACTIONS(359),
        [sym_number] = ACTIONS(359),
        [sym_identifier] = ACTIONS(361),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(363),
        [sym__dedent] = ACTIONS(363),
    },
    [353] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(354),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(283),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(287),
    },
    [354] = {
        [sym_except_clause] = STATE(333),
        [sym_finally_clause] = STATE(334),
        [aux_sym_try_statement_repeat1] = STATE(258),
        [anon_sym_except] = ACTIONS(910),
        [anon_sym_finally] = ACTIONS(912),
        [sym_comment] = ACTIONS(49),
    },
    [355] = {
        [anon_sym_COLON] = ACTIONS(914),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [356] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(357),
        [sym__expression] = STATE(320),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(862),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [357] = {
        [sym_else_clause] = STATE(358),
        [ts_builtin_sym_end] = ACTIONS(377),
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_while] = ACTIONS(373),
        [anon_sym_try] = ACTIONS(373),
        [anon_sym_with] = ACTIONS(373),
        [anon_sym_def] = ACTIONS(373),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(377),
        [sym__dedent] = ACTIONS(377),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(379),
        [anon_sym_if] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_while] = ACTIONS(379),
        [anon_sym_try] = ACTIONS(379),
        [anon_sym_with] = ACTIONS(379),
        [anon_sym_def] = ACTIONS(379),
        [sym_number] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [359] = {
        [anon_sym_COLON] = ACTIONS(703),
        [sym_comment] = ACTIONS(49),
    },
    [360] = {
        [anon_sym_in] = ACTIONS(705),
        [sym_comment] = ACTIONS(49),
    },
    [361] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(286),
        [sym__expression] = STATE(363),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(916),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [362] = {
        [sym__expression] = STATE(366),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [363] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(918),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [364] = {
        [sym__expression] = STATE(365),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(920),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [366] = {
        [aux_sym_print_statement_repeat1] = STATE(369),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(923),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(925),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [367] = {
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [368] = {
        [sym__expression] = STATE(372),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [369] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [370] = {
        [sym__expression] = STATE(371),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [371] = {
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
        [anon_sym_PLUS] = ACTIONS(925),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(929),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(925),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [374] = {
        [anon_sym_COLON] = ACTIONS(932),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [375] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(377),
        [sym__expression] = STATE(378),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(934),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [376] = {
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [377] = {
        [ts_builtin_sym_end] = ACTIONS(445),
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(445),
        [sym__dedent] = ACTIONS(445),
    },
    [378] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_elif] = ACTIONS(119),
        [anon_sym_else] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(936),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [379] = {
        [sym__expression] = STATE(380),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(938),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [381] = {
        [aux_sym_print_statement_repeat1] = STATE(384),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(941),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_elif] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(943),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [382] = {
        [sym__expression] = STATE(388),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [383] = {
        [sym__expression] = STATE(387),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(945),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [385] = {
        [sym__expression] = STATE(386),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [386] = {
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
        [anon_sym_PLUS] = ACTIONS(943),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(947),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(943),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [389] = {
        [anon_sym_COLON] = ACTIONS(950),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [390] = {
        [sym__simple_statement] = STATE(262),
        [sym_print_statement] = STATE(241),
        [sym_expression_statement] = STATE(241),
        [sym__suite] = STATE(391),
        [sym__expression] = STATE(378),
        [sym_binary_operator] = STATE(234),
        [anon_sym_print] = ACTIONS(934),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(536),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(538),
    },
    [391] = {
        [sym_elif_clause] = STATE(300),
        [sym_else_clause] = STATE(392),
        [aux_sym_if_statement_repeat1] = STATE(257),
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_print] = ACTIONS(407),
        [anon_sym_if] = ACTIONS(407),
        [anon_sym_elif] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(407),
        [anon_sym_while] = ACTIONS(407),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(407),
        [anon_sym_def] = ACTIONS(407),
        [sym_number] = ACTIONS(407),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(413),
        [sym__dedent] = ACTIONS(413),
    },
    [392] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(425),
        [sym__dedent] = ACTIONS(425),
    },
    [393] = {
        [anon_sym_COMMA] = ACTIONS(952),
        [anon_sym_COLON] = ACTIONS(952),
        [sym_comment] = ACTIONS(49),
    },
    [394] = {
        [ts_builtin_sym_end] = ACTIONS(955),
        [anon_sym_SEMI] = ACTIONS(955),
        [anon_sym_print] = ACTIONS(958),
        [anon_sym_COMMA] = ACTIONS(961),
        [anon_sym_if] = ACTIONS(958),
        [anon_sym_COLON] = ACTIONS(965),
        [anon_sym_elif] = ACTIONS(958),
        [anon_sym_else] = ACTIONS(958),
        [anon_sym_for] = ACTIONS(958),
        [anon_sym_in] = ACTIONS(958),
        [anon_sym_while] = ACTIONS(958),
        [anon_sym_try] = ACTIONS(958),
        [anon_sym_except] = ACTIONS(958),
        [anon_sym_as] = ACTIONS(970),
        [anon_sym_finally] = ACTIONS(958),
        [anon_sym_with] = ACTIONS(958),
        [anon_sym_def] = ACTIONS(958),
        [anon_sym_PLUS] = ACTIONS(972),
        [sym_number] = ACTIONS(958),
        [sym_identifier] = ACTIONS(974),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(955),
        [sym__dedent] = ACTIONS(955),
    },
    [395] = {
        [sym__expression] = STATE(396),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_in] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_as] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(977),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [397] = {
        [aux_sym_print_statement_repeat1] = STATE(400),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(980),
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
        [anon_sym_PLUS] = ACTIONS(982),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [398] = {
        [sym__expression] = STATE(404),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [399] = {
        [sym__expression] = STATE(403),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(984),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_except] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [401] = {
        [sym__expression] = STATE(402),
        [sym_binary_operator] = STATE(234),
        [sym_number] = ACTIONS(523),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(49),
    },
    [402] = {
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
        [anon_sym_PLUS] = ACTIONS(982),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [403] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(986),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(245),
        [anon_sym_else] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_while] = ACTIONS(245),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_except] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(245),
        [anon_sym_def] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(982),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(18),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(217),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(218),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(219),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(220),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(221),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(222),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(223),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(224),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(225),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(226),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(227),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(228),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(229),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(230),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(231),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(24),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(232),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(161),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(233),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(234),
    [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(235),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(236),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(237),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(238),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_splat_parameter, 2),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [527] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [530] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(234),
    [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
    [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
    [548] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [553] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(336),
    [556] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_splat_parameter, 2), SHIFT(335),
    [560] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [565] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [568] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [571] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [574] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [577] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [580] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [583] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(293),
    [586] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [589] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [592] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [595] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [601] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
    [609] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [615] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [618] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [621] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [624] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [628] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [632] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [636] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(73),
    [640] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(340),
    [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [650] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [662] = {.count = 11, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [674] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(221),
    [677] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(282),
    [682] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(227),
    [686] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(229),
    [691] = {.count = 11, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [707] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [713] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [719] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(294),
    [727] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(295),
    [735] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [740] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(228),
    [743] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3),
    [746] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(233),
    [749] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [787] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(265),
    [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [796] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(272),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [803] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(289),
    [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [808] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [814] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [820] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [823] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [831] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(298),
    [834] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [837] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [840] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [843] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(303),
    [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [850] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(307),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [859] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(311),
    [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
    [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [866] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(321),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [875] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(326),
    [878] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [882] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [886] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [890] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [893] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [896] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [901] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(303),
    [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
    [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [920] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(364),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [929] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(368),
    [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
    [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [938] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(379),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [947] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(383),
    [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [952] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [955] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [958] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [961] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [965] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(303),
    [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [974] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [977] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(395),
    [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [986] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(399),
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
