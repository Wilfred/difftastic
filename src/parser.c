#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 478
#define SYMBOL_COUNT 63
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_return = 4,
    anon_sym_if = 5,
    anon_sym_COLON = 6,
    anon_sym_elif = 7,
    anon_sym_else = 8,
    anon_sym_for = 9,
    anon_sym_in = 10,
    anon_sym_while = 11,
    anon_sym_try = 12,
    anon_sym_except = 13,
    anon_sym_as = 14,
    anon_sym_finally = 15,
    anon_sym_with = 16,
    anon_sym_def = 17,
    anon_sym_LPAREN = 18,
    anon_sym_RPAREN = 19,
    anon_sym_EQ = 20,
    anon_sym_STAR = 21,
    anon_sym_class = 22,
    anon_sym_PLUS = 23,
    sym_number = 24,
    sym_identifier = 25,
    sym_comment = 26,
    sym__newline = 27,
    sym__indent = 28,
    sym__dedent = 29,
    sym_module = 30,
    sym__statement = 31,
    sym__simple_statement = 32,
    sym_print_statement = 33,
    sym_expression_statement = 34,
    sym_return_statement = 35,
    sym__compound_statement = 36,
    sym_if_statement = 37,
    sym_elif_clause = 38,
    sym_else_clause = 39,
    sym_for_statement = 40,
    sym_while_statement = 41,
    sym_try_statement = 42,
    sym_except_clause = 43,
    sym_finally_clause = 44,
    sym_with_statement = 45,
    sym_with_item = 46,
    sym_function_definition = 47,
    sym_parameters = 48,
    sym_default_parameter = 49,
    sym_list_splat_parameter = 50,
    sym_dictionary_splat_parameter = 51,
    sym_class_definition = 52,
    sym__suite = 53,
    sym_expression_list = 54,
    sym__expression = 55,
    sym_binary_operator = 56,
    aux_sym_module_repeat1 = 57,
    aux_sym_print_statement_repeat1 = 58,
    aux_sym_if_statement_repeat1 = 59,
    aux_sym_try_statement_repeat1 = 60,
    aux_sym_with_statement_repeat1 = 61,
    aux_sym_parameters_repeat1 = 62,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_print] = "print",
    [anon_sym_COMMA] = ",",
    [anon_sym_return] = "return",
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
    [anon_sym_class] = "class",
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
    [sym_return_statement] = "return_statement",
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
    [sym_class_definition] = "class_definition",
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
    [anon_sym_return] = {
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
    [anon_sym_class] = {
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
    [sym_return_statement] = {
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
    [sym_class_definition] = {
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(45);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 's')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 's')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_class);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_def);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(26);
            if (lookahead == 'x')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_elif);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_else);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'p')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_except);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(37);
            if (lookahead == 'o')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'y')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_finally);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_for);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(46);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_if);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_in);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_print);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'u')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'r')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_return);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'r')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'y')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_try);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'h')
                ADVANCE(63);
            if (lookahead == 'i')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_while);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'h')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_with);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'o')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            LEX_ERROR();
        case 74:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(74);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 75:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(75);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            LEX_ERROR();
        case 76:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(76);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 77:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(77);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 78:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(78);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 79:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(79);
            if (lookahead == '#')
                ADVANCE(2);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 81:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(81);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 82:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(82);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 83:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(83);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            LEX_ERROR();
        case 84:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(84);
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
                ADVANCE(85);
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(100);
            LEX_ERROR();
        case 85:
            if (lookahead == 's')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            ACCEPT_TOKEN(anon_sym_as);
        case 87:
            if (lookahead == 'x')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'c')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'e')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'p')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 't')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            ACCEPT_TOKEN(anon_sym_except);
        case 93:
            if (lookahead == 'i')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'n')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'a')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'l')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'l')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 'y')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            ACCEPT_TOKEN(anon_sym_finally);
        case 100:
            if (lookahead == 'n')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            ACCEPT_TOKEN(anon_sym_in);
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
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
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(100);
            LEX_ERROR();
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(100);
            LEX_ERROR();
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 107:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(107);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 109:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(109);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 110:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(110);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 111:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
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
        case 112:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            LEX_ERROR();
        case 113:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(13);
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
                ADVANCE(8);
            LEX_ERROR();
        case 115:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            LEX_ERROR();
        case 117:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 118:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(118);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(85);
            LEX_ERROR();
        case 119:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            LEX_ERROR();
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(124);
            if (lookahead == 'x')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 's')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(93);
            LEX_ERROR();
        case 129:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(130);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier);
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(100);
            LEX_ERROR();
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(133);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'l')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(130);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(133);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(45);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'a')
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(45);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if (lookahead == ')')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(45);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(45);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(45);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
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
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 150:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 151:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(130);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 152:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(130);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 153:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(130);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(13);
            LEX_ERROR();
        case 155:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 156:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 157:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(36);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 158:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(133);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 159:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(133);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 160:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(133);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(59);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 70},
    [2] = {.lex_state = 73},
    [3] = {.lex_state = 73},
    [4] = {.lex_state = 73},
    [5] = {.lex_state = 73},
    [6] = {.lex_state = 73},
    [7] = {.lex_state = 74},
    [8] = {.lex_state = 73},
    [9] = {.lex_state = 75},
    [10] = {.lex_state = 75},
    [11] = {.lex_state = 76, .external_tokens = 2},
    [12] = {.lex_state = 77},
    [13] = {.lex_state = 78, .external_tokens = 2},
    [14] = {.lex_state = 79, .external_tokens = 2},
    [15] = {.lex_state = 80, .external_tokens = 2},
    [16] = {.lex_state = 78, .external_tokens = 2},
    [17] = {.lex_state = 78, .external_tokens = 2},
    [18] = {.lex_state = 81, .external_tokens = 2},
    [19] = {.lex_state = 78, .external_tokens = 2},
    [20] = {.lex_state = 77},
    [21] = {.lex_state = 78, .external_tokens = 2},
    [22] = {.lex_state = 73},
    [23] = {.lex_state = 76, .external_tokens = 2},
    [24] = {.lex_state = 78, .external_tokens = 2},
    [25] = {.lex_state = 82},
    [26] = {.lex_state = 83, .external_tokens = 3},
    [27] = {.lex_state = 73},
    [28] = {.lex_state = 84},
    [29] = {.lex_state = 102},
    [30] = {.lex_state = 103},
    [31] = {.lex_state = 73},
    [32] = {.lex_state = 73},
    [33] = {.lex_state = 104},
    [34] = {.lex_state = 73},
    [35] = {.lex_state = 103},
    [36] = {.lex_state = 84},
    [37] = {.lex_state = 103},
    [38] = {.lex_state = 74},
    [39] = {.lex_state = 83, .external_tokens = 3},
    [40] = {.lex_state = 105, .external_tokens = 4},
    [41] = {.lex_state = 80, .external_tokens = 2},
    [42] = {.lex_state = 78, .external_tokens = 2},
    [43] = {.lex_state = 73},
    [44] = {.lex_state = 73},
    [45] = {.lex_state = 73},
    [46] = {.lex_state = 74},
    [47] = {.lex_state = 73},
    [48] = {.lex_state = 75},
    [49] = {.lex_state = 75},
    [50] = {.lex_state = 80, .external_tokens = 2},
    [51] = {.lex_state = 105, .external_tokens = 4},
    [52] = {.lex_state = 79, .external_tokens = 2},
    [53] = {.lex_state = 105, .external_tokens = 4},
    [54] = {.lex_state = 105, .external_tokens = 4},
    [55] = {.lex_state = 105, .external_tokens = 4},
    [56] = {.lex_state = 80, .external_tokens = 2},
    [57] = {.lex_state = 105, .external_tokens = 4},
    [58] = {.lex_state = 105, .external_tokens = 4},
    [59] = {.lex_state = 82},
    [60] = {.lex_state = 83, .external_tokens = 3},
    [61] = {.lex_state = 73},
    [62] = {.lex_state = 102},
    [63] = {.lex_state = 74},
    [64] = {.lex_state = 83, .external_tokens = 3},
    [65] = {.lex_state = 73},
    [66] = {.lex_state = 73},
    [67] = {.lex_state = 106, .external_tokens = 4},
    [68] = {.lex_state = 105, .external_tokens = 4},
    [69] = {.lex_state = 107, .external_tokens = 4},
    [70] = {.lex_state = 107, .external_tokens = 4},
    [71] = {.lex_state = 105, .external_tokens = 4},
    [72] = {.lex_state = 108, .external_tokens = 4},
    [73] = {.lex_state = 73},
    [74] = {.lex_state = 106, .external_tokens = 4},
    [75] = {.lex_state = 107, .external_tokens = 4},
    [76] = {.lex_state = 105, .external_tokens = 4},
    [77] = {.lex_state = 107, .external_tokens = 4},
    [78] = {.lex_state = 107, .external_tokens = 4},
    [79] = {.lex_state = 106, .external_tokens = 4},
    [80] = {.lex_state = 73},
    [81] = {.lex_state = 109, .external_tokens = 4},
    [82] = {.lex_state = 73},
    [83] = {.lex_state = 106, .external_tokens = 4},
    [84] = {.lex_state = 106, .external_tokens = 4},
    [85] = {.lex_state = 106, .external_tokens = 4},
    [86] = {.lex_state = 109, .external_tokens = 4},
    [87] = {.lex_state = 105, .external_tokens = 4},
    [88] = {.lex_state = 110},
    [89] = {.lex_state = 111},
    [90] = {.lex_state = 74},
    [91] = {.lex_state = 83, .external_tokens = 3},
    [92] = {.lex_state = 105, .external_tokens = 4},
    [93] = {.lex_state = 74},
    [94] = {.lex_state = 112},
    [95] = {.lex_state = 113},
    [96] = {.lex_state = 114},
    [97] = {.lex_state = 114},
    [98] = {.lex_state = 102},
    [99] = {.lex_state = 112},
    [100] = {.lex_state = 113},
    [101] = {.lex_state = 114},
    [102] = {.lex_state = 114},
    [103] = {.lex_state = 102},
    [104] = {.lex_state = 74},
    [105] = {.lex_state = 115},
    [106] = {.lex_state = 115},
    [107] = {.lex_state = 102},
    [108] = {.lex_state = 74},
    [109] = {.lex_state = 75},
    [110] = {.lex_state = 102},
    [111] = {.lex_state = 111},
    [112] = {.lex_state = 74},
    [113] = {.lex_state = 73},
    [114] = {.lex_state = 116},
    [115] = {.lex_state = 74},
    [116] = {.lex_state = 115},
    [117] = {.lex_state = 102},
    [118] = {.lex_state = 111},
    [119] = {.lex_state = 114},
    [120] = {.lex_state = 117},
    [121] = {.lex_state = 118},
    [122] = {.lex_state = 73},
    [123] = {.lex_state = 119},
    [124] = {.lex_state = 73},
    [125] = {.lex_state = 83, .external_tokens = 3},
    [126] = {.lex_state = 117},
    [127] = {.lex_state = 73},
    [128] = {.lex_state = 83, .external_tokens = 3},
    [129] = {.lex_state = 105, .external_tokens = 4},
    [130] = {.lex_state = 117},
    [131] = {.lex_state = 105, .external_tokens = 4},
    [132] = {.lex_state = 117},
    [133] = {.lex_state = 83, .external_tokens = 3},
    [134] = {.lex_state = 73},
    [135] = {.lex_state = 73},
    [136] = {.lex_state = 105, .external_tokens = 4},
    [137] = {.lex_state = 120},
    [138] = {.lex_state = 120},
    [139] = {.lex_state = 120},
    [140] = {.lex_state = 121},
    [141] = {.lex_state = 73},
    [142] = {.lex_state = 74},
    [143] = {.lex_state = 122, .external_tokens = 4},
    [144] = {.lex_state = 105, .external_tokens = 4},
    [145] = {.lex_state = 122, .external_tokens = 4},
    [146] = {.lex_state = 74},
    [147] = {.lex_state = 125, .external_tokens = 4},
    [148] = {.lex_state = 122, .external_tokens = 4},
    [149] = {.lex_state = 105, .external_tokens = 4},
    [150] = {.lex_state = 105, .external_tokens = 4},
    [151] = {.lex_state = 83, .external_tokens = 3},
    [152] = {.lex_state = 125, .external_tokens = 4},
    [153] = {.lex_state = 83, .external_tokens = 3},
    [154] = {.lex_state = 105, .external_tokens = 4},
    [155] = {.lex_state = 118},
    [156] = {.lex_state = 73},
    [157] = {.lex_state = 83, .external_tokens = 3},
    [158] = {.lex_state = 126},
    [159] = {.lex_state = 83, .external_tokens = 3},
    [160] = {.lex_state = 122, .external_tokens = 4},
    [161] = {.lex_state = 122, .external_tokens = 4},
    [162] = {.lex_state = 120},
    [163] = {.lex_state = 105, .external_tokens = 4},
    [164] = {.lex_state = 120},
    [165] = {.lex_state = 120},
    [166] = {.lex_state = 127},
    [167] = {.lex_state = 128},
    [168] = {.lex_state = 126},
    [169] = {.lex_state = 83, .external_tokens = 3},
    [170] = {.lex_state = 129, .external_tokens = 4},
    [171] = {.lex_state = 105, .external_tokens = 4},
    [172] = {.lex_state = 131},
    [173] = {.lex_state = 73},
    [174] = {.lex_state = 74},
    [175] = {.lex_state = 83, .external_tokens = 3},
    [176] = {.lex_state = 129, .external_tokens = 4},
    [177] = {.lex_state = 105, .external_tokens = 4},
    [178] = {.lex_state = 126},
    [179] = {.lex_state = 83, .external_tokens = 3},
    [180] = {.lex_state = 132, .external_tokens = 4},
    [181] = {.lex_state = 73},
    [182] = {.lex_state = 132, .external_tokens = 4},
    [183] = {.lex_state = 105, .external_tokens = 4},
    [184] = {.lex_state = 132, .external_tokens = 4},
    [185] = {.lex_state = 132, .external_tokens = 4},
    [186] = {.lex_state = 105, .external_tokens = 4},
    [187] = {.lex_state = 126},
    [188] = {.lex_state = 83, .external_tokens = 3},
    [189] = {.lex_state = 132, .external_tokens = 4},
    [190] = {.lex_state = 80, .external_tokens = 2},
    [191] = {.lex_state = 76, .external_tokens = 2},
    [192] = {.lex_state = 73},
    [193] = {.lex_state = 134, .external_tokens = 2},
    [194] = {.lex_state = 73},
    [195] = {.lex_state = 76, .external_tokens = 2},
    [196] = {.lex_state = 76, .external_tokens = 2},
    [197] = {.lex_state = 76, .external_tokens = 2},
    [198] = {.lex_state = 134, .external_tokens = 2},
    [199] = {.lex_state = 78, .external_tokens = 2},
    [200] = {.lex_state = 110},
    [201] = {.lex_state = 74},
    [202] = {.lex_state = 83, .external_tokens = 3},
    [203] = {.lex_state = 78, .external_tokens = 2},
    [204] = {.lex_state = 117},
    [205] = {.lex_state = 83, .external_tokens = 3},
    [206] = {.lex_state = 117},
    [207] = {.lex_state = 83, .external_tokens = 3},
    [208] = {.lex_state = 78, .external_tokens = 2},
    [209] = {.lex_state = 78, .external_tokens = 2},
    [210] = {.lex_state = 83, .external_tokens = 3},
    [211] = {.lex_state = 120},
    [212] = {.lex_state = 73},
    [213] = {.lex_state = 74},
    [214] = {.lex_state = 135, .external_tokens = 2},
    [215] = {.lex_state = 78, .external_tokens = 2},
    [216] = {.lex_state = 135, .external_tokens = 2},
    [217] = {.lex_state = 74},
    [218] = {.lex_state = 136, .external_tokens = 2},
    [219] = {.lex_state = 135, .external_tokens = 2},
    [220] = {.lex_state = 78, .external_tokens = 2},
    [221] = {.lex_state = 78, .external_tokens = 2},
    [222] = {.lex_state = 83, .external_tokens = 3},
    [223] = {.lex_state = 136, .external_tokens = 2},
    [224] = {.lex_state = 83, .external_tokens = 3},
    [225] = {.lex_state = 78, .external_tokens = 2},
    [226] = {.lex_state = 118},
    [227] = {.lex_state = 73},
    [228] = {.lex_state = 83, .external_tokens = 3},
    [229] = {.lex_state = 126},
    [230] = {.lex_state = 83, .external_tokens = 3},
    [231] = {.lex_state = 135, .external_tokens = 2},
    [232] = {.lex_state = 135, .external_tokens = 2},
    [233] = {.lex_state = 126},
    [234] = {.lex_state = 83, .external_tokens = 3},
    [235] = {.lex_state = 137, .external_tokens = 2},
    [236] = {.lex_state = 78, .external_tokens = 2},
    [237] = {.lex_state = 131},
    [238] = {.lex_state = 73},
    [239] = {.lex_state = 74},
    [240] = {.lex_state = 83, .external_tokens = 3},
    [241] = {.lex_state = 137, .external_tokens = 2},
    [242] = {.lex_state = 78, .external_tokens = 2},
    [243] = {.lex_state = 126},
    [244] = {.lex_state = 83, .external_tokens = 3},
    [245] = {.lex_state = 138, .external_tokens = 2},
    [246] = {.lex_state = 73},
    [247] = {.lex_state = 138, .external_tokens = 2},
    [248] = {.lex_state = 78, .external_tokens = 2},
    [249] = {.lex_state = 138, .external_tokens = 2},
    [250] = {.lex_state = 138, .external_tokens = 2},
    [251] = {.lex_state = 78, .external_tokens = 2},
    [252] = {.lex_state = 126},
    [253] = {.lex_state = 83, .external_tokens = 3},
    [254] = {.lex_state = 138, .external_tokens = 2},
    [255] = {.lex_state = 73},
    [256] = {.lex_state = 139},
    [257] = {.lex_state = 73},
    [258] = {.lex_state = 73},
    [259] = {.lex_state = 83, .external_tokens = 3},
    [260] = {.lex_state = 73},
    [261] = {.lex_state = 74},
    [262] = {.lex_state = 73},
    [263] = {.lex_state = 73},
    [264] = {.lex_state = 73},
    [265] = {.lex_state = 74},
    [266] = {.lex_state = 73},
    [267] = {.lex_state = 73},
    [268] = {.lex_state = 74},
    [269] = {.lex_state = 73},
    [270] = {.lex_state = 75},
    [271] = {.lex_state = 139},
    [272] = {.lex_state = 74},
    [273] = {.lex_state = 112},
    [274] = {.lex_state = 75},
    [275] = {.lex_state = 73},
    [276] = {.lex_state = 140, .external_tokens = 5},
    [277] = {.lex_state = 141, .external_tokens = 5},
    [278] = {.lex_state = 78, .external_tokens = 5},
    [279] = {.lex_state = 105, .external_tokens = 4},
    [280] = {.lex_state = 80, .external_tokens = 5},
    [281] = {.lex_state = 78, .external_tokens = 5},
    [282] = {.lex_state = 80, .external_tokens = 5},
    [283] = {.lex_state = 80, .external_tokens = 5},
    [284] = {.lex_state = 78, .external_tokens = 5},
    [285] = {.lex_state = 78, .external_tokens = 5},
    [286] = {.lex_state = 138, .external_tokens = 5},
    [287] = {.lex_state = 136, .external_tokens = 5},
    [288] = {.lex_state = 135, .external_tokens = 5},
    [289] = {.lex_state = 78, .external_tokens = 5},
    [290] = {.lex_state = 117},
    [291] = {.lex_state = 74},
    [292] = {.lex_state = 114},
    [293] = {.lex_state = 114},
    [294] = {.lex_state = 102},
    [295] = {.lex_state = 80, .external_tokens = 5},
    [296] = {.lex_state = 142, .external_tokens = 5},
    [297] = {.lex_state = 140, .external_tokens = 5},
    [298] = {.lex_state = 78, .external_tokens = 5},
    [299] = {.lex_state = 143, .external_tokens = 5},
    [300] = {.lex_state = 138, .external_tokens = 5},
    [301] = {.lex_state = 135, .external_tokens = 5},
    [302] = {.lex_state = 117},
    [303] = {.lex_state = 83, .external_tokens = 3},
    [304] = {.lex_state = 73},
    [305] = {.lex_state = 73},
    [306] = {.lex_state = 80, .external_tokens = 5},
    [307] = {.lex_state = 78, .external_tokens = 5},
    [308] = {.lex_state = 144, .external_tokens = 5},
    [309] = {.lex_state = 73},
    [310] = {.lex_state = 144, .external_tokens = 5},
    [311] = {.lex_state = 80, .external_tokens = 5},
    [312] = {.lex_state = 105, .external_tokens = 4},
    [313] = {.lex_state = 80, .external_tokens = 5},
    [314] = {.lex_state = 80, .external_tokens = 5},
    [315] = {.lex_state = 145, .external_tokens = 5},
    [316] = {.lex_state = 73},
    [317] = {.lex_state = 73},
    [318] = {.lex_state = 146, .external_tokens = 5},
    [319] = {.lex_state = 73},
    [320] = {.lex_state = 145, .external_tokens = 5},
    [321] = {.lex_state = 145, .external_tokens = 5},
    [322] = {.lex_state = 145, .external_tokens = 5},
    [323] = {.lex_state = 145, .external_tokens = 5},
    [324] = {.lex_state = 146, .external_tokens = 5},
    [325] = {.lex_state = 136, .external_tokens = 5},
    [326] = {.lex_state = 135, .external_tokens = 5},
    [327] = {.lex_state = 78, .external_tokens = 5},
    [328] = {.lex_state = 78, .external_tokens = 5},
    [329] = {.lex_state = 74},
    [330] = {.lex_state = 138, .external_tokens = 5},
    [331] = {.lex_state = 78, .external_tokens = 5},
    [332] = {.lex_state = 83, .external_tokens = 3},
    [333] = {.lex_state = 136, .external_tokens = 5},
    [334] = {.lex_state = 73},
    [335] = {.lex_state = 147, .external_tokens = 5},
    [336] = {.lex_state = 73},
    [337] = {.lex_state = 147, .external_tokens = 5},
    [338] = {.lex_state = 78, .external_tokens = 5},
    [339] = {.lex_state = 79, .external_tokens = 2},
    [340] = {.lex_state = 78, .external_tokens = 5},
    [341] = {.lex_state = 73},
    [342] = {.lex_state = 83, .external_tokens = 3},
    [343] = {.lex_state = 80, .external_tokens = 5},
    [344] = {.lex_state = 81, .external_tokens = 5},
    [345] = {.lex_state = 73},
    [346] = {.lex_state = 81, .external_tokens = 5},
    [347] = {.lex_state = 138, .external_tokens = 5},
    [348] = {.lex_state = 78, .external_tokens = 5},
    [349] = {.lex_state = 147, .external_tokens = 5},
    [350] = {.lex_state = 83, .external_tokens = 3},
    [351] = {.lex_state = 73},
    [352] = {.lex_state = 73},
    [353] = {.lex_state = 135, .external_tokens = 5},
    [354] = {.lex_state = 148, .external_tokens = 5},
    [355] = {.lex_state = 73},
    [356] = {.lex_state = 148, .external_tokens = 5},
    [357] = {.lex_state = 149, .external_tokens = 5},
    [358] = {.lex_state = 73},
    [359] = {.lex_state = 73},
    [360] = {.lex_state = 150, .external_tokens = 5},
    [361] = {.lex_state = 73},
    [362] = {.lex_state = 149, .external_tokens = 5},
    [363] = {.lex_state = 149, .external_tokens = 5},
    [364] = {.lex_state = 149, .external_tokens = 5},
    [365] = {.lex_state = 149, .external_tokens = 5},
    [366] = {.lex_state = 150, .external_tokens = 5},
    [367] = {.lex_state = 83, .external_tokens = 3},
    [368] = {.lex_state = 74},
    [369] = {.lex_state = 83, .external_tokens = 3},
    [370] = {.lex_state = 78, .external_tokens = 5},
    [371] = {.lex_state = 73},
    [372] = {.lex_state = 73},
    [373] = {.lex_state = 137, .external_tokens = 5},
    [374] = {.lex_state = 151, .external_tokens = 5},
    [375] = {.lex_state = 73},
    [376] = {.lex_state = 151, .external_tokens = 5},
    [377] = {.lex_state = 78, .external_tokens = 5},
    [378] = {.lex_state = 152, .external_tokens = 5},
    [379] = {.lex_state = 73},
    [380] = {.lex_state = 73},
    [381] = {.lex_state = 153, .external_tokens = 5},
    [382] = {.lex_state = 73},
    [383] = {.lex_state = 152, .external_tokens = 5},
    [384] = {.lex_state = 152, .external_tokens = 5},
    [385] = {.lex_state = 152, .external_tokens = 5},
    [386] = {.lex_state = 152, .external_tokens = 5},
    [387] = {.lex_state = 153, .external_tokens = 5},
    [388] = {.lex_state = 78, .external_tokens = 5},
    [389] = {.lex_state = 135, .external_tokens = 5},
    [390] = {.lex_state = 78, .external_tokens = 5},
    [391] = {.lex_state = 74},
    [392] = {.lex_state = 115},
    [393] = {.lex_state = 74},
    [394] = {.lex_state = 102},
    [395] = {.lex_state = 74},
    [396] = {.lex_state = 111},
    [397] = {.lex_state = 74},
    [398] = {.lex_state = 83, .external_tokens = 3},
    [399] = {.lex_state = 78, .external_tokens = 5},
    [400] = {.lex_state = 83, .external_tokens = 3},
    [401] = {.lex_state = 78, .external_tokens = 5},
    [402] = {.lex_state = 83, .external_tokens = 3},
    [403] = {.lex_state = 78, .external_tokens = 5},
    [404] = {.lex_state = 140, .external_tokens = 5},
    [405] = {.lex_state = 82},
    [406] = {.lex_state = 73},
    [407] = {.lex_state = 102},
    [408] = {.lex_state = 114},
    [409] = {.lex_state = 154},
    [410] = {.lex_state = 110},
    [411] = {.lex_state = 117},
    [412] = {.lex_state = 83, .external_tokens = 3},
    [413] = {.lex_state = 78, .external_tokens = 5},
    [414] = {.lex_state = 119},
    [415] = {.lex_state = 118},
    [416] = {.lex_state = 73},
    [417] = {.lex_state = 83, .external_tokens = 3},
    [418] = {.lex_state = 126},
    [419] = {.lex_state = 135, .external_tokens = 5},
    [420] = {.lex_state = 83, .external_tokens = 3},
    [421] = {.lex_state = 120},
    [422] = {.lex_state = 126},
    [423] = {.lex_state = 83, .external_tokens = 3},
    [424] = {.lex_state = 137, .external_tokens = 5},
    [425] = {.lex_state = 78, .external_tokens = 5},
    [426] = {.lex_state = 74},
    [427] = {.lex_state = 131},
    [428] = {.lex_state = 83, .external_tokens = 3},
    [429] = {.lex_state = 73},
    [430] = {.lex_state = 73},
    [431] = {.lex_state = 155, .external_tokens = 5},
    [432] = {.lex_state = 73},
    [433] = {.lex_state = 155, .external_tokens = 5},
    [434] = {.lex_state = 156, .external_tokens = 5},
    [435] = {.lex_state = 73},
    [436] = {.lex_state = 73},
    [437] = {.lex_state = 157, .external_tokens = 5},
    [438] = {.lex_state = 73},
    [439] = {.lex_state = 156, .external_tokens = 5},
    [440] = {.lex_state = 156, .external_tokens = 5},
    [441] = {.lex_state = 156, .external_tokens = 5},
    [442] = {.lex_state = 156, .external_tokens = 5},
    [443] = {.lex_state = 157, .external_tokens = 5},
    [444] = {.lex_state = 126},
    [445] = {.lex_state = 83, .external_tokens = 3},
    [446] = {.lex_state = 73},
    [447] = {.lex_state = 73},
    [448] = {.lex_state = 138, .external_tokens = 5},
    [449] = {.lex_state = 158, .external_tokens = 5},
    [450] = {.lex_state = 73},
    [451] = {.lex_state = 158, .external_tokens = 5},
    [452] = {.lex_state = 159, .external_tokens = 5},
    [453] = {.lex_state = 73},
    [454] = {.lex_state = 73},
    [455] = {.lex_state = 160, .external_tokens = 5},
    [456] = {.lex_state = 73},
    [457] = {.lex_state = 159, .external_tokens = 5},
    [458] = {.lex_state = 159, .external_tokens = 5},
    [459] = {.lex_state = 159, .external_tokens = 5},
    [460] = {.lex_state = 159, .external_tokens = 5},
    [461] = {.lex_state = 160, .external_tokens = 5},
    [462] = {.lex_state = 126},
    [463] = {.lex_state = 83, .external_tokens = 3},
    [464] = {.lex_state = 138, .external_tokens = 5},
    [465] = {.lex_state = 78, .external_tokens = 5},
    [466] = {.lex_state = 76, .external_tokens = 5},
    [467] = {.lex_state = 73},
    [468] = {.lex_state = 73},
    [469] = {.lex_state = 134, .external_tokens = 5},
    [470] = {.lex_state = 73},
    [471] = {.lex_state = 76, .external_tokens = 5},
    [472] = {.lex_state = 76, .external_tokens = 5},
    [473] = {.lex_state = 76, .external_tokens = 5},
    [474] = {.lex_state = 117},
    [475] = {.lex_state = 140, .external_tokens = 5},
    [476] = {.lex_state = 76, .external_tokens = 5},
    [477] = {.lex_state = 134, .external_tokens = 5},
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
        [sym_module] = STATE(12),
        [sym__statement] = STATE(281),
        [sym__simple_statement] = STATE(282),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__compound_statement] = STATE(284),
        [sym_if_statement] = STATE(285),
        [sym_elif_clause] = STATE(286),
        [sym_else_clause] = STATE(287),
        [sym_for_statement] = STATE(285),
        [sym_while_statement] = STATE(285),
        [sym_try_statement] = STATE(285),
        [sym_except_clause] = STATE(288),
        [sym_finally_clause] = STATE(289),
        [sym_with_statement] = STATE(285),
        [sym_with_item] = STATE(290),
        [sym_function_definition] = STATE(285),
        [sym_parameters] = STATE(291),
        [sym_default_parameter] = STATE(292),
        [sym_list_splat_parameter] = STATE(293),
        [sym_dictionary_splat_parameter] = STATE(294),
        [sym_class_definition] = STATE(285),
        [sym__suite] = STATE(295),
        [sym_expression_list] = STATE(296),
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(276),
        [aux_sym_module_repeat1] = STATE(298),
        [aux_sym_print_statement_repeat1] = STATE(299),
        [aux_sym_if_statement_repeat1] = STATE(300),
        [aux_sym_try_statement_repeat1] = STATE(301),
        [aux_sym_with_statement_repeat1] = STATE(302),
        [aux_sym_parameters_repeat1] = STATE(99),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_return] = ACTIONS(9),
        [anon_sym_if] = ACTIONS(11),
        [anon_sym_COLON] = ACTIONS(13),
        [anon_sym_elif] = ACTIONS(15),
        [anon_sym_else] = ACTIONS(17),
        [anon_sym_for] = ACTIONS(19),
        [anon_sym_in] = ACTIONS(21),
        [anon_sym_while] = ACTIONS(23),
        [anon_sym_try] = ACTIONS(25),
        [anon_sym_except] = ACTIONS(27),
        [anon_sym_as] = ACTIONS(29),
        [anon_sym_finally] = ACTIONS(31),
        [anon_sym_with] = ACTIONS(33),
        [anon_sym_def] = ACTIONS(35),
        [anon_sym_LPAREN] = ACTIONS(37),
        [anon_sym_RPAREN] = ACTIONS(39),
        [anon_sym_EQ] = ACTIONS(41),
        [anon_sym_STAR] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_PLUS] = ACTIONS(47),
        [sym_number] = ACTIONS(49),
        [sym_identifier] = ACTIONS(51),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(55),
        [sym__indent] = ACTIONS(57),
        [sym__dedent] = ACTIONS(59),
    },
    [1] = {
        [sym_module] = STATE(12),
        [sym__statement] = STATE(13),
        [sym__simple_statement] = STATE(14),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(16),
        [sym_if_statement] = STATE(17),
        [sym_for_statement] = STATE(17),
        [sym_while_statement] = STATE(17),
        [sym_try_statement] = STATE(17),
        [sym_with_statement] = STATE(17),
        [sym_function_definition] = STATE(17),
        [sym_class_definition] = STATE(17),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [aux_sym_module_repeat1] = STATE(19),
        [ts_builtin_sym_end] = ACTIONS(61),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(67),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(71),
        [anon_sym_try] = ACTIONS(73),
        [anon_sym_with] = ACTIONS(75),
        [anon_sym_def] = ACTIONS(77),
        [anon_sym_class] = ACTIONS(79),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
    },
    [2] = {
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(11),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(53),
    },
    [3] = {
        [sym_expression_list] = STATE(190),
        [sym__expression] = STATE(191),
        [sym_binary_operator] = STATE(11),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(53),
    },
    [4] = {
        [sym__expression] = STATE(243),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [5] = {
        [sym_expression_list] = STATE(237),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [6] = {
        [sym__expression] = STATE(233),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [7] = {
        [anon_sym_COLON] = ACTIONS(87),
        [sym_comment] = ACTIONS(53),
    },
    [8] = {
        [sym_with_item] = STATE(204),
        [sym__expression] = STATE(121),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [9] = {
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(53),
    },
    [10] = {
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(53),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(93),
        [anon_sym_return] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_elif] = ACTIONS(95),
        [anon_sym_else] = ACTIONS(95),
        [anon_sym_for] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(95),
        [anon_sym_except] = ACTIONS(95),
        [anon_sym_finally] = ACTIONS(95),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(93),
        [sym_number] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(93),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [sym_comment] = ACTIONS(53),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_return] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(103),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(101),
    },
    [14] = {
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(107),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(109),
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_elif] = ACTIONS(111),
        [anon_sym_else] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_except] = ACTIONS(111),
        [anon_sym_finally] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(111),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(109),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_return] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(117),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(115),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(123),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(121),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_elif] = ACTIONS(129),
        [anon_sym_else] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_except] = ACTIONS(129),
        [anon_sym_finally] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(131),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
    },
    [19] = {
        [sym__statement] = STATE(21),
        [sym__simple_statement] = STATE(14),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(16),
        [sym_if_statement] = STATE(17),
        [sym_for_statement] = STATE(17),
        [sym_while_statement] = STATE(17),
        [sym_try_statement] = STATE(17),
        [sym_with_statement] = STATE(17),
        [sym_function_definition] = STATE(17),
        [sym_class_definition] = STATE(17),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(67),
        [anon_sym_for] = ACTIONS(69),
        [anon_sym_while] = ACTIONS(71),
        [anon_sym_try] = ACTIONS(73),
        [anon_sym_with] = ACTIONS(75),
        [anon_sym_def] = ACTIONS(77),
        [anon_sym_class] = ACTIONS(79),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(137),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [sym_comment] = ACTIONS(53),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(141),
    },
    [22] = {
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(11),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(53),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(153),
    },
    [25] = {
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(161),
        [sym_comment] = ACTIONS(53),
    },
    [26] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(199),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [27] = {
        [sym_expression_list] = STATE(29),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [28] = {
        [anon_sym_COMMA] = ACTIONS(93),
        [anon_sym_COLON] = ACTIONS(93),
        [anon_sym_in] = ACTIONS(93),
        [anon_sym_except] = ACTIONS(93),
        [anon_sym_as] = ACTIONS(93),
        [anon_sym_finally] = ACTIONS(93),
        [anon_sym_RPAREN] = ACTIONS(93),
        [anon_sym_PLUS] = ACTIONS(93),
        [sym_comment] = ACTIONS(53),
    },
    [29] = {
        [anon_sym_RPAREN] = ACTIONS(165),
        [sym_comment] = ACTIONS(53),
    },
    [30] = {
        [aux_sym_print_statement_repeat1] = STATE(33),
        [anon_sym_COMMA] = ACTIONS(167),
        [anon_sym_COLON] = ACTIONS(169),
        [anon_sym_in] = ACTIONS(169),
        [anon_sym_except] = ACTIONS(169),
        [anon_sym_finally] = ACTIONS(169),
        [anon_sym_RPAREN] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [31] = {
        [sym__expression] = STATE(37),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [32] = {
        [sym__expression] = STATE(36),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [33] = {
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_COLON] = ACTIONS(175),
        [anon_sym_in] = ACTIONS(175),
        [anon_sym_except] = ACTIONS(175),
        [anon_sym_finally] = ACTIONS(175),
        [anon_sym_RPAREN] = ACTIONS(175),
        [sym_comment] = ACTIONS(53),
    },
    [34] = {
        [sym__expression] = STATE(35),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [35] = {
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_COLON] = ACTIONS(177),
        [anon_sym_in] = ACTIONS(177),
        [anon_sym_except] = ACTIONS(177),
        [anon_sym_finally] = ACTIONS(177),
        [anon_sym_RPAREN] = ACTIONS(177),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [36] = {
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_in] = ACTIONS(147),
        [anon_sym_except] = ACTIONS(147),
        [anon_sym_as] = ACTIONS(147),
        [anon_sym_finally] = ACTIONS(147),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(147),
        [sym_comment] = ACTIONS(53),
    },
    [37] = {
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_COLON] = ACTIONS(179),
        [anon_sym_in] = ACTIONS(179),
        [anon_sym_except] = ACTIONS(179),
        [anon_sym_finally] = ACTIONS(179),
        [anon_sym_RPAREN] = ACTIONS(179),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [38] = {
        [anon_sym_COLON] = ACTIONS(181),
        [sym_comment] = ACTIONS(53),
    },
    [39] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(42),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [40] = {
        [sym__statement] = STATE(51),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [aux_sym_module_repeat1] = STATE(55),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(197),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(199),
        [anon_sym_SEMI] = ACTIONS(199),
        [anon_sym_print] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(201),
        [anon_sym_if] = ACTIONS(201),
        [anon_sym_elif] = ACTIONS(201),
        [anon_sym_else] = ACTIONS(201),
        [anon_sym_for] = ACTIONS(201),
        [anon_sym_while] = ACTIONS(201),
        [anon_sym_try] = ACTIONS(201),
        [anon_sym_except] = ACTIONS(201),
        [anon_sym_finally] = ACTIONS(201),
        [anon_sym_with] = ACTIONS(201),
        [anon_sym_def] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(201),
        [sym_number] = ACTIONS(201),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(199),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(207),
        [anon_sym_return] = ACTIONS(207),
        [anon_sym_if] = ACTIONS(207),
        [anon_sym_for] = ACTIONS(207),
        [anon_sym_while] = ACTIONS(207),
        [anon_sym_try] = ACTIONS(207),
        [anon_sym_with] = ACTIONS(207),
        [anon_sym_def] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(207),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(205),
    },
    [43] = {
        [sym__expression] = STATE(178),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [44] = {
        [sym_expression_list] = STATE(172),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [45] = {
        [sym__expression] = STATE(168),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [46] = {
        [anon_sym_COLON] = ACTIONS(211),
        [sym_comment] = ACTIONS(53),
    },
    [47] = {
        [sym_with_item] = STATE(120),
        [sym__expression] = STATE(121),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [48] = {
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(53),
    },
    [49] = {
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(53),
    },
    [50] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_return] = ACTIONS(219),
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
        [anon_sym_class] = ACTIONS(219),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(217),
    },
    [51] = {
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_return] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(103),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(101),
    },
    [52] = {
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(223),
    },
    [53] = {
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_return] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(117),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(115),
    },
    [54] = {
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(123),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(121),
    },
    [55] = {
        [sym__statement] = STATE(57),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(225),
    },
    [56] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(229),
        [anon_sym_return] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_while] = ACTIONS(229),
        [anon_sym_try] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_with] = ACTIONS(229),
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_class] = ACTIONS(229),
        [sym_number] = ACTIONS(229),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(227),
    },
    [57] = {
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(141),
    },
    [58] = {
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(153),
    },
    [59] = {
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(235),
        [sym_comment] = ACTIONS(53),
    },
    [60] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(87),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [61] = {
        [sym_expression_list] = STATE(62),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [62] = {
        [anon_sym_RPAREN] = ACTIONS(247),
        [sym_comment] = ACTIONS(53),
    },
    [63] = {
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
    },
    [64] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(71),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [65] = {
        [sym__expression] = STATE(85),
        [sym_binary_operator] = STATE(67),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(53),
    },
    [66] = {
        [sym_expression_list] = STATE(78),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(67),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(53),
    },
    [67] = {
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(93),
        [anon_sym_return] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_elif] = ACTIONS(95),
        [anon_sym_else] = ACTIONS(95),
        [anon_sym_for] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(95),
        [anon_sym_except] = ACTIONS(95),
        [anon_sym_finally] = ACTIONS(95),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(93),
        [sym_number] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(93),
    },
    [68] = {
        [sym__statement] = STATE(51),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [aux_sym_module_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(251),
    },
    [69] = {
        [anon_sym_print] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(201),
        [anon_sym_if] = ACTIONS(201),
        [anon_sym_elif] = ACTIONS(201),
        [anon_sym_else] = ACTIONS(201),
        [anon_sym_for] = ACTIONS(201),
        [anon_sym_while] = ACTIONS(201),
        [anon_sym_try] = ACTIONS(201),
        [anon_sym_except] = ACTIONS(201),
        [anon_sym_finally] = ACTIONS(201),
        [anon_sym_with] = ACTIONS(201),
        [anon_sym_def] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(201),
        [sym_number] = ACTIONS(201),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(199),
    },
    [70] = {
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_elif] = ACTIONS(111),
        [anon_sym_else] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_except] = ACTIONS(111),
        [anon_sym_finally] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(111),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(109),
    },
    [71] = {
        [anon_sym_print] = ACTIONS(207),
        [anon_sym_return] = ACTIONS(207),
        [anon_sym_if] = ACTIONS(207),
        [anon_sym_for] = ACTIONS(207),
        [anon_sym_while] = ACTIONS(207),
        [anon_sym_try] = ACTIONS(207),
        [anon_sym_with] = ACTIONS(207),
        [anon_sym_def] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(207),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(205),
    },
    [72] = {
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_elif] = ACTIONS(129),
        [anon_sym_else] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_except] = ACTIONS(129),
        [anon_sym_finally] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(127),
    },
    [73] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(67),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(53),
    },
    [74] = {
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(147),
    },
    [75] = {
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_return] = ACTIONS(219),
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
        [anon_sym_class] = ACTIONS(219),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(217),
    },
    [76] = {
        [sym__statement] = STATE(57),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(255),
    },
    [77] = {
        [anon_sym_print] = ACTIONS(229),
        [anon_sym_return] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_while] = ACTIONS(229),
        [anon_sym_try] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_with] = ACTIONS(229),
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_class] = ACTIONS(229),
        [sym_number] = ACTIONS(229),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(227),
    },
    [78] = {
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_return] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_while] = ACTIONS(257),
        [anon_sym_try] = ACTIONS(257),
        [anon_sym_except] = ACTIONS(257),
        [anon_sym_finally] = ACTIONS(257),
        [anon_sym_with] = ACTIONS(257),
        [anon_sym_def] = ACTIONS(257),
        [anon_sym_class] = ACTIONS(257),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(261),
    },
    [79] = {
        [aux_sym_print_statement_repeat1] = STATE(81),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_except] = ACTIONS(263),
        [anon_sym_finally] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(169),
    },
    [80] = {
        [sym__expression] = STATE(84),
        [sym_binary_operator] = STATE(67),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(53),
    },
    [81] = {
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(175),
    },
    [82] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(67),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(241),
        [sym_comment] = ACTIONS(53),
    },
    [83] = {
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(177),
    },
    [84] = {
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_elif] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(179),
    },
    [85] = {
        [aux_sym_print_statement_repeat1] = STATE(86),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_except] = ACTIONS(283),
        [anon_sym_finally] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(287),
    },
    [86] = {
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(293),
    },
    [87] = {
        [anon_sym_print] = ACTIONS(295),
        [anon_sym_return] = ACTIONS(295),
        [anon_sym_if] = ACTIONS(295),
        [anon_sym_for] = ACTIONS(295),
        [anon_sym_while] = ACTIONS(295),
        [anon_sym_try] = ACTIONS(295),
        [anon_sym_with] = ACTIONS(295),
        [anon_sym_def] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(295),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(297),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(299),
    },
    [88] = {
        [sym_parameters] = STATE(90),
        [anon_sym_LPAREN] = ACTIONS(301),
        [sym_comment] = ACTIONS(53),
    },
    [89] = {
        [sym_default_parameter] = STATE(96),
        [sym_list_splat_parameter] = STATE(97),
        [sym_dictionary_splat_parameter] = STATE(98),
        [aux_sym_parameters_repeat1] = STATE(99),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(53),
    },
    [90] = {
        [anon_sym_COLON] = ACTIONS(309),
        [sym_comment] = ACTIONS(53),
    },
    [91] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(92),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [92] = {
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_return] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(311),
        [sym_number] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(315),
    },
    [93] = {
        [anon_sym_COLON] = ACTIONS(317),
        [sym_comment] = ACTIONS(53),
    },
    [94] = {
        [anon_sym_STAR] = ACTIONS(319),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(53),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(325),
        [anon_sym_EQ] = ACTIONS(327),
        [sym_comment] = ACTIONS(53),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(53),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(53),
    },
    [98] = {
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(53),
    },
    [99] = {
        [sym_default_parameter] = STATE(101),
        [sym_list_splat_parameter] = STATE(102),
        [sym_dictionary_splat_parameter] = STATE(103),
        [anon_sym_STAR] = ACTIONS(305),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(53),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_EQ] = ACTIONS(327),
        [sym_comment] = ACTIONS(53),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(53),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(53),
    },
    [103] = {
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(53),
    },
    [104] = {
        [anon_sym_COLON] = ACTIONS(339),
        [sym_comment] = ACTIONS(53),
    },
    [105] = {
        [sym_dictionary_splat_parameter] = STATE(107),
        [anon_sym_STAR] = ACTIONS(341),
        [sym_comment] = ACTIONS(53),
    },
    [106] = {
        [anon_sym_STAR] = ACTIONS(319),
        [sym_comment] = ACTIONS(53),
    },
    [107] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [sym_comment] = ACTIONS(53),
    },
    [108] = {
        [anon_sym_COLON] = ACTIONS(345),
        [sym_comment] = ACTIONS(53),
    },
    [109] = {
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(53),
    },
    [110] = {
        [anon_sym_RPAREN] = ACTIONS(349),
        [sym_comment] = ACTIONS(53),
    },
    [111] = {
        [anon_sym_RPAREN] = ACTIONS(351),
        [anon_sym_STAR] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(53),
    },
    [112] = {
        [anon_sym_COLON] = ACTIONS(357),
        [sym_comment] = ACTIONS(53),
    },
    [113] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [115] = {
        [anon_sym_COLON] = ACTIONS(361),
        [sym_comment] = ACTIONS(53),
    },
    [116] = {
        [sym_dictionary_splat_parameter] = STATE(117),
        [anon_sym_STAR] = ACTIONS(341),
        [sym_comment] = ACTIONS(53),
    },
    [117] = {
        [anon_sym_RPAREN] = ACTIONS(351),
        [sym_comment] = ACTIONS(53),
    },
    [118] = {
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_STAR] = ACTIONS(363),
        [sym_identifier] = ACTIONS(365),
        [sym_comment] = ACTIONS(53),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_RPAREN] = ACTIONS(367),
        [sym_comment] = ACTIONS(53),
    },
    [120] = {
        [aux_sym_with_statement_repeat1] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(371),
        [sym_comment] = ACTIONS(53),
    },
    [121] = {
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_as] = ACTIONS(375),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [122] = {
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_COLON] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [124] = {
        [sym_with_item] = STATE(132),
        [sym__expression] = STATE(121),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [125] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(131),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [126] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_COLON] = ACTIONS(381),
        [sym_comment] = ACTIONS(53),
    },
    [127] = {
        [sym_with_item] = STATE(130),
        [sym__expression] = STATE(121),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [128] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(129),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [129] = {
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(387),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_COLON] = ACTIONS(389),
        [sym_comment] = ACTIONS(53),
    },
    [131] = {
        [anon_sym_print] = ACTIONS(391),
        [anon_sym_return] = ACTIONS(391),
        [anon_sym_if] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(391),
        [anon_sym_while] = ACTIONS(391),
        [anon_sym_try] = ACTIONS(391),
        [anon_sym_with] = ACTIONS(391),
        [anon_sym_def] = ACTIONS(391),
        [anon_sym_class] = ACTIONS(391),
        [sym_number] = ACTIONS(391),
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(395),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_COLON] = ACTIONS(397),
        [sym_comment] = ACTIONS(53),
    },
    [133] = {
        [sym__simple_statement] = STATE(137),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym__suite] = STATE(139),
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(28),
        [anon_sym_print] = ACTIONS(399),
        [anon_sym_return] = ACTIONS(401),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(403),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(405),
    },
    [134] = {
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [135] = {
        [sym_expression_list] = STATE(165),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [136] = {
        [sym__statement] = STATE(51),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [aux_sym_module_repeat1] = STATE(163),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(407),
    },
    [137] = {
        [anon_sym_except] = ACTIONS(199),
        [anon_sym_finally] = ACTIONS(199),
        [sym_comment] = ACTIONS(53),
    },
    [138] = {
        [anon_sym_except] = ACTIONS(109),
        [anon_sym_finally] = ACTIONS(109),
        [sym_comment] = ACTIONS(53),
    },
    [139] = {
        [sym_except_clause] = STATE(143),
        [sym_finally_clause] = STATE(144),
        [aux_sym_try_statement_repeat1] = STATE(145),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(411),
        [sym_comment] = ACTIONS(53),
    },
    [140] = {
        [anon_sym_except] = ACTIONS(127),
        [anon_sym_finally] = ACTIONS(127),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [141] = {
        [sym__expression] = STATE(155),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [142] = {
        [anon_sym_COLON] = ACTIONS(413),
        [sym_comment] = ACTIONS(53),
    },
    [143] = {
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(419),
    },
    [144] = {
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(425),
    },
    [145] = {
        [sym_else_clause] = STATE(147),
        [sym_except_clause] = STATE(148),
        [sym_finally_clause] = STATE(149),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(425),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(433),
        [sym_comment] = ACTIONS(53),
    },
    [147] = {
        [sym_finally_clause] = STATE(150),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(439),
    },
    [148] = {
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(445),
    },
    [149] = {
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(439),
    },
    [150] = {
        [anon_sym_print] = ACTIONS(447),
        [anon_sym_return] = ACTIONS(447),
        [anon_sym_if] = ACTIONS(447),
        [anon_sym_for] = ACTIONS(447),
        [anon_sym_while] = ACTIONS(447),
        [anon_sym_try] = ACTIONS(447),
        [anon_sym_with] = ACTIONS(447),
        [anon_sym_def] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(447),
        [sym_number] = ACTIONS(447),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(451),
    },
    [151] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(152),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [152] = {
        [anon_sym_print] = ACTIONS(453),
        [anon_sym_return] = ACTIONS(453),
        [anon_sym_if] = ACTIONS(453),
        [anon_sym_for] = ACTIONS(453),
        [anon_sym_while] = ACTIONS(453),
        [anon_sym_try] = ACTIONS(453),
        [anon_sym_finally] = ACTIONS(453),
        [anon_sym_with] = ACTIONS(453),
        [anon_sym_def] = ACTIONS(453),
        [anon_sym_class] = ACTIONS(453),
        [sym_number] = ACTIONS(453),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(457),
    },
    [153] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(154),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [154] = {
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(459),
        [anon_sym_if] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_while] = ACTIONS(459),
        [anon_sym_try] = ACTIONS(459),
        [anon_sym_with] = ACTIONS(459),
        [anon_sym_def] = ACTIONS(459),
        [anon_sym_class] = ACTIONS(459),
        [sym_number] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(463),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(465),
        [anon_sym_COLON] = ACTIONS(467),
        [anon_sym_as] = ACTIONS(465),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [156] = {
        [sym__expression] = STATE(158),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [157] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(161),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [158] = {
        [anon_sym_COLON] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [159] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(160),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [160] = {
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(471),
        [anon_sym_if] = ACTIONS(471),
        [anon_sym_else] = ACTIONS(471),
        [anon_sym_for] = ACTIONS(471),
        [anon_sym_while] = ACTIONS(471),
        [anon_sym_try] = ACTIONS(471),
        [anon_sym_except] = ACTIONS(471),
        [anon_sym_finally] = ACTIONS(471),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(471),
        [sym_number] = ACTIONS(471),
        [sym_identifier] = ACTIONS(473),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(475),
    },
    [161] = {
        [anon_sym_print] = ACTIONS(477),
        [anon_sym_return] = ACTIONS(477),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_else] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(477),
        [anon_sym_while] = ACTIONS(477),
        [anon_sym_try] = ACTIONS(477),
        [anon_sym_except] = ACTIONS(477),
        [anon_sym_finally] = ACTIONS(477),
        [anon_sym_with] = ACTIONS(477),
        [anon_sym_def] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [sym_number] = ACTIONS(477),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(481),
    },
    [162] = {
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [sym_comment] = ACTIONS(53),
    },
    [163] = {
        [sym__statement] = STATE(57),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(483),
    },
    [164] = {
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [sym_comment] = ACTIONS(53),
    },
    [165] = {
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [sym_comment] = ACTIONS(53),
    },
    [166] = {
        [aux_sym_print_statement_repeat1] = STATE(167),
        [anon_sym_COMMA] = ACTIONS(167),
        [anon_sym_except] = ACTIONS(287),
        [anon_sym_finally] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [167] = {
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [sym_comment] = ACTIONS(53),
    },
    [168] = {
        [anon_sym_COLON] = ACTIONS(485),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [169] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(170),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [170] = {
        [sym_else_clause] = STATE(171),
        [anon_sym_print] = ACTIONS(487),
        [anon_sym_return] = ACTIONS(487),
        [anon_sym_if] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_while] = ACTIONS(487),
        [anon_sym_try] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(487),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(487),
        [sym_number] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(491),
    },
    [171] = {
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(497),
    },
    [172] = {
        [anon_sym_in] = ACTIONS(499),
        [sym_comment] = ACTIONS(53),
    },
    [173] = {
        [sym_expression_list] = STATE(174),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [174] = {
        [anon_sym_COLON] = ACTIONS(501),
        [sym_comment] = ACTIONS(53),
    },
    [175] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(176),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [176] = {
        [sym_else_clause] = STATE(177),
        [anon_sym_print] = ACTIONS(503),
        [anon_sym_return] = ACTIONS(503),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(503),
        [anon_sym_while] = ACTIONS(503),
        [anon_sym_try] = ACTIONS(503),
        [anon_sym_with] = ACTIONS(503),
        [anon_sym_def] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(503),
        [sym_number] = ACTIONS(503),
        [sym_identifier] = ACTIONS(505),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(507),
    },
    [177] = {
        [anon_sym_print] = ACTIONS(509),
        [anon_sym_return] = ACTIONS(509),
        [anon_sym_if] = ACTIONS(509),
        [anon_sym_for] = ACTIONS(509),
        [anon_sym_while] = ACTIONS(509),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(509),
        [anon_sym_def] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(509),
        [sym_number] = ACTIONS(509),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(513),
    },
    [178] = {
        [anon_sym_COLON] = ACTIONS(515),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [179] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(180),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [180] = {
        [sym_elif_clause] = STATE(182),
        [sym_else_clause] = STATE(183),
        [aux_sym_if_statement_repeat1] = STATE(184),
        [anon_sym_print] = ACTIONS(517),
        [anon_sym_return] = ACTIONS(517),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_elif] = ACTIONS(519),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(517),
        [anon_sym_while] = ACTIONS(517),
        [anon_sym_try] = ACTIONS(517),
        [anon_sym_with] = ACTIONS(517),
        [anon_sym_def] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(517),
        [sym_number] = ACTIONS(517),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(523),
    },
    [181] = {
        [sym__expression] = STATE(187),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [182] = {
        [anon_sym_print] = ACTIONS(525),
        [anon_sym_return] = ACTIONS(525),
        [anon_sym_if] = ACTIONS(525),
        [anon_sym_elif] = ACTIONS(525),
        [anon_sym_else] = ACTIONS(525),
        [anon_sym_for] = ACTIONS(525),
        [anon_sym_while] = ACTIONS(525),
        [anon_sym_try] = ACTIONS(525),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(525),
        [sym_number] = ACTIONS(525),
        [sym_identifier] = ACTIONS(527),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(529),
    },
    [183] = {
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(535),
    },
    [184] = {
        [sym_elif_clause] = STATE(185),
        [sym_else_clause] = STATE(186),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_elif] = ACTIONS(519),
        [anon_sym_else] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(535),
    },
    [185] = {
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_elif] = ACTIONS(537),
        [anon_sym_else] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(541),
    },
    [186] = {
        [anon_sym_print] = ACTIONS(543),
        [anon_sym_return] = ACTIONS(543),
        [anon_sym_if] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_while] = ACTIONS(543),
        [anon_sym_try] = ACTIONS(543),
        [anon_sym_with] = ACTIONS(543),
        [anon_sym_def] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(543),
        [sym_number] = ACTIONS(543),
        [sym_identifier] = ACTIONS(545),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(547),
    },
    [187] = {
        [anon_sym_COLON] = ACTIONS(549),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [188] = {
        [sym__simple_statement] = STATE(69),
        [sym_print_statement] = STATE(70),
        [sym_expression_statement] = STATE(70),
        [sym_return_statement] = STATE(70),
        [sym__suite] = STATE(189),
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(67),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(245),
    },
    [189] = {
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(551),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(555),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_return] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_while] = ACTIONS(257),
        [anon_sym_try] = ACTIONS(257),
        [anon_sym_except] = ACTIONS(257),
        [anon_sym_finally] = ACTIONS(257),
        [anon_sym_with] = ACTIONS(257),
        [anon_sym_def] = ACTIONS(257),
        [anon_sym_class] = ACTIONS(257),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(261),
    },
    [191] = {
        [aux_sym_print_statement_repeat1] = STATE(193),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(557),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_except] = ACTIONS(263),
        [anon_sym_finally] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(131),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
    },
    [192] = {
        [sym__expression] = STATE(196),
        [sym_binary_operator] = STATE(11),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(53),
    },
    [193] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
    },
    [194] = {
        [sym__expression] = STATE(195),
        [sym_binary_operator] = STATE(11),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(53),
    },
    [195] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(131),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
    },
    [196] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_elif] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(131),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
    },
    [197] = {
        [aux_sym_print_statement_repeat1] = STATE(198),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(557),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_except] = ACTIONS(283),
        [anon_sym_finally] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(131),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
    },
    [198] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
    },
    [199] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(295),
        [anon_sym_return] = ACTIONS(295),
        [anon_sym_if] = ACTIONS(295),
        [anon_sym_for] = ACTIONS(295),
        [anon_sym_while] = ACTIONS(295),
        [anon_sym_try] = ACTIONS(295),
        [anon_sym_with] = ACTIONS(295),
        [anon_sym_def] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(295),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(297),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(299),
    },
    [200] = {
        [sym_parameters] = STATE(201),
        [anon_sym_LPAREN] = ACTIONS(301),
        [sym_comment] = ACTIONS(53),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(561),
        [sym_comment] = ACTIONS(53),
    },
    [202] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(203),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [203] = {
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_return] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(311),
        [sym_number] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(315),
    },
    [204] = {
        [aux_sym_with_statement_repeat1] = STATE(206),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(563),
        [sym_comment] = ACTIONS(53),
    },
    [205] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(209),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [206] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_COLON] = ACTIONS(565),
        [sym_comment] = ACTIONS(53),
    },
    [207] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(208),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(387),
    },
    [209] = {
        [ts_builtin_sym_end] = ACTIONS(395),
        [anon_sym_SEMI] = ACTIONS(395),
        [anon_sym_print] = ACTIONS(391),
        [anon_sym_return] = ACTIONS(391),
        [anon_sym_if] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(391),
        [anon_sym_while] = ACTIONS(391),
        [anon_sym_try] = ACTIONS(391),
        [anon_sym_with] = ACTIONS(391),
        [anon_sym_def] = ACTIONS(391),
        [anon_sym_class] = ACTIONS(391),
        [sym_number] = ACTIONS(391),
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(395),
    },
    [210] = {
        [sym__simple_statement] = STATE(137),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym__suite] = STATE(211),
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(28),
        [anon_sym_print] = ACTIONS(399),
        [anon_sym_return] = ACTIONS(401),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(403),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(405),
    },
    [211] = {
        [sym_except_clause] = STATE(214),
        [sym_finally_clause] = STATE(215),
        [aux_sym_try_statement_repeat1] = STATE(216),
        [anon_sym_except] = ACTIONS(567),
        [anon_sym_finally] = ACTIONS(569),
        [sym_comment] = ACTIONS(53),
    },
    [212] = {
        [sym__expression] = STATE(226),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [213] = {
        [anon_sym_COLON] = ACTIONS(571),
        [sym_comment] = ACTIONS(53),
    },
    [214] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(419),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(425),
    },
    [216] = {
        [sym_else_clause] = STATE(218),
        [sym_except_clause] = STATE(219),
        [sym_finally_clause] = STATE(220),
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(575),
        [anon_sym_finally] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(425),
    },
    [217] = {
        [anon_sym_COLON] = ACTIONS(579),
        [sym_comment] = ACTIONS(53),
    },
    [218] = {
        [sym_finally_clause] = STATE(221),
        [ts_builtin_sym_end] = ACTIONS(439),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(439),
    },
    [219] = {
        [ts_builtin_sym_end] = ACTIONS(445),
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(445),
    },
    [220] = {
        [ts_builtin_sym_end] = ACTIONS(439),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(439),
    },
    [221] = {
        [ts_builtin_sym_end] = ACTIONS(451),
        [anon_sym_SEMI] = ACTIONS(451),
        [anon_sym_print] = ACTIONS(447),
        [anon_sym_return] = ACTIONS(447),
        [anon_sym_if] = ACTIONS(447),
        [anon_sym_for] = ACTIONS(447),
        [anon_sym_while] = ACTIONS(447),
        [anon_sym_try] = ACTIONS(447),
        [anon_sym_with] = ACTIONS(447),
        [anon_sym_def] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(447),
        [sym_number] = ACTIONS(447),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(451),
    },
    [222] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(223),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [223] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_print] = ACTIONS(453),
        [anon_sym_return] = ACTIONS(453),
        [anon_sym_if] = ACTIONS(453),
        [anon_sym_for] = ACTIONS(453),
        [anon_sym_while] = ACTIONS(453),
        [anon_sym_try] = ACTIONS(453),
        [anon_sym_finally] = ACTIONS(453),
        [anon_sym_with] = ACTIONS(453),
        [anon_sym_def] = ACTIONS(453),
        [anon_sym_class] = ACTIONS(453),
        [sym_number] = ACTIONS(453),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(457),
    },
    [224] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(225),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [225] = {
        [ts_builtin_sym_end] = ACTIONS(463),
        [anon_sym_SEMI] = ACTIONS(463),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(459),
        [anon_sym_if] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_while] = ACTIONS(459),
        [anon_sym_try] = ACTIONS(459),
        [anon_sym_with] = ACTIONS(459),
        [anon_sym_def] = ACTIONS(459),
        [anon_sym_class] = ACTIONS(459),
        [sym_number] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(463),
    },
    [226] = {
        [anon_sym_COMMA] = ACTIONS(581),
        [anon_sym_COLON] = ACTIONS(583),
        [anon_sym_as] = ACTIONS(581),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [227] = {
        [sym__expression] = STATE(229),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [228] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(232),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [229] = {
        [anon_sym_COLON] = ACTIONS(585),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [230] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(231),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [231] = {
        [ts_builtin_sym_end] = ACTIONS(475),
        [anon_sym_SEMI] = ACTIONS(475),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(471),
        [anon_sym_if] = ACTIONS(471),
        [anon_sym_else] = ACTIONS(471),
        [anon_sym_for] = ACTIONS(471),
        [anon_sym_while] = ACTIONS(471),
        [anon_sym_try] = ACTIONS(471),
        [anon_sym_except] = ACTIONS(471),
        [anon_sym_finally] = ACTIONS(471),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(471),
        [sym_number] = ACTIONS(471),
        [sym_identifier] = ACTIONS(473),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(475),
    },
    [232] = {
        [ts_builtin_sym_end] = ACTIONS(481),
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_print] = ACTIONS(477),
        [anon_sym_return] = ACTIONS(477),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_else] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(477),
        [anon_sym_while] = ACTIONS(477),
        [anon_sym_try] = ACTIONS(477),
        [anon_sym_except] = ACTIONS(477),
        [anon_sym_finally] = ACTIONS(477),
        [anon_sym_with] = ACTIONS(477),
        [anon_sym_def] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [sym_number] = ACTIONS(477),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(481),
    },
    [233] = {
        [anon_sym_COLON] = ACTIONS(587),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [234] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(235),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [235] = {
        [sym_else_clause] = STATE(236),
        [ts_builtin_sym_end] = ACTIONS(491),
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_print] = ACTIONS(487),
        [anon_sym_return] = ACTIONS(487),
        [anon_sym_if] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_while] = ACTIONS(487),
        [anon_sym_try] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(487),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(487),
        [sym_number] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(491),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(497),
    },
    [237] = {
        [anon_sym_in] = ACTIONS(589),
        [sym_comment] = ACTIONS(53),
    },
    [238] = {
        [sym_expression_list] = STATE(239),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [239] = {
        [anon_sym_COLON] = ACTIONS(591),
        [sym_comment] = ACTIONS(53),
    },
    [240] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(241),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [241] = {
        [sym_else_clause] = STATE(242),
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(503),
        [anon_sym_return] = ACTIONS(503),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_else] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(503),
        [anon_sym_while] = ACTIONS(503),
        [anon_sym_try] = ACTIONS(503),
        [anon_sym_with] = ACTIONS(503),
        [anon_sym_def] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(503),
        [sym_number] = ACTIONS(503),
        [sym_identifier] = ACTIONS(505),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(507),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(513),
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_print] = ACTIONS(509),
        [anon_sym_return] = ACTIONS(509),
        [anon_sym_if] = ACTIONS(509),
        [anon_sym_for] = ACTIONS(509),
        [anon_sym_while] = ACTIONS(509),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(509),
        [anon_sym_def] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(509),
        [sym_number] = ACTIONS(509),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(513),
    },
    [243] = {
        [anon_sym_COLON] = ACTIONS(593),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [244] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(245),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [245] = {
        [sym_elif_clause] = STATE(247),
        [sym_else_clause] = STATE(248),
        [aux_sym_if_statement_repeat1] = STATE(249),
        [ts_builtin_sym_end] = ACTIONS(523),
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_print] = ACTIONS(517),
        [anon_sym_return] = ACTIONS(517),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_elif] = ACTIONS(595),
        [anon_sym_else] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(517),
        [anon_sym_while] = ACTIONS(517),
        [anon_sym_try] = ACTIONS(517),
        [anon_sym_with] = ACTIONS(517),
        [anon_sym_def] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(517),
        [sym_number] = ACTIONS(517),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(523),
    },
    [246] = {
        [sym__expression] = STATE(252),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_SEMI] = ACTIONS(529),
        [anon_sym_print] = ACTIONS(525),
        [anon_sym_return] = ACTIONS(525),
        [anon_sym_if] = ACTIONS(525),
        [anon_sym_elif] = ACTIONS(525),
        [anon_sym_else] = ACTIONS(525),
        [anon_sym_for] = ACTIONS(525),
        [anon_sym_while] = ACTIONS(525),
        [anon_sym_try] = ACTIONS(525),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(525),
        [sym_number] = ACTIONS(525),
        [sym_identifier] = ACTIONS(527),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(529),
    },
    [248] = {
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(535),
    },
    [249] = {
        [sym_elif_clause] = STATE(250),
        [sym_else_clause] = STATE(251),
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_elif] = ACTIONS(595),
        [anon_sym_else] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(535),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(541),
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_elif] = ACTIONS(537),
        [anon_sym_else] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(541),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(547),
        [anon_sym_SEMI] = ACTIONS(547),
        [anon_sym_print] = ACTIONS(543),
        [anon_sym_return] = ACTIONS(543),
        [anon_sym_if] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_while] = ACTIONS(543),
        [anon_sym_try] = ACTIONS(543),
        [anon_sym_with] = ACTIONS(543),
        [anon_sym_def] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(543),
        [sym_number] = ACTIONS(543),
        [sym_identifier] = ACTIONS(545),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(547),
    },
    [252] = {
        [anon_sym_COLON] = ACTIONS(597),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [253] = {
        [sym__simple_statement] = STATE(41),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__suite] = STATE(254),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(163),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(555),
        [anon_sym_SEMI] = ACTIONS(555),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(551),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(555),
    },
    [255] = {
        [sym__expression] = STATE(476),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [256] = {
        [sym_with_item] = STATE(474),
        [sym_dictionary_splat_parameter] = STATE(394),
        [sym__expression] = STATE(475),
        [sym_binary_operator] = STATE(276),
        [anon_sym_RPAREN] = ACTIONS(601),
        [anon_sym_STAR] = ACTIONS(603),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(53),
    },
    [257] = {
        [sym_expression_list] = STATE(314),
        [sym__expression] = STATE(466),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [258] = {
        [sym__expression] = STATE(462),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [259] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(295),
        [sym__expression] = STATE(344),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(613),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [260] = {
        [sym__expression] = STATE(444),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [261] = {
        [anon_sym_COLON] = ACTIONS(619),
        [sym_comment] = ACTIONS(53),
    },
    [262] = {
        [sym_expression_list] = STATE(427),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [263] = {
        [sym_expression_list] = STATE(426),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [264] = {
        [sym__expression] = STATE(422),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [265] = {
        [anon_sym_COLON] = ACTIONS(621),
        [sym_comment] = ACTIONS(53),
    },
    [266] = {
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [267] = {
        [sym__expression] = STATE(414),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [268] = {
        [anon_sym_COLON] = ACTIONS(623),
        [sym_comment] = ACTIONS(53),
    },
    [269] = {
        [sym_with_item] = STATE(411),
        [sym__expression] = STATE(121),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [270] = {
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(53),
    },
    [271] = {
        [sym_default_parameter] = STATE(96),
        [sym_list_splat_parameter] = STATE(97),
        [sym_dictionary_splat_parameter] = STATE(98),
        [sym_expression_list] = STATE(407),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [aux_sym_parameters_repeat1] = STATE(99),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(305),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(627),
        [sym_comment] = ACTIONS(53),
    },
    [272] = {
        [anon_sym_COLON] = ACTIONS(629),
        [sym_comment] = ACTIONS(53),
    },
    [273] = {
        [anon_sym_STAR] = ACTIONS(319),
        [sym_identifier] = ACTIONS(636),
        [sym_comment] = ACTIONS(53),
    },
    [274] = {
        [sym_identifier] = ACTIONS(638),
        [sym_comment] = ACTIONS(53),
    },
    [275] = {
        [sym__expression] = STATE(404),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(93),
        [anon_sym_return] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_COLON] = ACTIONS(93),
        [anon_sym_elif] = ACTIONS(95),
        [anon_sym_else] = ACTIONS(95),
        [anon_sym_for] = ACTIONS(95),
        [anon_sym_in] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(95),
        [anon_sym_except] = ACTIONS(95),
        [anon_sym_as] = ACTIONS(95),
        [anon_sym_finally] = ACTIONS(95),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(95),
        [anon_sym_RPAREN] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(93),
        [sym_number] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(93),
        [sym__dedent] = ACTIONS(93),
    },
    [277] = {
        [sym_parameters] = STATE(291),
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(640),
        [anon_sym_return] = ACTIONS(95),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_COLON] = ACTIONS(644),
        [anon_sym_elif] = ACTIONS(95),
        [anon_sym_else] = ACTIONS(95),
        [anon_sym_for] = ACTIONS(95),
        [anon_sym_in] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(95),
        [anon_sym_except] = ACTIONS(95),
        [anon_sym_as] = ACTIONS(95),
        [anon_sym_finally] = ACTIONS(95),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(95),
        [anon_sym_LPAREN] = ACTIONS(647),
        [anon_sym_RPAREN] = ACTIONS(649),
        [anon_sym_EQ] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(93),
        [sym_number] = ACTIONS(95),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(93),
        [sym__dedent] = ACTIONS(93),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(654),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [279] = {
        [sym__statement] = STATE(51),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [aux_sym_module_repeat1] = STATE(312),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(657),
    },
    [280] = {
        [ts_builtin_sym_end] = ACTIONS(659),
        [anon_sym_SEMI] = ACTIONS(659),
        [anon_sym_print] = ACTIONS(662),
        [anon_sym_return] = ACTIONS(662),
        [anon_sym_if] = ACTIONS(662),
        [anon_sym_elif] = ACTIONS(662),
        [anon_sym_else] = ACTIONS(662),
        [anon_sym_for] = ACTIONS(662),
        [anon_sym_while] = ACTIONS(662),
        [anon_sym_try] = ACTIONS(662),
        [anon_sym_except] = ACTIONS(662),
        [anon_sym_finally] = ACTIONS(662),
        [anon_sym_with] = ACTIONS(662),
        [anon_sym_def] = ACTIONS(662),
        [anon_sym_class] = ACTIONS(662),
        [sym_number] = ACTIONS(662),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(659),
        [sym__dedent] = ACTIONS(659),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(668),
        [anon_sym_SEMI] = ACTIONS(668),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(674),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(668),
        [sym__dedent] = ACTIONS(668),
    },
    [282] = {
        [ts_builtin_sym_end] = ACTIONS(199),
        [anon_sym_SEMI] = ACTIONS(199),
        [anon_sym_print] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(201),
        [anon_sym_if] = ACTIONS(201),
        [anon_sym_elif] = ACTIONS(201),
        [anon_sym_else] = ACTIONS(201),
        [anon_sym_for] = ACTIONS(201),
        [anon_sym_while] = ACTIONS(201),
        [anon_sym_try] = ACTIONS(201),
        [anon_sym_except] = ACTIONS(201),
        [anon_sym_finally] = ACTIONS(201),
        [anon_sym_with] = ACTIONS(201),
        [anon_sym_def] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(201),
        [sym_number] = ACTIONS(201),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(677),
        [sym__dedent] = ACTIONS(199),
    },
    [283] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(109),
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_elif] = ACTIONS(111),
        [anon_sym_else] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_except] = ACTIONS(111),
        [anon_sym_finally] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(111),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(109),
        [sym__dedent] = ACTIONS(109),
    },
    [284] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_print] = ACTIONS(117),
        [anon_sym_return] = ACTIONS(117),
        [anon_sym_if] = ACTIONS(117),
        [anon_sym_for] = ACTIONS(117),
        [anon_sym_while] = ACTIONS(117),
        [anon_sym_try] = ACTIONS(117),
        [anon_sym_with] = ACTIONS(117),
        [anon_sym_def] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(117),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(115),
        [sym__dedent] = ACTIONS(115),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(123),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(680),
        [anon_sym_SEMI] = ACTIONS(680),
        [anon_sym_print] = ACTIONS(683),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_if] = ACTIONS(683),
        [anon_sym_elif] = ACTIONS(683),
        [anon_sym_else] = ACTIONS(683),
        [anon_sym_for] = ACTIONS(683),
        [anon_sym_while] = ACTIONS(683),
        [anon_sym_try] = ACTIONS(683),
        [anon_sym_with] = ACTIONS(683),
        [anon_sym_def] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(683),
        [sym_number] = ACTIONS(683),
        [sym_identifier] = ACTIONS(686),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(680),
        [sym__dedent] = ACTIONS(680),
    },
    [287] = {
        [sym_finally_clause] = STATE(328),
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_finally] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(689),
        [sym__dedent] = ACTIONS(689),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(712),
        [anon_sym_return] = ACTIONS(712),
        [anon_sym_if] = ACTIONS(712),
        [anon_sym_else] = ACTIONS(712),
        [anon_sym_for] = ACTIONS(712),
        [anon_sym_while] = ACTIONS(712),
        [anon_sym_try] = ACTIONS(712),
        [anon_sym_except] = ACTIONS(712),
        [anon_sym_finally] = ACTIONS(712),
        [anon_sym_with] = ACTIONS(712),
        [anon_sym_def] = ACTIONS(712),
        [anon_sym_class] = ACTIONS(712),
        [sym_number] = ACTIONS(712),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(709),
        [sym__dedent] = ACTIONS(709),
    },
    [289] = {
        [ts_builtin_sym_end] = ACTIONS(718),
        [anon_sym_SEMI] = ACTIONS(718),
        [anon_sym_print] = ACTIONS(722),
        [anon_sym_return] = ACTIONS(722),
        [anon_sym_if] = ACTIONS(722),
        [anon_sym_for] = ACTIONS(722),
        [anon_sym_while] = ACTIONS(722),
        [anon_sym_try] = ACTIONS(722),
        [anon_sym_with] = ACTIONS(722),
        [anon_sym_def] = ACTIONS(722),
        [anon_sym_class] = ACTIONS(722),
        [sym_number] = ACTIONS(722),
        [sym_identifier] = ACTIONS(726),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(718),
        [sym__dedent] = ACTIONS(718),
    },
    [290] = {
        [aux_sym_with_statement_repeat1] = STATE(302),
        [anon_sym_COMMA] = ACTIONS(730),
        [anon_sym_COLON] = ACTIONS(734),
        [sym_comment] = ACTIONS(53),
    },
    [291] = {
        [anon_sym_COLON] = ACTIONS(738),
        [sym_comment] = ACTIONS(53),
    },
    [292] = {
        [anon_sym_COMMA] = ACTIONS(740),
        [anon_sym_RPAREN] = ACTIONS(742),
        [sym_comment] = ACTIONS(53),
    },
    [293] = {
        [anon_sym_COMMA] = ACTIONS(744),
        [anon_sym_RPAREN] = ACTIONS(742),
        [sym_comment] = ACTIONS(53),
    },
    [294] = {
        [anon_sym_RPAREN] = ACTIONS(746),
        [sym_comment] = ACTIONS(53),
    },
    [295] = {
        [sym_elif_clause] = STATE(347),
        [sym_else_clause] = STATE(388),
        [sym_except_clause] = STATE(389),
        [sym_finally_clause] = STATE(390),
        [aux_sym_if_statement_repeat1] = STATE(300),
        [aux_sym_try_statement_repeat1] = STATE(301),
        [ts_builtin_sym_end] = ACTIONS(748),
        [anon_sym_SEMI] = ACTIONS(748),
        [anon_sym_print] = ACTIONS(762),
        [anon_sym_return] = ACTIONS(762),
        [anon_sym_if] = ACTIONS(762),
        [anon_sym_elif] = ACTIONS(776),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(762),
        [anon_sym_while] = ACTIONS(762),
        [anon_sym_try] = ACTIONS(762),
        [anon_sym_except] = ACTIONS(784),
        [anon_sym_finally] = ACTIONS(788),
        [anon_sym_with] = ACTIONS(762),
        [anon_sym_def] = ACTIONS(762),
        [anon_sym_class] = ACTIONS(762),
        [sym_number] = ACTIONS(762),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(748),
        [sym__dedent] = ACTIONS(748),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_return] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(807),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_in] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(257),
        [anon_sym_try] = ACTIONS(257),
        [anon_sym_except] = ACTIONS(257),
        [anon_sym_finally] = ACTIONS(257),
        [anon_sym_with] = ACTIONS(257),
        [anon_sym_def] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(257),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(261),
        [sym__dedent] = ACTIONS(261),
    },
    [297] = {
        [aux_sym_print_statement_repeat1] = STATE(299),
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_print] = ACTIONS(820),
        [anon_sym_COMMA] = ACTIONS(827),
        [anon_sym_return] = ACTIONS(820),
        [anon_sym_if] = ACTIONS(820),
        [anon_sym_COLON] = ACTIONS(835),
        [anon_sym_elif] = ACTIONS(820),
        [anon_sym_else] = ACTIONS(820),
        [anon_sym_for] = ACTIONS(820),
        [anon_sym_in] = ACTIONS(843),
        [anon_sym_while] = ACTIONS(820),
        [anon_sym_try] = ACTIONS(820),
        [anon_sym_except] = ACTIONS(820),
        [anon_sym_as] = ACTIONS(848),
        [anon_sym_finally] = ACTIONS(820),
        [anon_sym_with] = ACTIONS(820),
        [anon_sym_def] = ACTIONS(820),
        [anon_sym_RPAREN] = ACTIONS(851),
        [anon_sym_class] = ACTIONS(820),
        [anon_sym_PLUS] = ACTIONS(857),
        [sym_number] = ACTIONS(820),
        [sym_identifier] = ACTIONS(860),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(813),
        [sym__dedent] = ACTIONS(813),
    },
    [298] = {
        [sym__statement] = STATE(338),
        [sym__simple_statement] = STATE(339),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(284),
        [sym_if_statement] = STATE(285),
        [sym_for_statement] = STATE(285),
        [sym_while_statement] = STATE(285),
        [sym_try_statement] = STATE(285),
        [sym_with_statement] = STATE(285),
        [sym_function_definition] = STATE(285),
        [sym_class_definition] = STATE(285),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(867),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(871),
        [anon_sym_try] = ACTIONS(873),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(877),
        [anon_sym_class] = ACTIONS(879),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(881),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(886),
        [anon_sym_COMMA] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(886),
        [anon_sym_if] = ACTIONS(886),
        [anon_sym_COLON] = ACTIONS(175),
        [anon_sym_elif] = ACTIONS(886),
        [anon_sym_else] = ACTIONS(886),
        [anon_sym_for] = ACTIONS(886),
        [anon_sym_in] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(886),
        [anon_sym_try] = ACTIONS(886),
        [anon_sym_except] = ACTIONS(886),
        [anon_sym_finally] = ACTIONS(886),
        [anon_sym_with] = ACTIONS(886),
        [anon_sym_def] = ACTIONS(886),
        [anon_sym_RPAREN] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(886),
        [sym_number] = ACTIONS(886),
        [sym_identifier] = ACTIONS(891),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(883),
        [sym__dedent] = ACTIONS(883),
    },
    [300] = {
        [sym_elif_clause] = STATE(330),
        [sym_else_clause] = STATE(331),
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_elif] = ACTIONS(894),
        [anon_sym_else] = ACTIONS(896),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(535),
        [sym__dedent] = ACTIONS(535),
    },
    [301] = {
        [sym_else_clause] = STATE(325),
        [sym_except_clause] = STATE(326),
        [sym_finally_clause] = STATE(327),
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(898),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(900),
        [anon_sym_finally] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(425),
        [sym__dedent] = ACTIONS(425),
    },
    [302] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_COLON] = ACTIONS(902),
        [sym_comment] = ACTIONS(53),
    },
    [303] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(307),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [304] = {
        [sym__expression] = STATE(323),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [305] = {
        [sym_expression_list] = STATE(314),
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(199),
        [anon_sym_SEMI] = ACTIONS(199),
        [anon_sym_print] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(201),
        [anon_sym_if] = ACTIONS(201),
        [anon_sym_elif] = ACTIONS(201),
        [anon_sym_else] = ACTIONS(201),
        [anon_sym_for] = ACTIONS(201),
        [anon_sym_while] = ACTIONS(201),
        [anon_sym_try] = ACTIONS(201),
        [anon_sym_except] = ACTIONS(201),
        [anon_sym_finally] = ACTIONS(201),
        [anon_sym_with] = ACTIONS(201),
        [anon_sym_def] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(201),
        [sym_number] = ACTIONS(201),
        [sym_identifier] = ACTIONS(203),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(199),
        [sym__dedent] = ACTIONS(199),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(387),
        [sym__dedent] = ACTIONS(387),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(908),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [309] = {
        [sym__expression] = STATE(310),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(910),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_return] = ACTIONS(219),
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
        [anon_sym_class] = ACTIONS(219),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [312] = {
        [sym__statement] = STATE(57),
        [sym__simple_statement] = STATE(52),
        [sym_print_statement] = STATE(15),
        [sym_expression_statement] = STATE(15),
        [sym_return_statement] = STATE(15),
        [sym__compound_statement] = STATE(53),
        [sym_if_statement] = STATE(54),
        [sym_for_statement] = STATE(54),
        [sym_while_statement] = STATE(54),
        [sym_try_statement] = STATE(54),
        [sym_with_statement] = STATE(54),
        [sym_function_definition] = STATE(54),
        [sym_class_definition] = STATE(54),
        [sym__expression] = STATE(18),
        [sym_binary_operator] = STATE(11),
        [anon_sym_print] = ACTIONS(63),
        [anon_sym_return] = ACTIONS(65),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(191),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(195),
        [sym_number] = ACTIONS(81),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(53),
        [sym__dedent] = ACTIONS(881),
    },
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(229),
        [anon_sym_return] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_while] = ACTIONS(229),
        [anon_sym_try] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_with] = ACTIONS(229),
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_class] = ACTIONS(229),
        [sym_number] = ACTIONS(229),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(227),
        [sym__dedent] = ACTIONS(227),
    },
    [314] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(257),
        [anon_sym_return] = ACTIONS(257),
        [anon_sym_if] = ACTIONS(257),
        [anon_sym_elif] = ACTIONS(257),
        [anon_sym_else] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_while] = ACTIONS(257),
        [anon_sym_try] = ACTIONS(257),
        [anon_sym_except] = ACTIONS(257),
        [anon_sym_finally] = ACTIONS(257),
        [anon_sym_with] = ACTIONS(257),
        [anon_sym_def] = ACTIONS(257),
        [anon_sym_class] = ACTIONS(257),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(261),
        [sym__dedent] = ACTIONS(261),
    },
    [315] = {
        [aux_sym_print_statement_repeat1] = STATE(318),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(915),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [316] = {
        [sym__expression] = STATE(322),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [317] = {
        [sym__expression] = STATE(321),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [319] = {
        [sym__expression] = STATE(320),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [320] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(915),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [321] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(919),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(915),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [323] = {
        [aux_sym_print_statement_repeat1] = STATE(324),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(915),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
        [sym__dedent] = ACTIONS(293),
    },
    [325] = {
        [sym_finally_clause] = STATE(328),
        [ts_builtin_sym_end] = ACTIONS(439),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(439),
        [sym__dedent] = ACTIONS(439),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(445),
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(445),
        [sym__dedent] = ACTIONS(445),
    },
    [327] = {
        [ts_builtin_sym_end] = ACTIONS(439),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(439),
        [sym__dedent] = ACTIONS(439),
    },
    [328] = {
        [ts_builtin_sym_end] = ACTIONS(451),
        [anon_sym_SEMI] = ACTIONS(451),
        [anon_sym_print] = ACTIONS(447),
        [anon_sym_return] = ACTIONS(447),
        [anon_sym_if] = ACTIONS(447),
        [anon_sym_for] = ACTIONS(447),
        [anon_sym_while] = ACTIONS(447),
        [anon_sym_try] = ACTIONS(447),
        [anon_sym_with] = ACTIONS(447),
        [anon_sym_def] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(447),
        [sym_number] = ACTIONS(447),
        [sym_identifier] = ACTIONS(449),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(451),
        [sym__dedent] = ACTIONS(451),
    },
    [329] = {
        [anon_sym_COLON] = ACTIONS(922),
        [sym_comment] = ACTIONS(53),
    },
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(541),
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_elif] = ACTIONS(537),
        [anon_sym_else] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(541),
        [sym__dedent] = ACTIONS(541),
    },
    [331] = {
        [ts_builtin_sym_end] = ACTIONS(547),
        [anon_sym_SEMI] = ACTIONS(547),
        [anon_sym_print] = ACTIONS(543),
        [anon_sym_return] = ACTIONS(543),
        [anon_sym_if] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_while] = ACTIONS(543),
        [anon_sym_try] = ACTIONS(543),
        [anon_sym_with] = ACTIONS(543),
        [anon_sym_def] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(543),
        [sym_number] = ACTIONS(543),
        [sym_identifier] = ACTIONS(545),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(547),
        [sym__dedent] = ACTIONS(547),
    },
    [332] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(333),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [333] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_print] = ACTIONS(453),
        [anon_sym_return] = ACTIONS(453),
        [anon_sym_if] = ACTIONS(453),
        [anon_sym_for] = ACTIONS(453),
        [anon_sym_while] = ACTIONS(453),
        [anon_sym_try] = ACTIONS(453),
        [anon_sym_finally] = ACTIONS(453),
        [anon_sym_with] = ACTIONS(453),
        [anon_sym_def] = ACTIONS(453),
        [anon_sym_class] = ACTIONS(453),
        [sym_number] = ACTIONS(453),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(457),
        [sym__dedent] = ACTIONS(457),
    },
    [334] = {
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [335] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(177),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(924),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [336] = {
        [sym__expression] = STATE(337),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_in] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(926),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [338] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(141),
        [sym__dedent] = ACTIONS(141),
    },
    [339] = {
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(929),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [341] = {
        [sym__expression] = STATE(349),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [342] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(343),
        [sym__expression] = STATE(344),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(613),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [343] = {
        [sym_elif_clause] = STATE(347),
        [sym_else_clause] = STATE(348),
        [aux_sym_if_statement_repeat1] = STATE(300),
        [ts_builtin_sym_end] = ACTIONS(931),
        [anon_sym_SEMI] = ACTIONS(931),
        [anon_sym_print] = ACTIONS(937),
        [anon_sym_return] = ACTIONS(937),
        [anon_sym_if] = ACTIONS(937),
        [anon_sym_elif] = ACTIONS(776),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(937),
        [anon_sym_while] = ACTIONS(937),
        [anon_sym_try] = ACTIONS(937),
        [anon_sym_except] = ACTIONS(943),
        [anon_sym_finally] = ACTIONS(943),
        [anon_sym_with] = ACTIONS(937),
        [anon_sym_def] = ACTIONS(937),
        [anon_sym_class] = ACTIONS(937),
        [sym_number] = ACTIONS(937),
        [sym_identifier] = ACTIONS(946),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(931),
        [sym__dedent] = ACTIONS(931),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_elif] = ACTIONS(129),
        [anon_sym_else] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_except] = ACTIONS(129),
        [anon_sym_finally] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(952),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [345] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(954),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_SEMI] = ACTIONS(529),
        [anon_sym_print] = ACTIONS(525),
        [anon_sym_return] = ACTIONS(525),
        [anon_sym_if] = ACTIONS(525),
        [anon_sym_elif] = ACTIONS(525),
        [anon_sym_else] = ACTIONS(525),
        [anon_sym_for] = ACTIONS(525),
        [anon_sym_while] = ACTIONS(525),
        [anon_sym_try] = ACTIONS(525),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(525),
        [sym_number] = ACTIONS(525),
        [sym_identifier] = ACTIONS(527),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(529),
        [sym__dedent] = ACTIONS(529),
    },
    [348] = {
        [ts_builtin_sym_end] = ACTIONS(957),
        [anon_sym_SEMI] = ACTIONS(957),
        [anon_sym_print] = ACTIONS(960),
        [anon_sym_return] = ACTIONS(960),
        [anon_sym_if] = ACTIONS(960),
        [anon_sym_for] = ACTIONS(960),
        [anon_sym_while] = ACTIONS(960),
        [anon_sym_try] = ACTIONS(960),
        [anon_sym_with] = ACTIONS(960),
        [anon_sym_def] = ACTIONS(960),
        [anon_sym_class] = ACTIONS(960),
        [sym_number] = ACTIONS(960),
        [sym_identifier] = ACTIONS(963),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(957),
        [sym__dedent] = ACTIONS(957),
    },
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(966),
        [anon_sym_elif] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(924),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [350] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(353),
        [sym__expression] = STATE(354),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(969),
        [anon_sym_return] = ACTIONS(971),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [351] = {
        [sym__expression] = STATE(365),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [352] = {
        [sym_expression_list] = STATE(314),
        [sym__expression] = STATE(357),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(475),
        [anon_sym_SEMI] = ACTIONS(475),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(471),
        [anon_sym_if] = ACTIONS(471),
        [anon_sym_else] = ACTIONS(471),
        [anon_sym_for] = ACTIONS(471),
        [anon_sym_while] = ACTIONS(471),
        [anon_sym_try] = ACTIONS(471),
        [anon_sym_except] = ACTIONS(471),
        [anon_sym_finally] = ACTIONS(471),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(471),
        [sym_number] = ACTIONS(471),
        [sym_identifier] = ACTIONS(473),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(475),
        [sym__dedent] = ACTIONS(475),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_else] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_except] = ACTIONS(129),
        [anon_sym_finally] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(973),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [355] = {
        [sym__expression] = STATE(356),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [356] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(975),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [357] = {
        [aux_sym_print_statement_repeat1] = STATE(360),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(978),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_except] = ACTIONS(263),
        [anon_sym_finally] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(980),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [358] = {
        [sym__expression] = STATE(364),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [359] = {
        [sym__expression] = STATE(363),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(982),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [361] = {
        [sym__expression] = STATE(362),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(980),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [363] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(984),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(980),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [365] = {
        [aux_sym_print_statement_repeat1] = STATE(366),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(978),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_except] = ACTIONS(283),
        [anon_sym_finally] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(980),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [366] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(982),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
        [sym__dedent] = ACTIONS(293),
    },
    [367] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(373),
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(987),
        [anon_sym_return] = ACTIONS(989),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [368] = {
        [anon_sym_COLON] = ACTIONS(991),
        [sym_comment] = ACTIONS(53),
    },
    [369] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(370),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [370] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(207),
        [anon_sym_return] = ACTIONS(207),
        [anon_sym_if] = ACTIONS(207),
        [anon_sym_for] = ACTIONS(207),
        [anon_sym_while] = ACTIONS(207),
        [anon_sym_try] = ACTIONS(207),
        [anon_sym_with] = ACTIONS(207),
        [anon_sym_def] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(207),
        [sym_number] = ACTIONS(207),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(205),
        [sym__dedent] = ACTIONS(205),
    },
    [371] = {
        [sym__expression] = STATE(386),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [372] = {
        [sym_expression_list] = STATE(314),
        [sym__expression] = STATE(378),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [373] = {
        [sym_else_clause] = STATE(377),
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(503),
        [anon_sym_return] = ACTIONS(503),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_else] = ACTIONS(896),
        [anon_sym_for] = ACTIONS(503),
        [anon_sym_while] = ACTIONS(503),
        [anon_sym_try] = ACTIONS(503),
        [anon_sym_with] = ACTIONS(503),
        [anon_sym_def] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(503),
        [sym_number] = ACTIONS(503),
        [sym_identifier] = ACTIONS(505),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
    [374] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_else] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(993),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [375] = {
        [sym__expression] = STATE(376),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [376] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(995),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [377] = {
        [ts_builtin_sym_end] = ACTIONS(513),
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_print] = ACTIONS(509),
        [anon_sym_return] = ACTIONS(509),
        [anon_sym_if] = ACTIONS(509),
        [anon_sym_for] = ACTIONS(509),
        [anon_sym_while] = ACTIONS(509),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(509),
        [anon_sym_def] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(509),
        [sym_number] = ACTIONS(509),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(513),
        [sym__dedent] = ACTIONS(513),
    },
    [378] = {
        [aux_sym_print_statement_repeat1] = STATE(381),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(998),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(1000),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [379] = {
        [sym__expression] = STATE(385),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [380] = {
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(1002),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [382] = {
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1000),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(1004),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [385] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1000),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [386] = {
        [aux_sym_print_statement_repeat1] = STATE(387),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(998),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(1000),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(1002),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
        [sym__dedent] = ACTIONS(293),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(1007),
        [anon_sym_SEMI] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(1007),
        [sym__dedent] = ACTIONS(1007),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(419),
        [sym__dedent] = ACTIONS(419),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(425),
        [sym__dedent] = ACTIONS(425),
    },
    [391] = {
        [anon_sym_COLON] = ACTIONS(1019),
        [sym_comment] = ACTIONS(53),
    },
    [392] = {
        [sym_dictionary_splat_parameter] = STATE(394),
        [anon_sym_STAR] = ACTIONS(341),
        [sym_comment] = ACTIONS(53),
    },
    [393] = {
        [anon_sym_COLON] = ACTIONS(1024),
        [sym_comment] = ACTIONS(53),
    },
    [394] = {
        [anon_sym_RPAREN] = ACTIONS(1027),
        [sym_comment] = ACTIONS(53),
    },
    [395] = {
        [anon_sym_COLON] = ACTIONS(1029),
        [sym_comment] = ACTIONS(53),
    },
    [396] = {
        [anon_sym_RPAREN] = ACTIONS(601),
        [anon_sym_STAR] = ACTIONS(1032),
        [sym_identifier] = ACTIONS(1035),
        [sym_comment] = ACTIONS(53),
    },
    [397] = {
        [anon_sym_COLON] = ACTIONS(1038),
        [sym_comment] = ACTIONS(53),
    },
    [398] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(399),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_return] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(311),
        [sym_number] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(315),
        [sym__dedent] = ACTIONS(315),
    },
    [400] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(401),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(395),
        [anon_sym_SEMI] = ACTIONS(395),
        [anon_sym_print] = ACTIONS(391),
        [anon_sym_return] = ACTIONS(391),
        [anon_sym_if] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(391),
        [anon_sym_while] = ACTIONS(391),
        [anon_sym_try] = ACTIONS(391),
        [anon_sym_with] = ACTIONS(391),
        [anon_sym_def] = ACTIONS(391),
        [anon_sym_class] = ACTIONS(391),
        [sym_number] = ACTIONS(391),
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(395),
        [sym__dedent] = ACTIONS(395),
    },
    [402] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(403),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [403] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(295),
        [anon_sym_return] = ACTIONS(295),
        [anon_sym_if] = ACTIONS(295),
        [anon_sym_for] = ACTIONS(295),
        [anon_sym_while] = ACTIONS(295),
        [anon_sym_try] = ACTIONS(295),
        [anon_sym_with] = ACTIONS(295),
        [anon_sym_def] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(295),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(297),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_in] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_as] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(857),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [405] = {
        [anon_sym_COLON] = ACTIONS(1041),
        [anon_sym_LPAREN] = ACTIONS(1043),
        [sym_comment] = ACTIONS(53),
    },
    [406] = {
        [sym_expression_list] = STATE(407),
        [sym__expression] = STATE(30),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [407] = {
        [anon_sym_RPAREN] = ACTIONS(811),
        [sym_comment] = ACTIONS(53),
    },
    [408] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_RPAREN] = ACTIONS(1045),
        [sym_comment] = ACTIONS(53),
    },
    [409] = {
        [anon_sym_COMMA] = ACTIONS(1048),
        [anon_sym_RPAREN] = ACTIONS(1051),
        [anon_sym_EQ] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(93),
        [sym_comment] = ACTIONS(53),
    },
    [410] = {
        [sym_parameters] = STATE(291),
        [anon_sym_LPAREN] = ACTIONS(301),
        [sym_comment] = ACTIONS(53),
    },
    [411] = {
        [aux_sym_with_statement_repeat1] = STATE(302),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(1054),
        [sym_comment] = ACTIONS(53),
    },
    [412] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(413),
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(904),
        [anon_sym_return] = ACTIONS(906),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(463),
        [anon_sym_SEMI] = ACTIONS(463),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(459),
        [anon_sym_if] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_while] = ACTIONS(459),
        [anon_sym_try] = ACTIONS(459),
        [anon_sym_with] = ACTIONS(459),
        [anon_sym_def] = ACTIONS(459),
        [anon_sym_class] = ACTIONS(459),
        [sym_number] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(463),
        [sym__dedent] = ACTIONS(463),
    },
    [414] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_COLON] = ACTIONS(1056),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [415] = {
        [anon_sym_COMMA] = ACTIONS(1059),
        [anon_sym_COLON] = ACTIONS(1061),
        [anon_sym_as] = ACTIONS(1059),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [416] = {
        [sym__expression] = STATE(418),
        [sym_binary_operator] = STATE(28),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(85),
        [sym_comment] = ACTIONS(53),
    },
    [417] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(419),
        [sym__expression] = STATE(354),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(969),
        [anon_sym_return] = ACTIONS(971),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [418] = {
        [anon_sym_COLON] = ACTIONS(1063),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [419] = {
        [ts_builtin_sym_end] = ACTIONS(481),
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_print] = ACTIONS(477),
        [anon_sym_return] = ACTIONS(477),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_else] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(477),
        [anon_sym_while] = ACTIONS(477),
        [anon_sym_try] = ACTIONS(477),
        [anon_sym_except] = ACTIONS(477),
        [anon_sym_finally] = ACTIONS(477),
        [anon_sym_with] = ACTIONS(477),
        [anon_sym_def] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [sym_number] = ACTIONS(477),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(481),
        [sym__dedent] = ACTIONS(481),
    },
    [420] = {
        [sym__simple_statement] = STATE(137),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym__suite] = STATE(421),
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(28),
        [anon_sym_print] = ACTIONS(399),
        [anon_sym_return] = ACTIONS(401),
        [sym_number] = ACTIONS(85),
        [sym_identifier] = ACTIONS(403),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(405),
    },
    [421] = {
        [sym_except_clause] = STATE(389),
        [sym_finally_clause] = STATE(390),
        [aux_sym_try_statement_repeat1] = STATE(301),
        [anon_sym_except] = ACTIONS(1065),
        [anon_sym_finally] = ACTIONS(1067),
        [sym_comment] = ACTIONS(53),
    },
    [422] = {
        [anon_sym_COLON] = ACTIONS(1069),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [423] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(424),
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(987),
        [anon_sym_return] = ACTIONS(989),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [424] = {
        [sym_else_clause] = STATE(425),
        [ts_builtin_sym_end] = ACTIONS(491),
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_print] = ACTIONS(487),
        [anon_sym_return] = ACTIONS(487),
        [anon_sym_if] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(896),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_while] = ACTIONS(487),
        [anon_sym_try] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(487),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(487),
        [sym_number] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(491),
        [sym__dedent] = ACTIONS(491),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(497),
        [sym__dedent] = ACTIONS(497),
    },
    [426] = {
        [anon_sym_COLON] = ACTIONS(807),
        [sym_comment] = ACTIONS(53),
    },
    [427] = {
        [anon_sym_in] = ACTIONS(1071),
        [sym_comment] = ACTIONS(53),
    },
    [428] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(333),
        [sym__expression] = STATE(431),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(1073),
        [anon_sym_return] = ACTIONS(1075),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [429] = {
        [sym__expression] = STATE(442),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [430] = {
        [sym_expression_list] = STATE(314),
        [sym__expression] = STATE(434),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_finally] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(1077),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [432] = {
        [sym__expression] = STATE(433),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(1079),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [434] = {
        [aux_sym_print_statement_repeat1] = STATE(437),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(1082),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_finally] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(1084),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [435] = {
        [sym__expression] = STATE(441),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [436] = {
        [sym__expression] = STATE(440),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(1086),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [438] = {
        [sym__expression] = STATE(439),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1084),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(1088),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [441] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1084),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [442] = {
        [aux_sym_print_statement_repeat1] = STATE(443),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(1082),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_finally] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(1084),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(1086),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
        [sym__dedent] = ACTIONS(293),
    },
    [444] = {
        [anon_sym_COLON] = ACTIONS(1091),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [445] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(448),
        [sym__expression] = STATE(449),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(1093),
        [anon_sym_return] = ACTIONS(1095),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [446] = {
        [sym__expression] = STATE(460),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [447] = {
        [sym_expression_list] = STATE(314),
        [sym__expression] = STATE(452),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [448] = {
        [ts_builtin_sym_end] = ACTIONS(555),
        [anon_sym_SEMI] = ACTIONS(555),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(551),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(555),
        [sym__dedent] = ACTIONS(555),
    },
    [449] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_elif] = ACTIONS(129),
        [anon_sym_else] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(1097),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [450] = {
        [sym__expression] = STATE(451),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [451] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(1099),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [452] = {
        [aux_sym_print_statement_repeat1] = STATE(455),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(1102),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(1104),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [453] = {
        [sym__expression] = STATE(459),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [454] = {
        [sym__expression] = STATE(458),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [455] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(1106),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [456] = {
        [sym__expression] = STATE(457),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [457] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1104),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(1108),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [459] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_elif] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1104),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [460] = {
        [aux_sym_print_statement_repeat1] = STATE(461),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(1102),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(1104),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [461] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(1106),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
        [sym__dedent] = ACTIONS(293),
    },
    [462] = {
        [anon_sym_COLON] = ACTIONS(1111),
        [anon_sym_PLUS] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
    },
    [463] = {
        [sym__simple_statement] = STATE(306),
        [sym_print_statement] = STATE(283),
        [sym_expression_statement] = STATE(283),
        [sym_return_statement] = STATE(283),
        [sym__suite] = STATE(464),
        [sym__expression] = STATE(449),
        [sym_binary_operator] = STATE(276),
        [anon_sym_print] = ACTIONS(1093),
        [anon_sym_return] = ACTIONS(1095),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__indent] = ACTIONS(617),
    },
    [464] = {
        [sym_elif_clause] = STATE(347),
        [sym_else_clause] = STATE(465),
        [aux_sym_if_statement_repeat1] = STATE(300),
        [ts_builtin_sym_end] = ACTIONS(523),
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_print] = ACTIONS(517),
        [anon_sym_return] = ACTIONS(517),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_elif] = ACTIONS(894),
        [anon_sym_else] = ACTIONS(896),
        [anon_sym_for] = ACTIONS(517),
        [anon_sym_while] = ACTIONS(517),
        [anon_sym_try] = ACTIONS(517),
        [anon_sym_with] = ACTIONS(517),
        [anon_sym_def] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(517),
        [sym_number] = ACTIONS(517),
        [sym_identifier] = ACTIONS(521),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(523),
        [sym__dedent] = ACTIONS(523),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(535),
        [sym__dedent] = ACTIONS(535),
    },
    [466] = {
        [aux_sym_print_statement_repeat1] = STATE(469),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(1113),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(263),
        [anon_sym_else] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_except] = ACTIONS(263),
        [anon_sym_finally] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(1115),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(267),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [467] = {
        [sym__expression] = STATE(473),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [468] = {
        [sym__expression] = STATE(472),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [469] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_elif] = ACTIONS(269),
        [anon_sym_else] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_except] = ACTIONS(269),
        [anon_sym_finally] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(269),
        [sym_number] = ACTIONS(269),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [470] = {
        [sym__expression] = STATE(471),
        [sym_binary_operator] = STATE(276),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(275),
        [anon_sym_if] = ACTIONS(275),
        [anon_sym_elif] = ACTIONS(275),
        [anon_sym_else] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_while] = ACTIONS(275),
        [anon_sym_try] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_with] = ACTIONS(275),
        [anon_sym_def] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1115),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_except] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(1119),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(279),
        [anon_sym_if] = ACTIONS(279),
        [anon_sym_elif] = ACTIONS(279),
        [anon_sym_else] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_while] = ACTIONS(279),
        [anon_sym_try] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_with] = ACTIONS(279),
        [anon_sym_def] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1115),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [474] = {
        [anon_sym_COMMA] = ACTIONS(1122),
        [anon_sym_COLON] = ACTIONS(1122),
        [sym_comment] = ACTIONS(53),
    },
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(1125),
        [anon_sym_SEMI] = ACTIONS(1125),
        [anon_sym_print] = ACTIONS(1128),
        [anon_sym_COMMA] = ACTIONS(1131),
        [anon_sym_return] = ACTIONS(1128),
        [anon_sym_if] = ACTIONS(1128),
        [anon_sym_COLON] = ACTIONS(1135),
        [anon_sym_elif] = ACTIONS(1128),
        [anon_sym_else] = ACTIONS(1128),
        [anon_sym_for] = ACTIONS(1128),
        [anon_sym_in] = ACTIONS(1128),
        [anon_sym_while] = ACTIONS(1128),
        [anon_sym_try] = ACTIONS(1128),
        [anon_sym_except] = ACTIONS(1128),
        [anon_sym_as] = ACTIONS(1140),
        [anon_sym_finally] = ACTIONS(1128),
        [anon_sym_with] = ACTIONS(1128),
        [anon_sym_def] = ACTIONS(1128),
        [anon_sym_RPAREN] = ACTIONS(1125),
        [anon_sym_class] = ACTIONS(1128),
        [anon_sym_PLUS] = ACTIONS(1142),
        [sym_number] = ACTIONS(1128),
        [sym_identifier] = ACTIONS(1144),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(1125),
        [sym__dedent] = ACTIONS(1125),
    },
    [476] = {
        [aux_sym_print_statement_repeat1] = STATE(477),
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(1113),
        [anon_sym_return] = ACTIONS(283),
        [anon_sym_if] = ACTIONS(283),
        [anon_sym_elif] = ACTIONS(283),
        [anon_sym_else] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_while] = ACTIONS(283),
        [anon_sym_try] = ACTIONS(283),
        [anon_sym_except] = ACTIONS(283),
        [anon_sym_finally] = ACTIONS(283),
        [anon_sym_with] = ACTIONS(283),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(1115),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(285),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [477] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(53),
        [sym__newline] = ACTIONS(293),
        [sym__dedent] = ACTIONS(293),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(20),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(255),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(256),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(257),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(258),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(259),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(260),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(261),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(262),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(263),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(264),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(265),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(266),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(267),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(268),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(269),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(270),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(271),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(272),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(113),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(273),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(274),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(275),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(276),
    [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(277),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(278),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(279),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(280),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2),
    [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
    [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [539] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [603] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(106),
    [607] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(276),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
    [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
    [629] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6), SHIFT(369),
    [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
    [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [640] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(396),
    [644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(402),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [649] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(393),
    [654] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [659] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [662] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [665] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [668] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [671] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [674] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(340),
    [680] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [683] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [686] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [689] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [695] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
    [703] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [709] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [712] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [715] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [718] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [722] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [726] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [730] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(124),
    [734] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(400),
    [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [748] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [762] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [776] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(260),
    [779] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(329),
    [784] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(266),
    [788] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(268),
    [793] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [813] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [820] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [827] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(341),
    [835] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(342),
    [843] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [848] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(267),
    [851] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [857] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(275),
    [860] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [883] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [886] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [891] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
    [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
    [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
    [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [910] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(309),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [919] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(317),
    [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [926] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(336),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [931] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [937] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [943] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [946] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [954] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(345),
    [957] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [960] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [963] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [966] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(350),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
    [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [975] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(355),
    [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [984] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(359),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
    [989] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
    [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [995] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(375),
    [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1004] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(380),
    [1007] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1011] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1015] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1019] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1024] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [1029] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1032] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1035] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1038] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [1045] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1048] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(118),
    [1051] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(115),
    [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [1056] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(350),
    [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
    [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
    [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1079] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(432),
    [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
    [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [1088] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(436),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
    [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1099] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(450),
    [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
    [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [1108] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(454),
    [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
    [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
    [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [1119] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(468),
    [1122] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1125] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1128] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1131] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1135] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(350),
    [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [1144] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
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
