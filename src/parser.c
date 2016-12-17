#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 710
#define SYMBOL_COUNT 88
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_return = 4,
    anon_sym_del = 5,
    sym_pass_statement = 6,
    sym_break_statement = 7,
    sym_continue_statement = 8,
    anon_sym_if = 9,
    anon_sym_COLON = 10,
    anon_sym_elif = 11,
    anon_sym_else = 12,
    anon_sym_for = 13,
    anon_sym_in = 14,
    anon_sym_while = 15,
    anon_sym_try = 16,
    anon_sym_except = 17,
    anon_sym_as = 18,
    anon_sym_finally = 19,
    anon_sym_with = 20,
    anon_sym_def = 21,
    anon_sym_LPAREN = 22,
    anon_sym_RPAREN = 23,
    anon_sym_EQ = 24,
    anon_sym_STAR = 25,
    anon_sym_class = 26,
    anon_sym_AT = 27,
    anon_sym_DOT = 28,
    anon_sym_PLUS = 29,
    anon_sym_LBRACK = 30,
    anon_sym_DOT_DOT_DOT = 31,
    anon_sym_RBRACK = 32,
    anon_sym_STAR_STAR = 33,
    sym_number = 34,
    sym_identifier = 35,
    sym_comment = 36,
    sym__newline = 37,
    sym__indent = 38,
    sym__dedent = 39,
    sym_module = 40,
    sym__statement = 41,
    sym__simple_statement = 42,
    sym_print_statement = 43,
    sym_expression_statement = 44,
    sym_return_statement = 45,
    sym_delete_statement = 46,
    sym__compound_statement = 47,
    sym_if_statement = 48,
    sym_elif_clause = 49,
    sym_else_clause = 50,
    sym_for_statement = 51,
    sym_while_statement = 52,
    sym_try_statement = 53,
    sym_except_clause = 54,
    sym_finally_clause = 55,
    sym_with_statement = 56,
    sym_with_item = 57,
    sym_function_definition = 58,
    sym_parameters = 59,
    sym_default_parameter = 60,
    sym_list_splat_parameter = 61,
    sym_dictionary_splat_parameter = 62,
    sym_class_definition = 63,
    sym_decorated_definition = 64,
    sym_decorator = 65,
    sym__suite = 66,
    sym_arguments = 67,
    sym_expression_list = 68,
    sym_dotted_name = 69,
    sym__expression = 70,
    sym_binary_operator = 71,
    sym_subscript = 72,
    sym_call = 73,
    sym_keyword_argument = 74,
    sym_list_splat_argument = 75,
    sym_dictionary_splat_argument = 76,
    aux_sym_module_repeat1 = 77,
    aux_sym_print_statement_repeat1 = 78,
    aux_sym_if_statement_repeat1 = 79,
    aux_sym_try_statement_repeat1 = 80,
    aux_sym_with_statement_repeat1 = 81,
    aux_sym_parameters_repeat1 = 82,
    aux_sym_decorated_definition_repeat1 = 83,
    aux_sym_dotted_name_repeat1 = 84,
    aux_sym_subscript_repeat1 = 85,
    aux_sym_call_repeat1 = 86,
    aux_sym_call_repeat2 = 87,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_print] = "print",
    [anon_sym_COMMA] = ",",
    [anon_sym_return] = "return",
    [anon_sym_del] = "del",
    [sym_pass_statement] = "pass_statement",
    [sym_break_statement] = "break_statement",
    [sym_continue_statement] = "continue_statement",
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
    [anon_sym_STAR_STAR] = "**",
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
    [sym_call] = "call",
    [sym_keyword_argument] = "keyword_argument",
    [sym_list_splat_argument] = "list_splat_argument",
    [sym_dictionary_splat_argument] = "dictionary_splat_argument",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_parameters_repeat1] = "parameters_repeat1",
    [aux_sym_decorated_definition_repeat1] = "decorated_definition_repeat1",
    [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
    [aux_sym_subscript_repeat1] = "subscript_repeat1",
    [aux_sym_call_repeat1] = "call_repeat1",
    [aux_sym_call_repeat2] = "call_repeat2",
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
    [sym_pass_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_break_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_continue_statement] = {
        .visible = true,
        .named = true,
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
    [anon_sym_STAR_STAR] = {
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
    [sym_call] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_keyword_argument] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_list_splat_argument] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dictionary_splat_argument] = {
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
    [aux_sym_call_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_call_repeat2] = {
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
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(10);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
            if (lookahead == '*')
                ADVANCE(7);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 7:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
        case 8:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 9:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 10:
            if (lookahead == '.')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 11:
            if (lookahead == '.')
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 13:
            if (lookahead == '.')
                ADVANCE(14);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_number);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_number);
        case 15:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 16:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 17:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 18:
            ACCEPT_TOKEN(anon_sym_AT);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 21:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_as);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'k')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_break_statement);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(30);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_class);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'u')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_continue_statement);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_def);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_del);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_elif);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_else);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'p')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_except);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(57);
            if (lookahead == 'o')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_finally);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_for);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_if);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_in);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(69);
            if (lookahead == 'r')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_pass_statement);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_print);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'u')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_return);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_try);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(86);
            if (lookahead == 'i')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_while);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_with);
        case 93:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(93);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(96);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 99:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(99);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 100:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 101:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 102:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'd')
                ADVANCE(110);
            LEX_ERROR();
        case 105:
            if (lookahead == 'l')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'a')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 's')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 's')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_class);
        case 110:
            if (lookahead == 'e')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'f')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            ACCEPT_TOKEN(anon_sym_def);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 115:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(116);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 116:
            if (lookahead == '.')
                ADVANCE(11);
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
                ADVANCE(9);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 118:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(118);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(134);
            LEX_ERROR();
        case 119:
            if (lookahead == 's')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            ACCEPT_TOKEN(anon_sym_as);
        case 121:
            if (lookahead == 'x')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'c')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'e')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'p')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 't')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            ACCEPT_TOKEN(anon_sym_except);
        case 127:
            if (lookahead == 'i')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'n')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'a')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'l')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'l')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'y')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(anon_sym_finally);
        case 134:
            if (lookahead == 'n')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            ACCEPT_TOKEN(anon_sym_in);
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(116);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
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
                ADVANCE(9);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(143);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 143:
            if (lookahead == '*')
                ADVANCE(7);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 148:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(134);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(152);
            if (lookahead == 'd')
                ADVANCE(153);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            LEX_ERROR();
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 155:
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
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(134);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(162);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 162:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(162);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
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
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(162);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(119);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(172);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(173);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            LEX_ERROR();
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(127);
            LEX_ERROR();
        case 178:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(179);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier);
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(134);
            LEX_ERROR();
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(172);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(179);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 188:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(116);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 189:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(162);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 191:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(191);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(147);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 192:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 193:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 194:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 195:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 196:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 197:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 198:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 199:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(172);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 200:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(172);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 201:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(172);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 202:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(179);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 203:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(203);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(179);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 204:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(179);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(162);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 206:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 207:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 208:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(208);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 209:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(209);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 210:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(210);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 211:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(211);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 212:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(212);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 93},
    [2] = {.lex_state = 96},
    [3] = {.lex_state = 96},
    [4] = {.lex_state = 96},
    [5] = {.lex_state = 97, .external_tokens = 2},
    [6] = {.lex_state = 96},
    [7] = {.lex_state = 96},
    [8] = {.lex_state = 96},
    [9] = {.lex_state = 98},
    [10] = {.lex_state = 96},
    [11] = {.lex_state = 99},
    [12] = {.lex_state = 99},
    [13] = {.lex_state = 99},
    [14] = {.lex_state = 100, .external_tokens = 2},
    [15] = {.lex_state = 101},
    [16] = {.lex_state = 102, .external_tokens = 2},
    [17] = {.lex_state = 103, .external_tokens = 2},
    [18] = {.lex_state = 102, .external_tokens = 2},
    [19] = {.lex_state = 102, .external_tokens = 2},
    [20] = {.lex_state = 104},
    [21] = {.lex_state = 113, .external_tokens = 2},
    [22] = {.lex_state = 102, .external_tokens = 2},
    [23] = {.lex_state = 104},
    [24] = {.lex_state = 102, .external_tokens = 2},
    [25] = {.lex_state = 104},
    [26] = {.lex_state = 101},
    [27] = {.lex_state = 102, .external_tokens = 2},
    [28] = {.lex_state = 114},
    [29] = {.lex_state = 96},
    [30] = {.lex_state = 115},
    [31] = {.lex_state = 117},
    [32] = {.lex_state = 118},
    [33] = {.lex_state = 136},
    [34] = {.lex_state = 137},
    [35] = {.lex_state = 114},
    [36] = {.lex_state = 96},
    [37] = {.lex_state = 115},
    [38] = {.lex_state = 100, .external_tokens = 2},
    [39] = {.lex_state = 117},
    [40] = {.lex_state = 137},
    [41] = {.lex_state = 100, .external_tokens = 2},
    [42] = {.lex_state = 117},
    [43] = {.lex_state = 100, .external_tokens = 2},
    [44] = {.lex_state = 136},
    [45] = {.lex_state = 117},
    [46] = {.lex_state = 136},
    [47] = {.lex_state = 137},
    [48] = {.lex_state = 118},
    [49] = {.lex_state = 117},
    [50] = {.lex_state = 137},
    [51] = {.lex_state = 118},
    [52] = {.lex_state = 118},
    [53] = {.lex_state = 117},
    [54] = {.lex_state = 136},
    [55] = {.lex_state = 118},
    [56] = {.lex_state = 96},
    [57] = {.lex_state = 96},
    [58] = {.lex_state = 138},
    [59] = {.lex_state = 139},
    [60] = {.lex_state = 140},
    [61] = {.lex_state = 140},
    [62] = {.lex_state = 141},
    [63] = {.lex_state = 114},
    [64] = {.lex_state = 139},
    [65] = {.lex_state = 140},
    [66] = {.lex_state = 140},
    [67] = {.lex_state = 141},
    [68] = {.lex_state = 118},
    [69] = {.lex_state = 142},
    [70] = {.lex_state = 140},
    [71] = {.lex_state = 142},
    [72] = {.lex_state = 118},
    [73] = {.lex_state = 139},
    [74] = {.lex_state = 140},
    [75] = {.lex_state = 141},
    [76] = {.lex_state = 118},
    [77] = {.lex_state = 139},
    [78] = {.lex_state = 140},
    [79] = {.lex_state = 141},
    [80] = {.lex_state = 118},
    [81] = {.lex_state = 144},
    [82] = {.lex_state = 118},
    [83] = {.lex_state = 142},
    [84] = {.lex_state = 140},
    [85] = {.lex_state = 142},
    [86] = {.lex_state = 141},
    [87] = {.lex_state = 144},
    [88] = {.lex_state = 96},
    [89] = {.lex_state = 139},
    [90] = {.lex_state = 145},
    [91] = {.lex_state = 139},
    [92] = {.lex_state = 100, .external_tokens = 2},
    [93] = {.lex_state = 139},
    [94] = {.lex_state = 140},
    [95] = {.lex_state = 140},
    [96] = {.lex_state = 141},
    [97] = {.lex_state = 114},
    [98] = {.lex_state = 139},
    [99] = {.lex_state = 140},
    [100] = {.lex_state = 140},
    [101] = {.lex_state = 141},
    [102] = {.lex_state = 100, .external_tokens = 2},
    [103] = {.lex_state = 142},
    [104] = {.lex_state = 140},
    [105] = {.lex_state = 142},
    [106] = {.lex_state = 100, .external_tokens = 2},
    [107] = {.lex_state = 141},
    [108] = {.lex_state = 100, .external_tokens = 2},
    [109] = {.lex_state = 141},
    [110] = {.lex_state = 100, .external_tokens = 2},
    [111] = {.lex_state = 144},
    [112] = {.lex_state = 100, .external_tokens = 2},
    [113] = {.lex_state = 142},
    [114] = {.lex_state = 140},
    [115] = {.lex_state = 142},
    [116] = {.lex_state = 141},
    [117] = {.lex_state = 144},
    [118] = {.lex_state = 102, .external_tokens = 2},
    [119] = {.lex_state = 146, .external_tokens = 2},
    [120] = {.lex_state = 148, .external_tokens = 2},
    [121] = {.lex_state = 96},
    [122] = {.lex_state = 104},
    [123] = {.lex_state = 103, .external_tokens = 2},
    [124] = {.lex_state = 104},
    [125] = {.lex_state = 139},
    [126] = {.lex_state = 96},
    [127] = {.lex_state = 103, .external_tokens = 2},
    [128] = {.lex_state = 140},
    [129] = {.lex_state = 96},
    [130] = {.lex_state = 103, .external_tokens = 2},
    [131] = {.lex_state = 149},
    [132] = {.lex_state = 149},
    [133] = {.lex_state = 99},
    [134] = {.lex_state = 146, .external_tokens = 2},
    [135] = {.lex_state = 99},
    [136] = {.lex_state = 146, .external_tokens = 2},
    [137] = {.lex_state = 146, .external_tokens = 2},
    [138] = {.lex_state = 150},
    [139] = {.lex_state = 151, .external_tokens = 3},
    [140] = {.lex_state = 96},
    [141] = {.lex_state = 141},
    [142] = {.lex_state = 149},
    [143] = {.lex_state = 155},
    [144] = {.lex_state = 98},
    [145] = {.lex_state = 151, .external_tokens = 3},
    [146] = {.lex_state = 156, .external_tokens = 4},
    [147] = {.lex_state = 97, .external_tokens = 2},
    [148] = {.lex_state = 102, .external_tokens = 2},
    [149] = {.lex_state = 96},
    [150] = {.lex_state = 96},
    [151] = {.lex_state = 96},
    [152] = {.lex_state = 98},
    [153] = {.lex_state = 96},
    [154] = {.lex_state = 99},
    [155] = {.lex_state = 99},
    [156] = {.lex_state = 97, .external_tokens = 2},
    [157] = {.lex_state = 156, .external_tokens = 4},
    [158] = {.lex_state = 103, .external_tokens = 2},
    [159] = {.lex_state = 156, .external_tokens = 4},
    [160] = {.lex_state = 156, .external_tokens = 4},
    [161] = {.lex_state = 156, .external_tokens = 4},
    [162] = {.lex_state = 104},
    [163] = {.lex_state = 156, .external_tokens = 4},
    [164] = {.lex_state = 97, .external_tokens = 2},
    [165] = {.lex_state = 156, .external_tokens = 4},
    [166] = {.lex_state = 156, .external_tokens = 4},
    [167] = {.lex_state = 150},
    [168] = {.lex_state = 151, .external_tokens = 3},
    [169] = {.lex_state = 96},
    [170] = {.lex_state = 141},
    [171] = {.lex_state = 98},
    [172] = {.lex_state = 151, .external_tokens = 3},
    [173] = {.lex_state = 96},
    [174] = {.lex_state = 96},
    [175] = {.lex_state = 96},
    [176] = {.lex_state = 157, .external_tokens = 4},
    [177] = {.lex_state = 158, .external_tokens = 4},
    [178] = {.lex_state = 156, .external_tokens = 4},
    [179] = {.lex_state = 157, .external_tokens = 4},
    [180] = {.lex_state = 156, .external_tokens = 4},
    [181] = {.lex_state = 159, .external_tokens = 4},
    [182] = {.lex_state = 114},
    [183] = {.lex_state = 96},
    [184] = {.lex_state = 115},
    [185] = {.lex_state = 117},
    [186] = {.lex_state = 136},
    [187] = {.lex_state = 137},
    [188] = {.lex_state = 158, .external_tokens = 4},
    [189] = {.lex_state = 117},
    [190] = {.lex_state = 137},
    [191] = {.lex_state = 158, .external_tokens = 4},
    [192] = {.lex_state = 158, .external_tokens = 4},
    [193] = {.lex_state = 158, .external_tokens = 4},
    [194] = {.lex_state = 139},
    [195] = {.lex_state = 140},
    [196] = {.lex_state = 140},
    [197] = {.lex_state = 141},
    [198] = {.lex_state = 114},
    [199] = {.lex_state = 139},
    [200] = {.lex_state = 140},
    [201] = {.lex_state = 140},
    [202] = {.lex_state = 141},
    [203] = {.lex_state = 158, .external_tokens = 4},
    [204] = {.lex_state = 142},
    [205] = {.lex_state = 140},
    [206] = {.lex_state = 142},
    [207] = {.lex_state = 158, .external_tokens = 4},
    [208] = {.lex_state = 141},
    [209] = {.lex_state = 158, .external_tokens = 4},
    [210] = {.lex_state = 141},
    [211] = {.lex_state = 158, .external_tokens = 4},
    [212] = {.lex_state = 144},
    [213] = {.lex_state = 158, .external_tokens = 4},
    [214] = {.lex_state = 142},
    [215] = {.lex_state = 140},
    [216] = {.lex_state = 142},
    [217] = {.lex_state = 141},
    [218] = {.lex_state = 144},
    [219] = {.lex_state = 157, .external_tokens = 4},
    [220] = {.lex_state = 156, .external_tokens = 4},
    [221] = {.lex_state = 157, .external_tokens = 4},
    [222] = {.lex_state = 157, .external_tokens = 4},
    [223] = {.lex_state = 158, .external_tokens = 4},
    [224] = {.lex_state = 96},
    [225] = {.lex_state = 160, .external_tokens = 4},
    [226] = {.lex_state = 96},
    [227] = {.lex_state = 158, .external_tokens = 4},
    [228] = {.lex_state = 158, .external_tokens = 4},
    [229] = {.lex_state = 157, .external_tokens = 4},
    [230] = {.lex_state = 158, .external_tokens = 4},
    [231] = {.lex_state = 160, .external_tokens = 4},
    [232] = {.lex_state = 156, .external_tokens = 4},
    [233] = {.lex_state = 148},
    [234] = {.lex_state = 161},
    [235] = {.lex_state = 98},
    [236] = {.lex_state = 151, .external_tokens = 3},
    [237] = {.lex_state = 156, .external_tokens = 4},
    [238] = {.lex_state = 98},
    [239] = {.lex_state = 163},
    [240] = {.lex_state = 164},
    [241] = {.lex_state = 140},
    [242] = {.lex_state = 140},
    [243] = {.lex_state = 141},
    [244] = {.lex_state = 163},
    [245] = {.lex_state = 164},
    [246] = {.lex_state = 140},
    [247] = {.lex_state = 140},
    [248] = {.lex_state = 141},
    [249] = {.lex_state = 98},
    [250] = {.lex_state = 165},
    [251] = {.lex_state = 165},
    [252] = {.lex_state = 141},
    [253] = {.lex_state = 98},
    [254] = {.lex_state = 99},
    [255] = {.lex_state = 141},
    [256] = {.lex_state = 161},
    [257] = {.lex_state = 98},
    [258] = {.lex_state = 96},
    [259] = {.lex_state = 139},
    [260] = {.lex_state = 98},
    [261] = {.lex_state = 165},
    [262] = {.lex_state = 141},
    [263] = {.lex_state = 161},
    [264] = {.lex_state = 140},
    [265] = {.lex_state = 166},
    [266] = {.lex_state = 167},
    [267] = {.lex_state = 96},
    [268] = {.lex_state = 168},
    [269] = {.lex_state = 96},
    [270] = {.lex_state = 151, .external_tokens = 3},
    [271] = {.lex_state = 166},
    [272] = {.lex_state = 96},
    [273] = {.lex_state = 151, .external_tokens = 3},
    [274] = {.lex_state = 156, .external_tokens = 4},
    [275] = {.lex_state = 166},
    [276] = {.lex_state = 156, .external_tokens = 4},
    [277] = {.lex_state = 166},
    [278] = {.lex_state = 151, .external_tokens = 3},
    [279] = {.lex_state = 96},
    [280] = {.lex_state = 96},
    [281] = {.lex_state = 96},
    [282] = {.lex_state = 169},
    [283] = {.lex_state = 156, .external_tokens = 4},
    [284] = {.lex_state = 169},
    [285] = {.lex_state = 169},
    [286] = {.lex_state = 170},
    [287] = {.lex_state = 96},
    [288] = {.lex_state = 98},
    [289] = {.lex_state = 171, .external_tokens = 4},
    [290] = {.lex_state = 156, .external_tokens = 4},
    [291] = {.lex_state = 171, .external_tokens = 4},
    [292] = {.lex_state = 98},
    [293] = {.lex_state = 174, .external_tokens = 4},
    [294] = {.lex_state = 171, .external_tokens = 4},
    [295] = {.lex_state = 156, .external_tokens = 4},
    [296] = {.lex_state = 156, .external_tokens = 4},
    [297] = {.lex_state = 151, .external_tokens = 3},
    [298] = {.lex_state = 174, .external_tokens = 4},
    [299] = {.lex_state = 151, .external_tokens = 3},
    [300] = {.lex_state = 156, .external_tokens = 4},
    [301] = {.lex_state = 167},
    [302] = {.lex_state = 96},
    [303] = {.lex_state = 151, .external_tokens = 3},
    [304] = {.lex_state = 175},
    [305] = {.lex_state = 151, .external_tokens = 3},
    [306] = {.lex_state = 171, .external_tokens = 4},
    [307] = {.lex_state = 171, .external_tokens = 4},
    [308] = {.lex_state = 169},
    [309] = {.lex_state = 156, .external_tokens = 4},
    [310] = {.lex_state = 169},
    [311] = {.lex_state = 169},
    [312] = {.lex_state = 169},
    [313] = {.lex_state = 176},
    [314] = {.lex_state = 177},
    [315] = {.lex_state = 175},
    [316] = {.lex_state = 151, .external_tokens = 3},
    [317] = {.lex_state = 178, .external_tokens = 4},
    [318] = {.lex_state = 156, .external_tokens = 4},
    [319] = {.lex_state = 180},
    [320] = {.lex_state = 96},
    [321] = {.lex_state = 98},
    [322] = {.lex_state = 151, .external_tokens = 3},
    [323] = {.lex_state = 178, .external_tokens = 4},
    [324] = {.lex_state = 156, .external_tokens = 4},
    [325] = {.lex_state = 175},
    [326] = {.lex_state = 151, .external_tokens = 3},
    [327] = {.lex_state = 181, .external_tokens = 4},
    [328] = {.lex_state = 96},
    [329] = {.lex_state = 181, .external_tokens = 4},
    [330] = {.lex_state = 156, .external_tokens = 4},
    [331] = {.lex_state = 181, .external_tokens = 4},
    [332] = {.lex_state = 181, .external_tokens = 4},
    [333] = {.lex_state = 156, .external_tokens = 4},
    [334] = {.lex_state = 175},
    [335] = {.lex_state = 151, .external_tokens = 3},
    [336] = {.lex_state = 181, .external_tokens = 4},
    [337] = {.lex_state = 97, .external_tokens = 2},
    [338] = {.lex_state = 100, .external_tokens = 2},
    [339] = {.lex_state = 96},
    [340] = {.lex_state = 183, .external_tokens = 2},
    [341] = {.lex_state = 96},
    [342] = {.lex_state = 100, .external_tokens = 2},
    [343] = {.lex_state = 100, .external_tokens = 2},
    [344] = {.lex_state = 97, .external_tokens = 2},
    [345] = {.lex_state = 100, .external_tokens = 2},
    [346] = {.lex_state = 183, .external_tokens = 2},
    [347] = {.lex_state = 102, .external_tokens = 2},
    [348] = {.lex_state = 148},
    [349] = {.lex_state = 98},
    [350] = {.lex_state = 151, .external_tokens = 3},
    [351] = {.lex_state = 102, .external_tokens = 2},
    [352] = {.lex_state = 166},
    [353] = {.lex_state = 151, .external_tokens = 3},
    [354] = {.lex_state = 166},
    [355] = {.lex_state = 151, .external_tokens = 3},
    [356] = {.lex_state = 102, .external_tokens = 2},
    [357] = {.lex_state = 102, .external_tokens = 2},
    [358] = {.lex_state = 151, .external_tokens = 3},
    [359] = {.lex_state = 169},
    [360] = {.lex_state = 96},
    [361] = {.lex_state = 98},
    [362] = {.lex_state = 184, .external_tokens = 2},
    [363] = {.lex_state = 102, .external_tokens = 2},
    [364] = {.lex_state = 184, .external_tokens = 2},
    [365] = {.lex_state = 98},
    [366] = {.lex_state = 185, .external_tokens = 2},
    [367] = {.lex_state = 184, .external_tokens = 2},
    [368] = {.lex_state = 102, .external_tokens = 2},
    [369] = {.lex_state = 102, .external_tokens = 2},
    [370] = {.lex_state = 151, .external_tokens = 3},
    [371] = {.lex_state = 185, .external_tokens = 2},
    [372] = {.lex_state = 151, .external_tokens = 3},
    [373] = {.lex_state = 102, .external_tokens = 2},
    [374] = {.lex_state = 167},
    [375] = {.lex_state = 96},
    [376] = {.lex_state = 151, .external_tokens = 3},
    [377] = {.lex_state = 175},
    [378] = {.lex_state = 151, .external_tokens = 3},
    [379] = {.lex_state = 184, .external_tokens = 2},
    [380] = {.lex_state = 184, .external_tokens = 2},
    [381] = {.lex_state = 175},
    [382] = {.lex_state = 151, .external_tokens = 3},
    [383] = {.lex_state = 186, .external_tokens = 2},
    [384] = {.lex_state = 102, .external_tokens = 2},
    [385] = {.lex_state = 180},
    [386] = {.lex_state = 96},
    [387] = {.lex_state = 98},
    [388] = {.lex_state = 151, .external_tokens = 3},
    [389] = {.lex_state = 186, .external_tokens = 2},
    [390] = {.lex_state = 102, .external_tokens = 2},
    [391] = {.lex_state = 175},
    [392] = {.lex_state = 151, .external_tokens = 3},
    [393] = {.lex_state = 187, .external_tokens = 2},
    [394] = {.lex_state = 96},
    [395] = {.lex_state = 187, .external_tokens = 2},
    [396] = {.lex_state = 102, .external_tokens = 2},
    [397] = {.lex_state = 187, .external_tokens = 2},
    [398] = {.lex_state = 187, .external_tokens = 2},
    [399] = {.lex_state = 102, .external_tokens = 2},
    [400] = {.lex_state = 175},
    [401] = {.lex_state = 151, .external_tokens = 3},
    [402] = {.lex_state = 187, .external_tokens = 2},
    [403] = {.lex_state = 96},
    [404] = {.lex_state = 188},
    [405] = {.lex_state = 96},
    [406] = {.lex_state = 96},
    [407] = {.lex_state = 97, .external_tokens = 5},
    [408] = {.lex_state = 96},
    [409] = {.lex_state = 151, .external_tokens = 3},
    [410] = {.lex_state = 96},
    [411] = {.lex_state = 98},
    [412] = {.lex_state = 96},
    [413] = {.lex_state = 96},
    [414] = {.lex_state = 96},
    [415] = {.lex_state = 98},
    [416] = {.lex_state = 96},
    [417] = {.lex_state = 96},
    [418] = {.lex_state = 98},
    [419] = {.lex_state = 96},
    [420] = {.lex_state = 99},
    [421] = {.lex_state = 144},
    [422] = {.lex_state = 189, .external_tokens = 5},
    [423] = {.lex_state = 96},
    [424] = {.lex_state = 190},
    [425] = {.lex_state = 99},
    [426] = {.lex_state = 99},
    [427] = {.lex_state = 96},
    [428] = {.lex_state = 115},
    [429] = {.lex_state = 117},
    [430] = {.lex_state = 189, .external_tokens = 5},
    [431] = {.lex_state = 189, .external_tokens = 5},
    [432] = {.lex_state = 191, .external_tokens = 5},
    [433] = {.lex_state = 102, .external_tokens = 5},
    [434] = {.lex_state = 156, .external_tokens = 4},
    [435] = {.lex_state = 97, .external_tokens = 5},
    [436] = {.lex_state = 102, .external_tokens = 5},
    [437] = {.lex_state = 97, .external_tokens = 5},
    [438] = {.lex_state = 102, .external_tokens = 5},
    [439] = {.lex_state = 102, .external_tokens = 5},
    [440] = {.lex_state = 187, .external_tokens = 5},
    [441] = {.lex_state = 185, .external_tokens = 5},
    [442] = {.lex_state = 184, .external_tokens = 5},
    [443] = {.lex_state = 102, .external_tokens = 5},
    [444] = {.lex_state = 166},
    [445] = {.lex_state = 102, .external_tokens = 5},
    [446] = {.lex_state = 98},
    [447] = {.lex_state = 140},
    [448] = {.lex_state = 140},
    [449] = {.lex_state = 141},
    [450] = {.lex_state = 104},
    [451] = {.lex_state = 97, .external_tokens = 5},
    [452] = {.lex_state = 192, .external_tokens = 5},
    [453] = {.lex_state = 189, .external_tokens = 5},
    [454] = {.lex_state = 140},
    [455] = {.lex_state = 140},
    [456] = {.lex_state = 141},
    [457] = {.lex_state = 102, .external_tokens = 5},
    [458] = {.lex_state = 193, .external_tokens = 5},
    [459] = {.lex_state = 187, .external_tokens = 5},
    [460] = {.lex_state = 184, .external_tokens = 5},
    [461] = {.lex_state = 166},
    [462] = {.lex_state = 104},
    [463] = {.lex_state = 117},
    [464] = {.lex_state = 114},
    [465] = {.lex_state = 140},
    [466] = {.lex_state = 142},
    [467] = {.lex_state = 189, .external_tokens = 5},
    [468] = {.lex_state = 141},
    [469] = {.lex_state = 189, .external_tokens = 5},
    [470] = {.lex_state = 139},
    [471] = {.lex_state = 140},
    [472] = {.lex_state = 140},
    [473] = {.lex_state = 141},
    [474] = {.lex_state = 189, .external_tokens = 5},
    [475] = {.lex_state = 142},
    [476] = {.lex_state = 140},
    [477] = {.lex_state = 142},
    [478] = {.lex_state = 189, .external_tokens = 5},
    [479] = {.lex_state = 141},
    [480] = {.lex_state = 189, .external_tokens = 5},
    [481] = {.lex_state = 141},
    [482] = {.lex_state = 189, .external_tokens = 5},
    [483] = {.lex_state = 144},
    [484] = {.lex_state = 137},
    [485] = {.lex_state = 189, .external_tokens = 5},
    [486] = {.lex_state = 189, .external_tokens = 5},
    [487] = {.lex_state = 102, .external_tokens = 5},
    [488] = {.lex_state = 151, .external_tokens = 3},
    [489] = {.lex_state = 96},
    [490] = {.lex_state = 96},
    [491] = {.lex_state = 96},
    [492] = {.lex_state = 97, .external_tokens = 5},
    [493] = {.lex_state = 102, .external_tokens = 5},
    [494] = {.lex_state = 194, .external_tokens = 5},
    [495] = {.lex_state = 114},
    [496] = {.lex_state = 96},
    [497] = {.lex_state = 117},
    [498] = {.lex_state = 136},
    [499] = {.lex_state = 137},
    [500] = {.lex_state = 189, .external_tokens = 5},
    [501] = {.lex_state = 194, .external_tokens = 5},
    [502] = {.lex_state = 139},
    [503] = {.lex_state = 140},
    [504] = {.lex_state = 140},
    [505] = {.lex_state = 141},
    [506] = {.lex_state = 189, .external_tokens = 5},
    [507] = {.lex_state = 142},
    [508] = {.lex_state = 140},
    [509] = {.lex_state = 142},
    [510] = {.lex_state = 141},
    [511] = {.lex_state = 144},
    [512] = {.lex_state = 97, .external_tokens = 5},
    [513] = {.lex_state = 156, .external_tokens = 4},
    [514] = {.lex_state = 97, .external_tokens = 5},
    [515] = {.lex_state = 97, .external_tokens = 5},
    [516] = {.lex_state = 195, .external_tokens = 5},
    [517] = {.lex_state = 96},
    [518] = {.lex_state = 96},
    [519] = {.lex_state = 196, .external_tokens = 5},
    [520] = {.lex_state = 96},
    [521] = {.lex_state = 195, .external_tokens = 5},
    [522] = {.lex_state = 195, .external_tokens = 5},
    [523] = {.lex_state = 195, .external_tokens = 5},
    [524] = {.lex_state = 97, .external_tokens = 5},
    [525] = {.lex_state = 195, .external_tokens = 5},
    [526] = {.lex_state = 196, .external_tokens = 5},
    [527] = {.lex_state = 185, .external_tokens = 5},
    [528] = {.lex_state = 184, .external_tokens = 5},
    [529] = {.lex_state = 102, .external_tokens = 5},
    [530] = {.lex_state = 102, .external_tokens = 5},
    [531] = {.lex_state = 98},
    [532] = {.lex_state = 187, .external_tokens = 5},
    [533] = {.lex_state = 102, .external_tokens = 5},
    [534] = {.lex_state = 151, .external_tokens = 3},
    [535] = {.lex_state = 185, .external_tokens = 5},
    [536] = {.lex_state = 96},
    [537] = {.lex_state = 197, .external_tokens = 5},
    [538] = {.lex_state = 96},
    [539] = {.lex_state = 197, .external_tokens = 5},
    [540] = {.lex_state = 102, .external_tokens = 5},
    [541] = {.lex_state = 103, .external_tokens = 2},
    [542] = {.lex_state = 102, .external_tokens = 5},
    [543] = {.lex_state = 189, .external_tokens = 5},
    [544] = {.lex_state = 142},
    [545] = {.lex_state = 189, .external_tokens = 5},
    [546] = {.lex_state = 141},
    [547] = {.lex_state = 189, .external_tokens = 5},
    [548] = {.lex_state = 144},
    [549] = {.lex_state = 188},
    [550] = {.lex_state = 151, .external_tokens = 3},
    [551] = {.lex_state = 189, .external_tokens = 5},
    [552] = {.lex_state = 97, .external_tokens = 5},
    [553] = {.lex_state = 113, .external_tokens = 5},
    [554] = {.lex_state = 96},
    [555] = {.lex_state = 113, .external_tokens = 5},
    [556] = {.lex_state = 187, .external_tokens = 5},
    [557] = {.lex_state = 102, .external_tokens = 5},
    [558] = {.lex_state = 198, .external_tokens = 5},
    [559] = {.lex_state = 151, .external_tokens = 3},
    [560] = {.lex_state = 96},
    [561] = {.lex_state = 198, .external_tokens = 5},
    [562] = {.lex_state = 96},
    [563] = {.lex_state = 96},
    [564] = {.lex_state = 96},
    [565] = {.lex_state = 184, .external_tokens = 5},
    [566] = {.lex_state = 199, .external_tokens = 5},
    [567] = {.lex_state = 96},
    [568] = {.lex_state = 199, .external_tokens = 5},
    [569] = {.lex_state = 200, .external_tokens = 5},
    [570] = {.lex_state = 96},
    [571] = {.lex_state = 96},
    [572] = {.lex_state = 201, .external_tokens = 5},
    [573] = {.lex_state = 96},
    [574] = {.lex_state = 200, .external_tokens = 5},
    [575] = {.lex_state = 200, .external_tokens = 5},
    [576] = {.lex_state = 200, .external_tokens = 5},
    [577] = {.lex_state = 200, .external_tokens = 5},
    [578] = {.lex_state = 201, .external_tokens = 5},
    [579] = {.lex_state = 151, .external_tokens = 3},
    [580] = {.lex_state = 98},
    [581] = {.lex_state = 151, .external_tokens = 3},
    [582] = {.lex_state = 102, .external_tokens = 5},
    [583] = {.lex_state = 96},
    [584] = {.lex_state = 96},
    [585] = {.lex_state = 96},
    [586] = {.lex_state = 186, .external_tokens = 5},
    [587] = {.lex_state = 202, .external_tokens = 5},
    [588] = {.lex_state = 96},
    [589] = {.lex_state = 202, .external_tokens = 5},
    [590] = {.lex_state = 102, .external_tokens = 5},
    [591] = {.lex_state = 203, .external_tokens = 5},
    [592] = {.lex_state = 96},
    [593] = {.lex_state = 96},
    [594] = {.lex_state = 204, .external_tokens = 5},
    [595] = {.lex_state = 96},
    [596] = {.lex_state = 203, .external_tokens = 5},
    [597] = {.lex_state = 203, .external_tokens = 5},
    [598] = {.lex_state = 203, .external_tokens = 5},
    [599] = {.lex_state = 203, .external_tokens = 5},
    [600] = {.lex_state = 204, .external_tokens = 5},
    [601] = {.lex_state = 102, .external_tokens = 5},
    [602] = {.lex_state = 184, .external_tokens = 5},
    [603] = {.lex_state = 102, .external_tokens = 5},
    [604] = {.lex_state = 98},
    [605] = {.lex_state = 165},
    [606] = {.lex_state = 98},
    [607] = {.lex_state = 141},
    [608] = {.lex_state = 98},
    [609] = {.lex_state = 161},
    [610] = {.lex_state = 98},
    [611] = {.lex_state = 151, .external_tokens = 3},
    [612] = {.lex_state = 102, .external_tokens = 5},
    [613] = {.lex_state = 151, .external_tokens = 3},
    [614] = {.lex_state = 102, .external_tokens = 5},
    [615] = {.lex_state = 151, .external_tokens = 3},
    [616] = {.lex_state = 205},
    [617] = {.lex_state = 138},
    [618] = {.lex_state = 141},
    [619] = {.lex_state = 102, .external_tokens = 5},
    [620] = {.lex_state = 189, .external_tokens = 5},
    [621] = {.lex_state = 146, .external_tokens = 2},
    [622] = {.lex_state = 150},
    [623] = {.lex_state = 96},
    [624] = {.lex_state = 139},
    [625] = {.lex_state = 139},
    [626] = {.lex_state = 190},
    [627] = {.lex_state = 138},
    [628] = {.lex_state = 139},
    [629] = {.lex_state = 144},
    [630] = {.lex_state = 189, .external_tokens = 5},
    [631] = {.lex_state = 140},
    [632] = {.lex_state = 139},
    [633] = {.lex_state = 148},
    [634] = {.lex_state = 166},
    [635] = {.lex_state = 151, .external_tokens = 3},
    [636] = {.lex_state = 102, .external_tokens = 5},
    [637] = {.lex_state = 168},
    [638] = {.lex_state = 167},
    [639] = {.lex_state = 96},
    [640] = {.lex_state = 151, .external_tokens = 3},
    [641] = {.lex_state = 175},
    [642] = {.lex_state = 184, .external_tokens = 5},
    [643] = {.lex_state = 151, .external_tokens = 3},
    [644] = {.lex_state = 169},
    [645] = {.lex_state = 175},
    [646] = {.lex_state = 151, .external_tokens = 3},
    [647] = {.lex_state = 186, .external_tokens = 5},
    [648] = {.lex_state = 102, .external_tokens = 5},
    [649] = {.lex_state = 98},
    [650] = {.lex_state = 180},
    [651] = {.lex_state = 151, .external_tokens = 3},
    [652] = {.lex_state = 96},
    [653] = {.lex_state = 96},
    [654] = {.lex_state = 96},
    [655] = {.lex_state = 206, .external_tokens = 5},
    [656] = {.lex_state = 96},
    [657] = {.lex_state = 206, .external_tokens = 5},
    [658] = {.lex_state = 207, .external_tokens = 5},
    [659] = {.lex_state = 96},
    [660] = {.lex_state = 96},
    [661] = {.lex_state = 208, .external_tokens = 5},
    [662] = {.lex_state = 96},
    [663] = {.lex_state = 207, .external_tokens = 5},
    [664] = {.lex_state = 207, .external_tokens = 5},
    [665] = {.lex_state = 207, .external_tokens = 5},
    [666] = {.lex_state = 207, .external_tokens = 5},
    [667] = {.lex_state = 208, .external_tokens = 5},
    [668] = {.lex_state = 175},
    [669] = {.lex_state = 151, .external_tokens = 3},
    [670] = {.lex_state = 96},
    [671] = {.lex_state = 96},
    [672] = {.lex_state = 96},
    [673] = {.lex_state = 187, .external_tokens = 5},
    [674] = {.lex_state = 209, .external_tokens = 5},
    [675] = {.lex_state = 96},
    [676] = {.lex_state = 209, .external_tokens = 5},
    [677] = {.lex_state = 210, .external_tokens = 5},
    [678] = {.lex_state = 96},
    [679] = {.lex_state = 96},
    [680] = {.lex_state = 211, .external_tokens = 5},
    [681] = {.lex_state = 96},
    [682] = {.lex_state = 210, .external_tokens = 5},
    [683] = {.lex_state = 210, .external_tokens = 5},
    [684] = {.lex_state = 210, .external_tokens = 5},
    [685] = {.lex_state = 210, .external_tokens = 5},
    [686] = {.lex_state = 211, .external_tokens = 5},
    [687] = {.lex_state = 175},
    [688] = {.lex_state = 151, .external_tokens = 3},
    [689] = {.lex_state = 187, .external_tokens = 5},
    [690] = {.lex_state = 102, .external_tokens = 5},
    [691] = {.lex_state = 100, .external_tokens = 5},
    [692] = {.lex_state = 96},
    [693] = {.lex_state = 96},
    [694] = {.lex_state = 183, .external_tokens = 5},
    [695] = {.lex_state = 96},
    [696] = {.lex_state = 100, .external_tokens = 5},
    [697] = {.lex_state = 100, .external_tokens = 5},
    [698] = {.lex_state = 100, .external_tokens = 5},
    [699] = {.lex_state = 189, .external_tokens = 5},
    [700] = {.lex_state = 117},
    [701] = {.lex_state = 189, .external_tokens = 5},
    [702] = {.lex_state = 212, .external_tokens = 5},
    [703] = {.lex_state = 166},
    [704] = {.lex_state = 189, .external_tokens = 5},
    [705] = {.lex_state = 140},
    [706] = {.lex_state = 141},
    [707] = {.lex_state = 189, .external_tokens = 5},
    [708] = {.lex_state = 100, .external_tokens = 5},
    [709] = {.lex_state = 183, .external_tokens = 5},
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
        [sym_module] = STATE(15),
        [sym__statement] = STATE(436),
        [sym__simple_statement] = STATE(437),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__compound_statement] = STATE(438),
        [sym_if_statement] = STATE(439),
        [sym_elif_clause] = STATE(440),
        [sym_else_clause] = STATE(441),
        [sym_for_statement] = STATE(439),
        [sym_while_statement] = STATE(439),
        [sym_try_statement] = STATE(439),
        [sym_except_clause] = STATE(442),
        [sym_finally_clause] = STATE(443),
        [sym_with_statement] = STATE(439),
        [sym_with_item] = STATE(444),
        [sym_function_definition] = STATE(445),
        [sym_parameters] = STATE(446),
        [sym_default_parameter] = STATE(447),
        [sym_list_splat_parameter] = STATE(448),
        [sym_dictionary_splat_parameter] = STATE(449),
        [sym_class_definition] = STATE(445),
        [sym_decorated_definition] = STATE(439),
        [sym_decorator] = STATE(450),
        [sym__suite] = STATE(451),
        [sym_arguments] = STATE(123),
        [sym_expression_list] = STATE(452),
        [sym_dotted_name] = STATE(120),
        [sym__expression] = STATE(453),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_keyword_argument] = STATE(454),
        [sym_list_splat_argument] = STATE(455),
        [sym_dictionary_splat_argument] = STATE(456),
        [aux_sym_module_repeat1] = STATE(457),
        [aux_sym_print_statement_repeat1] = STATE(458),
        [aux_sym_if_statement_repeat1] = STATE(459),
        [aux_sym_try_statement_repeat1] = STATE(460),
        [aux_sym_with_statement_repeat1] = STATE(461),
        [aux_sym_parameters_repeat1] = STATE(244),
        [aux_sym_decorated_definition_repeat1] = STATE(462),
        [aux_sym_dotted_name_repeat1] = STATE(134),
        [aux_sym_subscript_repeat1] = STATE(463),
        [aux_sym_call_repeat1] = STATE(464),
        [aux_sym_call_repeat2] = STATE(465),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_return] = ACTIONS(9),
        [anon_sym_del] = ACTIONS(11),
        [sym_pass_statement] = ACTIONS(13),
        [sym_break_statement] = ACTIONS(13),
        [sym_continue_statement] = ACTIONS(13),
        [anon_sym_if] = ACTIONS(15),
        [anon_sym_COLON] = ACTIONS(17),
        [anon_sym_elif] = ACTIONS(19),
        [anon_sym_else] = ACTIONS(21),
        [anon_sym_for] = ACTIONS(23),
        [anon_sym_in] = ACTIONS(25),
        [anon_sym_while] = ACTIONS(27),
        [anon_sym_try] = ACTIONS(29),
        [anon_sym_except] = ACTIONS(31),
        [anon_sym_as] = ACTIONS(33),
        [anon_sym_finally] = ACTIONS(35),
        [anon_sym_with] = ACTIONS(37),
        [anon_sym_def] = ACTIONS(39),
        [anon_sym_LPAREN] = ACTIONS(41),
        [anon_sym_RPAREN] = ACTIONS(43),
        [anon_sym_EQ] = ACTIONS(45),
        [anon_sym_STAR] = ACTIONS(47),
        [anon_sym_class] = ACTIONS(49),
        [anon_sym_AT] = ACTIONS(51),
        [anon_sym_DOT] = ACTIONS(53),
        [anon_sym_PLUS] = ACTIONS(55),
        [anon_sym_LBRACK] = ACTIONS(57),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(59),
        [anon_sym_RBRACK] = ACTIONS(61),
        [anon_sym_STAR_STAR] = ACTIONS(63),
        [sym_number] = ACTIONS(65),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(71),
        [sym__indent] = ACTIONS(73),
        [sym__dedent] = ACTIONS(75),
    },
    [1] = {
        [sym_module] = STATE(15),
        [sym__statement] = STATE(16),
        [sym__simple_statement] = STATE(17),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
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
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(22),
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(77),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(89),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(93),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(99),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [2] = {
        [sym__expression] = STATE(345),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [3] = {
        [sym_expression_list] = STATE(344),
        [sym__expression] = STATE(338),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [4] = {
        [sym_expression_list] = STATE(337),
        [sym__expression] = STATE(338),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_print] = ACTIONS(109),
        [anon_sym_return] = ACTIONS(109),
        [anon_sym_del] = ACTIONS(109),
        [sym_pass_statement] = ACTIONS(109),
        [sym_break_statement] = ACTIONS(109),
        [sym_continue_statement] = ACTIONS(109),
        [anon_sym_if] = ACTIONS(109),
        [anon_sym_elif] = ACTIONS(109),
        [anon_sym_else] = ACTIONS(109),
        [anon_sym_for] = ACTIONS(109),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_except] = ACTIONS(109),
        [anon_sym_finally] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(109),
        [anon_sym_def] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_AT] = ACTIONS(107),
        [sym_number] = ACTIONS(109),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(107),
    },
    [6] = {
        [sym__expression] = STATE(391),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [7] = {
        [sym_expression_list] = STATE(385),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [8] = {
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(115),
        [sym_comment] = ACTIONS(69),
    },
    [10] = {
        [sym_with_item] = STATE(352),
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [11] = {
        [sym_identifier] = ACTIONS(117),
        [sym_comment] = ACTIONS(69),
    },
    [12] = {
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(69),
    },
    [13] = {
        [sym_dotted_name] = STATE(120),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(69),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_COMMA] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_del] = ACTIONS(125),
        [sym_pass_statement] = ACTIONS(125),
        [sym_break_statement] = ACTIONS(125),
        [sym_continue_statement] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_except] = ACTIONS(125),
        [anon_sym_finally] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(123),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [sym_comment] = ACTIONS(69),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_return] = ACTIONS(133),
        [anon_sym_del] = ACTIONS(133),
        [sym_pass_statement] = ACTIONS(133),
        [sym_break_statement] = ACTIONS(133),
        [sym_continue_statement] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [anon_sym_try] = ACTIONS(133),
        [anon_sym_with] = ACTIONS(133),
        [anon_sym_def] = ACTIONS(133),
        [anon_sym_class] = ACTIONS(133),
        [anon_sym_AT] = ACTIONS(131),
        [sym_number] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(131),
    },
    [17] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(137),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [sym_pass_statement] = ACTIONS(141),
        [sym_break_statement] = ACTIONS(141),
        [sym_continue_statement] = ACTIONS(141),
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(139),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(147),
        [anon_sym_del] = ACTIONS(147),
        [sym_pass_statement] = ACTIONS(147),
        [sym_break_statement] = ACTIONS(147),
        [sym_continue_statement] = ACTIONS(147),
        [anon_sym_if] = ACTIONS(147),
        [anon_sym_for] = ACTIONS(147),
        [anon_sym_while] = ACTIONS(147),
        [anon_sym_try] = ACTIONS(147),
        [anon_sym_with] = ACTIONS(147),
        [anon_sym_def] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(145),
        [sym_number] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(145),
    },
    [20] = {
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(151),
        [sym_comment] = ACTIONS(69),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_elif] = ACTIONS(155),
        [anon_sym_else] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_except] = ACTIONS(155),
        [anon_sym_finally] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(161),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
    },
    [22] = {
        [sym__statement] = STATE(27),
        [sym__simple_statement] = STATE(17),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
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
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(167),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(89),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(93),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(99),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(167),
    },
    [23] = {
        [sym_function_definition] = STATE(24),
        [sym_class_definition] = STATE(24),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(169),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_print] = ACTIONS(175),
        [anon_sym_return] = ACTIONS(175),
        [anon_sym_del] = ACTIONS(175),
        [sym_pass_statement] = ACTIONS(175),
        [sym_break_statement] = ACTIONS(175),
        [sym_continue_statement] = ACTIONS(175),
        [anon_sym_if] = ACTIONS(175),
        [anon_sym_for] = ACTIONS(175),
        [anon_sym_while] = ACTIONS(175),
        [anon_sym_try] = ACTIONS(175),
        [anon_sym_with] = ACTIONS(175),
        [anon_sym_def] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(173),
        [sym_number] = ACTIONS(175),
        [sym_identifier] = ACTIONS(177),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(173),
    },
    [25] = {
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(179),
        [sym_comment] = ACTIONS(69),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(183),
        [anon_sym_SEMI] = ACTIONS(183),
        [anon_sym_print] = ACTIONS(185),
        [anon_sym_return] = ACTIONS(185),
        [anon_sym_del] = ACTIONS(185),
        [sym_pass_statement] = ACTIONS(185),
        [sym_break_statement] = ACTIONS(185),
        [sym_continue_statement] = ACTIONS(185),
        [anon_sym_if] = ACTIONS(185),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(185),
        [anon_sym_try] = ACTIONS(185),
        [anon_sym_with] = ACTIONS(185),
        [anon_sym_def] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(185),
        [anon_sym_AT] = ACTIONS(183),
        [sym_number] = ACTIONS(185),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(183),
    },
    [28] = {
        [sym__expression] = STATE(93),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(94),
        [sym_list_splat_argument] = STATE(95),
        [sym_dictionary_splat_argument] = STATE(96),
        [aux_sym_call_repeat1] = STATE(97),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [29] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [30] = {
        [sym__expression] = STATE(33),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [31] = {
        [aux_sym_subscript_repeat1] = STATE(39),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_RBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(69),
    },
    [32] = {
        [anon_sym_COMMA] = ACTIONS(123),
        [anon_sym_COLON] = ACTIONS(123),
        [anon_sym_in] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_as] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [33] = {
        [aux_sym_subscript_repeat1] = STATE(39),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(69),
    },
    [34] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [35] = {
        [sym__expression] = STATE(59),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(60),
        [sym_list_splat_argument] = STATE(61),
        [sym_dictionary_splat_argument] = STATE(62),
        [aux_sym_call_repeat1] = STATE(63),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [36] = {
        [sym__expression] = STATE(55),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [37] = {
        [sym__expression] = STATE(46),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(211),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(215),
        [anon_sym_del] = ACTIONS(215),
        [sym_pass_statement] = ACTIONS(215),
        [sym_break_statement] = ACTIONS(215),
        [sym_continue_statement] = ACTIONS(215),
        [anon_sym_if] = ACTIONS(215),
        [anon_sym_elif] = ACTIONS(215),
        [anon_sym_else] = ACTIONS(215),
        [anon_sym_for] = ACTIONS(215),
        [anon_sym_while] = ACTIONS(215),
        [anon_sym_try] = ACTIONS(215),
        [anon_sym_except] = ACTIONS(215),
        [anon_sym_finally] = ACTIONS(215),
        [anon_sym_with] = ACTIONS(215),
        [anon_sym_def] = ACTIONS(215),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_number] = ACTIONS(215),
        [sym_identifier] = ACTIONS(217),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(213),
    },
    [39] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_comment] = ACTIONS(69),
    },
    [40] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(223),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_return] = ACTIONS(227),
        [anon_sym_del] = ACTIONS(227),
        [sym_pass_statement] = ACTIONS(227),
        [sym_break_statement] = ACTIONS(227),
        [sym_continue_statement] = ACTIONS(227),
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
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(225),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(225),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(69),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_return] = ACTIONS(235),
        [anon_sym_del] = ACTIONS(235),
        [sym_pass_statement] = ACTIONS(235),
        [sym_break_statement] = ACTIONS(235),
        [sym_continue_statement] = ACTIONS(235),
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
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(233),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(69),
    },
    [45] = {
        [aux_sym_subscript_repeat1] = STATE(49),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(69),
    },
    [46] = {
        [aux_sym_subscript_repeat1] = STATE(49),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(69),
    },
    [47] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [48] = {
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_in] = ACTIONS(213),
        [anon_sym_except] = ACTIONS(213),
        [anon_sym_as] = ACTIONS(213),
        [anon_sym_finally] = ACTIONS(213),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_RPAREN] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(69),
    },
    [49] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(69),
    },
    [50] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_COLON] = ACTIONS(225),
        [anon_sym_in] = ACTIONS(225),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_as] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(69),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_as] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_comment] = ACTIONS(69),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_RBRACK] = ACTIONS(249),
        [sym_comment] = ACTIONS(69),
    },
    [54] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(249),
        [sym_comment] = ACTIONS(69),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_in] = ACTIONS(251),
        [anon_sym_except] = ACTIONS(251),
        [anon_sym_as] = ACTIONS(251),
        [anon_sym_finally] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(251),
        [sym_comment] = ACTIONS(69),
    },
    [56] = {
        [sym__expression] = STATE(91),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [57] = {
        [sym__expression] = STATE(90),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(123),
        [anon_sym_EQ] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(257),
        [sym_comment] = ACTIONS(69),
    },
    [61] = {
        [aux_sym_call_repeat2] = STATE(84),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(257),
        [sym_comment] = ACTIONS(69),
    },
    [62] = {
        [anon_sym_RPAREN] = ACTIONS(257),
        [sym_comment] = ACTIONS(69),
    },
    [63] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(65),
        [sym_list_splat_argument] = STATE(66),
        [sym_dictionary_splat_argument] = STATE(67),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [64] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(263),
        [sym_comment] = ACTIONS(69),
    },
    [66] = {
        [aux_sym_call_repeat2] = STATE(70),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(263),
        [sym_comment] = ACTIONS(69),
    },
    [67] = {
        [anon_sym_RPAREN] = ACTIONS(263),
        [sym_comment] = ACTIONS(69),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_except] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_finally] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(69),
    },
    [69] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(79),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_RPAREN] = ACTIONS(271),
        [sym_comment] = ACTIONS(69),
    },
    [71] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(75),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_COLON] = ACTIONS(273),
        [anon_sym_in] = ACTIONS(273),
        [anon_sym_except] = ACTIONS(273),
        [anon_sym_as] = ACTIONS(273),
        [anon_sym_finally] = ACTIONS(273),
        [anon_sym_LPAREN] = ACTIONS(273),
        [anon_sym_RPAREN] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(273),
        [anon_sym_LBRACK] = ACTIONS(273),
        [anon_sym_RBRACK] = ACTIONS(273),
        [sym_comment] = ACTIONS(69),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [sym_comment] = ACTIONS(69),
    },
    [75] = {
        [anon_sym_RPAREN] = ACTIONS(277),
        [sym_comment] = ACTIONS(69),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(69),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(69),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(283),
        [sym_comment] = ACTIONS(69),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(285),
        [anon_sym_in] = ACTIONS(285),
        [anon_sym_except] = ACTIONS(285),
        [anon_sym_as] = ACTIONS(285),
        [anon_sym_finally] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [sym_comment] = ACTIONS(69),
    },
    [81] = {
        [anon_sym_RPAREN] = ACTIONS(271),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(289),
        [sym_number] = ACTIONS(287),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(69),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_in] = ACTIONS(291),
        [anon_sym_except] = ACTIONS(291),
        [anon_sym_as] = ACTIONS(291),
        [anon_sym_finally] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(291),
        [sym_comment] = ACTIONS(69),
    },
    [83] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(86),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_RPAREN] = ACTIONS(263),
        [sym_comment] = ACTIONS(69),
    },
    [85] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(79),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [86] = {
        [anon_sym_RPAREN] = ACTIONS(271),
        [sym_comment] = ACTIONS(69),
    },
    [87] = {
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [88] = {
        [sym__expression] = STATE(89),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [89] = {
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(299),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [90] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [92] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(311),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(69),
    },
    [95] = {
        [aux_sym_call_repeat2] = STATE(114),
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(69),
    },
    [96] = {
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(69),
    },
    [97] = {
        [sym__expression] = STATE(98),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(99),
        [sym_list_splat_argument] = STATE(100),
        [sym_dictionary_splat_argument] = STATE(101),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [98] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [100] = {
        [aux_sym_call_repeat2] = STATE(104),
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [101] = {
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [102] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [sym_pass_statement] = ACTIONS(321),
        [sym_break_statement] = ACTIONS(321),
        [sym_continue_statement] = ACTIONS(321),
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
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(267),
    },
    [103] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(109),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [104] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_RPAREN] = ACTIONS(327),
        [sym_comment] = ACTIONS(69),
    },
    [105] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(107),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [106] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_del] = ACTIONS(329),
        [sym_pass_statement] = ACTIONS(329),
        [sym_break_statement] = ACTIONS(329),
        [sym_continue_statement] = ACTIONS(329),
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
        [anon_sym_LPAREN] = ACTIONS(273),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(273),
        [anon_sym_LBRACK] = ACTIONS(273),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(273),
    },
    [107] = {
        [anon_sym_RPAREN] = ACTIONS(333),
        [sym_comment] = ACTIONS(69),
    },
    [108] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_del] = ACTIONS(335),
        [sym_pass_statement] = ACTIONS(335),
        [sym_break_statement] = ACTIONS(335),
        [sym_continue_statement] = ACTIONS(335),
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
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(279),
    },
    [109] = {
        [anon_sym_RPAREN] = ACTIONS(339),
        [sym_comment] = ACTIONS(69),
    },
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(285),
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_return] = ACTIONS(341),
        [anon_sym_del] = ACTIONS(341),
        [sym_pass_statement] = ACTIONS(341),
        [sym_break_statement] = ACTIONS(341),
        [sym_continue_statement] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_elif] = ACTIONS(341),
        [anon_sym_else] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_except] = ACTIONS(341),
        [anon_sym_finally] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [anon_sym_def] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_class] = ACTIONS(341),
        [anon_sym_AT] = ACTIONS(285),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [sym_number] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(285),
    },
    [111] = {
        [anon_sym_RPAREN] = ACTIONS(327),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(289),
        [sym_number] = ACTIONS(287),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(69),
    },
    [112] = {
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_return] = ACTIONS(345),
        [anon_sym_del] = ACTIONS(345),
        [sym_pass_statement] = ACTIONS(345),
        [sym_break_statement] = ACTIONS(345),
        [sym_continue_statement] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_elif] = ACTIONS(345),
        [anon_sym_else] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [anon_sym_except] = ACTIONS(345),
        [anon_sym_finally] = ACTIONS(345),
        [anon_sym_with] = ACTIONS(345),
        [anon_sym_def] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(345),
        [anon_sym_AT] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [sym_number] = ACTIONS(345),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(291),
    },
    [113] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(116),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [115] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(109),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [116] = {
        [anon_sym_RPAREN] = ACTIONS(327),
        [sym_comment] = ACTIONS(69),
    },
    [117] = {
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [sym_pass_statement] = ACTIONS(353),
        [sym_break_statement] = ACTIONS(353),
        [sym_continue_statement] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(351),
    },
    [119] = {
        [aux_sym_dotted_name_repeat1] = STATE(134),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_DOT] = ACTIONS(359),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(357),
    },
    [120] = {
        [sym_arguments] = STATE(123),
        [anon_sym_LPAREN] = ACTIONS(361),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(363),
    },
    [121] = {
        [sym__expression] = STATE(125),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [122] = {
        [anon_sym_def] = ACTIONS(365),
        [anon_sym_class] = ACTIONS(365),
        [anon_sym_AT] = ACTIONS(365),
        [sym_comment] = ACTIONS(69),
    },
    [123] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(367),
    },
    [124] = {
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(369),
        [anon_sym_AT] = ACTIONS(369),
        [sym_comment] = ACTIONS(69),
    },
    [125] = {
        [aux_sym_print_statement_repeat1] = STATE(128),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [126] = {
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [127] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(375),
    },
    [128] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_comment] = ACTIONS(69),
    },
    [129] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [130] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(381),
    },
    [131] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_except] = ACTIONS(383),
        [anon_sym_finally] = ACTIONS(383),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_except] = ACTIONS(385),
        [anon_sym_finally] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [133] = {
        [sym_identifier] = ACTIONS(387),
        [sym_comment] = ACTIONS(69),
    },
    [134] = {
        [anon_sym_LPAREN] = ACTIONS(389),
        [anon_sym_DOT] = ACTIONS(391),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(389),
    },
    [135] = {
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(69),
    },
    [136] = {
        [anon_sym_LPAREN] = ACTIONS(395),
        [anon_sym_DOT] = ACTIONS(395),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(395),
    },
    [137] = {
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_DOT] = ACTIONS(397),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(397),
    },
    [138] = {
        [anon_sym_COLON] = ACTIONS(399),
        [anon_sym_LPAREN] = ACTIONS(401),
        [sym_comment] = ACTIONS(69),
    },
    [139] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(347),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [140] = {
        [sym_expression_list] = STATE(141),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [141] = {
        [anon_sym_RPAREN] = ACTIONS(405),
        [sym_comment] = ACTIONS(69),
    },
    [142] = {
        [aux_sym_print_statement_repeat1] = STATE(143),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_COLON] = ACTIONS(407),
        [anon_sym_in] = ACTIONS(407),
        [anon_sym_except] = ACTIONS(407),
        [anon_sym_finally] = ACTIONS(407),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [143] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_COLON] = ACTIONS(409),
        [anon_sym_in] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_RPAREN] = ACTIONS(409),
        [sym_comment] = ACTIONS(69),
    },
    [144] = {
        [anon_sym_COLON] = ACTIONS(411),
        [sym_comment] = ACTIONS(69),
    },
    [145] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(148),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [146] = {
        [sym__statement] = STATE(157),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(161),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(427),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(429),
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_print] = ACTIONS(431),
        [anon_sym_return] = ACTIONS(431),
        [anon_sym_del] = ACTIONS(431),
        [sym_pass_statement] = ACTIONS(431),
        [sym_break_statement] = ACTIONS(431),
        [sym_continue_statement] = ACTIONS(431),
        [anon_sym_if] = ACTIONS(431),
        [anon_sym_elif] = ACTIONS(431),
        [anon_sym_else] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_while] = ACTIONS(431),
        [anon_sym_try] = ACTIONS(431),
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_with] = ACTIONS(431),
        [anon_sym_def] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(431),
        [anon_sym_AT] = ACTIONS(429),
        [sym_number] = ACTIONS(431),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(429),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(435),
        [anon_sym_SEMI] = ACTIONS(435),
        [anon_sym_print] = ACTIONS(437),
        [anon_sym_return] = ACTIONS(437),
        [anon_sym_del] = ACTIONS(437),
        [sym_pass_statement] = ACTIONS(437),
        [sym_break_statement] = ACTIONS(437),
        [sym_continue_statement] = ACTIONS(437),
        [anon_sym_if] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_while] = ACTIONS(437),
        [anon_sym_try] = ACTIONS(437),
        [anon_sym_with] = ACTIONS(437),
        [anon_sym_def] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(437),
        [anon_sym_AT] = ACTIONS(435),
        [sym_number] = ACTIONS(437),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(435),
    },
    [149] = {
        [sym__expression] = STATE(325),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [150] = {
        [sym_expression_list] = STATE(319),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [151] = {
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [152] = {
        [anon_sym_COLON] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [153] = {
        [sym_with_item] = STATE(265),
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [154] = {
        [sym_identifier] = ACTIONS(443),
        [sym_comment] = ACTIONS(69),
    },
    [155] = {
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [156] = {
        [ts_builtin_sym_end] = ACTIONS(447),
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_print] = ACTIONS(449),
        [anon_sym_return] = ACTIONS(449),
        [anon_sym_del] = ACTIONS(449),
        [sym_pass_statement] = ACTIONS(449),
        [sym_break_statement] = ACTIONS(449),
        [sym_continue_statement] = ACTIONS(449),
        [anon_sym_if] = ACTIONS(449),
        [anon_sym_elif] = ACTIONS(449),
        [anon_sym_else] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_while] = ACTIONS(449),
        [anon_sym_try] = ACTIONS(449),
        [anon_sym_except] = ACTIONS(449),
        [anon_sym_finally] = ACTIONS(449),
        [anon_sym_with] = ACTIONS(449),
        [anon_sym_def] = ACTIONS(449),
        [anon_sym_class] = ACTIONS(449),
        [anon_sym_AT] = ACTIONS(447),
        [sym_number] = ACTIONS(449),
        [sym_identifier] = ACTIONS(451),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(447),
    },
    [157] = {
        [anon_sym_print] = ACTIONS(133),
        [anon_sym_return] = ACTIONS(133),
        [anon_sym_del] = ACTIONS(133),
        [sym_pass_statement] = ACTIONS(133),
        [sym_break_statement] = ACTIONS(133),
        [sym_continue_statement] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(133),
        [anon_sym_for] = ACTIONS(133),
        [anon_sym_while] = ACTIONS(133),
        [anon_sym_try] = ACTIONS(133),
        [anon_sym_with] = ACTIONS(133),
        [anon_sym_def] = ACTIONS(133),
        [anon_sym_class] = ACTIONS(133),
        [anon_sym_AT] = ACTIONS(131),
        [sym_number] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(131),
    },
    [158] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(453),
    },
    [159] = {
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [sym_pass_statement] = ACTIONS(141),
        [sym_break_statement] = ACTIONS(141),
        [sym_continue_statement] = ACTIONS(141),
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
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(139),
    },
    [160] = {
        [anon_sym_print] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(147),
        [anon_sym_del] = ACTIONS(147),
        [sym_pass_statement] = ACTIONS(147),
        [sym_break_statement] = ACTIONS(147),
        [sym_continue_statement] = ACTIONS(147),
        [anon_sym_if] = ACTIONS(147),
        [anon_sym_for] = ACTIONS(147),
        [anon_sym_while] = ACTIONS(147),
        [anon_sym_try] = ACTIONS(147),
        [anon_sym_with] = ACTIONS(147),
        [anon_sym_def] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(145),
        [sym_number] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(145),
    },
    [161] = {
        [sym__statement] = STATE(165),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(455),
    },
    [162] = {
        [sym_function_definition] = STATE(163),
        [sym_class_definition] = STATE(163),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(457),
        [anon_sym_class] = ACTIONS(459),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [163] = {
        [anon_sym_print] = ACTIONS(175),
        [anon_sym_return] = ACTIONS(175),
        [anon_sym_del] = ACTIONS(175),
        [sym_pass_statement] = ACTIONS(175),
        [sym_break_statement] = ACTIONS(175),
        [sym_continue_statement] = ACTIONS(175),
        [anon_sym_if] = ACTIONS(175),
        [anon_sym_for] = ACTIONS(175),
        [anon_sym_while] = ACTIONS(175),
        [anon_sym_try] = ACTIONS(175),
        [anon_sym_with] = ACTIONS(175),
        [anon_sym_def] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(173),
        [sym_number] = ACTIONS(175),
        [sym_identifier] = ACTIONS(177),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(173),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(461),
        [anon_sym_SEMI] = ACTIONS(461),
        [anon_sym_print] = ACTIONS(463),
        [anon_sym_return] = ACTIONS(463),
        [anon_sym_del] = ACTIONS(463),
        [sym_pass_statement] = ACTIONS(463),
        [sym_break_statement] = ACTIONS(463),
        [sym_continue_statement] = ACTIONS(463),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_elif] = ACTIONS(463),
        [anon_sym_else] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_while] = ACTIONS(463),
        [anon_sym_try] = ACTIONS(463),
        [anon_sym_except] = ACTIONS(463),
        [anon_sym_finally] = ACTIONS(463),
        [anon_sym_with] = ACTIONS(463),
        [anon_sym_def] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_AT] = ACTIONS(461),
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(465),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(461),
    },
    [165] = {
        [anon_sym_print] = ACTIONS(185),
        [anon_sym_return] = ACTIONS(185),
        [anon_sym_del] = ACTIONS(185),
        [sym_pass_statement] = ACTIONS(185),
        [sym_break_statement] = ACTIONS(185),
        [sym_continue_statement] = ACTIONS(185),
        [anon_sym_if] = ACTIONS(185),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(185),
        [anon_sym_try] = ACTIONS(185),
        [anon_sym_with] = ACTIONS(185),
        [anon_sym_def] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(185),
        [anon_sym_AT] = ACTIONS(183),
        [sym_number] = ACTIONS(185),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(183),
    },
    [166] = {
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [sym_pass_statement] = ACTIONS(353),
        [sym_break_statement] = ACTIONS(353),
        [sym_continue_statement] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(351),
    },
    [167] = {
        [anon_sym_COLON] = ACTIONS(467),
        [anon_sym_LPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(69),
    },
    [168] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(232),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [169] = {
        [sym_expression_list] = STATE(170),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [170] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [sym_comment] = ACTIONS(69),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(487),
        [sym_comment] = ACTIONS(69),
    },
    [172] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(180),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [173] = {
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [174] = {
        [sym_expression_list] = STATE(229),
        [sym__expression] = STATE(223),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [175] = {
        [sym_expression_list] = STATE(222),
        [sym__expression] = STATE(223),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [176] = {
        [anon_sym_print] = ACTIONS(109),
        [anon_sym_return] = ACTIONS(109),
        [anon_sym_del] = ACTIONS(109),
        [sym_pass_statement] = ACTIONS(109),
        [sym_break_statement] = ACTIONS(109),
        [sym_continue_statement] = ACTIONS(109),
        [anon_sym_if] = ACTIONS(109),
        [anon_sym_elif] = ACTIONS(109),
        [anon_sym_else] = ACTIONS(109),
        [anon_sym_for] = ACTIONS(109),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_except] = ACTIONS(109),
        [anon_sym_finally] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(109),
        [anon_sym_def] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_AT] = ACTIONS(107),
        [sym_number] = ACTIONS(109),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(107),
    },
    [177] = {
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_COMMA] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_del] = ACTIONS(125),
        [sym_pass_statement] = ACTIONS(125),
        [sym_break_statement] = ACTIONS(125),
        [sym_continue_statement] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_except] = ACTIONS(125),
        [anon_sym_finally] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(123),
    },
    [178] = {
        [sym__statement] = STATE(157),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(220),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(489),
    },
    [179] = {
        [anon_sym_print] = ACTIONS(431),
        [anon_sym_return] = ACTIONS(431),
        [anon_sym_del] = ACTIONS(431),
        [sym_pass_statement] = ACTIONS(431),
        [sym_break_statement] = ACTIONS(431),
        [sym_continue_statement] = ACTIONS(431),
        [anon_sym_if] = ACTIONS(431),
        [anon_sym_elif] = ACTIONS(431),
        [anon_sym_else] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_while] = ACTIONS(431),
        [anon_sym_try] = ACTIONS(431),
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_with] = ACTIONS(431),
        [anon_sym_def] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(431),
        [anon_sym_AT] = ACTIONS(429),
        [sym_number] = ACTIONS(431),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(429),
    },
    [180] = {
        [anon_sym_print] = ACTIONS(437),
        [anon_sym_return] = ACTIONS(437),
        [anon_sym_del] = ACTIONS(437),
        [sym_pass_statement] = ACTIONS(437),
        [sym_break_statement] = ACTIONS(437),
        [sym_continue_statement] = ACTIONS(437),
        [anon_sym_if] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_while] = ACTIONS(437),
        [anon_sym_try] = ACTIONS(437),
        [anon_sym_with] = ACTIONS(437),
        [anon_sym_def] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(437),
        [anon_sym_AT] = ACTIONS(435),
        [sym_number] = ACTIONS(437),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(435),
    },
    [181] = {
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_elif] = ACTIONS(155),
        [anon_sym_else] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_except] = ACTIONS(155),
        [anon_sym_finally] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(153),
    },
    [182] = {
        [sym__expression] = STATE(194),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(195),
        [sym_list_splat_argument] = STATE(196),
        [sym_dictionary_splat_argument] = STATE(197),
        [aux_sym_call_repeat1] = STATE(198),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [183] = {
        [sym__expression] = STATE(193),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [184] = {
        [sym__expression] = STATE(186),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [185] = {
        [aux_sym_subscript_repeat1] = STATE(189),
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_RBRACK] = ACTIONS(501),
        [sym_comment] = ACTIONS(69),
    },
    [186] = {
        [aux_sym_subscript_repeat1] = STATE(189),
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(501),
        [sym_comment] = ACTIONS(69),
    },
    [187] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(503),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [188] = {
        [anon_sym_print] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(215),
        [anon_sym_del] = ACTIONS(215),
        [sym_pass_statement] = ACTIONS(215),
        [sym_break_statement] = ACTIONS(215),
        [sym_continue_statement] = ACTIONS(215),
        [anon_sym_if] = ACTIONS(215),
        [anon_sym_elif] = ACTIONS(215),
        [anon_sym_else] = ACTIONS(215),
        [anon_sym_for] = ACTIONS(215),
        [anon_sym_while] = ACTIONS(215),
        [anon_sym_try] = ACTIONS(215),
        [anon_sym_except] = ACTIONS(215),
        [anon_sym_finally] = ACTIONS(215),
        [anon_sym_with] = ACTIONS(215),
        [anon_sym_def] = ACTIONS(215),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_number] = ACTIONS(215),
        [sym_identifier] = ACTIONS(217),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(213),
    },
    [189] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_RBRACK] = ACTIONS(503),
        [sym_comment] = ACTIONS(69),
    },
    [190] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(507),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [191] = {
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_return] = ACTIONS(227),
        [anon_sym_del] = ACTIONS(227),
        [sym_pass_statement] = ACTIONS(227),
        [sym_break_statement] = ACTIONS(227),
        [sym_continue_statement] = ACTIONS(227),
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
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(225),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(225),
    },
    [192] = {
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_return] = ACTIONS(235),
        [anon_sym_del] = ACTIONS(235),
        [sym_pass_statement] = ACTIONS(235),
        [sym_break_statement] = ACTIONS(235),
        [sym_continue_statement] = ACTIONS(235),
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
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(233),
    },
    [193] = {
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(251),
    },
    [194] = {
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(511),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [195] = {
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_RPAREN] = ACTIONS(511),
        [sym_comment] = ACTIONS(69),
    },
    [196] = {
        [aux_sym_call_repeat2] = STATE(215),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_RPAREN] = ACTIONS(511),
        [sym_comment] = ACTIONS(69),
    },
    [197] = {
        [anon_sym_RPAREN] = ACTIONS(511),
        [sym_comment] = ACTIONS(69),
    },
    [198] = {
        [sym__expression] = STATE(199),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(200),
        [sym_list_splat_argument] = STATE(201),
        [sym_dictionary_splat_argument] = STATE(202),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [199] = {
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(517),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [200] = {
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [201] = {
        [aux_sym_call_repeat2] = STATE(205),
        [anon_sym_COMMA] = ACTIONS(519),
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [202] = {
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [203] = {
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [sym_pass_statement] = ACTIONS(321),
        [sym_break_statement] = ACTIONS(321),
        [sym_continue_statement] = ACTIONS(321),
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
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(267),
    },
    [204] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(210),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [205] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_RPAREN] = ACTIONS(523),
        [sym_comment] = ACTIONS(69),
    },
    [206] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(208),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [207] = {
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_del] = ACTIONS(329),
        [sym_pass_statement] = ACTIONS(329),
        [sym_break_statement] = ACTIONS(329),
        [sym_continue_statement] = ACTIONS(329),
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
        [anon_sym_LPAREN] = ACTIONS(273),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(273),
        [anon_sym_LBRACK] = ACTIONS(273),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(273),
    },
    [208] = {
        [anon_sym_RPAREN] = ACTIONS(525),
        [sym_comment] = ACTIONS(69),
    },
    [209] = {
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_del] = ACTIONS(335),
        [sym_pass_statement] = ACTIONS(335),
        [sym_break_statement] = ACTIONS(335),
        [sym_continue_statement] = ACTIONS(335),
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
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(279),
    },
    [210] = {
        [anon_sym_RPAREN] = ACTIONS(527),
        [sym_comment] = ACTIONS(69),
    },
    [211] = {
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_return] = ACTIONS(341),
        [anon_sym_del] = ACTIONS(341),
        [sym_pass_statement] = ACTIONS(341),
        [sym_break_statement] = ACTIONS(341),
        [sym_continue_statement] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_elif] = ACTIONS(341),
        [anon_sym_else] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_except] = ACTIONS(341),
        [anon_sym_finally] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [anon_sym_def] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_class] = ACTIONS(341),
        [anon_sym_AT] = ACTIONS(285),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [sym_number] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(285),
    },
    [212] = {
        [anon_sym_RPAREN] = ACTIONS(523),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(289),
        [sym_number] = ACTIONS(287),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(69),
    },
    [213] = {
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_return] = ACTIONS(345),
        [anon_sym_del] = ACTIONS(345),
        [sym_pass_statement] = ACTIONS(345),
        [sym_break_statement] = ACTIONS(345),
        [sym_continue_statement] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_elif] = ACTIONS(345),
        [anon_sym_else] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [anon_sym_except] = ACTIONS(345),
        [anon_sym_finally] = ACTIONS(345),
        [anon_sym_with] = ACTIONS(345),
        [anon_sym_def] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(345),
        [anon_sym_AT] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [sym_number] = ACTIONS(345),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(291),
    },
    [214] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(217),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [215] = {
        [anon_sym_COMMA] = ACTIONS(529),
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [216] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(210),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [217] = {
        [anon_sym_RPAREN] = ACTIONS(523),
        [sym_comment] = ACTIONS(69),
    },
    [218] = {
        [anon_sym_RPAREN] = ACTIONS(517),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [219] = {
        [anon_sym_print] = ACTIONS(449),
        [anon_sym_return] = ACTIONS(449),
        [anon_sym_del] = ACTIONS(449),
        [sym_pass_statement] = ACTIONS(449),
        [sym_break_statement] = ACTIONS(449),
        [sym_continue_statement] = ACTIONS(449),
        [anon_sym_if] = ACTIONS(449),
        [anon_sym_elif] = ACTIONS(449),
        [anon_sym_else] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_while] = ACTIONS(449),
        [anon_sym_try] = ACTIONS(449),
        [anon_sym_except] = ACTIONS(449),
        [anon_sym_finally] = ACTIONS(449),
        [anon_sym_with] = ACTIONS(449),
        [anon_sym_def] = ACTIONS(449),
        [anon_sym_class] = ACTIONS(449),
        [anon_sym_AT] = ACTIONS(447),
        [sym_number] = ACTIONS(449),
        [sym_identifier] = ACTIONS(451),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(447),
    },
    [220] = {
        [sym__statement] = STATE(165),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(531),
    },
    [221] = {
        [anon_sym_print] = ACTIONS(463),
        [anon_sym_return] = ACTIONS(463),
        [anon_sym_del] = ACTIONS(463),
        [sym_pass_statement] = ACTIONS(463),
        [sym_break_statement] = ACTIONS(463),
        [sym_continue_statement] = ACTIONS(463),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_elif] = ACTIONS(463),
        [anon_sym_else] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_while] = ACTIONS(463),
        [anon_sym_try] = ACTIONS(463),
        [anon_sym_except] = ACTIONS(463),
        [anon_sym_finally] = ACTIONS(463),
        [anon_sym_with] = ACTIONS(463),
        [anon_sym_def] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_AT] = ACTIONS(461),
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(465),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(461),
    },
    [222] = {
        [anon_sym_print] = ACTIONS(533),
        [anon_sym_return] = ACTIONS(533),
        [anon_sym_del] = ACTIONS(533),
        [sym_pass_statement] = ACTIONS(533),
        [sym_break_statement] = ACTIONS(533),
        [sym_continue_statement] = ACTIONS(533),
        [anon_sym_if] = ACTIONS(533),
        [anon_sym_elif] = ACTIONS(533),
        [anon_sym_else] = ACTIONS(533),
        [anon_sym_for] = ACTIONS(533),
        [anon_sym_while] = ACTIONS(533),
        [anon_sym_try] = ACTIONS(533),
        [anon_sym_except] = ACTIONS(533),
        [anon_sym_finally] = ACTIONS(533),
        [anon_sym_with] = ACTIONS(533),
        [anon_sym_def] = ACTIONS(533),
        [anon_sym_class] = ACTIONS(533),
        [anon_sym_AT] = ACTIONS(535),
        [sym_number] = ACTIONS(533),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(535),
    },
    [223] = {
        [aux_sym_print_statement_repeat1] = STATE(225),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_elif] = ACTIONS(539),
        [anon_sym_else] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_except] = ACTIONS(539),
        [anon_sym_finally] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(407),
    },
    [224] = {
        [sym__expression] = STATE(228),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [225] = {
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_elif] = ACTIONS(545),
        [anon_sym_else] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_except] = ACTIONS(545),
        [anon_sym_finally] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(409),
    },
    [226] = {
        [sym__expression] = STATE(227),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [227] = {
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_except] = ACTIONS(551),
        [anon_sym_finally] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(383),
    },
    [228] = {
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_elif] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_except] = ACTIONS(555),
        [anon_sym_finally] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(385),
    },
    [229] = {
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(559),
        [anon_sym_del] = ACTIONS(559),
        [sym_pass_statement] = ACTIONS(559),
        [sym_break_statement] = ACTIONS(559),
        [sym_continue_statement] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_elif] = ACTIONS(559),
        [anon_sym_else] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_except] = ACTIONS(559),
        [anon_sym_finally] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(561),
        [sym_number] = ACTIONS(559),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(561),
    },
    [230] = {
        [aux_sym_print_statement_repeat1] = STATE(231),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_elif] = ACTIONS(565),
        [anon_sym_else] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_except] = ACTIONS(565),
        [anon_sym_finally] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(567),
    },
    [231] = {
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_elif] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(573),
    },
    [232] = {
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(579),
    },
    [233] = {
        [sym_parameters] = STATE(235),
        [anon_sym_LPAREN] = ACTIONS(583),
        [sym_comment] = ACTIONS(69),
    },
    [234] = {
        [sym_default_parameter] = STATE(241),
        [sym_list_splat_parameter] = STATE(242),
        [sym_dictionary_splat_parameter] = STATE(243),
        [aux_sym_parameters_repeat1] = STATE(244),
        [anon_sym_RPAREN] = ACTIONS(585),
        [anon_sym_STAR] = ACTIONS(587),
        [sym_identifier] = ACTIONS(589),
        [sym_comment] = ACTIONS(69),
    },
    [235] = {
        [anon_sym_COLON] = ACTIONS(591),
        [sym_comment] = ACTIONS(69),
    },
    [236] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(237),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [237] = {
        [anon_sym_print] = ACTIONS(593),
        [anon_sym_return] = ACTIONS(593),
        [anon_sym_del] = ACTIONS(593),
        [sym_pass_statement] = ACTIONS(593),
        [sym_break_statement] = ACTIONS(593),
        [sym_continue_statement] = ACTIONS(593),
        [anon_sym_if] = ACTIONS(593),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(593),
        [anon_sym_with] = ACTIONS(593),
        [anon_sym_def] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_AT] = ACTIONS(595),
        [sym_number] = ACTIONS(593),
        [sym_identifier] = ACTIONS(597),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(595),
    },
    [238] = {
        [anon_sym_COLON] = ACTIONS(599),
        [sym_comment] = ACTIONS(69),
    },
    [239] = {
        [anon_sym_STAR] = ACTIONS(601),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(69),
    },
    [240] = {
        [anon_sym_COMMA] = ACTIONS(605),
        [anon_sym_RPAREN] = ACTIONS(607),
        [anon_sym_EQ] = ACTIONS(609),
        [sym_comment] = ACTIONS(69),
    },
    [241] = {
        [anon_sym_COMMA] = ACTIONS(605),
        [anon_sym_RPAREN] = ACTIONS(607),
        [sym_comment] = ACTIONS(69),
    },
    [242] = {
        [anon_sym_COMMA] = ACTIONS(611),
        [anon_sym_RPAREN] = ACTIONS(607),
        [sym_comment] = ACTIONS(69),
    },
    [243] = {
        [anon_sym_RPAREN] = ACTIONS(607),
        [sym_comment] = ACTIONS(69),
    },
    [244] = {
        [sym_default_parameter] = STATE(246),
        [sym_list_splat_parameter] = STATE(247),
        [sym_dictionary_splat_parameter] = STATE(248),
        [anon_sym_STAR] = ACTIONS(587),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(69),
    },
    [245] = {
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_RPAREN] = ACTIONS(617),
        [anon_sym_EQ] = ACTIONS(609),
        [sym_comment] = ACTIONS(69),
    },
    [246] = {
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_RPAREN] = ACTIONS(617),
        [sym_comment] = ACTIONS(69),
    },
    [247] = {
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_RPAREN] = ACTIONS(617),
        [sym_comment] = ACTIONS(69),
    },
    [248] = {
        [anon_sym_RPAREN] = ACTIONS(617),
        [sym_comment] = ACTIONS(69),
    },
    [249] = {
        [anon_sym_COLON] = ACTIONS(621),
        [sym_comment] = ACTIONS(69),
    },
    [250] = {
        [sym_dictionary_splat_parameter] = STATE(252),
        [anon_sym_STAR] = ACTIONS(623),
        [sym_comment] = ACTIONS(69),
    },
    [251] = {
        [anon_sym_STAR] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
    },
    [252] = {
        [anon_sym_RPAREN] = ACTIONS(625),
        [sym_comment] = ACTIONS(69),
    },
    [253] = {
        [anon_sym_COLON] = ACTIONS(627),
        [sym_comment] = ACTIONS(69),
    },
    [254] = {
        [sym_identifier] = ACTIONS(629),
        [sym_comment] = ACTIONS(69),
    },
    [255] = {
        [anon_sym_RPAREN] = ACTIONS(631),
        [sym_comment] = ACTIONS(69),
    },
    [256] = {
        [anon_sym_RPAREN] = ACTIONS(633),
        [anon_sym_STAR] = ACTIONS(635),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(69),
    },
    [257] = {
        [anon_sym_COLON] = ACTIONS(639),
        [sym_comment] = ACTIONS(69),
    },
    [258] = {
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [259] = {
        [anon_sym_COMMA] = ACTIONS(641),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [260] = {
        [anon_sym_COLON] = ACTIONS(643),
        [sym_comment] = ACTIONS(69),
    },
    [261] = {
        [sym_dictionary_splat_parameter] = STATE(262),
        [anon_sym_STAR] = ACTIONS(623),
        [sym_comment] = ACTIONS(69),
    },
    [262] = {
        [anon_sym_RPAREN] = ACTIONS(633),
        [sym_comment] = ACTIONS(69),
    },
    [263] = {
        [anon_sym_RPAREN] = ACTIONS(617),
        [anon_sym_STAR] = ACTIONS(645),
        [sym_identifier] = ACTIONS(647),
        [sym_comment] = ACTIONS(69),
    },
    [264] = {
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_RPAREN] = ACTIONS(649),
        [sym_comment] = ACTIONS(69),
    },
    [265] = {
        [aux_sym_with_statement_repeat1] = STATE(271),
        [anon_sym_COMMA] = ACTIONS(651),
        [anon_sym_COLON] = ACTIONS(653),
        [sym_comment] = ACTIONS(69),
    },
    [266] = {
        [anon_sym_COMMA] = ACTIONS(655),
        [anon_sym_COLON] = ACTIONS(655),
        [anon_sym_as] = ACTIONS(657),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [267] = {
        [sym__expression] = STATE(268),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [268] = {
        [anon_sym_COMMA] = ACTIONS(659),
        [anon_sym_COLON] = ACTIONS(659),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [269] = {
        [sym_with_item] = STATE(277),
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [270] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(276),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [271] = {
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_COLON] = ACTIONS(663),
        [sym_comment] = ACTIONS(69),
    },
    [272] = {
        [sym_with_item] = STATE(275),
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [273] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(274),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [274] = {
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(667),
    },
    [275] = {
        [anon_sym_COMMA] = ACTIONS(671),
        [anon_sym_COLON] = ACTIONS(671),
        [sym_comment] = ACTIONS(69),
    },
    [276] = {
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(675),
    },
    [277] = {
        [anon_sym_COMMA] = ACTIONS(679),
        [anon_sym_COLON] = ACTIONS(679),
        [sym_comment] = ACTIONS(69),
    },
    [278] = {
        [sym__simple_statement] = STATE(284),
        [sym_print_statement] = STATE(282),
        [sym_expression_statement] = STATE(282),
        [sym_return_statement] = STATE(282),
        [sym_delete_statement] = STATE(282),
        [sym__suite] = STATE(285),
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(691),
    },
    [279] = {
        [sym__expression] = STATE(313),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [280] = {
        [sym_expression_list] = STATE(312),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [281] = {
        [sym_expression_list] = STATE(311),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [282] = {
        [anon_sym_except] = ACTIONS(107),
        [anon_sym_finally] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
    },
    [283] = {
        [sym__statement] = STATE(157),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(309),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(693),
    },
    [284] = {
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [sym_comment] = ACTIONS(69),
    },
    [285] = {
        [sym_except_clause] = STATE(289),
        [sym_finally_clause] = STATE(290),
        [aux_sym_try_statement_repeat1] = STATE(291),
        [anon_sym_except] = ACTIONS(695),
        [anon_sym_finally] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
    },
    [286] = {
        [anon_sym_except] = ACTIONS(153),
        [anon_sym_finally] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [287] = {
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [288] = {
        [anon_sym_COLON] = ACTIONS(699),
        [sym_comment] = ACTIONS(69),
    },
    [289] = {
        [anon_sym_print] = ACTIONS(701),
        [anon_sym_return] = ACTIONS(701),
        [anon_sym_del] = ACTIONS(701),
        [sym_pass_statement] = ACTIONS(701),
        [sym_break_statement] = ACTIONS(701),
        [sym_continue_statement] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(701),
        [anon_sym_else] = ACTIONS(701),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_while] = ACTIONS(701),
        [anon_sym_try] = ACTIONS(701),
        [anon_sym_except] = ACTIONS(701),
        [anon_sym_finally] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(701),
        [anon_sym_def] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_AT] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(703),
    },
    [290] = {
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(709),
    },
    [291] = {
        [sym_else_clause] = STATE(293),
        [sym_except_clause] = STATE(294),
        [sym_finally_clause] = STATE(295),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_except] = ACTIONS(715),
        [anon_sym_finally] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(709),
    },
    [292] = {
        [anon_sym_COLON] = ACTIONS(719),
        [sym_comment] = ACTIONS(69),
    },
    [293] = {
        [sym_finally_clause] = STATE(296),
        [anon_sym_print] = ACTIONS(721),
        [anon_sym_return] = ACTIONS(721),
        [anon_sym_del] = ACTIONS(721),
        [sym_pass_statement] = ACTIONS(721),
        [sym_break_statement] = ACTIONS(721),
        [sym_continue_statement] = ACTIONS(721),
        [anon_sym_if] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(721),
        [anon_sym_while] = ACTIONS(721),
        [anon_sym_try] = ACTIONS(721),
        [anon_sym_finally] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(721),
        [anon_sym_def] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_AT] = ACTIONS(723),
        [sym_number] = ACTIONS(721),
        [sym_identifier] = ACTIONS(725),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(723),
    },
    [294] = {
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(727),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_except] = ACTIONS(727),
        [anon_sym_finally] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(729),
    },
    [295] = {
        [anon_sym_print] = ACTIONS(721),
        [anon_sym_return] = ACTIONS(721),
        [anon_sym_del] = ACTIONS(721),
        [sym_pass_statement] = ACTIONS(721),
        [sym_break_statement] = ACTIONS(721),
        [sym_continue_statement] = ACTIONS(721),
        [anon_sym_if] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(721),
        [anon_sym_while] = ACTIONS(721),
        [anon_sym_try] = ACTIONS(721),
        [anon_sym_with] = ACTIONS(721),
        [anon_sym_def] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_AT] = ACTIONS(723),
        [sym_number] = ACTIONS(721),
        [sym_identifier] = ACTIONS(725),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(723),
    },
    [296] = {
        [anon_sym_print] = ACTIONS(733),
        [anon_sym_return] = ACTIONS(733),
        [anon_sym_del] = ACTIONS(733),
        [sym_pass_statement] = ACTIONS(733),
        [sym_break_statement] = ACTIONS(733),
        [sym_continue_statement] = ACTIONS(733),
        [anon_sym_if] = ACTIONS(733),
        [anon_sym_for] = ACTIONS(733),
        [anon_sym_while] = ACTIONS(733),
        [anon_sym_try] = ACTIONS(733),
        [anon_sym_with] = ACTIONS(733),
        [anon_sym_def] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(733),
        [anon_sym_AT] = ACTIONS(735),
        [sym_number] = ACTIONS(733),
        [sym_identifier] = ACTIONS(737),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(735),
    },
    [297] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(298),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [298] = {
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_return] = ACTIONS(739),
        [anon_sym_del] = ACTIONS(739),
        [sym_pass_statement] = ACTIONS(739),
        [sym_break_statement] = ACTIONS(739),
        [sym_continue_statement] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_finally] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(739),
        [anon_sym_AT] = ACTIONS(741),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(741),
    },
    [299] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(300),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [300] = {
        [anon_sym_print] = ACTIONS(745),
        [anon_sym_return] = ACTIONS(745),
        [anon_sym_del] = ACTIONS(745),
        [sym_pass_statement] = ACTIONS(745),
        [sym_break_statement] = ACTIONS(745),
        [sym_continue_statement] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(745),
        [anon_sym_while] = ACTIONS(745),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(747),
        [sym_number] = ACTIONS(745),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(747),
    },
    [301] = {
        [anon_sym_COMMA] = ACTIONS(751),
        [anon_sym_COLON] = ACTIONS(753),
        [anon_sym_as] = ACTIONS(751),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [302] = {
        [sym__expression] = STATE(304),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [303] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(307),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [304] = {
        [anon_sym_COLON] = ACTIONS(755),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [305] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(306),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [306] = {
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_except] = ACTIONS(757),
        [anon_sym_finally] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(759),
    },
    [307] = {
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_else] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_except] = ACTIONS(763),
        [anon_sym_finally] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(765),
    },
    [308] = {
        [anon_sym_except] = ACTIONS(447),
        [anon_sym_finally] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
    },
    [309] = {
        [sym__statement] = STATE(165),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(769),
    },
    [310] = {
        [anon_sym_except] = ACTIONS(461),
        [anon_sym_finally] = ACTIONS(461),
        [sym_comment] = ACTIONS(69),
    },
    [311] = {
        [anon_sym_except] = ACTIONS(535),
        [anon_sym_finally] = ACTIONS(535),
        [sym_comment] = ACTIONS(69),
    },
    [312] = {
        [anon_sym_except] = ACTIONS(561),
        [anon_sym_finally] = ACTIONS(561),
        [sym_comment] = ACTIONS(69),
    },
    [313] = {
        [aux_sym_print_statement_repeat1] = STATE(314),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_except] = ACTIONS(567),
        [anon_sym_finally] = ACTIONS(567),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [314] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_except] = ACTIONS(573),
        [anon_sym_finally] = ACTIONS(573),
        [sym_comment] = ACTIONS(69),
    },
    [315] = {
        [anon_sym_COLON] = ACTIONS(771),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [316] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(317),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [317] = {
        [sym_else_clause] = STATE(318),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(775),
    },
    [318] = {
        [anon_sym_print] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(779),
        [anon_sym_del] = ACTIONS(779),
        [sym_pass_statement] = ACTIONS(779),
        [sym_break_statement] = ACTIONS(779),
        [sym_continue_statement] = ACTIONS(779),
        [anon_sym_if] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(779),
        [anon_sym_try] = ACTIONS(779),
        [anon_sym_with] = ACTIONS(779),
        [anon_sym_def] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(779),
        [anon_sym_AT] = ACTIONS(781),
        [sym_number] = ACTIONS(779),
        [sym_identifier] = ACTIONS(783),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(781),
    },
    [319] = {
        [anon_sym_in] = ACTIONS(785),
        [sym_comment] = ACTIONS(69),
    },
    [320] = {
        [sym_expression_list] = STATE(321),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [321] = {
        [anon_sym_COLON] = ACTIONS(787),
        [sym_comment] = ACTIONS(69),
    },
    [322] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(323),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [323] = {
        [sym_else_clause] = STATE(324),
        [anon_sym_print] = ACTIONS(789),
        [anon_sym_return] = ACTIONS(789),
        [anon_sym_del] = ACTIONS(789),
        [sym_pass_statement] = ACTIONS(789),
        [sym_break_statement] = ACTIONS(789),
        [sym_continue_statement] = ACTIONS(789),
        [anon_sym_if] = ACTIONS(789),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(789),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(789),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(791),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(791),
    },
    [324] = {
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(797),
    },
    [325] = {
        [anon_sym_COLON] = ACTIONS(801),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [326] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(327),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [327] = {
        [sym_elif_clause] = STATE(329),
        [sym_else_clause] = STATE(330),
        [aux_sym_if_statement_repeat1] = STATE(331),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(807),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(807),
    },
    [328] = {
        [sym__expression] = STATE(334),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [329] = {
        [anon_sym_print] = ACTIONS(811),
        [anon_sym_return] = ACTIONS(811),
        [anon_sym_del] = ACTIONS(811),
        [sym_pass_statement] = ACTIONS(811),
        [sym_break_statement] = ACTIONS(811),
        [sym_continue_statement] = ACTIONS(811),
        [anon_sym_if] = ACTIONS(811),
        [anon_sym_elif] = ACTIONS(811),
        [anon_sym_else] = ACTIONS(811),
        [anon_sym_for] = ACTIONS(811),
        [anon_sym_while] = ACTIONS(811),
        [anon_sym_try] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(811),
        [anon_sym_def] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_AT] = ACTIONS(813),
        [sym_number] = ACTIONS(811),
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(813),
    },
    [330] = {
        [anon_sym_print] = ACTIONS(817),
        [anon_sym_return] = ACTIONS(817),
        [anon_sym_del] = ACTIONS(817),
        [sym_pass_statement] = ACTIONS(817),
        [sym_break_statement] = ACTIONS(817),
        [sym_continue_statement] = ACTIONS(817),
        [anon_sym_if] = ACTIONS(817),
        [anon_sym_for] = ACTIONS(817),
        [anon_sym_while] = ACTIONS(817),
        [anon_sym_try] = ACTIONS(817),
        [anon_sym_with] = ACTIONS(817),
        [anon_sym_def] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(819),
        [sym_number] = ACTIONS(817),
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(819),
    },
    [331] = {
        [sym_elif_clause] = STATE(332),
        [sym_else_clause] = STATE(333),
        [anon_sym_print] = ACTIONS(817),
        [anon_sym_return] = ACTIONS(817),
        [anon_sym_del] = ACTIONS(817),
        [sym_pass_statement] = ACTIONS(817),
        [sym_break_statement] = ACTIONS(817),
        [sym_continue_statement] = ACTIONS(817),
        [anon_sym_if] = ACTIONS(817),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(817),
        [anon_sym_while] = ACTIONS(817),
        [anon_sym_try] = ACTIONS(817),
        [anon_sym_with] = ACTIONS(817),
        [anon_sym_def] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(819),
        [sym_number] = ACTIONS(817),
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(819),
    },
    [332] = {
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_elif] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(825),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(825),
    },
    [333] = {
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(831),
    },
    [334] = {
        [anon_sym_COLON] = ACTIONS(835),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [335] = {
        [sym__simple_statement] = STATE(179),
        [sym_print_statement] = STATE(176),
        [sym_expression_statement] = STATE(176),
        [sym_return_statement] = STATE(176),
        [sym_delete_statement] = STATE(176),
        [sym__suite] = STATE(336),
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(177),
        [sym_subscript] = STATE(177),
        [sym_call] = STATE(177),
        [anon_sym_print] = ACTIONS(471),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(475),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(483),
    },
    [336] = {
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(837),
        [sym_pass_statement] = ACTIONS(837),
        [sym_break_statement] = ACTIONS(837),
        [sym_continue_statement] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_elif] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(837),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(837),
        [anon_sym_AT] = ACTIONS(839),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(839),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_print] = ACTIONS(533),
        [anon_sym_return] = ACTIONS(533),
        [anon_sym_del] = ACTIONS(533),
        [sym_pass_statement] = ACTIONS(533),
        [sym_break_statement] = ACTIONS(533),
        [sym_continue_statement] = ACTIONS(533),
        [anon_sym_if] = ACTIONS(533),
        [anon_sym_elif] = ACTIONS(533),
        [anon_sym_else] = ACTIONS(533),
        [anon_sym_for] = ACTIONS(533),
        [anon_sym_while] = ACTIONS(533),
        [anon_sym_try] = ACTIONS(533),
        [anon_sym_except] = ACTIONS(533),
        [anon_sym_finally] = ACTIONS(533),
        [anon_sym_with] = ACTIONS(533),
        [anon_sym_def] = ACTIONS(533),
        [anon_sym_class] = ACTIONS(533),
        [anon_sym_AT] = ACTIONS(535),
        [sym_number] = ACTIONS(533),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(535),
    },
    [338] = {
        [aux_sym_print_statement_repeat1] = STATE(340),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(843),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_elif] = ACTIONS(539),
        [anon_sym_else] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_except] = ACTIONS(539),
        [anon_sym_finally] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(161),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
    },
    [339] = {
        [sym__expression] = STATE(343),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(845),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_elif] = ACTIONS(545),
        [anon_sym_else] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_except] = ACTIONS(545),
        [anon_sym_finally] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
    },
    [341] = {
        [sym__expression] = STATE(342),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_except] = ACTIONS(551),
        [anon_sym_finally] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(161),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
    },
    [343] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_elif] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_except] = ACTIONS(555),
        [anon_sym_finally] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(161),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_SEMI] = ACTIONS(561),
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(559),
        [anon_sym_del] = ACTIONS(559),
        [sym_pass_statement] = ACTIONS(559),
        [sym_break_statement] = ACTIONS(559),
        [sym_continue_statement] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_elif] = ACTIONS(559),
        [anon_sym_else] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_except] = ACTIONS(559),
        [anon_sym_finally] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(561),
        [sym_number] = ACTIONS(559),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(561),
    },
    [345] = {
        [aux_sym_print_statement_repeat1] = STATE(346),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(843),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_elif] = ACTIONS(565),
        [anon_sym_else] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_except] = ACTIONS(565),
        [anon_sym_finally] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(161),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(845),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_elif] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(579),
    },
    [348] = {
        [sym_parameters] = STATE(349),
        [anon_sym_LPAREN] = ACTIONS(583),
        [sym_comment] = ACTIONS(69),
    },
    [349] = {
        [anon_sym_COLON] = ACTIONS(847),
        [sym_comment] = ACTIONS(69),
    },
    [350] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(351),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [351] = {
        [ts_builtin_sym_end] = ACTIONS(595),
        [anon_sym_SEMI] = ACTIONS(595),
        [anon_sym_print] = ACTIONS(593),
        [anon_sym_return] = ACTIONS(593),
        [anon_sym_del] = ACTIONS(593),
        [sym_pass_statement] = ACTIONS(593),
        [sym_break_statement] = ACTIONS(593),
        [sym_continue_statement] = ACTIONS(593),
        [anon_sym_if] = ACTIONS(593),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(593),
        [anon_sym_with] = ACTIONS(593),
        [anon_sym_def] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_AT] = ACTIONS(595),
        [sym_number] = ACTIONS(593),
        [sym_identifier] = ACTIONS(597),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(595),
    },
    [352] = {
        [aux_sym_with_statement_repeat1] = STATE(354),
        [anon_sym_COMMA] = ACTIONS(651),
        [anon_sym_COLON] = ACTIONS(849),
        [sym_comment] = ACTIONS(69),
    },
    [353] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(357),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [354] = {
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_COLON] = ACTIONS(851),
        [sym_comment] = ACTIONS(69),
    },
    [355] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(356),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [356] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(667),
    },
    [357] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(675),
    },
    [358] = {
        [sym__simple_statement] = STATE(284),
        [sym_print_statement] = STATE(282),
        [sym_expression_statement] = STATE(282),
        [sym_return_statement] = STATE(282),
        [sym_delete_statement] = STATE(282),
        [sym__suite] = STATE(359),
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(691),
    },
    [359] = {
        [sym_except_clause] = STATE(362),
        [sym_finally_clause] = STATE(363),
        [aux_sym_try_statement_repeat1] = STATE(364),
        [anon_sym_except] = ACTIONS(853),
        [anon_sym_finally] = ACTIONS(855),
        [sym_comment] = ACTIONS(69),
    },
    [360] = {
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [361] = {
        [anon_sym_COLON] = ACTIONS(857),
        [sym_comment] = ACTIONS(69),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(703),
        [anon_sym_SEMI] = ACTIONS(703),
        [anon_sym_print] = ACTIONS(701),
        [anon_sym_return] = ACTIONS(701),
        [anon_sym_del] = ACTIONS(701),
        [sym_pass_statement] = ACTIONS(701),
        [sym_break_statement] = ACTIONS(701),
        [sym_continue_statement] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(701),
        [anon_sym_else] = ACTIONS(701),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_while] = ACTIONS(701),
        [anon_sym_try] = ACTIONS(701),
        [anon_sym_except] = ACTIONS(701),
        [anon_sym_finally] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(701),
        [anon_sym_def] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_AT] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(703),
    },
    [363] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
    },
    [364] = {
        [sym_else_clause] = STATE(366),
        [sym_except_clause] = STATE(367),
        [sym_finally_clause] = STATE(368),
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_except] = ACTIONS(861),
        [anon_sym_finally] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
    },
    [365] = {
        [anon_sym_COLON] = ACTIONS(865),
        [sym_comment] = ACTIONS(69),
    },
    [366] = {
        [sym_finally_clause] = STATE(369),
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_SEMI] = ACTIONS(723),
        [anon_sym_print] = ACTIONS(721),
        [anon_sym_return] = ACTIONS(721),
        [anon_sym_del] = ACTIONS(721),
        [sym_pass_statement] = ACTIONS(721),
        [sym_break_statement] = ACTIONS(721),
        [sym_continue_statement] = ACTIONS(721),
        [anon_sym_if] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(721),
        [anon_sym_while] = ACTIONS(721),
        [anon_sym_try] = ACTIONS(721),
        [anon_sym_finally] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(721),
        [anon_sym_def] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_AT] = ACTIONS(723),
        [sym_number] = ACTIONS(721),
        [sym_identifier] = ACTIONS(725),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(723),
    },
    [367] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(727),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_except] = ACTIONS(727),
        [anon_sym_finally] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(729),
    },
    [368] = {
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_SEMI] = ACTIONS(723),
        [anon_sym_print] = ACTIONS(721),
        [anon_sym_return] = ACTIONS(721),
        [anon_sym_del] = ACTIONS(721),
        [sym_pass_statement] = ACTIONS(721),
        [sym_break_statement] = ACTIONS(721),
        [sym_continue_statement] = ACTIONS(721),
        [anon_sym_if] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(721),
        [anon_sym_while] = ACTIONS(721),
        [anon_sym_try] = ACTIONS(721),
        [anon_sym_with] = ACTIONS(721),
        [anon_sym_def] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_AT] = ACTIONS(723),
        [sym_number] = ACTIONS(721),
        [sym_identifier] = ACTIONS(725),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(723),
    },
    [369] = {
        [ts_builtin_sym_end] = ACTIONS(735),
        [anon_sym_SEMI] = ACTIONS(735),
        [anon_sym_print] = ACTIONS(733),
        [anon_sym_return] = ACTIONS(733),
        [anon_sym_del] = ACTIONS(733),
        [sym_pass_statement] = ACTIONS(733),
        [sym_break_statement] = ACTIONS(733),
        [sym_continue_statement] = ACTIONS(733),
        [anon_sym_if] = ACTIONS(733),
        [anon_sym_for] = ACTIONS(733),
        [anon_sym_while] = ACTIONS(733),
        [anon_sym_try] = ACTIONS(733),
        [anon_sym_with] = ACTIONS(733),
        [anon_sym_def] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(733),
        [anon_sym_AT] = ACTIONS(735),
        [sym_number] = ACTIONS(733),
        [sym_identifier] = ACTIONS(737),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(735),
    },
    [370] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(371),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [371] = {
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_SEMI] = ACTIONS(741),
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_return] = ACTIONS(739),
        [anon_sym_del] = ACTIONS(739),
        [sym_pass_statement] = ACTIONS(739),
        [sym_break_statement] = ACTIONS(739),
        [sym_continue_statement] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_finally] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(739),
        [anon_sym_AT] = ACTIONS(741),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(741),
    },
    [372] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(373),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(747),
        [anon_sym_SEMI] = ACTIONS(747),
        [anon_sym_print] = ACTIONS(745),
        [anon_sym_return] = ACTIONS(745),
        [anon_sym_del] = ACTIONS(745),
        [sym_pass_statement] = ACTIONS(745),
        [sym_break_statement] = ACTIONS(745),
        [sym_continue_statement] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(745),
        [anon_sym_while] = ACTIONS(745),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(747),
        [sym_number] = ACTIONS(745),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(747),
    },
    [374] = {
        [anon_sym_COMMA] = ACTIONS(867),
        [anon_sym_COLON] = ACTIONS(869),
        [anon_sym_as] = ACTIONS(867),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [375] = {
        [sym__expression] = STATE(377),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [376] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(380),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [377] = {
        [anon_sym_COLON] = ACTIONS(871),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [378] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(379),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [379] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_except] = ACTIONS(757),
        [anon_sym_finally] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(759),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_else] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_except] = ACTIONS(763),
        [anon_sym_finally] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(765),
    },
    [381] = {
        [anon_sym_COLON] = ACTIONS(873),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [382] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(383),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [383] = {
        [sym_else_clause] = STATE(384),
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(775),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(781),
        [anon_sym_SEMI] = ACTIONS(781),
        [anon_sym_print] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(779),
        [anon_sym_del] = ACTIONS(779),
        [sym_pass_statement] = ACTIONS(779),
        [sym_break_statement] = ACTIONS(779),
        [sym_continue_statement] = ACTIONS(779),
        [anon_sym_if] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(779),
        [anon_sym_try] = ACTIONS(779),
        [anon_sym_with] = ACTIONS(779),
        [anon_sym_def] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(779),
        [anon_sym_AT] = ACTIONS(781),
        [sym_number] = ACTIONS(779),
        [sym_identifier] = ACTIONS(783),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(781),
    },
    [385] = {
        [anon_sym_in] = ACTIONS(875),
        [sym_comment] = ACTIONS(69),
    },
    [386] = {
        [sym_expression_list] = STATE(387),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [387] = {
        [anon_sym_COLON] = ACTIONS(877),
        [sym_comment] = ACTIONS(69),
    },
    [388] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(389),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [389] = {
        [sym_else_clause] = STATE(390),
        [ts_builtin_sym_end] = ACTIONS(791),
        [anon_sym_SEMI] = ACTIONS(791),
        [anon_sym_print] = ACTIONS(789),
        [anon_sym_return] = ACTIONS(789),
        [anon_sym_del] = ACTIONS(789),
        [sym_pass_statement] = ACTIONS(789),
        [sym_break_statement] = ACTIONS(789),
        [sym_continue_statement] = ACTIONS(789),
        [anon_sym_if] = ACTIONS(789),
        [anon_sym_else] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(789),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(789),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(791),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(791),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(797),
    },
    [391] = {
        [anon_sym_COLON] = ACTIONS(879),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [392] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(393),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [393] = {
        [sym_elif_clause] = STATE(395),
        [sym_else_clause] = STATE(396),
        [aux_sym_if_statement_repeat1] = STATE(397),
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_SEMI] = ACTIONS(807),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_elif] = ACTIONS(881),
        [anon_sym_else] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(807),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(807),
    },
    [394] = {
        [sym__expression] = STATE(400),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_print] = ACTIONS(811),
        [anon_sym_return] = ACTIONS(811),
        [anon_sym_del] = ACTIONS(811),
        [sym_pass_statement] = ACTIONS(811),
        [sym_break_statement] = ACTIONS(811),
        [sym_continue_statement] = ACTIONS(811),
        [anon_sym_if] = ACTIONS(811),
        [anon_sym_elif] = ACTIONS(811),
        [anon_sym_else] = ACTIONS(811),
        [anon_sym_for] = ACTIONS(811),
        [anon_sym_while] = ACTIONS(811),
        [anon_sym_try] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(811),
        [anon_sym_def] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_AT] = ACTIONS(813),
        [sym_number] = ACTIONS(811),
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(813),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(817),
        [anon_sym_return] = ACTIONS(817),
        [anon_sym_del] = ACTIONS(817),
        [sym_pass_statement] = ACTIONS(817),
        [sym_break_statement] = ACTIONS(817),
        [sym_continue_statement] = ACTIONS(817),
        [anon_sym_if] = ACTIONS(817),
        [anon_sym_for] = ACTIONS(817),
        [anon_sym_while] = ACTIONS(817),
        [anon_sym_try] = ACTIONS(817),
        [anon_sym_with] = ACTIONS(817),
        [anon_sym_def] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(819),
        [sym_number] = ACTIONS(817),
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(819),
    },
    [397] = {
        [sym_elif_clause] = STATE(398),
        [sym_else_clause] = STATE(399),
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(817),
        [anon_sym_return] = ACTIONS(817),
        [anon_sym_del] = ACTIONS(817),
        [sym_pass_statement] = ACTIONS(817),
        [sym_break_statement] = ACTIONS(817),
        [sym_continue_statement] = ACTIONS(817),
        [anon_sym_if] = ACTIONS(817),
        [anon_sym_elif] = ACTIONS(881),
        [anon_sym_else] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(817),
        [anon_sym_while] = ACTIONS(817),
        [anon_sym_try] = ACTIONS(817),
        [anon_sym_with] = ACTIONS(817),
        [anon_sym_def] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(819),
        [sym_number] = ACTIONS(817),
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(819),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(825),
        [anon_sym_SEMI] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_elif] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(825),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(825),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(831),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(831),
    },
    [400] = {
        [anon_sym_COLON] = ACTIONS(883),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [401] = {
        [sym__simple_statement] = STATE(147),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(402),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(403),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(839),
        [anon_sym_SEMI] = ACTIONS(839),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(837),
        [sym_pass_statement] = ACTIONS(837),
        [sym_break_statement] = ACTIONS(837),
        [sym_continue_statement] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_elif] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(837),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(837),
        [anon_sym_AT] = ACTIONS(839),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(839),
    },
    [403] = {
        [sym__expression] = STATE(708),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [404] = {
        [sym_with_item] = STATE(703),
        [sym_dictionary_splat_parameter] = STATE(607),
        [sym__expression] = STATE(704),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_keyword_argument] = STATE(705),
        [sym_dictionary_splat_argument] = STATE(706),
        [anon_sym_RPAREN] = ACTIONS(887),
        [anon_sym_STAR] = ACTIONS(889),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(895),
        [anon_sym_RBRACK] = ACTIONS(897),
        [anon_sym_STAR_STAR] = ACTIONS(899),
        [sym_number] = ACTIONS(903),
        [sym_identifier] = ACTIONS(907),
        [sym_comment] = ACTIONS(69),
    },
    [405] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(691),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [406] = {
        [sym_expression_list] = STATE(515),
        [sym__expression] = STATE(691),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [407] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_print] = ACTIONS(109),
        [anon_sym_return] = ACTIONS(109),
        [anon_sym_del] = ACTIONS(109),
        [sym_pass_statement] = ACTIONS(109),
        [sym_break_statement] = ACTIONS(109),
        [sym_continue_statement] = ACTIONS(109),
        [anon_sym_if] = ACTIONS(109),
        [anon_sym_elif] = ACTIONS(109),
        [anon_sym_else] = ACTIONS(109),
        [anon_sym_for] = ACTIONS(109),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_except] = ACTIONS(109),
        [anon_sym_finally] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(109),
        [anon_sym_def] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_AT] = ACTIONS(107),
        [sym_number] = ACTIONS(109),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(107),
        [sym__dedent] = ACTIONS(107),
    },
    [408] = {
        [sym__expression] = STATE(687),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [409] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(451),
        [sym__expression] = STATE(553),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(913),
        [anon_sym_return] = ACTIONS(915),
        [anon_sym_del] = ACTIONS(917),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [410] = {
        [sym__expression] = STATE(668),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [411] = {
        [anon_sym_COLON] = ACTIONS(925),
        [sym_comment] = ACTIONS(69),
    },
    [412] = {
        [sym_expression_list] = STATE(650),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [413] = {
        [sym_expression_list] = STATE(649),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [414] = {
        [sym__expression] = STATE(645),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [415] = {
        [anon_sym_COLON] = ACTIONS(927),
        [sym_comment] = ACTIONS(69),
    },
    [416] = {
        [sym__expression] = STATE(638),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [417] = {
        [sym__expression] = STATE(637),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [418] = {
        [anon_sym_COLON] = ACTIONS(929),
        [sym_comment] = ACTIONS(69),
    },
    [419] = {
        [sym_with_item] = STATE(634),
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [420] = {
        [sym_identifier] = ACTIONS(931),
        [sym_comment] = ACTIONS(69),
    },
    [421] = {
        [sym_default_parameter] = STATE(241),
        [sym_list_splat_parameter] = STATE(242),
        [sym_dictionary_splat_parameter] = STATE(243),
        [sym_expression_list] = STATE(618),
        [sym__expression] = STATE(628),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(503),
        [sym_list_splat_argument] = STATE(504),
        [sym_dictionary_splat_argument] = STATE(505),
        [aux_sym_parameters_repeat1] = STATE(244),
        [aux_sym_call_repeat1] = STATE(464),
        [anon_sym_RPAREN] = ACTIONS(585),
        [anon_sym_STAR] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(935),
        [sym_comment] = ACTIONS(69),
    },
    [422] = {
        [ts_builtin_sym_end] = ACTIONS(937),
        [anon_sym_SEMI] = ACTIONS(937),
        [anon_sym_print] = ACTIONS(943),
        [anon_sym_COMMA] = ACTIONS(937),
        [anon_sym_return] = ACTIONS(943),
        [anon_sym_del] = ACTIONS(943),
        [sym_pass_statement] = ACTIONS(943),
        [sym_break_statement] = ACTIONS(943),
        [sym_continue_statement] = ACTIONS(943),
        [anon_sym_if] = ACTIONS(943),
        [anon_sym_COLON] = ACTIONS(949),
        [anon_sym_elif] = ACTIONS(943),
        [anon_sym_else] = ACTIONS(943),
        [anon_sym_for] = ACTIONS(943),
        [anon_sym_in] = ACTIONS(943),
        [anon_sym_while] = ACTIONS(943),
        [anon_sym_try] = ACTIONS(943),
        [anon_sym_except] = ACTIONS(943),
        [anon_sym_as] = ACTIONS(943),
        [anon_sym_finally] = ACTIONS(943),
        [anon_sym_with] = ACTIONS(943),
        [anon_sym_def] = ACTIONS(943),
        [anon_sym_LPAREN] = ACTIONS(937),
        [anon_sym_RPAREN] = ACTIONS(937),
        [anon_sym_class] = ACTIONS(943),
        [anon_sym_AT] = ACTIONS(937),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_LBRACK] = ACTIONS(937),
        [anon_sym_RBRACK] = ACTIONS(937),
        [sym_number] = ACTIONS(943),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(967),
        [sym__dedent] = ACTIONS(937),
    },
    [423] = {
        [sym__expression] = STATE(625),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [424] = {
        [sym__expression] = STATE(91),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_STAR] = ACTIONS(601),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(975),
        [sym_comment] = ACTIONS(69),
    },
    [425] = {
        [sym_identifier] = ACTIONS(977),
        [sym_comment] = ACTIONS(69),
    },
    [426] = {
        [sym_identifier] = ACTIONS(979),
        [sym_comment] = ACTIONS(69),
    },
    [427] = {
        [sym__expression] = STATE(620),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [428] = {
        [sym__expression] = STATE(498),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(981),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [429] = {
        [aux_sym_subscript_repeat1] = STATE(463),
        [anon_sym_COMMA] = ACTIONS(983),
        [anon_sym_RBRACK] = ACTIONS(987),
        [sym_comment] = ACTIONS(69),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(991),
        [anon_sym_SEMI] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(995),
        [anon_sym_COMMA] = ACTIONS(991),
        [anon_sym_return] = ACTIONS(995),
        [anon_sym_del] = ACTIONS(995),
        [sym_pass_statement] = ACTIONS(995),
        [sym_break_statement] = ACTIONS(995),
        [sym_continue_statement] = ACTIONS(995),
        [anon_sym_if] = ACTIONS(995),
        [anon_sym_COLON] = ACTIONS(991),
        [anon_sym_elif] = ACTIONS(995),
        [anon_sym_else] = ACTIONS(995),
        [anon_sym_for] = ACTIONS(995),
        [anon_sym_in] = ACTIONS(995),
        [anon_sym_while] = ACTIONS(995),
        [anon_sym_try] = ACTIONS(995),
        [anon_sym_except] = ACTIONS(995),
        [anon_sym_as] = ACTIONS(995),
        [anon_sym_finally] = ACTIONS(995),
        [anon_sym_with] = ACTIONS(995),
        [anon_sym_def] = ACTIONS(995),
        [anon_sym_LPAREN] = ACTIONS(991),
        [anon_sym_RPAREN] = ACTIONS(991),
        [anon_sym_class] = ACTIONS(995),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_PLUS] = ACTIONS(991),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_RBRACK] = ACTIONS(991),
        [sym_number] = ACTIONS(995),
        [sym_identifier] = ACTIONS(999),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(991),
        [sym__dedent] = ACTIONS(991),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_COMMA] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_del] = ACTIONS(125),
        [sym_pass_statement] = ACTIONS(125),
        [sym_break_statement] = ACTIONS(125),
        [sym_continue_statement] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_except] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_finally] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [432] = {
        [sym_parameters] = STATE(446),
        [aux_sym_dotted_name_repeat1] = STATE(134),
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_COMMA] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_del] = ACTIONS(125),
        [sym_pass_statement] = ACTIONS(125),
        [sym_break_statement] = ACTIONS(125),
        [sym_continue_statement] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(1007),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_except] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_finally] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(1010),
        [anon_sym_RPAREN] = ACTIONS(1016),
        [anon_sym_EQ] = ACTIONS(1021),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_DOT] = ACTIONS(1023),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1027),
        [sym__dedent] = ACTIONS(123),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(1032),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [sym_pass_statement] = ACTIONS(353),
        [sym_break_statement] = ACTIONS(353),
        [sym_continue_statement] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1039),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [434] = {
        [sym__statement] = STATE(157),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(513),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(1043),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(1045),
        [anon_sym_SEMI] = ACTIONS(1045),
        [anon_sym_print] = ACTIONS(1048),
        [anon_sym_return] = ACTIONS(1048),
        [anon_sym_del] = ACTIONS(1048),
        [sym_pass_statement] = ACTIONS(1048),
        [sym_break_statement] = ACTIONS(1048),
        [sym_continue_statement] = ACTIONS(1048),
        [anon_sym_if] = ACTIONS(1048),
        [anon_sym_elif] = ACTIONS(1048),
        [anon_sym_else] = ACTIONS(1048),
        [anon_sym_for] = ACTIONS(1048),
        [anon_sym_while] = ACTIONS(1048),
        [anon_sym_try] = ACTIONS(1048),
        [anon_sym_except] = ACTIONS(1048),
        [anon_sym_finally] = ACTIONS(1048),
        [anon_sym_with] = ACTIONS(1048),
        [anon_sym_def] = ACTIONS(1048),
        [anon_sym_class] = ACTIONS(1048),
        [anon_sym_AT] = ACTIONS(1045),
        [sym_number] = ACTIONS(1048),
        [sym_identifier] = ACTIONS(1051),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1045),
        [sym__dedent] = ACTIONS(1045),
    },
    [436] = {
        [ts_builtin_sym_end] = ACTIONS(1054),
        [anon_sym_SEMI] = ACTIONS(1054),
        [anon_sym_print] = ACTIONS(1057),
        [anon_sym_return] = ACTIONS(1057),
        [anon_sym_del] = ACTIONS(1057),
        [sym_pass_statement] = ACTIONS(1057),
        [sym_break_statement] = ACTIONS(1057),
        [sym_continue_statement] = ACTIONS(1057),
        [anon_sym_if] = ACTIONS(1057),
        [anon_sym_for] = ACTIONS(1057),
        [anon_sym_while] = ACTIONS(1057),
        [anon_sym_try] = ACTIONS(1057),
        [anon_sym_with] = ACTIONS(1057),
        [anon_sym_def] = ACTIONS(1057),
        [anon_sym_class] = ACTIONS(1057),
        [anon_sym_AT] = ACTIONS(1054),
        [sym_number] = ACTIONS(1057),
        [sym_identifier] = ACTIONS(1060),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1054),
        [sym__dedent] = ACTIONS(1054),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(429),
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_print] = ACTIONS(431),
        [anon_sym_return] = ACTIONS(431),
        [anon_sym_del] = ACTIONS(431),
        [sym_pass_statement] = ACTIONS(431),
        [sym_break_statement] = ACTIONS(431),
        [sym_continue_statement] = ACTIONS(431),
        [anon_sym_if] = ACTIONS(431),
        [anon_sym_elif] = ACTIONS(431),
        [anon_sym_else] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_while] = ACTIONS(431),
        [anon_sym_try] = ACTIONS(431),
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_with] = ACTIONS(431),
        [anon_sym_def] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(431),
        [anon_sym_AT] = ACTIONS(429),
        [sym_number] = ACTIONS(431),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1063),
        [sym__dedent] = ACTIONS(429),
    },
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [sym_pass_statement] = ACTIONS(141),
        [sym_break_statement] = ACTIONS(141),
        [sym_continue_statement] = ACTIONS(141),
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(139),
        [sym__dedent] = ACTIONS(139),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_print] = ACTIONS(147),
        [anon_sym_return] = ACTIONS(147),
        [anon_sym_del] = ACTIONS(147),
        [sym_pass_statement] = ACTIONS(147),
        [sym_break_statement] = ACTIONS(147),
        [sym_continue_statement] = ACTIONS(147),
        [anon_sym_if] = ACTIONS(147),
        [anon_sym_for] = ACTIONS(147),
        [anon_sym_while] = ACTIONS(147),
        [anon_sym_try] = ACTIONS(147),
        [anon_sym_with] = ACTIONS(147),
        [anon_sym_def] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(145),
        [sym_number] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(145),
        [sym__dedent] = ACTIONS(145),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(1066),
        [anon_sym_SEMI] = ACTIONS(1066),
        [anon_sym_print] = ACTIONS(1069),
        [anon_sym_return] = ACTIONS(1069),
        [anon_sym_del] = ACTIONS(1069),
        [sym_pass_statement] = ACTIONS(1069),
        [sym_break_statement] = ACTIONS(1069),
        [sym_continue_statement] = ACTIONS(1069),
        [anon_sym_if] = ACTIONS(1069),
        [anon_sym_elif] = ACTIONS(1069),
        [anon_sym_else] = ACTIONS(1069),
        [anon_sym_for] = ACTIONS(1069),
        [anon_sym_while] = ACTIONS(1069),
        [anon_sym_try] = ACTIONS(1069),
        [anon_sym_with] = ACTIONS(1069),
        [anon_sym_def] = ACTIONS(1069),
        [anon_sym_class] = ACTIONS(1069),
        [anon_sym_AT] = ACTIONS(1066),
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1072),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1066),
        [sym__dedent] = ACTIONS(1066),
    },
    [441] = {
        [sym_finally_clause] = STATE(530),
        [ts_builtin_sym_end] = ACTIONS(1075),
        [anon_sym_SEMI] = ACTIONS(1075),
        [anon_sym_print] = ACTIONS(1081),
        [anon_sym_return] = ACTIONS(1081),
        [anon_sym_del] = ACTIONS(1081),
        [sym_pass_statement] = ACTIONS(1081),
        [sym_break_statement] = ACTIONS(1081),
        [sym_continue_statement] = ACTIONS(1081),
        [anon_sym_if] = ACTIONS(1081),
        [anon_sym_for] = ACTIONS(1081),
        [anon_sym_while] = ACTIONS(1081),
        [anon_sym_try] = ACTIONS(1081),
        [anon_sym_finally] = ACTIONS(1087),
        [anon_sym_with] = ACTIONS(1081),
        [anon_sym_def] = ACTIONS(1081),
        [anon_sym_class] = ACTIONS(1081),
        [anon_sym_AT] = ACTIONS(1075),
        [sym_number] = ACTIONS(1081),
        [sym_identifier] = ACTIONS(1089),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1075),
        [sym__dedent] = ACTIONS(1075),
    },
    [442] = {
        [ts_builtin_sym_end] = ACTIONS(1095),
        [anon_sym_SEMI] = ACTIONS(1095),
        [anon_sym_print] = ACTIONS(1098),
        [anon_sym_return] = ACTIONS(1098),
        [anon_sym_del] = ACTIONS(1098),
        [sym_pass_statement] = ACTIONS(1098),
        [sym_break_statement] = ACTIONS(1098),
        [sym_continue_statement] = ACTIONS(1098),
        [anon_sym_if] = ACTIONS(1098),
        [anon_sym_else] = ACTIONS(1098),
        [anon_sym_for] = ACTIONS(1098),
        [anon_sym_while] = ACTIONS(1098),
        [anon_sym_try] = ACTIONS(1098),
        [anon_sym_except] = ACTIONS(1098),
        [anon_sym_finally] = ACTIONS(1098),
        [anon_sym_with] = ACTIONS(1098),
        [anon_sym_def] = ACTIONS(1098),
        [anon_sym_class] = ACTIONS(1098),
        [anon_sym_AT] = ACTIONS(1095),
        [sym_number] = ACTIONS(1098),
        [sym_identifier] = ACTIONS(1101),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1095),
        [sym__dedent] = ACTIONS(1095),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(1104),
        [anon_sym_SEMI] = ACTIONS(1104),
        [anon_sym_print] = ACTIONS(1108),
        [anon_sym_return] = ACTIONS(1108),
        [anon_sym_del] = ACTIONS(1108),
        [sym_pass_statement] = ACTIONS(1108),
        [sym_break_statement] = ACTIONS(1108),
        [sym_continue_statement] = ACTIONS(1108),
        [anon_sym_if] = ACTIONS(1108),
        [anon_sym_for] = ACTIONS(1108),
        [anon_sym_while] = ACTIONS(1108),
        [anon_sym_try] = ACTIONS(1108),
        [anon_sym_with] = ACTIONS(1108),
        [anon_sym_def] = ACTIONS(1108),
        [anon_sym_class] = ACTIONS(1108),
        [anon_sym_AT] = ACTIONS(1104),
        [sym_number] = ACTIONS(1108),
        [sym_identifier] = ACTIONS(1112),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1104),
        [sym__dedent] = ACTIONS(1104),
    },
    [444] = {
        [aux_sym_with_statement_repeat1] = STATE(461),
        [anon_sym_COMMA] = ACTIONS(1116),
        [anon_sym_COLON] = ACTIONS(1120),
        [sym_comment] = ACTIONS(69),
    },
    [445] = {
        [ts_builtin_sym_end] = ACTIONS(1124),
        [anon_sym_SEMI] = ACTIONS(1124),
        [anon_sym_print] = ACTIONS(1127),
        [anon_sym_return] = ACTIONS(1127),
        [anon_sym_del] = ACTIONS(1127),
        [sym_pass_statement] = ACTIONS(1127),
        [sym_break_statement] = ACTIONS(1127),
        [sym_continue_statement] = ACTIONS(1127),
        [anon_sym_if] = ACTIONS(1127),
        [anon_sym_for] = ACTIONS(1127),
        [anon_sym_while] = ACTIONS(1127),
        [anon_sym_try] = ACTIONS(1127),
        [anon_sym_with] = ACTIONS(1127),
        [anon_sym_def] = ACTIONS(1127),
        [anon_sym_class] = ACTIONS(1127),
        [anon_sym_AT] = ACTIONS(1124),
        [sym_number] = ACTIONS(1127),
        [sym_identifier] = ACTIONS(1130),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1124),
        [sym__dedent] = ACTIONS(1124),
    },
    [446] = {
        [anon_sym_COLON] = ACTIONS(1133),
        [sym_comment] = ACTIONS(69),
    },
    [447] = {
        [anon_sym_COMMA] = ACTIONS(1135),
        [anon_sym_RPAREN] = ACTIONS(1137),
        [sym_comment] = ACTIONS(69),
    },
    [448] = {
        [anon_sym_COMMA] = ACTIONS(1139),
        [anon_sym_RPAREN] = ACTIONS(1137),
        [sym_comment] = ACTIONS(69),
    },
    [449] = {
        [anon_sym_RPAREN] = ACTIONS(1141),
        [sym_comment] = ACTIONS(69),
    },
    [450] = {
        [anon_sym_def] = ACTIONS(1143),
        [anon_sym_class] = ACTIONS(1143),
        [anon_sym_AT] = ACTIONS(1143),
        [sym_comment] = ACTIONS(69),
    },
    [451] = {
        [sym_elif_clause] = STATE(556),
        [sym_else_clause] = STATE(601),
        [sym_except_clause] = STATE(602),
        [sym_finally_clause] = STATE(603),
        [aux_sym_if_statement_repeat1] = STATE(459),
        [aux_sym_try_statement_repeat1] = STATE(460),
        [ts_builtin_sym_end] = ACTIONS(1146),
        [anon_sym_SEMI] = ACTIONS(1146),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1160),
        [anon_sym_del] = ACTIONS(1160),
        [sym_pass_statement] = ACTIONS(1160),
        [sym_break_statement] = ACTIONS(1160),
        [sym_continue_statement] = ACTIONS(1160),
        [anon_sym_if] = ACTIONS(1160),
        [anon_sym_elif] = ACTIONS(1174),
        [anon_sym_else] = ACTIONS(1177),
        [anon_sym_for] = ACTIONS(1160),
        [anon_sym_while] = ACTIONS(1160),
        [anon_sym_try] = ACTIONS(1160),
        [anon_sym_except] = ACTIONS(1182),
        [anon_sym_finally] = ACTIONS(1186),
        [anon_sym_with] = ACTIONS(1160),
        [anon_sym_def] = ACTIONS(1160),
        [anon_sym_class] = ACTIONS(1160),
        [anon_sym_AT] = ACTIONS(1146),
        [sym_number] = ACTIONS(1160),
        [sym_identifier] = ACTIONS(1191),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1146),
        [sym__dedent] = ACTIONS(1146),
    },
    [452] = {
        [ts_builtin_sym_end] = ACTIONS(1205),
        [anon_sym_SEMI] = ACTIONS(1205),
        [anon_sym_print] = ACTIONS(1208),
        [anon_sym_return] = ACTIONS(1208),
        [anon_sym_del] = ACTIONS(1208),
        [sym_pass_statement] = ACTIONS(1208),
        [sym_break_statement] = ACTIONS(1208),
        [sym_continue_statement] = ACTIONS(1208),
        [anon_sym_if] = ACTIONS(1208),
        [anon_sym_COLON] = ACTIONS(1211),
        [anon_sym_elif] = ACTIONS(1208),
        [anon_sym_else] = ACTIONS(1208),
        [anon_sym_for] = ACTIONS(1208),
        [anon_sym_in] = ACTIONS(1213),
        [anon_sym_while] = ACTIONS(1208),
        [anon_sym_try] = ACTIONS(1208),
        [anon_sym_except] = ACTIONS(1208),
        [anon_sym_finally] = ACTIONS(1208),
        [anon_sym_with] = ACTIONS(1208),
        [anon_sym_def] = ACTIONS(1208),
        [anon_sym_RPAREN] = ACTIONS(1215),
        [anon_sym_class] = ACTIONS(1208),
        [anon_sym_AT] = ACTIONS(1205),
        [sym_number] = ACTIONS(1208),
        [sym_identifier] = ACTIONS(1217),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1205),
        [sym__dedent] = ACTIONS(1205),
    },
    [453] = {
        [aux_sym_print_statement_repeat1] = STATE(458),
        [aux_sym_subscript_repeat1] = STATE(463),
        [ts_builtin_sym_end] = ACTIONS(1220),
        [anon_sym_SEMI] = ACTIONS(1220),
        [anon_sym_print] = ACTIONS(1227),
        [anon_sym_COMMA] = ACTIONS(1234),
        [anon_sym_return] = ACTIONS(1227),
        [anon_sym_del] = ACTIONS(1227),
        [sym_pass_statement] = ACTIONS(1227),
        [sym_break_statement] = ACTIONS(1227),
        [sym_continue_statement] = ACTIONS(1227),
        [anon_sym_if] = ACTIONS(1227),
        [anon_sym_COLON] = ACTIONS(1248),
        [anon_sym_elif] = ACTIONS(1227),
        [anon_sym_else] = ACTIONS(1227),
        [anon_sym_for] = ACTIONS(1227),
        [anon_sym_in] = ACTIONS(1256),
        [anon_sym_while] = ACTIONS(1227),
        [anon_sym_try] = ACTIONS(1227),
        [anon_sym_except] = ACTIONS(1227),
        [anon_sym_as] = ACTIONS(1261),
        [anon_sym_finally] = ACTIONS(1227),
        [anon_sym_with] = ACTIONS(1227),
        [anon_sym_def] = ACTIONS(1227),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_RPAREN] = ACTIONS(1267),
        [anon_sym_class] = ACTIONS(1227),
        [anon_sym_AT] = ACTIONS(1220),
        [anon_sym_PLUS] = ACTIONS(1279),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [anon_sym_RBRACK] = ACTIONS(1285),
        [sym_number] = ACTIONS(1227),
        [sym_identifier] = ACTIONS(1290),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1220),
        [sym__dedent] = ACTIONS(1220),
    },
    [454] = {
        [anon_sym_COMMA] = ACTIONS(1297),
        [anon_sym_RPAREN] = ACTIONS(1301),
        [sym_comment] = ACTIONS(69),
    },
    [455] = {
        [aux_sym_call_repeat2] = STATE(465),
        [anon_sym_COMMA] = ACTIONS(1305),
        [anon_sym_RPAREN] = ACTIONS(1307),
        [sym_comment] = ACTIONS(69),
    },
    [456] = {
        [anon_sym_RPAREN] = ACTIONS(1309),
        [sym_comment] = ACTIONS(69),
    },
    [457] = {
        [sym__statement] = STATE(540),
        [sym__simple_statement] = STATE(541),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(438),
        [sym_if_statement] = STATE(439),
        [sym_for_statement] = STATE(439),
        [sym_while_statement] = STATE(439),
        [sym_try_statement] = STATE(439),
        [sym_with_statement] = STATE(439),
        [sym_function_definition] = STATE(439),
        [sym_class_definition] = STATE(439),
        [sym_decorated_definition] = STATE(439),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(462),
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(167),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(1311),
        [anon_sym_for] = ACTIONS(1313),
        [anon_sym_while] = ACTIONS(1315),
        [anon_sym_try] = ACTIONS(1317),
        [anon_sym_with] = ACTIONS(1319),
        [anon_sym_def] = ACTIONS(1321),
        [anon_sym_class] = ACTIONS(1323),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(167),
        [sym__dedent] = ACTIONS(1325),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(1327),
        [anon_sym_SEMI] = ACTIONS(1327),
        [anon_sym_print] = ACTIONS(1330),
        [anon_sym_COMMA] = ACTIONS(1333),
        [anon_sym_return] = ACTIONS(1330),
        [anon_sym_del] = ACTIONS(1330),
        [sym_pass_statement] = ACTIONS(1330),
        [sym_break_statement] = ACTIONS(1330),
        [sym_continue_statement] = ACTIONS(1330),
        [anon_sym_if] = ACTIONS(1330),
        [anon_sym_COLON] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(1330),
        [anon_sym_else] = ACTIONS(1330),
        [anon_sym_for] = ACTIONS(1330),
        [anon_sym_in] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(1330),
        [anon_sym_try] = ACTIONS(1330),
        [anon_sym_except] = ACTIONS(1330),
        [anon_sym_finally] = ACTIONS(1330),
        [anon_sym_with] = ACTIONS(1330),
        [anon_sym_def] = ACTIONS(1330),
        [anon_sym_RPAREN] = ACTIONS(1335),
        [anon_sym_class] = ACTIONS(1330),
        [anon_sym_AT] = ACTIONS(1327),
        [sym_number] = ACTIONS(1330),
        [sym_identifier] = ACTIONS(1338),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1327),
        [sym__dedent] = ACTIONS(1327),
    },
    [459] = {
        [sym_elif_clause] = STATE(532),
        [sym_else_clause] = STATE(533),
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(817),
        [anon_sym_return] = ACTIONS(817),
        [anon_sym_del] = ACTIONS(817),
        [sym_pass_statement] = ACTIONS(817),
        [sym_break_statement] = ACTIONS(817),
        [sym_continue_statement] = ACTIONS(817),
        [anon_sym_if] = ACTIONS(817),
        [anon_sym_elif] = ACTIONS(1341),
        [anon_sym_else] = ACTIONS(1343),
        [anon_sym_for] = ACTIONS(817),
        [anon_sym_while] = ACTIONS(817),
        [anon_sym_try] = ACTIONS(817),
        [anon_sym_with] = ACTIONS(817),
        [anon_sym_def] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(819),
        [sym_number] = ACTIONS(817),
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(819),
        [sym__dedent] = ACTIONS(819),
    },
    [460] = {
        [sym_else_clause] = STATE(527),
        [sym_except_clause] = STATE(528),
        [sym_finally_clause] = STATE(529),
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(1345),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_except] = ACTIONS(1347),
        [anon_sym_finally] = ACTIONS(1087),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
        [sym__dedent] = ACTIONS(709),
    },
    [461] = {
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_COLON] = ACTIONS(1349),
        [sym_comment] = ACTIONS(69),
    },
    [462] = {
        [sym_function_definition] = STATE(487),
        [sym_class_definition] = STATE(487),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(1351),
        [anon_sym_class] = ACTIONS(1353),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [463] = {
        [anon_sym_COMMA] = ACTIONS(1355),
        [anon_sym_RBRACK] = ACTIONS(1357),
        [sym_comment] = ACTIONS(69),
    },
    [464] = {
        [sym__expression] = STATE(470),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(471),
        [sym_list_splat_argument] = STATE(472),
        [sym_dictionary_splat_argument] = STATE(473),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [465] = {
        [anon_sym_COMMA] = ACTIONS(1359),
        [anon_sym_RPAREN] = ACTIONS(1361),
        [sym_comment] = ACTIONS(69),
    },
    [466] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(468),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [467] = {
        [ts_builtin_sym_end] = ACTIONS(1363),
        [anon_sym_SEMI] = ACTIONS(1363),
        [anon_sym_print] = ACTIONS(1366),
        [anon_sym_COMMA] = ACTIONS(1363),
        [anon_sym_return] = ACTIONS(1366),
        [anon_sym_del] = ACTIONS(1366),
        [sym_pass_statement] = ACTIONS(1366),
        [sym_break_statement] = ACTIONS(1366),
        [sym_continue_statement] = ACTIONS(1366),
        [anon_sym_if] = ACTIONS(1366),
        [anon_sym_COLON] = ACTIONS(1363),
        [anon_sym_elif] = ACTIONS(1366),
        [anon_sym_else] = ACTIONS(1366),
        [anon_sym_for] = ACTIONS(1366),
        [anon_sym_in] = ACTIONS(1366),
        [anon_sym_while] = ACTIONS(1366),
        [anon_sym_try] = ACTIONS(1366),
        [anon_sym_except] = ACTIONS(1366),
        [anon_sym_as] = ACTIONS(1366),
        [anon_sym_finally] = ACTIONS(1366),
        [anon_sym_with] = ACTIONS(1366),
        [anon_sym_def] = ACTIONS(1366),
        [anon_sym_LPAREN] = ACTIONS(1363),
        [anon_sym_RPAREN] = ACTIONS(1363),
        [anon_sym_class] = ACTIONS(1366),
        [anon_sym_AT] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(1363),
        [anon_sym_LBRACK] = ACTIONS(1363),
        [anon_sym_RBRACK] = ACTIONS(1363),
        [sym_number] = ACTIONS(1366),
        [sym_identifier] = ACTIONS(1369),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1363),
        [sym__dedent] = ACTIONS(1363),
    },
    [468] = {
        [anon_sym_RPAREN] = ACTIONS(1372),
        [sym_comment] = ACTIONS(69),
    },
    [469] = {
        [ts_builtin_sym_end] = ACTIONS(1374),
        [anon_sym_SEMI] = ACTIONS(1374),
        [anon_sym_print] = ACTIONS(1377),
        [anon_sym_COMMA] = ACTIONS(1374),
        [anon_sym_return] = ACTIONS(1377),
        [anon_sym_del] = ACTIONS(1377),
        [sym_pass_statement] = ACTIONS(1377),
        [sym_break_statement] = ACTIONS(1377),
        [sym_continue_statement] = ACTIONS(1377),
        [anon_sym_if] = ACTIONS(1377),
        [anon_sym_COLON] = ACTIONS(1374),
        [anon_sym_elif] = ACTIONS(1377),
        [anon_sym_else] = ACTIONS(1377),
        [anon_sym_for] = ACTIONS(1377),
        [anon_sym_in] = ACTIONS(1377),
        [anon_sym_while] = ACTIONS(1377),
        [anon_sym_try] = ACTIONS(1377),
        [anon_sym_except] = ACTIONS(1377),
        [anon_sym_as] = ACTIONS(1377),
        [anon_sym_finally] = ACTIONS(1377),
        [anon_sym_with] = ACTIONS(1377),
        [anon_sym_def] = ACTIONS(1377),
        [anon_sym_LPAREN] = ACTIONS(1374),
        [anon_sym_RPAREN] = ACTIONS(1374),
        [anon_sym_class] = ACTIONS(1377),
        [anon_sym_AT] = ACTIONS(1374),
        [anon_sym_PLUS] = ACTIONS(1374),
        [anon_sym_LBRACK] = ACTIONS(1374),
        [anon_sym_RBRACK] = ACTIONS(1374),
        [sym_number] = ACTIONS(1377),
        [sym_identifier] = ACTIONS(1380),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1374),
        [sym__dedent] = ACTIONS(1374),
    },
    [470] = {
        [anon_sym_COMMA] = ACTIONS(1383),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(1385),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [471] = {
        [anon_sym_COMMA] = ACTIONS(1383),
        [anon_sym_RPAREN] = ACTIONS(1385),
        [sym_comment] = ACTIONS(69),
    },
    [472] = {
        [aux_sym_call_repeat2] = STATE(476),
        [anon_sym_COMMA] = ACTIONS(1387),
        [anon_sym_RPAREN] = ACTIONS(1385),
        [sym_comment] = ACTIONS(69),
    },
    [473] = {
        [anon_sym_RPAREN] = ACTIONS(1385),
        [sym_comment] = ACTIONS(69),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_print] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_return] = ACTIONS(321),
        [anon_sym_del] = ACTIONS(321),
        [sym_pass_statement] = ACTIONS(321),
        [sym_break_statement] = ACTIONS(321),
        [sym_continue_statement] = ACTIONS(321),
        [anon_sym_if] = ACTIONS(321),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_elif] = ACTIONS(321),
        [anon_sym_else] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_while] = ACTIONS(321),
        [anon_sym_try] = ACTIONS(321),
        [anon_sym_except] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_finally] = ACTIONS(321),
        [anon_sym_with] = ACTIONS(321),
        [anon_sym_def] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(267),
        [sym_number] = ACTIONS(321),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(267),
        [sym__dedent] = ACTIONS(267),
    },
    [475] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(481),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [476] = {
        [anon_sym_COMMA] = ACTIONS(1389),
        [anon_sym_RPAREN] = ACTIONS(1391),
        [sym_comment] = ACTIONS(69),
    },
    [477] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(479),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_return] = ACTIONS(329),
        [anon_sym_del] = ACTIONS(329),
        [sym_pass_statement] = ACTIONS(329),
        [sym_break_statement] = ACTIONS(329),
        [sym_continue_statement] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(273),
        [anon_sym_elif] = ACTIONS(329),
        [anon_sym_else] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(329),
        [anon_sym_as] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(273),
        [anon_sym_RPAREN] = ACTIONS(273),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_AT] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(273),
        [anon_sym_LBRACK] = ACTIONS(273),
        [anon_sym_RBRACK] = ACTIONS(273),
        [sym_number] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [479] = {
        [anon_sym_RPAREN] = ACTIONS(1393),
        [sym_comment] = ACTIONS(69),
    },
    [480] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_del] = ACTIONS(335),
        [sym_pass_statement] = ACTIONS(335),
        [sym_break_statement] = ACTIONS(335),
        [sym_continue_statement] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_elif] = ACTIONS(335),
        [anon_sym_else] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_in] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_except] = ACTIONS(335),
        [anon_sym_as] = ACTIONS(335),
        [anon_sym_finally] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [481] = {
        [anon_sym_RPAREN] = ACTIONS(1395),
        [sym_comment] = ACTIONS(69),
    },
    [482] = {
        [ts_builtin_sym_end] = ACTIONS(285),
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_print] = ACTIONS(341),
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_return] = ACTIONS(341),
        [anon_sym_del] = ACTIONS(341),
        [sym_pass_statement] = ACTIONS(341),
        [sym_break_statement] = ACTIONS(341),
        [sym_continue_statement] = ACTIONS(341),
        [anon_sym_if] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(285),
        [anon_sym_elif] = ACTIONS(341),
        [anon_sym_else] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_while] = ACTIONS(341),
        [anon_sym_try] = ACTIONS(341),
        [anon_sym_except] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
        [anon_sym_finally] = ACTIONS(341),
        [anon_sym_with] = ACTIONS(341),
        [anon_sym_def] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_class] = ACTIONS(341),
        [anon_sym_AT] = ACTIONS(285),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [sym_number] = ACTIONS(341),
        [sym_identifier] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(285),
        [sym__dedent] = ACTIONS(285),
    },
    [483] = {
        [anon_sym_RPAREN] = ACTIONS(1391),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(289),
        [sym_number] = ACTIONS(287),
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(69),
    },
    [484] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(1397),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [485] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_return] = ACTIONS(227),
        [anon_sym_del] = ACTIONS(227),
        [sym_pass_statement] = ACTIONS(227),
        [sym_break_statement] = ACTIONS(227),
        [sym_continue_statement] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_COLON] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(227),
        [anon_sym_else] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_in] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_as] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [486] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_return] = ACTIONS(235),
        [anon_sym_del] = ACTIONS(235),
        [sym_pass_statement] = ACTIONS(235),
        [sym_break_statement] = ACTIONS(235),
        [sym_continue_statement] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(235),
        [anon_sym_else] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [487] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_print] = ACTIONS(175),
        [anon_sym_return] = ACTIONS(175),
        [anon_sym_del] = ACTIONS(175),
        [sym_pass_statement] = ACTIONS(175),
        [sym_break_statement] = ACTIONS(175),
        [sym_continue_statement] = ACTIONS(175),
        [anon_sym_if] = ACTIONS(175),
        [anon_sym_for] = ACTIONS(175),
        [anon_sym_while] = ACTIONS(175),
        [anon_sym_try] = ACTIONS(175),
        [anon_sym_with] = ACTIONS(175),
        [anon_sym_def] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(173),
        [sym_number] = ACTIONS(175),
        [sym_identifier] = ACTIONS(177),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(173),
        [sym__dedent] = ACTIONS(173),
    },
    [488] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(493),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [489] = {
        [sym__expression] = STATE(525),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [490] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(516),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [491] = {
        [sym_expression_list] = STATE(515),
        [sym__expression] = STATE(516),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [492] = {
        [ts_builtin_sym_end] = ACTIONS(429),
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_print] = ACTIONS(431),
        [anon_sym_return] = ACTIONS(431),
        [anon_sym_del] = ACTIONS(431),
        [sym_pass_statement] = ACTIONS(431),
        [sym_break_statement] = ACTIONS(431),
        [sym_continue_statement] = ACTIONS(431),
        [anon_sym_if] = ACTIONS(431),
        [anon_sym_elif] = ACTIONS(431),
        [anon_sym_else] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_while] = ACTIONS(431),
        [anon_sym_try] = ACTIONS(431),
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [anon_sym_with] = ACTIONS(431),
        [anon_sym_def] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(431),
        [anon_sym_AT] = ACTIONS(429),
        [sym_number] = ACTIONS(431),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(429),
        [sym__dedent] = ACTIONS(429),
    },
    [493] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(667),
        [sym__dedent] = ACTIONS(667),
    },
    [494] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(1407),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [495] = {
        [sym__expression] = STATE(502),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(503),
        [sym_list_splat_argument] = STATE(504),
        [sym_dictionary_splat_argument] = STATE(505),
        [aux_sym_call_repeat1] = STATE(464),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [496] = {
        [sym__expression] = STATE(501),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [497] = {
        [aux_sym_subscript_repeat1] = STATE(463),
        [anon_sym_COMMA] = ACTIONS(1411),
        [anon_sym_RBRACK] = ACTIONS(1413),
        [sym_comment] = ACTIONS(69),
    },
    [498] = {
        [aux_sym_subscript_repeat1] = STATE(463),
        [anon_sym_COMMA] = ACTIONS(1411),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(1413),
        [sym_comment] = ACTIONS(69),
    },
    [499] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(1357),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(215),
        [anon_sym_del] = ACTIONS(215),
        [sym_pass_statement] = ACTIONS(215),
        [sym_break_statement] = ACTIONS(215),
        [sym_continue_statement] = ACTIONS(215),
        [anon_sym_if] = ACTIONS(215),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_elif] = ACTIONS(215),
        [anon_sym_else] = ACTIONS(215),
        [anon_sym_for] = ACTIONS(215),
        [anon_sym_in] = ACTIONS(215),
        [anon_sym_while] = ACTIONS(215),
        [anon_sym_try] = ACTIONS(215),
        [anon_sym_except] = ACTIONS(215),
        [anon_sym_as] = ACTIONS(215),
        [anon_sym_finally] = ACTIONS(215),
        [anon_sym_with] = ACTIONS(215),
        [anon_sym_def] = ACTIONS(215),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_RPAREN] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_number] = ACTIONS(215),
        [sym_identifier] = ACTIONS(217),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(213),
        [sym__dedent] = ACTIONS(213),
    },
    [501] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1415),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [502] = {
        [anon_sym_COMMA] = ACTIONS(1418),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(1420),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [503] = {
        [anon_sym_COMMA] = ACTIONS(1418),
        [anon_sym_RPAREN] = ACTIONS(1420),
        [sym_comment] = ACTIONS(69),
    },
    [504] = {
        [aux_sym_call_repeat2] = STATE(508),
        [anon_sym_COMMA] = ACTIONS(1422),
        [anon_sym_RPAREN] = ACTIONS(1420),
        [sym_comment] = ACTIONS(69),
    },
    [505] = {
        [anon_sym_RPAREN] = ACTIONS(1420),
        [sym_comment] = ACTIONS(69),
    },
    [506] = {
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_return] = ACTIONS(345),
        [anon_sym_del] = ACTIONS(345),
        [sym_pass_statement] = ACTIONS(345),
        [sym_break_statement] = ACTIONS(345),
        [sym_continue_statement] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_elif] = ACTIONS(345),
        [anon_sym_else] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_in] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [anon_sym_except] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(345),
        [anon_sym_finally] = ACTIONS(345),
        [anon_sym_with] = ACTIONS(345),
        [anon_sym_def] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(345),
        [anon_sym_AT] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(291),
        [sym_number] = ACTIONS(345),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(291),
        [sym__dedent] = ACTIONS(291),
    },
    [507] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(510),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [508] = {
        [anon_sym_COMMA] = ACTIONS(1424),
        [anon_sym_RPAREN] = ACTIONS(1385),
        [sym_comment] = ACTIONS(69),
    },
    [509] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(74),
        [sym_dictionary_splat_argument] = STATE(481),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [510] = {
        [anon_sym_RPAREN] = ACTIONS(1391),
        [sym_comment] = ACTIONS(69),
    },
    [511] = {
        [anon_sym_RPAREN] = ACTIONS(1385),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [sym_number] = ACTIONS(295),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [512] = {
        [ts_builtin_sym_end] = ACTIONS(447),
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_print] = ACTIONS(449),
        [anon_sym_return] = ACTIONS(449),
        [anon_sym_del] = ACTIONS(449),
        [sym_pass_statement] = ACTIONS(449),
        [sym_break_statement] = ACTIONS(449),
        [sym_continue_statement] = ACTIONS(449),
        [anon_sym_if] = ACTIONS(449),
        [anon_sym_elif] = ACTIONS(449),
        [anon_sym_else] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_while] = ACTIONS(449),
        [anon_sym_try] = ACTIONS(449),
        [anon_sym_except] = ACTIONS(449),
        [anon_sym_finally] = ACTIONS(449),
        [anon_sym_with] = ACTIONS(449),
        [anon_sym_def] = ACTIONS(449),
        [anon_sym_class] = ACTIONS(449),
        [anon_sym_AT] = ACTIONS(447),
        [sym_number] = ACTIONS(449),
        [sym_identifier] = ACTIONS(451),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(447),
        [sym__dedent] = ACTIONS(447),
    },
    [513] = {
        [sym__statement] = STATE(165),
        [sym__simple_statement] = STATE(158),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(159),
        [sym_if_statement] = STATE(160),
        [sym_for_statement] = STATE(160),
        [sym_while_statement] = STATE(160),
        [sym_try_statement] = STATE(160),
        [sym_with_statement] = STATE(160),
        [sym_function_definition] = STATE(160),
        [sym_class_definition] = STATE(160),
        [sym_decorated_definition] = STATE(160),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(162),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(417),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(423),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(101),
        [sym_number] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(1325),
    },
    [514] = {
        [ts_builtin_sym_end] = ACTIONS(461),
        [anon_sym_SEMI] = ACTIONS(461),
        [anon_sym_print] = ACTIONS(463),
        [anon_sym_return] = ACTIONS(463),
        [anon_sym_del] = ACTIONS(463),
        [sym_pass_statement] = ACTIONS(463),
        [sym_break_statement] = ACTIONS(463),
        [sym_continue_statement] = ACTIONS(463),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_elif] = ACTIONS(463),
        [anon_sym_else] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_while] = ACTIONS(463),
        [anon_sym_try] = ACTIONS(463),
        [anon_sym_except] = ACTIONS(463),
        [anon_sym_finally] = ACTIONS(463),
        [anon_sym_with] = ACTIONS(463),
        [anon_sym_def] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_AT] = ACTIONS(461),
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(465),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(461),
        [sym__dedent] = ACTIONS(461),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_print] = ACTIONS(533),
        [anon_sym_return] = ACTIONS(533),
        [anon_sym_del] = ACTIONS(533),
        [sym_pass_statement] = ACTIONS(533),
        [sym_break_statement] = ACTIONS(533),
        [sym_continue_statement] = ACTIONS(533),
        [anon_sym_if] = ACTIONS(533),
        [anon_sym_elif] = ACTIONS(533),
        [anon_sym_else] = ACTIONS(533),
        [anon_sym_for] = ACTIONS(533),
        [anon_sym_while] = ACTIONS(533),
        [anon_sym_try] = ACTIONS(533),
        [anon_sym_except] = ACTIONS(533),
        [anon_sym_finally] = ACTIONS(533),
        [anon_sym_with] = ACTIONS(533),
        [anon_sym_def] = ACTIONS(533),
        [anon_sym_class] = ACTIONS(533),
        [anon_sym_AT] = ACTIONS(535),
        [sym_number] = ACTIONS(533),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(535),
        [sym__dedent] = ACTIONS(535),
    },
    [516] = {
        [aux_sym_print_statement_repeat1] = STATE(519),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1426),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(1428),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [517] = {
        [sym__expression] = STATE(523),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [518] = {
        [sym__expression] = STATE(522),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [519] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(1430),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [520] = {
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [521] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1428),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [522] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1432),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [523] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1428),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [524] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_SEMI] = ACTIONS(561),
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(559),
        [anon_sym_del] = ACTIONS(559),
        [sym_pass_statement] = ACTIONS(559),
        [sym_break_statement] = ACTIONS(559),
        [sym_continue_statement] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_elif] = ACTIONS(559),
        [anon_sym_else] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_except] = ACTIONS(559),
        [anon_sym_finally] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(561),
        [sym_number] = ACTIONS(559),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(561),
        [sym__dedent] = ACTIONS(561),
    },
    [525] = {
        [aux_sym_print_statement_repeat1] = STATE(526),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(1426),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(1428),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [526] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(1430),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
    [527] = {
        [sym_finally_clause] = STATE(530),
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_SEMI] = ACTIONS(723),
        [anon_sym_print] = ACTIONS(721),
        [anon_sym_return] = ACTIONS(721),
        [anon_sym_del] = ACTIONS(721),
        [sym_pass_statement] = ACTIONS(721),
        [sym_break_statement] = ACTIONS(721),
        [sym_continue_statement] = ACTIONS(721),
        [anon_sym_if] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(721),
        [anon_sym_while] = ACTIONS(721),
        [anon_sym_try] = ACTIONS(721),
        [anon_sym_finally] = ACTIONS(1087),
        [anon_sym_with] = ACTIONS(721),
        [anon_sym_def] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_AT] = ACTIONS(723),
        [sym_number] = ACTIONS(721),
        [sym_identifier] = ACTIONS(725),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(723),
        [sym__dedent] = ACTIONS(723),
    },
    [528] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(727),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_except] = ACTIONS(727),
        [anon_sym_finally] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(729),
        [sym__dedent] = ACTIONS(729),
    },
    [529] = {
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_SEMI] = ACTIONS(723),
        [anon_sym_print] = ACTIONS(721),
        [anon_sym_return] = ACTIONS(721),
        [anon_sym_del] = ACTIONS(721),
        [sym_pass_statement] = ACTIONS(721),
        [sym_break_statement] = ACTIONS(721),
        [sym_continue_statement] = ACTIONS(721),
        [anon_sym_if] = ACTIONS(721),
        [anon_sym_for] = ACTIONS(721),
        [anon_sym_while] = ACTIONS(721),
        [anon_sym_try] = ACTIONS(721),
        [anon_sym_with] = ACTIONS(721),
        [anon_sym_def] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_AT] = ACTIONS(723),
        [sym_number] = ACTIONS(721),
        [sym_identifier] = ACTIONS(725),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(723),
        [sym__dedent] = ACTIONS(723),
    },
    [530] = {
        [ts_builtin_sym_end] = ACTIONS(735),
        [anon_sym_SEMI] = ACTIONS(735),
        [anon_sym_print] = ACTIONS(733),
        [anon_sym_return] = ACTIONS(733),
        [anon_sym_del] = ACTIONS(733),
        [sym_pass_statement] = ACTIONS(733),
        [sym_break_statement] = ACTIONS(733),
        [sym_continue_statement] = ACTIONS(733),
        [anon_sym_if] = ACTIONS(733),
        [anon_sym_for] = ACTIONS(733),
        [anon_sym_while] = ACTIONS(733),
        [anon_sym_try] = ACTIONS(733),
        [anon_sym_with] = ACTIONS(733),
        [anon_sym_def] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(733),
        [anon_sym_AT] = ACTIONS(735),
        [sym_number] = ACTIONS(733),
        [sym_identifier] = ACTIONS(737),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(735),
        [sym__dedent] = ACTIONS(735),
    },
    [531] = {
        [anon_sym_COLON] = ACTIONS(1435),
        [sym_comment] = ACTIONS(69),
    },
    [532] = {
        [ts_builtin_sym_end] = ACTIONS(825),
        [anon_sym_SEMI] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_elif] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(825),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(825),
        [sym__dedent] = ACTIONS(825),
    },
    [533] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(831),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(831),
        [sym__dedent] = ACTIONS(831),
    },
    [534] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(535),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [535] = {
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_SEMI] = ACTIONS(741),
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_return] = ACTIONS(739),
        [anon_sym_del] = ACTIONS(739),
        [sym_pass_statement] = ACTIONS(739),
        [sym_break_statement] = ACTIONS(739),
        [sym_continue_statement] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_finally] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(739),
        [anon_sym_AT] = ACTIONS(741),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(741),
        [sym__dedent] = ACTIONS(741),
    },
    [536] = {
        [sym__expression] = STATE(537),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [537] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_in] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_except] = ACTIONS(551),
        [anon_sym_finally] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1437),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [538] = {
        [sym__expression] = STATE(539),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [539] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1439),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [540] = {
        [ts_builtin_sym_end] = ACTIONS(183),
        [anon_sym_SEMI] = ACTIONS(183),
        [anon_sym_print] = ACTIONS(185),
        [anon_sym_return] = ACTIONS(185),
        [anon_sym_del] = ACTIONS(185),
        [sym_pass_statement] = ACTIONS(185),
        [sym_break_statement] = ACTIONS(185),
        [sym_continue_statement] = ACTIONS(185),
        [anon_sym_if] = ACTIONS(185),
        [anon_sym_for] = ACTIONS(185),
        [anon_sym_while] = ACTIONS(185),
        [anon_sym_try] = ACTIONS(185),
        [anon_sym_with] = ACTIONS(185),
        [anon_sym_def] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(185),
        [anon_sym_AT] = ACTIONS(183),
        [sym_number] = ACTIONS(185),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(183),
        [sym__dedent] = ACTIONS(183),
    },
    [541] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1442),
    },
    [542] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_return] = ACTIONS(353),
        [anon_sym_del] = ACTIONS(353),
        [sym_pass_statement] = ACTIONS(353),
        [sym_break_statement] = ACTIONS(353),
        [sym_continue_statement] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(351),
        [sym_number] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [543] = {
        [ts_builtin_sym_end] = ACTIONS(937),
        [anon_sym_SEMI] = ACTIONS(937),
        [anon_sym_print] = ACTIONS(943),
        [anon_sym_COMMA] = ACTIONS(937),
        [anon_sym_return] = ACTIONS(943),
        [anon_sym_del] = ACTIONS(943),
        [sym_pass_statement] = ACTIONS(943),
        [sym_break_statement] = ACTIONS(943),
        [sym_continue_statement] = ACTIONS(943),
        [anon_sym_if] = ACTIONS(943),
        [anon_sym_COLON] = ACTIONS(937),
        [anon_sym_elif] = ACTIONS(943),
        [anon_sym_else] = ACTIONS(943),
        [anon_sym_for] = ACTIONS(943),
        [anon_sym_in] = ACTIONS(943),
        [anon_sym_while] = ACTIONS(943),
        [anon_sym_try] = ACTIONS(943),
        [anon_sym_except] = ACTIONS(943),
        [anon_sym_as] = ACTIONS(943),
        [anon_sym_finally] = ACTIONS(943),
        [anon_sym_with] = ACTIONS(943),
        [anon_sym_def] = ACTIONS(943),
        [anon_sym_LPAREN] = ACTIONS(937),
        [anon_sym_RPAREN] = ACTIONS(937),
        [anon_sym_class] = ACTIONS(943),
        [anon_sym_AT] = ACTIONS(937),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_LBRACK] = ACTIONS(937),
        [anon_sym_RBRACK] = ACTIONS(937),
        [sym_number] = ACTIONS(943),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(937),
        [sym__dedent] = ACTIONS(937),
    },
    [544] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(546),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [545] = {
        [ts_builtin_sym_end] = ACTIONS(1444),
        [anon_sym_SEMI] = ACTIONS(1444),
        [anon_sym_print] = ACTIONS(1447),
        [anon_sym_COMMA] = ACTIONS(1444),
        [anon_sym_return] = ACTIONS(1447),
        [anon_sym_del] = ACTIONS(1447),
        [sym_pass_statement] = ACTIONS(1447),
        [sym_break_statement] = ACTIONS(1447),
        [sym_continue_statement] = ACTIONS(1447),
        [anon_sym_if] = ACTIONS(1447),
        [anon_sym_COLON] = ACTIONS(1444),
        [anon_sym_elif] = ACTIONS(1447),
        [anon_sym_else] = ACTIONS(1447),
        [anon_sym_for] = ACTIONS(1447),
        [anon_sym_in] = ACTIONS(1447),
        [anon_sym_while] = ACTIONS(1447),
        [anon_sym_try] = ACTIONS(1447),
        [anon_sym_except] = ACTIONS(1447),
        [anon_sym_as] = ACTIONS(1447),
        [anon_sym_finally] = ACTIONS(1447),
        [anon_sym_with] = ACTIONS(1447),
        [anon_sym_def] = ACTIONS(1447),
        [anon_sym_LPAREN] = ACTIONS(1444),
        [anon_sym_RPAREN] = ACTIONS(1444),
        [anon_sym_class] = ACTIONS(1447),
        [anon_sym_AT] = ACTIONS(1444),
        [anon_sym_PLUS] = ACTIONS(1444),
        [anon_sym_LBRACK] = ACTIONS(1444),
        [anon_sym_RBRACK] = ACTIONS(1444),
        [sym_number] = ACTIONS(1447),
        [sym_identifier] = ACTIONS(1450),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1444),
        [sym__dedent] = ACTIONS(1444),
    },
    [546] = {
        [anon_sym_RPAREN] = ACTIONS(1453),
        [sym_comment] = ACTIONS(69),
    },
    [547] = {
        [ts_builtin_sym_end] = ACTIONS(1455),
        [anon_sym_SEMI] = ACTIONS(1455),
        [anon_sym_print] = ACTIONS(1458),
        [anon_sym_COMMA] = ACTIONS(1455),
        [anon_sym_return] = ACTIONS(1458),
        [anon_sym_del] = ACTIONS(1458),
        [sym_pass_statement] = ACTIONS(1458),
        [sym_break_statement] = ACTIONS(1458),
        [sym_continue_statement] = ACTIONS(1458),
        [anon_sym_if] = ACTIONS(1458),
        [anon_sym_COLON] = ACTIONS(1455),
        [anon_sym_elif] = ACTIONS(1458),
        [anon_sym_else] = ACTIONS(1458),
        [anon_sym_for] = ACTIONS(1458),
        [anon_sym_in] = ACTIONS(1458),
        [anon_sym_while] = ACTIONS(1458),
        [anon_sym_try] = ACTIONS(1458),
        [anon_sym_except] = ACTIONS(1458),
        [anon_sym_as] = ACTIONS(1458),
        [anon_sym_finally] = ACTIONS(1458),
        [anon_sym_with] = ACTIONS(1458),
        [anon_sym_def] = ACTIONS(1458),
        [anon_sym_LPAREN] = ACTIONS(1455),
        [anon_sym_RPAREN] = ACTIONS(1455),
        [anon_sym_class] = ACTIONS(1458),
        [anon_sym_AT] = ACTIONS(1455),
        [anon_sym_PLUS] = ACTIONS(1455),
        [anon_sym_LBRACK] = ACTIONS(1455),
        [anon_sym_RBRACK] = ACTIONS(1455),
        [sym_number] = ACTIONS(1458),
        [sym_identifier] = ACTIONS(1461),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1455),
        [sym__dedent] = ACTIONS(1455),
    },
    [548] = {
        [anon_sym_RPAREN] = ACTIONS(1361),
        [anon_sym_STAR] = ACTIONS(1464),
        [anon_sym_STAR_STAR] = ACTIONS(1467),
        [sym_number] = ACTIONS(1464),
        [sym_identifier] = ACTIONS(1464),
        [sym_comment] = ACTIONS(69),
    },
    [549] = {
        [sym__expression] = STATE(558),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_RPAREN] = ACTIONS(1361),
        [anon_sym_STAR] = ACTIONS(1464),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(1357),
        [anon_sym_STAR_STAR] = ACTIONS(1467),
        [sym_number] = ACTIONS(903),
        [sym_identifier] = ACTIONS(903),
        [sym_comment] = ACTIONS(69),
    },
    [550] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(552),
        [sym__expression] = STATE(553),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(913),
        [anon_sym_return] = ACTIONS(915),
        [anon_sym_del] = ACTIONS(917),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [551] = {
        [ts_builtin_sym_end] = ACTIONS(1444),
        [anon_sym_SEMI] = ACTIONS(1444),
        [anon_sym_print] = ACTIONS(1447),
        [anon_sym_COMMA] = ACTIONS(1444),
        [anon_sym_return] = ACTIONS(1447),
        [anon_sym_del] = ACTIONS(1447),
        [sym_pass_statement] = ACTIONS(1447),
        [sym_break_statement] = ACTIONS(1447),
        [sym_continue_statement] = ACTIONS(1447),
        [anon_sym_if] = ACTIONS(1447),
        [anon_sym_COLON] = ACTIONS(1444),
        [anon_sym_elif] = ACTIONS(1447),
        [anon_sym_else] = ACTIONS(1447),
        [anon_sym_for] = ACTIONS(1447),
        [anon_sym_in] = ACTIONS(1447),
        [anon_sym_while] = ACTIONS(1447),
        [anon_sym_try] = ACTIONS(1447),
        [anon_sym_except] = ACTIONS(1447),
        [anon_sym_as] = ACTIONS(1447),
        [anon_sym_finally] = ACTIONS(1447),
        [anon_sym_with] = ACTIONS(1447),
        [anon_sym_def] = ACTIONS(1447),
        [anon_sym_LPAREN] = ACTIONS(1444),
        [anon_sym_RPAREN] = ACTIONS(1444),
        [anon_sym_class] = ACTIONS(1447),
        [anon_sym_AT] = ACTIONS(1444),
        [anon_sym_PLUS] = ACTIONS(1444),
        [anon_sym_LBRACK] = ACTIONS(1444),
        [anon_sym_RBRACK] = ACTIONS(1444),
        [sym_number] = ACTIONS(1447),
        [sym_identifier] = ACTIONS(1450),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1470),
        [sym__dedent] = ACTIONS(1444),
    },
    [552] = {
        [sym_elif_clause] = STATE(556),
        [sym_else_clause] = STATE(557),
        [aux_sym_if_statement_repeat1] = STATE(459),
        [ts_builtin_sym_end] = ACTIONS(1474),
        [anon_sym_SEMI] = ACTIONS(1474),
        [anon_sym_print] = ACTIONS(1480),
        [anon_sym_return] = ACTIONS(1480),
        [anon_sym_del] = ACTIONS(1480),
        [sym_pass_statement] = ACTIONS(1480),
        [sym_break_statement] = ACTIONS(1480),
        [sym_continue_statement] = ACTIONS(1480),
        [anon_sym_if] = ACTIONS(1480),
        [anon_sym_elif] = ACTIONS(1174),
        [anon_sym_else] = ACTIONS(1177),
        [anon_sym_for] = ACTIONS(1480),
        [anon_sym_while] = ACTIONS(1480),
        [anon_sym_try] = ACTIONS(1480),
        [anon_sym_except] = ACTIONS(1486),
        [anon_sym_finally] = ACTIONS(1486),
        [anon_sym_with] = ACTIONS(1480),
        [anon_sym_def] = ACTIONS(1480),
        [anon_sym_class] = ACTIONS(1480),
        [anon_sym_AT] = ACTIONS(1474),
        [sym_number] = ACTIONS(1480),
        [sym_identifier] = ACTIONS(1489),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1474),
        [sym__dedent] = ACTIONS(1474),
    },
    [553] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_elif] = ACTIONS(155),
        [anon_sym_else] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_except] = ACTIONS(155),
        [anon_sym_finally] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(1495),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [554] = {
        [sym__expression] = STATE(555),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [555] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1497),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [556] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_print] = ACTIONS(811),
        [anon_sym_return] = ACTIONS(811),
        [anon_sym_del] = ACTIONS(811),
        [sym_pass_statement] = ACTIONS(811),
        [sym_break_statement] = ACTIONS(811),
        [sym_continue_statement] = ACTIONS(811),
        [anon_sym_if] = ACTIONS(811),
        [anon_sym_elif] = ACTIONS(811),
        [anon_sym_else] = ACTIONS(811),
        [anon_sym_for] = ACTIONS(811),
        [anon_sym_while] = ACTIONS(811),
        [anon_sym_try] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(811),
        [anon_sym_def] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_AT] = ACTIONS(813),
        [sym_number] = ACTIONS(811),
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(813),
        [sym__dedent] = ACTIONS(813),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(1500),
        [anon_sym_SEMI] = ACTIONS(1500),
        [anon_sym_print] = ACTIONS(1503),
        [anon_sym_return] = ACTIONS(1503),
        [anon_sym_del] = ACTIONS(1503),
        [sym_pass_statement] = ACTIONS(1503),
        [sym_break_statement] = ACTIONS(1503),
        [sym_continue_statement] = ACTIONS(1503),
        [anon_sym_if] = ACTIONS(1503),
        [anon_sym_for] = ACTIONS(1503),
        [anon_sym_while] = ACTIONS(1503),
        [anon_sym_try] = ACTIONS(1503),
        [anon_sym_with] = ACTIONS(1503),
        [anon_sym_def] = ACTIONS(1503),
        [anon_sym_class] = ACTIONS(1503),
        [anon_sym_AT] = ACTIONS(1500),
        [sym_number] = ACTIONS(1503),
        [sym_identifier] = ACTIONS(1506),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1500),
        [sym__dedent] = ACTIONS(1500),
    },
    [558] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(1509),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_COLON] = ACTIONS(1512),
        [anon_sym_elif] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_in] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_except] = ACTIONS(555),
        [anon_sym_finally] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1515),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_RBRACK] = ACTIONS(249),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [559] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(565),
        [sym__expression] = STATE(566),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1517),
        [anon_sym_return] = ACTIONS(1519),
        [anon_sym_del] = ACTIONS(1521),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [560] = {
        [sym__expression] = STATE(561),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1523),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [anon_sym_RBRACK] = ACTIONS(251),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [562] = {
        [sym__expression] = STATE(577),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [563] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(569),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [564] = {
        [sym_expression_list] = STATE(515),
        [sym__expression] = STATE(569),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [565] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_except] = ACTIONS(757),
        [anon_sym_finally] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(759),
        [sym__dedent] = ACTIONS(759),
    },
    [566] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_else] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_except] = ACTIONS(155),
        [anon_sym_finally] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(1526),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [567] = {
        [sym__expression] = STATE(568),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1528),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [569] = {
        [aux_sym_print_statement_repeat1] = STATE(572),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1531),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_else] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_except] = ACTIONS(539),
        [anon_sym_finally] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [570] = {
        [sym__expression] = STATE(576),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [571] = {
        [sym__expression] = STATE(575),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [572] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(1535),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_else] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_except] = ACTIONS(545),
        [anon_sym_finally] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [573] = {
        [sym__expression] = STATE(574),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [574] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_except] = ACTIONS(551),
        [anon_sym_finally] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [575] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1537),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [576] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_except] = ACTIONS(555),
        [anon_sym_finally] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [577] = {
        [aux_sym_print_statement_repeat1] = STATE(578),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(1531),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_else] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_except] = ACTIONS(565),
        [anon_sym_finally] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [578] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(1535),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
    [579] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(586),
        [sym__expression] = STATE(587),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1540),
        [anon_sym_return] = ACTIONS(1542),
        [anon_sym_del] = ACTIONS(1544),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [580] = {
        [anon_sym_COLON] = ACTIONS(1546),
        [sym_comment] = ACTIONS(69),
    },
    [581] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(582),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [582] = {
        [ts_builtin_sym_end] = ACTIONS(435),
        [anon_sym_SEMI] = ACTIONS(435),
        [anon_sym_print] = ACTIONS(437),
        [anon_sym_return] = ACTIONS(437),
        [anon_sym_del] = ACTIONS(437),
        [sym_pass_statement] = ACTIONS(437),
        [sym_break_statement] = ACTIONS(437),
        [sym_continue_statement] = ACTIONS(437),
        [anon_sym_if] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_while] = ACTIONS(437),
        [anon_sym_try] = ACTIONS(437),
        [anon_sym_with] = ACTIONS(437),
        [anon_sym_def] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(437),
        [anon_sym_AT] = ACTIONS(435),
        [sym_number] = ACTIONS(437),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(435),
        [sym__dedent] = ACTIONS(435),
    },
    [583] = {
        [sym__expression] = STATE(599),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [584] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(591),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [585] = {
        [sym_expression_list] = STATE(515),
        [sym__expression] = STATE(591),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [586] = {
        [sym_else_clause] = STATE(590),
        [ts_builtin_sym_end] = ACTIONS(791),
        [anon_sym_SEMI] = ACTIONS(791),
        [anon_sym_print] = ACTIONS(789),
        [anon_sym_return] = ACTIONS(789),
        [anon_sym_del] = ACTIONS(789),
        [sym_pass_statement] = ACTIONS(789),
        [sym_break_statement] = ACTIONS(789),
        [sym_continue_statement] = ACTIONS(789),
        [anon_sym_if] = ACTIONS(789),
        [anon_sym_else] = ACTIONS(1343),
        [anon_sym_for] = ACTIONS(789),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(789),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(791),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(791),
        [sym__dedent] = ACTIONS(791),
    },
    [587] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_else] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(1548),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [588] = {
        [sym__expression] = STATE(589),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [589] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1550),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [590] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(797),
        [sym__dedent] = ACTIONS(797),
    },
    [591] = {
        [aux_sym_print_statement_repeat1] = STATE(594),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1553),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_else] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(1555),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [592] = {
        [sym__expression] = STATE(598),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [593] = {
        [sym__expression] = STATE(597),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [594] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(1557),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_else] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [595] = {
        [sym__expression] = STATE(596),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [596] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1555),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [597] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1559),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [598] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1555),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [599] = {
        [aux_sym_print_statement_repeat1] = STATE(600),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(1553),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_else] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(1555),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [600] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(1557),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
    [601] = {
        [ts_builtin_sym_end] = ACTIONS(1562),
        [anon_sym_SEMI] = ACTIONS(1562),
        [anon_sym_print] = ACTIONS(1566),
        [anon_sym_return] = ACTIONS(1566),
        [anon_sym_del] = ACTIONS(1566),
        [sym_pass_statement] = ACTIONS(1566),
        [sym_break_statement] = ACTIONS(1566),
        [sym_continue_statement] = ACTIONS(1566),
        [anon_sym_if] = ACTIONS(1566),
        [anon_sym_for] = ACTIONS(1566),
        [anon_sym_while] = ACTIONS(1566),
        [anon_sym_try] = ACTIONS(1566),
        [anon_sym_with] = ACTIONS(1566),
        [anon_sym_def] = ACTIONS(1566),
        [anon_sym_class] = ACTIONS(1566),
        [anon_sym_AT] = ACTIONS(1562),
        [sym_number] = ACTIONS(1566),
        [sym_identifier] = ACTIONS(1570),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1562),
        [sym__dedent] = ACTIONS(1562),
    },
    [602] = {
        [ts_builtin_sym_end] = ACTIONS(703),
        [anon_sym_SEMI] = ACTIONS(703),
        [anon_sym_print] = ACTIONS(701),
        [anon_sym_return] = ACTIONS(701),
        [anon_sym_del] = ACTIONS(701),
        [sym_pass_statement] = ACTIONS(701),
        [sym_break_statement] = ACTIONS(701),
        [sym_continue_statement] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(701),
        [anon_sym_else] = ACTIONS(701),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_while] = ACTIONS(701),
        [anon_sym_try] = ACTIONS(701),
        [anon_sym_except] = ACTIONS(701),
        [anon_sym_finally] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(701),
        [anon_sym_def] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_AT] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(703),
        [sym__dedent] = ACTIONS(703),
    },
    [603] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
        [sym__dedent] = ACTIONS(709),
    },
    [604] = {
        [anon_sym_COLON] = ACTIONS(1574),
        [sym_comment] = ACTIONS(69),
    },
    [605] = {
        [sym_dictionary_splat_parameter] = STATE(607),
        [anon_sym_STAR] = ACTIONS(623),
        [sym_comment] = ACTIONS(69),
    },
    [606] = {
        [anon_sym_COLON] = ACTIONS(1579),
        [sym_comment] = ACTIONS(69),
    },
    [607] = {
        [anon_sym_RPAREN] = ACTIONS(1582),
        [sym_comment] = ACTIONS(69),
    },
    [608] = {
        [anon_sym_COLON] = ACTIONS(1584),
        [sym_comment] = ACTIONS(69),
    },
    [609] = {
        [anon_sym_RPAREN] = ACTIONS(1587),
        [anon_sym_STAR] = ACTIONS(1589),
        [sym_identifier] = ACTIONS(1592),
        [sym_comment] = ACTIONS(69),
    },
    [610] = {
        [anon_sym_COLON] = ACTIONS(1595),
        [sym_comment] = ACTIONS(69),
    },
    [611] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(612),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [612] = {
        [ts_builtin_sym_end] = ACTIONS(595),
        [anon_sym_SEMI] = ACTIONS(595),
        [anon_sym_print] = ACTIONS(593),
        [anon_sym_return] = ACTIONS(593),
        [anon_sym_del] = ACTIONS(593),
        [sym_pass_statement] = ACTIONS(593),
        [sym_break_statement] = ACTIONS(593),
        [sym_continue_statement] = ACTIONS(593),
        [anon_sym_if] = ACTIONS(593),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(593),
        [anon_sym_with] = ACTIONS(593),
        [anon_sym_def] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_AT] = ACTIONS(595),
        [sym_number] = ACTIONS(593),
        [sym_identifier] = ACTIONS(597),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(595),
        [sym__dedent] = ACTIONS(595),
    },
    [613] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(614),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [614] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(675),
        [sym__dedent] = ACTIONS(675),
    },
    [615] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(619),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [616] = {
        [sym_default_parameter] = STATE(241),
        [sym_list_splat_parameter] = STATE(242),
        [sym_dictionary_splat_parameter] = STATE(243),
        [sym_expression_list] = STATE(618),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [aux_sym_parameters_repeat1] = STATE(244),
        [anon_sym_RPAREN] = ACTIONS(585),
        [anon_sym_STAR] = ACTIONS(587),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1598),
        [sym_comment] = ACTIONS(69),
    },
    [617] = {
        [anon_sym_COMMA] = ACTIONS(1600),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(1603),
        [anon_sym_EQ] = ACTIONS(609),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [618] = {
        [anon_sym_RPAREN] = ACTIONS(1215),
        [sym_comment] = ACTIONS(69),
    },
    [619] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(579),
        [sym__dedent] = ACTIONS(579),
    },
    [620] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1279),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [anon_sym_RBRACK] = ACTIONS(251),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [621] = {
        [anon_sym_LPAREN] = ACTIONS(1606),
        [anon_sym_DOT] = ACTIONS(1606),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1606),
    },
    [622] = {
        [anon_sym_COLON] = ACTIONS(1609),
        [anon_sym_LPAREN] = ACTIONS(1611),
        [sym_comment] = ACTIONS(69),
    },
    [623] = {
        [sym_expression_list] = STATE(618),
        [sym__expression] = STATE(142),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [624] = {
        [anon_sym_COMMA] = ACTIONS(1613),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(1616),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [625] = {
        [anon_sym_COMMA] = ACTIONS(1620),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(1620),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [626] = {
        [sym__expression] = STATE(91),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_STAR] = ACTIONS(601),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1623),
        [sym_comment] = ACTIONS(69),
    },
    [627] = {
        [anon_sym_COMMA] = ACTIONS(1600),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(1603),
        [anon_sym_EQ] = ACTIONS(1021),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [628] = {
        [aux_sym_print_statement_repeat1] = STATE(631),
        [anon_sym_COMMA] = ACTIONS(1625),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(1627),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [629] = {
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_RPAREN] = ACTIONS(1385),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [sym_number] = ACTIONS(1630),
        [sym_identifier] = ACTIONS(1630),
        [sym_comment] = ACTIONS(69),
    },
    [630] = {
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_print] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_return] = ACTIONS(345),
        [anon_sym_del] = ACTIONS(345),
        [sym_pass_statement] = ACTIONS(345),
        [sym_break_statement] = ACTIONS(345),
        [sym_continue_statement] = ACTIONS(345),
        [anon_sym_if] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_elif] = ACTIONS(345),
        [anon_sym_else] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_in] = ACTIONS(345),
        [anon_sym_while] = ACTIONS(345),
        [anon_sym_try] = ACTIONS(345),
        [anon_sym_except] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(345),
        [anon_sym_finally] = ACTIONS(345),
        [anon_sym_with] = ACTIONS(345),
        [anon_sym_def] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(345),
        [anon_sym_AT] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(291),
        [sym_number] = ACTIONS(345),
        [sym_identifier] = ACTIONS(347),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1633),
        [sym__dedent] = ACTIONS(291),
    },
    [631] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(1335),
        [sym_comment] = ACTIONS(69),
    },
    [632] = {
        [anon_sym_COMMA] = ACTIONS(1613),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(1613),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [633] = {
        [sym_parameters] = STATE(446),
        [anon_sym_LPAREN] = ACTIONS(583),
        [sym_comment] = ACTIONS(69),
    },
    [634] = {
        [aux_sym_with_statement_repeat1] = STATE(461),
        [anon_sym_COMMA] = ACTIONS(651),
        [anon_sym_COLON] = ACTIONS(1636),
        [sym_comment] = ACTIONS(69),
    },
    [635] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(636),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1401),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [636] = {
        [ts_builtin_sym_end] = ACTIONS(747),
        [anon_sym_SEMI] = ACTIONS(747),
        [anon_sym_print] = ACTIONS(745),
        [anon_sym_return] = ACTIONS(745),
        [anon_sym_del] = ACTIONS(745),
        [sym_pass_statement] = ACTIONS(745),
        [sym_break_statement] = ACTIONS(745),
        [sym_continue_statement] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(745),
        [anon_sym_while] = ACTIONS(745),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(747),
        [sym_number] = ACTIONS(745),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(747),
        [sym__dedent] = ACTIONS(747),
    },
    [637] = {
        [anon_sym_COMMA] = ACTIONS(659),
        [anon_sym_COLON] = ACTIONS(1638),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [638] = {
        [anon_sym_COMMA] = ACTIONS(1641),
        [anon_sym_COLON] = ACTIONS(1643),
        [anon_sym_as] = ACTIONS(1641),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [639] = {
        [sym__expression] = STATE(641),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [640] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(642),
        [sym__expression] = STATE(566),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1517),
        [anon_sym_return] = ACTIONS(1519),
        [anon_sym_del] = ACTIONS(1521),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [641] = {
        [anon_sym_COLON] = ACTIONS(1645),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [642] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_else] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_except] = ACTIONS(763),
        [anon_sym_finally] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(765),
        [sym__dedent] = ACTIONS(765),
    },
    [643] = {
        [sym__simple_statement] = STATE(284),
        [sym_print_statement] = STATE(282),
        [sym_expression_statement] = STATE(282),
        [sym_return_statement] = STATE(282),
        [sym_delete_statement] = STATE(282),
        [sym__suite] = STATE(644),
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(691),
    },
    [644] = {
        [sym_except_clause] = STATE(602),
        [sym_finally_clause] = STATE(603),
        [aux_sym_try_statement_repeat1] = STATE(460),
        [anon_sym_except] = ACTIONS(1647),
        [anon_sym_finally] = ACTIONS(1649),
        [sym_comment] = ACTIONS(69),
    },
    [645] = {
        [anon_sym_COLON] = ACTIONS(1651),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [646] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(647),
        [sym__expression] = STATE(587),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1540),
        [anon_sym_return] = ACTIONS(1542),
        [anon_sym_del] = ACTIONS(1544),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [647] = {
        [sym_else_clause] = STATE(648),
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(1343),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(775),
        [sym__dedent] = ACTIONS(775),
    },
    [648] = {
        [ts_builtin_sym_end] = ACTIONS(781),
        [anon_sym_SEMI] = ACTIONS(781),
        [anon_sym_print] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(779),
        [anon_sym_del] = ACTIONS(779),
        [sym_pass_statement] = ACTIONS(779),
        [sym_break_statement] = ACTIONS(779),
        [sym_continue_statement] = ACTIONS(779),
        [anon_sym_if] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(779),
        [anon_sym_try] = ACTIONS(779),
        [anon_sym_with] = ACTIONS(779),
        [anon_sym_def] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(779),
        [anon_sym_AT] = ACTIONS(781),
        [sym_number] = ACTIONS(779),
        [sym_identifier] = ACTIONS(783),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(781),
        [sym__dedent] = ACTIONS(781),
    },
    [649] = {
        [anon_sym_COLON] = ACTIONS(1211),
        [sym_comment] = ACTIONS(69),
    },
    [650] = {
        [anon_sym_in] = ACTIONS(1653),
        [sym_comment] = ACTIONS(69),
    },
    [651] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(535),
        [sym__expression] = STATE(655),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1655),
        [anon_sym_return] = ACTIONS(1657),
        [anon_sym_del] = ACTIONS(1659),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [652] = {
        [sym__expression] = STATE(666),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [653] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(658),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [654] = {
        [sym_expression_list] = STATE(515),
        [sym__expression] = STATE(658),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [655] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_finally] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(1661),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [656] = {
        [sym__expression] = STATE(657),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [657] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1663),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [658] = {
        [aux_sym_print_statement_repeat1] = STATE(661),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1666),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_finally] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(1668),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [659] = {
        [sym__expression] = STATE(665),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [660] = {
        [sym__expression] = STATE(664),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [661] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(1670),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_finally] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [662] = {
        [sym__expression] = STATE(663),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [663] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_finally] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1668),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [664] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1672),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [665] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_finally] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1668),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [666] = {
        [aux_sym_print_statement_repeat1] = STATE(667),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(1666),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_finally] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(1668),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [667] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(1670),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
    [668] = {
        [anon_sym_COLON] = ACTIONS(1675),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [669] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(673),
        [sym__expression] = STATE(674),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1677),
        [anon_sym_return] = ACTIONS(1679),
        [anon_sym_del] = ACTIONS(1681),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [670] = {
        [sym__expression] = STATE(685),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [671] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(677),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [672] = {
        [sym_expression_list] = STATE(515),
        [sym__expression] = STATE(677),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [673] = {
        [ts_builtin_sym_end] = ACTIONS(839),
        [anon_sym_SEMI] = ACTIONS(839),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(837),
        [sym_pass_statement] = ACTIONS(837),
        [sym_break_statement] = ACTIONS(837),
        [sym_continue_statement] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_elif] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(837),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(837),
        [anon_sym_AT] = ACTIONS(839),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(839),
        [sym__dedent] = ACTIONS(839),
    },
    [674] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_elif] = ACTIONS(155),
        [anon_sym_else] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(1683),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [675] = {
        [sym__expression] = STATE(676),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [676] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1685),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [677] = {
        [aux_sym_print_statement_repeat1] = STATE(680),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1688),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_elif] = ACTIONS(539),
        [anon_sym_else] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [678] = {
        [sym__expression] = STATE(684),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [679] = {
        [sym__expression] = STATE(683),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [680] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(1692),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_elif] = ACTIONS(545),
        [anon_sym_else] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [681] = {
        [sym__expression] = STATE(682),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [682] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [683] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1694),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [684] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_elif] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [685] = {
        [aux_sym_print_statement_repeat1] = STATE(686),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(1688),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_elif] = ACTIONS(565),
        [anon_sym_else] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [686] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(1692),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_elif] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
    [687] = {
        [anon_sym_COLON] = ACTIONS(1697),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [688] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(407),
        [sym_expression_statement] = STATE(407),
        [sym_return_statement] = STATE(407),
        [sym_delete_statement] = STATE(407),
        [sym__suite] = STATE(689),
        [sym__expression] = STATE(674),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [anon_sym_print] = ACTIONS(1677),
        [anon_sym_return] = ACTIONS(1679),
        [anon_sym_del] = ACTIONS(1681),
        [sym_pass_statement] = ACTIONS(919),
        [sym_break_statement] = ACTIONS(919),
        [sym_continue_statement] = ACTIONS(919),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(923),
    },
    [689] = {
        [sym_elif_clause] = STATE(556),
        [sym_else_clause] = STATE(690),
        [aux_sym_if_statement_repeat1] = STATE(459),
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_SEMI] = ACTIONS(807),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_elif] = ACTIONS(1341),
        [anon_sym_else] = ACTIONS(1343),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(807),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(807),
        [sym__dedent] = ACTIONS(807),
    },
    [690] = {
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(817),
        [anon_sym_return] = ACTIONS(817),
        [anon_sym_del] = ACTIONS(817),
        [sym_pass_statement] = ACTIONS(817),
        [sym_break_statement] = ACTIONS(817),
        [sym_continue_statement] = ACTIONS(817),
        [anon_sym_if] = ACTIONS(817),
        [anon_sym_for] = ACTIONS(817),
        [anon_sym_while] = ACTIONS(817),
        [anon_sym_try] = ACTIONS(817),
        [anon_sym_with] = ACTIONS(817),
        [anon_sym_def] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(819),
        [sym_number] = ACTIONS(817),
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(819),
        [sym__dedent] = ACTIONS(819),
    },
    [691] = {
        [aux_sym_print_statement_repeat1] = STATE(694),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1699),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_elif] = ACTIONS(539),
        [anon_sym_else] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_except] = ACTIONS(539),
        [anon_sym_finally] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(1701),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [692] = {
        [sym__expression] = STATE(698),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [693] = {
        [sym__expression] = STATE(697),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [694] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_print] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(1703),
        [anon_sym_return] = ACTIONS(545),
        [anon_sym_del] = ACTIONS(545),
        [sym_pass_statement] = ACTIONS(545),
        [sym_break_statement] = ACTIONS(545),
        [sym_continue_statement] = ACTIONS(545),
        [anon_sym_if] = ACTIONS(545),
        [anon_sym_elif] = ACTIONS(545),
        [anon_sym_else] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_while] = ACTIONS(545),
        [anon_sym_try] = ACTIONS(545),
        [anon_sym_except] = ACTIONS(545),
        [anon_sym_finally] = ACTIONS(545),
        [anon_sym_with] = ACTIONS(545),
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(409),
        [sym_number] = ACTIONS(545),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(409),
        [sym__dedent] = ACTIONS(409),
    },
    [695] = {
        [sym__expression] = STATE(696),
        [sym_binary_operator] = STATE(431),
        [sym_subscript] = STATE(431),
        [sym_call] = STATE(431),
        [sym_number] = ACTIONS(885),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(69),
    },
    [696] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_elif] = ACTIONS(551),
        [anon_sym_else] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_except] = ACTIONS(551),
        [anon_sym_finally] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(1701),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
        [sym__dedent] = ACTIONS(383),
    },
    [697] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_print] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_return] = ACTIONS(305),
        [anon_sym_del] = ACTIONS(305),
        [sym_pass_statement] = ACTIONS(305),
        [sym_break_statement] = ACTIONS(305),
        [sym_continue_statement] = ACTIONS(305),
        [anon_sym_if] = ACTIONS(305),
        [anon_sym_elif] = ACTIONS(305),
        [anon_sym_else] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_while] = ACTIONS(305),
        [anon_sym_try] = ACTIONS(305),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(305),
        [anon_sym_with] = ACTIONS(305),
        [anon_sym_def] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(305),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(1705),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(305),
        [sym_identifier] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
        [sym__dedent] = ACTIONS(251),
    },
    [698] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_elif] = ACTIONS(555),
        [anon_sym_else] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_except] = ACTIONS(555),
        [anon_sym_finally] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(1701),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
        [sym__dedent] = ACTIONS(385),
    },
    [699] = {
        [ts_builtin_sym_end] = ACTIONS(1363),
        [anon_sym_SEMI] = ACTIONS(1363),
        [anon_sym_print] = ACTIONS(1366),
        [anon_sym_COMMA] = ACTIONS(1363),
        [anon_sym_return] = ACTIONS(1366),
        [anon_sym_del] = ACTIONS(1366),
        [sym_pass_statement] = ACTIONS(1366),
        [sym_break_statement] = ACTIONS(1366),
        [sym_continue_statement] = ACTIONS(1366),
        [anon_sym_if] = ACTIONS(1366),
        [anon_sym_COLON] = ACTIONS(1708),
        [anon_sym_elif] = ACTIONS(1366),
        [anon_sym_else] = ACTIONS(1366),
        [anon_sym_for] = ACTIONS(1366),
        [anon_sym_in] = ACTIONS(1366),
        [anon_sym_while] = ACTIONS(1366),
        [anon_sym_try] = ACTIONS(1366),
        [anon_sym_except] = ACTIONS(1366),
        [anon_sym_as] = ACTIONS(1366),
        [anon_sym_finally] = ACTIONS(1366),
        [anon_sym_with] = ACTIONS(1366),
        [anon_sym_def] = ACTIONS(1366),
        [anon_sym_LPAREN] = ACTIONS(1363),
        [anon_sym_RPAREN] = ACTIONS(1363),
        [anon_sym_class] = ACTIONS(1366),
        [anon_sym_AT] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(1363),
        [anon_sym_LBRACK] = ACTIONS(1363),
        [anon_sym_RBRACK] = ACTIONS(1363),
        [sym_number] = ACTIONS(1366),
        [sym_identifier] = ACTIONS(1369),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1363),
        [sym__dedent] = ACTIONS(1363),
    },
    [700] = {
        [anon_sym_COMMA] = ACTIONS(1713),
        [anon_sym_RBRACK] = ACTIONS(1713),
        [sym_comment] = ACTIONS(69),
    },
    [701] = {
        [ts_builtin_sym_end] = ACTIONS(1716),
        [anon_sym_SEMI] = ACTIONS(1716),
        [anon_sym_print] = ACTIONS(1719),
        [anon_sym_COMMA] = ACTIONS(1716),
        [anon_sym_return] = ACTIONS(1719),
        [anon_sym_del] = ACTIONS(1719),
        [sym_pass_statement] = ACTIONS(1719),
        [sym_break_statement] = ACTIONS(1719),
        [sym_continue_statement] = ACTIONS(1719),
        [anon_sym_if] = ACTIONS(1719),
        [anon_sym_COLON] = ACTIONS(1716),
        [anon_sym_elif] = ACTIONS(1719),
        [anon_sym_else] = ACTIONS(1719),
        [anon_sym_for] = ACTIONS(1719),
        [anon_sym_in] = ACTIONS(1719),
        [anon_sym_while] = ACTIONS(1719),
        [anon_sym_try] = ACTIONS(1719),
        [anon_sym_except] = ACTIONS(1719),
        [anon_sym_as] = ACTIONS(1719),
        [anon_sym_finally] = ACTIONS(1719),
        [anon_sym_with] = ACTIONS(1719),
        [anon_sym_def] = ACTIONS(1719),
        [anon_sym_LPAREN] = ACTIONS(1716),
        [anon_sym_RPAREN] = ACTIONS(1716),
        [anon_sym_class] = ACTIONS(1719),
        [anon_sym_AT] = ACTIONS(1716),
        [anon_sym_PLUS] = ACTIONS(1716),
        [anon_sym_LBRACK] = ACTIONS(1716),
        [anon_sym_RBRACK] = ACTIONS(1716),
        [sym_number] = ACTIONS(1719),
        [sym_identifier] = ACTIONS(1722),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1716),
        [sym__dedent] = ACTIONS(1716),
    },
    [702] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(125),
        [anon_sym_COMMA] = ACTIONS(123),
        [anon_sym_return] = ACTIONS(125),
        [anon_sym_del] = ACTIONS(125),
        [sym_pass_statement] = ACTIONS(125),
        [sym_break_statement] = ACTIONS(125),
        [sym_continue_statement] = ACTIONS(125),
        [anon_sym_if] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(125),
        [anon_sym_else] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_while] = ACTIONS(125),
        [anon_sym_try] = ACTIONS(125),
        [anon_sym_except] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_finally] = ACTIONS(125),
        [anon_sym_with] = ACTIONS(125),
        [anon_sym_def] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(123),
        [anon_sym_EQ] = ACTIONS(253),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_PLUS] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(123),
    },
    [703] = {
        [anon_sym_COMMA] = ACTIONS(1725),
        [anon_sym_COLON] = ACTIONS(1725),
        [sym_comment] = ACTIONS(69),
    },
    [704] = {
        [ts_builtin_sym_end] = ACTIONS(1728),
        [anon_sym_SEMI] = ACTIONS(1728),
        [anon_sym_print] = ACTIONS(1731),
        [anon_sym_COMMA] = ACTIONS(1734),
        [anon_sym_return] = ACTIONS(1731),
        [anon_sym_del] = ACTIONS(1731),
        [sym_pass_statement] = ACTIONS(1731),
        [sym_break_statement] = ACTIONS(1731),
        [sym_continue_statement] = ACTIONS(1731),
        [anon_sym_if] = ACTIONS(1731),
        [anon_sym_COLON] = ACTIONS(1742),
        [anon_sym_elif] = ACTIONS(1731),
        [anon_sym_else] = ACTIONS(1731),
        [anon_sym_for] = ACTIONS(1731),
        [anon_sym_in] = ACTIONS(1731),
        [anon_sym_while] = ACTIONS(1731),
        [anon_sym_try] = ACTIONS(1731),
        [anon_sym_except] = ACTIONS(1731),
        [anon_sym_as] = ACTIONS(1747),
        [anon_sym_finally] = ACTIONS(1731),
        [anon_sym_with] = ACTIONS(1731),
        [anon_sym_def] = ACTIONS(1731),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_RPAREN] = ACTIONS(1749),
        [anon_sym_class] = ACTIONS(1731),
        [anon_sym_AT] = ACTIONS(1728),
        [anon_sym_PLUS] = ACTIONS(1754),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_RBRACK] = ACTIONS(1713),
        [sym_number] = ACTIONS(1731),
        [sym_identifier] = ACTIONS(1756),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1728),
        [sym__dedent] = ACTIONS(1728),
    },
    [705] = {
        [anon_sym_COMMA] = ACTIONS(1759),
        [anon_sym_RPAREN] = ACTIONS(1759),
        [sym_comment] = ACTIONS(69),
    },
    [706] = {
        [anon_sym_RPAREN] = ACTIONS(1762),
        [sym_comment] = ACTIONS(69),
    },
    [707] = {
        [ts_builtin_sym_end] = ACTIONS(1764),
        [anon_sym_SEMI] = ACTIONS(1764),
        [anon_sym_print] = ACTIONS(1768),
        [anon_sym_COMMA] = ACTIONS(1764),
        [anon_sym_return] = ACTIONS(1768),
        [anon_sym_del] = ACTIONS(1768),
        [sym_pass_statement] = ACTIONS(1768),
        [sym_break_statement] = ACTIONS(1768),
        [sym_continue_statement] = ACTIONS(1768),
        [anon_sym_if] = ACTIONS(1768),
        [anon_sym_COLON] = ACTIONS(1764),
        [anon_sym_elif] = ACTIONS(1768),
        [anon_sym_else] = ACTIONS(1768),
        [anon_sym_for] = ACTIONS(1768),
        [anon_sym_in] = ACTIONS(1768),
        [anon_sym_while] = ACTIONS(1768),
        [anon_sym_try] = ACTIONS(1768),
        [anon_sym_except] = ACTIONS(1768),
        [anon_sym_as] = ACTIONS(1768),
        [anon_sym_finally] = ACTIONS(1768),
        [anon_sym_with] = ACTIONS(1768),
        [anon_sym_def] = ACTIONS(1768),
        [anon_sym_LPAREN] = ACTIONS(1764),
        [anon_sym_RPAREN] = ACTIONS(1764),
        [anon_sym_class] = ACTIONS(1768),
        [anon_sym_AT] = ACTIONS(1764),
        [anon_sym_PLUS] = ACTIONS(1764),
        [anon_sym_LBRACK] = ACTIONS(1764),
        [anon_sym_RBRACK] = ACTIONS(1764),
        [sym_number] = ACTIONS(1768),
        [sym_identifier] = ACTIONS(1772),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1764),
        [sym__dedent] = ACTIONS(1764),
    },
    [708] = {
        [aux_sym_print_statement_repeat1] = STATE(709),
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(1699),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_elif] = ACTIONS(565),
        [anon_sym_else] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_except] = ACTIONS(565),
        [anon_sym_finally] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_PLUS] = ACTIONS(1701),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [709] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(1703),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_elif] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(26),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(403),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(404),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(405),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(406),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(407),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(408),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(409),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(410),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(411),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(412),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(413),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(414),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(415),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(416),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(417),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(418),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(419),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(420),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(421),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(422),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(423),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(424),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(425),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(426),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(427),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(428),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(429),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(430),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(57),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(431),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(432),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(433),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(434),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(435),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
    [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delete_statement, 2),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(699),
    [889] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(251),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(700),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
    [899] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(57),
    [903] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(431),
    [907] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(702),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
    [921] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(431),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(651),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(633),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(626),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
    [937] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [943] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [949] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(581),
    [961] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [967] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
    [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(622),
    [979] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(621),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
    [983] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(499),
    [987] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(500),
    [991] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [995] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [999] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1003] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(609),
    [1007] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(615),
    [1010] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(616),
    [1016] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(606),
    [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1023] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(133),
    [1027] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1032] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [1035] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1039] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1045] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1048] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1051] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1054] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1057] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1060] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1063] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(542),
    [1066] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1069] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1072] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1075] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1081] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
    [1089] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1098] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1101] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1104] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1108] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1112] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1116] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(269),
    [1120] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(613),
    [1124] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1127] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1130] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
    [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
    [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(604),
    [1143] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1146] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1160] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1174] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(410),
    [1177] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(531),
    [1182] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(416),
    [1186] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(418),
    [1191] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1205] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1208] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
    [1217] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1220] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1227] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1234] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(549),
    [1248] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(550),
    [1256] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1261] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(417),
    [1264] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(495),
    [1267] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(551),
    [1279] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(427),
    [1282] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(428),
    [1285] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(500),
    [1290] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1297] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(548),
    [1301] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(545),
    [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
    [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
    [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
    [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
    [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
    [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
    [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
    [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
    [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
    [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1327] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1330] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
    [1335] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(130),
    [1338] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
    [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
    [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
    [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
    [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
    [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
    [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
    [1363] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1366] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1369] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [1374] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1377] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1380] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
    [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
    [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
    [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
    [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
    [1415] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(496),
    [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
    [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
    [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1432] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(518),
    [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
    [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1439] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(538),
    [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1444] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1447] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1450] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
    [1455] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1458] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1461] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1464] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1467] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1470] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1474] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1480] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1486] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1489] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1497] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(554),
    [1500] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1503] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1506] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1509] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1512] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(559),
    [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
    [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
    [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
    [1523] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(560),
    [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
    [1528] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(567),
    [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
    [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
    [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [1537] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(571),
    [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
    [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
    [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
    [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
    [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
    [1550] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(588),
    [1553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
    [1555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
    [1557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
    [1559] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(593),
    [1562] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1566] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1570] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1574] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1579] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
    [1584] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
    [1589] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1592] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1595] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(617),
    [1600] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(263),
    [1603] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(260),
    [1606] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
    [1611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
    [1613] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1616] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1620] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(632),
    [1625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(629),
    [1627] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(630),
    [1630] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(32),
    [1633] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1638] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(559),
    [1641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(639),
    [1643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
    [1645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
    [1647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
    [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [1655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(652),
    [1657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(653),
    [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(654),
    [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(656),
    [1663] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(656),
    [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(659),
    [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
    [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(662),
    [1672] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(660),
    [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(669),
    [1677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(670),
    [1679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(671),
    [1681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(672),
    [1683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(675),
    [1685] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(675),
    [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
    [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(679),
    [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(681),
    [1694] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(679),
    [1697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(688),
    [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(692),
    [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(693),
    [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(695),
    [1705] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(693),
    [1708] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1713] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1716] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1719] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1722] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1725] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1728] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1731] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1734] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1742] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(559),
    [1747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
    [1749] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1756] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1759] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(707),
    [1764] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1768] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1772] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
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
