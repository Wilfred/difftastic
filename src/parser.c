#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 568
#define SYMBOL_COUNT 78
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_return = 4,
    anon_sym_del = 5,
    anon_sym_if = 6,
    anon_sym_COLON = 7,
    anon_sym_elif = 8,
    anon_sym_else = 9,
    anon_sym_for = 10,
    anon_sym_in = 11,
    anon_sym_while = 12,
    anon_sym_try = 13,
    anon_sym_except = 14,
    anon_sym_as = 15,
    anon_sym_finally = 16,
    anon_sym_with = 17,
    anon_sym_def = 18,
    anon_sym_LPAREN = 19,
    anon_sym_RPAREN = 20,
    anon_sym_EQ = 21,
    anon_sym_STAR = 22,
    anon_sym_class = 23,
    anon_sym_AT = 24,
    anon_sym_DOT = 25,
    anon_sym_PLUS = 26,
    anon_sym_LBRACK = 27,
    anon_sym_DOT_DOT_DOT = 28,
    anon_sym_RBRACK = 29,
    sym_number = 30,
    sym_identifier = 31,
    sym_comment = 32,
    sym__newline = 33,
    sym__indent = 34,
    sym__dedent = 35,
    sym_module = 36,
    sym__statement = 37,
    sym__simple_statement = 38,
    sym_print_statement = 39,
    sym_expression_statement = 40,
    sym_return_statement = 41,
    sym_delete_statement = 42,
    sym__compound_statement = 43,
    sym_if_statement = 44,
    sym_elif_clause = 45,
    sym_else_clause = 46,
    sym_for_statement = 47,
    sym_while_statement = 48,
    sym_try_statement = 49,
    sym_except_clause = 50,
    sym_finally_clause = 51,
    sym_with_statement = 52,
    sym_with_item = 53,
    sym_function_definition = 54,
    sym_parameters = 55,
    sym_default_parameter = 56,
    sym_list_splat_parameter = 57,
    sym_dictionary_splat_parameter = 58,
    sym_class_definition = 59,
    sym_decorated_definition = 60,
    sym_decorator = 61,
    sym__suite = 62,
    sym_arguments = 63,
    sym_expression_list = 64,
    sym_dotted_name = 65,
    sym__expression = 66,
    sym_binary_operator = 67,
    sym_subscript = 68,
    aux_sym_module_repeat1 = 69,
    aux_sym_print_statement_repeat1 = 70,
    aux_sym_if_statement_repeat1 = 71,
    aux_sym_try_statement_repeat1 = 72,
    aux_sym_with_statement_repeat1 = 73,
    aux_sym_parameters_repeat1 = 74,
    aux_sym_decorated_definition_repeat1 = 75,
    aux_sym_dotted_name_repeat1 = 76,
    aux_sym_subscript_repeat1 = 77,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_print] = "print",
    [anon_sym_COMMA] = ",",
    [anon_sym_return] = "return",
    [anon_sym_del] = "del",
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_DOT_DOT_DOT] = "...",
    [anon_sym_RBRACK] = "]",
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
    [sym_delete_statement] = "delete_statement",
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
    [sym_subscript] = "subscript",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_parameters_repeat1] = "parameters_repeat1",
    [aux_sym_decorated_definition_repeat1] = "decorated_definition_repeat1",
    [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
    [aux_sym_subscript_repeat1] = "subscript_repeat1",
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
    [anon_sym_del] = {
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
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT_DOT_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACK] = {
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
    [sym_delete_statement] = {
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
    [sym_subscript] = {
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
    [aux_sym_subscript_repeat1] = {
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
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            ACCEPT_TOKEN(anon_sym_DOT);
        case 10:
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 12:
            if (lookahead == '.')
                ADVANCE(13);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_number);
        case 13:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_number);
        case 14:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 15:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 16:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 17:
            ACCEPT_TOKEN(anon_sym_AT);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 20:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_as);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'a')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_class);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_def);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_del);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(33);
            if (lookahead == 'x')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_elif);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_else);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'p')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_except);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'a')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'y')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_finally);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_for);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(53);
            if (lookahead == 'n')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_if);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_in);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_print);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'u')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_return);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'y')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_try);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'h')
                ADVANCE(70);
            if (lookahead == 'i')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_while);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'h')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_with);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(80);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 81:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(81);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(14);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 83:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(83);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 84:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(84);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 85:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(85);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 86:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(86);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 87:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(87);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 88:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(88);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(17);
            if (lookahead == 'c')
                ADVANCE(89);
            if (lookahead == 'd')
                ADVANCE(94);
            LEX_ERROR();
        case 89:
            if (lookahead == 'l')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'a')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 's')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 's')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            ACCEPT_TOKEN(anon_sym_class);
        case 94:
            if (lookahead == 'e')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'f')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            ACCEPT_TOKEN(anon_sym_def);
        case 97:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(97);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(99);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 99:
            if (lookahead == '.')
                ADVANCE(10);
            LEX_ERROR();
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(20);
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(102);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 'i')
                ADVANCE(117);
            LEX_ERROR();
        case 102:
            if (lookahead == 's')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            ACCEPT_TOKEN(anon_sym_as);
        case 104:
            if (lookahead == 'x')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'c')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'e')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'p')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 't')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_except);
        case 110:
            if (lookahead == 'i')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'n')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'a')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'l')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 'l')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 'y')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            ACCEPT_TOKEN(anon_sym_finally);
        case 117:
            if (lookahead == 'n')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_in);
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
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            LEX_ERROR();
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(99);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == ']')
                ADVANCE(20);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(19);
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
            if (lookahead == ',')
                ADVANCE(8);
            LEX_ERROR();
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 'i')
                ADVANCE(117);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'd')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            LEX_ERROR();
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 'i')
                ADVANCE(117);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 134:
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
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 135:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(135);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 136:
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
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 140:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 143:
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
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(102);
            LEX_ERROR();
        case 144:
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
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            LEX_ERROR();
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(149);
            if (lookahead == 'x')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 152:
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
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            LEX_ERROR();
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(104);
            if (lookahead == 'f')
                ADVANCE(110);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(155);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(117);
            LEX_ERROR();
        case 157:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(158);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(155);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(158);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(99);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == ']')
                ADVANCE(20);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 166:
            if (lookahead == 0)
                ADVANCE(1);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(122);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if (lookahead == ')')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 173:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 174:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(32);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 175:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 176:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 177:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 178:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(155);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 179:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(155);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 180:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(155);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 182:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 183:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(183);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 184:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 185:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(158);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 186:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(158);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        case 187:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(158);
            if (lookahead == 'f')
                ADVANCE(78);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(66);
            if (lookahead == 'w')
                ADVANCE(69);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 77},
    [2] = {.lex_state = 80},
    [3] = {.lex_state = 80},
    [4] = {.lex_state = 80},
    [5] = {.lex_state = 80},
    [6] = {.lex_state = 80},
    [7] = {.lex_state = 80},
    [8] = {.lex_state = 81},
    [9] = {.lex_state = 80},
    [10] = {.lex_state = 82},
    [11] = {.lex_state = 82},
    [12] = {.lex_state = 82},
    [13] = {.lex_state = 83, .external_tokens = 2},
    [14] = {.lex_state = 84},
    [15] = {.lex_state = 85, .external_tokens = 2},
    [16] = {.lex_state = 86, .external_tokens = 2},
    [17] = {.lex_state = 87, .external_tokens = 2},
    [18] = {.lex_state = 85, .external_tokens = 2},
    [19] = {.lex_state = 85, .external_tokens = 2},
    [20] = {.lex_state = 88},
    [21] = {.lex_state = 97, .external_tokens = 2},
    [22] = {.lex_state = 85, .external_tokens = 2},
    [23] = {.lex_state = 88},
    [24] = {.lex_state = 85, .external_tokens = 2},
    [25] = {.lex_state = 88},
    [26] = {.lex_state = 84},
    [27] = {.lex_state = 85, .external_tokens = 2},
    [28] = {.lex_state = 80},
    [29] = {.lex_state = 98},
    [30] = {.lex_state = 100},
    [31] = {.lex_state = 101},
    [32] = {.lex_state = 119},
    [33] = {.lex_state = 120},
    [34] = {.lex_state = 80},
    [35] = {.lex_state = 98},
    [36] = {.lex_state = 83, .external_tokens = 2},
    [37] = {.lex_state = 100},
    [38] = {.lex_state = 120},
    [39] = {.lex_state = 83, .external_tokens = 2},
    [40] = {.lex_state = 100},
    [41] = {.lex_state = 83, .external_tokens = 2},
    [42] = {.lex_state = 119},
    [43] = {.lex_state = 100},
    [44] = {.lex_state = 119},
    [45] = {.lex_state = 120},
    [46] = {.lex_state = 101},
    [47] = {.lex_state = 100},
    [48] = {.lex_state = 120},
    [49] = {.lex_state = 101},
    [50] = {.lex_state = 101},
    [51] = {.lex_state = 100},
    [52] = {.lex_state = 119},
    [53] = {.lex_state = 101},
    [54] = {.lex_state = 83, .external_tokens = 2},
    [55] = {.lex_state = 85, .external_tokens = 2},
    [56] = {.lex_state = 121, .external_tokens = 2},
    [57] = {.lex_state = 123, .external_tokens = 2},
    [58] = {.lex_state = 80},
    [59] = {.lex_state = 88},
    [60] = {.lex_state = 86, .external_tokens = 2},
    [61] = {.lex_state = 88},
    [62] = {.lex_state = 124},
    [63] = {.lex_state = 80},
    [64] = {.lex_state = 86, .external_tokens = 2},
    [65] = {.lex_state = 125},
    [66] = {.lex_state = 80},
    [67] = {.lex_state = 86, .external_tokens = 2},
    [68] = {.lex_state = 126},
    [69] = {.lex_state = 126},
    [70] = {.lex_state = 82},
    [71] = {.lex_state = 121, .external_tokens = 2},
    [72] = {.lex_state = 82},
    [73] = {.lex_state = 121, .external_tokens = 2},
    [74] = {.lex_state = 121, .external_tokens = 2},
    [75] = {.lex_state = 127},
    [76] = {.lex_state = 128, .external_tokens = 3},
    [77] = {.lex_state = 80},
    [78] = {.lex_state = 131},
    [79] = {.lex_state = 126},
    [80] = {.lex_state = 132},
    [81] = {.lex_state = 81},
    [82] = {.lex_state = 128, .external_tokens = 3},
    [83] = {.lex_state = 133, .external_tokens = 4},
    [84] = {.lex_state = 87, .external_tokens = 2},
    [85] = {.lex_state = 85, .external_tokens = 2},
    [86] = {.lex_state = 80},
    [87] = {.lex_state = 80},
    [88] = {.lex_state = 80},
    [89] = {.lex_state = 81},
    [90] = {.lex_state = 80},
    [91] = {.lex_state = 82},
    [92] = {.lex_state = 82},
    [93] = {.lex_state = 87, .external_tokens = 2},
    [94] = {.lex_state = 133, .external_tokens = 4},
    [95] = {.lex_state = 86, .external_tokens = 2},
    [96] = {.lex_state = 133, .external_tokens = 4},
    [97] = {.lex_state = 133, .external_tokens = 4},
    [98] = {.lex_state = 133, .external_tokens = 4},
    [99] = {.lex_state = 88},
    [100] = {.lex_state = 133, .external_tokens = 4},
    [101] = {.lex_state = 87, .external_tokens = 2},
    [102] = {.lex_state = 133, .external_tokens = 4},
    [103] = {.lex_state = 133, .external_tokens = 4},
    [104] = {.lex_state = 127},
    [105] = {.lex_state = 128, .external_tokens = 3},
    [106] = {.lex_state = 80},
    [107] = {.lex_state = 131},
    [108] = {.lex_state = 81},
    [109] = {.lex_state = 128, .external_tokens = 3},
    [110] = {.lex_state = 80},
    [111] = {.lex_state = 80},
    [112] = {.lex_state = 80},
    [113] = {.lex_state = 134, .external_tokens = 4},
    [114] = {.lex_state = 133, .external_tokens = 4},
    [115] = {.lex_state = 135, .external_tokens = 4},
    [116] = {.lex_state = 135, .external_tokens = 4},
    [117] = {.lex_state = 133, .external_tokens = 4},
    [118] = {.lex_state = 136, .external_tokens = 4},
    [119] = {.lex_state = 80},
    [120] = {.lex_state = 98},
    [121] = {.lex_state = 100},
    [122] = {.lex_state = 119},
    [123] = {.lex_state = 120},
    [124] = {.lex_state = 134, .external_tokens = 4},
    [125] = {.lex_state = 100},
    [126] = {.lex_state = 120},
    [127] = {.lex_state = 134, .external_tokens = 4},
    [128] = {.lex_state = 134, .external_tokens = 4},
    [129] = {.lex_state = 134, .external_tokens = 4},
    [130] = {.lex_state = 135, .external_tokens = 4},
    [131] = {.lex_state = 133, .external_tokens = 4},
    [132] = {.lex_state = 135, .external_tokens = 4},
    [133] = {.lex_state = 135, .external_tokens = 4},
    [134] = {.lex_state = 134, .external_tokens = 4},
    [135] = {.lex_state = 80},
    [136] = {.lex_state = 137, .external_tokens = 4},
    [137] = {.lex_state = 80},
    [138] = {.lex_state = 134, .external_tokens = 4},
    [139] = {.lex_state = 134, .external_tokens = 4},
    [140] = {.lex_state = 135, .external_tokens = 4},
    [141] = {.lex_state = 134, .external_tokens = 4},
    [142] = {.lex_state = 137, .external_tokens = 4},
    [143] = {.lex_state = 133, .external_tokens = 4},
    [144] = {.lex_state = 123},
    [145] = {.lex_state = 138},
    [146] = {.lex_state = 81},
    [147] = {.lex_state = 128, .external_tokens = 3},
    [148] = {.lex_state = 133, .external_tokens = 4},
    [149] = {.lex_state = 81},
    [150] = {.lex_state = 139},
    [151] = {.lex_state = 140},
    [152] = {.lex_state = 125},
    [153] = {.lex_state = 125},
    [154] = {.lex_state = 131},
    [155] = {.lex_state = 139},
    [156] = {.lex_state = 140},
    [157] = {.lex_state = 125},
    [158] = {.lex_state = 125},
    [159] = {.lex_state = 131},
    [160] = {.lex_state = 81},
    [161] = {.lex_state = 141},
    [162] = {.lex_state = 141},
    [163] = {.lex_state = 131},
    [164] = {.lex_state = 81},
    [165] = {.lex_state = 82},
    [166] = {.lex_state = 131},
    [167] = {.lex_state = 138},
    [168] = {.lex_state = 81},
    [169] = {.lex_state = 80},
    [170] = {.lex_state = 124},
    [171] = {.lex_state = 81},
    [172] = {.lex_state = 141},
    [173] = {.lex_state = 131},
    [174] = {.lex_state = 138},
    [175] = {.lex_state = 125},
    [176] = {.lex_state = 142},
    [177] = {.lex_state = 143},
    [178] = {.lex_state = 80},
    [179] = {.lex_state = 144},
    [180] = {.lex_state = 80},
    [181] = {.lex_state = 128, .external_tokens = 3},
    [182] = {.lex_state = 142},
    [183] = {.lex_state = 80},
    [184] = {.lex_state = 128, .external_tokens = 3},
    [185] = {.lex_state = 133, .external_tokens = 4},
    [186] = {.lex_state = 142},
    [187] = {.lex_state = 133, .external_tokens = 4},
    [188] = {.lex_state = 142},
    [189] = {.lex_state = 128, .external_tokens = 3},
    [190] = {.lex_state = 80},
    [191] = {.lex_state = 80},
    [192] = {.lex_state = 80},
    [193] = {.lex_state = 133, .external_tokens = 4},
    [194] = {.lex_state = 145},
    [195] = {.lex_state = 145},
    [196] = {.lex_state = 145},
    [197] = {.lex_state = 146},
    [198] = {.lex_state = 80},
    [199] = {.lex_state = 81},
    [200] = {.lex_state = 147, .external_tokens = 4},
    [201] = {.lex_state = 133, .external_tokens = 4},
    [202] = {.lex_state = 147, .external_tokens = 4},
    [203] = {.lex_state = 81},
    [204] = {.lex_state = 150, .external_tokens = 4},
    [205] = {.lex_state = 147, .external_tokens = 4},
    [206] = {.lex_state = 133, .external_tokens = 4},
    [207] = {.lex_state = 133, .external_tokens = 4},
    [208] = {.lex_state = 128, .external_tokens = 3},
    [209] = {.lex_state = 150, .external_tokens = 4},
    [210] = {.lex_state = 128, .external_tokens = 3},
    [211] = {.lex_state = 133, .external_tokens = 4},
    [212] = {.lex_state = 143},
    [213] = {.lex_state = 80},
    [214] = {.lex_state = 128, .external_tokens = 3},
    [215] = {.lex_state = 151},
    [216] = {.lex_state = 128, .external_tokens = 3},
    [217] = {.lex_state = 147, .external_tokens = 4},
    [218] = {.lex_state = 147, .external_tokens = 4},
    [219] = {.lex_state = 145},
    [220] = {.lex_state = 133, .external_tokens = 4},
    [221] = {.lex_state = 145},
    [222] = {.lex_state = 145},
    [223] = {.lex_state = 145},
    [224] = {.lex_state = 152},
    [225] = {.lex_state = 153},
    [226] = {.lex_state = 151},
    [227] = {.lex_state = 128, .external_tokens = 3},
    [228] = {.lex_state = 154, .external_tokens = 4},
    [229] = {.lex_state = 133, .external_tokens = 4},
    [230] = {.lex_state = 156},
    [231] = {.lex_state = 80},
    [232] = {.lex_state = 81},
    [233] = {.lex_state = 128, .external_tokens = 3},
    [234] = {.lex_state = 154, .external_tokens = 4},
    [235] = {.lex_state = 133, .external_tokens = 4},
    [236] = {.lex_state = 151},
    [237] = {.lex_state = 128, .external_tokens = 3},
    [238] = {.lex_state = 157, .external_tokens = 4},
    [239] = {.lex_state = 80},
    [240] = {.lex_state = 157, .external_tokens = 4},
    [241] = {.lex_state = 133, .external_tokens = 4},
    [242] = {.lex_state = 157, .external_tokens = 4},
    [243] = {.lex_state = 157, .external_tokens = 4},
    [244] = {.lex_state = 133, .external_tokens = 4},
    [245] = {.lex_state = 151},
    [246] = {.lex_state = 128, .external_tokens = 3},
    [247] = {.lex_state = 157, .external_tokens = 4},
    [248] = {.lex_state = 87, .external_tokens = 2},
    [249] = {.lex_state = 83, .external_tokens = 2},
    [250] = {.lex_state = 80},
    [251] = {.lex_state = 159, .external_tokens = 2},
    [252] = {.lex_state = 80},
    [253] = {.lex_state = 83, .external_tokens = 2},
    [254] = {.lex_state = 83, .external_tokens = 2},
    [255] = {.lex_state = 87, .external_tokens = 2},
    [256] = {.lex_state = 83, .external_tokens = 2},
    [257] = {.lex_state = 159, .external_tokens = 2},
    [258] = {.lex_state = 85, .external_tokens = 2},
    [259] = {.lex_state = 123},
    [260] = {.lex_state = 81},
    [261] = {.lex_state = 128, .external_tokens = 3},
    [262] = {.lex_state = 85, .external_tokens = 2},
    [263] = {.lex_state = 142},
    [264] = {.lex_state = 128, .external_tokens = 3},
    [265] = {.lex_state = 142},
    [266] = {.lex_state = 128, .external_tokens = 3},
    [267] = {.lex_state = 85, .external_tokens = 2},
    [268] = {.lex_state = 85, .external_tokens = 2},
    [269] = {.lex_state = 128, .external_tokens = 3},
    [270] = {.lex_state = 145},
    [271] = {.lex_state = 80},
    [272] = {.lex_state = 81},
    [273] = {.lex_state = 160, .external_tokens = 2},
    [274] = {.lex_state = 85, .external_tokens = 2},
    [275] = {.lex_state = 160, .external_tokens = 2},
    [276] = {.lex_state = 81},
    [277] = {.lex_state = 161, .external_tokens = 2},
    [278] = {.lex_state = 160, .external_tokens = 2},
    [279] = {.lex_state = 85, .external_tokens = 2},
    [280] = {.lex_state = 85, .external_tokens = 2},
    [281] = {.lex_state = 128, .external_tokens = 3},
    [282] = {.lex_state = 161, .external_tokens = 2},
    [283] = {.lex_state = 128, .external_tokens = 3},
    [284] = {.lex_state = 85, .external_tokens = 2},
    [285] = {.lex_state = 143},
    [286] = {.lex_state = 80},
    [287] = {.lex_state = 128, .external_tokens = 3},
    [288] = {.lex_state = 151},
    [289] = {.lex_state = 128, .external_tokens = 3},
    [290] = {.lex_state = 160, .external_tokens = 2},
    [291] = {.lex_state = 160, .external_tokens = 2},
    [292] = {.lex_state = 151},
    [293] = {.lex_state = 128, .external_tokens = 3},
    [294] = {.lex_state = 162, .external_tokens = 2},
    [295] = {.lex_state = 85, .external_tokens = 2},
    [296] = {.lex_state = 156},
    [297] = {.lex_state = 80},
    [298] = {.lex_state = 81},
    [299] = {.lex_state = 128, .external_tokens = 3},
    [300] = {.lex_state = 162, .external_tokens = 2},
    [301] = {.lex_state = 85, .external_tokens = 2},
    [302] = {.lex_state = 151},
    [303] = {.lex_state = 128, .external_tokens = 3},
    [304] = {.lex_state = 163, .external_tokens = 2},
    [305] = {.lex_state = 80},
    [306] = {.lex_state = 163, .external_tokens = 2},
    [307] = {.lex_state = 85, .external_tokens = 2},
    [308] = {.lex_state = 163, .external_tokens = 2},
    [309] = {.lex_state = 163, .external_tokens = 2},
    [310] = {.lex_state = 85, .external_tokens = 2},
    [311] = {.lex_state = 151},
    [312] = {.lex_state = 128, .external_tokens = 3},
    [313] = {.lex_state = 163, .external_tokens = 2},
    [314] = {.lex_state = 80},
    [315] = {.lex_state = 164},
    [316] = {.lex_state = 80},
    [317] = {.lex_state = 80},
    [318] = {.lex_state = 80},
    [319] = {.lex_state = 128, .external_tokens = 3},
    [320] = {.lex_state = 80},
    [321] = {.lex_state = 81},
    [322] = {.lex_state = 80},
    [323] = {.lex_state = 80},
    [324] = {.lex_state = 80},
    [325] = {.lex_state = 81},
    [326] = {.lex_state = 80},
    [327] = {.lex_state = 80},
    [328] = {.lex_state = 81},
    [329] = {.lex_state = 80},
    [330] = {.lex_state = 82},
    [331] = {.lex_state = 165},
    [332] = {.lex_state = 81, .external_tokens = 2},
    [333] = {.lex_state = 139},
    [334] = {.lex_state = 82},
    [335] = {.lex_state = 82},
    [336] = {.lex_state = 80},
    [337] = {.lex_state = 98},
    [338] = {.lex_state = 100},
    [339] = {.lex_state = 166, .external_tokens = 5},
    [340] = {.lex_state = 166, .external_tokens = 5},
    [341] = {.lex_state = 167, .external_tokens = 5},
    [342] = {.lex_state = 85, .external_tokens = 5},
    [343] = {.lex_state = 133, .external_tokens = 4},
    [344] = {.lex_state = 87, .external_tokens = 5},
    [345] = {.lex_state = 85, .external_tokens = 5},
    [346] = {.lex_state = 87, .external_tokens = 5},
    [347] = {.lex_state = 87, .external_tokens = 5},
    [348] = {.lex_state = 85, .external_tokens = 5},
    [349] = {.lex_state = 85, .external_tokens = 5},
    [350] = {.lex_state = 163, .external_tokens = 5},
    [351] = {.lex_state = 161, .external_tokens = 5},
    [352] = {.lex_state = 160, .external_tokens = 5},
    [353] = {.lex_state = 85, .external_tokens = 5},
    [354] = {.lex_state = 142},
    [355] = {.lex_state = 85, .external_tokens = 5},
    [356] = {.lex_state = 81},
    [357] = {.lex_state = 125},
    [358] = {.lex_state = 125},
    [359] = {.lex_state = 131},
    [360] = {.lex_state = 88},
    [361] = {.lex_state = 87, .external_tokens = 5},
    [362] = {.lex_state = 168, .external_tokens = 5},
    [363] = {.lex_state = 166, .external_tokens = 5},
    [364] = {.lex_state = 85, .external_tokens = 5},
    [365] = {.lex_state = 169, .external_tokens = 5},
    [366] = {.lex_state = 163, .external_tokens = 5},
    [367] = {.lex_state = 160, .external_tokens = 5},
    [368] = {.lex_state = 142},
    [369] = {.lex_state = 88},
    [370] = {.lex_state = 100},
    [371] = {.lex_state = 120},
    [372] = {.lex_state = 166, .external_tokens = 5},
    [373] = {.lex_state = 166, .external_tokens = 5},
    [374] = {.lex_state = 85, .external_tokens = 5},
    [375] = {.lex_state = 128, .external_tokens = 3},
    [376] = {.lex_state = 80},
    [377] = {.lex_state = 80},
    [378] = {.lex_state = 80},
    [379] = {.lex_state = 87, .external_tokens = 5},
    [380] = {.lex_state = 85, .external_tokens = 5},
    [381] = {.lex_state = 170, .external_tokens = 5},
    [382] = {.lex_state = 80},
    [383] = {.lex_state = 100},
    [384] = {.lex_state = 119},
    [385] = {.lex_state = 120},
    [386] = {.lex_state = 166, .external_tokens = 5},
    [387] = {.lex_state = 170, .external_tokens = 5},
    [388] = {.lex_state = 87, .external_tokens = 5},
    [389] = {.lex_state = 133, .external_tokens = 4},
    [390] = {.lex_state = 87, .external_tokens = 5},
    [391] = {.lex_state = 87, .external_tokens = 5},
    [392] = {.lex_state = 171, .external_tokens = 5},
    [393] = {.lex_state = 80},
    [394] = {.lex_state = 80},
    [395] = {.lex_state = 172, .external_tokens = 5},
    [396] = {.lex_state = 80},
    [397] = {.lex_state = 171, .external_tokens = 5},
    [398] = {.lex_state = 171, .external_tokens = 5},
    [399] = {.lex_state = 171, .external_tokens = 5},
    [400] = {.lex_state = 87, .external_tokens = 5},
    [401] = {.lex_state = 171, .external_tokens = 5},
    [402] = {.lex_state = 172, .external_tokens = 5},
    [403] = {.lex_state = 161, .external_tokens = 5},
    [404] = {.lex_state = 160, .external_tokens = 5},
    [405] = {.lex_state = 85, .external_tokens = 5},
    [406] = {.lex_state = 85, .external_tokens = 5},
    [407] = {.lex_state = 81},
    [408] = {.lex_state = 163, .external_tokens = 5},
    [409] = {.lex_state = 85, .external_tokens = 5},
    [410] = {.lex_state = 128, .external_tokens = 3},
    [411] = {.lex_state = 161, .external_tokens = 5},
    [412] = {.lex_state = 80},
    [413] = {.lex_state = 173, .external_tokens = 5},
    [414] = {.lex_state = 80},
    [415] = {.lex_state = 173, .external_tokens = 5},
    [416] = {.lex_state = 85, .external_tokens = 5},
    [417] = {.lex_state = 86, .external_tokens = 2},
    [418] = {.lex_state = 85, .external_tokens = 5},
    [419] = {.lex_state = 120},
    [420] = {.lex_state = 128, .external_tokens = 3},
    [421] = {.lex_state = 87, .external_tokens = 5},
    [422] = {.lex_state = 97, .external_tokens = 5},
    [423] = {.lex_state = 80},
    [424] = {.lex_state = 97, .external_tokens = 5},
    [425] = {.lex_state = 163, .external_tokens = 5},
    [426] = {.lex_state = 85, .external_tokens = 5},
    [427] = {.lex_state = 174, .external_tokens = 5},
    [428] = {.lex_state = 128, .external_tokens = 3},
    [429] = {.lex_state = 80},
    [430] = {.lex_state = 174, .external_tokens = 5},
    [431] = {.lex_state = 80},
    [432] = {.lex_state = 80},
    [433] = {.lex_state = 80},
    [434] = {.lex_state = 160, .external_tokens = 5},
    [435] = {.lex_state = 175, .external_tokens = 5},
    [436] = {.lex_state = 80},
    [437] = {.lex_state = 175, .external_tokens = 5},
    [438] = {.lex_state = 176, .external_tokens = 5},
    [439] = {.lex_state = 80},
    [440] = {.lex_state = 80},
    [441] = {.lex_state = 177, .external_tokens = 5},
    [442] = {.lex_state = 80},
    [443] = {.lex_state = 176, .external_tokens = 5},
    [444] = {.lex_state = 176, .external_tokens = 5},
    [445] = {.lex_state = 176, .external_tokens = 5},
    [446] = {.lex_state = 176, .external_tokens = 5},
    [447] = {.lex_state = 177, .external_tokens = 5},
    [448] = {.lex_state = 128, .external_tokens = 3},
    [449] = {.lex_state = 81},
    [450] = {.lex_state = 128, .external_tokens = 3},
    [451] = {.lex_state = 85, .external_tokens = 5},
    [452] = {.lex_state = 80},
    [453] = {.lex_state = 80},
    [454] = {.lex_state = 80},
    [455] = {.lex_state = 162, .external_tokens = 5},
    [456] = {.lex_state = 178, .external_tokens = 5},
    [457] = {.lex_state = 80},
    [458] = {.lex_state = 178, .external_tokens = 5},
    [459] = {.lex_state = 85, .external_tokens = 5},
    [460] = {.lex_state = 179, .external_tokens = 5},
    [461] = {.lex_state = 80},
    [462] = {.lex_state = 80},
    [463] = {.lex_state = 180, .external_tokens = 5},
    [464] = {.lex_state = 80},
    [465] = {.lex_state = 179, .external_tokens = 5},
    [466] = {.lex_state = 179, .external_tokens = 5},
    [467] = {.lex_state = 179, .external_tokens = 5},
    [468] = {.lex_state = 179, .external_tokens = 5},
    [469] = {.lex_state = 180, .external_tokens = 5},
    [470] = {.lex_state = 85, .external_tokens = 5},
    [471] = {.lex_state = 160, .external_tokens = 5},
    [472] = {.lex_state = 85, .external_tokens = 5},
    [473] = {.lex_state = 81},
    [474] = {.lex_state = 141},
    [475] = {.lex_state = 81},
    [476] = {.lex_state = 131},
    [477] = {.lex_state = 81},
    [478] = {.lex_state = 138},
    [479] = {.lex_state = 81},
    [480] = {.lex_state = 128, .external_tokens = 3},
    [481] = {.lex_state = 85, .external_tokens = 5},
    [482] = {.lex_state = 128, .external_tokens = 3},
    [483] = {.lex_state = 85, .external_tokens = 5},
    [484] = {.lex_state = 128, .external_tokens = 3},
    [485] = {.lex_state = 165},
    [486] = {.lex_state = 181},
    [487] = {.lex_state = 131},
    [488] = {.lex_state = 85, .external_tokens = 5},
    [489] = {.lex_state = 166, .external_tokens = 5},
    [490] = {.lex_state = 121, .external_tokens = 2},
    [491] = {.lex_state = 127},
    [492] = {.lex_state = 80},
    [493] = {.lex_state = 125},
    [494] = {.lex_state = 124},
    [495] = {.lex_state = 125},
    [496] = {.lex_state = 123},
    [497] = {.lex_state = 142},
    [498] = {.lex_state = 128, .external_tokens = 3},
    [499] = {.lex_state = 85, .external_tokens = 5},
    [500] = {.lex_state = 144},
    [501] = {.lex_state = 143},
    [502] = {.lex_state = 80},
    [503] = {.lex_state = 128, .external_tokens = 3},
    [504] = {.lex_state = 151},
    [505] = {.lex_state = 160, .external_tokens = 5},
    [506] = {.lex_state = 128, .external_tokens = 3},
    [507] = {.lex_state = 145},
    [508] = {.lex_state = 151},
    [509] = {.lex_state = 128, .external_tokens = 3},
    [510] = {.lex_state = 162, .external_tokens = 5},
    [511] = {.lex_state = 85, .external_tokens = 5},
    [512] = {.lex_state = 81},
    [513] = {.lex_state = 156},
    [514] = {.lex_state = 128, .external_tokens = 3},
    [515] = {.lex_state = 80},
    [516] = {.lex_state = 80},
    [517] = {.lex_state = 80},
    [518] = {.lex_state = 182, .external_tokens = 5},
    [519] = {.lex_state = 80},
    [520] = {.lex_state = 182, .external_tokens = 5},
    [521] = {.lex_state = 183, .external_tokens = 5},
    [522] = {.lex_state = 80},
    [523] = {.lex_state = 80},
    [524] = {.lex_state = 184, .external_tokens = 5},
    [525] = {.lex_state = 80},
    [526] = {.lex_state = 183, .external_tokens = 5},
    [527] = {.lex_state = 183, .external_tokens = 5},
    [528] = {.lex_state = 183, .external_tokens = 5},
    [529] = {.lex_state = 183, .external_tokens = 5},
    [530] = {.lex_state = 184, .external_tokens = 5},
    [531] = {.lex_state = 151},
    [532] = {.lex_state = 128, .external_tokens = 3},
    [533] = {.lex_state = 80},
    [534] = {.lex_state = 80},
    [535] = {.lex_state = 80},
    [536] = {.lex_state = 163, .external_tokens = 5},
    [537] = {.lex_state = 185, .external_tokens = 5},
    [538] = {.lex_state = 80},
    [539] = {.lex_state = 185, .external_tokens = 5},
    [540] = {.lex_state = 186, .external_tokens = 5},
    [541] = {.lex_state = 80},
    [542] = {.lex_state = 80},
    [543] = {.lex_state = 187, .external_tokens = 5},
    [544] = {.lex_state = 80},
    [545] = {.lex_state = 186, .external_tokens = 5},
    [546] = {.lex_state = 186, .external_tokens = 5},
    [547] = {.lex_state = 186, .external_tokens = 5},
    [548] = {.lex_state = 186, .external_tokens = 5},
    [549] = {.lex_state = 187, .external_tokens = 5},
    [550] = {.lex_state = 151},
    [551] = {.lex_state = 128, .external_tokens = 3},
    [552] = {.lex_state = 163, .external_tokens = 5},
    [553] = {.lex_state = 85, .external_tokens = 5},
    [554] = {.lex_state = 83, .external_tokens = 5},
    [555] = {.lex_state = 80},
    [556] = {.lex_state = 80},
    [557] = {.lex_state = 159, .external_tokens = 5},
    [558] = {.lex_state = 80},
    [559] = {.lex_state = 83, .external_tokens = 5},
    [560] = {.lex_state = 83, .external_tokens = 5},
    [561] = {.lex_state = 83, .external_tokens = 5},
    [562] = {.lex_state = 100},
    [563] = {.lex_state = 166, .external_tokens = 5},
    [564] = {.lex_state = 142},
    [565] = {.lex_state = 166, .external_tokens = 5},
    [566] = {.lex_state = 83, .external_tokens = 5},
    [567] = {.lex_state = 159, .external_tokens = 5},
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
        [sym_module] = STATE(14),
        [sym__statement] = STATE(345),
        [sym__simple_statement] = STATE(346),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__compound_statement] = STATE(348),
        [sym_if_statement] = STATE(349),
        [sym_elif_clause] = STATE(350),
        [sym_else_clause] = STATE(351),
        [sym_for_statement] = STATE(349),
        [sym_while_statement] = STATE(349),
        [sym_try_statement] = STATE(349),
        [sym_except_clause] = STATE(352),
        [sym_finally_clause] = STATE(353),
        [sym_with_statement] = STATE(349),
        [sym_with_item] = STATE(354),
        [sym_function_definition] = STATE(355),
        [sym_parameters] = STATE(356),
        [sym_default_parameter] = STATE(357),
        [sym_list_splat_parameter] = STATE(358),
        [sym_dictionary_splat_parameter] = STATE(359),
        [sym_class_definition] = STATE(355),
        [sym_decorated_definition] = STATE(349),
        [sym_decorator] = STATE(360),
        [sym__suite] = STATE(361),
        [sym_arguments] = STATE(60),
        [sym_expression_list] = STATE(362),
        [sym_dotted_name] = STATE(57),
        [sym__expression] = STATE(363),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [aux_sym_module_repeat1] = STATE(364),
        [aux_sym_print_statement_repeat1] = STATE(365),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [aux_sym_with_statement_repeat1] = STATE(368),
        [aux_sym_parameters_repeat1] = STATE(155),
        [aux_sym_decorated_definition_repeat1] = STATE(369),
        [aux_sym_dotted_name_repeat1] = STATE(71),
        [aux_sym_subscript_repeat1] = STATE(370),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_return] = ACTIONS(9),
        [anon_sym_del] = ACTIONS(11),
        [anon_sym_if] = ACTIONS(13),
        [anon_sym_COLON] = ACTIONS(15),
        [anon_sym_elif] = ACTIONS(17),
        [anon_sym_else] = ACTIONS(19),
        [anon_sym_for] = ACTIONS(21),
        [anon_sym_in] = ACTIONS(23),
        [anon_sym_while] = ACTIONS(25),
        [anon_sym_try] = ACTIONS(27),
        [anon_sym_except] = ACTIONS(29),
        [anon_sym_as] = ACTIONS(31),
        [anon_sym_finally] = ACTIONS(33),
        [anon_sym_with] = ACTIONS(35),
        [anon_sym_def] = ACTIONS(37),
        [anon_sym_LPAREN] = ACTIONS(39),
        [anon_sym_RPAREN] = ACTIONS(41),
        [anon_sym_EQ] = ACTIONS(43),
        [anon_sym_STAR] = ACTIONS(45),
        [anon_sym_class] = ACTIONS(47),
        [anon_sym_AT] = ACTIONS(49),
        [anon_sym_DOT] = ACTIONS(51),
        [anon_sym_PLUS] = ACTIONS(53),
        [anon_sym_LBRACK] = ACTIONS(55),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(57),
        [anon_sym_RBRACK] = ACTIONS(59),
        [sym_number] = ACTIONS(61),
        [sym_identifier] = ACTIONS(63),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(67),
        [sym__indent] = ACTIONS(69),
        [sym__dedent] = ACTIONS(71),
    },
    [1] = {
        [sym_module] = STATE(14),
        [sym__statement] = STATE(15),
        [sym__simple_statement] = STATE(16),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(18),
        [sym_if_statement] = STATE(19),
        [sym_for_statement] = STATE(19),
        [sym_while_statement] = STATE(19),
        [sym_try_statement] = STATE(19),
        [sym_with_statement] = STATE(19),
        [sym_function_definition] = STATE(19),
        [sym_class_definition] = STATE(19),
        [sym_decorated_definition] = STATE(19),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_module_repeat1] = STATE(22),
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(83),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(87),
        [anon_sym_with] = ACTIONS(89),
        [anon_sym_def] = ACTIONS(91),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
    },
    [2] = {
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [3] = {
        [sym_expression_list] = STATE(255),
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [4] = {
        [sym_expression_list] = STATE(248),
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [5] = {
        [sym__expression] = STATE(302),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [6] = {
        [sym_expression_list] = STATE(296),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [7] = {
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [8] = {
        [anon_sym_COLON] = ACTIONS(103),
        [sym_comment] = ACTIONS(65),
    },
    [9] = {
        [sym_with_item] = STATE(263),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [10] = {
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(65),
    },
    [11] = {
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(65),
    },
    [12] = {
        [sym_dotted_name] = STATE(57),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(65),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_COMMA] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(113),
        [anon_sym_del] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_elif] = ACTIONS(113),
        [anon_sym_else] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_except] = ACTIONS(113),
        [anon_sym_finally] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_AT] = ACTIONS(111),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(111),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [sym_comment] = ACTIONS(65),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(119),
        [anon_sym_SEMI] = ACTIONS(119),
        [anon_sym_print] = ACTIONS(121),
        [anon_sym_return] = ACTIONS(121),
        [anon_sym_del] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(121),
        [anon_sym_for] = ACTIONS(121),
        [anon_sym_while] = ACTIONS(121),
        [anon_sym_try] = ACTIONS(121),
        [anon_sym_with] = ACTIONS(121),
        [anon_sym_def] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(119),
    },
    [16] = {
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(125),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_del] = ACTIONS(129),
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
        [anon_sym_AT] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(127),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_return] = ACTIONS(135),
        [anon_sym_del] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_AT] = ACTIONS(133),
        [sym_number] = ACTIONS(135),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(133),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(139),
    },
    [20] = {
        [anon_sym_def] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_AT] = ACTIONS(145),
        [sym_comment] = ACTIONS(65),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
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
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(153),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
    },
    [22] = {
        [sym__statement] = STATE(27),
        [sym__simple_statement] = STATE(16),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(18),
        [sym_if_statement] = STATE(19),
        [sym_for_statement] = STATE(19),
        [sym_while_statement] = STATE(19),
        [sym_try_statement] = STATE(19),
        [sym_with_statement] = STATE(19),
        [sym_function_definition] = STATE(19),
        [sym_class_definition] = STATE(19),
        [sym_decorated_definition] = STATE(19),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(157),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(83),
        [anon_sym_while] = ACTIONS(85),
        [anon_sym_try] = ACTIONS(87),
        [anon_sym_with] = ACTIONS(89),
        [anon_sym_def] = ACTIONS(91),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(159),
    },
    [23] = {
        [sym_function_definition] = STATE(24),
        [sym_class_definition] = STATE(24),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_AT] = ACTIONS(95),
        [sym_comment] = ACTIONS(65),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_return] = ACTIONS(167),
        [anon_sym_del] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_while] = ACTIONS(167),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(167),
        [anon_sym_def] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(165),
        [sym_number] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(165),
    },
    [25] = {
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(171),
        [sym_comment] = ACTIONS(65),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [sym_comment] = ACTIONS(65),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_del] = ACTIONS(177),
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
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(175),
    },
    [28] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [29] = {
        [sym__expression] = STATE(32),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [30] = {
        [aux_sym_subscript_repeat1] = STATE(37),
        [anon_sym_COMMA] = ACTIONS(183),
        [anon_sym_RBRACK] = ACTIONS(185),
        [sym_comment] = ACTIONS(65),
    },
    [31] = {
        [anon_sym_COMMA] = ACTIONS(111),
        [anon_sym_COLON] = ACTIONS(111),
        [anon_sym_in] = ACTIONS(111),
        [anon_sym_except] = ACTIONS(111),
        [anon_sym_as] = ACTIONS(111),
        [anon_sym_finally] = ACTIONS(111),
        [anon_sym_RPAREN] = ACTIONS(111),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(111),
        [sym_comment] = ACTIONS(65),
    },
    [32] = {
        [aux_sym_subscript_repeat1] = STATE(37),
        [anon_sym_COMMA] = ACTIONS(183),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(185),
        [sym_comment] = ACTIONS(65),
    },
    [33] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(193),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [34] = {
        [sym__expression] = STATE(53),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [35] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_SEMI] = ACTIONS(197),
        [anon_sym_print] = ACTIONS(199),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_return] = ACTIONS(199),
        [anon_sym_del] = ACTIONS(199),
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
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_number] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(197),
    },
    [37] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(65),
    },
    [38] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(207),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(211),
        [anon_sym_del] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_def] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(211),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(209),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(215),
        [sym_comment] = ACTIONS(65),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_return] = ACTIONS(219),
        [anon_sym_del] = ACTIONS(219),
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
        [anon_sym_AT] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(217),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(215),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(215),
        [sym_comment] = ACTIONS(65),
    },
    [43] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(65),
    },
    [44] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(65),
    },
    [45] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_COLON] = ACTIONS(197),
        [anon_sym_in] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_as] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_RBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(65),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(65),
    },
    [48] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [49] = {
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_in] = ACTIONS(209),
        [anon_sym_except] = ACTIONS(209),
        [anon_sym_as] = ACTIONS(209),
        [anon_sym_finally] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_comment] = ACTIONS(65),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_COLON] = ACTIONS(217),
        [anon_sym_in] = ACTIONS(217),
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_as] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(65),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_comment] = ACTIONS(65),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_comment] = ACTIONS(65),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(65),
    },
    [54] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_return] = ACTIONS(243),
        [anon_sym_del] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_for] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(243),
        [anon_sym_with] = ACTIONS(243),
        [anon_sym_def] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(243),
        [anon_sym_AT] = ACTIONS(241),
        [sym_number] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(241),
    },
    [56] = {
        [aux_sym_dotted_name_repeat1] = STATE(71),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_DOT] = ACTIONS(249),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(247),
    },
    [57] = {
        [sym_arguments] = STATE(60),
        [anon_sym_LPAREN] = ACTIONS(251),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(253),
    },
    [58] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [59] = {
        [anon_sym_def] = ACTIONS(255),
        [anon_sym_class] = ACTIONS(255),
        [anon_sym_AT] = ACTIONS(255),
        [sym_comment] = ACTIONS(65),
    },
    [60] = {
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(257),
    },
    [61] = {
        [anon_sym_def] = ACTIONS(259),
        [anon_sym_class] = ACTIONS(259),
        [anon_sym_AT] = ACTIONS(259),
        [sym_comment] = ACTIONS(65),
    },
    [62] = {
        [aux_sym_print_statement_repeat1] = STATE(65),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [63] = {
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [64] = {
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(265),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(269),
        [sym_comment] = ACTIONS(65),
    },
    [66] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [67] = {
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(271),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_COLON] = ACTIONS(273),
        [anon_sym_in] = ACTIONS(273),
        [anon_sym_except] = ACTIONS(273),
        [anon_sym_finally] = ACTIONS(273),
        [anon_sym_RPAREN] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_except] = ACTIONS(275),
        [anon_sym_finally] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [70] = {
        [sym_identifier] = ACTIONS(277),
        [sym_comment] = ACTIONS(65),
    },
    [71] = {
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_DOT] = ACTIONS(281),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(279),
    },
    [72] = {
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(65),
    },
    [73] = {
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_DOT] = ACTIONS(285),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(285),
    },
    [74] = {
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_DOT] = ACTIONS(287),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(287),
    },
    [75] = {
        [anon_sym_COLON] = ACTIONS(289),
        [anon_sym_LPAREN] = ACTIONS(291),
        [sym_comment] = ACTIONS(65),
    },
    [76] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(258),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [77] = {
        [sym_expression_list] = STATE(78),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [78] = {
        [anon_sym_RPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(65),
    },
    [79] = {
        [aux_sym_print_statement_repeat1] = STATE(80),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(297),
        [anon_sym_finally] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_in] = ACTIONS(299),
        [anon_sym_except] = ACTIONS(299),
        [anon_sym_finally] = ACTIONS(299),
        [anon_sym_RPAREN] = ACTIONS(299),
        [sym_comment] = ACTIONS(65),
    },
    [81] = {
        [anon_sym_COLON] = ACTIONS(301),
        [sym_comment] = ACTIONS(65),
    },
    [82] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(85),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [83] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_module_repeat1] = STATE(98),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(317),
    },
    [84] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_elif] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [anon_sym_def] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(319),
    },
    [85] = {
        [ts_builtin_sym_end] = ACTIONS(325),
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_print] = ACTIONS(327),
        [anon_sym_return] = ACTIONS(327),
        [anon_sym_del] = ACTIONS(327),
        [anon_sym_if] = ACTIONS(327),
        [anon_sym_for] = ACTIONS(327),
        [anon_sym_while] = ACTIONS(327),
        [anon_sym_try] = ACTIONS(327),
        [anon_sym_with] = ACTIONS(327),
        [anon_sym_def] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(327),
        [anon_sym_AT] = ACTIONS(325),
        [sym_number] = ACTIONS(327),
        [sym_identifier] = ACTIONS(329),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(325),
    },
    [86] = {
        [sym__expression] = STATE(236),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [87] = {
        [sym_expression_list] = STATE(230),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [88] = {
        [sym__expression] = STATE(226),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [89] = {
        [anon_sym_COLON] = ACTIONS(331),
        [sym_comment] = ACTIONS(65),
    },
    [90] = {
        [sym_with_item] = STATE(176),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [91] = {
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(65),
    },
    [92] = {
        [sym_identifier] = ACTIONS(335),
        [sym_comment] = ACTIONS(65),
    },
    [93] = {
        [ts_builtin_sym_end] = ACTIONS(337),
        [anon_sym_SEMI] = ACTIONS(337),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_del] = ACTIONS(339),
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
        [anon_sym_AT] = ACTIONS(337),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(337),
    },
    [94] = {
        [anon_sym_print] = ACTIONS(121),
        [anon_sym_return] = ACTIONS(121),
        [anon_sym_del] = ACTIONS(121),
        [anon_sym_if] = ACTIONS(121),
        [anon_sym_for] = ACTIONS(121),
        [anon_sym_while] = ACTIONS(121),
        [anon_sym_try] = ACTIONS(121),
        [anon_sym_with] = ACTIONS(121),
        [anon_sym_def] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(119),
    },
    [95] = {
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(343),
    },
    [96] = {
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_return] = ACTIONS(135),
        [anon_sym_del] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_AT] = ACTIONS(133),
        [sym_number] = ACTIONS(135),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(133),
    },
    [97] = {
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(139),
    },
    [98] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(345),
    },
    [99] = {
        [sym_function_definition] = STATE(100),
        [sym_class_definition] = STATE(100),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(347),
        [anon_sym_class] = ACTIONS(349),
        [anon_sym_AT] = ACTIONS(95),
        [sym_comment] = ACTIONS(65),
    },
    [100] = {
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_return] = ACTIONS(167),
        [anon_sym_del] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_while] = ACTIONS(167),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(167),
        [anon_sym_def] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(165),
        [sym_number] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(165),
    },
    [101] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_elif] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(351),
    },
    [102] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_del] = ACTIONS(177),
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
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(175),
    },
    [103] = {
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_return] = ACTIONS(243),
        [anon_sym_del] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_for] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(243),
        [anon_sym_with] = ACTIONS(243),
        [anon_sym_def] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(243),
        [anon_sym_AT] = ACTIONS(241),
        [sym_number] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(241),
    },
    [104] = {
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(359),
        [sym_comment] = ACTIONS(65),
    },
    [105] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(143),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [106] = {
        [sym_expression_list] = STATE(107),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [107] = {
        [anon_sym_RPAREN] = ACTIONS(373),
        [sym_comment] = ACTIONS(65),
    },
    [108] = {
        [anon_sym_COLON] = ACTIONS(375),
        [sym_comment] = ACTIONS(65),
    },
    [109] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(117),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [110] = {
        [sym__expression] = STATE(141),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [111] = {
        [sym_expression_list] = STATE(140),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [112] = {
        [sym_expression_list] = STATE(133),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [113] = {
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_COMMA] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(113),
        [anon_sym_del] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_elif] = ACTIONS(113),
        [anon_sym_else] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_except] = ACTIONS(113),
        [anon_sym_finally] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_AT] = ACTIONS(111),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(111),
    },
    [114] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_module_repeat1] = STATE(131),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(377),
    },
    [115] = {
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_elif] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [anon_sym_def] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(319),
    },
    [116] = {
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_del] = ACTIONS(129),
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
        [anon_sym_AT] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(127),
    },
    [117] = {
        [anon_sym_print] = ACTIONS(327),
        [anon_sym_return] = ACTIONS(327),
        [anon_sym_del] = ACTIONS(327),
        [anon_sym_if] = ACTIONS(327),
        [anon_sym_for] = ACTIONS(327),
        [anon_sym_while] = ACTIONS(327),
        [anon_sym_try] = ACTIONS(327),
        [anon_sym_with] = ACTIONS(327),
        [anon_sym_def] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(327),
        [anon_sym_AT] = ACTIONS(325),
        [sym_number] = ACTIONS(327),
        [sym_identifier] = ACTIONS(329),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(325),
    },
    [118] = {
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
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
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(381),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(147),
    },
    [119] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [120] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(383),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [121] = {
        [aux_sym_subscript_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(387),
        [sym_comment] = ACTIONS(65),
    },
    [122] = {
        [aux_sym_subscript_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(387),
        [sym_comment] = ACTIONS(65),
    },
    [123] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(389),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [124] = {
        [anon_sym_print] = ACTIONS(199),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_return] = ACTIONS(199),
        [anon_sym_del] = ACTIONS(199),
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
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_number] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(197),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_RBRACK] = ACTIONS(389),
        [sym_comment] = ACTIONS(65),
    },
    [126] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(393),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [127] = {
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(211),
        [anon_sym_del] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_def] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(211),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(209),
    },
    [128] = {
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_return] = ACTIONS(219),
        [anon_sym_del] = ACTIONS(219),
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
        [anon_sym_AT] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(217),
    },
    [129] = {
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(235),
    },
    [130] = {
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_del] = ACTIONS(339),
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
        [anon_sym_AT] = ACTIONS(337),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(337),
    },
    [131] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(395),
    },
    [132] = {
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_elif] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(351),
    },
    [133] = {
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_return] = ACTIONS(397),
        [anon_sym_del] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_elif] = ACTIONS(397),
        [anon_sym_else] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_try] = ACTIONS(397),
        [anon_sym_except] = ACTIONS(397),
        [anon_sym_finally] = ACTIONS(397),
        [anon_sym_with] = ACTIONS(397),
        [anon_sym_def] = ACTIONS(397),
        [anon_sym_class] = ACTIONS(397),
        [anon_sym_AT] = ACTIONS(399),
        [sym_number] = ACTIONS(397),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(399),
    },
    [134] = {
        [aux_sym_print_statement_repeat1] = STATE(136),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(381),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(297),
    },
    [135] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [136] = {
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(299),
    },
    [137] = {
        [sym__expression] = STATE(138),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [138] = {
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(381),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(273),
    },
    [139] = {
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_elif] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_except] = ACTIONS(419),
        [anon_sym_finally] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(381),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(275),
    },
    [140] = {
        [anon_sym_print] = ACTIONS(423),
        [anon_sym_return] = ACTIONS(423),
        [anon_sym_del] = ACTIONS(423),
        [anon_sym_if] = ACTIONS(423),
        [anon_sym_elif] = ACTIONS(423),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_while] = ACTIONS(423),
        [anon_sym_try] = ACTIONS(423),
        [anon_sym_except] = ACTIONS(423),
        [anon_sym_finally] = ACTIONS(423),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(423),
        [anon_sym_AT] = ACTIONS(425),
        [sym_number] = ACTIONS(423),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(425),
    },
    [141] = {
        [aux_sym_print_statement_repeat1] = STATE(142),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(381),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(431),
    },
    [142] = {
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(437),
    },
    [143] = {
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(443),
    },
    [144] = {
        [sym_parameters] = STATE(146),
        [anon_sym_LPAREN] = ACTIONS(447),
        [sym_comment] = ACTIONS(65),
    },
    [145] = {
        [sym_default_parameter] = STATE(152),
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [aux_sym_parameters_repeat1] = STATE(155),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(65),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(455),
        [sym_comment] = ACTIONS(65),
    },
    [147] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(148),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [148] = {
        [anon_sym_print] = ACTIONS(457),
        [anon_sym_return] = ACTIONS(457),
        [anon_sym_del] = ACTIONS(457),
        [anon_sym_if] = ACTIONS(457),
        [anon_sym_for] = ACTIONS(457),
        [anon_sym_while] = ACTIONS(457),
        [anon_sym_try] = ACTIONS(457),
        [anon_sym_with] = ACTIONS(457),
        [anon_sym_def] = ACTIONS(457),
        [anon_sym_class] = ACTIONS(457),
        [anon_sym_AT] = ACTIONS(459),
        [sym_number] = ACTIONS(457),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(459),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(463),
        [sym_comment] = ACTIONS(65),
    },
    [150] = {
        [anon_sym_STAR] = ACTIONS(465),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(65),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_RPAREN] = ACTIONS(471),
        [anon_sym_EQ] = ACTIONS(473),
        [sym_comment] = ACTIONS(65),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(65),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(65),
    },
    [154] = {
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(65),
    },
    [155] = {
        [sym_default_parameter] = STATE(157),
        [sym_list_splat_parameter] = STATE(158),
        [sym_dictionary_splat_parameter] = STATE(159),
        [anon_sym_STAR] = ACTIONS(451),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(65),
    },
    [156] = {
        [anon_sym_COMMA] = ACTIONS(479),
        [anon_sym_RPAREN] = ACTIONS(481),
        [anon_sym_EQ] = ACTIONS(473),
        [sym_comment] = ACTIONS(65),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(479),
        [anon_sym_RPAREN] = ACTIONS(481),
        [sym_comment] = ACTIONS(65),
    },
    [158] = {
        [anon_sym_COMMA] = ACTIONS(483),
        [anon_sym_RPAREN] = ACTIONS(481),
        [sym_comment] = ACTIONS(65),
    },
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(481),
        [sym_comment] = ACTIONS(65),
    },
    [160] = {
        [anon_sym_COLON] = ACTIONS(485),
        [sym_comment] = ACTIONS(65),
    },
    [161] = {
        [sym_dictionary_splat_parameter] = STATE(163),
        [anon_sym_STAR] = ACTIONS(487),
        [sym_comment] = ACTIONS(65),
    },
    [162] = {
        [anon_sym_STAR] = ACTIONS(465),
        [sym_comment] = ACTIONS(65),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(489),
        [sym_comment] = ACTIONS(65),
    },
    [164] = {
        [anon_sym_COLON] = ACTIONS(491),
        [sym_comment] = ACTIONS(65),
    },
    [165] = {
        [sym_identifier] = ACTIONS(493),
        [sym_comment] = ACTIONS(65),
    },
    [166] = {
        [anon_sym_RPAREN] = ACTIONS(495),
        [sym_comment] = ACTIONS(65),
    },
    [167] = {
        [anon_sym_RPAREN] = ACTIONS(497),
        [anon_sym_STAR] = ACTIONS(499),
        [sym_identifier] = ACTIONS(501),
        [sym_comment] = ACTIONS(65),
    },
    [168] = {
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(65),
    },
    [169] = {
        [sym__expression] = STATE(170),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [170] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_RPAREN] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(507),
        [sym_comment] = ACTIONS(65),
    },
    [172] = {
        [sym_dictionary_splat_parameter] = STATE(173),
        [anon_sym_STAR] = ACTIONS(487),
        [sym_comment] = ACTIONS(65),
    },
    [173] = {
        [anon_sym_RPAREN] = ACTIONS(497),
        [sym_comment] = ACTIONS(65),
    },
    [174] = {
        [anon_sym_RPAREN] = ACTIONS(481),
        [anon_sym_STAR] = ACTIONS(509),
        [sym_identifier] = ACTIONS(511),
        [sym_comment] = ACTIONS(65),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_RPAREN] = ACTIONS(513),
        [sym_comment] = ACTIONS(65),
    },
    [176] = {
        [aux_sym_with_statement_repeat1] = STATE(182),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_COLON] = ACTIONS(517),
        [sym_comment] = ACTIONS(65),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(519),
        [anon_sym_COLON] = ACTIONS(519),
        [anon_sym_as] = ACTIONS(521),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [178] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(523),
        [anon_sym_COLON] = ACTIONS(523),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [180] = {
        [sym_with_item] = STATE(188),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [181] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(187),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [182] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_COLON] = ACTIONS(527),
        [sym_comment] = ACTIONS(65),
    },
    [183] = {
        [sym_with_item] = STATE(186),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [184] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(185),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [185] = {
        [anon_sym_print] = ACTIONS(529),
        [anon_sym_return] = ACTIONS(529),
        [anon_sym_del] = ACTIONS(529),
        [anon_sym_if] = ACTIONS(529),
        [anon_sym_for] = ACTIONS(529),
        [anon_sym_while] = ACTIONS(529),
        [anon_sym_try] = ACTIONS(529),
        [anon_sym_with] = ACTIONS(529),
        [anon_sym_def] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(531),
        [sym_number] = ACTIONS(529),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(531),
    },
    [186] = {
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_COLON] = ACTIONS(535),
        [sym_comment] = ACTIONS(65),
    },
    [187] = {
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_del] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [anon_sym_AT] = ACTIONS(539),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(541),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(539),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(543),
        [anon_sym_COLON] = ACTIONS(543),
        [sym_comment] = ACTIONS(65),
    },
    [189] = {
        [sym__simple_statement] = STATE(194),
        [sym_print_statement] = STATE(195),
        [sym_expression_statement] = STATE(195),
        [sym_return_statement] = STATE(195),
        [sym_delete_statement] = STATE(195),
        [sym__suite] = STATE(196),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_del] = ACTIONS(549),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(553),
    },
    [190] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [191] = {
        [sym_expression_list] = STATE(223),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [192] = {
        [sym_expression_list] = STATE(222),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [193] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_module_repeat1] = STATE(220),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(555),
    },
    [194] = {
        [anon_sym_except] = ACTIONS(319),
        [anon_sym_finally] = ACTIONS(319),
        [sym_comment] = ACTIONS(65),
    },
    [195] = {
        [anon_sym_except] = ACTIONS(127),
        [anon_sym_finally] = ACTIONS(127),
        [sym_comment] = ACTIONS(65),
    },
    [196] = {
        [sym_except_clause] = STATE(200),
        [sym_finally_clause] = STATE(201),
        [aux_sym_try_statement_repeat1] = STATE(202),
        [anon_sym_except] = ACTIONS(557),
        [anon_sym_finally] = ACTIONS(559),
        [sym_comment] = ACTIONS(65),
    },
    [197] = {
        [anon_sym_except] = ACTIONS(147),
        [anon_sym_finally] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [198] = {
        [sym__expression] = STATE(212),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [199] = {
        [anon_sym_COLON] = ACTIONS(561),
        [sym_comment] = ACTIONS(65),
    },
    [200] = {
        [anon_sym_print] = ACTIONS(563),
        [anon_sym_return] = ACTIONS(563),
        [anon_sym_del] = ACTIONS(563),
        [anon_sym_if] = ACTIONS(563),
        [anon_sym_else] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(563),
        [anon_sym_while] = ACTIONS(563),
        [anon_sym_try] = ACTIONS(563),
        [anon_sym_except] = ACTIONS(563),
        [anon_sym_finally] = ACTIONS(563),
        [anon_sym_with] = ACTIONS(563),
        [anon_sym_def] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_AT] = ACTIONS(565),
        [sym_number] = ACTIONS(563),
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(565),
    },
    [201] = {
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_del] = ACTIONS(569),
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
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(571),
    },
    [202] = {
        [sym_else_clause] = STATE(204),
        [sym_except_clause] = STATE(205),
        [sym_finally_clause] = STATE(206),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_del] = ACTIONS(569),
        [anon_sym_if] = ACTIONS(569),
        [anon_sym_else] = ACTIONS(575),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_while] = ACTIONS(569),
        [anon_sym_try] = ACTIONS(569),
        [anon_sym_except] = ACTIONS(577),
        [anon_sym_finally] = ACTIONS(579),
        [anon_sym_with] = ACTIONS(569),
        [anon_sym_def] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_AT] = ACTIONS(571),
        [sym_number] = ACTIONS(569),
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(571),
    },
    [203] = {
        [anon_sym_COLON] = ACTIONS(581),
        [sym_comment] = ACTIONS(65),
    },
    [204] = {
        [sym_finally_clause] = STATE(207),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_finally] = ACTIONS(579),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(585),
    },
    [205] = {
        [anon_sym_print] = ACTIONS(589),
        [anon_sym_return] = ACTIONS(589),
        [anon_sym_del] = ACTIONS(589),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(589),
        [anon_sym_while] = ACTIONS(589),
        [anon_sym_try] = ACTIONS(589),
        [anon_sym_except] = ACTIONS(589),
        [anon_sym_finally] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(589),
        [anon_sym_def] = ACTIONS(589),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(591),
        [sym_number] = ACTIONS(589),
        [sym_identifier] = ACTIONS(593),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(591),
    },
    [206] = {
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(585),
    },
    [207] = {
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(597),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(597),
    },
    [208] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(209),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [209] = {
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_return] = ACTIONS(601),
        [anon_sym_del] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(603),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(605),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(603),
    },
    [210] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(211),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [211] = {
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_return] = ACTIONS(607),
        [anon_sym_del] = ACTIONS(607),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_def] = ACTIONS(607),
        [anon_sym_class] = ACTIONS(607),
        [anon_sym_AT] = ACTIONS(609),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(609),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(615),
        [anon_sym_as] = ACTIONS(613),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [213] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [214] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(218),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [215] = {
        [anon_sym_COLON] = ACTIONS(617),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [216] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(217),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [217] = {
        [anon_sym_print] = ACTIONS(619),
        [anon_sym_return] = ACTIONS(619),
        [anon_sym_del] = ACTIONS(619),
        [anon_sym_if] = ACTIONS(619),
        [anon_sym_else] = ACTIONS(619),
        [anon_sym_for] = ACTIONS(619),
        [anon_sym_while] = ACTIONS(619),
        [anon_sym_try] = ACTIONS(619),
        [anon_sym_except] = ACTIONS(619),
        [anon_sym_finally] = ACTIONS(619),
        [anon_sym_with] = ACTIONS(619),
        [anon_sym_def] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(619),
        [anon_sym_AT] = ACTIONS(621),
        [sym_number] = ACTIONS(619),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(621),
    },
    [218] = {
        [anon_sym_print] = ACTIONS(625),
        [anon_sym_return] = ACTIONS(625),
        [anon_sym_del] = ACTIONS(625),
        [anon_sym_if] = ACTIONS(625),
        [anon_sym_else] = ACTIONS(625),
        [anon_sym_for] = ACTIONS(625),
        [anon_sym_while] = ACTIONS(625),
        [anon_sym_try] = ACTIONS(625),
        [anon_sym_except] = ACTIONS(625),
        [anon_sym_finally] = ACTIONS(625),
        [anon_sym_with] = ACTIONS(625),
        [anon_sym_def] = ACTIONS(625),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_AT] = ACTIONS(627),
        [sym_number] = ACTIONS(625),
        [sym_identifier] = ACTIONS(629),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(627),
    },
    [219] = {
        [anon_sym_except] = ACTIONS(337),
        [anon_sym_finally] = ACTIONS(337),
        [sym_comment] = ACTIONS(65),
    },
    [220] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(631),
    },
    [221] = {
        [anon_sym_except] = ACTIONS(351),
        [anon_sym_finally] = ACTIONS(351),
        [sym_comment] = ACTIONS(65),
    },
    [222] = {
        [anon_sym_except] = ACTIONS(399),
        [anon_sym_finally] = ACTIONS(399),
        [sym_comment] = ACTIONS(65),
    },
    [223] = {
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [sym_comment] = ACTIONS(65),
    },
    [224] = {
        [aux_sym_print_statement_repeat1] = STATE(225),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [225] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_except] = ACTIONS(437),
        [anon_sym_finally] = ACTIONS(437),
        [sym_comment] = ACTIONS(65),
    },
    [226] = {
        [anon_sym_COLON] = ACTIONS(633),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [227] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(228),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [228] = {
        [sym_else_clause] = STATE(229),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(575),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(637),
    },
    [229] = {
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(643),
    },
    [230] = {
        [anon_sym_in] = ACTIONS(647),
        [sym_comment] = ACTIONS(65),
    },
    [231] = {
        [sym_expression_list] = STATE(232),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [232] = {
        [anon_sym_COLON] = ACTIONS(649),
        [sym_comment] = ACTIONS(65),
    },
    [233] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(234),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [234] = {
        [sym_else_clause] = STATE(235),
        [anon_sym_print] = ACTIONS(651),
        [anon_sym_return] = ACTIONS(651),
        [anon_sym_del] = ACTIONS(651),
        [anon_sym_if] = ACTIONS(651),
        [anon_sym_else] = ACTIONS(575),
        [anon_sym_for] = ACTIONS(651),
        [anon_sym_while] = ACTIONS(651),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(651),
        [anon_sym_def] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(651),
        [anon_sym_AT] = ACTIONS(653),
        [sym_number] = ACTIONS(651),
        [sym_identifier] = ACTIONS(655),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(653),
    },
    [235] = {
        [anon_sym_print] = ACTIONS(657),
        [anon_sym_return] = ACTIONS(657),
        [anon_sym_del] = ACTIONS(657),
        [anon_sym_if] = ACTIONS(657),
        [anon_sym_for] = ACTIONS(657),
        [anon_sym_while] = ACTIONS(657),
        [anon_sym_try] = ACTIONS(657),
        [anon_sym_with] = ACTIONS(657),
        [anon_sym_def] = ACTIONS(657),
        [anon_sym_class] = ACTIONS(657),
        [anon_sym_AT] = ACTIONS(659),
        [sym_number] = ACTIONS(657),
        [sym_identifier] = ACTIONS(661),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(659),
    },
    [236] = {
        [anon_sym_COLON] = ACTIONS(663),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [237] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(238),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [238] = {
        [sym_elif_clause] = STATE(240),
        [sym_else_clause] = STATE(241),
        [aux_sym_if_statement_repeat1] = STATE(242),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_elif] = ACTIONS(667),
        [anon_sym_else] = ACTIONS(575),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(669),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(669),
    },
    [239] = {
        [sym__expression] = STATE(245),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [240] = {
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_elif] = ACTIONS(673),
        [anon_sym_else] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(675),
    },
    [241] = {
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(681),
    },
    [242] = {
        [sym_elif_clause] = STATE(243),
        [sym_else_clause] = STATE(244),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_elif] = ACTIONS(667),
        [anon_sym_else] = ACTIONS(575),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(681),
    },
    [243] = {
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_elif] = ACTIONS(685),
        [anon_sym_else] = ACTIONS(685),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(687),
    },
    [244] = {
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(693),
    },
    [245] = {
        [anon_sym_COLON] = ACTIONS(697),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [246] = {
        [sym__simple_statement] = STATE(115),
        [sym_print_statement] = STATE(116),
        [sym_expression_statement] = STATE(116),
        [sym_return_statement] = STATE(116),
        [sym_delete_statement] = STATE(116),
        [sym__suite] = STATE(247),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(113),
        [sym_subscript] = STATE(113),
        [anon_sym_print] = ACTIONS(361),
        [anon_sym_return] = ACTIONS(363),
        [anon_sym_del] = ACTIONS(365),
        [sym_number] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(371),
    },
    [247] = {
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_elif] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(701),
    },
    [248] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_return] = ACTIONS(397),
        [anon_sym_del] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_elif] = ACTIONS(397),
        [anon_sym_else] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_try] = ACTIONS(397),
        [anon_sym_except] = ACTIONS(397),
        [anon_sym_finally] = ACTIONS(397),
        [anon_sym_with] = ACTIONS(397),
        [anon_sym_def] = ACTIONS(397),
        [anon_sym_class] = ACTIONS(397),
        [anon_sym_AT] = ACTIONS(399),
        [sym_number] = ACTIONS(397),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(399),
    },
    [249] = {
        [aux_sym_print_statement_repeat1] = STATE(251),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(153),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
    },
    [250] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
    },
    [252] = {
        [sym__expression] = STATE(253),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(153),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_elif] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_except] = ACTIONS(419),
        [anon_sym_finally] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(153),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(423),
        [anon_sym_return] = ACTIONS(423),
        [anon_sym_del] = ACTIONS(423),
        [anon_sym_if] = ACTIONS(423),
        [anon_sym_elif] = ACTIONS(423),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_while] = ACTIONS(423),
        [anon_sym_try] = ACTIONS(423),
        [anon_sym_except] = ACTIONS(423),
        [anon_sym_finally] = ACTIONS(423),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(423),
        [anon_sym_AT] = ACTIONS(425),
        [sym_number] = ACTIONS(423),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(425),
    },
    [256] = {
        [aux_sym_print_statement_repeat1] = STATE(257),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(153),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(443),
    },
    [259] = {
        [sym_parameters] = STATE(260),
        [anon_sym_LPAREN] = ACTIONS(447),
        [sym_comment] = ACTIONS(65),
    },
    [260] = {
        [anon_sym_COLON] = ACTIONS(709),
        [sym_comment] = ACTIONS(65),
    },
    [261] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(262),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [262] = {
        [ts_builtin_sym_end] = ACTIONS(459),
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_print] = ACTIONS(457),
        [anon_sym_return] = ACTIONS(457),
        [anon_sym_del] = ACTIONS(457),
        [anon_sym_if] = ACTIONS(457),
        [anon_sym_for] = ACTIONS(457),
        [anon_sym_while] = ACTIONS(457),
        [anon_sym_try] = ACTIONS(457),
        [anon_sym_with] = ACTIONS(457),
        [anon_sym_def] = ACTIONS(457),
        [anon_sym_class] = ACTIONS(457),
        [anon_sym_AT] = ACTIONS(459),
        [sym_number] = ACTIONS(457),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(459),
    },
    [263] = {
        [aux_sym_with_statement_repeat1] = STATE(265),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_COLON] = ACTIONS(711),
        [sym_comment] = ACTIONS(65),
    },
    [264] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(268),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [265] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_COLON] = ACTIONS(713),
        [sym_comment] = ACTIONS(65),
    },
    [266] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(267),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(531),
        [anon_sym_SEMI] = ACTIONS(531),
        [anon_sym_print] = ACTIONS(529),
        [anon_sym_return] = ACTIONS(529),
        [anon_sym_del] = ACTIONS(529),
        [anon_sym_if] = ACTIONS(529),
        [anon_sym_for] = ACTIONS(529),
        [anon_sym_while] = ACTIONS(529),
        [anon_sym_try] = ACTIONS(529),
        [anon_sym_with] = ACTIONS(529),
        [anon_sym_def] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(531),
        [sym_number] = ACTIONS(529),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(531),
    },
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_del] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [anon_sym_AT] = ACTIONS(539),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(541),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(539),
    },
    [269] = {
        [sym__simple_statement] = STATE(194),
        [sym_print_statement] = STATE(195),
        [sym_expression_statement] = STATE(195),
        [sym_return_statement] = STATE(195),
        [sym_delete_statement] = STATE(195),
        [sym__suite] = STATE(270),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_del] = ACTIONS(549),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(553),
    },
    [270] = {
        [sym_except_clause] = STATE(273),
        [sym_finally_clause] = STATE(274),
        [aux_sym_try_statement_repeat1] = STATE(275),
        [anon_sym_except] = ACTIONS(715),
        [anon_sym_finally] = ACTIONS(717),
        [sym_comment] = ACTIONS(65),
    },
    [271] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [272] = {
        [anon_sym_COLON] = ACTIONS(719),
        [sym_comment] = ACTIONS(65),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_SEMI] = ACTIONS(565),
        [anon_sym_print] = ACTIONS(563),
        [anon_sym_return] = ACTIONS(563),
        [anon_sym_del] = ACTIONS(563),
        [anon_sym_if] = ACTIONS(563),
        [anon_sym_else] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(563),
        [anon_sym_while] = ACTIONS(563),
        [anon_sym_try] = ACTIONS(563),
        [anon_sym_except] = ACTIONS(563),
        [anon_sym_finally] = ACTIONS(563),
        [anon_sym_with] = ACTIONS(563),
        [anon_sym_def] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_AT] = ACTIONS(565),
        [sym_number] = ACTIONS(563),
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(565),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_del] = ACTIONS(569),
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
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(571),
    },
    [275] = {
        [sym_else_clause] = STATE(277),
        [sym_except_clause] = STATE(278),
        [sym_finally_clause] = STATE(279),
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_del] = ACTIONS(569),
        [anon_sym_if] = ACTIONS(569),
        [anon_sym_else] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_while] = ACTIONS(569),
        [anon_sym_try] = ACTIONS(569),
        [anon_sym_except] = ACTIONS(723),
        [anon_sym_finally] = ACTIONS(725),
        [anon_sym_with] = ACTIONS(569),
        [anon_sym_def] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_AT] = ACTIONS(571),
        [sym_number] = ACTIONS(569),
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(571),
    },
    [276] = {
        [anon_sym_COLON] = ACTIONS(727),
        [sym_comment] = ACTIONS(65),
    },
    [277] = {
        [sym_finally_clause] = STATE(280),
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_finally] = ACTIONS(725),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(585),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(591),
        [anon_sym_SEMI] = ACTIONS(591),
        [anon_sym_print] = ACTIONS(589),
        [anon_sym_return] = ACTIONS(589),
        [anon_sym_del] = ACTIONS(589),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(589),
        [anon_sym_while] = ACTIONS(589),
        [anon_sym_try] = ACTIONS(589),
        [anon_sym_except] = ACTIONS(589),
        [anon_sym_finally] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(589),
        [anon_sym_def] = ACTIONS(589),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(591),
        [sym_number] = ACTIONS(589),
        [sym_identifier] = ACTIONS(593),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(591),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(585),
    },
    [280] = {
        [ts_builtin_sym_end] = ACTIONS(597),
        [anon_sym_SEMI] = ACTIONS(597),
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(597),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(597),
    },
    [281] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(282),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [282] = {
        [ts_builtin_sym_end] = ACTIONS(603),
        [anon_sym_SEMI] = ACTIONS(603),
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_return] = ACTIONS(601),
        [anon_sym_del] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(603),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(605),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(603),
    },
    [283] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(284),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [284] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_SEMI] = ACTIONS(609),
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_return] = ACTIONS(607),
        [anon_sym_del] = ACTIONS(607),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_def] = ACTIONS(607),
        [anon_sym_class] = ACTIONS(607),
        [anon_sym_AT] = ACTIONS(609),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(609),
    },
    [285] = {
        [anon_sym_COMMA] = ACTIONS(729),
        [anon_sym_COLON] = ACTIONS(731),
        [anon_sym_as] = ACTIONS(729),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [286] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [287] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(291),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [288] = {
        [anon_sym_COLON] = ACTIONS(733),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [289] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(290),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [290] = {
        [ts_builtin_sym_end] = ACTIONS(621),
        [anon_sym_SEMI] = ACTIONS(621),
        [anon_sym_print] = ACTIONS(619),
        [anon_sym_return] = ACTIONS(619),
        [anon_sym_del] = ACTIONS(619),
        [anon_sym_if] = ACTIONS(619),
        [anon_sym_else] = ACTIONS(619),
        [anon_sym_for] = ACTIONS(619),
        [anon_sym_while] = ACTIONS(619),
        [anon_sym_try] = ACTIONS(619),
        [anon_sym_except] = ACTIONS(619),
        [anon_sym_finally] = ACTIONS(619),
        [anon_sym_with] = ACTIONS(619),
        [anon_sym_def] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(619),
        [anon_sym_AT] = ACTIONS(621),
        [sym_number] = ACTIONS(619),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(621),
    },
    [291] = {
        [ts_builtin_sym_end] = ACTIONS(627),
        [anon_sym_SEMI] = ACTIONS(627),
        [anon_sym_print] = ACTIONS(625),
        [anon_sym_return] = ACTIONS(625),
        [anon_sym_del] = ACTIONS(625),
        [anon_sym_if] = ACTIONS(625),
        [anon_sym_else] = ACTIONS(625),
        [anon_sym_for] = ACTIONS(625),
        [anon_sym_while] = ACTIONS(625),
        [anon_sym_try] = ACTIONS(625),
        [anon_sym_except] = ACTIONS(625),
        [anon_sym_finally] = ACTIONS(625),
        [anon_sym_with] = ACTIONS(625),
        [anon_sym_def] = ACTIONS(625),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_AT] = ACTIONS(627),
        [sym_number] = ACTIONS(625),
        [sym_identifier] = ACTIONS(629),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(627),
    },
    [292] = {
        [anon_sym_COLON] = ACTIONS(735),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [293] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(294),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [294] = {
        [sym_else_clause] = STATE(295),
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(637),
    },
    [295] = {
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(643),
    },
    [296] = {
        [anon_sym_in] = ACTIONS(737),
        [sym_comment] = ACTIONS(65),
    },
    [297] = {
        [sym_expression_list] = STATE(298),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [298] = {
        [anon_sym_COLON] = ACTIONS(739),
        [sym_comment] = ACTIONS(65),
    },
    [299] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(300),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [300] = {
        [sym_else_clause] = STATE(301),
        [ts_builtin_sym_end] = ACTIONS(653),
        [anon_sym_SEMI] = ACTIONS(653),
        [anon_sym_print] = ACTIONS(651),
        [anon_sym_return] = ACTIONS(651),
        [anon_sym_del] = ACTIONS(651),
        [anon_sym_if] = ACTIONS(651),
        [anon_sym_else] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(651),
        [anon_sym_while] = ACTIONS(651),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(651),
        [anon_sym_def] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(651),
        [anon_sym_AT] = ACTIONS(653),
        [sym_number] = ACTIONS(651),
        [sym_identifier] = ACTIONS(655),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(653),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(659),
        [anon_sym_SEMI] = ACTIONS(659),
        [anon_sym_print] = ACTIONS(657),
        [anon_sym_return] = ACTIONS(657),
        [anon_sym_del] = ACTIONS(657),
        [anon_sym_if] = ACTIONS(657),
        [anon_sym_for] = ACTIONS(657),
        [anon_sym_while] = ACTIONS(657),
        [anon_sym_try] = ACTIONS(657),
        [anon_sym_with] = ACTIONS(657),
        [anon_sym_def] = ACTIONS(657),
        [anon_sym_class] = ACTIONS(657),
        [anon_sym_AT] = ACTIONS(659),
        [sym_number] = ACTIONS(657),
        [sym_identifier] = ACTIONS(661),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(659),
    },
    [302] = {
        [anon_sym_COLON] = ACTIONS(741),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [303] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(304),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [304] = {
        [sym_elif_clause] = STATE(306),
        [sym_else_clause] = STATE(307),
        [aux_sym_if_statement_repeat1] = STATE(308),
        [ts_builtin_sym_end] = ACTIONS(669),
        [anon_sym_SEMI] = ACTIONS(669),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_elif] = ACTIONS(743),
        [anon_sym_else] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(669),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(669),
    },
    [305] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_elif] = ACTIONS(673),
        [anon_sym_else] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(675),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(681),
    },
    [308] = {
        [sym_elif_clause] = STATE(309),
        [sym_else_clause] = STATE(310),
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_elif] = ACTIONS(743),
        [anon_sym_else] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(681),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_elif] = ACTIONS(685),
        [anon_sym_else] = ACTIONS(685),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(687),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(693),
    },
    [311] = {
        [anon_sym_COLON] = ACTIONS(745),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [312] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__suite] = STATE(313),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(293),
    },
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_elif] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(701),
    },
    [314] = {
        [sym__expression] = STATE(566),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [315] = {
        [sym_with_item] = STATE(564),
        [sym_dictionary_splat_parameter] = STATE(476),
        [sym__expression] = STATE(565),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_RPAREN] = ACTIONS(749),
        [anon_sym_STAR] = ACTIONS(751),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(755),
        [anon_sym_RBRACK] = ACTIONS(757),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(65),
    },
    [316] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(554),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [317] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(554),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [318] = {
        [sym__expression] = STATE(550),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [319] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(361),
        [sym__expression] = STATE(422),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(767),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [320] = {
        [sym__expression] = STATE(531),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [321] = {
        [anon_sym_COLON] = ACTIONS(773),
        [sym_comment] = ACTIONS(65),
    },
    [322] = {
        [sym_expression_list] = STATE(513),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [323] = {
        [sym_expression_list] = STATE(512),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [324] = {
        [sym__expression] = STATE(508),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [325] = {
        [anon_sym_COLON] = ACTIONS(775),
        [sym_comment] = ACTIONS(65),
    },
    [326] = {
        [sym__expression] = STATE(501),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [327] = {
        [sym__expression] = STATE(500),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [328] = {
        [anon_sym_COLON] = ACTIONS(777),
        [sym_comment] = ACTIONS(65),
    },
    [329] = {
        [sym_with_item] = STATE(497),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [330] = {
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(65),
    },
    [331] = {
        [sym_default_parameter] = STATE(152),
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [aux_sym_parameters_repeat1] = STATE(155),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(781),
        [sym_comment] = ACTIONS(65),
    },
    [332] = {
        [anon_sym_COLON] = ACTIONS(783),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(790),
    },
    [333] = {
        [anon_sym_STAR] = ACTIONS(465),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(65),
    },
    [334] = {
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(65),
    },
    [335] = {
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(65),
    },
    [336] = {
        [sym__expression] = STATE(489),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [337] = {
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(799),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [338] = {
        [aux_sym_subscript_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(801),
        [anon_sym_RBRACK] = ACTIONS(805),
        [sym_comment] = ACTIONS(65),
    },
    [339] = {
        [ts_builtin_sym_end] = ACTIONS(809),
        [anon_sym_SEMI] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(813),
        [anon_sym_COMMA] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(813),
        [anon_sym_del] = ACTIONS(813),
        [anon_sym_if] = ACTIONS(813),
        [anon_sym_COLON] = ACTIONS(809),
        [anon_sym_elif] = ACTIONS(813),
        [anon_sym_else] = ACTIONS(813),
        [anon_sym_for] = ACTIONS(813),
        [anon_sym_in] = ACTIONS(813),
        [anon_sym_while] = ACTIONS(813),
        [anon_sym_try] = ACTIONS(813),
        [anon_sym_except] = ACTIONS(813),
        [anon_sym_as] = ACTIONS(813),
        [anon_sym_finally] = ACTIONS(813),
        [anon_sym_with] = ACTIONS(813),
        [anon_sym_def] = ACTIONS(813),
        [anon_sym_RPAREN] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(813),
        [anon_sym_AT] = ACTIONS(809),
        [anon_sym_PLUS] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(809),
        [anon_sym_RBRACK] = ACTIONS(809),
        [sym_number] = ACTIONS(813),
        [sym_identifier] = ACTIONS(817),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(809),
        [sym__dedent] = ACTIONS(809),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_COMMA] = ACTIONS(111),
        [anon_sym_return] = ACTIONS(113),
        [anon_sym_del] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_COLON] = ACTIONS(111),
        [anon_sym_elif] = ACTIONS(113),
        [anon_sym_else] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_in] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_except] = ACTIONS(113),
        [anon_sym_as] = ACTIONS(113),
        [anon_sym_finally] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [anon_sym_RPAREN] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_AT] = ACTIONS(111),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(111),
        [sym__dedent] = ACTIONS(111),
    },
    [341] = {
        [sym_parameters] = STATE(356),
        [aux_sym_dotted_name_repeat1] = STATE(71),
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_print] = ACTIONS(113),
        [anon_sym_COMMA] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(113),
        [anon_sym_del] = ACTIONS(113),
        [anon_sym_if] = ACTIONS(113),
        [anon_sym_COLON] = ACTIONS(825),
        [anon_sym_elif] = ACTIONS(113),
        [anon_sym_else] = ACTIONS(113),
        [anon_sym_for] = ACTIONS(113),
        [anon_sym_in] = ACTIONS(113),
        [anon_sym_while] = ACTIONS(113),
        [anon_sym_try] = ACTIONS(113),
        [anon_sym_except] = ACTIONS(113),
        [anon_sym_as] = ACTIONS(113),
        [anon_sym_finally] = ACTIONS(113),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(113),
        [anon_sym_LPAREN] = ACTIONS(828),
        [anon_sym_RPAREN] = ACTIONS(833),
        [anon_sym_EQ] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_AT] = ACTIONS(111),
        [anon_sym_DOT] = ACTIONS(838),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(842),
        [sym__dedent] = ACTIONS(111),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_return] = ACTIONS(243),
        [anon_sym_del] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_for] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(243),
        [anon_sym_with] = ACTIONS(243),
        [anon_sym_def] = ACTIONS(850),
        [anon_sym_class] = ACTIONS(850),
        [anon_sym_AT] = ACTIONS(854),
        [sym_number] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [343] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_module_repeat1] = STATE(389),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(858),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(860),
        [anon_sym_SEMI] = ACTIONS(860),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_elif] = ACTIONS(863),
        [anon_sym_else] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_except] = ACTIONS(863),
        [anon_sym_finally] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(860),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(866),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(860),
        [sym__dedent] = ACTIONS(860),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(869),
        [anon_sym_SEMI] = ACTIONS(869),
        [anon_sym_print] = ACTIONS(872),
        [anon_sym_return] = ACTIONS(872),
        [anon_sym_del] = ACTIONS(872),
        [anon_sym_if] = ACTIONS(872),
        [anon_sym_for] = ACTIONS(872),
        [anon_sym_while] = ACTIONS(872),
        [anon_sym_try] = ACTIONS(872),
        [anon_sym_with] = ACTIONS(872),
        [anon_sym_def] = ACTIONS(872),
        [anon_sym_class] = ACTIONS(872),
        [anon_sym_AT] = ACTIONS(869),
        [sym_number] = ACTIONS(872),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(869),
        [sym__dedent] = ACTIONS(869),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_elif] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [anon_sym_def] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(878),
        [sym__dedent] = ACTIONS(319),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_return] = ACTIONS(129),
        [anon_sym_del] = ACTIONS(129),
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
        [anon_sym_AT] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [348] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_return] = ACTIONS(135),
        [anon_sym_del] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_AT] = ACTIONS(133),
        [sym_number] = ACTIONS(135),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(139),
        [sym__dedent] = ACTIONS(139),
    },
    [350] = {
        [ts_builtin_sym_end] = ACTIONS(881),
        [anon_sym_SEMI] = ACTIONS(881),
        [anon_sym_print] = ACTIONS(884),
        [anon_sym_return] = ACTIONS(884),
        [anon_sym_del] = ACTIONS(884),
        [anon_sym_if] = ACTIONS(884),
        [anon_sym_elif] = ACTIONS(884),
        [anon_sym_else] = ACTIONS(884),
        [anon_sym_for] = ACTIONS(884),
        [anon_sym_while] = ACTIONS(884),
        [anon_sym_try] = ACTIONS(884),
        [anon_sym_with] = ACTIONS(884),
        [anon_sym_def] = ACTIONS(884),
        [anon_sym_class] = ACTIONS(884),
        [anon_sym_AT] = ACTIONS(881),
        [sym_number] = ACTIONS(884),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(881),
        [sym__dedent] = ACTIONS(881),
    },
    [351] = {
        [sym_finally_clause] = STATE(406),
        [ts_builtin_sym_end] = ACTIONS(890),
        [anon_sym_SEMI] = ACTIONS(890),
        [anon_sym_print] = ACTIONS(896),
        [anon_sym_return] = ACTIONS(896),
        [anon_sym_del] = ACTIONS(896),
        [anon_sym_if] = ACTIONS(896),
        [anon_sym_for] = ACTIONS(896),
        [anon_sym_while] = ACTIONS(896),
        [anon_sym_try] = ACTIONS(896),
        [anon_sym_finally] = ACTIONS(902),
        [anon_sym_with] = ACTIONS(896),
        [anon_sym_def] = ACTIONS(896),
        [anon_sym_class] = ACTIONS(896),
        [anon_sym_AT] = ACTIONS(890),
        [sym_number] = ACTIONS(896),
        [sym_identifier] = ACTIONS(904),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(890),
        [sym__dedent] = ACTIONS(890),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(910),
        [anon_sym_SEMI] = ACTIONS(910),
        [anon_sym_print] = ACTIONS(913),
        [anon_sym_return] = ACTIONS(913),
        [anon_sym_del] = ACTIONS(913),
        [anon_sym_if] = ACTIONS(913),
        [anon_sym_else] = ACTIONS(913),
        [anon_sym_for] = ACTIONS(913),
        [anon_sym_while] = ACTIONS(913),
        [anon_sym_try] = ACTIONS(913),
        [anon_sym_except] = ACTIONS(913),
        [anon_sym_finally] = ACTIONS(913),
        [anon_sym_with] = ACTIONS(913),
        [anon_sym_def] = ACTIONS(913),
        [anon_sym_class] = ACTIONS(913),
        [anon_sym_AT] = ACTIONS(910),
        [sym_number] = ACTIONS(913),
        [sym_identifier] = ACTIONS(916),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(910),
        [sym__dedent] = ACTIONS(910),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(919),
        [anon_sym_SEMI] = ACTIONS(919),
        [anon_sym_print] = ACTIONS(923),
        [anon_sym_return] = ACTIONS(923),
        [anon_sym_del] = ACTIONS(923),
        [anon_sym_if] = ACTIONS(923),
        [anon_sym_for] = ACTIONS(923),
        [anon_sym_while] = ACTIONS(923),
        [anon_sym_try] = ACTIONS(923),
        [anon_sym_with] = ACTIONS(923),
        [anon_sym_def] = ACTIONS(923),
        [anon_sym_class] = ACTIONS(923),
        [anon_sym_AT] = ACTIONS(919),
        [sym_number] = ACTIONS(923),
        [sym_identifier] = ACTIONS(927),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(919),
        [sym__dedent] = ACTIONS(919),
    },
    [354] = {
        [aux_sym_with_statement_repeat1] = STATE(368),
        [anon_sym_COMMA] = ACTIONS(931),
        [anon_sym_COLON] = ACTIONS(935),
        [sym_comment] = ACTIONS(65),
    },
    [355] = {
        [ts_builtin_sym_end] = ACTIONS(939),
        [anon_sym_SEMI] = ACTIONS(939),
        [anon_sym_print] = ACTIONS(942),
        [anon_sym_return] = ACTIONS(942),
        [anon_sym_del] = ACTIONS(942),
        [anon_sym_if] = ACTIONS(942),
        [anon_sym_for] = ACTIONS(942),
        [anon_sym_while] = ACTIONS(942),
        [anon_sym_try] = ACTIONS(942),
        [anon_sym_with] = ACTIONS(942),
        [anon_sym_def] = ACTIONS(942),
        [anon_sym_class] = ACTIONS(942),
        [anon_sym_AT] = ACTIONS(939),
        [sym_number] = ACTIONS(942),
        [sym_identifier] = ACTIONS(945),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(939),
        [sym__dedent] = ACTIONS(939),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(948),
        [sym_comment] = ACTIONS(65),
    },
    [357] = {
        [anon_sym_COMMA] = ACTIONS(950),
        [anon_sym_RPAREN] = ACTIONS(952),
        [sym_comment] = ACTIONS(65),
    },
    [358] = {
        [anon_sym_COMMA] = ACTIONS(954),
        [anon_sym_RPAREN] = ACTIONS(952),
        [sym_comment] = ACTIONS(65),
    },
    [359] = {
        [anon_sym_RPAREN] = ACTIONS(956),
        [sym_comment] = ACTIONS(65),
    },
    [360] = {
        [anon_sym_def] = ACTIONS(958),
        [anon_sym_class] = ACTIONS(958),
        [anon_sym_AT] = ACTIONS(958),
        [sym_comment] = ACTIONS(65),
    },
    [361] = {
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(470),
        [sym_except_clause] = STATE(471),
        [sym_finally_clause] = STATE(472),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [ts_builtin_sym_end] = ACTIONS(961),
        [anon_sym_SEMI] = ACTIONS(961),
        [anon_sym_print] = ACTIONS(975),
        [anon_sym_return] = ACTIONS(975),
        [anon_sym_del] = ACTIONS(975),
        [anon_sym_if] = ACTIONS(975),
        [anon_sym_elif] = ACTIONS(989),
        [anon_sym_else] = ACTIONS(992),
        [anon_sym_for] = ACTIONS(975),
        [anon_sym_while] = ACTIONS(975),
        [anon_sym_try] = ACTIONS(975),
        [anon_sym_except] = ACTIONS(997),
        [anon_sym_finally] = ACTIONS(1001),
        [anon_sym_with] = ACTIONS(975),
        [anon_sym_def] = ACTIONS(975),
        [anon_sym_class] = ACTIONS(975),
        [anon_sym_AT] = ACTIONS(961),
        [sym_number] = ACTIONS(975),
        [sym_identifier] = ACTIONS(1006),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(961),
        [sym__dedent] = ACTIONS(961),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(1020),
        [anon_sym_SEMI] = ACTIONS(1020),
        [anon_sym_print] = ACTIONS(1023),
        [anon_sym_return] = ACTIONS(1023),
        [anon_sym_del] = ACTIONS(1023),
        [anon_sym_if] = ACTIONS(1023),
        [anon_sym_COLON] = ACTIONS(1026),
        [anon_sym_elif] = ACTIONS(1023),
        [anon_sym_else] = ACTIONS(1023),
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_in] = ACTIONS(1028),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_except] = ACTIONS(1023),
        [anon_sym_finally] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_RPAREN] = ACTIONS(1030),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1020),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1032),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1020),
        [sym__dedent] = ACTIONS(1020),
    },
    [363] = {
        [aux_sym_print_statement_repeat1] = STATE(365),
        [aux_sym_subscript_repeat1] = STATE(370),
        [ts_builtin_sym_end] = ACTIONS(1035),
        [anon_sym_SEMI] = ACTIONS(1035),
        [anon_sym_print] = ACTIONS(1042),
        [anon_sym_COMMA] = ACTIONS(1049),
        [anon_sym_return] = ACTIONS(1042),
        [anon_sym_del] = ACTIONS(1042),
        [anon_sym_if] = ACTIONS(1042),
        [anon_sym_COLON] = ACTIONS(1059),
        [anon_sym_elif] = ACTIONS(1042),
        [anon_sym_else] = ACTIONS(1042),
        [anon_sym_for] = ACTIONS(1042),
        [anon_sym_in] = ACTIONS(1067),
        [anon_sym_while] = ACTIONS(1042),
        [anon_sym_try] = ACTIONS(1042),
        [anon_sym_except] = ACTIONS(1042),
        [anon_sym_as] = ACTIONS(1072),
        [anon_sym_finally] = ACTIONS(1042),
        [anon_sym_with] = ACTIONS(1042),
        [anon_sym_def] = ACTIONS(1042),
        [anon_sym_RPAREN] = ACTIONS(1075),
        [anon_sym_class] = ACTIONS(1042),
        [anon_sym_AT] = ACTIONS(1035),
        [anon_sym_PLUS] = ACTIONS(1082),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [anon_sym_RBRACK] = ACTIONS(1088),
        [sym_number] = ACTIONS(1042),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1035),
        [sym__dedent] = ACTIONS(1035),
    },
    [364] = {
        [sym__statement] = STATE(416),
        [sym__simple_statement] = STATE(417),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(348),
        [sym_if_statement] = STATE(349),
        [sym_for_statement] = STATE(349),
        [sym_while_statement] = STATE(349),
        [sym_try_statement] = STATE(349),
        [sym_with_statement] = STATE(349),
        [sym_function_definition] = STATE(349),
        [sym_class_definition] = STATE(349),
        [sym_decorated_definition] = STATE(349),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_decorated_definition_repeat1] = STATE(369),
        [ts_builtin_sym_end] = ACTIONS(157),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(1100),
        [anon_sym_for] = ACTIONS(1102),
        [anon_sym_while] = ACTIONS(1104),
        [anon_sym_try] = ACTIONS(1106),
        [anon_sym_with] = ACTIONS(1108),
        [anon_sym_def] = ACTIONS(1110),
        [anon_sym_class] = ACTIONS(1112),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(159),
        [sym__dedent] = ACTIONS(1114),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(1116),
        [anon_sym_SEMI] = ACTIONS(1116),
        [anon_sym_print] = ACTIONS(1119),
        [anon_sym_COMMA] = ACTIONS(1122),
        [anon_sym_return] = ACTIONS(1119),
        [anon_sym_del] = ACTIONS(1119),
        [anon_sym_if] = ACTIONS(1119),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_elif] = ACTIONS(1119),
        [anon_sym_else] = ACTIONS(1119),
        [anon_sym_for] = ACTIONS(1119),
        [anon_sym_in] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(1119),
        [anon_sym_try] = ACTIONS(1119),
        [anon_sym_except] = ACTIONS(1119),
        [anon_sym_finally] = ACTIONS(1119),
        [anon_sym_with] = ACTIONS(1119),
        [anon_sym_def] = ACTIONS(1119),
        [anon_sym_RPAREN] = ACTIONS(1124),
        [anon_sym_class] = ACTIONS(1119),
        [anon_sym_AT] = ACTIONS(1116),
        [sym_number] = ACTIONS(1119),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1116),
        [sym__dedent] = ACTIONS(1116),
    },
    [366] = {
        [sym_elif_clause] = STATE(408),
        [sym_else_clause] = STATE(409),
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_elif] = ACTIONS(1130),
        [anon_sym_else] = ACTIONS(1132),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(681),
        [sym__dedent] = ACTIONS(681),
    },
    [367] = {
        [sym_else_clause] = STATE(403),
        [sym_except_clause] = STATE(404),
        [sym_finally_clause] = STATE(405),
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_del] = ACTIONS(569),
        [anon_sym_if] = ACTIONS(569),
        [anon_sym_else] = ACTIONS(1134),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_while] = ACTIONS(569),
        [anon_sym_try] = ACTIONS(569),
        [anon_sym_except] = ACTIONS(1136),
        [anon_sym_finally] = ACTIONS(902),
        [anon_sym_with] = ACTIONS(569),
        [anon_sym_def] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_AT] = ACTIONS(571),
        [sym_number] = ACTIONS(569),
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(571),
        [sym__dedent] = ACTIONS(571),
    },
    [368] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_COLON] = ACTIONS(1138),
        [sym_comment] = ACTIONS(65),
    },
    [369] = {
        [sym_function_definition] = STATE(374),
        [sym_class_definition] = STATE(374),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(1140),
        [anon_sym_class] = ACTIONS(1142),
        [anon_sym_AT] = ACTIONS(95),
        [sym_comment] = ACTIONS(65),
    },
    [370] = {
        [anon_sym_COMMA] = ACTIONS(1144),
        [anon_sym_RBRACK] = ACTIONS(1146),
        [sym_comment] = ACTIONS(65),
    },
    [371] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(1148),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_print] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_return] = ACTIONS(211),
        [anon_sym_del] = ACTIONS(211),
        [anon_sym_if] = ACTIONS(211),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(211),
        [anon_sym_else] = ACTIONS(211),
        [anon_sym_for] = ACTIONS(211),
        [anon_sym_in] = ACTIONS(211),
        [anon_sym_while] = ACTIONS(211),
        [anon_sym_try] = ACTIONS(211),
        [anon_sym_except] = ACTIONS(211),
        [anon_sym_as] = ACTIONS(211),
        [anon_sym_finally] = ACTIONS(211),
        [anon_sym_with] = ACTIONS(211),
        [anon_sym_def] = ACTIONS(211),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(211),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_number] = ACTIONS(211),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(209),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_return] = ACTIONS(219),
        [anon_sym_del] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(219),
        [anon_sym_COLON] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(219),
        [anon_sym_else] = ACTIONS(219),
        [anon_sym_for] = ACTIONS(219),
        [anon_sym_in] = ACTIONS(219),
        [anon_sym_while] = ACTIONS(219),
        [anon_sym_try] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_as] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_with] = ACTIONS(219),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_RPAREN] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(219),
        [anon_sym_AT] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_number] = ACTIONS(219),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(217),
    },
    [374] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_return] = ACTIONS(167),
        [anon_sym_del] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_while] = ACTIONS(167),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(167),
        [anon_sym_def] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(165),
        [sym_number] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(165),
        [sym__dedent] = ACTIONS(165),
    },
    [375] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(380),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [376] = {
        [sym__expression] = STATE(401),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [377] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [378] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [379] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_elif] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [anon_sym_def] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(319),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(319),
        [sym__dedent] = ACTIONS(319),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(531),
        [anon_sym_SEMI] = ACTIONS(531),
        [anon_sym_print] = ACTIONS(529),
        [anon_sym_return] = ACTIONS(529),
        [anon_sym_del] = ACTIONS(529),
        [anon_sym_if] = ACTIONS(529),
        [anon_sym_for] = ACTIONS(529),
        [anon_sym_while] = ACTIONS(529),
        [anon_sym_try] = ACTIONS(529),
        [anon_sym_with] = ACTIONS(529),
        [anon_sym_def] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(531),
        [sym_number] = ACTIONS(529),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(531),
        [sym__dedent] = ACTIONS(531),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(1156),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [382] = {
        [sym__expression] = STATE(387),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [383] = {
        [aux_sym_subscript_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(1160),
        [anon_sym_RBRACK] = ACTIONS(1162),
        [sym_comment] = ACTIONS(65),
    },
    [384] = {
        [aux_sym_subscript_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(1160),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(1162),
        [sym_comment] = ACTIONS(65),
    },
    [385] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(1146),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_SEMI] = ACTIONS(197),
        [anon_sym_print] = ACTIONS(199),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_return] = ACTIONS(199),
        [anon_sym_del] = ACTIONS(199),
        [anon_sym_if] = ACTIONS(199),
        [anon_sym_COLON] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(199),
        [anon_sym_else] = ACTIONS(199),
        [anon_sym_for] = ACTIONS(199),
        [anon_sym_in] = ACTIONS(199),
        [anon_sym_while] = ACTIONS(199),
        [anon_sym_try] = ACTIONS(199),
        [anon_sym_except] = ACTIONS(199),
        [anon_sym_as] = ACTIONS(199),
        [anon_sym_finally] = ACTIONS(199),
        [anon_sym_with] = ACTIONS(199),
        [anon_sym_def] = ACTIONS(199),
        [anon_sym_RPAREN] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_RBRACK] = ACTIONS(197),
        [sym_number] = ACTIONS(199),
        [sym_identifier] = ACTIONS(201),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(197),
        [sym__dedent] = ACTIONS(197),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1164),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(337),
        [anon_sym_SEMI] = ACTIONS(337),
        [anon_sym_print] = ACTIONS(339),
        [anon_sym_return] = ACTIONS(339),
        [anon_sym_del] = ACTIONS(339),
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
        [anon_sym_AT] = ACTIONS(337),
        [sym_number] = ACTIONS(339),
        [sym_identifier] = ACTIONS(341),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(337),
        [sym__dedent] = ACTIONS(337),
    },
    [389] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(17),
        [sym_expression_statement] = STATE(17),
        [sym_return_statement] = STATE(17),
        [sym_delete_statement] = STATE(17),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(13),
        [sym_subscript] = STATE(13),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(75),
        [anon_sym_return] = ACTIONS(77),
        [anon_sym_del] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(307),
        [anon_sym_try] = ACTIONS(309),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(95),
        [sym_number] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
        [sym__dedent] = ACTIONS(1114),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_elif] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_return] = ACTIONS(397),
        [anon_sym_del] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_elif] = ACTIONS(397),
        [anon_sym_else] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_try] = ACTIONS(397),
        [anon_sym_except] = ACTIONS(397),
        [anon_sym_finally] = ACTIONS(397),
        [anon_sym_with] = ACTIONS(397),
        [anon_sym_def] = ACTIONS(397),
        [anon_sym_class] = ACTIONS(397),
        [anon_sym_AT] = ACTIONS(399),
        [sym_number] = ACTIONS(397),
        [sym_identifier] = ACTIONS(401),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(399),
        [sym__dedent] = ACTIONS(399),
    },
    [392] = {
        [aux_sym_print_statement_repeat1] = STATE(395),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(1167),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(1169),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [393] = {
        [sym__expression] = STATE(399),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [394] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1171),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [396] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1169),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1169),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(423),
        [anon_sym_return] = ACTIONS(423),
        [anon_sym_del] = ACTIONS(423),
        [anon_sym_if] = ACTIONS(423),
        [anon_sym_elif] = ACTIONS(423),
        [anon_sym_else] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_while] = ACTIONS(423),
        [anon_sym_try] = ACTIONS(423),
        [anon_sym_except] = ACTIONS(423),
        [anon_sym_finally] = ACTIONS(423),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(423),
        [anon_sym_AT] = ACTIONS(425),
        [sym_number] = ACTIONS(423),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(425),
        [sym__dedent] = ACTIONS(425),
    },
    [401] = {
        [aux_sym_print_statement_repeat1] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(1167),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(1169),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1171),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [403] = {
        [sym_finally_clause] = STATE(406),
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_finally] = ACTIONS(902),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(585),
        [sym__dedent] = ACTIONS(585),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(591),
        [anon_sym_SEMI] = ACTIONS(591),
        [anon_sym_print] = ACTIONS(589),
        [anon_sym_return] = ACTIONS(589),
        [anon_sym_del] = ACTIONS(589),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(589),
        [anon_sym_while] = ACTIONS(589),
        [anon_sym_try] = ACTIONS(589),
        [anon_sym_except] = ACTIONS(589),
        [anon_sym_finally] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(589),
        [anon_sym_def] = ACTIONS(589),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(591),
        [sym_number] = ACTIONS(589),
        [sym_identifier] = ACTIONS(593),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(591),
        [sym__dedent] = ACTIONS(591),
    },
    [405] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(585),
        [sym__dedent] = ACTIONS(585),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(597),
        [anon_sym_SEMI] = ACTIONS(597),
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(597),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(597),
        [sym__dedent] = ACTIONS(597),
    },
    [407] = {
        [anon_sym_COLON] = ACTIONS(1176),
        [sym_comment] = ACTIONS(65),
    },
    [408] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_elif] = ACTIONS(685),
        [anon_sym_else] = ACTIONS(685),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(687),
        [sym__dedent] = ACTIONS(687),
    },
    [409] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(693),
        [sym__dedent] = ACTIONS(693),
    },
    [410] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(411),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [411] = {
        [ts_builtin_sym_end] = ACTIONS(603),
        [anon_sym_SEMI] = ACTIONS(603),
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_return] = ACTIONS(601),
        [anon_sym_del] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(603),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(605),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(603),
        [sym__dedent] = ACTIONS(603),
    },
    [412] = {
        [sym__expression] = STATE(413),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_COLON] = ACTIONS(273),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_in] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_RPAREN] = ACTIONS(273),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1178),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [414] = {
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [415] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_in] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1180),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [416] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_del] = ACTIONS(177),
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
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [417] = {
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1183),
    },
    [418] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(243),
        [anon_sym_return] = ACTIONS(243),
        [anon_sym_del] = ACTIONS(243),
        [anon_sym_if] = ACTIONS(243),
        [anon_sym_for] = ACTIONS(243),
        [anon_sym_while] = ACTIONS(243),
        [anon_sym_try] = ACTIONS(243),
        [anon_sym_with] = ACTIONS(243),
        [anon_sym_def] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(243),
        [anon_sym_AT] = ACTIONS(241),
        [sym_number] = ACTIONS(243),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [419] = {
        [sym__expression] = STATE(427),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(1146),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [420] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(421),
        [sym__expression] = STATE(422),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(767),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [421] = {
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(426),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [ts_builtin_sym_end] = ACTIONS(1185),
        [anon_sym_SEMI] = ACTIONS(1185),
        [anon_sym_print] = ACTIONS(1191),
        [anon_sym_return] = ACTIONS(1191),
        [anon_sym_del] = ACTIONS(1191),
        [anon_sym_if] = ACTIONS(1191),
        [anon_sym_elif] = ACTIONS(989),
        [anon_sym_else] = ACTIONS(992),
        [anon_sym_for] = ACTIONS(1191),
        [anon_sym_while] = ACTIONS(1191),
        [anon_sym_try] = ACTIONS(1191),
        [anon_sym_except] = ACTIONS(1197),
        [anon_sym_finally] = ACTIONS(1197),
        [anon_sym_with] = ACTIONS(1191),
        [anon_sym_def] = ACTIONS(1191),
        [anon_sym_class] = ACTIONS(1191),
        [anon_sym_AT] = ACTIONS(1185),
        [sym_number] = ACTIONS(1191),
        [sym_identifier] = ACTIONS(1200),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1185),
        [sym__dedent] = ACTIONS(1185),
    },
    [422] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
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
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(1206),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [423] = {
        [sym__expression] = STATE(424),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [424] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1208),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_elif] = ACTIONS(673),
        [anon_sym_else] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(675),
        [sym__dedent] = ACTIONS(675),
    },
    [426] = {
        [ts_builtin_sym_end] = ACTIONS(1211),
        [anon_sym_SEMI] = ACTIONS(1211),
        [anon_sym_print] = ACTIONS(1214),
        [anon_sym_return] = ACTIONS(1214),
        [anon_sym_del] = ACTIONS(1214),
        [anon_sym_if] = ACTIONS(1214),
        [anon_sym_for] = ACTIONS(1214),
        [anon_sym_while] = ACTIONS(1214),
        [anon_sym_try] = ACTIONS(1214),
        [anon_sym_with] = ACTIONS(1214),
        [anon_sym_def] = ACTIONS(1214),
        [anon_sym_class] = ACTIONS(1214),
        [anon_sym_AT] = ACTIONS(1211),
        [sym_number] = ACTIONS(1214),
        [sym_identifier] = ACTIONS(1217),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1211),
        [sym__dedent] = ACTIONS(1211),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(1220),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_COLON] = ACTIONS(1223),
        [anon_sym_elif] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_in] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_except] = ACTIONS(419),
        [anon_sym_finally] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1226),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [428] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(434),
        [sym__expression] = STATE(435),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1228),
        [anon_sym_return] = ACTIONS(1230),
        [anon_sym_del] = ACTIONS(1232),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [429] = {
        [sym__expression] = STATE(430),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_in] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1234),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [431] = {
        [sym__expression] = STATE(446),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [432] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(438),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [433] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(438),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [434] = {
        [ts_builtin_sym_end] = ACTIONS(621),
        [anon_sym_SEMI] = ACTIONS(621),
        [anon_sym_print] = ACTIONS(619),
        [anon_sym_return] = ACTIONS(619),
        [anon_sym_del] = ACTIONS(619),
        [anon_sym_if] = ACTIONS(619),
        [anon_sym_else] = ACTIONS(619),
        [anon_sym_for] = ACTIONS(619),
        [anon_sym_while] = ACTIONS(619),
        [anon_sym_try] = ACTIONS(619),
        [anon_sym_except] = ACTIONS(619),
        [anon_sym_finally] = ACTIONS(619),
        [anon_sym_with] = ACTIONS(619),
        [anon_sym_def] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(619),
        [anon_sym_AT] = ACTIONS(621),
        [sym_number] = ACTIONS(619),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(621),
        [sym__dedent] = ACTIONS(621),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
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
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(1237),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [436] = {
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1239),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [438] = {
        [aux_sym_print_statement_repeat1] = STATE(441),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(1242),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(1244),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [439] = {
        [sym__expression] = STATE(445),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [440] = {
        [sym__expression] = STATE(444),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [441] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1246),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [442] = {
        [sym__expression] = STATE(443),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
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
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1244),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [444] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1248),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [445] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_except] = ACTIONS(419),
        [anon_sym_finally] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1244),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [446] = {
        [aux_sym_print_statement_repeat1] = STATE(447),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(1242),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(1244),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [447] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1246),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [448] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(455),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1251),
        [anon_sym_return] = ACTIONS(1253),
        [anon_sym_del] = ACTIONS(1255),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [449] = {
        [anon_sym_COLON] = ACTIONS(1257),
        [sym_comment] = ACTIONS(65),
    },
    [450] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(451),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [451] = {
        [ts_builtin_sym_end] = ACTIONS(325),
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_print] = ACTIONS(327),
        [anon_sym_return] = ACTIONS(327),
        [anon_sym_del] = ACTIONS(327),
        [anon_sym_if] = ACTIONS(327),
        [anon_sym_for] = ACTIONS(327),
        [anon_sym_while] = ACTIONS(327),
        [anon_sym_try] = ACTIONS(327),
        [anon_sym_with] = ACTIONS(327),
        [anon_sym_def] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(327),
        [anon_sym_AT] = ACTIONS(325),
        [sym_number] = ACTIONS(327),
        [sym_identifier] = ACTIONS(329),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(325),
        [sym__dedent] = ACTIONS(325),
    },
    [452] = {
        [sym__expression] = STATE(468),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [453] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(460),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [454] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(460),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [455] = {
        [sym_else_clause] = STATE(459),
        [ts_builtin_sym_end] = ACTIONS(653),
        [anon_sym_SEMI] = ACTIONS(653),
        [anon_sym_print] = ACTIONS(651),
        [anon_sym_return] = ACTIONS(651),
        [anon_sym_del] = ACTIONS(651),
        [anon_sym_if] = ACTIONS(651),
        [anon_sym_else] = ACTIONS(1132),
        [anon_sym_for] = ACTIONS(651),
        [anon_sym_while] = ACTIONS(651),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(651),
        [anon_sym_def] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(651),
        [anon_sym_AT] = ACTIONS(653),
        [sym_number] = ACTIONS(651),
        [sym_identifier] = ACTIONS(655),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(653),
        [sym__dedent] = ACTIONS(653),
    },
    [456] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(1259),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [457] = {
        [sym__expression] = STATE(458),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1261),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [459] = {
        [ts_builtin_sym_end] = ACTIONS(659),
        [anon_sym_SEMI] = ACTIONS(659),
        [anon_sym_print] = ACTIONS(657),
        [anon_sym_return] = ACTIONS(657),
        [anon_sym_del] = ACTIONS(657),
        [anon_sym_if] = ACTIONS(657),
        [anon_sym_for] = ACTIONS(657),
        [anon_sym_while] = ACTIONS(657),
        [anon_sym_try] = ACTIONS(657),
        [anon_sym_with] = ACTIONS(657),
        [anon_sym_def] = ACTIONS(657),
        [anon_sym_class] = ACTIONS(657),
        [anon_sym_AT] = ACTIONS(659),
        [sym_number] = ACTIONS(657),
        [sym_identifier] = ACTIONS(661),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(659),
        [sym__dedent] = ACTIONS(659),
    },
    [460] = {
        [aux_sym_print_statement_repeat1] = STATE(463),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(1264),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(1266),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [461] = {
        [sym__expression] = STATE(467),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [462] = {
        [sym__expression] = STATE(466),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [464] = {
        [sym__expression] = STATE(465),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1266),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1270),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [467] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1266),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [468] = {
        [aux_sym_print_statement_repeat1] = STATE(469),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(1264),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(1266),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [469] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(1273),
        [anon_sym_SEMI] = ACTIONS(1273),
        [anon_sym_print] = ACTIONS(1277),
        [anon_sym_return] = ACTIONS(1277),
        [anon_sym_del] = ACTIONS(1277),
        [anon_sym_if] = ACTIONS(1277),
        [anon_sym_for] = ACTIONS(1277),
        [anon_sym_while] = ACTIONS(1277),
        [anon_sym_try] = ACTIONS(1277),
        [anon_sym_with] = ACTIONS(1277),
        [anon_sym_def] = ACTIONS(1277),
        [anon_sym_class] = ACTIONS(1277),
        [anon_sym_AT] = ACTIONS(1273),
        [sym_number] = ACTIONS(1277),
        [sym_identifier] = ACTIONS(1281),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1273),
        [sym__dedent] = ACTIONS(1273),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_SEMI] = ACTIONS(565),
        [anon_sym_print] = ACTIONS(563),
        [anon_sym_return] = ACTIONS(563),
        [anon_sym_del] = ACTIONS(563),
        [anon_sym_if] = ACTIONS(563),
        [anon_sym_else] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(563),
        [anon_sym_while] = ACTIONS(563),
        [anon_sym_try] = ACTIONS(563),
        [anon_sym_except] = ACTIONS(563),
        [anon_sym_finally] = ACTIONS(563),
        [anon_sym_with] = ACTIONS(563),
        [anon_sym_def] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_AT] = ACTIONS(565),
        [sym_number] = ACTIONS(563),
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(565),
        [sym__dedent] = ACTIONS(565),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_print] = ACTIONS(569),
        [anon_sym_return] = ACTIONS(569),
        [anon_sym_del] = ACTIONS(569),
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
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(571),
        [sym__dedent] = ACTIONS(571),
    },
    [473] = {
        [anon_sym_COLON] = ACTIONS(1285),
        [sym_comment] = ACTIONS(65),
    },
    [474] = {
        [sym_dictionary_splat_parameter] = STATE(476),
        [anon_sym_STAR] = ACTIONS(487),
        [sym_comment] = ACTIONS(65),
    },
    [475] = {
        [anon_sym_COLON] = ACTIONS(1290),
        [sym_comment] = ACTIONS(65),
    },
    [476] = {
        [anon_sym_RPAREN] = ACTIONS(1293),
        [sym_comment] = ACTIONS(65),
    },
    [477] = {
        [anon_sym_COLON] = ACTIONS(1295),
        [sym_comment] = ACTIONS(65),
    },
    [478] = {
        [anon_sym_RPAREN] = ACTIONS(749),
        [anon_sym_STAR] = ACTIONS(1298),
        [sym_identifier] = ACTIONS(1301),
        [sym_comment] = ACTIONS(65),
    },
    [479] = {
        [anon_sym_COLON] = ACTIONS(1304),
        [sym_comment] = ACTIONS(65),
    },
    [480] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(481),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [481] = {
        [ts_builtin_sym_end] = ACTIONS(459),
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_print] = ACTIONS(457),
        [anon_sym_return] = ACTIONS(457),
        [anon_sym_del] = ACTIONS(457),
        [anon_sym_if] = ACTIONS(457),
        [anon_sym_for] = ACTIONS(457),
        [anon_sym_while] = ACTIONS(457),
        [anon_sym_try] = ACTIONS(457),
        [anon_sym_with] = ACTIONS(457),
        [anon_sym_def] = ACTIONS(457),
        [anon_sym_class] = ACTIONS(457),
        [anon_sym_AT] = ACTIONS(459),
        [sym_number] = ACTIONS(457),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(459),
        [sym__dedent] = ACTIONS(459),
    },
    [482] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(483),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [483] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_print] = ACTIONS(537),
        [anon_sym_return] = ACTIONS(537),
        [anon_sym_del] = ACTIONS(537),
        [anon_sym_if] = ACTIONS(537),
        [anon_sym_for] = ACTIONS(537),
        [anon_sym_while] = ACTIONS(537),
        [anon_sym_try] = ACTIONS(537),
        [anon_sym_with] = ACTIONS(537),
        [anon_sym_def] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(537),
        [anon_sym_AT] = ACTIONS(539),
        [sym_number] = ACTIONS(537),
        [sym_identifier] = ACTIONS(541),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(539),
        [sym__dedent] = ACTIONS(539),
    },
    [484] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(488),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [485] = {
        [sym_default_parameter] = STATE(152),
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [aux_sym_parameters_repeat1] = STATE(155),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(781),
        [sym_comment] = ACTIONS(65),
    },
    [486] = {
        [anon_sym_COMMA] = ACTIONS(1307),
        [anon_sym_RPAREN] = ACTIONS(1310),
        [anon_sym_EQ] = ACTIONS(473),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_comment] = ACTIONS(65),
    },
    [487] = {
        [anon_sym_RPAREN] = ACTIONS(1030),
        [sym_comment] = ACTIONS(65),
    },
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [489] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_in] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_as] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1082),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [490] = {
        [anon_sym_LPAREN] = ACTIONS(1313),
        [anon_sym_DOT] = ACTIONS(1313),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1313),
    },
    [491] = {
        [anon_sym_COLON] = ACTIONS(1316),
        [anon_sym_LPAREN] = ACTIONS(1318),
        [sym_comment] = ACTIONS(65),
    },
    [492] = {
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [493] = {
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_RPAREN] = ACTIONS(1320),
        [sym_comment] = ACTIONS(65),
    },
    [494] = {
        [aux_sym_print_statement_repeat1] = STATE(495),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(1323),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [495] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(1124),
        [sym_comment] = ACTIONS(65),
    },
    [496] = {
        [sym_parameters] = STATE(356),
        [anon_sym_LPAREN] = ACTIONS(447),
        [sym_comment] = ACTIONS(65),
    },
    [497] = {
        [aux_sym_with_statement_repeat1] = STATE(368),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_COLON] = ACTIONS(1326),
        [sym_comment] = ACTIONS(65),
    },
    [498] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(499),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1152),
        [anon_sym_del] = ACTIONS(1154),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [499] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_SEMI] = ACTIONS(609),
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_return] = ACTIONS(607),
        [anon_sym_del] = ACTIONS(607),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_def] = ACTIONS(607),
        [anon_sym_class] = ACTIONS(607),
        [anon_sym_AT] = ACTIONS(609),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(609),
        [sym__dedent] = ACTIONS(609),
    },
    [500] = {
        [anon_sym_COMMA] = ACTIONS(523),
        [anon_sym_COLON] = ACTIONS(1328),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [501] = {
        [anon_sym_COMMA] = ACTIONS(1331),
        [anon_sym_COLON] = ACTIONS(1333),
        [anon_sym_as] = ACTIONS(1331),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [502] = {
        [sym__expression] = STATE(504),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [503] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(505),
        [sym__expression] = STATE(435),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1228),
        [anon_sym_return] = ACTIONS(1230),
        [anon_sym_del] = ACTIONS(1232),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [504] = {
        [anon_sym_COLON] = ACTIONS(1335),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [505] = {
        [ts_builtin_sym_end] = ACTIONS(627),
        [anon_sym_SEMI] = ACTIONS(627),
        [anon_sym_print] = ACTIONS(625),
        [anon_sym_return] = ACTIONS(625),
        [anon_sym_del] = ACTIONS(625),
        [anon_sym_if] = ACTIONS(625),
        [anon_sym_else] = ACTIONS(625),
        [anon_sym_for] = ACTIONS(625),
        [anon_sym_while] = ACTIONS(625),
        [anon_sym_try] = ACTIONS(625),
        [anon_sym_except] = ACTIONS(625),
        [anon_sym_finally] = ACTIONS(625),
        [anon_sym_with] = ACTIONS(625),
        [anon_sym_def] = ACTIONS(625),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_AT] = ACTIONS(627),
        [sym_number] = ACTIONS(625),
        [sym_identifier] = ACTIONS(629),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(627),
        [sym__dedent] = ACTIONS(627),
    },
    [506] = {
        [sym__simple_statement] = STATE(194),
        [sym_print_statement] = STATE(195),
        [sym_expression_statement] = STATE(195),
        [sym_return_statement] = STATE(195),
        [sym_delete_statement] = STATE(195),
        [sym__suite] = STATE(507),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_del] = ACTIONS(549),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(553),
    },
    [507] = {
        [sym_except_clause] = STATE(471),
        [sym_finally_clause] = STATE(472),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [anon_sym_except] = ACTIONS(1337),
        [anon_sym_finally] = ACTIONS(1339),
        [sym_comment] = ACTIONS(65),
    },
    [508] = {
        [anon_sym_COLON] = ACTIONS(1341),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [509] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(510),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1251),
        [anon_sym_return] = ACTIONS(1253),
        [anon_sym_del] = ACTIONS(1255),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [510] = {
        [sym_else_clause] = STATE(511),
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(1132),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(637),
        [sym__dedent] = ACTIONS(637),
    },
    [511] = {
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(643),
        [sym__dedent] = ACTIONS(643),
    },
    [512] = {
        [anon_sym_COLON] = ACTIONS(1026),
        [sym_comment] = ACTIONS(65),
    },
    [513] = {
        [anon_sym_in] = ACTIONS(1343),
        [sym_comment] = ACTIONS(65),
    },
    [514] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(411),
        [sym__expression] = STATE(518),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1345),
        [anon_sym_return] = ACTIONS(1347),
        [anon_sym_del] = ACTIONS(1349),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [515] = {
        [sym__expression] = STATE(529),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [516] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [517] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [518] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_finally] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(1351),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [519] = {
        [sym__expression] = STATE(520),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [520] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1353),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [521] = {
        [aux_sym_print_statement_repeat1] = STATE(524),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(1356),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(1358),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [522] = {
        [sym__expression] = STATE(528),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [523] = {
        [sym__expression] = STATE(527),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [524] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1360),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [525] = {
        [sym__expression] = STATE(526),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [526] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1358),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [527] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1362),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [528] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_finally] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1358),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [529] = {
        [aux_sym_print_statement_repeat1] = STATE(530),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(1356),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(1358),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [530] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1360),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [531] = {
        [anon_sym_COLON] = ACTIONS(1365),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [532] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(536),
        [sym__expression] = STATE(537),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1367),
        [anon_sym_return] = ACTIONS(1369),
        [anon_sym_del] = ACTIONS(1371),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [533] = {
        [sym__expression] = STATE(548),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [534] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(540),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [535] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(540),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [536] = {
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_elif] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(701),
        [sym__dedent] = ACTIONS(701),
    },
    [537] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_elif] = ACTIONS(149),
        [anon_sym_else] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(1373),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [538] = {
        [sym__expression] = STATE(539),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [539] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1375),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [540] = {
        [aux_sym_print_statement_repeat1] = STATE(543),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(1378),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(1380),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [541] = {
        [sym__expression] = STATE(547),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [542] = {
        [sym__expression] = STATE(546),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [543] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1382),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [544] = {
        [sym__expression] = STATE(545),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [545] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1380),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [546] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1384),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [547] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_elif] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1380),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [548] = {
        [aux_sym_print_statement_repeat1] = STATE(549),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(1378),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(1380),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [549] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1382),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [550] = {
        [anon_sym_COLON] = ACTIONS(1387),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(65),
    },
    [551] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(347),
        [sym_expression_statement] = STATE(347),
        [sym_return_statement] = STATE(347),
        [sym_delete_statement] = STATE(347),
        [sym__suite] = STATE(552),
        [sym__expression] = STATE(537),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [anon_sym_print] = ACTIONS(1367),
        [anon_sym_return] = ACTIONS(1369),
        [anon_sym_del] = ACTIONS(1371),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(65),
        [sym__indent] = ACTIONS(771),
    },
    [552] = {
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(553),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [ts_builtin_sym_end] = ACTIONS(669),
        [anon_sym_SEMI] = ACTIONS(669),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_elif] = ACTIONS(1130),
        [anon_sym_else] = ACTIONS(1132),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(669),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(669),
        [sym__dedent] = ACTIONS(669),
    },
    [553] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(681),
        [sym__dedent] = ACTIONS(681),
    },
    [554] = {
        [aux_sym_print_statement_repeat1] = STATE(557),
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(1389),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [555] = {
        [sym__expression] = STATE(561),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [556] = {
        [sym__expression] = STATE(560),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1393),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(299),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(299),
        [sym__dedent] = ACTIONS(299),
    },
    [558] = {
        [sym__expression] = STATE(559),
        [sym_binary_operator] = STATE(340),
        [sym_subscript] = STATE(340),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(65),
    },
    [559] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [560] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(237),
        [anon_sym_del] = ACTIONS(237),
        [anon_sym_if] = ACTIONS(237),
        [anon_sym_elif] = ACTIONS(237),
        [anon_sym_else] = ACTIONS(237),
        [anon_sym_for] = ACTIONS(237),
        [anon_sym_while] = ACTIONS(237),
        [anon_sym_try] = ACTIONS(237),
        [anon_sym_except] = ACTIONS(237),
        [anon_sym_finally] = ACTIONS(237),
        [anon_sym_with] = ACTIONS(237),
        [anon_sym_def] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1395),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [sym_number] = ACTIONS(237),
        [sym_identifier] = ACTIONS(239),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_elif] = ACTIONS(419),
        [anon_sym_else] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_except] = ACTIONS(419),
        [anon_sym_finally] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(275),
        [sym__dedent] = ACTIONS(275),
    },
    [562] = {
        [anon_sym_COMMA] = ACTIONS(1398),
        [anon_sym_RBRACK] = ACTIONS(1398),
        [sym_comment] = ACTIONS(65),
    },
    [563] = {
        [ts_builtin_sym_end] = ACTIONS(1401),
        [anon_sym_SEMI] = ACTIONS(1401),
        [anon_sym_print] = ACTIONS(1404),
        [anon_sym_COMMA] = ACTIONS(1401),
        [anon_sym_return] = ACTIONS(1404),
        [anon_sym_del] = ACTIONS(1404),
        [anon_sym_if] = ACTIONS(1404),
        [anon_sym_COLON] = ACTIONS(1401),
        [anon_sym_elif] = ACTIONS(1404),
        [anon_sym_else] = ACTIONS(1404),
        [anon_sym_for] = ACTIONS(1404),
        [anon_sym_in] = ACTIONS(1404),
        [anon_sym_while] = ACTIONS(1404),
        [anon_sym_try] = ACTIONS(1404),
        [anon_sym_except] = ACTIONS(1404),
        [anon_sym_as] = ACTIONS(1404),
        [anon_sym_finally] = ACTIONS(1404),
        [anon_sym_with] = ACTIONS(1404),
        [anon_sym_def] = ACTIONS(1404),
        [anon_sym_RPAREN] = ACTIONS(1401),
        [anon_sym_class] = ACTIONS(1404),
        [anon_sym_AT] = ACTIONS(1401),
        [anon_sym_PLUS] = ACTIONS(1401),
        [anon_sym_LBRACK] = ACTIONS(1401),
        [anon_sym_RBRACK] = ACTIONS(1401),
        [sym_number] = ACTIONS(1404),
        [sym_identifier] = ACTIONS(1407),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1401),
        [sym__dedent] = ACTIONS(1401),
    },
    [564] = {
        [anon_sym_COMMA] = ACTIONS(1410),
        [anon_sym_COLON] = ACTIONS(1410),
        [sym_comment] = ACTIONS(65),
    },
    [565] = {
        [ts_builtin_sym_end] = ACTIONS(1413),
        [anon_sym_SEMI] = ACTIONS(1413),
        [anon_sym_print] = ACTIONS(1416),
        [anon_sym_COMMA] = ACTIONS(1419),
        [anon_sym_return] = ACTIONS(1416),
        [anon_sym_del] = ACTIONS(1416),
        [anon_sym_if] = ACTIONS(1416),
        [anon_sym_COLON] = ACTIONS(1425),
        [anon_sym_elif] = ACTIONS(1416),
        [anon_sym_else] = ACTIONS(1416),
        [anon_sym_for] = ACTIONS(1416),
        [anon_sym_in] = ACTIONS(1416),
        [anon_sym_while] = ACTIONS(1416),
        [anon_sym_try] = ACTIONS(1416),
        [anon_sym_except] = ACTIONS(1416),
        [anon_sym_as] = ACTIONS(1430),
        [anon_sym_finally] = ACTIONS(1416),
        [anon_sym_with] = ACTIONS(1416),
        [anon_sym_def] = ACTIONS(1416),
        [anon_sym_RPAREN] = ACTIONS(1413),
        [anon_sym_class] = ACTIONS(1416),
        [anon_sym_AT] = ACTIONS(1413),
        [anon_sym_PLUS] = ACTIONS(1432),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [anon_sym_RBRACK] = ACTIONS(1398),
        [sym_number] = ACTIONS(1416),
        [sym_identifier] = ACTIONS(1434),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(1413),
        [sym__dedent] = ACTIONS(1413),
    },
    [566] = {
        [aux_sym_print_statement_repeat1] = STATE(567),
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(1389),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [567] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1393),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(65),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(26),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(314),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(315),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(316),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(317),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(318),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(319),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(320),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(321),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(322),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(323),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(324),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(325),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(326),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(327),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(328),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(329),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(330),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(331),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(332),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(169),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(334),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(12),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(335),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(336),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(337),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(338),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(339),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(340),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(341),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(342),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(343),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(344),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
    [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delete_statement, 2),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
    [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [751] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(162),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
    [759] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(340),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
    [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
    [783] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6), SHIFT(450),
    [790] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [801] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(385),
    [805] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(386),
    [809] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [813] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [817] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [821] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(478),
    [825] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(484),
    [828] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(485),
    [833] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(475),
    [838] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(70),
    [842] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [847] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [850] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [854] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [860] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [863] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [866] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [869] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [872] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [875] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [878] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(418),
    [881] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [884] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [887] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [890] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [896] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
    [904] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [910] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [913] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [916] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [919] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [923] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [927] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [931] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(180),
    [935] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(482),
    [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [945] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [958] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [961] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [975] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [989] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(320),
    [992] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(407),
    [997] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(326),
    [1001] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(328),
    [1006] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1020] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1023] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
    [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [1032] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1035] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1042] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1049] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(419),
    [1059] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(420),
    [1067] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1072] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(327),
    [1075] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(64),
    [1082] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(336),
    [1085] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(337),
    [1088] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(386),
    [1093] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
    [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
    [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
    [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
    [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
    [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
    [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
    [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [1116] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1119] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [1124] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(67),
    [1127] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
    [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
    [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
    [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
    [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
    [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [1164] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(382),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [1173] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(394),
    [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1180] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(414),
    [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [1185] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1191] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1197] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1200] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1208] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(423),
    [1211] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1214] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1217] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1220] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1223] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(428),
    [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
    [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
    [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
    [1234] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(429),
    [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1239] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(436),
    [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1248] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(440),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
    [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [1261] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(457),
    [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1270] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(462),
    [1273] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1277] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1281] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1285] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1295] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1298] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1301] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1304] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1307] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(174),
    [1310] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(171),
    [1313] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
    [1320] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1323] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(64),
    [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1328] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(428),
    [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
    [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
    [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
    [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1353] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(519),
    [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
    [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [1362] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(523),
    [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
    [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
    [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
    [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
    [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1375] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(538),
    [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
    [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [1384] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(542),
    [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
    [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
    [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
    [1395] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(556),
    [1398] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1401] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1404] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1407] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1410] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1413] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1416] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1419] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1425] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(428),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
    [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [1434] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
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
