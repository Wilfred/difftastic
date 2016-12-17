#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 509
#define SYMBOL_COUNT 71
#define TOKEN_COUNT 32
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
    anon_sym_AT = 23,
    anon_sym_DOT = 24,
    anon_sym_PLUS = 25,
    sym_number = 26,
    sym_identifier = 27,
    sym_comment = 28,
    sym__newline = 29,
    sym__indent = 30,
    sym__dedent = 31,
    sym_module = 32,
    sym__statement = 33,
    sym__simple_statement = 34,
    sym_print_statement = 35,
    sym_expression_statement = 36,
    sym_return_statement = 37,
    sym__compound_statement = 38,
    sym_if_statement = 39,
    sym_elif_clause = 40,
    sym_else_clause = 41,
    sym_for_statement = 42,
    sym_while_statement = 43,
    sym_try_statement = 44,
    sym_except_clause = 45,
    sym_finally_clause = 46,
    sym_with_statement = 47,
    sym_with_item = 48,
    sym_function_definition = 49,
    sym_parameters = 50,
    sym_default_parameter = 51,
    sym_list_splat_parameter = 52,
    sym_dictionary_splat_parameter = 53,
    sym_class_definition = 54,
    sym_decorated_definition = 55,
    sym_decorator = 56,
    sym__suite = 57,
    sym_arguments = 58,
    sym_expression_list = 59,
    sym_dotted_name = 60,
    sym__expression = 61,
    sym_binary_operator = 62,
    aux_sym_module_repeat1 = 63,
    aux_sym_print_statement_repeat1 = 64,
    aux_sym_if_statement_repeat1 = 65,
    aux_sym_try_statement_repeat1 = 66,
    aux_sym_with_statement_repeat1 = 67,
    aux_sym_parameters_repeat1 = 68,
    aux_sym_decorated_definition_repeat1 = 69,
    aux_sym_dotted_name_repeat1 = 70,
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
    [anon_sym_AT] = "@",
    [anon_sym_DOT] = ".",
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
    [sym_decorated_definition] = "decorated_definition",
    [sym_decorator] = "decorator",
    [sym__suite] = "_suite",
    [sym_arguments] = "arguments",
    [sym_expression_list] = "expression_list",
    [sym_dotted_name] = "dotted_name",
    [sym__expression] = "_expression",
    [sym_binary_operator] = "binary_operator",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_parameters_repeat1] = "parameters_repeat1",
    [aux_sym_decorated_definition_repeat1] = "decorated_definition_repeat1",
    [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
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
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
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
    [sym_decorated_definition] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_decorator] = {
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
    [sym_arguments] = {
        .visible = true,
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
    [sym_dotted_name] = {
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
    [aux_sym_decorated_definition_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_dotted_name_repeat1] = {
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
            if (lookahead == '.')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '=')
                ADVANCE(14);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'a')
                ADVANCE(17);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            ACCEPT_TOKEN(anon_sym_DOT);
        case 10:
            if (lookahead == '.')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            ACCEPT_TOKEN(sym_number);
        case 11:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            ACCEPT_TOKEN(sym_number);
        case 12:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 13:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 14:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 15:
            ACCEPT_TOKEN(anon_sym_AT);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_as);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'a')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_class);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_def);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'x')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'i')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_elif);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_else);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'p')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_except);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'i')
                ADVANCE(39);
            if (lookahead == 'o')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'n')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'a')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(16);
            if (lookahead == 'y')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_finally);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'r')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_for);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'n')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_if);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_in);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'r')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'i')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'n')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_print);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'u')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'r')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'n')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_return);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(16);
            if (lookahead == 'y')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_try);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'h')
                ADVANCE(65);
            if (lookahead == 'i')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'i')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_while);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'h')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_with);
        case 72:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(72);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'o')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'f')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(75);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            LEX_ERROR();
        case 76:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(76);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(12);
            LEX_ERROR();
        case 77:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(77);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 79:
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 81:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(81);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 82:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(82);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 83:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(83);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(84);
            if (lookahead == 'd')
                ADVANCE(89);
            LEX_ERROR();
        case 84:
            if (lookahead == 'l')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 'a')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            if (lookahead == 's')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            ACCEPT_TOKEN(anon_sym_class);
        case 89:
            if (lookahead == 'e')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'f')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            ACCEPT_TOKEN(anon_sym_def);
        case 92:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(92);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 93:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(93);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(9);
            LEX_ERROR();
        case 94:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(94);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 95:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(95);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == 'a')
                ADVANCE(96);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            if (lookahead == 'i')
                ADVANCE(111);
            LEX_ERROR();
        case 96:
            if (lookahead == 's')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            ACCEPT_TOKEN(anon_sym_as);
        case 98:
            if (lookahead == 'x')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'c')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'e')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'p')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 't')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            ACCEPT_TOKEN(anon_sym_except);
        case 104:
            if (lookahead == 'i')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'n')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'a')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'l')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'l')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'y')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            ACCEPT_TOKEN(anon_sym_finally);
        case 111:
            if (lookahead == 'n')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            ACCEPT_TOKEN(anon_sym_in);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            if (lookahead == 'i')
                ADVANCE(111);
            LEX_ERROR();
        case 116:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(12);
            LEX_ERROR();
        case 117:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
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
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            if (lookahead == 'i')
                ADVANCE(111);
            LEX_ERROR();
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            LEX_ERROR();
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
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
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(14);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            LEX_ERROR();
        case 129:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(12);
            LEX_ERROR();
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == 'a')
                ADVANCE(96);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(12);
            LEX_ERROR();
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(135);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(136);
            if (lookahead == 'x')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(12);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            LEX_ERROR();
        case 140:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(98);
            if (lookahead == 'f')
                ADVANCE(104);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(142);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier);
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(111);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(145);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
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
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(135);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(142);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(145);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(16);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'a')
                ADVANCE(17);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '=')
                ADVANCE(14);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'a')
                ADVANCE(17);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 154:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
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
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(135);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 161:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(135);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 162:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(135);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 163:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(142);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 164:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(142);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 165:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(142);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(14);
            LEX_ERROR();
        case 167:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 168:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 169:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 170:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(145);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 171:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(145);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        case 172:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(15);
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
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(145);
            if (lookahead == 'f')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 'p')
                ADVANCE(50);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(61);
            if (lookahead == 'w')
                ADVANCE(64);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 72},
    [2] = {.lex_state = 75},
    [3] = {.lex_state = 75},
    [4] = {.lex_state = 75},
    [5] = {.lex_state = 75},
    [6] = {.lex_state = 75},
    [7] = {.lex_state = 76},
    [8] = {.lex_state = 75},
    [9] = {.lex_state = 77},
    [10] = {.lex_state = 77},
    [11] = {.lex_state = 77},
    [12] = {.lex_state = 78, .external_tokens = 2},
    [13] = {.lex_state = 79},
    [14] = {.lex_state = 80, .external_tokens = 2},
    [15] = {.lex_state = 81, .external_tokens = 2},
    [16] = {.lex_state = 82, .external_tokens = 2},
    [17] = {.lex_state = 80, .external_tokens = 2},
    [18] = {.lex_state = 80, .external_tokens = 2},
    [19] = {.lex_state = 83},
    [20] = {.lex_state = 92, .external_tokens = 2},
    [21] = {.lex_state = 80, .external_tokens = 2},
    [22] = {.lex_state = 83},
    [23] = {.lex_state = 80, .external_tokens = 2},
    [24] = {.lex_state = 83},
    [25] = {.lex_state = 79},
    [26] = {.lex_state = 80, .external_tokens = 2},
    [27] = {.lex_state = 75},
    [28] = {.lex_state = 78, .external_tokens = 2},
    [29] = {.lex_state = 80, .external_tokens = 2},
    [30] = {.lex_state = 93, .external_tokens = 2},
    [31] = {.lex_state = 94, .external_tokens = 2},
    [32] = {.lex_state = 75},
    [33] = {.lex_state = 83},
    [34] = {.lex_state = 81, .external_tokens = 2},
    [35] = {.lex_state = 83},
    [36] = {.lex_state = 95},
    [37] = {.lex_state = 113},
    [38] = {.lex_state = 75},
    [39] = {.lex_state = 81, .external_tokens = 2},
    [40] = {.lex_state = 75},
    [41] = {.lex_state = 114},
    [42] = {.lex_state = 75},
    [43] = {.lex_state = 81, .external_tokens = 2},
    [44] = {.lex_state = 115},
    [45] = {.lex_state = 95},
    [46] = {.lex_state = 115},
    [47] = {.lex_state = 77},
    [48] = {.lex_state = 93, .external_tokens = 2},
    [49] = {.lex_state = 77},
    [50] = {.lex_state = 93, .external_tokens = 2},
    [51] = {.lex_state = 93, .external_tokens = 2},
    [52] = {.lex_state = 116},
    [53] = {.lex_state = 117, .external_tokens = 3},
    [54] = {.lex_state = 75},
    [55] = {.lex_state = 118},
    [56] = {.lex_state = 115},
    [57] = {.lex_state = 119},
    [58] = {.lex_state = 76},
    [59] = {.lex_state = 117, .external_tokens = 3},
    [60] = {.lex_state = 120, .external_tokens = 4},
    [61] = {.lex_state = 82, .external_tokens = 2},
    [62] = {.lex_state = 80, .external_tokens = 2},
    [63] = {.lex_state = 75},
    [64] = {.lex_state = 75},
    [65] = {.lex_state = 75},
    [66] = {.lex_state = 76},
    [67] = {.lex_state = 75},
    [68] = {.lex_state = 77},
    [69] = {.lex_state = 77},
    [70] = {.lex_state = 82, .external_tokens = 2},
    [71] = {.lex_state = 120, .external_tokens = 4},
    [72] = {.lex_state = 81, .external_tokens = 2},
    [73] = {.lex_state = 120, .external_tokens = 4},
    [74] = {.lex_state = 120, .external_tokens = 4},
    [75] = {.lex_state = 120, .external_tokens = 4},
    [76] = {.lex_state = 83},
    [77] = {.lex_state = 120, .external_tokens = 4},
    [78] = {.lex_state = 82, .external_tokens = 2},
    [79] = {.lex_state = 120, .external_tokens = 4},
    [80] = {.lex_state = 120, .external_tokens = 4},
    [81] = {.lex_state = 116},
    [82] = {.lex_state = 117, .external_tokens = 3},
    [83] = {.lex_state = 75},
    [84] = {.lex_state = 118},
    [85] = {.lex_state = 76},
    [86] = {.lex_state = 117, .external_tokens = 3},
    [87] = {.lex_state = 75},
    [88] = {.lex_state = 75},
    [89] = {.lex_state = 121, .external_tokens = 4},
    [90] = {.lex_state = 120, .external_tokens = 4},
    [91] = {.lex_state = 122, .external_tokens = 4},
    [92] = {.lex_state = 122, .external_tokens = 4},
    [93] = {.lex_state = 120, .external_tokens = 4},
    [94] = {.lex_state = 123, .external_tokens = 4},
    [95] = {.lex_state = 75},
    [96] = {.lex_state = 121, .external_tokens = 4},
    [97] = {.lex_state = 122, .external_tokens = 4},
    [98] = {.lex_state = 120, .external_tokens = 4},
    [99] = {.lex_state = 122, .external_tokens = 4},
    [100] = {.lex_state = 122, .external_tokens = 4},
    [101] = {.lex_state = 121, .external_tokens = 4},
    [102] = {.lex_state = 75},
    [103] = {.lex_state = 124, .external_tokens = 4},
    [104] = {.lex_state = 75},
    [105] = {.lex_state = 121, .external_tokens = 4},
    [106] = {.lex_state = 121, .external_tokens = 4},
    [107] = {.lex_state = 121, .external_tokens = 4},
    [108] = {.lex_state = 124, .external_tokens = 4},
    [109] = {.lex_state = 120, .external_tokens = 4},
    [110] = {.lex_state = 94},
    [111] = {.lex_state = 125},
    [112] = {.lex_state = 76},
    [113] = {.lex_state = 117, .external_tokens = 3},
    [114] = {.lex_state = 120, .external_tokens = 4},
    [115] = {.lex_state = 76},
    [116] = {.lex_state = 126},
    [117] = {.lex_state = 127},
    [118] = {.lex_state = 114},
    [119] = {.lex_state = 114},
    [120] = {.lex_state = 118},
    [121] = {.lex_state = 126},
    [122] = {.lex_state = 127},
    [123] = {.lex_state = 114},
    [124] = {.lex_state = 114},
    [125] = {.lex_state = 118},
    [126] = {.lex_state = 76},
    [127] = {.lex_state = 128},
    [128] = {.lex_state = 128},
    [129] = {.lex_state = 118},
    [130] = {.lex_state = 76},
    [131] = {.lex_state = 77},
    [132] = {.lex_state = 118},
    [133] = {.lex_state = 125},
    [134] = {.lex_state = 76},
    [135] = {.lex_state = 75},
    [136] = {.lex_state = 113},
    [137] = {.lex_state = 76},
    [138] = {.lex_state = 128},
    [139] = {.lex_state = 118},
    [140] = {.lex_state = 125},
    [141] = {.lex_state = 114},
    [142] = {.lex_state = 129},
    [143] = {.lex_state = 130},
    [144] = {.lex_state = 75},
    [145] = {.lex_state = 131},
    [146] = {.lex_state = 75},
    [147] = {.lex_state = 117, .external_tokens = 3},
    [148] = {.lex_state = 129},
    [149] = {.lex_state = 75},
    [150] = {.lex_state = 117, .external_tokens = 3},
    [151] = {.lex_state = 120, .external_tokens = 4},
    [152] = {.lex_state = 129},
    [153] = {.lex_state = 120, .external_tokens = 4},
    [154] = {.lex_state = 129},
    [155] = {.lex_state = 117, .external_tokens = 3},
    [156] = {.lex_state = 75},
    [157] = {.lex_state = 75},
    [158] = {.lex_state = 120, .external_tokens = 4},
    [159] = {.lex_state = 132},
    [160] = {.lex_state = 132},
    [161] = {.lex_state = 132},
    [162] = {.lex_state = 133},
    [163] = {.lex_state = 75},
    [164] = {.lex_state = 76},
    [165] = {.lex_state = 134, .external_tokens = 4},
    [166] = {.lex_state = 120, .external_tokens = 4},
    [167] = {.lex_state = 134, .external_tokens = 4},
    [168] = {.lex_state = 76},
    [169] = {.lex_state = 137, .external_tokens = 4},
    [170] = {.lex_state = 134, .external_tokens = 4},
    [171] = {.lex_state = 120, .external_tokens = 4},
    [172] = {.lex_state = 120, .external_tokens = 4},
    [173] = {.lex_state = 117, .external_tokens = 3},
    [174] = {.lex_state = 137, .external_tokens = 4},
    [175] = {.lex_state = 117, .external_tokens = 3},
    [176] = {.lex_state = 120, .external_tokens = 4},
    [177] = {.lex_state = 130},
    [178] = {.lex_state = 75},
    [179] = {.lex_state = 117, .external_tokens = 3},
    [180] = {.lex_state = 138},
    [181] = {.lex_state = 117, .external_tokens = 3},
    [182] = {.lex_state = 134, .external_tokens = 4},
    [183] = {.lex_state = 134, .external_tokens = 4},
    [184] = {.lex_state = 132},
    [185] = {.lex_state = 120, .external_tokens = 4},
    [186] = {.lex_state = 132},
    [187] = {.lex_state = 132},
    [188] = {.lex_state = 139},
    [189] = {.lex_state = 140},
    [190] = {.lex_state = 138},
    [191] = {.lex_state = 117, .external_tokens = 3},
    [192] = {.lex_state = 141, .external_tokens = 4},
    [193] = {.lex_state = 120, .external_tokens = 4},
    [194] = {.lex_state = 143},
    [195] = {.lex_state = 75},
    [196] = {.lex_state = 76},
    [197] = {.lex_state = 117, .external_tokens = 3},
    [198] = {.lex_state = 141, .external_tokens = 4},
    [199] = {.lex_state = 120, .external_tokens = 4},
    [200] = {.lex_state = 138},
    [201] = {.lex_state = 117, .external_tokens = 3},
    [202] = {.lex_state = 144, .external_tokens = 4},
    [203] = {.lex_state = 75},
    [204] = {.lex_state = 144, .external_tokens = 4},
    [205] = {.lex_state = 120, .external_tokens = 4},
    [206] = {.lex_state = 144, .external_tokens = 4},
    [207] = {.lex_state = 144, .external_tokens = 4},
    [208] = {.lex_state = 120, .external_tokens = 4},
    [209] = {.lex_state = 138},
    [210] = {.lex_state = 117, .external_tokens = 3},
    [211] = {.lex_state = 144, .external_tokens = 4},
    [212] = {.lex_state = 82, .external_tokens = 2},
    [213] = {.lex_state = 78, .external_tokens = 2},
    [214] = {.lex_state = 75},
    [215] = {.lex_state = 146, .external_tokens = 2},
    [216] = {.lex_state = 75},
    [217] = {.lex_state = 78, .external_tokens = 2},
    [218] = {.lex_state = 78, .external_tokens = 2},
    [219] = {.lex_state = 78, .external_tokens = 2},
    [220] = {.lex_state = 146, .external_tokens = 2},
    [221] = {.lex_state = 80, .external_tokens = 2},
    [222] = {.lex_state = 94},
    [223] = {.lex_state = 76},
    [224] = {.lex_state = 117, .external_tokens = 3},
    [225] = {.lex_state = 80, .external_tokens = 2},
    [226] = {.lex_state = 129},
    [227] = {.lex_state = 117, .external_tokens = 3},
    [228] = {.lex_state = 129},
    [229] = {.lex_state = 117, .external_tokens = 3},
    [230] = {.lex_state = 80, .external_tokens = 2},
    [231] = {.lex_state = 80, .external_tokens = 2},
    [232] = {.lex_state = 117, .external_tokens = 3},
    [233] = {.lex_state = 132},
    [234] = {.lex_state = 75},
    [235] = {.lex_state = 76},
    [236] = {.lex_state = 147, .external_tokens = 2},
    [237] = {.lex_state = 80, .external_tokens = 2},
    [238] = {.lex_state = 147, .external_tokens = 2},
    [239] = {.lex_state = 76},
    [240] = {.lex_state = 148, .external_tokens = 2},
    [241] = {.lex_state = 147, .external_tokens = 2},
    [242] = {.lex_state = 80, .external_tokens = 2},
    [243] = {.lex_state = 80, .external_tokens = 2},
    [244] = {.lex_state = 117, .external_tokens = 3},
    [245] = {.lex_state = 148, .external_tokens = 2},
    [246] = {.lex_state = 117, .external_tokens = 3},
    [247] = {.lex_state = 80, .external_tokens = 2},
    [248] = {.lex_state = 130},
    [249] = {.lex_state = 75},
    [250] = {.lex_state = 117, .external_tokens = 3},
    [251] = {.lex_state = 138},
    [252] = {.lex_state = 117, .external_tokens = 3},
    [253] = {.lex_state = 147, .external_tokens = 2},
    [254] = {.lex_state = 147, .external_tokens = 2},
    [255] = {.lex_state = 138},
    [256] = {.lex_state = 117, .external_tokens = 3},
    [257] = {.lex_state = 149, .external_tokens = 2},
    [258] = {.lex_state = 80, .external_tokens = 2},
    [259] = {.lex_state = 143},
    [260] = {.lex_state = 75},
    [261] = {.lex_state = 76},
    [262] = {.lex_state = 117, .external_tokens = 3},
    [263] = {.lex_state = 149, .external_tokens = 2},
    [264] = {.lex_state = 80, .external_tokens = 2},
    [265] = {.lex_state = 138},
    [266] = {.lex_state = 117, .external_tokens = 3},
    [267] = {.lex_state = 150, .external_tokens = 2},
    [268] = {.lex_state = 75},
    [269] = {.lex_state = 150, .external_tokens = 2},
    [270] = {.lex_state = 80, .external_tokens = 2},
    [271] = {.lex_state = 150, .external_tokens = 2},
    [272] = {.lex_state = 150, .external_tokens = 2},
    [273] = {.lex_state = 80, .external_tokens = 2},
    [274] = {.lex_state = 138},
    [275] = {.lex_state = 117, .external_tokens = 3},
    [276] = {.lex_state = 150, .external_tokens = 2},
    [277] = {.lex_state = 75},
    [278] = {.lex_state = 151},
    [279] = {.lex_state = 75},
    [280] = {.lex_state = 75},
    [281] = {.lex_state = 117, .external_tokens = 3},
    [282] = {.lex_state = 75},
    [283] = {.lex_state = 76},
    [284] = {.lex_state = 75},
    [285] = {.lex_state = 75},
    [286] = {.lex_state = 75},
    [287] = {.lex_state = 76},
    [288] = {.lex_state = 75},
    [289] = {.lex_state = 75},
    [290] = {.lex_state = 76},
    [291] = {.lex_state = 75},
    [292] = {.lex_state = 77},
    [293] = {.lex_state = 151},
    [294] = {.lex_state = 76, .external_tokens = 2},
    [295] = {.lex_state = 126},
    [296] = {.lex_state = 77},
    [297] = {.lex_state = 77},
    [298] = {.lex_state = 75},
    [299] = {.lex_state = 152, .external_tokens = 5},
    [300] = {.lex_state = 153, .external_tokens = 5},
    [301] = {.lex_state = 80, .external_tokens = 5},
    [302] = {.lex_state = 120, .external_tokens = 4},
    [303] = {.lex_state = 82, .external_tokens = 5},
    [304] = {.lex_state = 80, .external_tokens = 5},
    [305] = {.lex_state = 82, .external_tokens = 5},
    [306] = {.lex_state = 82, .external_tokens = 5},
    [307] = {.lex_state = 80, .external_tokens = 5},
    [308] = {.lex_state = 80, .external_tokens = 5},
    [309] = {.lex_state = 150, .external_tokens = 5},
    [310] = {.lex_state = 148, .external_tokens = 5},
    [311] = {.lex_state = 147, .external_tokens = 5},
    [312] = {.lex_state = 80, .external_tokens = 5},
    [313] = {.lex_state = 129},
    [314] = {.lex_state = 80, .external_tokens = 5},
    [315] = {.lex_state = 76},
    [316] = {.lex_state = 114},
    [317] = {.lex_state = 114},
    [318] = {.lex_state = 118},
    [319] = {.lex_state = 83},
    [320] = {.lex_state = 82, .external_tokens = 5},
    [321] = {.lex_state = 154, .external_tokens = 5},
    [322] = {.lex_state = 152, .external_tokens = 5},
    [323] = {.lex_state = 80, .external_tokens = 5},
    [324] = {.lex_state = 155, .external_tokens = 5},
    [325] = {.lex_state = 150, .external_tokens = 5},
    [326] = {.lex_state = 147, .external_tokens = 5},
    [327] = {.lex_state = 129},
    [328] = {.lex_state = 83},
    [329] = {.lex_state = 80, .external_tokens = 5},
    [330] = {.lex_state = 117, .external_tokens = 3},
    [331] = {.lex_state = 75},
    [332] = {.lex_state = 75},
    [333] = {.lex_state = 82, .external_tokens = 5},
    [334] = {.lex_state = 80, .external_tokens = 5},
    [335] = {.lex_state = 156, .external_tokens = 5},
    [336] = {.lex_state = 75},
    [337] = {.lex_state = 156, .external_tokens = 5},
    [338] = {.lex_state = 82, .external_tokens = 5},
    [339] = {.lex_state = 120, .external_tokens = 4},
    [340] = {.lex_state = 82, .external_tokens = 5},
    [341] = {.lex_state = 82, .external_tokens = 5},
    [342] = {.lex_state = 157, .external_tokens = 5},
    [343] = {.lex_state = 75},
    [344] = {.lex_state = 75},
    [345] = {.lex_state = 158, .external_tokens = 5},
    [346] = {.lex_state = 75},
    [347] = {.lex_state = 157, .external_tokens = 5},
    [348] = {.lex_state = 157, .external_tokens = 5},
    [349] = {.lex_state = 157, .external_tokens = 5},
    [350] = {.lex_state = 157, .external_tokens = 5},
    [351] = {.lex_state = 158, .external_tokens = 5},
    [352] = {.lex_state = 148, .external_tokens = 5},
    [353] = {.lex_state = 147, .external_tokens = 5},
    [354] = {.lex_state = 80, .external_tokens = 5},
    [355] = {.lex_state = 80, .external_tokens = 5},
    [356] = {.lex_state = 76},
    [357] = {.lex_state = 150, .external_tokens = 5},
    [358] = {.lex_state = 80, .external_tokens = 5},
    [359] = {.lex_state = 117, .external_tokens = 3},
    [360] = {.lex_state = 148, .external_tokens = 5},
    [361] = {.lex_state = 75},
    [362] = {.lex_state = 159, .external_tokens = 5},
    [363] = {.lex_state = 75},
    [364] = {.lex_state = 159, .external_tokens = 5},
    [365] = {.lex_state = 80, .external_tokens = 5},
    [366] = {.lex_state = 81, .external_tokens = 2},
    [367] = {.lex_state = 80, .external_tokens = 5},
    [368] = {.lex_state = 75},
    [369] = {.lex_state = 117, .external_tokens = 3},
    [370] = {.lex_state = 82, .external_tokens = 5},
    [371] = {.lex_state = 92, .external_tokens = 5},
    [372] = {.lex_state = 75},
    [373] = {.lex_state = 92, .external_tokens = 5},
    [374] = {.lex_state = 150, .external_tokens = 5},
    [375] = {.lex_state = 80, .external_tokens = 5},
    [376] = {.lex_state = 159, .external_tokens = 5},
    [377] = {.lex_state = 117, .external_tokens = 3},
    [378] = {.lex_state = 75},
    [379] = {.lex_state = 75},
    [380] = {.lex_state = 147, .external_tokens = 5},
    [381] = {.lex_state = 160, .external_tokens = 5},
    [382] = {.lex_state = 75},
    [383] = {.lex_state = 160, .external_tokens = 5},
    [384] = {.lex_state = 161, .external_tokens = 5},
    [385] = {.lex_state = 75},
    [386] = {.lex_state = 75},
    [387] = {.lex_state = 162, .external_tokens = 5},
    [388] = {.lex_state = 75},
    [389] = {.lex_state = 161, .external_tokens = 5},
    [390] = {.lex_state = 161, .external_tokens = 5},
    [391] = {.lex_state = 161, .external_tokens = 5},
    [392] = {.lex_state = 161, .external_tokens = 5},
    [393] = {.lex_state = 162, .external_tokens = 5},
    [394] = {.lex_state = 117, .external_tokens = 3},
    [395] = {.lex_state = 76},
    [396] = {.lex_state = 117, .external_tokens = 3},
    [397] = {.lex_state = 80, .external_tokens = 5},
    [398] = {.lex_state = 75},
    [399] = {.lex_state = 75},
    [400] = {.lex_state = 149, .external_tokens = 5},
    [401] = {.lex_state = 163, .external_tokens = 5},
    [402] = {.lex_state = 75},
    [403] = {.lex_state = 163, .external_tokens = 5},
    [404] = {.lex_state = 80, .external_tokens = 5},
    [405] = {.lex_state = 164, .external_tokens = 5},
    [406] = {.lex_state = 75},
    [407] = {.lex_state = 75},
    [408] = {.lex_state = 165, .external_tokens = 5},
    [409] = {.lex_state = 75},
    [410] = {.lex_state = 164, .external_tokens = 5},
    [411] = {.lex_state = 164, .external_tokens = 5},
    [412] = {.lex_state = 164, .external_tokens = 5},
    [413] = {.lex_state = 164, .external_tokens = 5},
    [414] = {.lex_state = 165, .external_tokens = 5},
    [415] = {.lex_state = 80, .external_tokens = 5},
    [416] = {.lex_state = 147, .external_tokens = 5},
    [417] = {.lex_state = 80, .external_tokens = 5},
    [418] = {.lex_state = 76},
    [419] = {.lex_state = 128},
    [420] = {.lex_state = 76},
    [421] = {.lex_state = 118},
    [422] = {.lex_state = 76},
    [423] = {.lex_state = 125},
    [424] = {.lex_state = 76},
    [425] = {.lex_state = 117, .external_tokens = 3},
    [426] = {.lex_state = 80, .external_tokens = 5},
    [427] = {.lex_state = 117, .external_tokens = 3},
    [428] = {.lex_state = 80, .external_tokens = 5},
    [429] = {.lex_state = 117, .external_tokens = 3},
    [430] = {.lex_state = 151},
    [431] = {.lex_state = 166},
    [432] = {.lex_state = 118},
    [433] = {.lex_state = 80, .external_tokens = 5},
    [434] = {.lex_state = 152, .external_tokens = 5},
    [435] = {.lex_state = 93, .external_tokens = 2},
    [436] = {.lex_state = 116},
    [437] = {.lex_state = 75},
    [438] = {.lex_state = 114},
    [439] = {.lex_state = 113},
    [440] = {.lex_state = 114},
    [441] = {.lex_state = 94},
    [442] = {.lex_state = 129},
    [443] = {.lex_state = 117, .external_tokens = 3},
    [444] = {.lex_state = 80, .external_tokens = 5},
    [445] = {.lex_state = 131},
    [446] = {.lex_state = 130},
    [447] = {.lex_state = 75},
    [448] = {.lex_state = 117, .external_tokens = 3},
    [449] = {.lex_state = 138},
    [450] = {.lex_state = 147, .external_tokens = 5},
    [451] = {.lex_state = 117, .external_tokens = 3},
    [452] = {.lex_state = 132},
    [453] = {.lex_state = 138},
    [454] = {.lex_state = 117, .external_tokens = 3},
    [455] = {.lex_state = 149, .external_tokens = 5},
    [456] = {.lex_state = 80, .external_tokens = 5},
    [457] = {.lex_state = 76},
    [458] = {.lex_state = 143},
    [459] = {.lex_state = 117, .external_tokens = 3},
    [460] = {.lex_state = 75},
    [461] = {.lex_state = 75},
    [462] = {.lex_state = 167, .external_tokens = 5},
    [463] = {.lex_state = 75},
    [464] = {.lex_state = 167, .external_tokens = 5},
    [465] = {.lex_state = 168, .external_tokens = 5},
    [466] = {.lex_state = 75},
    [467] = {.lex_state = 75},
    [468] = {.lex_state = 169, .external_tokens = 5},
    [469] = {.lex_state = 75},
    [470] = {.lex_state = 168, .external_tokens = 5},
    [471] = {.lex_state = 168, .external_tokens = 5},
    [472] = {.lex_state = 168, .external_tokens = 5},
    [473] = {.lex_state = 168, .external_tokens = 5},
    [474] = {.lex_state = 169, .external_tokens = 5},
    [475] = {.lex_state = 138},
    [476] = {.lex_state = 117, .external_tokens = 3},
    [477] = {.lex_state = 75},
    [478] = {.lex_state = 75},
    [479] = {.lex_state = 150, .external_tokens = 5},
    [480] = {.lex_state = 170, .external_tokens = 5},
    [481] = {.lex_state = 75},
    [482] = {.lex_state = 170, .external_tokens = 5},
    [483] = {.lex_state = 171, .external_tokens = 5},
    [484] = {.lex_state = 75},
    [485] = {.lex_state = 75},
    [486] = {.lex_state = 172, .external_tokens = 5},
    [487] = {.lex_state = 75},
    [488] = {.lex_state = 171, .external_tokens = 5},
    [489] = {.lex_state = 171, .external_tokens = 5},
    [490] = {.lex_state = 171, .external_tokens = 5},
    [491] = {.lex_state = 171, .external_tokens = 5},
    [492] = {.lex_state = 172, .external_tokens = 5},
    [493] = {.lex_state = 138},
    [494] = {.lex_state = 117, .external_tokens = 3},
    [495] = {.lex_state = 150, .external_tokens = 5},
    [496] = {.lex_state = 80, .external_tokens = 5},
    [497] = {.lex_state = 78, .external_tokens = 5},
    [498] = {.lex_state = 75},
    [499] = {.lex_state = 75},
    [500] = {.lex_state = 146, .external_tokens = 5},
    [501] = {.lex_state = 75},
    [502] = {.lex_state = 78, .external_tokens = 5},
    [503] = {.lex_state = 78, .external_tokens = 5},
    [504] = {.lex_state = 78, .external_tokens = 5},
    [505] = {.lex_state = 129},
    [506] = {.lex_state = 152, .external_tokens = 5},
    [507] = {.lex_state = 78, .external_tokens = 5},
    [508] = {.lex_state = 146, .external_tokens = 5},
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
        [sym_module] = STATE(13),
        [sym__statement] = STATE(304),
        [sym__simple_statement] = STATE(305),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__compound_statement] = STATE(307),
        [sym_if_statement] = STATE(308),
        [sym_elif_clause] = STATE(309),
        [sym_else_clause] = STATE(310),
        [sym_for_statement] = STATE(308),
        [sym_while_statement] = STATE(308),
        [sym_try_statement] = STATE(308),
        [sym_except_clause] = STATE(311),
        [sym_finally_clause] = STATE(312),
        [sym_with_statement] = STATE(308),
        [sym_with_item] = STATE(313),
        [sym_function_definition] = STATE(314),
        [sym_parameters] = STATE(315),
        [sym_default_parameter] = STATE(316),
        [sym_list_splat_parameter] = STATE(317),
        [sym_dictionary_splat_parameter] = STATE(318),
        [sym_class_definition] = STATE(314),
        [sym_decorated_definition] = STATE(308),
        [sym_decorator] = STATE(319),
        [sym__suite] = STATE(320),
        [sym_arguments] = STATE(34),
        [sym_expression_list] = STATE(321),
        [sym_dotted_name] = STATE(31),
        [sym__expression] = STATE(322),
        [sym_binary_operator] = STATE(299),
        [aux_sym_module_repeat1] = STATE(323),
        [aux_sym_print_statement_repeat1] = STATE(324),
        [aux_sym_if_statement_repeat1] = STATE(325),
        [aux_sym_try_statement_repeat1] = STATE(326),
        [aux_sym_with_statement_repeat1] = STATE(327),
        [aux_sym_parameters_repeat1] = STATE(121),
        [aux_sym_decorated_definition_repeat1] = STATE(328),
        [aux_sym_dotted_name_repeat1] = STATE(48),
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
        [anon_sym_AT] = ACTIONS(47),
        [anon_sym_DOT] = ACTIONS(49),
        [anon_sym_PLUS] = ACTIONS(51),
        [sym_number] = ACTIONS(53),
        [sym_identifier] = ACTIONS(55),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(59),
        [sym__indent] = ACTIONS(61),
        [sym__dedent] = ACTIONS(63),
    },
    [1] = {
        [sym_module] = STATE(13),
        [sym__statement] = STATE(14),
        [sym__simple_statement] = STATE(15),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(17),
        [sym_if_statement] = STATE(18),
        [sym_for_statement] = STATE(18),
        [sym_while_statement] = STATE(18),
        [sym_try_statement] = STATE(18),
        [sym_with_statement] = STATE(18),
        [sym_function_definition] = STATE(18),
        [sym_class_definition] = STATE(18),
        [sym_decorated_definition] = STATE(18),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_module_repeat1] = STATE(21),
        [aux_sym_decorated_definition_repeat1] = STATE(22),
        [ts_builtin_sym_end] = ACTIONS(65),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(71),
        [anon_sym_for] = ACTIONS(73),
        [anon_sym_while] = ACTIONS(75),
        [anon_sym_try] = ACTIONS(77),
        [anon_sym_with] = ACTIONS(79),
        [anon_sym_def] = ACTIONS(81),
        [anon_sym_class] = ACTIONS(83),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
    },
    [2] = {
        [sym__expression] = STATE(219),
        [sym_binary_operator] = STATE(12),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(57),
    },
    [3] = {
        [sym_expression_list] = STATE(212),
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(12),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(57),
    },
    [4] = {
        [sym__expression] = STATE(265),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [5] = {
        [sym_expression_list] = STATE(259),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [6] = {
        [sym__expression] = STATE(255),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [7] = {
        [anon_sym_COLON] = ACTIONS(93),
        [sym_comment] = ACTIONS(57),
    },
    [8] = {
        [sym_with_item] = STATE(226),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [9] = {
        [sym_identifier] = ACTIONS(95),
        [sym_comment] = ACTIONS(57),
    },
    [10] = {
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(57),
    },
    [11] = {
        [sym_dotted_name] = STATE(31),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(57),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_COMMA] = ACTIONS(101),
        [anon_sym_return] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(101),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [sym_comment] = ACTIONS(57),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(109),
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_AT] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(109),
    },
    [15] = {
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(115),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_return] = ACTIONS(119),
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
        [anon_sym_class] = ACTIONS(119),
        [anon_sym_AT] = ACTIONS(117),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(117),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(123),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_return] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(129),
    },
    [19] = {
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_AT] = ACTIONS(135),
        [sym_comment] = ACTIONS(57),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
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
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
    },
    [21] = {
        [sym__statement] = STATE(26),
        [sym__simple_statement] = STATE(15),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(17),
        [sym_if_statement] = STATE(18),
        [sym_for_statement] = STATE(18),
        [sym_while_statement] = STATE(18),
        [sym_try_statement] = STATE(18),
        [sym_with_statement] = STATE(18),
        [sym_function_definition] = STATE(18),
        [sym_class_definition] = STATE(18),
        [sym_decorated_definition] = STATE(18),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_decorated_definition_repeat1] = STATE(22),
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(71),
        [anon_sym_for] = ACTIONS(73),
        [anon_sym_while] = ACTIONS(75),
        [anon_sym_try] = ACTIONS(77),
        [anon_sym_with] = ACTIONS(79),
        [anon_sym_def] = ACTIONS(81),
        [anon_sym_class] = ACTIONS(83),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(147),
    },
    [22] = {
        [sym_function_definition] = STATE(23),
        [sym_class_definition] = STATE(23),
        [sym_decorator] = STATE(24),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(85),
        [sym_comment] = ACTIONS(57),
    },
    [23] = {
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
        [anon_sym_AT] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(153),
    },
    [24] = {
        [anon_sym_def] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(159),
        [sym_comment] = ACTIONS(57),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [sym_comment] = ACTIONS(57),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_return] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(165),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_AT] = ACTIONS(163),
        [sym_number] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(163),
    },
    [27] = {
        [sym__expression] = STATE(28),
        [sym_binary_operator] = STATE(12),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(57),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(169),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(175),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(175),
    },
    [30] = {
        [aux_sym_dotted_name_repeat1] = STATE(48),
        [anon_sym_LPAREN] = ACTIONS(181),
        [anon_sym_DOT] = ACTIONS(183),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(181),
    },
    [31] = {
        [sym_arguments] = STATE(34),
        [anon_sym_LPAREN] = ACTIONS(185),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(187),
    },
    [32] = {
        [sym__expression] = STATE(37),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [33] = {
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(189),
        [sym_comment] = ACTIONS(57),
    },
    [34] = {
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(191),
    },
    [35] = {
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(193),
        [anon_sym_AT] = ACTIONS(193),
        [sym_comment] = ACTIONS(57),
    },
    [36] = {
        [anon_sym_COMMA] = ACTIONS(101),
        [anon_sym_COLON] = ACTIONS(101),
        [anon_sym_in] = ACTIONS(101),
        [anon_sym_except] = ACTIONS(101),
        [anon_sym_as] = ACTIONS(101),
        [anon_sym_finally] = ACTIONS(101),
        [anon_sym_RPAREN] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_comment] = ACTIONS(57),
    },
    [37] = {
        [aux_sym_print_statement_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [38] = {
        [sym__expression] = STATE(46),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [39] = {
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(201),
    },
    [40] = {
        [sym__expression] = STATE(45),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_RPAREN] = ACTIONS(205),
        [sym_comment] = ACTIONS(57),
    },
    [42] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [43] = {
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(207),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_in] = ACTIONS(209),
        [anon_sym_except] = ACTIONS(209),
        [anon_sym_finally] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(169),
        [anon_sym_in] = ACTIONS(169),
        [anon_sym_except] = ACTIONS(169),
        [anon_sym_as] = ACTIONS(169),
        [anon_sym_finally] = ACTIONS(169),
        [anon_sym_RPAREN] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(169),
        [sym_comment] = ACTIONS(57),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_COLON] = ACTIONS(211),
        [anon_sym_in] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_RPAREN] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [47] = {
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(57),
    },
    [48] = {
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_DOT] = ACTIONS(217),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(215),
    },
    [49] = {
        [sym_identifier] = ACTIONS(219),
        [sym_comment] = ACTIONS(57),
    },
    [50] = {
        [anon_sym_LPAREN] = ACTIONS(221),
        [anon_sym_DOT] = ACTIONS(221),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(221),
    },
    [51] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_DOT] = ACTIONS(223),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(223),
    },
    [52] = {
        [anon_sym_COLON] = ACTIONS(225),
        [anon_sym_LPAREN] = ACTIONS(227),
        [sym_comment] = ACTIONS(57),
    },
    [53] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(221),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [54] = {
        [sym_expression_list] = STATE(55),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [55] = {
        [anon_sym_RPAREN] = ACTIONS(231),
        [sym_comment] = ACTIONS(57),
    },
    [56] = {
        [aux_sym_print_statement_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_RPAREN] = ACTIONS(235),
        [sym_comment] = ACTIONS(57),
    },
    [58] = {
        [anon_sym_COLON] = ACTIONS(237),
        [sym_comment] = ACTIONS(57),
    },
    [59] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(62),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [60] = {
        [sym__statement] = STATE(71),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_module_repeat1] = STATE(75),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(253),
    },
    [61] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
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
        [anon_sym_AT] = ACTIONS(255),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(255),
    },
    [62] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_AT] = ACTIONS(261),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(261),
    },
    [63] = {
        [sym__expression] = STATE(200),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [64] = {
        [sym_expression_list] = STATE(194),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [65] = {
        [sym__expression] = STATE(190),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [66] = {
        [anon_sym_COLON] = ACTIONS(267),
        [sym_comment] = ACTIONS(57),
    },
    [67] = {
        [sym_with_item] = STATE(142),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [68] = {
        [sym_identifier] = ACTIONS(269),
        [sym_comment] = ACTIONS(57),
    },
    [69] = {
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(57),
    },
    [70] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(275),
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
        [anon_sym_AT] = ACTIONS(273),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(273),
    },
    [71] = {
        [anon_sym_print] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(111),
        [anon_sym_if] = ACTIONS(111),
        [anon_sym_for] = ACTIONS(111),
        [anon_sym_while] = ACTIONS(111),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_AT] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(109),
    },
    [72] = {
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(279),
    },
    [73] = {
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(123),
    },
    [74] = {
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_return] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(129),
    },
    [75] = {
        [sym__statement] = STATE(79),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(281),
    },
    [76] = {
        [sym_function_definition] = STATE(77),
        [sym_class_definition] = STATE(77),
        [sym_decorator] = STATE(24),
        [anon_sym_def] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(285),
        [anon_sym_AT] = ACTIONS(85),
        [sym_comment] = ACTIONS(57),
    },
    [77] = {
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(153),
    },
    [78] = {
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(289),
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
        [anon_sym_AT] = ACTIONS(287),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(287),
    },
    [79] = {
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_return] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(165),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_AT] = ACTIONS(163),
        [sym_number] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(163),
    },
    [80] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(175),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(175),
    },
    [81] = {
        [anon_sym_COLON] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(57),
    },
    [82] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(109),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [83] = {
        [sym_expression_list] = STATE(84),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [84] = {
        [anon_sym_RPAREN] = ACTIONS(307),
        [sym_comment] = ACTIONS(57),
    },
    [85] = {
        [anon_sym_COLON] = ACTIONS(309),
        [sym_comment] = ACTIONS(57),
    },
    [86] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(93),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [87] = {
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(89),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(57),
    },
    [88] = {
        [sym_expression_list] = STATE(100),
        [sym__expression] = STATE(101),
        [sym_binary_operator] = STATE(89),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(57),
    },
    [89] = {
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_COMMA] = ACTIONS(101),
        [anon_sym_return] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(101),
    },
    [90] = {
        [sym__statement] = STATE(71),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_module_repeat1] = STATE(98),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(311),
    },
    [91] = {
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
        [anon_sym_AT] = ACTIONS(255),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(255),
    },
    [92] = {
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_return] = ACTIONS(119),
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
        [anon_sym_class] = ACTIONS(119),
        [anon_sym_AT] = ACTIONS(117),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(117),
    },
    [93] = {
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_AT] = ACTIONS(261),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(261),
    },
    [94] = {
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
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
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(313),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(137),
    },
    [95] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(89),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(57),
    },
    [96] = {
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(169),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(169),
    },
    [97] = {
        [anon_sym_print] = ACTIONS(275),
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
        [anon_sym_AT] = ACTIONS(273),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(273),
    },
    [98] = {
        [sym__statement] = STATE(79),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(315),
    },
    [99] = {
        [anon_sym_print] = ACTIONS(289),
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
        [anon_sym_AT] = ACTIONS(287),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(287),
    },
    [100] = {
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_return] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_elif] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(317),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(319),
    },
    [101] = {
        [aux_sym_print_statement_repeat1] = STATE(103),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_elif] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(313),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(233),
    },
    [102] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(89),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(57),
    },
    [103] = {
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_elif] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(235),
    },
    [104] = {
        [sym__expression] = STATE(105),
        [sym_binary_operator] = STATE(89),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(57),
    },
    [105] = {
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_elif] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_except] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(313),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(209),
    },
    [106] = {
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_except] = ACTIONS(339),
        [anon_sym_finally] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(313),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(211),
    },
    [107] = {
        [aux_sym_print_statement_repeat1] = STATE(108),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(313),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(345),
    },
    [108] = {
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_elif] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(351),
    },
    [109] = {
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_return] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [anon_sym_def] = ACTIONS(355),
        [anon_sym_class] = ACTIONS(355),
        [anon_sym_AT] = ACTIONS(357),
        [sym_number] = ACTIONS(355),
        [sym_identifier] = ACTIONS(359),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(357),
    },
    [110] = {
        [sym_parameters] = STATE(112),
        [anon_sym_LPAREN] = ACTIONS(361),
        [sym_comment] = ACTIONS(57),
    },
    [111] = {
        [sym_default_parameter] = STATE(118),
        [sym_list_splat_parameter] = STATE(119),
        [sym_dictionary_splat_parameter] = STATE(120),
        [aux_sym_parameters_repeat1] = STATE(121),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(57),
    },
    [112] = {
        [anon_sym_COLON] = ACTIONS(369),
        [sym_comment] = ACTIONS(57),
    },
    [113] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(114),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [114] = {
        [anon_sym_print] = ACTIONS(371),
        [anon_sym_return] = ACTIONS(371),
        [anon_sym_if] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_while] = ACTIONS(371),
        [anon_sym_try] = ACTIONS(371),
        [anon_sym_with] = ACTIONS(371),
        [anon_sym_def] = ACTIONS(371),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(373),
        [sym_number] = ACTIONS(371),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(373),
    },
    [115] = {
        [anon_sym_COLON] = ACTIONS(377),
        [sym_comment] = ACTIONS(57),
    },
    [116] = {
        [anon_sym_STAR] = ACTIONS(379),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(57),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_EQ] = ACTIONS(387),
        [sym_comment] = ACTIONS(57),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(385),
        [sym_comment] = ACTIONS(57),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(385),
        [sym_comment] = ACTIONS(57),
    },
    [120] = {
        [anon_sym_RPAREN] = ACTIONS(385),
        [sym_comment] = ACTIONS(57),
    },
    [121] = {
        [sym_default_parameter] = STATE(123),
        [sym_list_splat_parameter] = STATE(124),
        [sym_dictionary_splat_parameter] = STATE(125),
        [anon_sym_STAR] = ACTIONS(365),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(57),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_EQ] = ACTIONS(387),
        [sym_comment] = ACTIONS(57),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_RPAREN] = ACTIONS(395),
        [sym_comment] = ACTIONS(57),
    },
    [124] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(395),
        [sym_comment] = ACTIONS(57),
    },
    [125] = {
        [anon_sym_RPAREN] = ACTIONS(395),
        [sym_comment] = ACTIONS(57),
    },
    [126] = {
        [anon_sym_COLON] = ACTIONS(399),
        [sym_comment] = ACTIONS(57),
    },
    [127] = {
        [sym_dictionary_splat_parameter] = STATE(129),
        [anon_sym_STAR] = ACTIONS(401),
        [sym_comment] = ACTIONS(57),
    },
    [128] = {
        [anon_sym_STAR] = ACTIONS(379),
        [sym_comment] = ACTIONS(57),
    },
    [129] = {
        [anon_sym_RPAREN] = ACTIONS(403),
        [sym_comment] = ACTIONS(57),
    },
    [130] = {
        [anon_sym_COLON] = ACTIONS(405),
        [sym_comment] = ACTIONS(57),
    },
    [131] = {
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(57),
    },
    [132] = {
        [anon_sym_RPAREN] = ACTIONS(409),
        [sym_comment] = ACTIONS(57),
    },
    [133] = {
        [anon_sym_RPAREN] = ACTIONS(411),
        [anon_sym_STAR] = ACTIONS(413),
        [sym_identifier] = ACTIONS(415),
        [sym_comment] = ACTIONS(57),
    },
    [134] = {
        [anon_sym_COLON] = ACTIONS(417),
        [sym_comment] = ACTIONS(57),
    },
    [135] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(419),
        [anon_sym_RPAREN] = ACTIONS(419),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [137] = {
        [anon_sym_COLON] = ACTIONS(421),
        [sym_comment] = ACTIONS(57),
    },
    [138] = {
        [sym_dictionary_splat_parameter] = STATE(139),
        [anon_sym_STAR] = ACTIONS(401),
        [sym_comment] = ACTIONS(57),
    },
    [139] = {
        [anon_sym_RPAREN] = ACTIONS(411),
        [sym_comment] = ACTIONS(57),
    },
    [140] = {
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_STAR] = ACTIONS(423),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(57),
    },
    [141] = {
        [anon_sym_COMMA] = ACTIONS(427),
        [anon_sym_RPAREN] = ACTIONS(427),
        [sym_comment] = ACTIONS(57),
    },
    [142] = {
        [aux_sym_with_statement_repeat1] = STATE(148),
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(431),
        [sym_comment] = ACTIONS(57),
    },
    [143] = {
        [anon_sym_COMMA] = ACTIONS(433),
        [anon_sym_COLON] = ACTIONS(433),
        [anon_sym_as] = ACTIONS(435),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [144] = {
        [sym__expression] = STATE(145),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(437),
        [anon_sym_COLON] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [146] = {
        [sym_with_item] = STATE(154),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [147] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(153),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [148] = {
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_COLON] = ACTIONS(441),
        [sym_comment] = ACTIONS(57),
    },
    [149] = {
        [sym_with_item] = STATE(152),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [150] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(151),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [151] = {
        [anon_sym_print] = ACTIONS(443),
        [anon_sym_return] = ACTIONS(443),
        [anon_sym_if] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_while] = ACTIONS(443),
        [anon_sym_try] = ACTIONS(443),
        [anon_sym_with] = ACTIONS(443),
        [anon_sym_def] = ACTIONS(443),
        [anon_sym_class] = ACTIONS(443),
        [anon_sym_AT] = ACTIONS(445),
        [sym_number] = ACTIONS(443),
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(445),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_COLON] = ACTIONS(449),
        [sym_comment] = ACTIONS(57),
    },
    [153] = {
        [anon_sym_print] = ACTIONS(451),
        [anon_sym_return] = ACTIONS(451),
        [anon_sym_if] = ACTIONS(451),
        [anon_sym_for] = ACTIONS(451),
        [anon_sym_while] = ACTIONS(451),
        [anon_sym_try] = ACTIONS(451),
        [anon_sym_with] = ACTIONS(451),
        [anon_sym_def] = ACTIONS(451),
        [anon_sym_class] = ACTIONS(451),
        [anon_sym_AT] = ACTIONS(453),
        [sym_number] = ACTIONS(451),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(453),
    },
    [154] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_COLON] = ACTIONS(457),
        [sym_comment] = ACTIONS(57),
    },
    [155] = {
        [sym__simple_statement] = STATE(159),
        [sym_print_statement] = STATE(160),
        [sym_expression_statement] = STATE(160),
        [sym_return_statement] = STATE(160),
        [sym__suite] = STATE(161),
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(36),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(461),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(463),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(465),
    },
    [156] = {
        [sym__expression] = STATE(188),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [157] = {
        [sym_expression_list] = STATE(187),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [158] = {
        [sym__statement] = STATE(71),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_module_repeat1] = STATE(185),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(467),
    },
    [159] = {
        [anon_sym_except] = ACTIONS(255),
        [anon_sym_finally] = ACTIONS(255),
        [sym_comment] = ACTIONS(57),
    },
    [160] = {
        [anon_sym_except] = ACTIONS(117),
        [anon_sym_finally] = ACTIONS(117),
        [sym_comment] = ACTIONS(57),
    },
    [161] = {
        [sym_except_clause] = STATE(165),
        [sym_finally_clause] = STATE(166),
        [aux_sym_try_statement_repeat1] = STATE(167),
        [anon_sym_except] = ACTIONS(469),
        [anon_sym_finally] = ACTIONS(471),
        [sym_comment] = ACTIONS(57),
    },
    [162] = {
        [anon_sym_except] = ACTIONS(137),
        [anon_sym_finally] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [163] = {
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [164] = {
        [anon_sym_COLON] = ACTIONS(473),
        [sym_comment] = ACTIONS(57),
    },
    [165] = {
        [anon_sym_print] = ACTIONS(475),
        [anon_sym_return] = ACTIONS(475),
        [anon_sym_if] = ACTIONS(475),
        [anon_sym_else] = ACTIONS(475),
        [anon_sym_for] = ACTIONS(475),
        [anon_sym_while] = ACTIONS(475),
        [anon_sym_try] = ACTIONS(475),
        [anon_sym_except] = ACTIONS(475),
        [anon_sym_finally] = ACTIONS(475),
        [anon_sym_with] = ACTIONS(475),
        [anon_sym_def] = ACTIONS(475),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(477),
        [sym_number] = ACTIONS(475),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(477),
    },
    [166] = {
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(483),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(485),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(483),
    },
    [167] = {
        [sym_else_clause] = STATE(169),
        [sym_except_clause] = STATE(170),
        [sym_finally_clause] = STATE(171),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_except] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(491),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(483),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(485),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(483),
    },
    [168] = {
        [anon_sym_COLON] = ACTIONS(493),
        [sym_comment] = ACTIONS(57),
    },
    [169] = {
        [sym_finally_clause] = STATE(172),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_finally] = ACTIONS(491),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(497),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(497),
    },
    [170] = {
        [anon_sym_print] = ACTIONS(501),
        [anon_sym_return] = ACTIONS(501),
        [anon_sym_if] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_while] = ACTIONS(501),
        [anon_sym_try] = ACTIONS(501),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(501),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_AT] = ACTIONS(503),
        [sym_number] = ACTIONS(501),
        [sym_identifier] = ACTIONS(505),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(503),
    },
    [171] = {
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(497),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(497),
    },
    [172] = {
        [anon_sym_print] = ACTIONS(507),
        [anon_sym_return] = ACTIONS(507),
        [anon_sym_if] = ACTIONS(507),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(507),
        [anon_sym_with] = ACTIONS(507),
        [anon_sym_def] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_AT] = ACTIONS(509),
        [sym_number] = ACTIONS(507),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(509),
    },
    [173] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(174),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [174] = {
        [anon_sym_print] = ACTIONS(513),
        [anon_sym_return] = ACTIONS(513),
        [anon_sym_if] = ACTIONS(513),
        [anon_sym_for] = ACTIONS(513),
        [anon_sym_while] = ACTIONS(513),
        [anon_sym_try] = ACTIONS(513),
        [anon_sym_finally] = ACTIONS(513),
        [anon_sym_with] = ACTIONS(513),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_AT] = ACTIONS(515),
        [sym_number] = ACTIONS(513),
        [sym_identifier] = ACTIONS(517),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(515),
    },
    [175] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(176),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [176] = {
        [anon_sym_print] = ACTIONS(519),
        [anon_sym_return] = ACTIONS(519),
        [anon_sym_if] = ACTIONS(519),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(519),
        [anon_sym_try] = ACTIONS(519),
        [anon_sym_with] = ACTIONS(519),
        [anon_sym_def] = ACTIONS(519),
        [anon_sym_class] = ACTIONS(519),
        [anon_sym_AT] = ACTIONS(521),
        [sym_number] = ACTIONS(519),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(521),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_COLON] = ACTIONS(527),
        [anon_sym_as] = ACTIONS(525),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [178] = {
        [sym__expression] = STATE(180),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [179] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(183),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [180] = {
        [anon_sym_COLON] = ACTIONS(529),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [181] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(182),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [182] = {
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_else] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_except] = ACTIONS(531),
        [anon_sym_finally] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [anon_sym_AT] = ACTIONS(533),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(535),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(533),
    },
    [183] = {
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_else] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_except] = ACTIONS(537),
        [anon_sym_finally] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [anon_sym_AT] = ACTIONS(539),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(541),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(539),
    },
    [184] = {
        [anon_sym_except] = ACTIONS(273),
        [anon_sym_finally] = ACTIONS(273),
        [sym_comment] = ACTIONS(57),
    },
    [185] = {
        [sym__statement] = STATE(79),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(543),
    },
    [186] = {
        [anon_sym_except] = ACTIONS(287),
        [anon_sym_finally] = ACTIONS(287),
        [sym_comment] = ACTIONS(57),
    },
    [187] = {
        [anon_sym_except] = ACTIONS(319),
        [anon_sym_finally] = ACTIONS(319),
        [sym_comment] = ACTIONS(57),
    },
    [188] = {
        [aux_sym_print_statement_repeat1] = STATE(189),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_except] = ACTIONS(345),
        [anon_sym_finally] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [189] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_except] = ACTIONS(351),
        [anon_sym_finally] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [190] = {
        [anon_sym_COLON] = ACTIONS(545),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [191] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(192),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [192] = {
        [sym_else_clause] = STATE(193),
        [anon_sym_print] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_if] = ACTIONS(547),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_while] = ACTIONS(547),
        [anon_sym_try] = ACTIONS(547),
        [anon_sym_with] = ACTIONS(547),
        [anon_sym_def] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_AT] = ACTIONS(549),
        [sym_number] = ACTIONS(547),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(549),
    },
    [193] = {
        [anon_sym_print] = ACTIONS(553),
        [anon_sym_return] = ACTIONS(553),
        [anon_sym_if] = ACTIONS(553),
        [anon_sym_for] = ACTIONS(553),
        [anon_sym_while] = ACTIONS(553),
        [anon_sym_try] = ACTIONS(553),
        [anon_sym_with] = ACTIONS(553),
        [anon_sym_def] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_AT] = ACTIONS(555),
        [sym_number] = ACTIONS(553),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(555),
    },
    [194] = {
        [anon_sym_in] = ACTIONS(559),
        [sym_comment] = ACTIONS(57),
    },
    [195] = {
        [sym_expression_list] = STATE(196),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [196] = {
        [anon_sym_COLON] = ACTIONS(561),
        [sym_comment] = ACTIONS(57),
    },
    [197] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(198),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [198] = {
        [sym_else_clause] = STATE(199),
        [anon_sym_print] = ACTIONS(563),
        [anon_sym_return] = ACTIONS(563),
        [anon_sym_if] = ACTIONS(563),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(563),
        [anon_sym_while] = ACTIONS(563),
        [anon_sym_try] = ACTIONS(563),
        [anon_sym_with] = ACTIONS(563),
        [anon_sym_def] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_AT] = ACTIONS(565),
        [sym_number] = ACTIONS(563),
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(565),
    },
    [199] = {
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_if] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_while] = ACTIONS(569),
        [anon_sym_try] = ACTIONS(569),
        [anon_sym_with] = ACTIONS(569),
        [anon_sym_def] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_AT] = ACTIONS(571),
        [sym_number] = ACTIONS(569),
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(571),
    },
    [200] = {
        [anon_sym_COLON] = ACTIONS(575),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [201] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(202),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [202] = {
        [sym_elif_clause] = STATE(204),
        [sym_else_clause] = STATE(205),
        [aux_sym_if_statement_repeat1] = STATE(206),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_elif] = ACTIONS(579),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(581),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(583),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(581),
    },
    [203] = {
        [sym__expression] = STATE(209),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [204] = {
        [anon_sym_print] = ACTIONS(585),
        [anon_sym_return] = ACTIONS(585),
        [anon_sym_if] = ACTIONS(585),
        [anon_sym_elif] = ACTIONS(585),
        [anon_sym_else] = ACTIONS(585),
        [anon_sym_for] = ACTIONS(585),
        [anon_sym_while] = ACTIONS(585),
        [anon_sym_try] = ACTIONS(585),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(585),
        [anon_sym_AT] = ACTIONS(587),
        [sym_number] = ACTIONS(585),
        [sym_identifier] = ACTIONS(589),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(587),
    },
    [205] = {
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(593),
    },
    [206] = {
        [sym_elif_clause] = STATE(207),
        [sym_else_clause] = STATE(208),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_elif] = ACTIONS(579),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(593),
    },
    [207] = {
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_elif] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(599),
    },
    [208] = {
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(605),
    },
    [209] = {
        [anon_sym_COLON] = ACTIONS(609),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [210] = {
        [sym__simple_statement] = STATE(91),
        [sym_print_statement] = STATE(92),
        [sym_expression_statement] = STATE(92),
        [sym_return_statement] = STATE(92),
        [sym__suite] = STATE(211),
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(89),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_return] = ACTIONS(299),
        [sym_number] = ACTIONS(301),
        [sym_identifier] = ACTIONS(303),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(305),
    },
    [211] = {
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_elif] = ACTIONS(611),
        [anon_sym_else] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(613),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_return] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_elif] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(317),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(319),
    },
    [213] = {
        [aux_sym_print_statement_repeat1] = STATE(215),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_elif] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
    },
    [214] = {
        [sym__expression] = STATE(218),
        [sym_binary_operator] = STATE(12),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(57),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_elif] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
    },
    [216] = {
        [sym__expression] = STATE(217),
        [sym_binary_operator] = STATE(12),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(87),
        [sym_comment] = ACTIONS(57),
    },
    [217] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_elif] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_except] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
    },
    [218] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_except] = ACTIONS(339),
        [anon_sym_finally] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
    },
    [219] = {
        [aux_sym_print_statement_repeat1] = STATE(220),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(141),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
    },
    [220] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_elif] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
    },
    [221] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_return] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [anon_sym_def] = ACTIONS(355),
        [anon_sym_class] = ACTIONS(355),
        [anon_sym_AT] = ACTIONS(357),
        [sym_number] = ACTIONS(355),
        [sym_identifier] = ACTIONS(359),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(357),
    },
    [222] = {
        [sym_parameters] = STATE(223),
        [anon_sym_LPAREN] = ACTIONS(361),
        [sym_comment] = ACTIONS(57),
    },
    [223] = {
        [anon_sym_COLON] = ACTIONS(621),
        [sym_comment] = ACTIONS(57),
    },
    [224] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(225),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [225] = {
        [ts_builtin_sym_end] = ACTIONS(373),
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_print] = ACTIONS(371),
        [anon_sym_return] = ACTIONS(371),
        [anon_sym_if] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_while] = ACTIONS(371),
        [anon_sym_try] = ACTIONS(371),
        [anon_sym_with] = ACTIONS(371),
        [anon_sym_def] = ACTIONS(371),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(373),
        [sym_number] = ACTIONS(371),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(373),
    },
    [226] = {
        [aux_sym_with_statement_repeat1] = STATE(228),
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(623),
        [sym_comment] = ACTIONS(57),
    },
    [227] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(231),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [228] = {
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_COLON] = ACTIONS(625),
        [sym_comment] = ACTIONS(57),
    },
    [229] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(230),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [230] = {
        [ts_builtin_sym_end] = ACTIONS(445),
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_print] = ACTIONS(443),
        [anon_sym_return] = ACTIONS(443),
        [anon_sym_if] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_while] = ACTIONS(443),
        [anon_sym_try] = ACTIONS(443),
        [anon_sym_with] = ACTIONS(443),
        [anon_sym_def] = ACTIONS(443),
        [anon_sym_class] = ACTIONS(443),
        [anon_sym_AT] = ACTIONS(445),
        [sym_number] = ACTIONS(443),
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(445),
    },
    [231] = {
        [ts_builtin_sym_end] = ACTIONS(453),
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_print] = ACTIONS(451),
        [anon_sym_return] = ACTIONS(451),
        [anon_sym_if] = ACTIONS(451),
        [anon_sym_for] = ACTIONS(451),
        [anon_sym_while] = ACTIONS(451),
        [anon_sym_try] = ACTIONS(451),
        [anon_sym_with] = ACTIONS(451),
        [anon_sym_def] = ACTIONS(451),
        [anon_sym_class] = ACTIONS(451),
        [anon_sym_AT] = ACTIONS(453),
        [sym_number] = ACTIONS(451),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(453),
    },
    [232] = {
        [sym__simple_statement] = STATE(159),
        [sym_print_statement] = STATE(160),
        [sym_expression_statement] = STATE(160),
        [sym_return_statement] = STATE(160),
        [sym__suite] = STATE(233),
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(36),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(461),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(463),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(465),
    },
    [233] = {
        [sym_except_clause] = STATE(236),
        [sym_finally_clause] = STATE(237),
        [aux_sym_try_statement_repeat1] = STATE(238),
        [anon_sym_except] = ACTIONS(627),
        [anon_sym_finally] = ACTIONS(629),
        [sym_comment] = ACTIONS(57),
    },
    [234] = {
        [sym__expression] = STATE(248),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [235] = {
        [anon_sym_COLON] = ACTIONS(631),
        [sym_comment] = ACTIONS(57),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(477),
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_print] = ACTIONS(475),
        [anon_sym_return] = ACTIONS(475),
        [anon_sym_if] = ACTIONS(475),
        [anon_sym_else] = ACTIONS(475),
        [anon_sym_for] = ACTIONS(475),
        [anon_sym_while] = ACTIONS(475),
        [anon_sym_try] = ACTIONS(475),
        [anon_sym_except] = ACTIONS(475),
        [anon_sym_finally] = ACTIONS(475),
        [anon_sym_with] = ACTIONS(475),
        [anon_sym_def] = ACTIONS(475),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(477),
        [sym_number] = ACTIONS(475),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(477),
    },
    [237] = {
        [ts_builtin_sym_end] = ACTIONS(483),
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(483),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(485),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(483),
    },
    [238] = {
        [sym_else_clause] = STATE(240),
        [sym_except_clause] = STATE(241),
        [sym_finally_clause] = STATE(242),
        [ts_builtin_sym_end] = ACTIONS(483),
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(637),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(483),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(485),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(483),
    },
    [239] = {
        [anon_sym_COLON] = ACTIONS(639),
        [sym_comment] = ACTIONS(57),
    },
    [240] = {
        [sym_finally_clause] = STATE(243),
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_finally] = ACTIONS(637),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(497),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(497),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(503),
        [anon_sym_SEMI] = ACTIONS(503),
        [anon_sym_print] = ACTIONS(501),
        [anon_sym_return] = ACTIONS(501),
        [anon_sym_if] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_while] = ACTIONS(501),
        [anon_sym_try] = ACTIONS(501),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(501),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_AT] = ACTIONS(503),
        [sym_number] = ACTIONS(501),
        [sym_identifier] = ACTIONS(505),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(503),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(497),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(497),
    },
    [243] = {
        [ts_builtin_sym_end] = ACTIONS(509),
        [anon_sym_SEMI] = ACTIONS(509),
        [anon_sym_print] = ACTIONS(507),
        [anon_sym_return] = ACTIONS(507),
        [anon_sym_if] = ACTIONS(507),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(507),
        [anon_sym_with] = ACTIONS(507),
        [anon_sym_def] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_AT] = ACTIONS(509),
        [sym_number] = ACTIONS(507),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(509),
    },
    [244] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(245),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [245] = {
        [ts_builtin_sym_end] = ACTIONS(515),
        [anon_sym_SEMI] = ACTIONS(515),
        [anon_sym_print] = ACTIONS(513),
        [anon_sym_return] = ACTIONS(513),
        [anon_sym_if] = ACTIONS(513),
        [anon_sym_for] = ACTIONS(513),
        [anon_sym_while] = ACTIONS(513),
        [anon_sym_try] = ACTIONS(513),
        [anon_sym_finally] = ACTIONS(513),
        [anon_sym_with] = ACTIONS(513),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_AT] = ACTIONS(515),
        [sym_number] = ACTIONS(513),
        [sym_identifier] = ACTIONS(517),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(515),
    },
    [246] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(247),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(521),
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_print] = ACTIONS(519),
        [anon_sym_return] = ACTIONS(519),
        [anon_sym_if] = ACTIONS(519),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(519),
        [anon_sym_try] = ACTIONS(519),
        [anon_sym_with] = ACTIONS(519),
        [anon_sym_def] = ACTIONS(519),
        [anon_sym_class] = ACTIONS(519),
        [anon_sym_AT] = ACTIONS(521),
        [sym_number] = ACTIONS(519),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(521),
    },
    [248] = {
        [anon_sym_COMMA] = ACTIONS(641),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_as] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [249] = {
        [sym__expression] = STATE(251),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [250] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(254),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [251] = {
        [anon_sym_COLON] = ACTIONS(645),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [252] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(253),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(533),
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_else] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_except] = ACTIONS(531),
        [anon_sym_finally] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [anon_sym_AT] = ACTIONS(533),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(535),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(533),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_else] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_except] = ACTIONS(537),
        [anon_sym_finally] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [anon_sym_AT] = ACTIONS(539),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(541),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(539),
    },
    [255] = {
        [anon_sym_COLON] = ACTIONS(647),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [256] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(257),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [257] = {
        [sym_else_clause] = STATE(258),
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [anon_sym_print] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_if] = ACTIONS(547),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_while] = ACTIONS(547),
        [anon_sym_try] = ACTIONS(547),
        [anon_sym_with] = ACTIONS(547),
        [anon_sym_def] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_AT] = ACTIONS(549),
        [sym_number] = ACTIONS(547),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(549),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(555),
        [anon_sym_SEMI] = ACTIONS(555),
        [anon_sym_print] = ACTIONS(553),
        [anon_sym_return] = ACTIONS(553),
        [anon_sym_if] = ACTIONS(553),
        [anon_sym_for] = ACTIONS(553),
        [anon_sym_while] = ACTIONS(553),
        [anon_sym_try] = ACTIONS(553),
        [anon_sym_with] = ACTIONS(553),
        [anon_sym_def] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_AT] = ACTIONS(555),
        [sym_number] = ACTIONS(553),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(555),
    },
    [259] = {
        [anon_sym_in] = ACTIONS(649),
        [sym_comment] = ACTIONS(57),
    },
    [260] = {
        [sym_expression_list] = STATE(261),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [261] = {
        [anon_sym_COLON] = ACTIONS(651),
        [sym_comment] = ACTIONS(57),
    },
    [262] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(263),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [263] = {
        [sym_else_clause] = STATE(264),
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_SEMI] = ACTIONS(565),
        [anon_sym_print] = ACTIONS(563),
        [anon_sym_return] = ACTIONS(563),
        [anon_sym_if] = ACTIONS(563),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(563),
        [anon_sym_while] = ACTIONS(563),
        [anon_sym_try] = ACTIONS(563),
        [anon_sym_with] = ACTIONS(563),
        [anon_sym_def] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_AT] = ACTIONS(565),
        [sym_number] = ACTIONS(563),
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(565),
    },
    [264] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_if] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_while] = ACTIONS(569),
        [anon_sym_try] = ACTIONS(569),
        [anon_sym_with] = ACTIONS(569),
        [anon_sym_def] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_AT] = ACTIONS(571),
        [sym_number] = ACTIONS(569),
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(571),
    },
    [265] = {
        [anon_sym_COLON] = ACTIONS(653),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [266] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(267),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [267] = {
        [sym_elif_clause] = STATE(269),
        [sym_else_clause] = STATE(270),
        [aux_sym_if_statement_repeat1] = STATE(271),
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_SEMI] = ACTIONS(581),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_elif] = ACTIONS(655),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(581),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(583),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(581),
    },
    [268] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [269] = {
        [ts_builtin_sym_end] = ACTIONS(587),
        [anon_sym_SEMI] = ACTIONS(587),
        [anon_sym_print] = ACTIONS(585),
        [anon_sym_return] = ACTIONS(585),
        [anon_sym_if] = ACTIONS(585),
        [anon_sym_elif] = ACTIONS(585),
        [anon_sym_else] = ACTIONS(585),
        [anon_sym_for] = ACTIONS(585),
        [anon_sym_while] = ACTIONS(585),
        [anon_sym_try] = ACTIONS(585),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(585),
        [anon_sym_AT] = ACTIONS(587),
        [sym_number] = ACTIONS(585),
        [sym_identifier] = ACTIONS(589),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(587),
    },
    [270] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(593),
    },
    [271] = {
        [sym_elif_clause] = STATE(272),
        [sym_else_clause] = STATE(273),
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_elif] = ACTIONS(655),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(593),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_elif] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(599),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(605),
    },
    [274] = {
        [anon_sym_COLON] = ACTIONS(657),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [275] = {
        [sym__simple_statement] = STATE(61),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__suite] = STATE(276),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(229),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_elif] = ACTIONS(611),
        [anon_sym_else] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(613),
    },
    [277] = {
        [sym__expression] = STATE(507),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [278] = {
        [sym_with_item] = STATE(505),
        [sym_dictionary_splat_parameter] = STATE(421),
        [sym__expression] = STATE(506),
        [sym_binary_operator] = STATE(299),
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(663),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(667),
        [sym_comment] = ACTIONS(57),
    },
    [279] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(497),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [280] = {
        [sym__expression] = STATE(493),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [281] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(320),
        [sym__expression] = STATE(371),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(673),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [282] = {
        [sym__expression] = STATE(475),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [283] = {
        [anon_sym_COLON] = ACTIONS(679),
        [sym_comment] = ACTIONS(57),
    },
    [284] = {
        [sym_expression_list] = STATE(458),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [285] = {
        [sym_expression_list] = STATE(457),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [286] = {
        [sym__expression] = STATE(453),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [287] = {
        [anon_sym_COLON] = ACTIONS(681),
        [sym_comment] = ACTIONS(57),
    },
    [288] = {
        [sym__expression] = STATE(446),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [289] = {
        [sym__expression] = STATE(445),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [290] = {
        [anon_sym_COLON] = ACTIONS(683),
        [sym_comment] = ACTIONS(57),
    },
    [291] = {
        [sym_with_item] = STATE(442),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [292] = {
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(57),
    },
    [293] = {
        [sym_default_parameter] = STATE(118),
        [sym_list_splat_parameter] = STATE(119),
        [sym_dictionary_splat_parameter] = STATE(120),
        [sym_expression_list] = STATE(432),
        [sym__expression] = STATE(439),
        [sym_binary_operator] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(121),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(687),
        [sym_comment] = ACTIONS(57),
    },
    [294] = {
        [anon_sym_COLON] = ACTIONS(689),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(696),
    },
    [295] = {
        [anon_sym_STAR] = ACTIONS(379),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(57),
    },
    [296] = {
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(57),
    },
    [297] = {
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(57),
    },
    [298] = {
        [sym__expression] = STATE(434),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_COMMA] = ACTIONS(101),
        [anon_sym_return] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_COLON] = ACTIONS(101),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_in] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_as] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(101),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [300] = {
        [sym_parameters] = STATE(315),
        [aux_sym_dotted_name_repeat1] = STATE(48),
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_COMMA] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_COLON] = ACTIONS(709),
        [anon_sym_elif] = ACTIONS(103),
        [anon_sym_else] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_in] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_except] = ACTIONS(103),
        [anon_sym_as] = ACTIONS(103),
        [anon_sym_finally] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_LPAREN] = ACTIONS(712),
        [anon_sym_RPAREN] = ACTIONS(717),
        [anon_sym_EQ] = ACTIONS(387),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_DOT] = ACTIONS(722),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(726),
        [sym__dedent] = ACTIONS(101),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(731),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(734),
        [anon_sym_class] = ACTIONS(734),
        [anon_sym_AT] = ACTIONS(738),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [302] = {
        [sym__statement] = STATE(71),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_module_repeat1] = STATE(339),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(742),
    },
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(744),
        [anon_sym_SEMI] = ACTIONS(744),
        [anon_sym_print] = ACTIONS(747),
        [anon_sym_return] = ACTIONS(747),
        [anon_sym_if] = ACTIONS(747),
        [anon_sym_elif] = ACTIONS(747),
        [anon_sym_else] = ACTIONS(747),
        [anon_sym_for] = ACTIONS(747),
        [anon_sym_while] = ACTIONS(747),
        [anon_sym_try] = ACTIONS(747),
        [anon_sym_except] = ACTIONS(747),
        [anon_sym_finally] = ACTIONS(747),
        [anon_sym_with] = ACTIONS(747),
        [anon_sym_def] = ACTIONS(747),
        [anon_sym_class] = ACTIONS(747),
        [anon_sym_AT] = ACTIONS(744),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(750),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(744),
        [sym__dedent] = ACTIONS(744),
    },
    [304] = {
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(756),
        [anon_sym_return] = ACTIONS(756),
        [anon_sym_if] = ACTIONS(756),
        [anon_sym_for] = ACTIONS(756),
        [anon_sym_while] = ACTIONS(756),
        [anon_sym_try] = ACTIONS(756),
        [anon_sym_with] = ACTIONS(756),
        [anon_sym_def] = ACTIONS(756),
        [anon_sym_class] = ACTIONS(756),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(756),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(753),
        [sym__dedent] = ACTIONS(753),
    },
    [305] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
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
        [anon_sym_AT] = ACTIONS(255),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(762),
        [sym__dedent] = ACTIONS(255),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_print] = ACTIONS(119),
        [anon_sym_return] = ACTIONS(119),
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
        [anon_sym_class] = ACTIONS(119),
        [anon_sym_AT] = ACTIONS(117),
        [sym_number] = ACTIONS(119),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(117),
        [sym__dedent] = ACTIONS(117),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_return] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(129),
        [sym__dedent] = ACTIONS(129),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(768),
        [anon_sym_return] = ACTIONS(768),
        [anon_sym_if] = ACTIONS(768),
        [anon_sym_elif] = ACTIONS(768),
        [anon_sym_else] = ACTIONS(768),
        [anon_sym_for] = ACTIONS(768),
        [anon_sym_while] = ACTIONS(768),
        [anon_sym_try] = ACTIONS(768),
        [anon_sym_with] = ACTIONS(768),
        [anon_sym_def] = ACTIONS(768),
        [anon_sym_class] = ACTIONS(768),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(768),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(765),
        [sym__dedent] = ACTIONS(765),
    },
    [310] = {
        [sym_finally_clause] = STATE(355),
        [ts_builtin_sym_end] = ACTIONS(774),
        [anon_sym_SEMI] = ACTIONS(774),
        [anon_sym_print] = ACTIONS(780),
        [anon_sym_return] = ACTIONS(780),
        [anon_sym_if] = ACTIONS(780),
        [anon_sym_for] = ACTIONS(780),
        [anon_sym_while] = ACTIONS(780),
        [anon_sym_try] = ACTIONS(780),
        [anon_sym_finally] = ACTIONS(786),
        [anon_sym_with] = ACTIONS(780),
        [anon_sym_def] = ACTIONS(780),
        [anon_sym_class] = ACTIONS(780),
        [anon_sym_AT] = ACTIONS(774),
        [sym_number] = ACTIONS(780),
        [sym_identifier] = ACTIONS(788),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(774),
        [sym__dedent] = ACTIONS(774),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(794),
        [anon_sym_SEMI] = ACTIONS(794),
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_else] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_except] = ACTIONS(797),
        [anon_sym_finally] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(794),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(800),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(794),
        [sym__dedent] = ACTIONS(794),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(803),
        [anon_sym_SEMI] = ACTIONS(803),
        [anon_sym_print] = ACTIONS(807),
        [anon_sym_return] = ACTIONS(807),
        [anon_sym_if] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(807),
        [anon_sym_while] = ACTIONS(807),
        [anon_sym_try] = ACTIONS(807),
        [anon_sym_with] = ACTIONS(807),
        [anon_sym_def] = ACTIONS(807),
        [anon_sym_class] = ACTIONS(807),
        [anon_sym_AT] = ACTIONS(803),
        [sym_number] = ACTIONS(807),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(803),
        [sym__dedent] = ACTIONS(803),
    },
    [313] = {
        [aux_sym_with_statement_repeat1] = STATE(327),
        [anon_sym_COMMA] = ACTIONS(815),
        [anon_sym_COLON] = ACTIONS(819),
        [sym_comment] = ACTIONS(57),
    },
    [314] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_SEMI] = ACTIONS(823),
        [anon_sym_print] = ACTIONS(826),
        [anon_sym_return] = ACTIONS(826),
        [anon_sym_if] = ACTIONS(826),
        [anon_sym_for] = ACTIONS(826),
        [anon_sym_while] = ACTIONS(826),
        [anon_sym_try] = ACTIONS(826),
        [anon_sym_with] = ACTIONS(826),
        [anon_sym_def] = ACTIONS(826),
        [anon_sym_class] = ACTIONS(826),
        [anon_sym_AT] = ACTIONS(823),
        [sym_number] = ACTIONS(826),
        [sym_identifier] = ACTIONS(829),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(823),
        [sym__dedent] = ACTIONS(823),
    },
    [315] = {
        [anon_sym_COLON] = ACTIONS(832),
        [sym_comment] = ACTIONS(57),
    },
    [316] = {
        [anon_sym_COMMA] = ACTIONS(834),
        [anon_sym_RPAREN] = ACTIONS(836),
        [sym_comment] = ACTIONS(57),
    },
    [317] = {
        [anon_sym_COMMA] = ACTIONS(838),
        [anon_sym_RPAREN] = ACTIONS(836),
        [sym_comment] = ACTIONS(57),
    },
    [318] = {
        [anon_sym_RPAREN] = ACTIONS(840),
        [sym_comment] = ACTIONS(57),
    },
    [319] = {
        [anon_sym_def] = ACTIONS(842),
        [anon_sym_class] = ACTIONS(842),
        [anon_sym_AT] = ACTIONS(842),
        [sym_comment] = ACTIONS(57),
    },
    [320] = {
        [sym_elif_clause] = STATE(374),
        [sym_else_clause] = STATE(415),
        [sym_except_clause] = STATE(416),
        [sym_finally_clause] = STATE(417),
        [aux_sym_if_statement_repeat1] = STATE(325),
        [aux_sym_try_statement_repeat1] = STATE(326),
        [ts_builtin_sym_end] = ACTIONS(845),
        [anon_sym_SEMI] = ACTIONS(845),
        [anon_sym_print] = ACTIONS(859),
        [anon_sym_return] = ACTIONS(859),
        [anon_sym_if] = ACTIONS(859),
        [anon_sym_elif] = ACTIONS(873),
        [anon_sym_else] = ACTIONS(876),
        [anon_sym_for] = ACTIONS(859),
        [anon_sym_while] = ACTIONS(859),
        [anon_sym_try] = ACTIONS(859),
        [anon_sym_except] = ACTIONS(881),
        [anon_sym_finally] = ACTIONS(885),
        [anon_sym_with] = ACTIONS(859),
        [anon_sym_def] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(859),
        [anon_sym_AT] = ACTIONS(845),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(890),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(845),
        [sym__dedent] = ACTIONS(845),
    },
    [321] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_return] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(904),
        [anon_sym_elif] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(906),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(908),
        [anon_sym_class] = ACTIONS(317),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(319),
        [sym__dedent] = ACTIONS(319),
    },
    [322] = {
        [aux_sym_print_statement_repeat1] = STATE(324),
        [ts_builtin_sym_end] = ACTIONS(910),
        [anon_sym_SEMI] = ACTIONS(910),
        [anon_sym_print] = ACTIONS(917),
        [anon_sym_COMMA] = ACTIONS(924),
        [anon_sym_return] = ACTIONS(917),
        [anon_sym_if] = ACTIONS(917),
        [anon_sym_COLON] = ACTIONS(932),
        [anon_sym_elif] = ACTIONS(917),
        [anon_sym_else] = ACTIONS(917),
        [anon_sym_for] = ACTIONS(917),
        [anon_sym_in] = ACTIONS(940),
        [anon_sym_while] = ACTIONS(917),
        [anon_sym_try] = ACTIONS(917),
        [anon_sym_except] = ACTIONS(917),
        [anon_sym_as] = ACTIONS(945),
        [anon_sym_finally] = ACTIONS(917),
        [anon_sym_with] = ACTIONS(917),
        [anon_sym_def] = ACTIONS(917),
        [anon_sym_RPAREN] = ACTIONS(948),
        [anon_sym_class] = ACTIONS(917),
        [anon_sym_AT] = ACTIONS(910),
        [anon_sym_PLUS] = ACTIONS(955),
        [sym_number] = ACTIONS(917),
        [sym_identifier] = ACTIONS(958),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(910),
        [sym__dedent] = ACTIONS(910),
    },
    [323] = {
        [sym__statement] = STATE(365),
        [sym__simple_statement] = STATE(366),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(307),
        [sym_if_statement] = STATE(308),
        [sym_for_statement] = STATE(308),
        [sym_while_statement] = STATE(308),
        [sym_try_statement] = STATE(308),
        [sym_with_statement] = STATE(308),
        [sym_function_definition] = STATE(308),
        [sym_class_definition] = STATE(308),
        [sym_decorated_definition] = STATE(308),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_decorated_definition_repeat1] = STATE(328),
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(965),
        [anon_sym_for] = ACTIONS(967),
        [anon_sym_while] = ACTIONS(969),
        [anon_sym_try] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(973),
        [anon_sym_def] = ACTIONS(975),
        [anon_sym_class] = ACTIONS(977),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(979),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(981),
        [anon_sym_SEMI] = ACTIONS(981),
        [anon_sym_print] = ACTIONS(984),
        [anon_sym_COMMA] = ACTIONS(987),
        [anon_sym_return] = ACTIONS(984),
        [anon_sym_if] = ACTIONS(984),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(984),
        [anon_sym_else] = ACTIONS(984),
        [anon_sym_for] = ACTIONS(984),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(984),
        [anon_sym_try] = ACTIONS(984),
        [anon_sym_except] = ACTIONS(984),
        [anon_sym_finally] = ACTIONS(984),
        [anon_sym_with] = ACTIONS(984),
        [anon_sym_def] = ACTIONS(984),
        [anon_sym_RPAREN] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(984),
        [anon_sym_AT] = ACTIONS(981),
        [sym_number] = ACTIONS(984),
        [sym_identifier] = ACTIONS(992),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(981),
        [sym__dedent] = ACTIONS(981),
    },
    [325] = {
        [sym_elif_clause] = STATE(357),
        [sym_else_clause] = STATE(358),
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_elif] = ACTIONS(995),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(593),
        [sym__dedent] = ACTIONS(593),
    },
    [326] = {
        [sym_else_clause] = STATE(352),
        [sym_except_clause] = STATE(353),
        [sym_finally_clause] = STATE(354),
        [ts_builtin_sym_end] = ACTIONS(483),
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_else] = ACTIONS(999),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_except] = ACTIONS(1001),
        [anon_sym_finally] = ACTIONS(786),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(483),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(485),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(483),
        [sym__dedent] = ACTIONS(483),
    },
    [327] = {
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_COLON] = ACTIONS(1003),
        [sym_comment] = ACTIONS(57),
    },
    [328] = {
        [sym_function_definition] = STATE(329),
        [sym_class_definition] = STATE(329),
        [sym_decorator] = STATE(24),
        [anon_sym_def] = ACTIONS(1005),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(85),
        [sym_comment] = ACTIONS(57),
    },
    [329] = {
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
        [anon_sym_AT] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [330] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(334),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [331] = {
        [sym__expression] = STATE(350),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [332] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(342),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [333] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
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
        [anon_sym_AT] = ACTIONS(255),
        [sym_number] = ACTIONS(257),
        [sym_identifier] = ACTIONS(259),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(255),
        [sym__dedent] = ACTIONS(255),
    },
    [334] = {
        [ts_builtin_sym_end] = ACTIONS(445),
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_print] = ACTIONS(443),
        [anon_sym_return] = ACTIONS(443),
        [anon_sym_if] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_while] = ACTIONS(443),
        [anon_sym_try] = ACTIONS(443),
        [anon_sym_with] = ACTIONS(443),
        [anon_sym_def] = ACTIONS(443),
        [anon_sym_class] = ACTIONS(443),
        [anon_sym_AT] = ACTIONS(445),
        [sym_number] = ACTIONS(443),
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(445),
        [sym__dedent] = ACTIONS(445),
    },
    [335] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(1013),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [336] = {
        [sym__expression] = STATE(337),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1015),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [338] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(275),
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
        [anon_sym_AT] = ACTIONS(273),
        [sym_number] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [339] = {
        [sym__statement] = STATE(79),
        [sym__simple_statement] = STATE(72),
        [sym_print_statement] = STATE(16),
        [sym_expression_statement] = STATE(16),
        [sym_return_statement] = STATE(16),
        [sym__compound_statement] = STATE(73),
        [sym_if_statement] = STATE(74),
        [sym_for_statement] = STATE(74),
        [sym_while_statement] = STATE(74),
        [sym_try_statement] = STATE(74),
        [sym_with_statement] = STATE(74),
        [sym_function_definition] = STATE(74),
        [sym_class_definition] = STATE(74),
        [sym_decorated_definition] = STATE(74),
        [sym_decorator] = STATE(19),
        [sym__expression] = STATE(20),
        [sym_binary_operator] = STATE(12),
        [aux_sym_decorated_definition_repeat1] = STATE(76),
        [anon_sym_print] = ACTIONS(67),
        [anon_sym_return] = ACTIONS(69),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(245),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(85),
        [sym_number] = ACTIONS(87),
        [sym_identifier] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
        [sym__dedent] = ACTIONS(979),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_print] = ACTIONS(289),
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
        [anon_sym_AT] = ACTIONS(287),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(287),
        [sym__dedent] = ACTIONS(287),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_return] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_elif] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(317),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(317),
        [sym_identifier] = ACTIONS(321),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(319),
        [sym__dedent] = ACTIONS(319),
    },
    [342] = {
        [aux_sym_print_statement_repeat1] = STATE(345),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(1018),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(1020),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [343] = {
        [sym__expression] = STATE(349),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [344] = {
        [sym__expression] = STATE(348),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(1022),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [346] = {
        [sym__expression] = STATE(347),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1020),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [348] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1024),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1020),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [350] = {
        [aux_sym_print_statement_repeat1] = STATE(351),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(1018),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(1020),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [351] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(1022),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [352] = {
        [sym_finally_clause] = STATE(355),
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_finally] = ACTIONS(786),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(497),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(497),
        [sym__dedent] = ACTIONS(497),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(503),
        [anon_sym_SEMI] = ACTIONS(503),
        [anon_sym_print] = ACTIONS(501),
        [anon_sym_return] = ACTIONS(501),
        [anon_sym_if] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_while] = ACTIONS(501),
        [anon_sym_try] = ACTIONS(501),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(501),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_AT] = ACTIONS(503),
        [sym_number] = ACTIONS(501),
        [sym_identifier] = ACTIONS(505),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(503),
        [sym__dedent] = ACTIONS(503),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(497),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(497),
        [sym__dedent] = ACTIONS(497),
    },
    [355] = {
        [ts_builtin_sym_end] = ACTIONS(509),
        [anon_sym_SEMI] = ACTIONS(509),
        [anon_sym_print] = ACTIONS(507),
        [anon_sym_return] = ACTIONS(507),
        [anon_sym_if] = ACTIONS(507),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(507),
        [anon_sym_with] = ACTIONS(507),
        [anon_sym_def] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_AT] = ACTIONS(509),
        [sym_number] = ACTIONS(507),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(509),
        [sym__dedent] = ACTIONS(509),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(1027),
        [sym_comment] = ACTIONS(57),
    },
    [357] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_elif] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(599),
        [sym__dedent] = ACTIONS(599),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(605),
        [sym__dedent] = ACTIONS(605),
    },
    [359] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(360),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(515),
        [anon_sym_SEMI] = ACTIONS(515),
        [anon_sym_print] = ACTIONS(513),
        [anon_sym_return] = ACTIONS(513),
        [anon_sym_if] = ACTIONS(513),
        [anon_sym_for] = ACTIONS(513),
        [anon_sym_while] = ACTIONS(513),
        [anon_sym_try] = ACTIONS(513),
        [anon_sym_finally] = ACTIONS(513),
        [anon_sym_with] = ACTIONS(513),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_AT] = ACTIONS(515),
        [sym_number] = ACTIONS(513),
        [sym_identifier] = ACTIONS(517),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(515),
        [sym__dedent] = ACTIONS(515),
    },
    [361] = {
        [sym__expression] = STATE(362),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_in] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_except] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1029),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [363] = {
        [sym__expression] = STATE(364),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_COLON] = ACTIONS(169),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_in] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_RPAREN] = ACTIONS(169),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1031),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_print] = ACTIONS(165),
        [anon_sym_return] = ACTIONS(165),
        [anon_sym_if] = ACTIONS(165),
        [anon_sym_for] = ACTIONS(165),
        [anon_sym_while] = ACTIONS(165),
        [anon_sym_try] = ACTIONS(165),
        [anon_sym_with] = ACTIONS(165),
        [anon_sym_def] = ACTIONS(165),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_AT] = ACTIONS(163),
        [sym_number] = ACTIONS(165),
        [sym_identifier] = ACTIONS(167),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(163),
        [sym__dedent] = ACTIONS(163),
    },
    [366] = {
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(1034),
    },
    [367] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(175),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [368] = {
        [sym__expression] = STATE(376),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [369] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(370),
        [sym__expression] = STATE(371),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(673),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [370] = {
        [sym_elif_clause] = STATE(374),
        [sym_else_clause] = STATE(375),
        [aux_sym_if_statement_repeat1] = STATE(325),
        [ts_builtin_sym_end] = ACTIONS(1036),
        [anon_sym_SEMI] = ACTIONS(1036),
        [anon_sym_print] = ACTIONS(1042),
        [anon_sym_return] = ACTIONS(1042),
        [anon_sym_if] = ACTIONS(1042),
        [anon_sym_elif] = ACTIONS(873),
        [anon_sym_else] = ACTIONS(876),
        [anon_sym_for] = ACTIONS(1042),
        [anon_sym_while] = ACTIONS(1042),
        [anon_sym_try] = ACTIONS(1042),
        [anon_sym_except] = ACTIONS(1048),
        [anon_sym_finally] = ACTIONS(1048),
        [anon_sym_with] = ACTIONS(1042),
        [anon_sym_def] = ACTIONS(1042),
        [anon_sym_class] = ACTIONS(1042),
        [anon_sym_AT] = ACTIONS(1036),
        [sym_number] = ACTIONS(1042),
        [sym_identifier] = ACTIONS(1051),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(1036),
        [sym__dedent] = ACTIONS(1036),
    },
    [371] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
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
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(1057),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [372] = {
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1059),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [374] = {
        [ts_builtin_sym_end] = ACTIONS(587),
        [anon_sym_SEMI] = ACTIONS(587),
        [anon_sym_print] = ACTIONS(585),
        [anon_sym_return] = ACTIONS(585),
        [anon_sym_if] = ACTIONS(585),
        [anon_sym_elif] = ACTIONS(585),
        [anon_sym_else] = ACTIONS(585),
        [anon_sym_for] = ACTIONS(585),
        [anon_sym_while] = ACTIONS(585),
        [anon_sym_try] = ACTIONS(585),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(585),
        [anon_sym_AT] = ACTIONS(587),
        [sym_number] = ACTIONS(585),
        [sym_identifier] = ACTIONS(589),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(587),
        [sym__dedent] = ACTIONS(587),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(1062),
        [anon_sym_SEMI] = ACTIONS(1062),
        [anon_sym_print] = ACTIONS(1065),
        [anon_sym_return] = ACTIONS(1065),
        [anon_sym_if] = ACTIONS(1065),
        [anon_sym_for] = ACTIONS(1065),
        [anon_sym_while] = ACTIONS(1065),
        [anon_sym_try] = ACTIONS(1065),
        [anon_sym_with] = ACTIONS(1065),
        [anon_sym_def] = ACTIONS(1065),
        [anon_sym_class] = ACTIONS(1065),
        [anon_sym_AT] = ACTIONS(1062),
        [sym_number] = ACTIONS(1065),
        [sym_identifier] = ACTIONS(1068),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(1062),
        [sym__dedent] = ACTIONS(1062),
    },
    [376] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(1071),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_except] = ACTIONS(339),
        [anon_sym_finally] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1029),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [377] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(380),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1074),
        [anon_sym_return] = ACTIONS(1076),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [378] = {
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [379] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(533),
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_print] = ACTIONS(531),
        [anon_sym_return] = ACTIONS(531),
        [anon_sym_if] = ACTIONS(531),
        [anon_sym_else] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_while] = ACTIONS(531),
        [anon_sym_try] = ACTIONS(531),
        [anon_sym_except] = ACTIONS(531),
        [anon_sym_finally] = ACTIONS(531),
        [anon_sym_with] = ACTIONS(531),
        [anon_sym_def] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(531),
        [anon_sym_AT] = ACTIONS(533),
        [sym_number] = ACTIONS(531),
        [sym_identifier] = ACTIONS(535),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(533),
        [sym__dedent] = ACTIONS(533),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_except] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(1078),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [382] = {
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1080),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [384] = {
        [aux_sym_print_statement_repeat1] = STATE(387),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(1083),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(1085),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [385] = {
        [sym__expression] = STATE(391),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [386] = {
        [sym__expression] = STATE(390),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(1087),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [388] = {
        [sym__expression] = STATE(389),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_except] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1085),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1089),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_except] = ACTIONS(339),
        [anon_sym_finally] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1085),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [392] = {
        [aux_sym_print_statement_repeat1] = STATE(393),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(1083),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(1085),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [393] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(1087),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [394] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(400),
        [sym__expression] = STATE(401),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1092),
        [anon_sym_return] = ACTIONS(1094),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [395] = {
        [anon_sym_COLON] = ACTIONS(1096),
        [sym_comment] = ACTIONS(57),
    },
    [396] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(397),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(263),
        [anon_sym_return] = ACTIONS(263),
        [anon_sym_if] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_while] = ACTIONS(263),
        [anon_sym_try] = ACTIONS(263),
        [anon_sym_with] = ACTIONS(263),
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_AT] = ACTIONS(261),
        [sym_number] = ACTIONS(263),
        [sym_identifier] = ACTIONS(265),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(261),
        [sym__dedent] = ACTIONS(261),
    },
    [398] = {
        [sym__expression] = STATE(413),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [399] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(405),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [400] = {
        [sym_else_clause] = STATE(404),
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_SEMI] = ACTIONS(565),
        [anon_sym_print] = ACTIONS(563),
        [anon_sym_return] = ACTIONS(563),
        [anon_sym_if] = ACTIONS(563),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(563),
        [anon_sym_while] = ACTIONS(563),
        [anon_sym_try] = ACTIONS(563),
        [anon_sym_with] = ACTIONS(563),
        [anon_sym_def] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_AT] = ACTIONS(565),
        [sym_number] = ACTIONS(563),
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(565),
        [sym__dedent] = ACTIONS(565),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(1098),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [402] = {
        [sym__expression] = STATE(403),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [403] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1100),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_if] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_while] = ACTIONS(569),
        [anon_sym_try] = ACTIONS(569),
        [anon_sym_with] = ACTIONS(569),
        [anon_sym_def] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_AT] = ACTIONS(571),
        [sym_number] = ACTIONS(569),
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(571),
        [sym__dedent] = ACTIONS(571),
    },
    [405] = {
        [aux_sym_print_statement_repeat1] = STATE(408),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(1105),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [406] = {
        [sym__expression] = STATE(412),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [407] = {
        [sym__expression] = STATE(411),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [408] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [409] = {
        [sym__expression] = STATE(410),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [410] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1105),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [411] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1109),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [412] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1105),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [413] = {
        [aux_sym_print_statement_repeat1] = STATE(414),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(1105),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [414] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [415] = {
        [ts_builtin_sym_end] = ACTIONS(1112),
        [anon_sym_SEMI] = ACTIONS(1112),
        [anon_sym_print] = ACTIONS(1116),
        [anon_sym_return] = ACTIONS(1116),
        [anon_sym_if] = ACTIONS(1116),
        [anon_sym_for] = ACTIONS(1116),
        [anon_sym_while] = ACTIONS(1116),
        [anon_sym_try] = ACTIONS(1116),
        [anon_sym_with] = ACTIONS(1116),
        [anon_sym_def] = ACTIONS(1116),
        [anon_sym_class] = ACTIONS(1116),
        [anon_sym_AT] = ACTIONS(1112),
        [sym_number] = ACTIONS(1116),
        [sym_identifier] = ACTIONS(1120),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(1112),
        [sym__dedent] = ACTIONS(1112),
    },
    [416] = {
        [ts_builtin_sym_end] = ACTIONS(477),
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_print] = ACTIONS(475),
        [anon_sym_return] = ACTIONS(475),
        [anon_sym_if] = ACTIONS(475),
        [anon_sym_else] = ACTIONS(475),
        [anon_sym_for] = ACTIONS(475),
        [anon_sym_while] = ACTIONS(475),
        [anon_sym_try] = ACTIONS(475),
        [anon_sym_except] = ACTIONS(475),
        [anon_sym_finally] = ACTIONS(475),
        [anon_sym_with] = ACTIONS(475),
        [anon_sym_def] = ACTIONS(475),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(477),
        [sym_number] = ACTIONS(475),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(477),
        [sym__dedent] = ACTIONS(477),
    },
    [417] = {
        [ts_builtin_sym_end] = ACTIONS(483),
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(483),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(485),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(483),
        [sym__dedent] = ACTIONS(483),
    },
    [418] = {
        [anon_sym_COLON] = ACTIONS(1124),
        [sym_comment] = ACTIONS(57),
    },
    [419] = {
        [sym_dictionary_splat_parameter] = STATE(421),
        [anon_sym_STAR] = ACTIONS(401),
        [sym_comment] = ACTIONS(57),
    },
    [420] = {
        [anon_sym_COLON] = ACTIONS(1129),
        [sym_comment] = ACTIONS(57),
    },
    [421] = {
        [anon_sym_RPAREN] = ACTIONS(1132),
        [sym_comment] = ACTIONS(57),
    },
    [422] = {
        [anon_sym_COLON] = ACTIONS(1134),
        [sym_comment] = ACTIONS(57),
    },
    [423] = {
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(1137),
        [sym_identifier] = ACTIONS(1140),
        [sym_comment] = ACTIONS(57),
    },
    [424] = {
        [anon_sym_COLON] = ACTIONS(1143),
        [sym_comment] = ACTIONS(57),
    },
    [425] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(426),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [426] = {
        [ts_builtin_sym_end] = ACTIONS(373),
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_print] = ACTIONS(371),
        [anon_sym_return] = ACTIONS(371),
        [anon_sym_if] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_while] = ACTIONS(371),
        [anon_sym_try] = ACTIONS(371),
        [anon_sym_with] = ACTIONS(371),
        [anon_sym_def] = ACTIONS(371),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(373),
        [sym_number] = ACTIONS(371),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(373),
        [sym__dedent] = ACTIONS(373),
    },
    [427] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(428),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(453),
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_print] = ACTIONS(451),
        [anon_sym_return] = ACTIONS(451),
        [anon_sym_if] = ACTIONS(451),
        [anon_sym_for] = ACTIONS(451),
        [anon_sym_while] = ACTIONS(451),
        [anon_sym_try] = ACTIONS(451),
        [anon_sym_with] = ACTIONS(451),
        [anon_sym_def] = ACTIONS(451),
        [anon_sym_class] = ACTIONS(451),
        [anon_sym_AT] = ACTIONS(453),
        [sym_number] = ACTIONS(451),
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(453),
        [sym__dedent] = ACTIONS(453),
    },
    [429] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(433),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [430] = {
        [sym_default_parameter] = STATE(118),
        [sym_list_splat_parameter] = STATE(119),
        [sym_dictionary_splat_parameter] = STATE(120),
        [sym_expression_list] = STATE(432),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(121),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(687),
        [sym_comment] = ACTIONS(57),
    },
    [431] = {
        [anon_sym_COMMA] = ACTIONS(1146),
        [anon_sym_RPAREN] = ACTIONS(1149),
        [anon_sym_EQ] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(101),
        [sym_comment] = ACTIONS(57),
    },
    [432] = {
        [anon_sym_RPAREN] = ACTIONS(908),
        [sym_comment] = ACTIONS(57),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_print] = ACTIONS(355),
        [anon_sym_return] = ACTIONS(355),
        [anon_sym_if] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_while] = ACTIONS(355),
        [anon_sym_try] = ACTIONS(355),
        [anon_sym_with] = ACTIONS(355),
        [anon_sym_def] = ACTIONS(355),
        [anon_sym_class] = ACTIONS(355),
        [anon_sym_AT] = ACTIONS(357),
        [sym_number] = ACTIONS(355),
        [sym_identifier] = ACTIONS(359),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(357),
        [sym__dedent] = ACTIONS(357),
    },
    [434] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_COLON] = ACTIONS(169),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_in] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_as] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_RPAREN] = ACTIONS(169),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(955),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [435] = {
        [anon_sym_LPAREN] = ACTIONS(1152),
        [anon_sym_DOT] = ACTIONS(1152),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(1152),
    },
    [436] = {
        [anon_sym_COLON] = ACTIONS(1155),
        [anon_sym_LPAREN] = ACTIONS(1157),
        [sym_comment] = ACTIONS(57),
    },
    [437] = {
        [sym_expression_list] = STATE(432),
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [438] = {
        [anon_sym_COMMA] = ACTIONS(427),
        [anon_sym_RPAREN] = ACTIONS(1159),
        [sym_comment] = ACTIONS(57),
    },
    [439] = {
        [aux_sym_print_statement_repeat1] = STATE(440),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(1162),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [440] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_RPAREN] = ACTIONS(989),
        [sym_comment] = ACTIONS(57),
    },
    [441] = {
        [sym_parameters] = STATE(315),
        [anon_sym_LPAREN] = ACTIONS(361),
        [sym_comment] = ACTIONS(57),
    },
    [442] = {
        [aux_sym_with_statement_repeat1] = STATE(327),
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(1165),
        [sym_comment] = ACTIONS(57),
    },
    [443] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(444),
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1011),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [444] = {
        [ts_builtin_sym_end] = ACTIONS(521),
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_print] = ACTIONS(519),
        [anon_sym_return] = ACTIONS(519),
        [anon_sym_if] = ACTIONS(519),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(519),
        [anon_sym_try] = ACTIONS(519),
        [anon_sym_with] = ACTIONS(519),
        [anon_sym_def] = ACTIONS(519),
        [anon_sym_class] = ACTIONS(519),
        [anon_sym_AT] = ACTIONS(521),
        [sym_number] = ACTIONS(519),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(521),
        [sym__dedent] = ACTIONS(521),
    },
    [445] = {
        [anon_sym_COMMA] = ACTIONS(437),
        [anon_sym_COLON] = ACTIONS(1167),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [446] = {
        [anon_sym_COMMA] = ACTIONS(1170),
        [anon_sym_COLON] = ACTIONS(1172),
        [anon_sym_as] = ACTIONS(1170),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [447] = {
        [sym__expression] = STATE(449),
        [sym_binary_operator] = STATE(36),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [448] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(450),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1074),
        [anon_sym_return] = ACTIONS(1076),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [449] = {
        [anon_sym_COLON] = ACTIONS(1174),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [450] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_else] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_except] = ACTIONS(537),
        [anon_sym_finally] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [anon_sym_AT] = ACTIONS(539),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(541),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(539),
        [sym__dedent] = ACTIONS(539),
    },
    [451] = {
        [sym__simple_statement] = STATE(159),
        [sym_print_statement] = STATE(160),
        [sym_expression_statement] = STATE(160),
        [sym_return_statement] = STATE(160),
        [sym__suite] = STATE(452),
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(36),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(461),
        [sym_number] = ACTIONS(91),
        [sym_identifier] = ACTIONS(463),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(465),
    },
    [452] = {
        [sym_except_clause] = STATE(416),
        [sym_finally_clause] = STATE(417),
        [aux_sym_try_statement_repeat1] = STATE(326),
        [anon_sym_except] = ACTIONS(1176),
        [anon_sym_finally] = ACTIONS(1178),
        [sym_comment] = ACTIONS(57),
    },
    [453] = {
        [anon_sym_COLON] = ACTIONS(1180),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [454] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(455),
        [sym__expression] = STATE(401),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1092),
        [anon_sym_return] = ACTIONS(1094),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [455] = {
        [sym_else_clause] = STATE(456),
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [anon_sym_print] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_if] = ACTIONS(547),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_while] = ACTIONS(547),
        [anon_sym_try] = ACTIONS(547),
        [anon_sym_with] = ACTIONS(547),
        [anon_sym_def] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_AT] = ACTIONS(549),
        [sym_number] = ACTIONS(547),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(549),
        [sym__dedent] = ACTIONS(549),
    },
    [456] = {
        [ts_builtin_sym_end] = ACTIONS(555),
        [anon_sym_SEMI] = ACTIONS(555),
        [anon_sym_print] = ACTIONS(553),
        [anon_sym_return] = ACTIONS(553),
        [anon_sym_if] = ACTIONS(553),
        [anon_sym_for] = ACTIONS(553),
        [anon_sym_while] = ACTIONS(553),
        [anon_sym_try] = ACTIONS(553),
        [anon_sym_with] = ACTIONS(553),
        [anon_sym_def] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_AT] = ACTIONS(555),
        [sym_number] = ACTIONS(553),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(555),
        [sym__dedent] = ACTIONS(555),
    },
    [457] = {
        [anon_sym_COLON] = ACTIONS(904),
        [sym_comment] = ACTIONS(57),
    },
    [458] = {
        [anon_sym_in] = ACTIONS(1182),
        [sym_comment] = ACTIONS(57),
    },
    [459] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(360),
        [sym__expression] = STATE(462),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1184),
        [anon_sym_return] = ACTIONS(1186),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [460] = {
        [sym__expression] = STATE(473),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [461] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(465),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [462] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_finally] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(1188),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [463] = {
        [sym__expression] = STATE(464),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [464] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1190),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [465] = {
        [aux_sym_print_statement_repeat1] = STATE(468),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(1193),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(1195),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [466] = {
        [sym__expression] = STATE(472),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [467] = {
        [sym__expression] = STATE(471),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [468] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(1197),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [469] = {
        [sym__expression] = STATE(470),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1195),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1199),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_finally] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1195),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [473] = {
        [aux_sym_print_statement_repeat1] = STATE(474),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(1193),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(1195),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(1197),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [475] = {
        [anon_sym_COLON] = ACTIONS(1202),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [476] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(479),
        [sym__expression] = STATE(480),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1204),
        [anon_sym_return] = ACTIONS(1206),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [477] = {
        [sym__expression] = STATE(491),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [478] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(483),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [479] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_elif] = ACTIONS(611),
        [anon_sym_else] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(613),
        [sym__dedent] = ACTIONS(613),
    },
    [480] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_elif] = ACTIONS(139),
        [anon_sym_else] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(1208),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [481] = {
        [sym__expression] = STATE(482),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [482] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1210),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [483] = {
        [aux_sym_print_statement_repeat1] = STATE(486),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(1213),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_elif] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(1215),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [484] = {
        [sym__expression] = STATE(490),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [485] = {
        [sym__expression] = STATE(489),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [486] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(1217),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_elif] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [487] = {
        [sym__expression] = STATE(488),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_elif] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1215),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [489] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1219),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [490] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1215),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [491] = {
        [aux_sym_print_statement_repeat1] = STATE(492),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(1213),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(1215),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [492] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(1217),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_elif] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [493] = {
        [anon_sym_COLON] = ACTIONS(1222),
        [anon_sym_PLUS] = ACTIONS(199),
        [sym_comment] = ACTIONS(57),
    },
    [494] = {
        [sym__simple_statement] = STATE(333),
        [sym_print_statement] = STATE(306),
        [sym_expression_statement] = STATE(306),
        [sym_return_statement] = STATE(306),
        [sym__suite] = STATE(495),
        [sym__expression] = STATE(480),
        [sym_binary_operator] = STATE(299),
        [anon_sym_print] = ACTIONS(1204),
        [anon_sym_return] = ACTIONS(1206),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(57),
        [sym__indent] = ACTIONS(677),
    },
    [495] = {
        [sym_elif_clause] = STATE(374),
        [sym_else_clause] = STATE(496),
        [aux_sym_if_statement_repeat1] = STATE(325),
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_SEMI] = ACTIONS(581),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_elif] = ACTIONS(995),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(581),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(583),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(581),
        [sym__dedent] = ACTIONS(581),
    },
    [496] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(593),
        [sym__dedent] = ACTIONS(593),
    },
    [497] = {
        [aux_sym_print_statement_repeat1] = STATE(500),
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(1224),
        [anon_sym_return] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_elif] = ACTIONS(323),
        [anon_sym_else] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(1226),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [498] = {
        [sym__expression] = STATE(504),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [499] = {
        [sym__expression] = STATE(503),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(1228),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_elif] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(235),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [501] = {
        [sym__expression] = STATE(502),
        [sym_binary_operator] = STATE(299),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(57),
    },
    [502] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_elif] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_except] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1226),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [503] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(1230),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [504] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_if] = ACTIONS(339),
        [anon_sym_elif] = ACTIONS(339),
        [anon_sym_else] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_while] = ACTIONS(339),
        [anon_sym_try] = ACTIONS(339),
        [anon_sym_except] = ACTIONS(339),
        [anon_sym_finally] = ACTIONS(339),
        [anon_sym_with] = ACTIONS(339),
        [anon_sym_def] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(1226),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [505] = {
        [anon_sym_COMMA] = ACTIONS(1233),
        [anon_sym_COLON] = ACTIONS(1233),
        [sym_comment] = ACTIONS(57),
    },
    [506] = {
        [ts_builtin_sym_end] = ACTIONS(1236),
        [anon_sym_SEMI] = ACTIONS(1236),
        [anon_sym_print] = ACTIONS(1239),
        [anon_sym_COMMA] = ACTIONS(1242),
        [anon_sym_return] = ACTIONS(1239),
        [anon_sym_if] = ACTIONS(1239),
        [anon_sym_COLON] = ACTIONS(1246),
        [anon_sym_elif] = ACTIONS(1239),
        [anon_sym_else] = ACTIONS(1239),
        [anon_sym_for] = ACTIONS(1239),
        [anon_sym_in] = ACTIONS(1239),
        [anon_sym_while] = ACTIONS(1239),
        [anon_sym_try] = ACTIONS(1239),
        [anon_sym_except] = ACTIONS(1239),
        [anon_sym_as] = ACTIONS(1251),
        [anon_sym_finally] = ACTIONS(1239),
        [anon_sym_with] = ACTIONS(1239),
        [anon_sym_def] = ACTIONS(1239),
        [anon_sym_RPAREN] = ACTIONS(1236),
        [anon_sym_class] = ACTIONS(1239),
        [anon_sym_AT] = ACTIONS(1236),
        [anon_sym_PLUS] = ACTIONS(1253),
        [sym_number] = ACTIONS(1239),
        [sym_identifier] = ACTIONS(1255),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(1236),
        [sym__dedent] = ACTIONS(1236),
    },
    [507] = {
        [aux_sym_print_statement_repeat1] = STATE(508),
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(1224),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(1226),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(345),
        [sym__dedent] = ACTIONS(345),
    },
    [508] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(1228),
        [anon_sym_return] = ACTIONS(349),
        [anon_sym_if] = ACTIONS(349),
        [anon_sym_elif] = ACTIONS(349),
        [anon_sym_else] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_while] = ACTIONS(349),
        [anon_sym_try] = ACTIONS(349),
        [anon_sym_except] = ACTIONS(349),
        [anon_sym_finally] = ACTIONS(349),
        [anon_sym_with] = ACTIONS(349),
        [anon_sym_def] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(349),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(25),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(277),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(278),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(279),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(280),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(281),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(282),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(283),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(284),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(285),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(286),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(287),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(288),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(289),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(290),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(291),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(292),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(293),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(294),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(135),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(295),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(296),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(11),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(297),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(298),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(299),
    [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(300),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(301),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(302),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(303),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
    [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [663] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(128),
    [667] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(299),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
    [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
    [689] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6), SHIFT(396),
    [696] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
    [705] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(423),
    [709] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(429),
    [712] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(430),
    [717] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(420),
    [722] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(47),
    [726] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [731] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [734] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [738] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [744] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [747] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [750] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [753] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [756] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [759] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [762] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(367),
    [765] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [768] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [771] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [774] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [780] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
    [788] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [794] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [797] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [800] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [803] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [807] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [811] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [815] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(146),
    [819] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(427),
    [823] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [826] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [829] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [842] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [845] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [859] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [873] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(282),
    [876] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(356),
    [881] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(288),
    [885] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(290),
    [890] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
    [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [910] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [917] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [924] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(368),
    [932] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(369),
    [940] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [945] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(289),
    [948] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(39),
    [955] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(298),
    [958] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
    [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
    [973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
    [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
    [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [981] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [984] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [989] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(43),
    [992] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
    [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
    [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [1015] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(336),
    [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [1024] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(344),
    [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [1031] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(363),
    [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [1036] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1042] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1048] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1051] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [1059] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(372),
    [1062] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1065] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1068] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1071] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(377),
    [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
    [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1080] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(382),
    [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [1089] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(386),
    [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
    [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
    [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [1100] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(402),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [1109] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(407),
    [1112] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1116] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1120] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1124] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1134] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1137] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1140] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1143] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1146] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(140),
    [1149] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(137),
    [1152] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [1159] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1162] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(39),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1167] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(377),
    [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
    [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
    [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
    [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1190] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(463),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
    [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
    [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [1199] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(467),
    [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
    [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
    [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [1210] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(481),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1219] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(485),
    [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
    [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(499),
    [1233] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1236] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1239] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1242] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1246] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(377),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [1255] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
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
