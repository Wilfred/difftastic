#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 422
#define SYMBOL_COUNT 59
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
    sym_list_splat_parameter = 47,
    sym_dictionary_splat_parameter = 48,
    sym__suite = 49,
    sym_expression_list = 50,
    sym__expression = 51,
    sym_binary_operator = 52,
    aux_sym_module_repeat1 = 53,
    aux_sym_print_statement_repeat1 = 54,
    aux_sym_if_statement_repeat1 = 55,
    aux_sym_try_statement_repeat1 = 56,
    aux_sym_with_statement_repeat1 = 57,
    aux_sym_parameters_repeat1 = 58,
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
    [sym_list_splat_parameter] = "list_splat_parameter",
    [sym_dictionary_splat_parameter] = "dictionary_splat_parameter",
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
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
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
            if (lookahead == '=')
                ADVANCE(13);
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
            if (lookahead == ',')
                ADVANCE(8);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            LEX_ERROR();
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
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
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
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
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(95);
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
        case 149:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
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
    [150] = {.lex_state = 118},
    [151] = {.lex_state = 119},
    [152] = {.lex_state = 120},
    [153] = {.lex_state = 120},
    [154] = {.lex_state = 121},
    [155] = {.lex_state = 118},
    [156] = {.lex_state = 119},
    [157] = {.lex_state = 120},
    [158] = {.lex_state = 120},
    [159] = {.lex_state = 121},
    [160] = {.lex_state = 63},
    [161] = {.lex_state = 122},
    [162] = {.lex_state = 122},
    [163] = {.lex_state = 121},
    [164] = {.lex_state = 63},
    [165] = {.lex_state = 64},
    [166] = {.lex_state = 121},
    [167] = {.lex_state = 72},
    [168] = {.lex_state = 63},
    [169] = {.lex_state = 62},
    [170] = {.lex_state = 123},
    [171] = {.lex_state = 63},
    [172] = {.lex_state = 122},
    [173] = {.lex_state = 121},
    [174] = {.lex_state = 72},
    [175] = {.lex_state = 120},
    [176] = {.lex_state = 97},
    [177] = {.lex_state = 73, .external_tokens = 3},
    [178] = {.lex_state = 97},
    [179] = {.lex_state = 73, .external_tokens = 3},
    [180] = {.lex_state = 67, .external_tokens = 2},
    [181] = {.lex_state = 67, .external_tokens = 2},
    [182] = {.lex_state = 73, .external_tokens = 3},
    [183] = {.lex_state = 100},
    [184] = {.lex_state = 62},
    [185] = {.lex_state = 63},
    [186] = {.lex_state = 124, .external_tokens = 2},
    [187] = {.lex_state = 67, .external_tokens = 2},
    [188] = {.lex_state = 124, .external_tokens = 2},
    [189] = {.lex_state = 63},
    [190] = {.lex_state = 125, .external_tokens = 2},
    [191] = {.lex_state = 124, .external_tokens = 2},
    [192] = {.lex_state = 67, .external_tokens = 2},
    [193] = {.lex_state = 67, .external_tokens = 2},
    [194] = {.lex_state = 73, .external_tokens = 3},
    [195] = {.lex_state = 125, .external_tokens = 2},
    [196] = {.lex_state = 73, .external_tokens = 3},
    [197] = {.lex_state = 67, .external_tokens = 2},
    [198] = {.lex_state = 98},
    [199] = {.lex_state = 62},
    [200] = {.lex_state = 73, .external_tokens = 3},
    [201] = {.lex_state = 106},
    [202] = {.lex_state = 73, .external_tokens = 3},
    [203] = {.lex_state = 124, .external_tokens = 2},
    [204] = {.lex_state = 124, .external_tokens = 2},
    [205] = {.lex_state = 106},
    [206] = {.lex_state = 73, .external_tokens = 3},
    [207] = {.lex_state = 126, .external_tokens = 2},
    [208] = {.lex_state = 67, .external_tokens = 2},
    [209] = {.lex_state = 112},
    [210] = {.lex_state = 62},
    [211] = {.lex_state = 63},
    [212] = {.lex_state = 73, .external_tokens = 3},
    [213] = {.lex_state = 126, .external_tokens = 2},
    [214] = {.lex_state = 67, .external_tokens = 2},
    [215] = {.lex_state = 106},
    [216] = {.lex_state = 73, .external_tokens = 3},
    [217] = {.lex_state = 127, .external_tokens = 2},
    [218] = {.lex_state = 62},
    [219] = {.lex_state = 127, .external_tokens = 2},
    [220] = {.lex_state = 67, .external_tokens = 2},
    [221] = {.lex_state = 127, .external_tokens = 2},
    [222] = {.lex_state = 127, .external_tokens = 2},
    [223] = {.lex_state = 67, .external_tokens = 2},
    [224] = {.lex_state = 106},
    [225] = {.lex_state = 73, .external_tokens = 3},
    [226] = {.lex_state = 127, .external_tokens = 2},
    [227] = {.lex_state = 62},
    [228] = {.lex_state = 128},
    [229] = {.lex_state = 62},
    [230] = {.lex_state = 73, .external_tokens = 3},
    [231] = {.lex_state = 62},
    [232] = {.lex_state = 63},
    [233] = {.lex_state = 62},
    [234] = {.lex_state = 62},
    [235] = {.lex_state = 62},
    [236] = {.lex_state = 63},
    [237] = {.lex_state = 62},
    [238] = {.lex_state = 62},
    [239] = {.lex_state = 63},
    [240] = {.lex_state = 62},
    [241] = {.lex_state = 64},
    [242] = {.lex_state = 63},
    [243] = {.lex_state = 118},
    [244] = {.lex_state = 62},
    [245] = {.lex_state = 129, .external_tokens = 5},
    [246] = {.lex_state = 130, .external_tokens = 5},
    [247] = {.lex_state = 67, .external_tokens = 5},
    [248] = {.lex_state = 74, .external_tokens = 4},
    [249] = {.lex_state = 69, .external_tokens = 5},
    [250] = {.lex_state = 67, .external_tokens = 5},
    [251] = {.lex_state = 69, .external_tokens = 5},
    [252] = {.lex_state = 69, .external_tokens = 5},
    [253] = {.lex_state = 67, .external_tokens = 5},
    [254] = {.lex_state = 67, .external_tokens = 5},
    [255] = {.lex_state = 127, .external_tokens = 5},
    [256] = {.lex_state = 125, .external_tokens = 5},
    [257] = {.lex_state = 124, .external_tokens = 5},
    [258] = {.lex_state = 67, .external_tokens = 5},
    [259] = {.lex_state = 97},
    [260] = {.lex_state = 63},
    [261] = {.lex_state = 120},
    [262] = {.lex_state = 120},
    [263] = {.lex_state = 121},
    [264] = {.lex_state = 69, .external_tokens = 5},
    [265] = {.lex_state = 131},
    [266] = {.lex_state = 129, .external_tokens = 5},
    [267] = {.lex_state = 67, .external_tokens = 5},
    [268] = {.lex_state = 132, .external_tokens = 5},
    [269] = {.lex_state = 127, .external_tokens = 5},
    [270] = {.lex_state = 124, .external_tokens = 5},
    [271] = {.lex_state = 97},
    [272] = {.lex_state = 73, .external_tokens = 3},
    [273] = {.lex_state = 62},
    [274] = {.lex_state = 69, .external_tokens = 5},
    [275] = {.lex_state = 67, .external_tokens = 5},
    [276] = {.lex_state = 133, .external_tokens = 5},
    [277] = {.lex_state = 62},
    [278] = {.lex_state = 133, .external_tokens = 5},
    [279] = {.lex_state = 69, .external_tokens = 5},
    [280] = {.lex_state = 74, .external_tokens = 4},
    [281] = {.lex_state = 69, .external_tokens = 5},
    [282] = {.lex_state = 134, .external_tokens = 5},
    [283] = {.lex_state = 62},
    [284] = {.lex_state = 62},
    [285] = {.lex_state = 135, .external_tokens = 5},
    [286] = {.lex_state = 62},
    [287] = {.lex_state = 134, .external_tokens = 5},
    [288] = {.lex_state = 134, .external_tokens = 5},
    [289] = {.lex_state = 134, .external_tokens = 5},
    [290] = {.lex_state = 125, .external_tokens = 5},
    [291] = {.lex_state = 124, .external_tokens = 5},
    [292] = {.lex_state = 67, .external_tokens = 5},
    [293] = {.lex_state = 67, .external_tokens = 5},
    [294] = {.lex_state = 63},
    [295] = {.lex_state = 127, .external_tokens = 5},
    [296] = {.lex_state = 67, .external_tokens = 5},
    [297] = {.lex_state = 73, .external_tokens = 3},
    [298] = {.lex_state = 125, .external_tokens = 5},
    [299] = {.lex_state = 62},
    [300] = {.lex_state = 136, .external_tokens = 5},
    [301] = {.lex_state = 62},
    [302] = {.lex_state = 136, .external_tokens = 5},
    [303] = {.lex_state = 67, .external_tokens = 5},
    [304] = {.lex_state = 68, .external_tokens = 2},
    [305] = {.lex_state = 67, .external_tokens = 5},
    [306] = {.lex_state = 62},
    [307] = {.lex_state = 73, .external_tokens = 3},
    [308] = {.lex_state = 69, .external_tokens = 5},
    [309] = {.lex_state = 70, .external_tokens = 5},
    [310] = {.lex_state = 62},
    [311] = {.lex_state = 70, .external_tokens = 5},
    [312] = {.lex_state = 127, .external_tokens = 5},
    [313] = {.lex_state = 67, .external_tokens = 5},
    [314] = {.lex_state = 136, .external_tokens = 5},
    [315] = {.lex_state = 73, .external_tokens = 3},
    [316] = {.lex_state = 62},
    [317] = {.lex_state = 124, .external_tokens = 5},
    [318] = {.lex_state = 137, .external_tokens = 5},
    [319] = {.lex_state = 62},
    [320] = {.lex_state = 137, .external_tokens = 5},
    [321] = {.lex_state = 138, .external_tokens = 5},
    [322] = {.lex_state = 62},
    [323] = {.lex_state = 62},
    [324] = {.lex_state = 139, .external_tokens = 5},
    [325] = {.lex_state = 62},
    [326] = {.lex_state = 138, .external_tokens = 5},
    [327] = {.lex_state = 138, .external_tokens = 5},
    [328] = {.lex_state = 138, .external_tokens = 5},
    [329] = {.lex_state = 73, .external_tokens = 3},
    [330] = {.lex_state = 62},
    [331] = {.lex_state = 126, .external_tokens = 5},
    [332] = {.lex_state = 140, .external_tokens = 5},
    [333] = {.lex_state = 62},
    [334] = {.lex_state = 140, .external_tokens = 5},
    [335] = {.lex_state = 67, .external_tokens = 5},
    [336] = {.lex_state = 141, .external_tokens = 5},
    [337] = {.lex_state = 62},
    [338] = {.lex_state = 62},
    [339] = {.lex_state = 142, .external_tokens = 5},
    [340] = {.lex_state = 62},
    [341] = {.lex_state = 141, .external_tokens = 5},
    [342] = {.lex_state = 141, .external_tokens = 5},
    [343] = {.lex_state = 141, .external_tokens = 5},
    [344] = {.lex_state = 67, .external_tokens = 5},
    [345] = {.lex_state = 124, .external_tokens = 5},
    [346] = {.lex_state = 67, .external_tokens = 5},
    [347] = {.lex_state = 63},
    [348] = {.lex_state = 122},
    [349] = {.lex_state = 63},
    [350] = {.lex_state = 121},
    [351] = {.lex_state = 63},
    [352] = {.lex_state = 72},
    [353] = {.lex_state = 63},
    [354] = {.lex_state = 73, .external_tokens = 3},
    [355] = {.lex_state = 67, .external_tokens = 5},
    [356] = {.lex_state = 73, .external_tokens = 3},
    [357] = {.lex_state = 67, .external_tokens = 5},
    [358] = {.lex_state = 129, .external_tokens = 5},
    [359] = {.lex_state = 120},
    [360] = {.lex_state = 71},
    [361] = {.lex_state = 97},
    [362] = {.lex_state = 73, .external_tokens = 3},
    [363] = {.lex_state = 67, .external_tokens = 5},
    [364] = {.lex_state = 99},
    [365] = {.lex_state = 98},
    [366] = {.lex_state = 62},
    [367] = {.lex_state = 73, .external_tokens = 3},
    [368] = {.lex_state = 106},
    [369] = {.lex_state = 124, .external_tokens = 5},
    [370] = {.lex_state = 73, .external_tokens = 3},
    [371] = {.lex_state = 100},
    [372] = {.lex_state = 106},
    [373] = {.lex_state = 73, .external_tokens = 3},
    [374] = {.lex_state = 126, .external_tokens = 5},
    [375] = {.lex_state = 67, .external_tokens = 5},
    [376] = {.lex_state = 63},
    [377] = {.lex_state = 112},
    [378] = {.lex_state = 73, .external_tokens = 3},
    [379] = {.lex_state = 62},
    [380] = {.lex_state = 143, .external_tokens = 5},
    [381] = {.lex_state = 62},
    [382] = {.lex_state = 143, .external_tokens = 5},
    [383] = {.lex_state = 144, .external_tokens = 5},
    [384] = {.lex_state = 62},
    [385] = {.lex_state = 62},
    [386] = {.lex_state = 145, .external_tokens = 5},
    [387] = {.lex_state = 62},
    [388] = {.lex_state = 144, .external_tokens = 5},
    [389] = {.lex_state = 144, .external_tokens = 5},
    [390] = {.lex_state = 144, .external_tokens = 5},
    [391] = {.lex_state = 106},
    [392] = {.lex_state = 73, .external_tokens = 3},
    [393] = {.lex_state = 62},
    [394] = {.lex_state = 127, .external_tokens = 5},
    [395] = {.lex_state = 146, .external_tokens = 5},
    [396] = {.lex_state = 62},
    [397] = {.lex_state = 146, .external_tokens = 5},
    [398] = {.lex_state = 147, .external_tokens = 5},
    [399] = {.lex_state = 62},
    [400] = {.lex_state = 62},
    [401] = {.lex_state = 148, .external_tokens = 5},
    [402] = {.lex_state = 62},
    [403] = {.lex_state = 147, .external_tokens = 5},
    [404] = {.lex_state = 147, .external_tokens = 5},
    [405] = {.lex_state = 147, .external_tokens = 5},
    [406] = {.lex_state = 106},
    [407] = {.lex_state = 73, .external_tokens = 3},
    [408] = {.lex_state = 127, .external_tokens = 5},
    [409] = {.lex_state = 67, .external_tokens = 5},
    [410] = {.lex_state = 97},
    [411] = {.lex_state = 149, .external_tokens = 5},
    [412] = {.lex_state = 62},
    [413] = {.lex_state = 149, .external_tokens = 5},
    [414] = {.lex_state = 65, .external_tokens = 5},
    [415] = {.lex_state = 62},
    [416] = {.lex_state = 62},
    [417] = {.lex_state = 117, .external_tokens = 5},
    [418] = {.lex_state = 62},
    [419] = {.lex_state = 65, .external_tokens = 5},
    [420] = {.lex_state = 65, .external_tokens = 5},
    [421] = {.lex_state = 65, .external_tokens = 5},
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
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__compound_statement] = STATE(253),
        [sym_if_statement] = STATE(254),
        [sym_elif_clause] = STATE(255),
        [sym_else_clause] = STATE(256),
        [sym_for_statement] = STATE(254),
        [sym_while_statement] = STATE(254),
        [sym_try_statement] = STATE(254),
        [sym_except_clause] = STATE(257),
        [sym_finally_clause] = STATE(258),
        [sym_with_statement] = STATE(254),
        [sym_with_item] = STATE(259),
        [sym_function_definition] = STATE(254),
        [sym_parameters] = STATE(260),
        [sym_default_parameter] = STATE(261),
        [sym_list_splat_parameter] = STATE(262),
        [sym_dictionary_splat_parameter] = STATE(263),
        [sym__suite] = STATE(264),
        [sym_expression_list] = STATE(265),
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(245),
        [aux_sym_module_repeat1] = STATE(267),
        [aux_sym_print_statement_repeat1] = STATE(268),
        [aux_sym_if_statement_repeat1] = STATE(269),
        [aux_sym_try_statement_repeat1] = STATE(270),
        [aux_sym_with_statement_repeat1] = STATE(271),
        [aux_sym_parameters_repeat1] = STATE(155),
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
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [4] = {
        [sym_expression_list] = STATE(209),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [5] = {
        [sym__expression] = STATE(205),
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
        [sym_with_item] = STATE(176),
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
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [aux_sym_parameters_repeat1] = STATE(155),
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
        [anon_sym_STAR] = ACTIONS(453),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(49),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_RPAREN] = ACTIONS(459),
        [anon_sym_EQ] = ACTIONS(461),
        [sym_comment] = ACTIONS(49),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(49),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(49),
    },
    [154] = {
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(49),
    },
    [155] = {
        [sym_default_parameter] = STATE(157),
        [sym_list_splat_parameter] = STATE(158),
        [sym_dictionary_splat_parameter] = STATE(159),
        [anon_sym_STAR] = ACTIONS(153),
        [sym_identifier] = ACTIONS(465),
        [sym_comment] = ACTIONS(49),
    },
    [156] = {
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_RPAREN] = ACTIONS(469),
        [anon_sym_EQ] = ACTIONS(461),
        [sym_comment] = ACTIONS(49),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_RPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(49),
    },
    [158] = {
        [anon_sym_COMMA] = ACTIONS(471),
        [anon_sym_RPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(49),
    },
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(49),
    },
    [160] = {
        [anon_sym_COLON] = ACTIONS(473),
        [sym_comment] = ACTIONS(49),
    },
    [161] = {
        [sym_dictionary_splat_parameter] = STATE(163),
        [anon_sym_STAR] = ACTIONS(475),
        [sym_comment] = ACTIONS(49),
    },
    [162] = {
        [anon_sym_STAR] = ACTIONS(453),
        [sym_comment] = ACTIONS(49),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(49),
    },
    [164] = {
        [anon_sym_COLON] = ACTIONS(479),
        [sym_comment] = ACTIONS(49),
    },
    [165] = {
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(49),
    },
    [166] = {
        [anon_sym_RPAREN] = ACTIONS(483),
        [sym_comment] = ACTIONS(49),
    },
    [167] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [anon_sym_STAR] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(49),
    },
    [168] = {
        [anon_sym_COLON] = ACTIONS(491),
        [sym_comment] = ACTIONS(49),
    },
    [169] = {
        [sym__expression] = STATE(170),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [170] = {
        [anon_sym_COMMA] = ACTIONS(493),
        [anon_sym_RPAREN] = ACTIONS(493),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(495),
        [sym_comment] = ACTIONS(49),
    },
    [172] = {
        [sym_dictionary_splat_parameter] = STATE(173),
        [anon_sym_STAR] = ACTIONS(475),
        [sym_comment] = ACTIONS(49),
    },
    [173] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [sym_comment] = ACTIONS(49),
    },
    [174] = {
        [anon_sym_RPAREN] = ACTIONS(469),
        [anon_sym_STAR] = ACTIONS(497),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(49),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_RPAREN] = ACTIONS(501),
        [sym_comment] = ACTIONS(49),
    },
    [176] = {
        [aux_sym_with_statement_repeat1] = STATE(178),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(49),
    },
    [177] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(181),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(505),
        [sym_comment] = ACTIONS(49),
    },
    [179] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(180),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [180] = {
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
    [181] = {
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
    [182] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(183),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(283),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(287),
    },
    [183] = {
        [sym_except_clause] = STATE(186),
        [sym_finally_clause] = STATE(187),
        [aux_sym_try_statement_repeat1] = STATE(188),
        [anon_sym_except] = ACTIONS(507),
        [anon_sym_finally] = ACTIONS(509),
        [sym_comment] = ACTIONS(49),
    },
    [184] = {
        [sym__expression] = STATE(198),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [185] = {
        [anon_sym_COLON] = ACTIONS(511),
        [sym_comment] = ACTIONS(49),
    },
    [186] = {
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
    [187] = {
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
    [188] = {
        [sym_else_clause] = STATE(190),
        [sym_except_clause] = STATE(191),
        [sym_finally_clause] = STATE(192),
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_else] = ACTIONS(513),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_except] = ACTIONS(515),
        [anon_sym_finally] = ACTIONS(517),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(307),
    },
    [189] = {
        [anon_sym_COLON] = ACTIONS(519),
        [sym_comment] = ACTIONS(49),
    },
    [190] = {
        [sym_finally_clause] = STATE(193),
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(517),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(321),
    },
    [191] = {
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
    [192] = {
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
    [193] = {
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
    [194] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(195),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [195] = {
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
    [198] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_COLON] = ACTIONS(523),
        [anon_sym_as] = ACTIONS(521),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [199] = {
        [sym__expression] = STATE(201),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [200] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(204),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(525),
        [anon_sym_PLUS] = ACTIONS(259),
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
    [204] = {
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
    [205] = {
        [anon_sym_COLON] = ACTIONS(527),
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
        [sym_else_clause] = STATE(208),
        [ts_builtin_sym_end] = ACTIONS(377),
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_else] = ACTIONS(513),
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
    [208] = {
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
    [209] = {
        [anon_sym_in] = ACTIONS(529),
        [sym_comment] = ACTIONS(49),
    },
    [210] = {
        [sym_expression_list] = STATE(211),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [211] = {
        [anon_sym_COLON] = ACTIONS(531),
        [sym_comment] = ACTIONS(49),
    },
    [212] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(213),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [213] = {
        [sym_else_clause] = STATE(214),
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_else] = ACTIONS(513),
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
    [214] = {
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
    [215] = {
        [anon_sym_COLON] = ACTIONS(533),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [216] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(217),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [217] = {
        [sym_elif_clause] = STATE(219),
        [sym_else_clause] = STATE(220),
        [aux_sym_if_statement_repeat1] = STATE(221),
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_print] = ACTIONS(407),
        [anon_sym_if] = ACTIONS(407),
        [anon_sym_elif] = ACTIONS(535),
        [anon_sym_else] = ACTIONS(513),
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
    [218] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [219] = {
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
    [220] = {
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
    [221] = {
        [sym_elif_clause] = STATE(222),
        [sym_else_clause] = STATE(223),
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(535),
        [anon_sym_else] = ACTIONS(513),
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
    [222] = {
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
    [223] = {
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
    [224] = {
        [anon_sym_COLON] = ACTIONS(537),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [225] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(226),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(59),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(159),
    },
    [226] = {
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
    [227] = {
        [sym__expression] = STATE(414),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [228] = {
        [sym_with_item] = STATE(410),
        [sym_dictionary_splat_parameter] = STATE(350),
        [sym__expression] = STATE(411),
        [sym_binary_operator] = STATE(245),
        [anon_sym_RPAREN] = ACTIONS(541),
        [anon_sym_STAR] = ACTIONS(543),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(49),
    },
    [229] = {
        [sym__expression] = STATE(406),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [230] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(264),
        [sym__expression] = STATE(309),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(551),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [231] = {
        [sym__expression] = STATE(391),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [232] = {
        [anon_sym_COLON] = ACTIONS(557),
        [sym_comment] = ACTIONS(49),
    },
    [233] = {
        [sym_expression_list] = STATE(377),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [234] = {
        [sym_expression_list] = STATE(376),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [235] = {
        [sym__expression] = STATE(372),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [236] = {
        [anon_sym_COLON] = ACTIONS(559),
        [sym_comment] = ACTIONS(49),
    },
    [237] = {
        [sym__expression] = STATE(365),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [238] = {
        [sym__expression] = STATE(364),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [239] = {
        [anon_sym_COLON] = ACTIONS(561),
        [sym_comment] = ACTIONS(49),
    },
    [240] = {
        [sym_with_item] = STATE(361),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [241] = {
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(49),
    },
    [242] = {
        [anon_sym_COLON] = ACTIONS(565),
        [sym_comment] = ACTIONS(49),
    },
    [243] = {
        [anon_sym_STAR] = ACTIONS(453),
        [sym_identifier] = ACTIONS(571),
        [sym_comment] = ACTIONS(49),
    },
    [244] = {
        [sym__expression] = STATE(358),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [245] = {
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
    [246] = {
        [sym_parameters] = STATE(260),
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_COMMA] = ACTIONS(573),
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
        [anon_sym_RPAREN] = ACTIONS(577),
        [anon_sym_EQ] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(83),
        [sym__dedent] = ACTIONS(83),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(582),
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
    [248] = {
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
        [aux_sym_module_repeat1] = STATE(280),
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
        [sym__dedent] = ACTIONS(585),
    },
    [249] = {
        [ts_builtin_sym_end] = ACTIONS(587),
        [anon_sym_SEMI] = ACTIONS(587),
        [anon_sym_print] = ACTIONS(590),
        [anon_sym_if] = ACTIONS(590),
        [anon_sym_elif] = ACTIONS(590),
        [anon_sym_else] = ACTIONS(590),
        [anon_sym_for] = ACTIONS(590),
        [anon_sym_while] = ACTIONS(590),
        [anon_sym_try] = ACTIONS(590),
        [anon_sym_except] = ACTIONS(590),
        [anon_sym_finally] = ACTIONS(590),
        [anon_sym_with] = ACTIONS(590),
        [anon_sym_def] = ACTIONS(590),
        [sym_number] = ACTIONS(590),
        [sym_identifier] = ACTIONS(593),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(587),
        [sym__dedent] = ACTIONS(587),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(596),
        [anon_sym_SEMI] = ACTIONS(596),
        [anon_sym_print] = ACTIONS(599),
        [anon_sym_if] = ACTIONS(599),
        [anon_sym_for] = ACTIONS(599),
        [anon_sym_while] = ACTIONS(599),
        [anon_sym_try] = ACTIONS(599),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(599),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(602),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(596),
        [sym__dedent] = ACTIONS(596),
    },
    [251] = {
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
        [sym__newline] = ACTIONS(605),
        [sym__dedent] = ACTIONS(175),
    },
    [252] = {
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
    [253] = {
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
    [254] = {
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
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(608),
        [anon_sym_SEMI] = ACTIONS(608),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_elif] = ACTIONS(611),
        [anon_sym_else] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(614),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(608),
        [sym__dedent] = ACTIONS(608),
    },
    [256] = {
        [sym_finally_clause] = STATE(293),
        [ts_builtin_sym_end] = ACTIONS(617),
        [anon_sym_SEMI] = ACTIONS(617),
        [anon_sym_print] = ACTIONS(623),
        [anon_sym_if] = ACTIONS(623),
        [anon_sym_for] = ACTIONS(623),
        [anon_sym_while] = ACTIONS(623),
        [anon_sym_try] = ACTIONS(623),
        [anon_sym_finally] = ACTIONS(629),
        [anon_sym_with] = ACTIONS(623),
        [anon_sym_def] = ACTIONS(623),
        [sym_number] = ACTIONS(623),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(617),
        [sym__dedent] = ACTIONS(617),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_print] = ACTIONS(640),
        [anon_sym_if] = ACTIONS(640),
        [anon_sym_else] = ACTIONS(640),
        [anon_sym_for] = ACTIONS(640),
        [anon_sym_while] = ACTIONS(640),
        [anon_sym_try] = ACTIONS(640),
        [anon_sym_except] = ACTIONS(640),
        [anon_sym_finally] = ACTIONS(640),
        [anon_sym_with] = ACTIONS(640),
        [anon_sym_def] = ACTIONS(640),
        [sym_number] = ACTIONS(640),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(637),
        [sym__dedent] = ACTIONS(637),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(646),
        [anon_sym_SEMI] = ACTIONS(646),
        [anon_sym_print] = ACTIONS(650),
        [anon_sym_if] = ACTIONS(650),
        [anon_sym_for] = ACTIONS(650),
        [anon_sym_while] = ACTIONS(650),
        [anon_sym_try] = ACTIONS(650),
        [anon_sym_with] = ACTIONS(650),
        [anon_sym_def] = ACTIONS(650),
        [sym_number] = ACTIONS(650),
        [sym_identifier] = ACTIONS(654),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(646),
        [sym__dedent] = ACTIONS(646),
    },
    [259] = {
        [aux_sym_with_statement_repeat1] = STATE(271),
        [anon_sym_COMMA] = ACTIONS(658),
        [anon_sym_COLON] = ACTIONS(662),
        [sym_comment] = ACTIONS(49),
    },
    [260] = {
        [anon_sym_COLON] = ACTIONS(666),
        [sym_comment] = ACTIONS(49),
    },
    [261] = {
        [anon_sym_COMMA] = ACTIONS(668),
        [anon_sym_RPAREN] = ACTIONS(670),
        [sym_comment] = ACTIONS(49),
    },
    [262] = {
        [anon_sym_COMMA] = ACTIONS(672),
        [anon_sym_RPAREN] = ACTIONS(670),
        [sym_comment] = ACTIONS(49),
    },
    [263] = {
        [anon_sym_RPAREN] = ACTIONS(674),
        [sym_comment] = ACTIONS(49),
    },
    [264] = {
        [sym_elif_clause] = STATE(312),
        [sym_else_clause] = STATE(344),
        [sym_except_clause] = STATE(345),
        [sym_finally_clause] = STATE(346),
        [aux_sym_if_statement_repeat1] = STATE(269),
        [aux_sym_try_statement_repeat1] = STATE(270),
        [ts_builtin_sym_end] = ACTIONS(676),
        [anon_sym_SEMI] = ACTIONS(676),
        [anon_sym_print] = ACTIONS(688),
        [anon_sym_if] = ACTIONS(688),
        [anon_sym_elif] = ACTIONS(700),
        [anon_sym_else] = ACTIONS(703),
        [anon_sym_for] = ACTIONS(688),
        [anon_sym_while] = ACTIONS(688),
        [anon_sym_try] = ACTIONS(688),
        [anon_sym_except] = ACTIONS(708),
        [anon_sym_finally] = ACTIONS(712),
        [anon_sym_with] = ACTIONS(688),
        [anon_sym_def] = ACTIONS(688),
        [sym_number] = ACTIONS(688),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(676),
        [sym__dedent] = ACTIONS(676),
    },
    [265] = {
        [anon_sym_COLON] = ACTIONS(729),
        [anon_sym_in] = ACTIONS(731),
        [sym_comment] = ACTIONS(49),
    },
    [266] = {
        [aux_sym_print_statement_repeat1] = STATE(268),
        [ts_builtin_sym_end] = ACTIONS(733),
        [anon_sym_SEMI] = ACTIONS(733),
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_COMMA] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_COLON] = ACTIONS(753),
        [anon_sym_elif] = ACTIONS(739),
        [anon_sym_else] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_in] = ACTIONS(761),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_except] = ACTIONS(739),
        [anon_sym_as] = ACTIONS(766),
        [anon_sym_finally] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_RPAREN] = ACTIONS(769),
        [anon_sym_PLUS] = ACTIONS(772),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(733),
        [sym__dedent] = ACTIONS(733),
    },
    [267] = {
        [sym__statement] = STATE(303),
        [sym__simple_statement] = STATE(304),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(253),
        [sym_if_statement] = STATE(254),
        [sym_for_statement] = STATE(254),
        [sym_while_statement] = STATE(254),
        [sym_try_statement] = STATE(254),
        [sym_with_statement] = STATE(254),
        [sym_function_definition] = STATE(254),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(59),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(793),
    },
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_elif] = ACTIONS(231),
        [anon_sym_else] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_in] = ACTIONS(797),
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
    [269] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(296),
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(799),
        [anon_sym_else] = ACTIONS(801),
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
    [270] = {
        [sym_else_clause] = STATE(290),
        [sym_except_clause] = STATE(291),
        [sym_finally_clause] = STATE(292),
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_print] = ACTIONS(303),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_else] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_while] = ACTIONS(303),
        [anon_sym_try] = ACTIONS(303),
        [anon_sym_except] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(629),
        [anon_sym_with] = ACTIONS(303),
        [anon_sym_def] = ACTIONS(303),
        [sym_number] = ACTIONS(303),
        [sym_identifier] = ACTIONS(305),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(307),
        [sym__dedent] = ACTIONS(307),
    },
    [271] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(807),
        [sym_comment] = ACTIONS(49),
    },
    [272] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(275),
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(809),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [273] = {
        [sym__expression] = STATE(282),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [274] = {
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
    [275] = {
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
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_if] = ACTIONS(119),
        [anon_sym_for] = ACTIONS(119),
        [anon_sym_while] = ACTIONS(119),
        [anon_sym_try] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(811),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [277] = {
        [sym__expression] = STATE(278),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(813),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [279] = {
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
    [280] = {
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
        [sym__dedent] = ACTIONS(793),
    },
    [281] = {
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
    [282] = {
        [aux_sym_print_statement_repeat1] = STATE(285),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(816),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(818),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [283] = {
        [sym__expression] = STATE(289),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [284] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(820),
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
    [286] = {
        [sym__expression] = STATE(287),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [287] = {
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
        [anon_sym_PLUS] = ACTIONS(818),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [288] = {
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
        [anon_sym_PLUS] = ACTIONS(822),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [289] = {
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
        [anon_sym_PLUS] = ACTIONS(818),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [290] = {
        [sym_finally_clause] = STATE(293),
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(629),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(321),
        [sym__dedent] = ACTIONS(321),
    },
    [291] = {
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
    [292] = {
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
    [293] = {
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
    [294] = {
        [anon_sym_COLON] = ACTIONS(825),
        [sym_comment] = ACTIONS(49),
    },
    [295] = {
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
    [296] = {
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
    [297] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(298),
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(809),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [298] = {
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
    [299] = {
        [sym__expression] = STATE(300),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [300] = {
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
        [anon_sym_PLUS] = ACTIONS(827),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [301] = {
        [sym__expression] = STATE(302),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [302] = {
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
        [anon_sym_PLUS] = ACTIONS(829),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [303] = {
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
    [304] = {
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(832),
    },
    [305] = {
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
    [306] = {
        [sym__expression] = STATE(314),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [307] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(308),
        [sym__expression] = STATE(309),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(551),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [308] = {
        [sym_elif_clause] = STATE(312),
        [sym_else_clause] = STATE(313),
        [aux_sym_if_statement_repeat1] = STATE(269),
        [ts_builtin_sym_end] = ACTIONS(834),
        [anon_sym_SEMI] = ACTIONS(834),
        [anon_sym_print] = ACTIONS(840),
        [anon_sym_if] = ACTIONS(840),
        [anon_sym_elif] = ACTIONS(700),
        [anon_sym_else] = ACTIONS(703),
        [anon_sym_for] = ACTIONS(840),
        [anon_sym_while] = ACTIONS(840),
        [anon_sym_try] = ACTIONS(840),
        [anon_sym_except] = ACTIONS(846),
        [anon_sym_finally] = ACTIONS(846),
        [anon_sym_with] = ACTIONS(840),
        [anon_sym_def] = ACTIONS(840),
        [sym_number] = ACTIONS(840),
        [sym_identifier] = ACTIONS(849),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(834),
        [sym__dedent] = ACTIONS(834),
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
        [anon_sym_except] = ACTIONS(119),
        [anon_sym_finally] = ACTIONS(119),
        [anon_sym_with] = ACTIONS(119),
        [anon_sym_def] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(855),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [310] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [311] = {
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
        [anon_sym_PLUS] = ACTIONS(857),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [312] = {
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
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(860),
        [anon_sym_SEMI] = ACTIONS(860),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(866),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(860),
        [sym__dedent] = ACTIONS(860),
    },
    [314] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_print] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(869),
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
        [anon_sym_PLUS] = ACTIONS(827),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [315] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(317),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(872),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [316] = {
        [sym__expression] = STATE(321),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [317] = {
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
    [318] = {
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
        [anon_sym_PLUS] = ACTIONS(874),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [319] = {
        [sym__expression] = STATE(320),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [320] = {
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
        [anon_sym_PLUS] = ACTIONS(876),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [321] = {
        [aux_sym_print_statement_repeat1] = STATE(324),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(879),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_except] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(881),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [322] = {
        [sym__expression] = STATE(328),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [323] = {
        [sym__expression] = STATE(327),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(883),
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
    [325] = {
        [sym__expression] = STATE(326),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
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
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(881),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [327] = {
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
        [anon_sym_PLUS] = ACTIONS(885),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [328] = {
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
        [anon_sym_PLUS] = ACTIONS(881),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [329] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(331),
        [sym__expression] = STATE(332),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(888),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [330] = {
        [sym__expression] = STATE(336),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [331] = {
        [sym_else_clause] = STATE(335),
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_else] = ACTIONS(801),
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
    [332] = {
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
        [anon_sym_PLUS] = ACTIONS(890),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [333] = {
        [sym__expression] = STATE(334),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [334] = {
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
        [anon_sym_PLUS] = ACTIONS(892),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [335] = {
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
    [336] = {
        [aux_sym_print_statement_repeat1] = STATE(339),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(895),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(897),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [337] = {
        [sym__expression] = STATE(343),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [338] = {
        [sym__expression] = STATE(342),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [339] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(899),
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
    [340] = {
        [sym__expression] = STATE(341),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [341] = {
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
        [anon_sym_PLUS] = ACTIONS(897),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [342] = {
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
        [anon_sym_PLUS] = ACTIONS(901),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [343] = {
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
        [anon_sym_PLUS] = ACTIONS(897),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(904),
        [anon_sym_SEMI] = ACTIONS(904),
        [anon_sym_print] = ACTIONS(908),
        [anon_sym_if] = ACTIONS(908),
        [anon_sym_for] = ACTIONS(908),
        [anon_sym_while] = ACTIONS(908),
        [anon_sym_try] = ACTIONS(908),
        [anon_sym_with] = ACTIONS(908),
        [anon_sym_def] = ACTIONS(908),
        [sym_number] = ACTIONS(908),
        [sym_identifier] = ACTIONS(912),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(904),
        [sym__dedent] = ACTIONS(904),
    },
    [345] = {
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
    [346] = {
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
    [347] = {
        [anon_sym_COLON] = ACTIONS(916),
        [sym_comment] = ACTIONS(49),
    },
    [348] = {
        [sym_dictionary_splat_parameter] = STATE(350),
        [anon_sym_STAR] = ACTIONS(475),
        [sym_comment] = ACTIONS(49),
    },
    [349] = {
        [anon_sym_COLON] = ACTIONS(921),
        [sym_comment] = ACTIONS(49),
    },
    [350] = {
        [anon_sym_RPAREN] = ACTIONS(924),
        [sym_comment] = ACTIONS(49),
    },
    [351] = {
        [anon_sym_COLON] = ACTIONS(926),
        [sym_comment] = ACTIONS(49),
    },
    [352] = {
        [anon_sym_RPAREN] = ACTIONS(541),
        [anon_sym_STAR] = ACTIONS(929),
        [sym_identifier] = ACTIONS(932),
        [sym_comment] = ACTIONS(49),
    },
    [353] = {
        [anon_sym_COLON] = ACTIONS(935),
        [sym_comment] = ACTIONS(49),
    },
    [354] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(355),
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(809),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [355] = {
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
    [356] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(357),
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(809),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [357] = {
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
    [358] = {
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
        [anon_sym_PLUS] = ACTIONS(772),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [359] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_RPAREN] = ACTIONS(938),
        [sym_comment] = ACTIONS(49),
    },
    [360] = {
        [sym_parameters] = STATE(260),
        [anon_sym_LPAREN] = ACTIONS(149),
        [sym_comment] = ACTIONS(49),
    },
    [361] = {
        [aux_sym_with_statement_repeat1] = STATE(271),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(941),
        [sym_comment] = ACTIONS(49),
    },
    [362] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(363),
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(809),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [363] = {
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
    [364] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_COLON] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [365] = {
        [anon_sym_COMMA] = ACTIONS(946),
        [anon_sym_COLON] = ACTIONS(948),
        [anon_sym_as] = ACTIONS(946),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [366] = {
        [sym__expression] = STATE(368),
        [sym_binary_operator] = STATE(66),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(49),
    },
    [367] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(369),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(872),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [368] = {
        [anon_sym_COLON] = ACTIONS(950),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [369] = {
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
    [370] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(371),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(283),
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(287),
    },
    [371] = {
        [sym_except_clause] = STATE(345),
        [sym_finally_clause] = STATE(346),
        [aux_sym_try_statement_repeat1] = STATE(270),
        [anon_sym_except] = ACTIONS(952),
        [anon_sym_finally] = ACTIONS(954),
        [sym_comment] = ACTIONS(49),
    },
    [372] = {
        [anon_sym_COLON] = ACTIONS(956),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [373] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(374),
        [sym__expression] = STATE(332),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(888),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [374] = {
        [sym_else_clause] = STATE(375),
        [ts_builtin_sym_end] = ACTIONS(377),
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_else] = ACTIONS(801),
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
    [375] = {
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
    [376] = {
        [anon_sym_COLON] = ACTIONS(729),
        [sym_comment] = ACTIONS(49),
    },
    [377] = {
        [anon_sym_in] = ACTIONS(731),
        [sym_comment] = ACTIONS(49),
    },
    [378] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(298),
        [sym__expression] = STATE(380),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(958),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [379] = {
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [380] = {
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
        [anon_sym_PLUS] = ACTIONS(960),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [381] = {
        [sym__expression] = STATE(382),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [382] = {
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
        [anon_sym_PLUS] = ACTIONS(962),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [383] = {
        [aux_sym_print_statement_repeat1] = STATE(386),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(965),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(967),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [384] = {
        [sym__expression] = STATE(390),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [385] = {
        [sym__expression] = STATE(389),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(969),
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
    [387] = {
        [sym__expression] = STATE(388),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [388] = {
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
        [anon_sym_PLUS] = ACTIONS(967),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [389] = {
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
        [anon_sym_PLUS] = ACTIONS(971),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [390] = {
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
        [anon_sym_PLUS] = ACTIONS(967),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [391] = {
        [anon_sym_COLON] = ACTIONS(974),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [392] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(394),
        [sym__expression] = STATE(395),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(976),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [393] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [394] = {
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
    [395] = {
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
        [anon_sym_PLUS] = ACTIONS(978),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [396] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [397] = {
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
        [anon_sym_PLUS] = ACTIONS(980),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [398] = {
        [aux_sym_print_statement_repeat1] = STATE(401),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(983),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_elif] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(985),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [399] = {
        [sym__expression] = STATE(405),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [400] = {
        [sym__expression] = STATE(404),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(987),
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
    [402] = {
        [sym__expression] = STATE(403),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [403] = {
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
        [anon_sym_PLUS] = ACTIONS(985),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [404] = {
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
        [anon_sym_PLUS] = ACTIONS(989),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [405] = {
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
        [anon_sym_PLUS] = ACTIONS(985),
        [sym_number] = ACTIONS(245),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(247),
        [sym__dedent] = ACTIONS(247),
    },
    [406] = {
        [anon_sym_COLON] = ACTIONS(992),
        [anon_sym_PLUS] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [407] = {
        [sym__simple_statement] = STATE(274),
        [sym_print_statement] = STATE(252),
        [sym_expression_statement] = STATE(252),
        [sym__suite] = STATE(408),
        [sym__expression] = STATE(395),
        [sym_binary_operator] = STATE(245),
        [anon_sym_print] = ACTIONS(976),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(49),
        [sym__indent] = ACTIONS(555),
    },
    [408] = {
        [sym_elif_clause] = STATE(312),
        [sym_else_clause] = STATE(409),
        [aux_sym_if_statement_repeat1] = STATE(269),
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_print] = ACTIONS(407),
        [anon_sym_if] = ACTIONS(407),
        [anon_sym_elif] = ACTIONS(799),
        [anon_sym_else] = ACTIONS(801),
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
    [409] = {
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
    [410] = {
        [anon_sym_COMMA] = ACTIONS(994),
        [anon_sym_COLON] = ACTIONS(994),
        [sym_comment] = ACTIONS(49),
    },
    [411] = {
        [ts_builtin_sym_end] = ACTIONS(997),
        [anon_sym_SEMI] = ACTIONS(997),
        [anon_sym_print] = ACTIONS(1000),
        [anon_sym_COMMA] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1000),
        [anon_sym_COLON] = ACTIONS(1007),
        [anon_sym_elif] = ACTIONS(1000),
        [anon_sym_else] = ACTIONS(1000),
        [anon_sym_for] = ACTIONS(1000),
        [anon_sym_in] = ACTIONS(1000),
        [anon_sym_while] = ACTIONS(1000),
        [anon_sym_try] = ACTIONS(1000),
        [anon_sym_except] = ACTIONS(1000),
        [anon_sym_as] = ACTIONS(1012),
        [anon_sym_finally] = ACTIONS(1000),
        [anon_sym_with] = ACTIONS(1000),
        [anon_sym_def] = ACTIONS(1000),
        [anon_sym_PLUS] = ACTIONS(1014),
        [sym_number] = ACTIONS(1000),
        [sym_identifier] = ACTIONS(1016),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(997),
        [sym__dedent] = ACTIONS(997),
    },
    [412] = {
        [sym__expression] = STATE(413),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [413] = {
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
        [anon_sym_PLUS] = ACTIONS(1019),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [414] = {
        [aux_sym_print_statement_repeat1] = STATE(417),
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(1022),
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
        [anon_sym_PLUS] = ACTIONS(1024),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [415] = {
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [416] = {
        [sym__expression] = STATE(420),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [417] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(1026),
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
    [418] = {
        [sym__expression] = STATE(419),
        [sym_binary_operator] = STATE(245),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(49),
    },
    [419] = {
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
        [anon_sym_PLUS] = ACTIONS(1024),
        [sym_number] = ACTIONS(239),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [420] = {
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
        [anon_sym_PLUS] = ACTIONS(1028),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [421] = {
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
        [anon_sym_PLUS] = ACTIONS(1024),
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
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(227),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(228),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(229),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(230),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(231),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(232),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(233),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(234),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(235),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(236),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(237),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(238),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(239),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(240),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(241),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(24),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(242),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(169),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(243),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(244),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(245),
    [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(246),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(247),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(248),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(249),
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
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
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
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [543] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(162),
    [547] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(245),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(245),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
    [565] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
    [573] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(352),
    [577] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(349),
    [582] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [587] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [590] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [593] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [596] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [599] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [602] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [605] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(305),
    [608] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [611] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [614] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [617] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [623] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [631] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [637] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [640] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [643] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [646] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [650] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [654] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [658] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(73),
    [662] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(356),
    [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [676] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [688] = {.count = 11, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [700] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(231),
    [703] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(294),
    [708] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(237),
    [712] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(239),
    [717] = {.count = 11, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [733] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [739] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [745] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(306),
    [753] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(307),
    [761] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [766] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(238),
    [769] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3),
    [772] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(244),
    [775] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(277),
    [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [822] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(284),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [829] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(301),
    [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [834] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [840] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [846] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [849] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [857] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(310),
    [860] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [863] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [866] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [869] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(315),
    [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [876] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(319),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [885] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(323),
    [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
    [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [892] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(333),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [901] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(338),
    [904] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [908] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [912] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [916] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [921] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [926] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [929] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [932] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [935] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [938] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [943] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(315),
    [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
    [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
    [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [962] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(381),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [971] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(385),
    [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [980] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(396),
    [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [989] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(400),
    [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [994] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [997] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1000] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1003] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1007] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(315),
    [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [1016] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1019] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(412),
    [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [1028] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(416),
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
