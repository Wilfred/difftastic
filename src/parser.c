#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 400
#define SYMBOL_COUNT 56
#define TOKEN_COUNT 27
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
    sym_number = 21,
    sym_identifier = 22,
    sym_comment = 23,
    sym__newline = 24,
    sym__indent = 25,
    sym__dedent = 26,
    sym_module = 27,
    sym__statement = 28,
    sym__simple_statement = 29,
    sym_print_statement = 30,
    sym_expression_statement = 31,
    sym__compound_statement = 32,
    sym_if_statement = 33,
    sym_elif_clause = 34,
    sym_else_clause = 35,
    sym_for_statement = 36,
    sym_while_statement = 37,
    sym_try_statement = 38,
    sym_except_clause = 39,
    sym_finally_clause = 40,
    sym_with_statement = 41,
    sym_with_item = 42,
    sym_function_definition = 43,
    sym_parameters = 44,
    sym_default_parameter = 45,
    sym__suite = 46,
    sym_expression_list = 47,
    sym__expression = 48,
    sym_binary_operator = 49,
    aux_sym_module_repeat1 = 50,
    aux_sym_print_statement_repeat1 = 51,
    aux_sym_if_statement_repeat1 = 52,
    aux_sym_try_statement_repeat1 = 53,
    aux_sym_with_statement_repeat1 = 54,
    aux_sym_parameters_repeat1 = 55,
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '=')
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
                ADVANCE(13);
            if (lookahead == 'a')
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(39);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == '.')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            ACCEPT_TOKEN(sym_number);
        case 9:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_number);
        case 10:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 11:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 12:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 's')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_as);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'e')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'f')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_def);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(20);
            if (lookahead == 'x')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'i')
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'f')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_elif);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'e')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_else);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'c')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'e')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'p')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 't')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_except);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'i')
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'n')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'a')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(13);
            if (lookahead == 'y')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_finally);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'r')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_for);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'f')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_if);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_in);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'r')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'i')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'n')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 't')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_print);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'r')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(13);
            if (lookahead == 'y')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_try);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'h')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'i')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'e')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_while);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 't')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'h')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_with);
        case 58:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(58);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'o')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'f')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(61);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            LEX_ERROR();
        case 62:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(62);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(10);
            LEX_ERROR();
        case 63:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(63);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 67:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(67);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 68:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(68);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == '+')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 70:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(70);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 71:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(71);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            LEX_ERROR();
        case 72:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(72);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'p')
                ADVANCE(42);
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
                ADVANCE(8);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 74:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(74);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 75:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(75);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 76:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(76);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 77:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(77);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 78:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(78);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(79);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(87);
            if (lookahead == 'i')
                ADVANCE(94);
            LEX_ERROR();
        case 79:
            if (lookahead == 's')
                ADVANCE(80);
            LEX_ERROR();
        case 80:
            ACCEPT_TOKEN(anon_sym_as);
        case 81:
            if (lookahead == 'x')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 'c')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            if (lookahead == 'e')
                ADVANCE(84);
            LEX_ERROR();
        case 84:
            if (lookahead == 'p')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 't')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            ACCEPT_TOKEN(anon_sym_except);
        case 87:
            if (lookahead == 'i')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'n')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'a')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'l')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 'l')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 'y')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            ACCEPT_TOKEN(anon_sym_finally);
        case 94:
            if (lookahead == 'n')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            ACCEPT_TOKEN(anon_sym_in);
        case 96:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(96);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
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
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(79);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
            LEX_ERROR();
        case 99:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(99);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(87);
            LEX_ERROR();
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(87);
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(103);
            if (lookahead == 'x')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 's')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == ':')
                ADVANCE(10);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(87);
            LEX_ERROR();
        case 107:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(107);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(87);
            LEX_ERROR();
        case 108:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(108);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(87);
            if (lookahead == 'i')
                ADVANCE(94);
            LEX_ERROR();
        case 109:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(109);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 111:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(94);
            LEX_ERROR();
        case 112:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(94);
            LEX_ERROR();
        case 113:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(94);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'l')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
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
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 117:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(12);
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
                ADVANCE(7);
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
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'a')
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(39);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(94);
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
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(39);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(39);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == '+')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == 'f')
                ADVANCE(59);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
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
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(11);
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
                ADVANCE(13);
            if (lookahead == 'a')
                ADVANCE(14);
            if (lookahead == 'd')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(39);
            if (lookahead == 'p')
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'w')
                ADVANCE(50);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 58},
    [2] = {.lex_state = 61},
    [3] = {.lex_state = 61},
    [4] = {.lex_state = 61},
    [5] = {.lex_state = 61},
    [6] = {.lex_state = 62},
    [7] = {.lex_state = 61},
    [8] = {.lex_state = 63},
    [9] = {.lex_state = 64, .external_tokens = 2},
    [10] = {.lex_state = 65},
    [11] = {.lex_state = 66, .external_tokens = 2},
    [12] = {.lex_state = 67, .external_tokens = 2},
    [13] = {.lex_state = 68, .external_tokens = 2},
    [14] = {.lex_state = 66, .external_tokens = 2},
    [15] = {.lex_state = 66, .external_tokens = 2},
    [16] = {.lex_state = 69, .external_tokens = 2},
    [17] = {.lex_state = 66, .external_tokens = 2},
    [18] = {.lex_state = 65},
    [19] = {.lex_state = 66, .external_tokens = 2},
    [20] = {.lex_state = 61},
    [21] = {.lex_state = 64, .external_tokens = 2},
    [22] = {.lex_state = 66, .external_tokens = 2},
    [23] = {.lex_state = 70},
    [24] = {.lex_state = 71},
    [25] = {.lex_state = 62},
    [26] = {.lex_state = 72, .external_tokens = 3},
    [27] = {.lex_state = 73, .external_tokens = 4},
    [28] = {.lex_state = 68, .external_tokens = 2},
    [29] = {.lex_state = 66, .external_tokens = 2},
    [30] = {.lex_state = 61},
    [31] = {.lex_state = 61},
    [32] = {.lex_state = 61},
    [33] = {.lex_state = 62},
    [34] = {.lex_state = 61},
    [35] = {.lex_state = 63},
    [36] = {.lex_state = 68, .external_tokens = 2},
    [37] = {.lex_state = 73, .external_tokens = 4},
    [38] = {.lex_state = 67, .external_tokens = 2},
    [39] = {.lex_state = 73, .external_tokens = 4},
    [40] = {.lex_state = 73, .external_tokens = 4},
    [41] = {.lex_state = 73, .external_tokens = 4},
    [42] = {.lex_state = 68, .external_tokens = 2},
    [43] = {.lex_state = 73, .external_tokens = 4},
    [44] = {.lex_state = 73, .external_tokens = 4},
    [45] = {.lex_state = 70},
    [46] = {.lex_state = 62},
    [47] = {.lex_state = 72, .external_tokens = 3},
    [48] = {.lex_state = 61},
    [49] = {.lex_state = 74, .external_tokens = 4},
    [50] = {.lex_state = 73, .external_tokens = 4},
    [51] = {.lex_state = 75, .external_tokens = 4},
    [52] = {.lex_state = 75, .external_tokens = 4},
    [53] = {.lex_state = 73, .external_tokens = 4},
    [54] = {.lex_state = 76, .external_tokens = 4},
    [55] = {.lex_state = 61},
    [56] = {.lex_state = 74, .external_tokens = 4},
    [57] = {.lex_state = 75, .external_tokens = 4},
    [58] = {.lex_state = 73, .external_tokens = 4},
    [59] = {.lex_state = 75, .external_tokens = 4},
    [60] = {.lex_state = 74, .external_tokens = 4},
    [61] = {.lex_state = 61},
    [62] = {.lex_state = 77, .external_tokens = 4},
    [63] = {.lex_state = 61},
    [64] = {.lex_state = 74, .external_tokens = 4},
    [65] = {.lex_state = 74, .external_tokens = 4},
    [66] = {.lex_state = 78},
    [67] = {.lex_state = 96},
    [68] = {.lex_state = 97},
    [69] = {.lex_state = 61},
    [70] = {.lex_state = 61},
    [71] = {.lex_state = 78},
    [72] = {.lex_state = 98},
    [73] = {.lex_state = 61},
    [74] = {.lex_state = 72, .external_tokens = 3},
    [75] = {.lex_state = 96},
    [76] = {.lex_state = 61},
    [77] = {.lex_state = 72, .external_tokens = 3},
    [78] = {.lex_state = 73, .external_tokens = 4},
    [79] = {.lex_state = 96},
    [80] = {.lex_state = 73, .external_tokens = 4},
    [81] = {.lex_state = 96},
    [82] = {.lex_state = 72, .external_tokens = 3},
    [83] = {.lex_state = 61},
    [84] = {.lex_state = 73, .external_tokens = 4},
    [85] = {.lex_state = 99},
    [86] = {.lex_state = 99},
    [87] = {.lex_state = 99},
    [88] = {.lex_state = 100},
    [89] = {.lex_state = 61},
    [90] = {.lex_state = 62},
    [91] = {.lex_state = 101, .external_tokens = 4},
    [92] = {.lex_state = 73, .external_tokens = 4},
    [93] = {.lex_state = 101, .external_tokens = 4},
    [94] = {.lex_state = 62},
    [95] = {.lex_state = 104, .external_tokens = 4},
    [96] = {.lex_state = 101, .external_tokens = 4},
    [97] = {.lex_state = 73, .external_tokens = 4},
    [98] = {.lex_state = 73, .external_tokens = 4},
    [99] = {.lex_state = 72, .external_tokens = 3},
    [100] = {.lex_state = 104, .external_tokens = 4},
    [101] = {.lex_state = 72, .external_tokens = 3},
    [102] = {.lex_state = 73, .external_tokens = 4},
    [103] = {.lex_state = 97},
    [104] = {.lex_state = 61},
    [105] = {.lex_state = 72, .external_tokens = 3},
    [106] = {.lex_state = 105},
    [107] = {.lex_state = 72, .external_tokens = 3},
    [108] = {.lex_state = 101, .external_tokens = 4},
    [109] = {.lex_state = 101, .external_tokens = 4},
    [110] = {.lex_state = 99},
    [111] = {.lex_state = 73, .external_tokens = 4},
    [112] = {.lex_state = 99},
    [113] = {.lex_state = 106},
    [114] = {.lex_state = 61},
    [115] = {.lex_state = 107},
    [116] = {.lex_state = 61},
    [117] = {.lex_state = 108},
    [118] = {.lex_state = 108},
    [119] = {.lex_state = 105},
    [120] = {.lex_state = 72, .external_tokens = 3},
    [121] = {.lex_state = 109, .external_tokens = 4},
    [122] = {.lex_state = 73, .external_tokens = 4},
    [123] = {.lex_state = 111},
    [124] = {.lex_state = 112},
    [125] = {.lex_state = 113},
    [126] = {.lex_state = 61},
    [127] = {.lex_state = 62},
    [128] = {.lex_state = 72, .external_tokens = 3},
    [129] = {.lex_state = 109, .external_tokens = 4},
    [130] = {.lex_state = 73, .external_tokens = 4},
    [131] = {.lex_state = 105},
    [132] = {.lex_state = 72, .external_tokens = 3},
    [133] = {.lex_state = 114, .external_tokens = 4},
    [134] = {.lex_state = 61},
    [135] = {.lex_state = 114, .external_tokens = 4},
    [136] = {.lex_state = 73, .external_tokens = 4},
    [137] = {.lex_state = 114, .external_tokens = 4},
    [138] = {.lex_state = 114, .external_tokens = 4},
    [139] = {.lex_state = 73, .external_tokens = 4},
    [140] = {.lex_state = 105},
    [141] = {.lex_state = 72, .external_tokens = 3},
    [142] = {.lex_state = 114, .external_tokens = 4},
    [143] = {.lex_state = 64, .external_tokens = 2},
    [144] = {.lex_state = 61},
    [145] = {.lex_state = 116, .external_tokens = 2},
    [146] = {.lex_state = 61},
    [147] = {.lex_state = 64, .external_tokens = 2},
    [148] = {.lex_state = 64, .external_tokens = 2},
    [149] = {.lex_state = 62},
    [150] = {.lex_state = 117},
    [151] = {.lex_state = 118},
    [152] = {.lex_state = 63},
    [153] = {.lex_state = 117},
    [154] = {.lex_state = 118},
    [155] = {.lex_state = 71},
    [156] = {.lex_state = 62},
    [157] = {.lex_state = 62},
    [158] = {.lex_state = 61},
    [159] = {.lex_state = 119},
    [160] = {.lex_state = 71},
    [161] = {.lex_state = 62},
    [162] = {.lex_state = 96},
    [163] = {.lex_state = 72, .external_tokens = 3},
    [164] = {.lex_state = 96},
    [165] = {.lex_state = 72, .external_tokens = 3},
    [166] = {.lex_state = 66, .external_tokens = 2},
    [167] = {.lex_state = 66, .external_tokens = 2},
    [168] = {.lex_state = 72, .external_tokens = 3},
    [169] = {.lex_state = 99},
    [170] = {.lex_state = 61},
    [171] = {.lex_state = 62},
    [172] = {.lex_state = 120, .external_tokens = 2},
    [173] = {.lex_state = 66, .external_tokens = 2},
    [174] = {.lex_state = 120, .external_tokens = 2},
    [175] = {.lex_state = 62},
    [176] = {.lex_state = 121, .external_tokens = 2},
    [177] = {.lex_state = 120, .external_tokens = 2},
    [178] = {.lex_state = 66, .external_tokens = 2},
    [179] = {.lex_state = 66, .external_tokens = 2},
    [180] = {.lex_state = 72, .external_tokens = 3},
    [181] = {.lex_state = 121, .external_tokens = 2},
    [182] = {.lex_state = 72, .external_tokens = 3},
    [183] = {.lex_state = 66, .external_tokens = 2},
    [184] = {.lex_state = 97},
    [185] = {.lex_state = 61},
    [186] = {.lex_state = 72, .external_tokens = 3},
    [187] = {.lex_state = 105},
    [188] = {.lex_state = 72, .external_tokens = 3},
    [189] = {.lex_state = 120, .external_tokens = 2},
    [190] = {.lex_state = 120, .external_tokens = 2},
    [191] = {.lex_state = 105},
    [192] = {.lex_state = 72, .external_tokens = 3},
    [193] = {.lex_state = 122, .external_tokens = 2},
    [194] = {.lex_state = 66, .external_tokens = 2},
    [195] = {.lex_state = 111},
    [196] = {.lex_state = 61},
    [197] = {.lex_state = 62},
    [198] = {.lex_state = 72, .external_tokens = 3},
    [199] = {.lex_state = 122, .external_tokens = 2},
    [200] = {.lex_state = 66, .external_tokens = 2},
    [201] = {.lex_state = 105},
    [202] = {.lex_state = 72, .external_tokens = 3},
    [203] = {.lex_state = 123, .external_tokens = 2},
    [204] = {.lex_state = 61},
    [205] = {.lex_state = 123, .external_tokens = 2},
    [206] = {.lex_state = 66, .external_tokens = 2},
    [207] = {.lex_state = 123, .external_tokens = 2},
    [208] = {.lex_state = 123, .external_tokens = 2},
    [209] = {.lex_state = 66, .external_tokens = 2},
    [210] = {.lex_state = 105},
    [211] = {.lex_state = 72, .external_tokens = 3},
    [212] = {.lex_state = 123, .external_tokens = 2},
    [213] = {.lex_state = 61},
    [214] = {.lex_state = 124},
    [215] = {.lex_state = 61},
    [216] = {.lex_state = 72, .external_tokens = 3},
    [217] = {.lex_state = 61},
    [218] = {.lex_state = 62},
    [219] = {.lex_state = 61},
    [220] = {.lex_state = 61},
    [221] = {.lex_state = 61},
    [222] = {.lex_state = 62},
    [223] = {.lex_state = 61},
    [224] = {.lex_state = 61},
    [225] = {.lex_state = 62},
    [226] = {.lex_state = 61},
    [227] = {.lex_state = 63},
    [228] = {.lex_state = 62},
    [229] = {.lex_state = 61},
    [230] = {.lex_state = 125, .external_tokens = 5},
    [231] = {.lex_state = 0, .external_tokens = 5},
    [232] = {.lex_state = 66, .external_tokens = 5},
    [233] = {.lex_state = 73, .external_tokens = 4},
    [234] = {.lex_state = 68, .external_tokens = 5},
    [235] = {.lex_state = 66, .external_tokens = 5},
    [236] = {.lex_state = 68, .external_tokens = 5},
    [237] = {.lex_state = 68, .external_tokens = 5},
    [238] = {.lex_state = 66, .external_tokens = 5},
    [239] = {.lex_state = 66, .external_tokens = 5},
    [240] = {.lex_state = 123, .external_tokens = 5},
    [241] = {.lex_state = 121, .external_tokens = 5},
    [242] = {.lex_state = 120, .external_tokens = 5},
    [243] = {.lex_state = 66, .external_tokens = 5},
    [244] = {.lex_state = 96},
    [245] = {.lex_state = 62},
    [246] = {.lex_state = 118},
    [247] = {.lex_state = 68, .external_tokens = 5},
    [248] = {.lex_state = 126},
    [249] = {.lex_state = 125, .external_tokens = 5},
    [250] = {.lex_state = 66, .external_tokens = 5},
    [251] = {.lex_state = 127, .external_tokens = 5},
    [252] = {.lex_state = 123, .external_tokens = 5},
    [253] = {.lex_state = 120, .external_tokens = 5},
    [254] = {.lex_state = 96},
    [255] = {.lex_state = 72, .external_tokens = 3},
    [256] = {.lex_state = 61},
    [257] = {.lex_state = 68, .external_tokens = 5},
    [258] = {.lex_state = 66, .external_tokens = 5},
    [259] = {.lex_state = 128, .external_tokens = 5},
    [260] = {.lex_state = 61},
    [261] = {.lex_state = 128, .external_tokens = 5},
    [262] = {.lex_state = 68, .external_tokens = 5},
    [263] = {.lex_state = 73, .external_tokens = 4},
    [264] = {.lex_state = 68, .external_tokens = 5},
    [265] = {.lex_state = 129, .external_tokens = 5},
    [266] = {.lex_state = 61},
    [267] = {.lex_state = 61},
    [268] = {.lex_state = 130, .external_tokens = 5},
    [269] = {.lex_state = 61},
    [270] = {.lex_state = 129, .external_tokens = 5},
    [271] = {.lex_state = 129, .external_tokens = 5},
    [272] = {.lex_state = 129, .external_tokens = 5},
    [273] = {.lex_state = 121, .external_tokens = 5},
    [274] = {.lex_state = 120, .external_tokens = 5},
    [275] = {.lex_state = 66, .external_tokens = 5},
    [276] = {.lex_state = 66, .external_tokens = 5},
    [277] = {.lex_state = 62},
    [278] = {.lex_state = 123, .external_tokens = 5},
    [279] = {.lex_state = 66, .external_tokens = 5},
    [280] = {.lex_state = 72, .external_tokens = 3},
    [281] = {.lex_state = 121, .external_tokens = 5},
    [282] = {.lex_state = 61},
    [283] = {.lex_state = 131, .external_tokens = 5},
    [284] = {.lex_state = 61},
    [285] = {.lex_state = 131, .external_tokens = 5},
    [286] = {.lex_state = 66, .external_tokens = 5},
    [287] = {.lex_state = 67, .external_tokens = 2},
    [288] = {.lex_state = 66, .external_tokens = 5},
    [289] = {.lex_state = 61},
    [290] = {.lex_state = 72, .external_tokens = 3},
    [291] = {.lex_state = 68, .external_tokens = 5},
    [292] = {.lex_state = 69, .external_tokens = 5},
    [293] = {.lex_state = 61},
    [294] = {.lex_state = 69, .external_tokens = 5},
    [295] = {.lex_state = 123, .external_tokens = 5},
    [296] = {.lex_state = 66, .external_tokens = 5},
    [297] = {.lex_state = 131, .external_tokens = 5},
    [298] = {.lex_state = 72, .external_tokens = 3},
    [299] = {.lex_state = 61},
    [300] = {.lex_state = 120, .external_tokens = 5},
    [301] = {.lex_state = 132, .external_tokens = 5},
    [302] = {.lex_state = 61},
    [303] = {.lex_state = 132, .external_tokens = 5},
    [304] = {.lex_state = 133, .external_tokens = 5},
    [305] = {.lex_state = 61},
    [306] = {.lex_state = 61},
    [307] = {.lex_state = 134, .external_tokens = 5},
    [308] = {.lex_state = 61},
    [309] = {.lex_state = 133, .external_tokens = 5},
    [310] = {.lex_state = 133, .external_tokens = 5},
    [311] = {.lex_state = 133, .external_tokens = 5},
    [312] = {.lex_state = 72, .external_tokens = 3},
    [313] = {.lex_state = 61},
    [314] = {.lex_state = 122, .external_tokens = 5},
    [315] = {.lex_state = 135, .external_tokens = 5},
    [316] = {.lex_state = 61},
    [317] = {.lex_state = 135, .external_tokens = 5},
    [318] = {.lex_state = 66, .external_tokens = 5},
    [319] = {.lex_state = 136, .external_tokens = 5},
    [320] = {.lex_state = 61},
    [321] = {.lex_state = 61},
    [322] = {.lex_state = 137, .external_tokens = 5},
    [323] = {.lex_state = 61},
    [324] = {.lex_state = 136, .external_tokens = 5},
    [325] = {.lex_state = 136, .external_tokens = 5},
    [326] = {.lex_state = 136, .external_tokens = 5},
    [327] = {.lex_state = 66, .external_tokens = 5},
    [328] = {.lex_state = 120, .external_tokens = 5},
    [329] = {.lex_state = 66, .external_tokens = 5},
    [330] = {.lex_state = 71},
    [331] = {.lex_state = 62},
    [332] = {.lex_state = 62},
    [333] = {.lex_state = 72, .external_tokens = 3},
    [334] = {.lex_state = 66, .external_tokens = 5},
    [335] = {.lex_state = 72, .external_tokens = 3},
    [336] = {.lex_state = 66, .external_tokens = 5},
    [337] = {.lex_state = 125, .external_tokens = 5},
    [338] = {.lex_state = 70},
    [339] = {.lex_state = 96},
    [340] = {.lex_state = 72, .external_tokens = 3},
    [341] = {.lex_state = 66, .external_tokens = 5},
    [342] = {.lex_state = 98},
    [343] = {.lex_state = 97},
    [344] = {.lex_state = 61},
    [345] = {.lex_state = 72, .external_tokens = 3},
    [346] = {.lex_state = 105},
    [347] = {.lex_state = 120, .external_tokens = 5},
    [348] = {.lex_state = 72, .external_tokens = 3},
    [349] = {.lex_state = 99},
    [350] = {.lex_state = 105},
    [351] = {.lex_state = 72, .external_tokens = 3},
    [352] = {.lex_state = 122, .external_tokens = 5},
    [353] = {.lex_state = 66, .external_tokens = 5},
    [354] = {.lex_state = 62},
    [355] = {.lex_state = 111},
    [356] = {.lex_state = 72, .external_tokens = 3},
    [357] = {.lex_state = 61},
    [358] = {.lex_state = 138, .external_tokens = 5},
    [359] = {.lex_state = 61},
    [360] = {.lex_state = 138, .external_tokens = 5},
    [361] = {.lex_state = 139, .external_tokens = 5},
    [362] = {.lex_state = 61},
    [363] = {.lex_state = 61},
    [364] = {.lex_state = 140, .external_tokens = 5},
    [365] = {.lex_state = 61},
    [366] = {.lex_state = 139, .external_tokens = 5},
    [367] = {.lex_state = 139, .external_tokens = 5},
    [368] = {.lex_state = 139, .external_tokens = 5},
    [369] = {.lex_state = 105},
    [370] = {.lex_state = 72, .external_tokens = 3},
    [371] = {.lex_state = 61},
    [372] = {.lex_state = 123, .external_tokens = 5},
    [373] = {.lex_state = 141, .external_tokens = 5},
    [374] = {.lex_state = 61},
    [375] = {.lex_state = 141, .external_tokens = 5},
    [376] = {.lex_state = 142, .external_tokens = 5},
    [377] = {.lex_state = 61},
    [378] = {.lex_state = 61},
    [379] = {.lex_state = 143, .external_tokens = 5},
    [380] = {.lex_state = 61},
    [381] = {.lex_state = 142, .external_tokens = 5},
    [382] = {.lex_state = 142, .external_tokens = 5},
    [383] = {.lex_state = 142, .external_tokens = 5},
    [384] = {.lex_state = 105},
    [385] = {.lex_state = 72, .external_tokens = 3},
    [386] = {.lex_state = 123, .external_tokens = 5},
    [387] = {.lex_state = 66, .external_tokens = 5},
    [388] = {.lex_state = 96},
    [389] = {.lex_state = 144, .external_tokens = 5},
    [390] = {.lex_state = 61},
    [391] = {.lex_state = 144, .external_tokens = 5},
    [392] = {.lex_state = 64, .external_tokens = 5},
    [393] = {.lex_state = 61},
    [394] = {.lex_state = 61},
    [395] = {.lex_state = 116, .external_tokens = 5},
    [396] = {.lex_state = 61},
    [397] = {.lex_state = 64, .external_tokens = 5},
    [398] = {.lex_state = 64, .external_tokens = 5},
    [399] = {.lex_state = 64, .external_tokens = 5},
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
        [sym__statement] = STATE(235),
        [sym__simple_statement] = STATE(236),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__compound_statement] = STATE(238),
        [sym_if_statement] = STATE(239),
        [sym_elif_clause] = STATE(240),
        [sym_else_clause] = STATE(241),
        [sym_for_statement] = STATE(239),
        [sym_while_statement] = STATE(239),
        [sym_try_statement] = STATE(239),
        [sym_except_clause] = STATE(242),
        [sym_finally_clause] = STATE(243),
        [sym_with_statement] = STATE(239),
        [sym_with_item] = STATE(244),
        [sym_function_definition] = STATE(239),
        [sym_parameters] = STATE(245),
        [sym_default_parameter] = STATE(246),
        [sym__suite] = STATE(247),
        [sym_expression_list] = STATE(248),
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(230),
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
        [sym_number] = ACTIONS(43),
        [sym_identifier] = ACTIONS(45),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(49),
        [sym__indent] = ACTIONS(51),
        [sym__dedent] = ACTIONS(53),
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
        [ts_builtin_sym_end] = ACTIONS(55),
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(59),
        [anon_sym_for] = ACTIONS(61),
        [anon_sym_while] = ACTIONS(63),
        [anon_sym_try] = ACTIONS(65),
        [anon_sym_with] = ACTIONS(67),
        [anon_sym_def] = ACTIONS(69),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
    },
    [2] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(47),
    },
    [3] = {
        [sym__expression] = STATE(201),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [4] = {
        [sym_expression_list] = STATE(195),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [5] = {
        [sym__expression] = STATE(191),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [6] = {
        [anon_sym_COLON] = ACTIONS(77),
        [sym_comment] = ACTIONS(47),
    },
    [7] = {
        [sym_with_item] = STATE(162),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [8] = {
        [sym_identifier] = ACTIONS(79),
        [sym_comment] = ACTIONS(47),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_SEMI] = ACTIONS(81),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_COMMA] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(83),
        [anon_sym_elif] = ACTIONS(83),
        [anon_sym_else] = ACTIONS(83),
        [anon_sym_for] = ACTIONS(83),
        [anon_sym_while] = ACTIONS(83),
        [anon_sym_try] = ACTIONS(83),
        [anon_sym_except] = ACTIONS(83),
        [anon_sym_finally] = ACTIONS(83),
        [anon_sym_with] = ACTIONS(83),
        [anon_sym_def] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(81),
        [sym_number] = ACTIONS(83),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(81),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(87),
        [sym_comment] = ACTIONS(47),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_SEMI] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(91),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(91),
        [anon_sym_def] = ACTIONS(91),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(89),
    },
    [12] = {
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(95),
    },
    [13] = {
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
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(99),
        [sym_number] = ACTIONS(99),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(97),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_SEMI] = ACTIONS(103),
        [anon_sym_print] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(105),
        [anon_sym_for] = ACTIONS(105),
        [anon_sym_while] = ACTIONS(105),
        [anon_sym_try] = ACTIONS(105),
        [anon_sym_with] = ACTIONS(105),
        [anon_sym_def] = ACTIONS(105),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(103),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(109),
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(109),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_elif] = ACTIONS(117),
        [anon_sym_else] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
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
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(125),
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(59),
        [anon_sym_for] = ACTIONS(61),
        [anon_sym_while] = ACTIONS(63),
        [anon_sym_try] = ACTIONS(65),
        [anon_sym_with] = ACTIONS(67),
        [anon_sym_def] = ACTIONS(69),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(125),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [sym_comment] = ACTIONS(47),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(129),
    },
    [20] = {
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(47),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(141),
    },
    [23] = {
        [sym_parameters] = STATE(25),
        [anon_sym_LPAREN] = ACTIONS(147),
        [sym_comment] = ACTIONS(47),
    },
    [24] = {
        [sym_default_parameter] = STATE(151),
        [aux_sym_parameters_repeat1] = STATE(152),
        [anon_sym_RPAREN] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(47),
    },
    [25] = {
        [anon_sym_COLON] = ACTIONS(153),
        [sym_comment] = ACTIONS(47),
    },
    [26] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(29),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(169),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_elif] = ACTIONS(173),
        [anon_sym_else] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_except] = ACTIONS(173),
        [anon_sym_finally] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(171),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(177),
    },
    [30] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [31] = {
        [sym_expression_list] = STATE(123),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [32] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [33] = {
        [anon_sym_COLON] = ACTIONS(183),
        [sym_comment] = ACTIONS(47),
    },
    [34] = {
        [sym_with_item] = STATE(67),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [35] = {
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(47),
    },
    [36] = {
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
        [anon_sym_def] = ACTIONS(189),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(187),
    },
    [37] = {
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(91),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(91),
        [anon_sym_def] = ACTIONS(91),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(93),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(89),
    },
    [38] = {
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(193),
    },
    [39] = {
        [anon_sym_print] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(105),
        [anon_sym_for] = ACTIONS(105),
        [anon_sym_while] = ACTIONS(105),
        [anon_sym_try] = ACTIONS(105),
        [anon_sym_with] = ACTIONS(105),
        [anon_sym_def] = ACTIONS(105),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(103),
    },
    [40] = {
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(109),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(195),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_SEMI] = ACTIONS(197),
        [anon_sym_print] = ACTIONS(199),
        [anon_sym_if] = ACTIONS(199),
        [anon_sym_elif] = ACTIONS(199),
        [anon_sym_else] = ACTIONS(199),
        [anon_sym_for] = ACTIONS(199),
        [anon_sym_while] = ACTIONS(199),
        [anon_sym_try] = ACTIONS(199),
        [anon_sym_except] = ACTIONS(199),
        [anon_sym_finally] = ACTIONS(199),
        [anon_sym_with] = ACTIONS(199),
        [anon_sym_def] = ACTIONS(199),
        [sym_number] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(197),
    },
    [43] = {
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(129),
    },
    [44] = {
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(141),
    },
    [45] = {
        [sym_parameters] = STATE(46),
        [anon_sym_LPAREN] = ACTIONS(147),
        [sym_comment] = ACTIONS(47),
    },
    [46] = {
        [anon_sym_COLON] = ACTIONS(203),
        [sym_comment] = ACTIONS(47),
    },
    [47] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(53),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [48] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(47),
    },
    [49] = {
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_COMMA] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(83),
        [anon_sym_elif] = ACTIONS(83),
        [anon_sym_else] = ACTIONS(83),
        [anon_sym_for] = ACTIONS(83),
        [anon_sym_while] = ACTIONS(83),
        [anon_sym_try] = ACTIONS(83),
        [anon_sym_except] = ACTIONS(83),
        [anon_sym_finally] = ACTIONS(83),
        [anon_sym_with] = ACTIONS(83),
        [anon_sym_def] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(81),
        [sym_number] = ACTIONS(83),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(81),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(213),
    },
    [51] = {
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_elif] = ACTIONS(173),
        [anon_sym_else] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_except] = ACTIONS(173),
        [anon_sym_finally] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(171),
    },
    [52] = {
        [anon_sym_print] = ACTIONS(99),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_elif] = ACTIONS(99),
        [anon_sym_else] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(99),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_except] = ACTIONS(99),
        [anon_sym_finally] = ACTIONS(99),
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(99),
        [sym_number] = ACTIONS(99),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(97),
    },
    [53] = {
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(177),
    },
    [54] = {
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_elif] = ACTIONS(117),
        [anon_sym_else] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(215),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(115),
    },
    [55] = {
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(47),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(135),
    },
    [57] = {
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
        [anon_sym_def] = ACTIONS(189),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(187),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(217),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(199),
        [anon_sym_if] = ACTIONS(199),
        [anon_sym_elif] = ACTIONS(199),
        [anon_sym_else] = ACTIONS(199),
        [anon_sym_for] = ACTIONS(199),
        [anon_sym_while] = ACTIONS(199),
        [anon_sym_try] = ACTIONS(199),
        [anon_sym_except] = ACTIONS(199),
        [anon_sym_finally] = ACTIONS(199),
        [anon_sym_with] = ACTIONS(199),
        [anon_sym_def] = ACTIONS(199),
        [sym_number] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(197),
    },
    [60] = {
        [aux_sym_print_statement_repeat1] = STATE(62),
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
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(215),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(225),
    },
    [61] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(47),
    },
    [62] = {
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
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(233),
    },
    [63] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(49),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(47),
    },
    [64] = {
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(215),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(237),
    },
    [65] = {
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
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
        [anon_sym_PLUS] = ACTIONS(215),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(243),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(81),
        [anon_sym_COLON] = ACTIONS(81),
        [anon_sym_in] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_as] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [anon_sym_RPAREN] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(81),
        [sym_comment] = ACTIONS(47),
    },
    [67] = {
        [aux_sym_with_statement_repeat1] = STATE(75),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(47),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_as] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [69] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [70] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(135),
        [sym_comment] = ACTIONS(47),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [73] = {
        [sym_with_item] = STATE(81),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [74] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(80),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_COLON] = ACTIONS(261),
        [sym_comment] = ACTIONS(47),
    },
    [76] = {
        [sym_with_item] = STATE(79),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [77] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(78),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [78] = {
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(267),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(269),
        [sym_comment] = ACTIONS(47),
    },
    [80] = {
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(275),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_COLON] = ACTIONS(277),
        [sym_comment] = ACTIONS(47),
    },
    [82] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(87),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(279),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(283),
    },
    [83] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(285),
    },
    [85] = {
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [sym_comment] = ACTIONS(47),
    },
    [86] = {
        [anon_sym_except] = ACTIONS(97),
        [anon_sym_finally] = ACTIONS(97),
        [sym_comment] = ACTIONS(47),
    },
    [87] = {
        [sym_except_clause] = STATE(91),
        [sym_finally_clause] = STATE(92),
        [aux_sym_try_statement_repeat1] = STATE(93),
        [anon_sym_except] = ACTIONS(287),
        [anon_sym_finally] = ACTIONS(289),
        [sym_comment] = ACTIONS(47),
    },
    [88] = {
        [anon_sym_except] = ACTIONS(115),
        [anon_sym_finally] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [89] = {
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [90] = {
        [anon_sym_COLON] = ACTIONS(291),
        [sym_comment] = ACTIONS(47),
    },
    [91] = {
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [anon_sym_with] = ACTIONS(293),
        [anon_sym_def] = ACTIONS(293),
        [sym_number] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(297),
    },
    [92] = {
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(303),
    },
    [93] = {
        [sym_else_clause] = STATE(95),
        [sym_except_clause] = STATE(96),
        [sym_finally_clause] = STATE(97),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(307),
        [anon_sym_finally] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(303),
    },
    [94] = {
        [anon_sym_COLON] = ACTIONS(311),
        [sym_comment] = ACTIONS(47),
    },
    [95] = {
        [sym_finally_clause] = STATE(98),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_finally] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(313),
        [anon_sym_def] = ACTIONS(313),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(317),
    },
    [96] = {
        [anon_sym_print] = ACTIONS(319),
        [anon_sym_if] = ACTIONS(319),
        [anon_sym_else] = ACTIONS(319),
        [anon_sym_for] = ACTIONS(319),
        [anon_sym_while] = ACTIONS(319),
        [anon_sym_try] = ACTIONS(319),
        [anon_sym_except] = ACTIONS(319),
        [anon_sym_finally] = ACTIONS(319),
        [anon_sym_with] = ACTIONS(319),
        [anon_sym_def] = ACTIONS(319),
        [sym_number] = ACTIONS(319),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(323),
    },
    [97] = {
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(313),
        [anon_sym_def] = ACTIONS(313),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(317),
    },
    [98] = {
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(329),
    },
    [99] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(100),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [100] = {
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [anon_sym_finally] = ACTIONS(331),
        [anon_sym_with] = ACTIONS(331),
        [anon_sym_def] = ACTIONS(331),
        [sym_number] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(335),
    },
    [101] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(102),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [102] = {
        [anon_sym_print] = ACTIONS(337),
        [anon_sym_if] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(337),
        [anon_sym_try] = ACTIONS(337),
        [anon_sym_with] = ACTIONS(337),
        [anon_sym_def] = ACTIONS(337),
        [sym_number] = ACTIONS(337),
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(341),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [104] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [105] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(109),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [106] = {
        [anon_sym_COLON] = ACTIONS(347),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [107] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(108),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [108] = {
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(351),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(353),
    },
    [109] = {
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_except] = ACTIONS(355),
        [anon_sym_finally] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [anon_sym_def] = ACTIONS(355),
        [sym_number] = ACTIONS(355),
        [sym_identifier] = ACTIONS(357),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(359),
    },
    [110] = {
        [anon_sym_except] = ACTIONS(187),
        [anon_sym_finally] = ACTIONS(187),
        [sym_comment] = ACTIONS(47),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(361),
    },
    [112] = {
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [sym_comment] = ACTIONS(47),
    },
    [113] = {
        [aux_sym_print_statement_repeat1] = STATE(115),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [114] = {
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [sym_comment] = ACTIONS(47),
    },
    [116] = {
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_COLON] = ACTIONS(237),
        [anon_sym_in] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_COLON] = ACTIONS(243),
        [anon_sym_in] = ACTIONS(243),
        [anon_sym_except] = ACTIONS(243),
        [anon_sym_finally] = ACTIONS(243),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [119] = {
        [anon_sym_COLON] = ACTIONS(367),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [120] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(121),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [121] = {
        [sym_else_clause] = STATE(122),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [anon_sym_try] = ACTIONS(369),
        [anon_sym_with] = ACTIONS(369),
        [anon_sym_def] = ACTIONS(369),
        [sym_number] = ACTIONS(369),
        [sym_identifier] = ACTIONS(371),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(373),
    },
    [122] = {
        [anon_sym_print] = ACTIONS(375),
        [anon_sym_if] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_while] = ACTIONS(375),
        [anon_sym_try] = ACTIONS(375),
        [anon_sym_with] = ACTIONS(375),
        [anon_sym_def] = ACTIONS(375),
        [sym_number] = ACTIONS(375),
        [sym_identifier] = ACTIONS(377),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(379),
    },
    [123] = {
        [anon_sym_in] = ACTIONS(381),
        [sym_comment] = ACTIONS(47),
    },
    [124] = {
        [aux_sym_print_statement_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [sym_comment] = ACTIONS(47),
    },
    [126] = {
        [sym_expression_list] = STATE(127),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [127] = {
        [anon_sym_COLON] = ACTIONS(387),
        [sym_comment] = ACTIONS(47),
    },
    [128] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(129),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [129] = {
        [sym_else_clause] = STATE(130),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [anon_sym_def] = ACTIONS(389),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(393),
    },
    [130] = {
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [anon_sym_def] = ACTIONS(395),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(399),
    },
    [131] = {
        [anon_sym_COLON] = ACTIONS(401),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [132] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(133),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [133] = {
        [sym_elif_clause] = STATE(135),
        [sym_else_clause] = STATE(136),
        [aux_sym_if_statement_repeat1] = STATE(137),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(405),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(409),
    },
    [134] = {
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [135] = {
        [anon_sym_print] = ACTIONS(411),
        [anon_sym_if] = ACTIONS(411),
        [anon_sym_elif] = ACTIONS(411),
        [anon_sym_else] = ACTIONS(411),
        [anon_sym_for] = ACTIONS(411),
        [anon_sym_while] = ACTIONS(411),
        [anon_sym_try] = ACTIONS(411),
        [anon_sym_with] = ACTIONS(411),
        [anon_sym_def] = ACTIONS(411),
        [sym_number] = ACTIONS(411),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(415),
    },
    [136] = {
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(417),
        [anon_sym_with] = ACTIONS(417),
        [anon_sym_def] = ACTIONS(417),
        [sym_number] = ACTIONS(417),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(421),
    },
    [137] = {
        [sym_elif_clause] = STATE(138),
        [sym_else_clause] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(417),
        [anon_sym_elif] = ACTIONS(405),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(417),
        [anon_sym_with] = ACTIONS(417),
        [anon_sym_def] = ACTIONS(417),
        [sym_number] = ACTIONS(417),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(421),
    },
    [138] = {
        [anon_sym_print] = ACTIONS(423),
        [anon_sym_if] = ACTIONS(423),
        [anon_sym_elif] = ACTIONS(423),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_while] = ACTIONS(423),
        [anon_sym_try] = ACTIONS(423),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(423),
        [sym_number] = ACTIONS(423),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(427),
    },
    [139] = {
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(431),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(433),
    },
    [140] = {
        [anon_sym_COLON] = ACTIONS(435),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [141] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(142),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(205),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(211),
    },
    [142] = {
        [anon_sym_print] = ACTIONS(437),
        [anon_sym_if] = ACTIONS(437),
        [anon_sym_elif] = ACTIONS(437),
        [anon_sym_else] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_while] = ACTIONS(437),
        [anon_sym_try] = ACTIONS(437),
        [anon_sym_with] = ACTIONS(437),
        [anon_sym_def] = ACTIONS(437),
        [sym_number] = ACTIONS(437),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(441),
    },
    [143] = {
        [aux_sym_print_statement_repeat1] = STATE(145),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
    },
    [144] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(47),
    },
    [145] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
    },
    [146] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(9),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(47),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
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
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(447),
        [sym_comment] = ACTIONS(47),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(451),
        [anon_sym_EQ] = ACTIONS(453),
        [sym_comment] = ACTIONS(47),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(451),
        [sym_comment] = ACTIONS(47),
    },
    [152] = {
        [sym_default_parameter] = STATE(154),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(47),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_RPAREN] = ACTIONS(459),
        [anon_sym_EQ] = ACTIONS(453),
        [sym_comment] = ACTIONS(47),
    },
    [154] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(47),
    },
    [155] = {
        [anon_sym_RPAREN] = ACTIONS(461),
        [sym_identifier] = ACTIONS(463),
        [sym_comment] = ACTIONS(47),
    },
    [156] = {
        [anon_sym_COLON] = ACTIONS(465),
        [sym_comment] = ACTIONS(47),
    },
    [157] = {
        [anon_sym_COLON] = ACTIONS(467),
        [sym_comment] = ACTIONS(47),
    },
    [158] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_RPAREN] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [160] = {
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_identifier] = ACTIONS(471),
        [sym_comment] = ACTIONS(47),
    },
    [161] = {
        [anon_sym_COLON] = ACTIONS(473),
        [sym_comment] = ACTIONS(47),
    },
    [162] = {
        [aux_sym_with_statement_repeat1] = STATE(164),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(475),
        [sym_comment] = ACTIONS(47),
    },
    [163] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(167),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [164] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_COLON] = ACTIONS(477),
        [sym_comment] = ACTIONS(47),
    },
    [165] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(166),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(267),
    },
    [167] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(275),
    },
    [168] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(169),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(279),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(283),
    },
    [169] = {
        [sym_except_clause] = STATE(172),
        [sym_finally_clause] = STATE(173),
        [aux_sym_try_statement_repeat1] = STATE(174),
        [anon_sym_except] = ACTIONS(479),
        [anon_sym_finally] = ACTIONS(481),
        [sym_comment] = ACTIONS(47),
    },
    [170] = {
        [sym__expression] = STATE(184),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(483),
        [sym_comment] = ACTIONS(47),
    },
    [172] = {
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
        [anon_sym_with] = ACTIONS(293),
        [anon_sym_def] = ACTIONS(293),
        [sym_number] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(297),
    },
    [173] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(303),
    },
    [174] = {
        [sym_else_clause] = STATE(176),
        [sym_except_clause] = STATE(177),
        [sym_finally_clause] = STATE(178),
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(487),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(303),
    },
    [175] = {
        [anon_sym_COLON] = ACTIONS(491),
        [sym_comment] = ACTIONS(47),
    },
    [176] = {
        [sym_finally_clause] = STATE(179),
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(313),
        [anon_sym_def] = ACTIONS(313),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(317),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_print] = ACTIONS(319),
        [anon_sym_if] = ACTIONS(319),
        [anon_sym_else] = ACTIONS(319),
        [anon_sym_for] = ACTIONS(319),
        [anon_sym_while] = ACTIONS(319),
        [anon_sym_try] = ACTIONS(319),
        [anon_sym_except] = ACTIONS(319),
        [anon_sym_finally] = ACTIONS(319),
        [anon_sym_with] = ACTIONS(319),
        [anon_sym_def] = ACTIONS(319),
        [sym_number] = ACTIONS(319),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(323),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(313),
        [anon_sym_def] = ACTIONS(313),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(317),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(329),
    },
    [180] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(181),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [181] = {
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_SEMI] = ACTIONS(335),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [anon_sym_finally] = ACTIONS(331),
        [anon_sym_with] = ACTIONS(331),
        [anon_sym_def] = ACTIONS(331),
        [sym_number] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(335),
    },
    [182] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(183),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_print] = ACTIONS(337),
        [anon_sym_if] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(337),
        [anon_sym_try] = ACTIONS(337),
        [anon_sym_with] = ACTIONS(337),
        [anon_sym_def] = ACTIONS(337),
        [sym_number] = ACTIONS(337),
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(341),
    },
    [184] = {
        [anon_sym_COMMA] = ACTIONS(493),
        [anon_sym_COLON] = ACTIONS(495),
        [anon_sym_as] = ACTIONS(493),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [185] = {
        [sym__expression] = STATE(187),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [186] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(190),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [187] = {
        [anon_sym_COLON] = ACTIONS(497),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [188] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(189),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [189] = {
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(351),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(353),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_except] = ACTIONS(355),
        [anon_sym_finally] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [anon_sym_def] = ACTIONS(355),
        [sym_number] = ACTIONS(355),
        [sym_identifier] = ACTIONS(357),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(359),
    },
    [191] = {
        [anon_sym_COLON] = ACTIONS(499),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [192] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(193),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [193] = {
        [sym_else_clause] = STATE(194),
        [ts_builtin_sym_end] = ACTIONS(373),
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [anon_sym_try] = ACTIONS(369),
        [anon_sym_with] = ACTIONS(369),
        [anon_sym_def] = ACTIONS(369),
        [sym_number] = ACTIONS(369),
        [sym_identifier] = ACTIONS(371),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(373),
    },
    [194] = {
        [ts_builtin_sym_end] = ACTIONS(379),
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_print] = ACTIONS(375),
        [anon_sym_if] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_while] = ACTIONS(375),
        [anon_sym_try] = ACTIONS(375),
        [anon_sym_with] = ACTIONS(375),
        [anon_sym_def] = ACTIONS(375),
        [sym_number] = ACTIONS(375),
        [sym_identifier] = ACTIONS(377),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(379),
    },
    [195] = {
        [anon_sym_in] = ACTIONS(501),
        [sym_comment] = ACTIONS(47),
    },
    [196] = {
        [sym_expression_list] = STATE(197),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [197] = {
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(47),
    },
    [198] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(199),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [199] = {
        [sym_else_clause] = STATE(200),
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [anon_sym_def] = ACTIONS(389),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(393),
    },
    [200] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [anon_sym_def] = ACTIONS(395),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(399),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [202] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(203),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [203] = {
        [sym_elif_clause] = STATE(205),
        [sym_else_clause] = STATE(206),
        [aux_sym_if_statement_repeat1] = STATE(207),
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(507),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(409),
    },
    [204] = {
        [sym__expression] = STATE(210),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [205] = {
        [ts_builtin_sym_end] = ACTIONS(415),
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_print] = ACTIONS(411),
        [anon_sym_if] = ACTIONS(411),
        [anon_sym_elif] = ACTIONS(411),
        [anon_sym_else] = ACTIONS(411),
        [anon_sym_for] = ACTIONS(411),
        [anon_sym_while] = ACTIONS(411),
        [anon_sym_try] = ACTIONS(411),
        [anon_sym_with] = ACTIONS(411),
        [anon_sym_def] = ACTIONS(411),
        [sym_number] = ACTIONS(411),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(415),
    },
    [206] = {
        [ts_builtin_sym_end] = ACTIONS(421),
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(417),
        [anon_sym_with] = ACTIONS(417),
        [anon_sym_def] = ACTIONS(417),
        [sym_number] = ACTIONS(417),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(421),
    },
    [207] = {
        [sym_elif_clause] = STATE(208),
        [sym_else_clause] = STATE(209),
        [ts_builtin_sym_end] = ACTIONS(421),
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(417),
        [anon_sym_elif] = ACTIONS(507),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(417),
        [anon_sym_with] = ACTIONS(417),
        [anon_sym_def] = ACTIONS(417),
        [sym_number] = ACTIONS(417),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(421),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(427),
        [anon_sym_SEMI] = ACTIONS(427),
        [anon_sym_print] = ACTIONS(423),
        [anon_sym_if] = ACTIONS(423),
        [anon_sym_elif] = ACTIONS(423),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_while] = ACTIONS(423),
        [anon_sym_try] = ACTIONS(423),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(423),
        [sym_number] = ACTIONS(423),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(427),
    },
    [209] = {
        [ts_builtin_sym_end] = ACTIONS(433),
        [anon_sym_SEMI] = ACTIONS(433),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(431),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(433),
    },
    [210] = {
        [anon_sym_COLON] = ACTIONS(509),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [211] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(212),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(57),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(155),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(441),
        [anon_sym_SEMI] = ACTIONS(441),
        [anon_sym_print] = ACTIONS(437),
        [anon_sym_if] = ACTIONS(437),
        [anon_sym_elif] = ACTIONS(437),
        [anon_sym_else] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_while] = ACTIONS(437),
        [anon_sym_try] = ACTIONS(437),
        [anon_sym_with] = ACTIONS(437),
        [anon_sym_def] = ACTIONS(437),
        [sym_number] = ACTIONS(437),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(441),
    },
    [213] = {
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [214] = {
        [sym_with_item] = STATE(388),
        [sym__expression] = STATE(389),
        [sym_binary_operator] = STATE(230),
        [anon_sym_RPAREN] = ACTIONS(513),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(515),
        [sym_comment] = ACTIONS(47),
    },
    [215] = {
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [216] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(247),
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(519),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [217] = {
        [sym__expression] = STATE(369),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [218] = {
        [anon_sym_COLON] = ACTIONS(525),
        [sym_comment] = ACTIONS(47),
    },
    [219] = {
        [sym_expression_list] = STATE(355),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [220] = {
        [sym_expression_list] = STATE(354),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [221] = {
        [sym__expression] = STATE(350),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [222] = {
        [anon_sym_COLON] = ACTIONS(527),
        [sym_comment] = ACTIONS(47),
    },
    [223] = {
        [sym__expression] = STATE(343),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [224] = {
        [sym__expression] = STATE(342),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [225] = {
        [anon_sym_COLON] = ACTIONS(529),
        [sym_comment] = ACTIONS(47),
    },
    [226] = {
        [sym_with_item] = STATE(339),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [227] = {
        [sym_identifier] = ACTIONS(531),
        [sym_comment] = ACTIONS(47),
    },
    [228] = {
        [anon_sym_COLON] = ACTIONS(533),
        [sym_comment] = ACTIONS(47),
    },
    [229] = {
        [sym__expression] = STATE(337),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [230] = {
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_SEMI] = ACTIONS(81),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_COMMA] = ACTIONS(81),
        [anon_sym_if] = ACTIONS(83),
        [anon_sym_COLON] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(83),
        [anon_sym_else] = ACTIONS(83),
        [anon_sym_for] = ACTIONS(83),
        [anon_sym_in] = ACTIONS(83),
        [anon_sym_while] = ACTIONS(83),
        [anon_sym_try] = ACTIONS(83),
        [anon_sym_except] = ACTIONS(83),
        [anon_sym_as] = ACTIONS(83),
        [anon_sym_finally] = ACTIONS(83),
        [anon_sym_with] = ACTIONS(83),
        [anon_sym_def] = ACTIONS(83),
        [anon_sym_RPAREN] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(81),
        [sym_number] = ACTIONS(83),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(81),
        [sym__dedent] = ACTIONS(81),
    },
    [231] = {
        [sym_parameters] = STATE(245),
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_SEMI] = ACTIONS(81),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_COMMA] = ACTIONS(538),
        [anon_sym_if] = ACTIONS(83),
        [anon_sym_COLON] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(83),
        [anon_sym_else] = ACTIONS(83),
        [anon_sym_for] = ACTIONS(83),
        [anon_sym_in] = ACTIONS(83),
        [anon_sym_while] = ACTIONS(83),
        [anon_sym_try] = ACTIONS(83),
        [anon_sym_except] = ACTIONS(83),
        [anon_sym_as] = ACTIONS(83),
        [anon_sym_finally] = ACTIONS(83),
        [anon_sym_with] = ACTIONS(83),
        [anon_sym_def] = ACTIONS(83),
        [anon_sym_LPAREN] = ACTIONS(147),
        [anon_sym_RPAREN] = ACTIONS(541),
        [anon_sym_EQ] = ACTIONS(453),
        [anon_sym_PLUS] = ACTIONS(81),
        [sym_number] = ACTIONS(83),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(81),
        [sym__dedent] = ACTIONS(81),
    },
    [232] = {
        [ts_builtin_sym_end] = ACTIONS(544),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [233] = {
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(547),
    },
    [234] = {
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [anon_sym_print] = ACTIONS(552),
        [anon_sym_if] = ACTIONS(552),
        [anon_sym_elif] = ACTIONS(552),
        [anon_sym_else] = ACTIONS(552),
        [anon_sym_for] = ACTIONS(552),
        [anon_sym_while] = ACTIONS(552),
        [anon_sym_try] = ACTIONS(552),
        [anon_sym_except] = ACTIONS(552),
        [anon_sym_finally] = ACTIONS(552),
        [anon_sym_with] = ACTIONS(552),
        [anon_sym_def] = ACTIONS(552),
        [sym_number] = ACTIONS(552),
        [sym_identifier] = ACTIONS(555),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(549),
        [sym__dedent] = ACTIONS(549),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(558),
        [anon_sym_SEMI] = ACTIONS(558),
        [anon_sym_print] = ACTIONS(561),
        [anon_sym_if] = ACTIONS(561),
        [anon_sym_for] = ACTIONS(561),
        [anon_sym_while] = ACTIONS(561),
        [anon_sym_try] = ACTIONS(561),
        [anon_sym_with] = ACTIONS(561),
        [anon_sym_def] = ACTIONS(561),
        [sym_number] = ACTIONS(561),
        [sym_identifier] = ACTIONS(564),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(558),
        [sym__dedent] = ACTIONS(558),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_elif] = ACTIONS(173),
        [anon_sym_else] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_except] = ACTIONS(173),
        [anon_sym_finally] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(171),
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
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(99),
        [sym_number] = ACTIONS(99),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(97),
        [sym__dedent] = ACTIONS(97),
    },
    [238] = {
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_SEMI] = ACTIONS(103),
        [anon_sym_print] = ACTIONS(105),
        [anon_sym_if] = ACTIONS(105),
        [anon_sym_for] = ACTIONS(105),
        [anon_sym_while] = ACTIONS(105),
        [anon_sym_try] = ACTIONS(105),
        [anon_sym_with] = ACTIONS(105),
        [anon_sym_def] = ACTIONS(105),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(103),
        [sym__dedent] = ACTIONS(103),
    },
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(109),
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(109),
        [sym__dedent] = ACTIONS(109),
    },
    [240] = {
        [ts_builtin_sym_end] = ACTIONS(570),
        [anon_sym_SEMI] = ACTIONS(570),
        [anon_sym_print] = ACTIONS(573),
        [anon_sym_if] = ACTIONS(573),
        [anon_sym_elif] = ACTIONS(573),
        [anon_sym_else] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(573),
        [anon_sym_while] = ACTIONS(573),
        [anon_sym_try] = ACTIONS(573),
        [anon_sym_with] = ACTIONS(573),
        [anon_sym_def] = ACTIONS(573),
        [sym_number] = ACTIONS(573),
        [sym_identifier] = ACTIONS(576),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(570),
        [sym__dedent] = ACTIONS(570),
    },
    [241] = {
        [sym_finally_clause] = STATE(276),
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(585),
        [anon_sym_if] = ACTIONS(585),
        [anon_sym_for] = ACTIONS(585),
        [anon_sym_while] = ACTIONS(585),
        [anon_sym_try] = ACTIONS(585),
        [anon_sym_finally] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(585),
        [sym_number] = ACTIONS(585),
        [sym_identifier] = ACTIONS(593),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(579),
        [sym__dedent] = ACTIONS(579),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(602),
        [anon_sym_if] = ACTIONS(602),
        [anon_sym_else] = ACTIONS(602),
        [anon_sym_for] = ACTIONS(602),
        [anon_sym_while] = ACTIONS(602),
        [anon_sym_try] = ACTIONS(602),
        [anon_sym_except] = ACTIONS(602),
        [anon_sym_finally] = ACTIONS(602),
        [anon_sym_with] = ACTIONS(602),
        [anon_sym_def] = ACTIONS(602),
        [sym_number] = ACTIONS(602),
        [sym_identifier] = ACTIONS(605),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(599),
        [sym__dedent] = ACTIONS(599),
    },
    [243] = {
        [ts_builtin_sym_end] = ACTIONS(608),
        [anon_sym_SEMI] = ACTIONS(608),
        [anon_sym_print] = ACTIONS(612),
        [anon_sym_if] = ACTIONS(612),
        [anon_sym_for] = ACTIONS(612),
        [anon_sym_while] = ACTIONS(612),
        [anon_sym_try] = ACTIONS(612),
        [anon_sym_with] = ACTIONS(612),
        [anon_sym_def] = ACTIONS(612),
        [sym_number] = ACTIONS(612),
        [sym_identifier] = ACTIONS(616),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(608),
        [sym__dedent] = ACTIONS(608),
    },
    [244] = {
        [aux_sym_with_statement_repeat1] = STATE(254),
        [anon_sym_COMMA] = ACTIONS(620),
        [anon_sym_COLON] = ACTIONS(624),
        [sym_comment] = ACTIONS(47),
    },
    [245] = {
        [anon_sym_COLON] = ACTIONS(628),
        [sym_comment] = ACTIONS(47),
    },
    [246] = {
        [anon_sym_COMMA] = ACTIONS(630),
        [anon_sym_RPAREN] = ACTIONS(632),
        [sym_comment] = ACTIONS(47),
    },
    [247] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(327),
        [sym_except_clause] = STATE(328),
        [sym_finally_clause] = STATE(329),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [aux_sym_try_statement_repeat1] = STATE(253),
        [ts_builtin_sym_end] = ACTIONS(634),
        [anon_sym_SEMI] = ACTIONS(634),
        [anon_sym_print] = ACTIONS(646),
        [anon_sym_if] = ACTIONS(646),
        [anon_sym_elif] = ACTIONS(658),
        [anon_sym_else] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(646),
        [anon_sym_while] = ACTIONS(646),
        [anon_sym_try] = ACTIONS(646),
        [anon_sym_except] = ACTIONS(666),
        [anon_sym_finally] = ACTIONS(670),
        [anon_sym_with] = ACTIONS(646),
        [anon_sym_def] = ACTIONS(646),
        [sym_number] = ACTIONS(646),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(634),
        [sym__dedent] = ACTIONS(634),
    },
    [248] = {
        [anon_sym_COLON] = ACTIONS(687),
        [anon_sym_in] = ACTIONS(689),
        [sym_comment] = ACTIONS(47),
    },
    [249] = {
        [aux_sym_print_statement_repeat1] = STATE(251),
        [ts_builtin_sym_end] = ACTIONS(691),
        [anon_sym_SEMI] = ACTIONS(691),
        [anon_sym_print] = ACTIONS(697),
        [anon_sym_COMMA] = ACTIONS(703),
        [anon_sym_if] = ACTIONS(697),
        [anon_sym_COLON] = ACTIONS(711),
        [anon_sym_elif] = ACTIONS(697),
        [anon_sym_else] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_in] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_except] = ACTIONS(697),
        [anon_sym_as] = ACTIONS(724),
        [anon_sym_finally] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_RPAREN] = ACTIONS(727),
        [anon_sym_PLUS] = ACTIONS(730),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(733),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(691),
        [sym__dedent] = ACTIONS(691),
    },
    [250] = {
        [sym__statement] = STATE(286),
        [sym__simple_statement] = STATE(287),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(238),
        [sym_if_statement] = STATE(239),
        [sym_for_statement] = STATE(239),
        [sym_while_statement] = STATE(239),
        [sym_try_statement] = STATE(239),
        [sym_with_statement] = STATE(239),
        [sym_function_definition] = STATE(239),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(125),
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(743),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(747),
        [anon_sym_def] = ACTIONS(749),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(125),
        [sym__dedent] = ACTIONS(751),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_in] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [252] = {
        [sym_elif_clause] = STATE(278),
        [sym_else_clause] = STATE(279),
        [ts_builtin_sym_end] = ACTIONS(421),
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(417),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(417),
        [anon_sym_with] = ACTIONS(417),
        [anon_sym_def] = ACTIONS(417),
        [sym_number] = ACTIONS(417),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(421),
        [sym__dedent] = ACTIONS(421),
    },
    [253] = {
        [sym_else_clause] = STATE(273),
        [sym_except_clause] = STATE(274),
        [sym_finally_clause] = STATE(275),
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_else] = ACTIONS(761),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(763),
        [anon_sym_finally] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [254] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_COLON] = ACTIONS(765),
        [sym_comment] = ACTIONS(47),
    },
    [255] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(258),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(767),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [256] = {
        [sym__expression] = STATE(265),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_elif] = ACTIONS(173),
        [anon_sym_else] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_except] = ACTIONS(173),
        [anon_sym_finally] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(171),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [259] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(769),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [260] = {
        [sym__expression] = STATE(261),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [261] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(771),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [262] = {
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
        [anon_sym_def] = ACTIONS(189),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
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
        [anon_sym_print] = ACTIONS(57),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(161),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(167),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
        [sym__dedent] = ACTIONS(751),
    },
    [264] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_SEMI] = ACTIONS(197),
        [anon_sym_print] = ACTIONS(199),
        [anon_sym_if] = ACTIONS(199),
        [anon_sym_elif] = ACTIONS(199),
        [anon_sym_else] = ACTIONS(199),
        [anon_sym_for] = ACTIONS(199),
        [anon_sym_while] = ACTIONS(199),
        [anon_sym_try] = ACTIONS(199),
        [anon_sym_except] = ACTIONS(199),
        [anon_sym_finally] = ACTIONS(199),
        [anon_sym_with] = ACTIONS(199),
        [anon_sym_def] = ACTIONS(199),
        [sym_number] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(197),
        [sym__dedent] = ACTIONS(197),
    },
    [265] = {
        [aux_sym_print_statement_repeat1] = STATE(268),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(774),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(776),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [266] = {
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [267] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(778),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [269] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [270] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(776),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [271] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(780),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(776),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [273] = {
        [sym_finally_clause] = STATE(276),
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_finally] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(313),
        [anon_sym_def] = ACTIONS(313),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(317),
        [sym__dedent] = ACTIONS(317),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_print] = ACTIONS(319),
        [anon_sym_if] = ACTIONS(319),
        [anon_sym_else] = ACTIONS(319),
        [anon_sym_for] = ACTIONS(319),
        [anon_sym_while] = ACTIONS(319),
        [anon_sym_try] = ACTIONS(319),
        [anon_sym_except] = ACTIONS(319),
        [anon_sym_finally] = ACTIONS(319),
        [anon_sym_with] = ACTIONS(319),
        [anon_sym_def] = ACTIONS(319),
        [sym_number] = ACTIONS(319),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(323),
        [sym__dedent] = ACTIONS(323),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_print] = ACTIONS(313),
        [anon_sym_if] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_while] = ACTIONS(313),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(313),
        [anon_sym_def] = ACTIONS(313),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(317),
        [sym__dedent] = ACTIONS(317),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [277] = {
        [anon_sym_COLON] = ACTIONS(783),
        [sym_comment] = ACTIONS(47),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(427),
        [anon_sym_SEMI] = ACTIONS(427),
        [anon_sym_print] = ACTIONS(423),
        [anon_sym_if] = ACTIONS(423),
        [anon_sym_elif] = ACTIONS(423),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_while] = ACTIONS(423),
        [anon_sym_try] = ACTIONS(423),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(423),
        [sym_number] = ACTIONS(423),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(427),
        [sym__dedent] = ACTIONS(427),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(433),
        [anon_sym_SEMI] = ACTIONS(433),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(431),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(433),
        [sym__dedent] = ACTIONS(433),
    },
    [280] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(281),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(767),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_SEMI] = ACTIONS(335),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [anon_sym_finally] = ACTIONS(331),
        [anon_sym_with] = ACTIONS(331),
        [anon_sym_def] = ACTIONS(331),
        [sym_number] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(335),
        [sym__dedent] = ACTIONS(335),
    },
    [282] = {
        [sym__expression] = STATE(283),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [283] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(785),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [284] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(787),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(129),
        [sym__dedent] = ACTIONS(129),
    },
    [287] = {
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(790),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [289] = {
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [290] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(291),
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(519),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [291] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(296),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [ts_builtin_sym_end] = ACTIONS(792),
        [anon_sym_SEMI] = ACTIONS(792),
        [anon_sym_print] = ACTIONS(798),
        [anon_sym_if] = ACTIONS(798),
        [anon_sym_elif] = ACTIONS(658),
        [anon_sym_else] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(798),
        [anon_sym_while] = ACTIONS(798),
        [anon_sym_try] = ACTIONS(798),
        [anon_sym_except] = ACTIONS(804),
        [anon_sym_finally] = ACTIONS(804),
        [anon_sym_with] = ACTIONS(798),
        [anon_sym_def] = ACTIONS(798),
        [sym_number] = ACTIONS(798),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(792),
        [sym__dedent] = ACTIONS(792),
    },
    [292] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_elif] = ACTIONS(117),
        [anon_sym_else] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(813),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [293] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [294] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(815),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [295] = {
        [ts_builtin_sym_end] = ACTIONS(415),
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_print] = ACTIONS(411),
        [anon_sym_if] = ACTIONS(411),
        [anon_sym_elif] = ACTIONS(411),
        [anon_sym_else] = ACTIONS(411),
        [anon_sym_for] = ACTIONS(411),
        [anon_sym_while] = ACTIONS(411),
        [anon_sym_try] = ACTIONS(411),
        [anon_sym_with] = ACTIONS(411),
        [anon_sym_def] = ACTIONS(411),
        [sym_number] = ACTIONS(411),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(415),
        [sym__dedent] = ACTIONS(415),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(818),
        [anon_sym_SEMI] = ACTIONS(818),
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(824),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(818),
        [sym__dedent] = ACTIONS(818),
    },
    [297] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_COLON] = ACTIONS(827),
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
        [anon_sym_PLUS] = ACTIONS(785),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [298] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(300),
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(830),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [299] = {
        [sym__expression] = STATE(304),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(351),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_else] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(832),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [302] = {
        [sym__expression] = STATE(303),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(834),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [304] = {
        [aux_sym_print_statement_repeat1] = STATE(307),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(839),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [305] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [306] = {
        [sym__expression] = STATE(310),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(841),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [308] = {
        [sym__expression] = STATE(309),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(839),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(843),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(839),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [312] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(314),
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(846),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [313] = {
        [sym__expression] = STATE(319),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [314] = {
        [sym_else_clause] = STATE(318),
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_else] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [anon_sym_def] = ACTIONS(389),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(393),
        [sym__dedent] = ACTIONS(393),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_else] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(848),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [316] = {
        [sym__expression] = STATE(317),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(850),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [anon_sym_def] = ACTIONS(395),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(399),
        [sym__dedent] = ACTIONS(399),
    },
    [319] = {
        [aux_sym_print_statement_repeat1] = STATE(322),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [320] = {
        [sym__expression] = STATE(326),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [321] = {
        [sym__expression] = STATE(325),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(857),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [323] = {
        [sym__expression] = STATE(324),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(859),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [327] = {
        [ts_builtin_sym_end] = ACTIONS(862),
        [anon_sym_SEMI] = ACTIONS(862),
        [anon_sym_print] = ACTIONS(866),
        [anon_sym_if] = ACTIONS(866),
        [anon_sym_for] = ACTIONS(866),
        [anon_sym_while] = ACTIONS(866),
        [anon_sym_try] = ACTIONS(866),
        [anon_sym_with] = ACTIONS(866),
        [anon_sym_def] = ACTIONS(866),
        [sym_number] = ACTIONS(866),
        [sym_identifier] = ACTIONS(870),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(862),
        [sym__dedent] = ACTIONS(862),
    },
    [328] = {
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
        [anon_sym_with] = ACTIONS(293),
        [anon_sym_def] = ACTIONS(293),
        [sym_number] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [329] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [330] = {
        [anon_sym_RPAREN] = ACTIONS(513),
        [sym_identifier] = ACTIONS(874),
        [sym_comment] = ACTIONS(47),
    },
    [331] = {
        [anon_sym_COLON] = ACTIONS(877),
        [sym_comment] = ACTIONS(47),
    },
    [332] = {
        [anon_sym_COLON] = ACTIONS(880),
        [sym_comment] = ACTIONS(47),
    },
    [333] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(334),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(767),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [334] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [335] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(336),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(767),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(730),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [338] = {
        [sym_parameters] = STATE(245),
        [anon_sym_LPAREN] = ACTIONS(147),
        [sym_comment] = ACTIONS(47),
    },
    [339] = {
        [aux_sym_with_statement_repeat1] = STATE(254),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(883),
        [sym_comment] = ACTIONS(47),
    },
    [340] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(341),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(767),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_print] = ACTIONS(337),
        [anon_sym_if] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_while] = ACTIONS(337),
        [anon_sym_try] = ACTIONS(337),
        [anon_sym_with] = ACTIONS(337),
        [anon_sym_def] = ACTIONS(337),
        [sym_number] = ACTIONS(337),
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(341),
        [sym__dedent] = ACTIONS(341),
    },
    [342] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(885),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [343] = {
        [anon_sym_COMMA] = ACTIONS(888),
        [anon_sym_COLON] = ACTIONS(890),
        [anon_sym_as] = ACTIONS(888),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [344] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(47),
    },
    [345] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(347),
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(830),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [346] = {
        [anon_sym_COLON] = ACTIONS(892),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_else] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_except] = ACTIONS(355),
        [anon_sym_finally] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [anon_sym_def] = ACTIONS(355),
        [sym_number] = ACTIONS(355),
        [sym_identifier] = ACTIONS(357),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(359),
        [sym__dedent] = ACTIONS(359),
    },
    [348] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(349),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(279),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(283),
    },
    [349] = {
        [sym_except_clause] = STATE(328),
        [sym_finally_clause] = STATE(329),
        [aux_sym_try_statement_repeat1] = STATE(253),
        [anon_sym_except] = ACTIONS(894),
        [anon_sym_finally] = ACTIONS(896),
        [sym_comment] = ACTIONS(47),
    },
    [350] = {
        [anon_sym_COLON] = ACTIONS(898),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [351] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(352),
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(846),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [352] = {
        [sym_else_clause] = STATE(353),
        [ts_builtin_sym_end] = ACTIONS(373),
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_print] = ACTIONS(369),
        [anon_sym_if] = ACTIONS(369),
        [anon_sym_else] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_while] = ACTIONS(369),
        [anon_sym_try] = ACTIONS(369),
        [anon_sym_with] = ACTIONS(369),
        [anon_sym_def] = ACTIONS(369),
        [sym_number] = ACTIONS(369),
        [sym_identifier] = ACTIONS(371),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(373),
        [sym__dedent] = ACTIONS(373),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(379),
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_print] = ACTIONS(375),
        [anon_sym_if] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_while] = ACTIONS(375),
        [anon_sym_try] = ACTIONS(375),
        [anon_sym_with] = ACTIONS(375),
        [anon_sym_def] = ACTIONS(375),
        [sym_number] = ACTIONS(375),
        [sym_identifier] = ACTIONS(377),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(379),
        [sym__dedent] = ACTIONS(379),
    },
    [354] = {
        [anon_sym_COLON] = ACTIONS(687),
        [sym_comment] = ACTIONS(47),
    },
    [355] = {
        [anon_sym_in] = ACTIONS(689),
        [sym_comment] = ACTIONS(47),
    },
    [356] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(281),
        [sym__expression] = STATE(358),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(900),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [357] = {
        [sym__expression] = STATE(361),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(902),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [359] = {
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(904),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [361] = {
        [aux_sym_print_statement_repeat1] = STATE(364),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(907),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(909),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [362] = {
        [sym__expression] = STATE(368),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [363] = {
        [sym__expression] = STATE(367),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(911),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [365] = {
        [sym__expression] = STATE(366),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [366] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(909),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [367] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(913),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [368] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(909),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [369] = {
        [anon_sym_COLON] = ACTIONS(916),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [370] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(372),
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(918),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [371] = {
        [sym__expression] = STATE(376),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(441),
        [anon_sym_SEMI] = ACTIONS(441),
        [anon_sym_print] = ACTIONS(437),
        [anon_sym_if] = ACTIONS(437),
        [anon_sym_elif] = ACTIONS(437),
        [anon_sym_else] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_while] = ACTIONS(437),
        [anon_sym_try] = ACTIONS(437),
        [anon_sym_with] = ACTIONS(437),
        [anon_sym_def] = ACTIONS(437),
        [sym_number] = ACTIONS(437),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(441),
        [sym__dedent] = ACTIONS(441),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_elif] = ACTIONS(117),
        [anon_sym_else] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(920),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [374] = {
        [sym__expression] = STATE(375),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(922),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [376] = {
        [aux_sym_print_statement_repeat1] = STATE(379),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(925),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(927),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [377] = {
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [378] = {
        [sym__expression] = STATE(382),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [379] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(929),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [380] = {
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(927),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(931),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(927),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
    },
    [384] = {
        [anon_sym_COLON] = ACTIONS(934),
        [anon_sym_PLUS] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [385] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(237),
        [sym_expression_statement] = STATE(237),
        [sym__suite] = STATE(386),
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(230),
        [anon_sym_print] = ACTIONS(918),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(47),
        [sym__indent] = ACTIONS(523),
    },
    [386] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(387),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(421),
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_if] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(417),
        [anon_sym_with] = ACTIONS(417),
        [anon_sym_def] = ACTIONS(417),
        [sym_number] = ACTIONS(417),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(421),
        [sym__dedent] = ACTIONS(421),
    },
    [388] = {
        [anon_sym_COMMA] = ACTIONS(936),
        [anon_sym_COLON] = ACTIONS(936),
        [sym_comment] = ACTIONS(47),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(939),
        [anon_sym_SEMI] = ACTIONS(939),
        [anon_sym_print] = ACTIONS(942),
        [anon_sym_COMMA] = ACTIONS(945),
        [anon_sym_if] = ACTIONS(942),
        [anon_sym_COLON] = ACTIONS(949),
        [anon_sym_elif] = ACTIONS(942),
        [anon_sym_else] = ACTIONS(942),
        [anon_sym_for] = ACTIONS(942),
        [anon_sym_in] = ACTIONS(942),
        [anon_sym_while] = ACTIONS(942),
        [anon_sym_try] = ACTIONS(942),
        [anon_sym_except] = ACTIONS(942),
        [anon_sym_as] = ACTIONS(954),
        [anon_sym_finally] = ACTIONS(942),
        [anon_sym_with] = ACTIONS(942),
        [anon_sym_def] = ACTIONS(942),
        [anon_sym_PLUS] = ACTIONS(956),
        [sym_number] = ACTIONS(942),
        [sym_identifier] = ACTIONS(958),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(939),
        [sym__dedent] = ACTIONS(939),
    },
    [390] = {
        [sym__expression] = STATE(391),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(961),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [392] = {
        [aux_sym_print_statement_repeat1] = STATE(395),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(964),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(966),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [393] = {
        [sym__expression] = STATE(399),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [394] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(968),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [396] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(230),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(47),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(966),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(237),
        [sym__dedent] = ACTIONS(237),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_print] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(137),
        [anon_sym_elif] = ACTIONS(137),
        [anon_sym_else] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_while] = ACTIONS(137),
        [anon_sym_try] = ACTIONS(137),
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_with] = ACTIONS(137),
        [anon_sym_def] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(970),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(135),
        [sym__dedent] = ACTIONS(135),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
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
        [anon_sym_PLUS] = ACTIONS(966),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
        [sym__newline] = ACTIONS(243),
        [sym__dedent] = ACTIONS(243),
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
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(230),
    [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(231),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(232),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(233),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(234),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [515] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(230),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
    [533] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [538] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(330),
    [541] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(331),
    [544] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [549] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [552] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [555] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [558] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [561] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [564] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [567] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(288),
    [570] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [573] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [576] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [579] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [585] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [593] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [599] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [602] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [605] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [608] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [612] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [616] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [620] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(73),
    [624] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(335),
    [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [634] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [646] = {.count = 11, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [658] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(217),
    [661] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(277),
    [666] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(223),
    [670] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(225),
    [675] = {.count = 11, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [691] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [697] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [703] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(289),
    [711] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(290),
    [719] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [724] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(224),
    [727] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3),
    [730] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(229),
    [733] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [771] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(260),
    [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [780] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(267),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [787] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(284),
    [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [792] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [798] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [804] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [807] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [815] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(293),
    [818] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [821] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [824] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [827] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(298),
    [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
    [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [834] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(302),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [843] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(306),
    [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
    [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [850] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(316),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [859] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(321),
    [862] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [866] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [870] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [874] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [877] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [880] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [885] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(298),
    [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
    [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [904] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(359),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [913] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(363),
    [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
    [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
    [922] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(374),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [931] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(378),
    [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [936] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [945] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [949] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(298),
    [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [958] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [961] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(390),
    [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [970] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(394),
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
