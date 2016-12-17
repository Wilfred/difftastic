#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 584
#define SYMBOL_COUNT 95
#define TOKEN_COUNT 42
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
    anon_sym_LBRACE = 34,
    anon_sym_RBRACE = 35,
    sym_number = 36,
    sym_identifier = 37,
    sym_comment = 38,
    sym__newline = 39,
    sym__indent = 40,
    sym__dedent = 41,
    sym_module = 42,
    sym__statement = 43,
    sym__simple_statement = 44,
    sym_print_statement = 45,
    sym_expression_statement = 46,
    sym_return_statement = 47,
    sym_delete_statement = 48,
    sym__compound_statement = 49,
    sym_if_statement = 50,
    sym_elif_clause = 51,
    sym_else_clause = 52,
    sym_for_statement = 53,
    sym_while_statement = 54,
    sym_try_statement = 55,
    sym_except_clause = 56,
    sym_finally_clause = 57,
    sym_with_statement = 58,
    sym_with_item = 59,
    sym_function_definition = 60,
    sym_parameters = 61,
    sym_default_parameter = 62,
    sym_list_splat_parameter = 63,
    sym_dictionary_splat_parameter = 64,
    sym_class_definition = 65,
    sym_decorated_definition = 66,
    sym_decorator = 67,
    sym__suite = 68,
    sym_arguments = 69,
    sym_expression_list = 70,
    sym_dotted_name = 71,
    sym__expression = 72,
    sym_binary_operator = 73,
    sym_subscript = 74,
    sym_call = 75,
    sym_keyword_argument = 76,
    sym_list_splat_argument = 77,
    sym_dictionary_splat_argument = 78,
    sym_list = 79,
    sym_list_comprehension = 80,
    sym_dictionary = 81,
    sym_pair = 82,
    aux_sym_module_repeat1 = 83,
    aux_sym_print_statement_repeat1 = 84,
    aux_sym_if_statement_repeat1 = 85,
    aux_sym_try_statement_repeat1 = 86,
    aux_sym_with_statement_repeat1 = 87,
    aux_sym_parameters_repeat1 = 88,
    aux_sym_decorated_definition_repeat1 = 89,
    aux_sym_dotted_name_repeat1 = 90,
    aux_sym_subscript_repeat1 = 91,
    aux_sym_call_repeat1 = 92,
    aux_sym_call_repeat2 = 93,
    aux_sym_dictionary_repeat1 = 94,
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
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
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
    [sym_list] = "list",
    [sym_list_comprehension] = "list_comprehension",
    [sym_dictionary] = "dictionary",
    [sym_pair] = "pair",
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
    [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
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
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
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
    [sym_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_list_comprehension] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dictionary] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_pair] = {
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
    [aux_sym_dictionary_repeat1] = {
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
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
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
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 94:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 95:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(95);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 99:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(99);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
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
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
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
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 105:
            if (lookahead == 's')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            ACCEPT_TOKEN(anon_sym_as);
        case 107:
            if (lookahead == 'o')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'r')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_for);
        case 110:
            if (lookahead == 'n')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_in);
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
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(115);
            if (lookahead == 'd')
                ADVANCE(120);
            LEX_ERROR();
        case 115:
            if (lookahead == 'l')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'a')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 's')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 's')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_class);
        case 120:
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'f')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_def);
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
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 126:
            if (lookahead == '.')
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
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
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
        case 129:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 130:
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
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
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
                ADVANCE(9);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(135);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 135:
            if (lookahead == '*')
                ADVANCE(7);
            LEX_ERROR();
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
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
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '}')
                ADVANCE(94);
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
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 140:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
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
            if (lookahead == 'f')
                ADVANCE(107);
            LEX_ERROR();
        case 141:
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
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
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
            if (lookahead == 'i')
                ADVANCE(110);
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
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(110);
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
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
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
            LEX_ERROR();
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
            if (lookahead == '.')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(anon_sym_DOT);
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
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(153);
            if (lookahead == 'd')
                ADVANCE(154);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
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
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
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
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(160);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 160:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(160);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(160);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
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
                ADVANCE(105);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
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
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(168);
            if (lookahead == 'f')
                ADVANCE(174);
            LEX_ERROR();
        case 168:
            if (lookahead == 'x')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 'c')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 'e')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'p')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 't')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            ACCEPT_TOKEN(anon_sym_except);
        case 174:
            if (lookahead == 'i')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'n')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'a')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'l')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 'l')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'y')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            ACCEPT_TOKEN(anon_sym_finally);
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
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(183);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 184:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
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
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 185:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(186);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier);
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(188);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
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
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 190:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
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
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
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
                ADVANCE(186);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
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
                ADVANCE(188);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 193:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 194:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 195:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(160);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
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
                ADVANCE(149);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 199:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 200:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(160);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 201:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
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
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
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
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 203:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(203);
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
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 95},
    [2] = {.lex_state = 98},
    [3] = {.lex_state = 98},
    [4] = {.lex_state = 98},
    [5] = {.lex_state = 99, .external_tokens = 2},
    [6] = {.lex_state = 98},
    [7] = {.lex_state = 98},
    [8] = {.lex_state = 98},
    [9] = {.lex_state = 100},
    [10] = {.lex_state = 98},
    [11] = {.lex_state = 101},
    [12] = {.lex_state = 101},
    [13] = {.lex_state = 101},
    [14] = {.lex_state = 102},
    [15] = {.lex_state = 103},
    [16] = {.lex_state = 104, .external_tokens = 2},
    [17] = {.lex_state = 112},
    [18] = {.lex_state = 113, .external_tokens = 2},
    [19] = {.lex_state = 99, .external_tokens = 2},
    [20] = {.lex_state = 113, .external_tokens = 2},
    [21] = {.lex_state = 113, .external_tokens = 2},
    [22] = {.lex_state = 114},
    [23] = {.lex_state = 123, .external_tokens = 2},
    [24] = {.lex_state = 113, .external_tokens = 2},
    [25] = {.lex_state = 114},
    [26] = {.lex_state = 113, .external_tokens = 2},
    [27] = {.lex_state = 114},
    [28] = {.lex_state = 112},
    [29] = {.lex_state = 113, .external_tokens = 2},
    [30] = {.lex_state = 124},
    [31] = {.lex_state = 98},
    [32] = {.lex_state = 125},
    [33] = {.lex_state = 102},
    [34] = {.lex_state = 127},
    [35] = {.lex_state = 103},
    [36] = {.lex_state = 104},
    [37] = {.lex_state = 128},
    [38] = {.lex_state = 129},
    [39] = {.lex_state = 124},
    [40] = {.lex_state = 98},
    [41] = {.lex_state = 125},
    [42] = {.lex_state = 104, .external_tokens = 2},
    [43] = {.lex_state = 127},
    [44] = {.lex_state = 129},
    [45] = {.lex_state = 104, .external_tokens = 2},
    [46] = {.lex_state = 127},
    [47] = {.lex_state = 104, .external_tokens = 2},
    [48] = {.lex_state = 128},
    [49] = {.lex_state = 127},
    [50] = {.lex_state = 128},
    [51] = {.lex_state = 129},
    [52] = {.lex_state = 104},
    [53] = {.lex_state = 127},
    [54] = {.lex_state = 129},
    [55] = {.lex_state = 104},
    [56] = {.lex_state = 104},
    [57] = {.lex_state = 127},
    [58] = {.lex_state = 128},
    [59] = {.lex_state = 104},
    [60] = {.lex_state = 98},
    [61] = {.lex_state = 98},
    [62] = {.lex_state = 130},
    [63] = {.lex_state = 131},
    [64] = {.lex_state = 132},
    [65] = {.lex_state = 132},
    [66] = {.lex_state = 133},
    [67] = {.lex_state = 124},
    [68] = {.lex_state = 131},
    [69] = {.lex_state = 132},
    [70] = {.lex_state = 132},
    [71] = {.lex_state = 133},
    [72] = {.lex_state = 104},
    [73] = {.lex_state = 134},
    [74] = {.lex_state = 132},
    [75] = {.lex_state = 134},
    [76] = {.lex_state = 104},
    [77] = {.lex_state = 131},
    [78] = {.lex_state = 132},
    [79] = {.lex_state = 133},
    [80] = {.lex_state = 104},
    [81] = {.lex_state = 131},
    [82] = {.lex_state = 132},
    [83] = {.lex_state = 133},
    [84] = {.lex_state = 104},
    [85] = {.lex_state = 136},
    [86] = {.lex_state = 104},
    [87] = {.lex_state = 134},
    [88] = {.lex_state = 132},
    [89] = {.lex_state = 134},
    [90] = {.lex_state = 133},
    [91] = {.lex_state = 136},
    [92] = {.lex_state = 98},
    [93] = {.lex_state = 131},
    [94] = {.lex_state = 104},
    [95] = {.lex_state = 137},
    [96] = {.lex_state = 138},
    [97] = {.lex_state = 103},
    [98] = {.lex_state = 104},
    [99] = {.lex_state = 138},
    [100] = {.lex_state = 103},
    [101] = {.lex_state = 104},
    [102] = {.lex_state = 104},
    [103] = {.lex_state = 138},
    [104] = {.lex_state = 138},
    [105] = {.lex_state = 98},
    [106] = {.lex_state = 139},
    [107] = {.lex_state = 104},
    [108] = {.lex_state = 140},
    [109] = {.lex_state = 102},
    [110] = {.lex_state = 98},
    [111] = {.lex_state = 104},
    [112] = {.lex_state = 127},
    [113] = {.lex_state = 102},
    [114] = {.lex_state = 104},
    [115] = {.lex_state = 104},
    [116] = {.lex_state = 141},
    [117] = {.lex_state = 142},
    [118] = {.lex_state = 143},
    [119] = {.lex_state = 98},
    [120] = {.lex_state = 144},
    [121] = {.lex_state = 98},
    [122] = {.lex_state = 141},
    [123] = {.lex_state = 98},
    [124] = {.lex_state = 145},
    [125] = {.lex_state = 104},
    [126] = {.lex_state = 146},
    [127] = {.lex_state = 131},
    [128] = {.lex_state = 147, .external_tokens = 2},
    [129] = {.lex_state = 131},
    [130] = {.lex_state = 132},
    [131] = {.lex_state = 132},
    [132] = {.lex_state = 133},
    [133] = {.lex_state = 124},
    [134] = {.lex_state = 131},
    [135] = {.lex_state = 132},
    [136] = {.lex_state = 132},
    [137] = {.lex_state = 133},
    [138] = {.lex_state = 104, .external_tokens = 2},
    [139] = {.lex_state = 134},
    [140] = {.lex_state = 132},
    [141] = {.lex_state = 134},
    [142] = {.lex_state = 104, .external_tokens = 2},
    [143] = {.lex_state = 133},
    [144] = {.lex_state = 104, .external_tokens = 2},
    [145] = {.lex_state = 133},
    [146] = {.lex_state = 104, .external_tokens = 2},
    [147] = {.lex_state = 136},
    [148] = {.lex_state = 104, .external_tokens = 2},
    [149] = {.lex_state = 134},
    [150] = {.lex_state = 132},
    [151] = {.lex_state = 134},
    [152] = {.lex_state = 133},
    [153] = {.lex_state = 136},
    [154] = {.lex_state = 113, .external_tokens = 2},
    [155] = {.lex_state = 104, .external_tokens = 2},
    [156] = {.lex_state = 138},
    [157] = {.lex_state = 103},
    [158] = {.lex_state = 104, .external_tokens = 2},
    [159] = {.lex_state = 138},
    [160] = {.lex_state = 103},
    [161] = {.lex_state = 104, .external_tokens = 2},
    [162] = {.lex_state = 104, .external_tokens = 2},
    [163] = {.lex_state = 104, .external_tokens = 2},
    [164] = {.lex_state = 140},
    [165] = {.lex_state = 102},
    [166] = {.lex_state = 98},
    [167] = {.lex_state = 104, .external_tokens = 2},
    [168] = {.lex_state = 127},
    [169] = {.lex_state = 102},
    [170] = {.lex_state = 104, .external_tokens = 2},
    [171] = {.lex_state = 104, .external_tokens = 2},
    [172] = {.lex_state = 142},
    [173] = {.lex_state = 98},
    [174] = {.lex_state = 145},
    [175] = {.lex_state = 104, .external_tokens = 2},
    [176] = {.lex_state = 148, .external_tokens = 2},
    [177] = {.lex_state = 150, .external_tokens = 2},
    [178] = {.lex_state = 98},
    [179] = {.lex_state = 114},
    [180] = {.lex_state = 99, .external_tokens = 2},
    [181] = {.lex_state = 114},
    [182] = {.lex_state = 131},
    [183] = {.lex_state = 99, .external_tokens = 2},
    [184] = {.lex_state = 132},
    [185] = {.lex_state = 99, .external_tokens = 2},
    [186] = {.lex_state = 101},
    [187] = {.lex_state = 148, .external_tokens = 2},
    [188] = {.lex_state = 101},
    [189] = {.lex_state = 148, .external_tokens = 2},
    [190] = {.lex_state = 148, .external_tokens = 2},
    [191] = {.lex_state = 151},
    [192] = {.lex_state = 152, .external_tokens = 3},
    [193] = {.lex_state = 98},
    [194] = {.lex_state = 133},
    [195] = {.lex_state = 100},
    [196] = {.lex_state = 152, .external_tokens = 3},
    [197] = {.lex_state = 156, .external_tokens = 4},
    [198] = {.lex_state = 99, .external_tokens = 2},
    [199] = {.lex_state = 113, .external_tokens = 2},
    [200] = {.lex_state = 157, .external_tokens = 2},
    [201] = {.lex_state = 98},
    [202] = {.lex_state = 98},
    [203] = {.lex_state = 98},
    [204] = {.lex_state = 100},
    [205] = {.lex_state = 98},
    [206] = {.lex_state = 101},
    [207] = {.lex_state = 101},
    [208] = {.lex_state = 156, .external_tokens = 4},
    [209] = {.lex_state = 99, .external_tokens = 2},
    [210] = {.lex_state = 156, .external_tokens = 4},
    [211] = {.lex_state = 156, .external_tokens = 4},
    [212] = {.lex_state = 156, .external_tokens = 4},
    [213] = {.lex_state = 114},
    [214] = {.lex_state = 156, .external_tokens = 4},
    [215] = {.lex_state = 157, .external_tokens = 2},
    [216] = {.lex_state = 156, .external_tokens = 4},
    [217] = {.lex_state = 156, .external_tokens = 4},
    [218] = {.lex_state = 151},
    [219] = {.lex_state = 152, .external_tokens = 3},
    [220] = {.lex_state = 98},
    [221] = {.lex_state = 133},
    [222] = {.lex_state = 100},
    [223] = {.lex_state = 152, .external_tokens = 3},
    [224] = {.lex_state = 156, .external_tokens = 4},
    [225] = {.lex_state = 99, .external_tokens = 2},
    [226] = {.lex_state = 156, .external_tokens = 4},
    [227] = {.lex_state = 158, .external_tokens = 4},
    [228] = {.lex_state = 156, .external_tokens = 4},
    [229] = {.lex_state = 158, .external_tokens = 4},
    [230] = {.lex_state = 156, .external_tokens = 4},
    [231] = {.lex_state = 150},
    [232] = {.lex_state = 159},
    [233] = {.lex_state = 100},
    [234] = {.lex_state = 152, .external_tokens = 3},
    [235] = {.lex_state = 156, .external_tokens = 4},
    [236] = {.lex_state = 100},
    [237] = {.lex_state = 161},
    [238] = {.lex_state = 162},
    [239] = {.lex_state = 132},
    [240] = {.lex_state = 132},
    [241] = {.lex_state = 133},
    [242] = {.lex_state = 161},
    [243] = {.lex_state = 162},
    [244] = {.lex_state = 132},
    [245] = {.lex_state = 132},
    [246] = {.lex_state = 133},
    [247] = {.lex_state = 100},
    [248] = {.lex_state = 163},
    [249] = {.lex_state = 163},
    [250] = {.lex_state = 133},
    [251] = {.lex_state = 100},
    [252] = {.lex_state = 101},
    [253] = {.lex_state = 133},
    [254] = {.lex_state = 159},
    [255] = {.lex_state = 100},
    [256] = {.lex_state = 98},
    [257] = {.lex_state = 131},
    [258] = {.lex_state = 100},
    [259] = {.lex_state = 163},
    [260] = {.lex_state = 133},
    [261] = {.lex_state = 159},
    [262] = {.lex_state = 132},
    [263] = {.lex_state = 164},
    [264] = {.lex_state = 165},
    [265] = {.lex_state = 98},
    [266] = {.lex_state = 166},
    [267] = {.lex_state = 98},
    [268] = {.lex_state = 152, .external_tokens = 3},
    [269] = {.lex_state = 164},
    [270] = {.lex_state = 98},
    [271] = {.lex_state = 152, .external_tokens = 3},
    [272] = {.lex_state = 156, .external_tokens = 4},
    [273] = {.lex_state = 164},
    [274] = {.lex_state = 156, .external_tokens = 4},
    [275] = {.lex_state = 164},
    [276] = {.lex_state = 152, .external_tokens = 3},
    [277] = {.lex_state = 156, .external_tokens = 4},
    [278] = {.lex_state = 99, .external_tokens = 2},
    [279] = {.lex_state = 167},
    [280] = {.lex_state = 98},
    [281] = {.lex_state = 100},
    [282] = {.lex_state = 181, .external_tokens = 4},
    [283] = {.lex_state = 156, .external_tokens = 4},
    [284] = {.lex_state = 181, .external_tokens = 4},
    [285] = {.lex_state = 100},
    [286] = {.lex_state = 184, .external_tokens = 4},
    [287] = {.lex_state = 181, .external_tokens = 4},
    [288] = {.lex_state = 156, .external_tokens = 4},
    [289] = {.lex_state = 156, .external_tokens = 4},
    [290] = {.lex_state = 152, .external_tokens = 3},
    [291] = {.lex_state = 184, .external_tokens = 4},
    [292] = {.lex_state = 152, .external_tokens = 3},
    [293] = {.lex_state = 156, .external_tokens = 4},
    [294] = {.lex_state = 165},
    [295] = {.lex_state = 98},
    [296] = {.lex_state = 152, .external_tokens = 3},
    [297] = {.lex_state = 137},
    [298] = {.lex_state = 152, .external_tokens = 3},
    [299] = {.lex_state = 181, .external_tokens = 4},
    [300] = {.lex_state = 181, .external_tokens = 4},
    [301] = {.lex_state = 167},
    [302] = {.lex_state = 156, .external_tokens = 4},
    [303] = {.lex_state = 167},
    [304] = {.lex_state = 137},
    [305] = {.lex_state = 152, .external_tokens = 3},
    [306] = {.lex_state = 185, .external_tokens = 4},
    [307] = {.lex_state = 156, .external_tokens = 4},
    [308] = {.lex_state = 142},
    [309] = {.lex_state = 98},
    [310] = {.lex_state = 100},
    [311] = {.lex_state = 152, .external_tokens = 3},
    [312] = {.lex_state = 185, .external_tokens = 4},
    [313] = {.lex_state = 156, .external_tokens = 4},
    [314] = {.lex_state = 137},
    [315] = {.lex_state = 152, .external_tokens = 3},
    [316] = {.lex_state = 187, .external_tokens = 4},
    [317] = {.lex_state = 98},
    [318] = {.lex_state = 187, .external_tokens = 4},
    [319] = {.lex_state = 156, .external_tokens = 4},
    [320] = {.lex_state = 187, .external_tokens = 4},
    [321] = {.lex_state = 187, .external_tokens = 4},
    [322] = {.lex_state = 156, .external_tokens = 4},
    [323] = {.lex_state = 137},
    [324] = {.lex_state = 152, .external_tokens = 3},
    [325] = {.lex_state = 187, .external_tokens = 4},
    [326] = {.lex_state = 113, .external_tokens = 2},
    [327] = {.lex_state = 150},
    [328] = {.lex_state = 100},
    [329] = {.lex_state = 152, .external_tokens = 3},
    [330] = {.lex_state = 113, .external_tokens = 2},
    [331] = {.lex_state = 164},
    [332] = {.lex_state = 152, .external_tokens = 3},
    [333] = {.lex_state = 164},
    [334] = {.lex_state = 152, .external_tokens = 3},
    [335] = {.lex_state = 113, .external_tokens = 2},
    [336] = {.lex_state = 113, .external_tokens = 2},
    [337] = {.lex_state = 152, .external_tokens = 3},
    [338] = {.lex_state = 167},
    [339] = {.lex_state = 98},
    [340] = {.lex_state = 100},
    [341] = {.lex_state = 189, .external_tokens = 2},
    [342] = {.lex_state = 113, .external_tokens = 2},
    [343] = {.lex_state = 189, .external_tokens = 2},
    [344] = {.lex_state = 100},
    [345] = {.lex_state = 190, .external_tokens = 2},
    [346] = {.lex_state = 189, .external_tokens = 2},
    [347] = {.lex_state = 113, .external_tokens = 2},
    [348] = {.lex_state = 113, .external_tokens = 2},
    [349] = {.lex_state = 152, .external_tokens = 3},
    [350] = {.lex_state = 190, .external_tokens = 2},
    [351] = {.lex_state = 152, .external_tokens = 3},
    [352] = {.lex_state = 113, .external_tokens = 2},
    [353] = {.lex_state = 165},
    [354] = {.lex_state = 98},
    [355] = {.lex_state = 152, .external_tokens = 3},
    [356] = {.lex_state = 137},
    [357] = {.lex_state = 152, .external_tokens = 3},
    [358] = {.lex_state = 189, .external_tokens = 2},
    [359] = {.lex_state = 189, .external_tokens = 2},
    [360] = {.lex_state = 137},
    [361] = {.lex_state = 152, .external_tokens = 3},
    [362] = {.lex_state = 191, .external_tokens = 2},
    [363] = {.lex_state = 113, .external_tokens = 2},
    [364] = {.lex_state = 142},
    [365] = {.lex_state = 98},
    [366] = {.lex_state = 100},
    [367] = {.lex_state = 152, .external_tokens = 3},
    [368] = {.lex_state = 191, .external_tokens = 2},
    [369] = {.lex_state = 113, .external_tokens = 2},
    [370] = {.lex_state = 137},
    [371] = {.lex_state = 152, .external_tokens = 3},
    [372] = {.lex_state = 192, .external_tokens = 2},
    [373] = {.lex_state = 98},
    [374] = {.lex_state = 192, .external_tokens = 2},
    [375] = {.lex_state = 113, .external_tokens = 2},
    [376] = {.lex_state = 192, .external_tokens = 2},
    [377] = {.lex_state = 192, .external_tokens = 2},
    [378] = {.lex_state = 113, .external_tokens = 2},
    [379] = {.lex_state = 137},
    [380] = {.lex_state = 152, .external_tokens = 3},
    [381] = {.lex_state = 192, .external_tokens = 2},
    [382] = {.lex_state = 99, .external_tokens = 2},
    [383] = {.lex_state = 147, .external_tokens = 2},
    [384] = {.lex_state = 98},
    [385] = {.lex_state = 193, .external_tokens = 2},
    [386] = {.lex_state = 98},
    [387] = {.lex_state = 147, .external_tokens = 2},
    [388] = {.lex_state = 147, .external_tokens = 2},
    [389] = {.lex_state = 99, .external_tokens = 2},
    [390] = {.lex_state = 147, .external_tokens = 2},
    [391] = {.lex_state = 193, .external_tokens = 2},
    [392] = {.lex_state = 194},
    [393] = {.lex_state = 98},
    [394] = {.lex_state = 152, .external_tokens = 3},
    [395] = {.lex_state = 98},
    [396] = {.lex_state = 100},
    [397] = {.lex_state = 98},
    [398] = {.lex_state = 98},
    [399] = {.lex_state = 98},
    [400] = {.lex_state = 100},
    [401] = {.lex_state = 98},
    [402] = {.lex_state = 98},
    [403] = {.lex_state = 100},
    [404] = {.lex_state = 98},
    [405] = {.lex_state = 101},
    [406] = {.lex_state = 136},
    [407] = {.lex_state = 104, .external_tokens = 2},
    [408] = {.lex_state = 98},
    [409] = {.lex_state = 195},
    [410] = {.lex_state = 101},
    [411] = {.lex_state = 101},
    [412] = {.lex_state = 98},
    [413] = {.lex_state = 129},
    [414] = {.lex_state = 127},
    [415] = {.lex_state = 104, .external_tokens = 2},
    [416] = {.lex_state = 104, .external_tokens = 2},
    [417] = {.lex_state = 196, .external_tokens = 2},
    [418] = {.lex_state = 157, .external_tokens = 5},
    [419] = {.lex_state = 156, .external_tokens = 4},
    [420] = {.lex_state = 157, .external_tokens = 5},
    [421] = {.lex_state = 113, .external_tokens = 5},
    [422] = {.lex_state = 99, .external_tokens = 2},
    [423] = {.lex_state = 113, .external_tokens = 5},
    [424] = {.lex_state = 113, .external_tokens = 5},
    [425] = {.lex_state = 192, .external_tokens = 5},
    [426] = {.lex_state = 190, .external_tokens = 5},
    [427] = {.lex_state = 189, .external_tokens = 5},
    [428] = {.lex_state = 113, .external_tokens = 5},
    [429] = {.lex_state = 164},
    [430] = {.lex_state = 113, .external_tokens = 5},
    [431] = {.lex_state = 100},
    [432] = {.lex_state = 132},
    [433] = {.lex_state = 132},
    [434] = {.lex_state = 133},
    [435] = {.lex_state = 114},
    [436] = {.lex_state = 157, .external_tokens = 5},
    [437] = {.lex_state = 197, .external_tokens = 2},
    [438] = {.lex_state = 104, .external_tokens = 2},
    [439] = {.lex_state = 132},
    [440] = {.lex_state = 132},
    [441] = {.lex_state = 133},
    [442] = {.lex_state = 138},
    [443] = {.lex_state = 113, .external_tokens = 5},
    [444] = {.lex_state = 198, .external_tokens = 2},
    [445] = {.lex_state = 192, .external_tokens = 5},
    [446] = {.lex_state = 189, .external_tokens = 5},
    [447] = {.lex_state = 164},
    [448] = {.lex_state = 114},
    [449] = {.lex_state = 132},
    [450] = {.lex_state = 134},
    [451] = {.lex_state = 104, .external_tokens = 2},
    [452] = {.lex_state = 133},
    [453] = {.lex_state = 104, .external_tokens = 2},
    [454] = {.lex_state = 113, .external_tokens = 5},
    [455] = {.lex_state = 152, .external_tokens = 3},
    [456] = {.lex_state = 99, .external_tokens = 2},
    [457] = {.lex_state = 113, .external_tokens = 5},
    [458] = {.lex_state = 157, .external_tokens = 5},
    [459] = {.lex_state = 156, .external_tokens = 4},
    [460] = {.lex_state = 157, .external_tokens = 5},
    [461] = {.lex_state = 190, .external_tokens = 5},
    [462] = {.lex_state = 189, .external_tokens = 5},
    [463] = {.lex_state = 113, .external_tokens = 5},
    [464] = {.lex_state = 113, .external_tokens = 5},
    [465] = {.lex_state = 192, .external_tokens = 5},
    [466] = {.lex_state = 113, .external_tokens = 5},
    [467] = {.lex_state = 152, .external_tokens = 3},
    [468] = {.lex_state = 190, .external_tokens = 5},
    [469] = {.lex_state = 102},
    [470] = {.lex_state = 141, .external_tokens = 2},
    [471] = {.lex_state = 98},
    [472] = {.lex_state = 141, .external_tokens = 2},
    [473] = {.lex_state = 98},
    [474] = {.lex_state = 113, .external_tokens = 5},
    [475] = {.lex_state = 99, .external_tokens = 2},
    [476] = {.lex_state = 113, .external_tokens = 5},
    [477] = {.lex_state = 142},
    [478] = {.lex_state = 98},
    [479] = {.lex_state = 100},
    [480] = {.lex_state = 152, .external_tokens = 3},
    [481] = {.lex_state = 191, .external_tokens = 5},
    [482] = {.lex_state = 113, .external_tokens = 5},
    [483] = {.lex_state = 104, .external_tokens = 2},
    [484] = {.lex_state = 134},
    [485] = {.lex_state = 104, .external_tokens = 2},
    [486] = {.lex_state = 133},
    [487] = {.lex_state = 104, .external_tokens = 2},
    [488] = {.lex_state = 136},
    [489] = {.lex_state = 199},
    [490] = {.lex_state = 152, .external_tokens = 3},
    [491] = {.lex_state = 104, .external_tokens = 2},
    [492] = {.lex_state = 104, .external_tokens = 2},
    [493] = {.lex_state = 157, .external_tokens = 5},
    [494] = {.lex_state = 139, .external_tokens = 2},
    [495] = {.lex_state = 98},
    [496] = {.lex_state = 139, .external_tokens = 2},
    [497] = {.lex_state = 192, .external_tokens = 5},
    [498] = {.lex_state = 113, .external_tokens = 5},
    [499] = {.lex_state = 104, .external_tokens = 2},
    [500] = {.lex_state = 141, .external_tokens = 2},
    [501] = {.lex_state = 152, .external_tokens = 3},
    [502] = {.lex_state = 189, .external_tokens = 5},
    [503] = {.lex_state = 100},
    [504] = {.lex_state = 152, .external_tokens = 3},
    [505] = {.lex_state = 113, .external_tokens = 5},
    [506] = {.lex_state = 113, .external_tokens = 5},
    [507] = {.lex_state = 189, .external_tokens = 5},
    [508] = {.lex_state = 113, .external_tokens = 5},
    [509] = {.lex_state = 100},
    [510] = {.lex_state = 163},
    [511] = {.lex_state = 100},
    [512] = {.lex_state = 133},
    [513] = {.lex_state = 100},
    [514] = {.lex_state = 159},
    [515] = {.lex_state = 100},
    [516] = {.lex_state = 152, .external_tokens = 3},
    [517] = {.lex_state = 113, .external_tokens = 5},
    [518] = {.lex_state = 152, .external_tokens = 3},
    [519] = {.lex_state = 113, .external_tokens = 5},
    [520] = {.lex_state = 157, .external_tokens = 5},
    [521] = {.lex_state = 152, .external_tokens = 3},
    [522] = {.lex_state = 200},
    [523] = {.lex_state = 130},
    [524] = {.lex_state = 133},
    [525] = {.lex_state = 113, .external_tokens = 5},
    [526] = {.lex_state = 140},
    [527] = {.lex_state = 129},
    [528] = {.lex_state = 104, .external_tokens = 2},
    [529] = {.lex_state = 128},
    [530] = {.lex_state = 104, .external_tokens = 2},
    [531] = {.lex_state = 148, .external_tokens = 2},
    [532] = {.lex_state = 151},
    [533] = {.lex_state = 98},
    [534] = {.lex_state = 131},
    [535] = {.lex_state = 131},
    [536] = {.lex_state = 195},
    [537] = {.lex_state = 130},
    [538] = {.lex_state = 131},
    [539] = {.lex_state = 136},
    [540] = {.lex_state = 104, .external_tokens = 2},
    [541] = {.lex_state = 132},
    [542] = {.lex_state = 131},
    [543] = {.lex_state = 150},
    [544] = {.lex_state = 164},
    [545] = {.lex_state = 152, .external_tokens = 3},
    [546] = {.lex_state = 113, .external_tokens = 5},
    [547] = {.lex_state = 166},
    [548] = {.lex_state = 165},
    [549] = {.lex_state = 98},
    [550] = {.lex_state = 152, .external_tokens = 3},
    [551] = {.lex_state = 137},
    [552] = {.lex_state = 189, .external_tokens = 5},
    [553] = {.lex_state = 152, .external_tokens = 3},
    [554] = {.lex_state = 167},
    [555] = {.lex_state = 137},
    [556] = {.lex_state = 152, .external_tokens = 3},
    [557] = {.lex_state = 191, .external_tokens = 5},
    [558] = {.lex_state = 113, .external_tokens = 5},
    [559] = {.lex_state = 201},
    [560] = {.lex_state = 98},
    [561] = {.lex_state = 201},
    [562] = {.lex_state = 142},
    [563] = {.lex_state = 137},
    [564] = {.lex_state = 152, .external_tokens = 3},
    [565] = {.lex_state = 192, .external_tokens = 5},
    [566] = {.lex_state = 137},
    [567] = {.lex_state = 152, .external_tokens = 3},
    [568] = {.lex_state = 192, .external_tokens = 5},
    [569] = {.lex_state = 113, .external_tokens = 5},
    [570] = {.lex_state = 104, .external_tokens = 2},
    [571] = {.lex_state = 127},
    [572] = {.lex_state = 104, .external_tokens = 2},
    [573] = {.lex_state = 104, .external_tokens = 2},
    [574] = {.lex_state = 202, .external_tokens = 2},
    [575] = {.lex_state = 164},
    [576] = {.lex_state = 203, .external_tokens = 2},
    [577] = {.lex_state = 132},
    [578] = {.lex_state = 133},
    [579] = {.lex_state = 138},
    [580] = {.lex_state = 104, .external_tokens = 2},
    [581] = {.lex_state = 152, .external_tokens = 3},
    [582] = {.lex_state = 98},
    [583] = {.lex_state = 203, .external_tokens = 2},
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
        [sym_module] = STATE(17),
        [sym__statement] = STATE(421),
        [sym__simple_statement] = STATE(422),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(423),
        [sym_if_statement] = STATE(424),
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(426),
        [sym_for_statement] = STATE(424),
        [sym_while_statement] = STATE(424),
        [sym_try_statement] = STATE(424),
        [sym_except_clause] = STATE(427),
        [sym_finally_clause] = STATE(428),
        [sym_with_statement] = STATE(424),
        [sym_with_item] = STATE(429),
        [sym_function_definition] = STATE(430),
        [sym_parameters] = STATE(431),
        [sym_default_parameter] = STATE(432),
        [sym_list_splat_parameter] = STATE(433),
        [sym_dictionary_splat_parameter] = STATE(434),
        [sym_class_definition] = STATE(430),
        [sym_decorated_definition] = STATE(424),
        [sym_decorator] = STATE(435),
        [sym__suite] = STATE(436),
        [sym_arguments] = STATE(180),
        [sym_expression_list] = STATE(437),
        [sym_dotted_name] = STATE(177),
        [sym__expression] = STATE(438),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(439),
        [sym_list_splat_argument] = STATE(440),
        [sym_dictionary_splat_argument] = STATE(441),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_pair] = STATE(442),
        [aux_sym_module_repeat1] = STATE(443),
        [aux_sym_print_statement_repeat1] = STATE(444),
        [aux_sym_if_statement_repeat1] = STATE(445),
        [aux_sym_try_statement_repeat1] = STATE(446),
        [aux_sym_with_statement_repeat1] = STATE(447),
        [aux_sym_parameters_repeat1] = STATE(242),
        [aux_sym_decorated_definition_repeat1] = STATE(448),
        [aux_sym_dotted_name_repeat1] = STATE(187),
        [aux_sym_subscript_repeat1] = STATE(43),
        [aux_sym_call_repeat1] = STATE(133),
        [aux_sym_call_repeat2] = STATE(449),
        [aux_sym_dictionary_repeat1] = STATE(159),
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
        [anon_sym_LBRACE] = ACTIONS(65),
        [anon_sym_RBRACE] = ACTIONS(67),
        [sym_number] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(75),
        [sym__indent] = ACTIONS(77),
        [sym__dedent] = ACTIONS(79),
    },
    [1] = {
        [sym_module] = STATE(17),
        [sym__statement] = STATE(18),
        [sym__simple_statement] = STATE(19),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(20),
        [sym_if_statement] = STATE(21),
        [sym_for_statement] = STATE(21),
        [sym_while_statement] = STATE(21),
        [sym_try_statement] = STATE(21),
        [sym_with_statement] = STATE(21),
        [sym_function_definition] = STATE(21),
        [sym_class_definition] = STATE(21),
        [sym_decorated_definition] = STATE(21),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_module_repeat1] = STATE(24),
        [aux_sym_decorated_definition_repeat1] = STATE(25),
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(101),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
    },
    [2] = {
        [sym__expression] = STATE(390),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [3] = {
        [sym_expression_list] = STATE(389),
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [4] = {
        [sym_expression_list] = STATE(382),
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [5] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(115),
    },
    [6] = {
        [sym__expression] = STATE(370),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [7] = {
        [sym_expression_list] = STATE(364),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [8] = {
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(123),
        [sym_comment] = ACTIONS(73),
    },
    [10] = {
        [sym_with_item] = STATE(331),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [11] = {
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(73),
    },
    [12] = {
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(73),
    },
    [13] = {
        [sym_dotted_name] = STATE(177),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(73),
    },
    [14] = {
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [15] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_pair] = STATE(156),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(133),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [16] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(139),
        [anon_sym_LBRACE] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(139),
    },
    [19] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(145),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [sym_pass_statement] = ACTIONS(149),
        [sym_break_statement] = ACTIONS(149),
        [sym_continue_statement] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(147),
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
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(153),
    },
    [22] = {
        [anon_sym_def] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
    },
    [23] = {
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [24] = {
        [sym__statement] = STATE(29),
        [sym__simple_statement] = STATE(19),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(20),
        [sym_if_statement] = STATE(21),
        [sym_for_statement] = STATE(21),
        [sym_while_statement] = STATE(21),
        [sym_try_statement] = STATE(21),
        [sym_with_statement] = STATE(21),
        [sym_function_definition] = STATE(21),
        [sym_class_definition] = STATE(21),
        [sym_decorated_definition] = STATE(21),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(25),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(101),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(171),
    },
    [25] = {
        [sym_function_definition] = STATE(26),
        [sym_class_definition] = STATE(26),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(179),
        [anon_sym_del] = ACTIONS(179),
        [sym_pass_statement] = ACTIONS(179),
        [sym_break_statement] = ACTIONS(179),
        [sym_continue_statement] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(177),
    },
    [27] = {
        [anon_sym_def] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(183),
        [sym_comment] = ACTIONS(73),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [sym_comment] = ACTIONS(73),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_return] = ACTIONS(189),
        [anon_sym_del] = ACTIONS(189),
        [sym_pass_statement] = ACTIONS(189),
        [sym_break_statement] = ACTIONS(189),
        [sym_continue_statement] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(187),
    },
    [30] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(130),
        [sym_list_splat_argument] = STATE(131),
        [sym_dictionary_splat_argument] = STATE(132),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [aux_sym_call_repeat1] = STATE(133),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [31] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [32] = {
        [sym__expression] = STATE(37),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [33] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(201),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [34] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [35] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_pair] = STATE(96),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(207),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [36] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [37] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [38] = {
        [sym__expression] = STATE(58),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(217),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [39] = {
        [sym__expression] = STATE(63),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(64),
        [sym_list_splat_argument] = STATE(65),
        [sym_dictionary_splat_argument] = STATE(66),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [aux_sym_call_repeat1] = STATE(67),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [40] = {
        [sym__expression] = STATE(59),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [41] = {
        [sym__expression] = STATE(50),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(219),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_in] = ACTIONS(221),
        [anon_sym_as] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(221),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(221),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(221),
    },
    [43] = {
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(73),
    },
    [44] = {
        [sym__expression] = STATE(48),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(227),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_in] = ACTIONS(229),
        [anon_sym_as] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(229),
        [anon_sym_RPAREN] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(229),
        [anon_sym_RBRACE] = ACTIONS(229),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(229),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(73),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_as] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(233),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(233),
    },
    [48] = {
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(73),
    },
    [49] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(73),
    },
    [50] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(73),
    },
    [51] = {
        [sym__expression] = STATE(58),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(239),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_in] = ACTIONS(221),
        [anon_sym_as] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(221),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(221),
        [sym_comment] = ACTIONS(73),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [54] = {
        [sym__expression] = STATE(48),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(243),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_in] = ACTIONS(229),
        [anon_sym_as] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(229),
        [anon_sym_RPAREN] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(229),
        [anon_sym_RBRACE] = ACTIONS(229),
        [sym_comment] = ACTIONS(73),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_as] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(233),
        [sym_comment] = ACTIONS(73),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(73),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(73),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [60] = {
        [sym__expression] = STATE(127),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [61] = {
        [sym__expression] = STATE(126),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [62] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [63] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [64] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(73),
    },
    [65] = {
        [aux_sym_call_repeat2] = STATE(88),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(73),
    },
    [66] = {
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(73),
    },
    [67] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(69),
        [sym_list_splat_argument] = STATE(70),
        [sym_dictionary_splat_argument] = STATE(71),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [70] = {
        [aux_sym_call_repeat2] = STATE(74),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [71] = {
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_comment] = ACTIONS(73),
    },
    [73] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(83),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [75] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(79),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_in] = ACTIONS(269),
        [anon_sym_as] = ACTIONS(269),
        [anon_sym_LPAREN] = ACTIONS(269),
        [anon_sym_RPAREN] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(269),
        [anon_sym_RBRACE] = ACTIONS(269),
        [sym_comment] = ACTIONS(73),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(271),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(271),
        [sym_comment] = ACTIONS(73),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(273),
        [sym_comment] = ACTIONS(73),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_RPAREN] = ACTIONS(277),
        [sym_comment] = ACTIONS(73),
    },
    [83] = {
        [anon_sym_RPAREN] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
    },
    [85] = {
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(73),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
    },
    [87] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(90),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [88] = {
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [89] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(83),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [90] = {
        [anon_sym_RPAREN] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [91] = {
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_number] = ACTIONS(291),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [92] = {
        [sym__expression] = STATE(93),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_as] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
    },
    [95] = {
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [96] = {
        [aux_sym_dictionary_repeat1] = STATE(99),
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(73),
    },
    [97] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_pair] = STATE(104),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [98] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(307),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(73),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(73),
    },
    [100] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_pair] = STATE(103),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(311),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_as] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(73),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
    },
    [104] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RBRACE] = ACTIONS(319),
        [sym_comment] = ACTIONS(73),
    },
    [105] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_as] = ACTIONS(323),
        [anon_sym_LPAREN] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_RBRACK] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
    },
    [108] = {
        [aux_sym_print_statement_repeat1] = STATE(112),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
    },
    [109] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(331),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [110] = {
        [sym_expression_list] = STATE(117),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_for] = ACTIONS(333),
        [anon_sym_in] = ACTIONS(333),
        [anon_sym_as] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(333),
        [anon_sym_LBRACK] = ACTIONS(333),
        [anon_sym_RBRACK] = ACTIONS(333),
        [anon_sym_RBRACE] = ACTIONS(333),
        [sym_comment] = ACTIONS(73),
    },
    [112] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_RBRACK] = ACTIONS(331),
        [sym_comment] = ACTIONS(73),
    },
    [113] = {
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(337),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_as] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_RBRACK] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(341),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_PLUS] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
    },
    [116] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_in] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(343),
        [sym_comment] = ACTIONS(73),
    },
    [117] = {
        [anon_sym_in] = ACTIONS(345),
        [sym_comment] = ACTIONS(73),
    },
    [118] = {
        [aux_sym_print_statement_repeat1] = STATE(120),
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [119] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(353),
        [sym_comment] = ACTIONS(73),
    },
    [121] = {
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(355),
        [sym_comment] = ACTIONS(73),
    },
    [123] = {
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [124] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(357),
        [sym_comment] = ACTIONS(73),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_COLON] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_in] = ACTIONS(359),
        [anon_sym_as] = ACTIONS(359),
        [anon_sym_LPAREN] = ACTIONS(359),
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(359),
        [anon_sym_LBRACK] = ACTIONS(359),
        [anon_sym_RBRACK] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_comment] = ACTIONS(73),
    },
    [126] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [127] = {
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [128] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(367),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
    },
    [131] = {
        [aux_sym_call_repeat2] = STATE(150),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
    },
    [132] = {
        [anon_sym_RPAREN] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
    },
    [133] = {
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(135),
        [sym_list_splat_argument] = STATE(136),
        [sym_dictionary_splat_argument] = STATE(137),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_RPAREN] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
    },
    [136] = {
        [aux_sym_call_repeat2] = STATE(140),
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
    },
    [137] = {
        [anon_sym_RPAREN] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
    },
    [138] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(263),
    },
    [139] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(145),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [140] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
    },
    [141] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(143),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [142] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_in] = ACTIONS(269),
        [anon_sym_as] = ACTIONS(269),
        [anon_sym_LPAREN] = ACTIONS(269),
        [anon_sym_RPAREN] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(269),
        [anon_sym_RBRACE] = ACTIONS(269),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(269),
    },
    [143] = {
        [anon_sym_RPAREN] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [144] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(275),
    },
    [145] = {
        [anon_sym_RPAREN] = ACTIONS(383),
        [sym_comment] = ACTIONS(73),
    },
    [146] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(281),
    },
    [147] = {
        [anon_sym_RPAREN] = ACTIONS(379),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(73),
    },
    [148] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(287),
    },
    [149] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(152),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
    },
    [151] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(145),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [152] = {
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
    },
    [153] = {
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_number] = ACTIONS(291),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [154] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_return] = ACTIONS(389),
        [anon_sym_del] = ACTIONS(389),
        [sym_pass_statement] = ACTIONS(389),
        [sym_break_statement] = ACTIONS(389),
        [sym_continue_statement] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [anon_sym_def] = ACTIONS(389),
        [anon_sym_class] = ACTIONS(389),
        [anon_sym_AT] = ACTIONS(387),
        [anon_sym_LBRACK] = ACTIONS(387),
        [anon_sym_LBRACE] = ACTIONS(387),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(387),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_as] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(297),
    },
    [156] = {
        [aux_sym_dictionary_repeat1] = STATE(159),
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(395),
        [sym_comment] = ACTIONS(73),
    },
    [157] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_pair] = STATE(104),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [158] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(307),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(307),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(399),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
    },
    [160] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_pair] = STATE(103),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(401),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_as] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(313),
    },
    [162] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(315),
    },
    [163] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_as] = ACTIONS(323),
        [anon_sym_LPAREN] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_RBRACK] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(323),
    },
    [164] = {
        [aux_sym_print_statement_repeat1] = STATE(168),
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(407),
        [sym_comment] = ACTIONS(73),
    },
    [165] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(409),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [166] = {
        [sym_expression_list] = STATE(172),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [167] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_for] = ACTIONS(333),
        [anon_sym_in] = ACTIONS(333),
        [anon_sym_as] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(333),
        [anon_sym_LBRACK] = ACTIONS(333),
        [anon_sym_RBRACK] = ACTIONS(333),
        [anon_sym_RBRACE] = ACTIONS(333),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(333),
    },
    [168] = {
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_RBRACK] = ACTIONS(409),
        [sym_comment] = ACTIONS(73),
    },
    [169] = {
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(413),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [170] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_as] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_RBRACK] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(339),
    },
    [171] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(341),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_PLUS] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(341),
    },
    [172] = {
        [anon_sym_in] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
    },
    [173] = {
        [sym__expression] = STATE(174),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [174] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(417),
        [sym_comment] = ACTIONS(73),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_COLON] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_in] = ACTIONS(359),
        [anon_sym_as] = ACTIONS(359),
        [anon_sym_LPAREN] = ACTIONS(359),
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(359),
        [anon_sym_LBRACK] = ACTIONS(359),
        [anon_sym_RBRACK] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(359),
    },
    [176] = {
        [aux_sym_dotted_name_repeat1] = STATE(187),
        [anon_sym_LPAREN] = ACTIONS(419),
        [anon_sym_DOT] = ACTIONS(421),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(419),
    },
    [177] = {
        [sym_arguments] = STATE(180),
        [anon_sym_LPAREN] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(425),
    },
    [178] = {
        [sym__expression] = STATE(182),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [179] = {
        [anon_sym_def] = ACTIONS(427),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(427),
        [sym_comment] = ACTIONS(73),
    },
    [180] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(429),
    },
    [181] = {
        [anon_sym_def] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(431),
        [anon_sym_AT] = ACTIONS(431),
        [sym_comment] = ACTIONS(73),
    },
    [182] = {
        [aux_sym_print_statement_repeat1] = STATE(184),
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(433),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [183] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(435),
    },
    [184] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_RPAREN] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
    },
    [185] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(439),
    },
    [186] = {
        [sym_identifier] = ACTIONS(441),
        [sym_comment] = ACTIONS(73),
    },
    [187] = {
        [anon_sym_LPAREN] = ACTIONS(443),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(443),
    },
    [188] = {
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(73),
    },
    [189] = {
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_DOT] = ACTIONS(449),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(449),
    },
    [190] = {
        [anon_sym_LPAREN] = ACTIONS(451),
        [anon_sym_DOT] = ACTIONS(451),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(451),
    },
    [191] = {
        [anon_sym_COLON] = ACTIONS(453),
        [anon_sym_LPAREN] = ACTIONS(455),
        [sym_comment] = ACTIONS(73),
    },
    [192] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(326),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [193] = {
        [sym_expression_list] = STATE(194),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [194] = {
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(73),
    },
    [195] = {
        [anon_sym_COLON] = ACTIONS(461),
        [sym_comment] = ACTIONS(73),
    },
    [196] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(199),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [197] = {
        [sym__statement] = STATE(208),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_module_repeat1] = STATE(212),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(477),
    },
    [198] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(477),
    },
    [199] = {
        [ts_builtin_sym_end] = ACTIONS(479),
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_del] = ACTIONS(481),
        [sym_pass_statement] = ACTIONS(481),
        [sym_break_statement] = ACTIONS(481),
        [sym_continue_statement] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(479),
        [anon_sym_LBRACK] = ACTIONS(479),
        [anon_sym_LBRACE] = ACTIONS(479),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(479),
    },
    [200] = {
        [ts_builtin_sym_end] = ACTIONS(485),
        [anon_sym_SEMI] = ACTIONS(485),
        [anon_sym_print] = ACTIONS(487),
        [anon_sym_return] = ACTIONS(487),
        [anon_sym_del] = ACTIONS(487),
        [sym_pass_statement] = ACTIONS(487),
        [sym_break_statement] = ACTIONS(487),
        [sym_continue_statement] = ACTIONS(487),
        [anon_sym_if] = ACTIONS(487),
        [anon_sym_elif] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_while] = ACTIONS(487),
        [anon_sym_try] = ACTIONS(487),
        [anon_sym_except] = ACTIONS(487),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(487),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(487),
        [anon_sym_AT] = ACTIONS(485),
        [anon_sym_LBRACK] = ACTIONS(485),
        [anon_sym_LBRACE] = ACTIONS(485),
        [sym_number] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(485),
    },
    [201] = {
        [sym__expression] = STATE(314),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [202] = {
        [sym_expression_list] = STATE(308),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [203] = {
        [sym__expression] = STATE(304),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [204] = {
        [anon_sym_COLON] = ACTIONS(491),
        [sym_comment] = ACTIONS(73),
    },
    [205] = {
        [sym_with_item] = STATE(263),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [206] = {
        [sym_identifier] = ACTIONS(493),
        [sym_comment] = ACTIONS(73),
    },
    [207] = {
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
    },
    [208] = {
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
        [anon_sym_LBRACK] = ACTIONS(139),
        [anon_sym_LBRACE] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(139),
    },
    [209] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(497),
    },
    [210] = {
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [sym_pass_statement] = ACTIONS(149),
        [sym_break_statement] = ACTIONS(149),
        [sym_continue_statement] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(147),
    },
    [211] = {
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
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(153),
    },
    [212] = {
        [sym__statement] = STATE(216),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(499),
    },
    [213] = {
        [sym_function_definition] = STATE(214),
        [sym_class_definition] = STATE(214),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(503),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [214] = {
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(179),
        [anon_sym_del] = ACTIONS(179),
        [sym_pass_statement] = ACTIONS(179),
        [sym_break_statement] = ACTIONS(179),
        [sym_continue_statement] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(177),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(505),
        [anon_sym_SEMI] = ACTIONS(505),
        [anon_sym_print] = ACTIONS(507),
        [anon_sym_return] = ACTIONS(507),
        [anon_sym_del] = ACTIONS(507),
        [sym_pass_statement] = ACTIONS(507),
        [sym_break_statement] = ACTIONS(507),
        [sym_continue_statement] = ACTIONS(507),
        [anon_sym_if] = ACTIONS(507),
        [anon_sym_elif] = ACTIONS(507),
        [anon_sym_else] = ACTIONS(507),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(507),
        [anon_sym_except] = ACTIONS(507),
        [anon_sym_finally] = ACTIONS(507),
        [anon_sym_with] = ACTIONS(507),
        [anon_sym_def] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_AT] = ACTIONS(505),
        [anon_sym_LBRACK] = ACTIONS(505),
        [anon_sym_LBRACE] = ACTIONS(505),
        [sym_number] = ACTIONS(507),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(505),
    },
    [216] = {
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_return] = ACTIONS(189),
        [anon_sym_del] = ACTIONS(189),
        [sym_pass_statement] = ACTIONS(189),
        [sym_break_statement] = ACTIONS(189),
        [sym_continue_statement] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(187),
    },
    [217] = {
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_return] = ACTIONS(389),
        [anon_sym_del] = ACTIONS(389),
        [sym_pass_statement] = ACTIONS(389),
        [sym_break_statement] = ACTIONS(389),
        [sym_continue_statement] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [anon_sym_def] = ACTIONS(389),
        [anon_sym_class] = ACTIONS(389),
        [anon_sym_AT] = ACTIONS(387),
        [anon_sym_LBRACK] = ACTIONS(387),
        [anon_sym_LBRACE] = ACTIONS(387),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(387),
    },
    [218] = {
        [anon_sym_COLON] = ACTIONS(511),
        [anon_sym_LPAREN] = ACTIONS(513),
        [sym_comment] = ACTIONS(73),
    },
    [219] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(230),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [220] = {
        [sym_expression_list] = STATE(221),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [221] = {
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(73),
    },
    [222] = {
        [anon_sym_COLON] = ACTIONS(519),
        [sym_comment] = ACTIONS(73),
    },
    [223] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(226),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [224] = {
        [sym__statement] = STATE(208),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_module_repeat1] = STATE(228),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(521),
    },
    [225] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(521),
    },
    [226] = {
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_del] = ACTIONS(481),
        [sym_pass_statement] = ACTIONS(481),
        [sym_break_statement] = ACTIONS(481),
        [sym_continue_statement] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(479),
        [anon_sym_LBRACK] = ACTIONS(479),
        [anon_sym_LBRACE] = ACTIONS(479),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(479),
    },
    [227] = {
        [anon_sym_print] = ACTIONS(487),
        [anon_sym_return] = ACTIONS(487),
        [anon_sym_del] = ACTIONS(487),
        [sym_pass_statement] = ACTIONS(487),
        [sym_break_statement] = ACTIONS(487),
        [sym_continue_statement] = ACTIONS(487),
        [anon_sym_if] = ACTIONS(487),
        [anon_sym_elif] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_while] = ACTIONS(487),
        [anon_sym_try] = ACTIONS(487),
        [anon_sym_except] = ACTIONS(487),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(487),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(487),
        [anon_sym_AT] = ACTIONS(485),
        [anon_sym_LBRACK] = ACTIONS(485),
        [anon_sym_LBRACE] = ACTIONS(485),
        [sym_number] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(485),
    },
    [228] = {
        [sym__statement] = STATE(216),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(523),
    },
    [229] = {
        [anon_sym_print] = ACTIONS(507),
        [anon_sym_return] = ACTIONS(507),
        [anon_sym_del] = ACTIONS(507),
        [sym_pass_statement] = ACTIONS(507),
        [sym_break_statement] = ACTIONS(507),
        [sym_continue_statement] = ACTIONS(507),
        [anon_sym_if] = ACTIONS(507),
        [anon_sym_elif] = ACTIONS(507),
        [anon_sym_else] = ACTIONS(507),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(507),
        [anon_sym_except] = ACTIONS(507),
        [anon_sym_finally] = ACTIONS(507),
        [anon_sym_with] = ACTIONS(507),
        [anon_sym_def] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_AT] = ACTIONS(505),
        [anon_sym_LBRACK] = ACTIONS(505),
        [anon_sym_LBRACE] = ACTIONS(505),
        [sym_number] = ACTIONS(507),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(505),
    },
    [230] = {
        [anon_sym_print] = ACTIONS(525),
        [anon_sym_return] = ACTIONS(525),
        [anon_sym_del] = ACTIONS(525),
        [sym_pass_statement] = ACTIONS(525),
        [sym_break_statement] = ACTIONS(525),
        [sym_continue_statement] = ACTIONS(525),
        [anon_sym_if] = ACTIONS(525),
        [anon_sym_for] = ACTIONS(525),
        [anon_sym_while] = ACTIONS(525),
        [anon_sym_try] = ACTIONS(525),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(525),
        [anon_sym_AT] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(527),
        [anon_sym_LBRACE] = ACTIONS(527),
        [sym_number] = ACTIONS(525),
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(527),
    },
    [231] = {
        [sym_parameters] = STATE(233),
        [anon_sym_LPAREN] = ACTIONS(531),
        [sym_comment] = ACTIONS(73),
    },
    [232] = {
        [sym_default_parameter] = STATE(239),
        [sym_list_splat_parameter] = STATE(240),
        [sym_dictionary_splat_parameter] = STATE(241),
        [aux_sym_parameters_repeat1] = STATE(242),
        [anon_sym_RPAREN] = ACTIONS(533),
        [anon_sym_STAR] = ACTIONS(535),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(73),
    },
    [233] = {
        [anon_sym_COLON] = ACTIONS(539),
        [sym_comment] = ACTIONS(73),
    },
    [234] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(235),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [235] = {
        [anon_sym_print] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(541),
        [anon_sym_del] = ACTIONS(541),
        [sym_pass_statement] = ACTIONS(541),
        [sym_break_statement] = ACTIONS(541),
        [sym_continue_statement] = ACTIONS(541),
        [anon_sym_if] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(541),
        [anon_sym_while] = ACTIONS(541),
        [anon_sym_try] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(541),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(543),
        [anon_sym_LBRACE] = ACTIONS(543),
        [sym_number] = ACTIONS(541),
        [sym_identifier] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(543),
    },
    [236] = {
        [anon_sym_COLON] = ACTIONS(547),
        [sym_comment] = ACTIONS(73),
    },
    [237] = {
        [anon_sym_STAR] = ACTIONS(549),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(73),
    },
    [238] = {
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_RPAREN] = ACTIONS(555),
        [anon_sym_EQ] = ACTIONS(557),
        [sym_comment] = ACTIONS(73),
    },
    [239] = {
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_RPAREN] = ACTIONS(555),
        [sym_comment] = ACTIONS(73),
    },
    [240] = {
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_RPAREN] = ACTIONS(555),
        [sym_comment] = ACTIONS(73),
    },
    [241] = {
        [anon_sym_RPAREN] = ACTIONS(555),
        [sym_comment] = ACTIONS(73),
    },
    [242] = {
        [sym_default_parameter] = STATE(244),
        [sym_list_splat_parameter] = STATE(245),
        [sym_dictionary_splat_parameter] = STATE(246),
        [anon_sym_STAR] = ACTIONS(535),
        [sym_identifier] = ACTIONS(561),
        [sym_comment] = ACTIONS(73),
    },
    [243] = {
        [anon_sym_COMMA] = ACTIONS(563),
        [anon_sym_RPAREN] = ACTIONS(565),
        [anon_sym_EQ] = ACTIONS(557),
        [sym_comment] = ACTIONS(73),
    },
    [244] = {
        [anon_sym_COMMA] = ACTIONS(563),
        [anon_sym_RPAREN] = ACTIONS(565),
        [sym_comment] = ACTIONS(73),
    },
    [245] = {
        [anon_sym_COMMA] = ACTIONS(567),
        [anon_sym_RPAREN] = ACTIONS(565),
        [sym_comment] = ACTIONS(73),
    },
    [246] = {
        [anon_sym_RPAREN] = ACTIONS(565),
        [sym_comment] = ACTIONS(73),
    },
    [247] = {
        [anon_sym_COLON] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
    },
    [248] = {
        [sym_dictionary_splat_parameter] = STATE(250),
        [anon_sym_STAR] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [249] = {
        [anon_sym_STAR] = ACTIONS(549),
        [sym_comment] = ACTIONS(73),
    },
    [250] = {
        [anon_sym_RPAREN] = ACTIONS(573),
        [sym_comment] = ACTIONS(73),
    },
    [251] = {
        [anon_sym_COLON] = ACTIONS(575),
        [sym_comment] = ACTIONS(73),
    },
    [252] = {
        [sym_identifier] = ACTIONS(577),
        [sym_comment] = ACTIONS(73),
    },
    [253] = {
        [anon_sym_RPAREN] = ACTIONS(579),
        [sym_comment] = ACTIONS(73),
    },
    [254] = {
        [anon_sym_RPAREN] = ACTIONS(581),
        [anon_sym_STAR] = ACTIONS(583),
        [sym_identifier] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [255] = {
        [anon_sym_COLON] = ACTIONS(587),
        [sym_comment] = ACTIONS(73),
    },
    [256] = {
        [sym__expression] = STATE(257),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [257] = {
        [anon_sym_COMMA] = ACTIONS(589),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(589),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [258] = {
        [anon_sym_COLON] = ACTIONS(591),
        [sym_comment] = ACTIONS(73),
    },
    [259] = {
        [sym_dictionary_splat_parameter] = STATE(260),
        [anon_sym_STAR] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [260] = {
        [anon_sym_RPAREN] = ACTIONS(581),
        [sym_comment] = ACTIONS(73),
    },
    [261] = {
        [anon_sym_RPAREN] = ACTIONS(565),
        [anon_sym_STAR] = ACTIONS(593),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(73),
    },
    [262] = {
        [anon_sym_COMMA] = ACTIONS(597),
        [anon_sym_RPAREN] = ACTIONS(597),
        [sym_comment] = ACTIONS(73),
    },
    [263] = {
        [aux_sym_with_statement_repeat1] = STATE(269),
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_COLON] = ACTIONS(601),
        [sym_comment] = ACTIONS(73),
    },
    [264] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(605),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [265] = {
        [sym__expression] = STATE(266),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [266] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_COLON] = ACTIONS(607),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [267] = {
        [sym_with_item] = STATE(275),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [268] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(274),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [269] = {
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_COLON] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [270] = {
        [sym_with_item] = STATE(273),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [271] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(272),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [272] = {
        [anon_sym_print] = ACTIONS(613),
        [anon_sym_return] = ACTIONS(613),
        [anon_sym_del] = ACTIONS(613),
        [sym_pass_statement] = ACTIONS(613),
        [sym_break_statement] = ACTIONS(613),
        [sym_continue_statement] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(613),
        [anon_sym_while] = ACTIONS(613),
        [anon_sym_try] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(613),
        [anon_sym_def] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_AT] = ACTIONS(615),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_LBRACE] = ACTIONS(615),
        [sym_number] = ACTIONS(613),
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(615),
    },
    [273] = {
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_COLON] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [274] = {
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(623),
        [anon_sym_LBRACE] = ACTIONS(623),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(623),
    },
    [275] = {
        [anon_sym_COMMA] = ACTIONS(627),
        [anon_sym_COLON] = ACTIONS(627),
        [sym_comment] = ACTIONS(73),
    },
    [276] = {
        [sym__simple_statement] = STATE(278),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(279),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(629),
    },
    [277] = {
        [sym__statement] = STATE(208),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_module_repeat1] = STATE(302),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(631),
    },
    [278] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(631),
    },
    [279] = {
        [sym_except_clause] = STATE(282),
        [sym_finally_clause] = STATE(283),
        [aux_sym_try_statement_repeat1] = STATE(284),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(635),
        [sym_comment] = ACTIONS(73),
    },
    [280] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [281] = {
        [anon_sym_COLON] = ACTIONS(637),
        [sym_comment] = ACTIONS(73),
    },
    [282] = {
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_else] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
        [anon_sym_except] = ACTIONS(639),
        [anon_sym_finally] = ACTIONS(639),
        [anon_sym_with] = ACTIONS(639),
        [anon_sym_def] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_AT] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(641),
        [anon_sym_LBRACE] = ACTIONS(641),
        [sym_number] = ACTIONS(639),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(641),
    },
    [283] = {
        [anon_sym_print] = ACTIONS(645),
        [anon_sym_return] = ACTIONS(645),
        [anon_sym_del] = ACTIONS(645),
        [sym_pass_statement] = ACTIONS(645),
        [sym_break_statement] = ACTIONS(645),
        [sym_continue_statement] = ACTIONS(645),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_while] = ACTIONS(645),
        [anon_sym_try] = ACTIONS(645),
        [anon_sym_with] = ACTIONS(645),
        [anon_sym_def] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_AT] = ACTIONS(647),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_LBRACE] = ACTIONS(647),
        [sym_number] = ACTIONS(645),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(647),
    },
    [284] = {
        [sym_else_clause] = STATE(286),
        [sym_except_clause] = STATE(287),
        [sym_finally_clause] = STATE(288),
        [anon_sym_print] = ACTIONS(645),
        [anon_sym_return] = ACTIONS(645),
        [anon_sym_del] = ACTIONS(645),
        [sym_pass_statement] = ACTIONS(645),
        [sym_break_statement] = ACTIONS(645),
        [sym_continue_statement] = ACTIONS(645),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_else] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_while] = ACTIONS(645),
        [anon_sym_try] = ACTIONS(645),
        [anon_sym_except] = ACTIONS(653),
        [anon_sym_finally] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(645),
        [anon_sym_def] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_AT] = ACTIONS(647),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_LBRACE] = ACTIONS(647),
        [sym_number] = ACTIONS(645),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(647),
    },
    [285] = {
        [anon_sym_COLON] = ACTIONS(657),
        [sym_comment] = ACTIONS(73),
    },
    [286] = {
        [sym_finally_clause] = STATE(289),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_finally] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(661),
    },
    [287] = {
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_except] = ACTIONS(665),
        [anon_sym_finally] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [anon_sym_LBRACE] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(667),
    },
    [288] = {
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(661),
    },
    [289] = {
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_del] = ACTIONS(671),
        [sym_pass_statement] = ACTIONS(671),
        [sym_break_statement] = ACTIONS(671),
        [sym_continue_statement] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_AT] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(673),
        [anon_sym_LBRACE] = ACTIONS(673),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(673),
    },
    [290] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(291),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [291] = {
        [anon_sym_print] = ACTIONS(677),
        [anon_sym_return] = ACTIONS(677),
        [anon_sym_del] = ACTIONS(677),
        [sym_pass_statement] = ACTIONS(677),
        [sym_break_statement] = ACTIONS(677),
        [sym_continue_statement] = ACTIONS(677),
        [anon_sym_if] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(677),
        [anon_sym_while] = ACTIONS(677),
        [anon_sym_try] = ACTIONS(677),
        [anon_sym_finally] = ACTIONS(677),
        [anon_sym_with] = ACTIONS(677),
        [anon_sym_def] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_AT] = ACTIONS(679),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [sym_number] = ACTIONS(677),
        [sym_identifier] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(679),
    },
    [292] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(293),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [293] = {
        [anon_sym_print] = ACTIONS(683),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_del] = ACTIONS(683),
        [sym_pass_statement] = ACTIONS(683),
        [sym_break_statement] = ACTIONS(683),
        [sym_continue_statement] = ACTIONS(683),
        [anon_sym_if] = ACTIONS(683),
        [anon_sym_for] = ACTIONS(683),
        [anon_sym_while] = ACTIONS(683),
        [anon_sym_try] = ACTIONS(683),
        [anon_sym_with] = ACTIONS(683),
        [anon_sym_def] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(683),
        [anon_sym_AT] = ACTIONS(685),
        [anon_sym_LBRACK] = ACTIONS(685),
        [anon_sym_LBRACE] = ACTIONS(685),
        [sym_number] = ACTIONS(683),
        [sym_identifier] = ACTIONS(687),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(685),
    },
    [294] = {
        [anon_sym_COMMA] = ACTIONS(689),
        [anon_sym_COLON] = ACTIONS(691),
        [anon_sym_as] = ACTIONS(689),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [295] = {
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [296] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(300),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [297] = {
        [anon_sym_COLON] = ACTIONS(693),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [298] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(299),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [299] = {
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_del] = ACTIONS(695),
        [sym_pass_statement] = ACTIONS(695),
        [sym_break_statement] = ACTIONS(695),
        [sym_continue_statement] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_else] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_except] = ACTIONS(695),
        [anon_sym_finally] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_AT] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [anon_sym_LBRACE] = ACTIONS(697),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(697),
    },
    [300] = {
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
        [anon_sym_LBRACK] = ACTIONS(703),
        [anon_sym_LBRACE] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(703),
    },
    [301] = {
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [sym_comment] = ACTIONS(73),
    },
    [302] = {
        [sym__statement] = STATE(216),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(707),
    },
    [303] = {
        [anon_sym_except] = ACTIONS(505),
        [anon_sym_finally] = ACTIONS(505),
        [sym_comment] = ACTIONS(73),
    },
    [304] = {
        [anon_sym_COLON] = ACTIONS(709),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [305] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(306),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [306] = {
        [sym_else_clause] = STATE(307),
        [anon_sym_print] = ACTIONS(711),
        [anon_sym_return] = ACTIONS(711),
        [anon_sym_del] = ACTIONS(711),
        [sym_pass_statement] = ACTIONS(711),
        [sym_break_statement] = ACTIONS(711),
        [sym_continue_statement] = ACTIONS(711),
        [anon_sym_if] = ACTIONS(711),
        [anon_sym_else] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(711),
        [anon_sym_while] = ACTIONS(711),
        [anon_sym_try] = ACTIONS(711),
        [anon_sym_with] = ACTIONS(711),
        [anon_sym_def] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_AT] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(713),
        [anon_sym_LBRACE] = ACTIONS(713),
        [sym_number] = ACTIONS(711),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(713),
    },
    [307] = {
        [anon_sym_print] = ACTIONS(717),
        [anon_sym_return] = ACTIONS(717),
        [anon_sym_del] = ACTIONS(717),
        [sym_pass_statement] = ACTIONS(717),
        [sym_break_statement] = ACTIONS(717),
        [sym_continue_statement] = ACTIONS(717),
        [anon_sym_if] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(717),
        [anon_sym_try] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(717),
        [anon_sym_def] = ACTIONS(717),
        [anon_sym_class] = ACTIONS(717),
        [anon_sym_AT] = ACTIONS(719),
        [anon_sym_LBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(717),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(719),
    },
    [308] = {
        [anon_sym_in] = ACTIONS(723),
        [sym_comment] = ACTIONS(73),
    },
    [309] = {
        [sym_expression_list] = STATE(310),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [310] = {
        [anon_sym_COLON] = ACTIONS(725),
        [sym_comment] = ACTIONS(73),
    },
    [311] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(312),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [312] = {
        [sym_else_clause] = STATE(313),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(729),
        [anon_sym_LBRACE] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(729),
    },
    [313] = {
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
        [anon_sym_LBRACK] = ACTIONS(735),
        [anon_sym_LBRACE] = ACTIONS(735),
        [sym_number] = ACTIONS(733),
        [sym_identifier] = ACTIONS(737),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(735),
    },
    [314] = {
        [anon_sym_COLON] = ACTIONS(739),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [315] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(316),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [316] = {
        [sym_elif_clause] = STATE(318),
        [sym_else_clause] = STATE(319),
        [aux_sym_if_statement_repeat1] = STATE(320),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_elif] = ACTIONS(743),
        [anon_sym_else] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(745),
        [anon_sym_LBRACK] = ACTIONS(745),
        [anon_sym_LBRACE] = ACTIONS(745),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(745),
    },
    [317] = {
        [sym__expression] = STATE(323),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [318] = {
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_elif] = ACTIONS(749),
        [anon_sym_else] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(751),
    },
    [319] = {
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(757),
    },
    [320] = {
        [sym_elif_clause] = STATE(321),
        [sym_else_clause] = STATE(322),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_elif] = ACTIONS(743),
        [anon_sym_else] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(757),
    },
    [321] = {
        [anon_sym_print] = ACTIONS(761),
        [anon_sym_return] = ACTIONS(761),
        [anon_sym_del] = ACTIONS(761),
        [sym_pass_statement] = ACTIONS(761),
        [sym_break_statement] = ACTIONS(761),
        [sym_continue_statement] = ACTIONS(761),
        [anon_sym_if] = ACTIONS(761),
        [anon_sym_elif] = ACTIONS(761),
        [anon_sym_else] = ACTIONS(761),
        [anon_sym_for] = ACTIONS(761),
        [anon_sym_while] = ACTIONS(761),
        [anon_sym_try] = ACTIONS(761),
        [anon_sym_with] = ACTIONS(761),
        [anon_sym_def] = ACTIONS(761),
        [anon_sym_class] = ACTIONS(761),
        [anon_sym_AT] = ACTIONS(763),
        [anon_sym_LBRACK] = ACTIONS(763),
        [anon_sym_LBRACE] = ACTIONS(763),
        [sym_number] = ACTIONS(761),
        [sym_identifier] = ACTIONS(765),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(763),
    },
    [322] = {
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(769),
    },
    [323] = {
        [anon_sym_COLON] = ACTIONS(773),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [324] = {
        [sym__simple_statement] = STATE(225),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(325),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(515),
    },
    [325] = {
        [anon_sym_print] = ACTIONS(775),
        [anon_sym_return] = ACTIONS(775),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(775),
        [sym_break_statement] = ACTIONS(775),
        [sym_continue_statement] = ACTIONS(775),
        [anon_sym_if] = ACTIONS(775),
        [anon_sym_elif] = ACTIONS(775),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(775),
        [anon_sym_while] = ACTIONS(775),
        [anon_sym_try] = ACTIONS(775),
        [anon_sym_with] = ACTIONS(775),
        [anon_sym_def] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_AT] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_number] = ACTIONS(775),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(777),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(527),
        [anon_sym_SEMI] = ACTIONS(527),
        [anon_sym_print] = ACTIONS(525),
        [anon_sym_return] = ACTIONS(525),
        [anon_sym_del] = ACTIONS(525),
        [sym_pass_statement] = ACTIONS(525),
        [sym_break_statement] = ACTIONS(525),
        [sym_continue_statement] = ACTIONS(525),
        [anon_sym_if] = ACTIONS(525),
        [anon_sym_for] = ACTIONS(525),
        [anon_sym_while] = ACTIONS(525),
        [anon_sym_try] = ACTIONS(525),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(525),
        [anon_sym_AT] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(527),
        [anon_sym_LBRACE] = ACTIONS(527),
        [sym_number] = ACTIONS(525),
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(527),
    },
    [327] = {
        [sym_parameters] = STATE(328),
        [anon_sym_LPAREN] = ACTIONS(531),
        [sym_comment] = ACTIONS(73),
    },
    [328] = {
        [anon_sym_COLON] = ACTIONS(781),
        [sym_comment] = ACTIONS(73),
    },
    [329] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(330),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(543),
        [anon_sym_SEMI] = ACTIONS(543),
        [anon_sym_print] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(541),
        [anon_sym_del] = ACTIONS(541),
        [sym_pass_statement] = ACTIONS(541),
        [sym_break_statement] = ACTIONS(541),
        [sym_continue_statement] = ACTIONS(541),
        [anon_sym_if] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(541),
        [anon_sym_while] = ACTIONS(541),
        [anon_sym_try] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(541),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(543),
        [anon_sym_LBRACE] = ACTIONS(543),
        [sym_number] = ACTIONS(541),
        [sym_identifier] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(543),
    },
    [331] = {
        [aux_sym_with_statement_repeat1] = STATE(333),
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_COLON] = ACTIONS(783),
        [sym_comment] = ACTIONS(73),
    },
    [332] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(336),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [333] = {
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_COLON] = ACTIONS(785),
        [sym_comment] = ACTIONS(73),
    },
    [334] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(335),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [335] = {
        [ts_builtin_sym_end] = ACTIONS(615),
        [anon_sym_SEMI] = ACTIONS(615),
        [anon_sym_print] = ACTIONS(613),
        [anon_sym_return] = ACTIONS(613),
        [anon_sym_del] = ACTIONS(613),
        [sym_pass_statement] = ACTIONS(613),
        [sym_break_statement] = ACTIONS(613),
        [sym_continue_statement] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(613),
        [anon_sym_while] = ACTIONS(613),
        [anon_sym_try] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(613),
        [anon_sym_def] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_AT] = ACTIONS(615),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_LBRACE] = ACTIONS(615),
        [sym_number] = ACTIONS(613),
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(615),
    },
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(623),
        [anon_sym_SEMI] = ACTIONS(623),
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(623),
        [anon_sym_LBRACE] = ACTIONS(623),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(623),
    },
    [337] = {
        [sym__simple_statement] = STATE(278),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(338),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(629),
    },
    [338] = {
        [sym_except_clause] = STATE(341),
        [sym_finally_clause] = STATE(342),
        [aux_sym_try_statement_repeat1] = STATE(343),
        [anon_sym_except] = ACTIONS(787),
        [anon_sym_finally] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
    },
    [339] = {
        [sym__expression] = STATE(353),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [340] = {
        [anon_sym_COLON] = ACTIONS(791),
        [sym_comment] = ACTIONS(73),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_else] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
        [anon_sym_except] = ACTIONS(639),
        [anon_sym_finally] = ACTIONS(639),
        [anon_sym_with] = ACTIONS(639),
        [anon_sym_def] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_AT] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(641),
        [anon_sym_LBRACE] = ACTIONS(641),
        [sym_number] = ACTIONS(639),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(641),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(647),
        [anon_sym_SEMI] = ACTIONS(647),
        [anon_sym_print] = ACTIONS(645),
        [anon_sym_return] = ACTIONS(645),
        [anon_sym_del] = ACTIONS(645),
        [sym_pass_statement] = ACTIONS(645),
        [sym_break_statement] = ACTIONS(645),
        [sym_continue_statement] = ACTIONS(645),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_while] = ACTIONS(645),
        [anon_sym_try] = ACTIONS(645),
        [anon_sym_with] = ACTIONS(645),
        [anon_sym_def] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_AT] = ACTIONS(647),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_LBRACE] = ACTIONS(647),
        [sym_number] = ACTIONS(645),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(647),
    },
    [343] = {
        [sym_else_clause] = STATE(345),
        [sym_except_clause] = STATE(346),
        [sym_finally_clause] = STATE(347),
        [ts_builtin_sym_end] = ACTIONS(647),
        [anon_sym_SEMI] = ACTIONS(647),
        [anon_sym_print] = ACTIONS(645),
        [anon_sym_return] = ACTIONS(645),
        [anon_sym_del] = ACTIONS(645),
        [sym_pass_statement] = ACTIONS(645),
        [sym_break_statement] = ACTIONS(645),
        [sym_continue_statement] = ACTIONS(645),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_while] = ACTIONS(645),
        [anon_sym_try] = ACTIONS(645),
        [anon_sym_except] = ACTIONS(795),
        [anon_sym_finally] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(645),
        [anon_sym_def] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_AT] = ACTIONS(647),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_LBRACE] = ACTIONS(647),
        [sym_number] = ACTIONS(645),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(647),
    },
    [344] = {
        [anon_sym_COLON] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
    },
    [345] = {
        [sym_finally_clause] = STATE(348),
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_finally] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_except] = ACTIONS(665),
        [anon_sym_finally] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [anon_sym_LBRACE] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(667),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
    },
    [348] = {
        [ts_builtin_sym_end] = ACTIONS(673),
        [anon_sym_SEMI] = ACTIONS(673),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_del] = ACTIONS(671),
        [sym_pass_statement] = ACTIONS(671),
        [sym_break_statement] = ACTIONS(671),
        [sym_continue_statement] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_AT] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(673),
        [anon_sym_LBRACE] = ACTIONS(673),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(673),
    },
    [349] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(350),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [350] = {
        [ts_builtin_sym_end] = ACTIONS(679),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_print] = ACTIONS(677),
        [anon_sym_return] = ACTIONS(677),
        [anon_sym_del] = ACTIONS(677),
        [sym_pass_statement] = ACTIONS(677),
        [sym_break_statement] = ACTIONS(677),
        [sym_continue_statement] = ACTIONS(677),
        [anon_sym_if] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(677),
        [anon_sym_while] = ACTIONS(677),
        [anon_sym_try] = ACTIONS(677),
        [anon_sym_finally] = ACTIONS(677),
        [anon_sym_with] = ACTIONS(677),
        [anon_sym_def] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_AT] = ACTIONS(679),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [sym_number] = ACTIONS(677),
        [sym_identifier] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(679),
    },
    [351] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(352),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(685),
        [anon_sym_SEMI] = ACTIONS(685),
        [anon_sym_print] = ACTIONS(683),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_del] = ACTIONS(683),
        [sym_pass_statement] = ACTIONS(683),
        [sym_break_statement] = ACTIONS(683),
        [sym_continue_statement] = ACTIONS(683),
        [anon_sym_if] = ACTIONS(683),
        [anon_sym_for] = ACTIONS(683),
        [anon_sym_while] = ACTIONS(683),
        [anon_sym_try] = ACTIONS(683),
        [anon_sym_with] = ACTIONS(683),
        [anon_sym_def] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(683),
        [anon_sym_AT] = ACTIONS(685),
        [anon_sym_LBRACK] = ACTIONS(685),
        [anon_sym_LBRACE] = ACTIONS(685),
        [sym_number] = ACTIONS(683),
        [sym_identifier] = ACTIONS(687),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(685),
    },
    [353] = {
        [anon_sym_COMMA] = ACTIONS(801),
        [anon_sym_COLON] = ACTIONS(803),
        [anon_sym_as] = ACTIONS(801),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [354] = {
        [sym__expression] = STATE(356),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [355] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(359),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(805),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [357] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(358),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(697),
        [anon_sym_SEMI] = ACTIONS(697),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_del] = ACTIONS(695),
        [sym_pass_statement] = ACTIONS(695),
        [sym_break_statement] = ACTIONS(695),
        [sym_continue_statement] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_else] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_except] = ACTIONS(695),
        [anon_sym_finally] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_AT] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [anon_sym_LBRACE] = ACTIONS(697),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(697),
    },
    [359] = {
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
        [anon_sym_LBRACK] = ACTIONS(703),
        [anon_sym_LBRACE] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(703),
    },
    [360] = {
        [anon_sym_COLON] = ACTIONS(807),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [361] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(362),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [362] = {
        [sym_else_clause] = STATE(363),
        [ts_builtin_sym_end] = ACTIONS(713),
        [anon_sym_SEMI] = ACTIONS(713),
        [anon_sym_print] = ACTIONS(711),
        [anon_sym_return] = ACTIONS(711),
        [anon_sym_del] = ACTIONS(711),
        [sym_pass_statement] = ACTIONS(711),
        [sym_break_statement] = ACTIONS(711),
        [sym_continue_statement] = ACTIONS(711),
        [anon_sym_if] = ACTIONS(711),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(711),
        [anon_sym_while] = ACTIONS(711),
        [anon_sym_try] = ACTIONS(711),
        [anon_sym_with] = ACTIONS(711),
        [anon_sym_def] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_AT] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(713),
        [anon_sym_LBRACE] = ACTIONS(713),
        [sym_number] = ACTIONS(711),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(713),
    },
    [363] = {
        [ts_builtin_sym_end] = ACTIONS(719),
        [anon_sym_SEMI] = ACTIONS(719),
        [anon_sym_print] = ACTIONS(717),
        [anon_sym_return] = ACTIONS(717),
        [anon_sym_del] = ACTIONS(717),
        [sym_pass_statement] = ACTIONS(717),
        [sym_break_statement] = ACTIONS(717),
        [sym_continue_statement] = ACTIONS(717),
        [anon_sym_if] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(717),
        [anon_sym_try] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(717),
        [anon_sym_def] = ACTIONS(717),
        [anon_sym_class] = ACTIONS(717),
        [anon_sym_AT] = ACTIONS(719),
        [anon_sym_LBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(717),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(719),
    },
    [364] = {
        [anon_sym_in] = ACTIONS(809),
        [sym_comment] = ACTIONS(73),
    },
    [365] = {
        [sym_expression_list] = STATE(366),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [366] = {
        [anon_sym_COLON] = ACTIONS(811),
        [sym_comment] = ACTIONS(73),
    },
    [367] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(368),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [368] = {
        [sym_else_clause] = STATE(369),
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(729),
        [anon_sym_LBRACE] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(729),
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
        [anon_sym_LBRACK] = ACTIONS(735),
        [anon_sym_LBRACE] = ACTIONS(735),
        [sym_number] = ACTIONS(733),
        [sym_identifier] = ACTIONS(737),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(735),
    },
    [370] = {
        [anon_sym_COLON] = ACTIONS(813),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [371] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(372),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [372] = {
        [sym_elif_clause] = STATE(374),
        [sym_else_clause] = STATE(375),
        [aux_sym_if_statement_repeat1] = STATE(376),
        [ts_builtin_sym_end] = ACTIONS(745),
        [anon_sym_SEMI] = ACTIONS(745),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(745),
        [anon_sym_LBRACK] = ACTIONS(745),
        [anon_sym_LBRACE] = ACTIONS(745),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(745),
    },
    [373] = {
        [sym__expression] = STATE(379),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [374] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_elif] = ACTIONS(749),
        [anon_sym_else] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(751),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_SEMI] = ACTIONS(757),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
    },
    [376] = {
        [sym_elif_clause] = STATE(377),
        [sym_else_clause] = STATE(378),
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_SEMI] = ACTIONS(757),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
    },
    [377] = {
        [ts_builtin_sym_end] = ACTIONS(763),
        [anon_sym_SEMI] = ACTIONS(763),
        [anon_sym_print] = ACTIONS(761),
        [anon_sym_return] = ACTIONS(761),
        [anon_sym_del] = ACTIONS(761),
        [sym_pass_statement] = ACTIONS(761),
        [sym_break_statement] = ACTIONS(761),
        [sym_continue_statement] = ACTIONS(761),
        [anon_sym_if] = ACTIONS(761),
        [anon_sym_elif] = ACTIONS(761),
        [anon_sym_else] = ACTIONS(761),
        [anon_sym_for] = ACTIONS(761),
        [anon_sym_while] = ACTIONS(761),
        [anon_sym_try] = ACTIONS(761),
        [anon_sym_with] = ACTIONS(761),
        [anon_sym_def] = ACTIONS(761),
        [anon_sym_class] = ACTIONS(761),
        [anon_sym_AT] = ACTIONS(763),
        [anon_sym_LBRACK] = ACTIONS(763),
        [anon_sym_LBRACE] = ACTIONS(763),
        [sym_number] = ACTIONS(761),
        [sym_identifier] = ACTIONS(765),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(763),
    },
    [378] = {
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(769),
    },
    [379] = {
        [anon_sym_COLON] = ACTIONS(817),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [380] = {
        [sym__simple_statement] = STATE(198),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(381),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(457),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(777),
        [anon_sym_SEMI] = ACTIONS(777),
        [anon_sym_print] = ACTIONS(775),
        [anon_sym_return] = ACTIONS(775),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(775),
        [sym_break_statement] = ACTIONS(775),
        [sym_continue_statement] = ACTIONS(775),
        [anon_sym_if] = ACTIONS(775),
        [anon_sym_elif] = ACTIONS(775),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(775),
        [anon_sym_while] = ACTIONS(775),
        [anon_sym_try] = ACTIONS(775),
        [anon_sym_with] = ACTIONS(775),
        [anon_sym_def] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_AT] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_number] = ACTIONS(775),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(777),
    },
    [382] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(819),
    },
    [383] = {
        [aux_sym_print_statement_repeat1] = STATE(385),
        [anon_sym_COMMA] = ACTIONS(821),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(349),
    },
    [384] = {
        [sym__expression] = STATE(388),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [385] = {
        [anon_sym_COMMA] = ACTIONS(823),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(353),
    },
    [386] = {
        [sym__expression] = STATE(387),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [387] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(343),
    },
    [388] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(355),
    },
    [389] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(825),
    },
    [390] = {
        [aux_sym_print_statement_repeat1] = STATE(391),
        [anon_sym_COMMA] = ACTIONS(821),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(827),
    },
    [391] = {
        [anon_sym_COMMA] = ACTIONS(823),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(829),
    },
    [392] = {
        [sym_with_item] = STATE(575),
        [sym_dictionary_splat_parameter] = STATE(512),
        [sym__expression] = STATE(576),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(577),
        [sym_dictionary_splat_argument] = STATE(578),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_pair] = STATE(579),
        [anon_sym_RPAREN] = ACTIONS(831),
        [anon_sym_STAR] = ACTIONS(833),
        [anon_sym_LBRACK] = ACTIONS(839),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(843),
        [anon_sym_RBRACK] = ACTIONS(845),
        [anon_sym_STAR_STAR] = ACTIONS(847),
        [anon_sym_LBRACE] = ACTIONS(851),
        [anon_sym_RBRACE] = ACTIONS(855),
        [sym_number] = ACTIONS(857),
        [sym_identifier] = ACTIONS(861),
        [sym_comment] = ACTIONS(73),
    },
    [393] = {
        [sym__expression] = STATE(566),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [394] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(436),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [395] = {
        [sym__expression] = STATE(563),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [396] = {
        [anon_sym_COLON] = ACTIONS(869),
        [sym_comment] = ACTIONS(73),
    },
    [397] = {
        [sym_expression_list] = STATE(562),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [398] = {
        [sym_expression_list] = STATE(479),
        [sym__expression] = STATE(559),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [399] = {
        [sym__expression] = STATE(555),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [400] = {
        [anon_sym_COLON] = ACTIONS(871),
        [sym_comment] = ACTIONS(73),
    },
    [401] = {
        [sym__expression] = STATE(548),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [402] = {
        [sym__expression] = STATE(547),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [403] = {
        [anon_sym_COLON] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
    },
    [404] = {
        [sym_with_item] = STATE(544),
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [405] = {
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(73),
    },
    [406] = {
        [sym_default_parameter] = STATE(239),
        [sym_list_splat_parameter] = STATE(240),
        [sym_dictionary_splat_parameter] = STATE(241),
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(538),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(130),
        [sym_list_splat_argument] = STATE(131),
        [sym_dictionary_splat_argument] = STATE(132),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(242),
        [aux_sym_call_repeat1] = STATE(133),
        [anon_sym_RPAREN] = ACTIONS(533),
        [anon_sym_STAR] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
    },
    [407] = {
        [anon_sym_COMMA] = ACTIONS(881),
        [anon_sym_COLON] = ACTIONS(887),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_in] = ACTIONS(881),
        [anon_sym_as] = ACTIONS(881),
        [anon_sym_LPAREN] = ACTIONS(881),
        [anon_sym_RPAREN] = ACTIONS(881),
        [anon_sym_PLUS] = ACTIONS(881),
        [anon_sym_LBRACK] = ACTIONS(881),
        [anon_sym_RBRACK] = ACTIONS(881),
        [anon_sym_RBRACE] = ACTIONS(881),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(899),
    },
    [408] = {
        [sym__expression] = STATE(535),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [409] = {
        [sym__expression] = STATE(127),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_STAR] = ACTIONS(549),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(907),
        [sym_comment] = ACTIONS(73),
    },
    [410] = {
        [sym_identifier] = ACTIONS(909),
        [sym_comment] = ACTIONS(73),
    },
    [411] = {
        [sym_identifier] = ACTIONS(911),
        [sym_comment] = ACTIONS(73),
    },
    [412] = {
        [sym__expression] = STATE(530),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [413] = {
        [sym__expression] = STATE(526),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [414] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_RBRACK] = ACTIONS(917),
        [sym_comment] = ACTIONS(73),
    },
    [415] = {
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_COLON] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(921),
        [anon_sym_in] = ACTIONS(921),
        [anon_sym_as] = ACTIONS(921),
        [anon_sym_LPAREN] = ACTIONS(921),
        [anon_sym_RPAREN] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(921),
        [anon_sym_LBRACK] = ACTIONS(921),
        [anon_sym_RBRACK] = ACTIONS(921),
        [anon_sym_RBRACE] = ACTIONS(921),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(921),
    },
    [416] = {
        [anon_sym_COMMA] = ACTIONS(930),
        [anon_sym_COLON] = ACTIONS(930),
        [anon_sym_for] = ACTIONS(930),
        [anon_sym_in] = ACTIONS(930),
        [anon_sym_as] = ACTIONS(930),
        [anon_sym_LPAREN] = ACTIONS(930),
        [anon_sym_RPAREN] = ACTIONS(930),
        [anon_sym_PLUS] = ACTIONS(930),
        [anon_sym_LBRACK] = ACTIONS(930),
        [anon_sym_RBRACK] = ACTIONS(930),
        [anon_sym_RBRACE] = ACTIONS(930),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(930),
    },
    [417] = {
        [sym_parameters] = STATE(431),
        [aux_sym_dotted_name_repeat1] = STATE(187),
        [anon_sym_COMMA] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(939),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(942),
        [anon_sym_RPAREN] = ACTIONS(948),
        [anon_sym_EQ] = ACTIONS(953),
        [anon_sym_DOT] = ACTIONS(955),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(959),
    },
    [418] = {
        [ts_builtin_sym_end] = ACTIONS(964),
        [anon_sym_SEMI] = ACTIONS(968),
        [anon_sym_print] = ACTIONS(971),
        [anon_sym_return] = ACTIONS(971),
        [anon_sym_del] = ACTIONS(971),
        [sym_pass_statement] = ACTIONS(971),
        [sym_break_statement] = ACTIONS(971),
        [sym_continue_statement] = ACTIONS(971),
        [anon_sym_if] = ACTIONS(971),
        [anon_sym_elif] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(971),
        [anon_sym_while] = ACTIONS(971),
        [anon_sym_try] = ACTIONS(971),
        [anon_sym_except] = ACTIONS(487),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(971),
        [anon_sym_def] = ACTIONS(974),
        [anon_sym_class] = ACTIONS(974),
        [anon_sym_AT] = ACTIONS(979),
        [anon_sym_LBRACK] = ACTIONS(968),
        [anon_sym_LBRACE] = ACTIONS(968),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(984),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(968),
        [sym__dedent] = ACTIONS(968),
    },
    [419] = {
        [sym__statement] = STATE(208),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_module_repeat1] = STATE(459),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(987),
    },
    [420] = {
        [ts_builtin_sym_end] = ACTIONS(989),
        [anon_sym_SEMI] = ACTIONS(989),
        [anon_sym_print] = ACTIONS(992),
        [anon_sym_return] = ACTIONS(992),
        [anon_sym_del] = ACTIONS(992),
        [sym_pass_statement] = ACTIONS(992),
        [sym_break_statement] = ACTIONS(992),
        [sym_continue_statement] = ACTIONS(992),
        [anon_sym_if] = ACTIONS(992),
        [anon_sym_elif] = ACTIONS(992),
        [anon_sym_else] = ACTIONS(992),
        [anon_sym_for] = ACTIONS(992),
        [anon_sym_while] = ACTIONS(992),
        [anon_sym_try] = ACTIONS(992),
        [anon_sym_except] = ACTIONS(992),
        [anon_sym_finally] = ACTIONS(992),
        [anon_sym_with] = ACTIONS(992),
        [anon_sym_def] = ACTIONS(992),
        [anon_sym_class] = ACTIONS(992),
        [anon_sym_AT] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(989),
        [anon_sym_LBRACE] = ACTIONS(989),
        [sym_number] = ACTIONS(992),
        [sym_identifier] = ACTIONS(995),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(989),
        [sym__dedent] = ACTIONS(989),
    },
    [421] = {
        [ts_builtin_sym_end] = ACTIONS(998),
        [anon_sym_SEMI] = ACTIONS(998),
        [anon_sym_print] = ACTIONS(1001),
        [anon_sym_return] = ACTIONS(1001),
        [anon_sym_del] = ACTIONS(1001),
        [sym_pass_statement] = ACTIONS(1001),
        [sym_break_statement] = ACTIONS(1001),
        [sym_continue_statement] = ACTIONS(1001),
        [anon_sym_if] = ACTIONS(1001),
        [anon_sym_for] = ACTIONS(1001),
        [anon_sym_while] = ACTIONS(1001),
        [anon_sym_try] = ACTIONS(1001),
        [anon_sym_with] = ACTIONS(1001),
        [anon_sym_def] = ACTIONS(1001),
        [anon_sym_class] = ACTIONS(1001),
        [anon_sym_AT] = ACTIONS(998),
        [anon_sym_LBRACK] = ACTIONS(998),
        [anon_sym_LBRACE] = ACTIONS(998),
        [sym_number] = ACTIONS(1001),
        [sym_identifier] = ACTIONS(1004),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(998),
        [sym__dedent] = ACTIONS(998),
    },
    [422] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1007),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [sym_pass_statement] = ACTIONS(149),
        [sym_break_statement] = ACTIONS(149),
        [sym_continue_statement] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [424] = {
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
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(1009),
        [anon_sym_SEMI] = ACTIONS(1009),
        [anon_sym_print] = ACTIONS(1012),
        [anon_sym_return] = ACTIONS(1012),
        [anon_sym_del] = ACTIONS(1012),
        [sym_pass_statement] = ACTIONS(1012),
        [sym_break_statement] = ACTIONS(1012),
        [sym_continue_statement] = ACTIONS(1012),
        [anon_sym_if] = ACTIONS(1012),
        [anon_sym_elif] = ACTIONS(1012),
        [anon_sym_else] = ACTIONS(1012),
        [anon_sym_for] = ACTIONS(1012),
        [anon_sym_while] = ACTIONS(1012),
        [anon_sym_try] = ACTIONS(1012),
        [anon_sym_with] = ACTIONS(1012),
        [anon_sym_def] = ACTIONS(1012),
        [anon_sym_class] = ACTIONS(1012),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1012),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1009),
        [sym__dedent] = ACTIONS(1009),
    },
    [426] = {
        [sym_finally_clause] = STATE(464),
        [ts_builtin_sym_end] = ACTIONS(1018),
        [anon_sym_SEMI] = ACTIONS(1018),
        [anon_sym_print] = ACTIONS(1024),
        [anon_sym_return] = ACTIONS(1024),
        [anon_sym_del] = ACTIONS(1024),
        [sym_pass_statement] = ACTIONS(1024),
        [sym_break_statement] = ACTIONS(1024),
        [sym_continue_statement] = ACTIONS(1024),
        [anon_sym_if] = ACTIONS(1024),
        [anon_sym_for] = ACTIONS(1024),
        [anon_sym_while] = ACTIONS(1024),
        [anon_sym_try] = ACTIONS(1024),
        [anon_sym_finally] = ACTIONS(1030),
        [anon_sym_with] = ACTIONS(1024),
        [anon_sym_def] = ACTIONS(1024),
        [anon_sym_class] = ACTIONS(1024),
        [anon_sym_AT] = ACTIONS(1018),
        [anon_sym_LBRACK] = ACTIONS(1018),
        [anon_sym_LBRACE] = ACTIONS(1018),
        [sym_number] = ACTIONS(1024),
        [sym_identifier] = ACTIONS(1032),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1018),
        [sym__dedent] = ACTIONS(1018),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(1038),
        [anon_sym_SEMI] = ACTIONS(1038),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_else] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_except] = ACTIONS(1041),
        [anon_sym_finally] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1038),
        [anon_sym_LBRACK] = ACTIONS(1038),
        [anon_sym_LBRACE] = ACTIONS(1038),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1044),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1038),
        [sym__dedent] = ACTIONS(1038),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(1047),
        [anon_sym_SEMI] = ACTIONS(1047),
        [anon_sym_print] = ACTIONS(1051),
        [anon_sym_return] = ACTIONS(1051),
        [anon_sym_del] = ACTIONS(1051),
        [sym_pass_statement] = ACTIONS(1051),
        [sym_break_statement] = ACTIONS(1051),
        [sym_continue_statement] = ACTIONS(1051),
        [anon_sym_if] = ACTIONS(1051),
        [anon_sym_for] = ACTIONS(1051),
        [anon_sym_while] = ACTIONS(1051),
        [anon_sym_try] = ACTIONS(1051),
        [anon_sym_with] = ACTIONS(1051),
        [anon_sym_def] = ACTIONS(1051),
        [anon_sym_class] = ACTIONS(1051),
        [anon_sym_AT] = ACTIONS(1047),
        [anon_sym_LBRACK] = ACTIONS(1047),
        [anon_sym_LBRACE] = ACTIONS(1047),
        [sym_number] = ACTIONS(1051),
        [sym_identifier] = ACTIONS(1055),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1047),
        [sym__dedent] = ACTIONS(1047),
    },
    [429] = {
        [aux_sym_with_statement_repeat1] = STATE(447),
        [anon_sym_COMMA] = ACTIONS(1059),
        [anon_sym_COLON] = ACTIONS(1063),
        [sym_comment] = ACTIONS(73),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(1067),
        [anon_sym_SEMI] = ACTIONS(1067),
        [anon_sym_print] = ACTIONS(1070),
        [anon_sym_return] = ACTIONS(1070),
        [anon_sym_del] = ACTIONS(1070),
        [sym_pass_statement] = ACTIONS(1070),
        [sym_break_statement] = ACTIONS(1070),
        [sym_continue_statement] = ACTIONS(1070),
        [anon_sym_if] = ACTIONS(1070),
        [anon_sym_for] = ACTIONS(1070),
        [anon_sym_while] = ACTIONS(1070),
        [anon_sym_try] = ACTIONS(1070),
        [anon_sym_with] = ACTIONS(1070),
        [anon_sym_def] = ACTIONS(1070),
        [anon_sym_class] = ACTIONS(1070),
        [anon_sym_AT] = ACTIONS(1067),
        [anon_sym_LBRACK] = ACTIONS(1067),
        [anon_sym_LBRACE] = ACTIONS(1067),
        [sym_number] = ACTIONS(1070),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1067),
        [sym__dedent] = ACTIONS(1067),
    },
    [431] = {
        [anon_sym_COLON] = ACTIONS(1076),
        [sym_comment] = ACTIONS(73),
    },
    [432] = {
        [anon_sym_COMMA] = ACTIONS(1078),
        [anon_sym_RPAREN] = ACTIONS(1080),
        [sym_comment] = ACTIONS(73),
    },
    [433] = {
        [anon_sym_COMMA] = ACTIONS(1082),
        [anon_sym_RPAREN] = ACTIONS(1080),
        [sym_comment] = ACTIONS(73),
    },
    [434] = {
        [anon_sym_RPAREN] = ACTIONS(1084),
        [sym_comment] = ACTIONS(73),
    },
    [435] = {
        [anon_sym_def] = ACTIONS(1086),
        [anon_sym_class] = ACTIONS(1086),
        [anon_sym_AT] = ACTIONS(1086),
        [sym_comment] = ACTIONS(73),
    },
    [436] = {
        [sym_elif_clause] = STATE(497),
        [sym_else_clause] = STATE(506),
        [sym_except_clause] = STATE(507),
        [sym_finally_clause] = STATE(508),
        [aux_sym_if_statement_repeat1] = STATE(445),
        [aux_sym_try_statement_repeat1] = STATE(446),
        [ts_builtin_sym_end] = ACTIONS(1089),
        [anon_sym_SEMI] = ACTIONS(1089),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1117),
        [anon_sym_else] = ACTIONS(1120),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_except] = ACTIONS(1125),
        [anon_sym_finally] = ACTIONS(1129),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1089),
        [anon_sym_LBRACE] = ACTIONS(1089),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1134),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1089),
        [sym__dedent] = ACTIONS(1089),
    },
    [437] = {
        [anon_sym_COLON] = ACTIONS(1148),
        [anon_sym_in] = ACTIONS(1150),
        [anon_sym_RPAREN] = ACTIONS(1152),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1154),
    },
    [438] = {
        [aux_sym_print_statement_repeat1] = STATE(444),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1157),
        [anon_sym_COLON] = ACTIONS(1172),
        [anon_sym_for] = ACTIONS(1180),
        [anon_sym_in] = ACTIONS(1183),
        [anon_sym_as] = ACTIONS(1188),
        [anon_sym_LPAREN] = ACTIONS(1191),
        [anon_sym_RPAREN] = ACTIONS(1194),
        [anon_sym_PLUS] = ACTIONS(1206),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_RBRACK] = ACTIONS(1212),
        [anon_sym_RBRACE] = ACTIONS(1219),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1222),
    },
    [439] = {
        [anon_sym_COMMA] = ACTIONS(1229),
        [anon_sym_RPAREN] = ACTIONS(1233),
        [sym_comment] = ACTIONS(73),
    },
    [440] = {
        [aux_sym_call_repeat2] = STATE(449),
        [anon_sym_COMMA] = ACTIONS(1237),
        [anon_sym_RPAREN] = ACTIONS(1239),
        [sym_comment] = ACTIONS(73),
    },
    [441] = {
        [anon_sym_RPAREN] = ACTIONS(1241),
        [sym_comment] = ACTIONS(73),
    },
    [442] = {
        [aux_sym_dictionary_repeat1] = STATE(159),
        [anon_sym_COMMA] = ACTIONS(1243),
        [anon_sym_RBRACE] = ACTIONS(1247),
        [sym_comment] = ACTIONS(73),
    },
    [443] = {
        [sym__statement] = STATE(474),
        [sym__simple_statement] = STATE(475),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(423),
        [sym_if_statement] = STATE(424),
        [sym_for_statement] = STATE(424),
        [sym_while_statement] = STATE(424),
        [sym_try_statement] = STATE(424),
        [sym_with_statement] = STATE(424),
        [sym_function_definition] = STATE(424),
        [sym_class_definition] = STATE(424),
        [sym_decorated_definition] = STATE(424),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(448),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(1251),
        [anon_sym_for] = ACTIONS(1253),
        [anon_sym_while] = ACTIONS(1255),
        [anon_sym_try] = ACTIONS(1257),
        [anon_sym_with] = ACTIONS(1259),
        [anon_sym_def] = ACTIONS(1261),
        [anon_sym_class] = ACTIONS(1263),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(1265),
    },
    [444] = {
        [anon_sym_COMMA] = ACTIONS(1267),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(1269),
        [anon_sym_RBRACK] = ACTIONS(409),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1272),
    },
    [445] = {
        [sym_elif_clause] = STATE(465),
        [sym_else_clause] = STATE(466),
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_SEMI] = ACTIONS(757),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_elif] = ACTIONS(1275),
        [anon_sym_else] = ACTIONS(1277),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
        [sym__dedent] = ACTIONS(757),
    },
    [446] = {
        [sym_else_clause] = STATE(461),
        [sym_except_clause] = STATE(462),
        [sym_finally_clause] = STATE(463),
        [ts_builtin_sym_end] = ACTIONS(647),
        [anon_sym_SEMI] = ACTIONS(647),
        [anon_sym_print] = ACTIONS(645),
        [anon_sym_return] = ACTIONS(645),
        [anon_sym_del] = ACTIONS(645),
        [sym_pass_statement] = ACTIONS(645),
        [sym_break_statement] = ACTIONS(645),
        [sym_continue_statement] = ACTIONS(645),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_else] = ACTIONS(1277),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_while] = ACTIONS(645),
        [anon_sym_try] = ACTIONS(645),
        [anon_sym_except] = ACTIONS(1279),
        [anon_sym_finally] = ACTIONS(1030),
        [anon_sym_with] = ACTIONS(645),
        [anon_sym_def] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_AT] = ACTIONS(647),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_LBRACE] = ACTIONS(647),
        [sym_number] = ACTIONS(645),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(647),
        [sym__dedent] = ACTIONS(647),
    },
    [447] = {
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_COLON] = ACTIONS(1281),
        [sym_comment] = ACTIONS(73),
    },
    [448] = {
        [sym_function_definition] = STATE(454),
        [sym_class_definition] = STATE(454),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1283),
        [anon_sym_class] = ACTIONS(1285),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [449] = {
        [anon_sym_COMMA] = ACTIONS(1287),
        [anon_sym_RPAREN] = ACTIONS(1289),
        [sym_comment] = ACTIONS(73),
    },
    [450] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(452),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [451] = {
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_COLON] = ACTIONS(1291),
        [anon_sym_for] = ACTIONS(1291),
        [anon_sym_in] = ACTIONS(1291),
        [anon_sym_as] = ACTIONS(1291),
        [anon_sym_LPAREN] = ACTIONS(1291),
        [anon_sym_RPAREN] = ACTIONS(1291),
        [anon_sym_PLUS] = ACTIONS(1291),
        [anon_sym_LBRACK] = ACTIONS(1291),
        [anon_sym_RBRACK] = ACTIONS(1291),
        [anon_sym_RBRACE] = ACTIONS(1291),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1291),
    },
    [452] = {
        [anon_sym_RPAREN] = ACTIONS(1294),
        [sym_comment] = ACTIONS(73),
    },
    [453] = {
        [anon_sym_COMMA] = ACTIONS(1296),
        [anon_sym_COLON] = ACTIONS(1296),
        [anon_sym_for] = ACTIONS(1296),
        [anon_sym_in] = ACTIONS(1296),
        [anon_sym_as] = ACTIONS(1296),
        [anon_sym_LPAREN] = ACTIONS(1296),
        [anon_sym_RPAREN] = ACTIONS(1296),
        [anon_sym_PLUS] = ACTIONS(1296),
        [anon_sym_LBRACK] = ACTIONS(1296),
        [anon_sym_RBRACK] = ACTIONS(1296),
        [anon_sym_RBRACE] = ACTIONS(1296),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1296),
    },
    [454] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(179),
        [anon_sym_del] = ACTIONS(179),
        [sym_pass_statement] = ACTIONS(179),
        [sym_break_statement] = ACTIONS(179),
        [sym_continue_statement] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [455] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(457),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [456] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(987),
    },
    [457] = {
        [ts_builtin_sym_end] = ACTIONS(615),
        [anon_sym_SEMI] = ACTIONS(615),
        [anon_sym_print] = ACTIONS(613),
        [anon_sym_return] = ACTIONS(613),
        [anon_sym_del] = ACTIONS(613),
        [sym_pass_statement] = ACTIONS(613),
        [sym_break_statement] = ACTIONS(613),
        [sym_continue_statement] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(613),
        [anon_sym_while] = ACTIONS(613),
        [anon_sym_try] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(613),
        [anon_sym_def] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_AT] = ACTIONS(615),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_LBRACE] = ACTIONS(615),
        [sym_number] = ACTIONS(613),
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(615),
        [sym__dedent] = ACTIONS(615),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(485),
        [anon_sym_SEMI] = ACTIONS(485),
        [anon_sym_print] = ACTIONS(487),
        [anon_sym_return] = ACTIONS(487),
        [anon_sym_del] = ACTIONS(487),
        [sym_pass_statement] = ACTIONS(487),
        [sym_break_statement] = ACTIONS(487),
        [sym_continue_statement] = ACTIONS(487),
        [anon_sym_if] = ACTIONS(487),
        [anon_sym_elif] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_while] = ACTIONS(487),
        [anon_sym_try] = ACTIONS(487),
        [anon_sym_except] = ACTIONS(487),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(487),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(487),
        [anon_sym_AT] = ACTIONS(485),
        [anon_sym_LBRACK] = ACTIONS(485),
        [anon_sym_LBRACE] = ACTIONS(485),
        [sym_number] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(485),
        [sym__dedent] = ACTIONS(485),
    },
    [459] = {
        [sym__statement] = STATE(216),
        [sym__simple_statement] = STATE(209),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(210),
        [sym_if_statement] = STATE(211),
        [sym_for_statement] = STATE(211),
        [sym_while_statement] = STATE(211),
        [sym_try_statement] = STATE(211),
        [sym_with_statement] = STATE(211),
        [sym_function_definition] = STATE(211),
        [sym_class_definition] = STATE(211),
        [sym_decorated_definition] = STATE(211),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(213),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(465),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(469),
        [anon_sym_with] = ACTIONS(471),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1265),
    },
    [460] = {
        [ts_builtin_sym_end] = ACTIONS(505),
        [anon_sym_SEMI] = ACTIONS(505),
        [anon_sym_print] = ACTIONS(507),
        [anon_sym_return] = ACTIONS(507),
        [anon_sym_del] = ACTIONS(507),
        [sym_pass_statement] = ACTIONS(507),
        [sym_break_statement] = ACTIONS(507),
        [sym_continue_statement] = ACTIONS(507),
        [anon_sym_if] = ACTIONS(507),
        [anon_sym_elif] = ACTIONS(507),
        [anon_sym_else] = ACTIONS(507),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(507),
        [anon_sym_except] = ACTIONS(507),
        [anon_sym_finally] = ACTIONS(507),
        [anon_sym_with] = ACTIONS(507),
        [anon_sym_def] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_AT] = ACTIONS(505),
        [anon_sym_LBRACK] = ACTIONS(505),
        [anon_sym_LBRACE] = ACTIONS(505),
        [sym_number] = ACTIONS(507),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(505),
        [sym__dedent] = ACTIONS(505),
    },
    [461] = {
        [sym_finally_clause] = STATE(464),
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_finally] = ACTIONS(1030),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
        [sym__dedent] = ACTIONS(661),
    },
    [462] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_except] = ACTIONS(665),
        [anon_sym_finally] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [anon_sym_LBRACE] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(667),
        [sym__dedent] = ACTIONS(667),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
        [sym__dedent] = ACTIONS(661),
    },
    [464] = {
        [ts_builtin_sym_end] = ACTIONS(673),
        [anon_sym_SEMI] = ACTIONS(673),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_del] = ACTIONS(671),
        [sym_pass_statement] = ACTIONS(671),
        [sym_break_statement] = ACTIONS(671),
        [sym_continue_statement] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_AT] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(673),
        [anon_sym_LBRACE] = ACTIONS(673),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(673),
        [sym__dedent] = ACTIONS(673),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(763),
        [anon_sym_SEMI] = ACTIONS(763),
        [anon_sym_print] = ACTIONS(761),
        [anon_sym_return] = ACTIONS(761),
        [anon_sym_del] = ACTIONS(761),
        [sym_pass_statement] = ACTIONS(761),
        [sym_break_statement] = ACTIONS(761),
        [sym_continue_statement] = ACTIONS(761),
        [anon_sym_if] = ACTIONS(761),
        [anon_sym_elif] = ACTIONS(761),
        [anon_sym_else] = ACTIONS(761),
        [anon_sym_for] = ACTIONS(761),
        [anon_sym_while] = ACTIONS(761),
        [anon_sym_try] = ACTIONS(761),
        [anon_sym_with] = ACTIONS(761),
        [anon_sym_def] = ACTIONS(761),
        [anon_sym_class] = ACTIONS(761),
        [anon_sym_AT] = ACTIONS(763),
        [anon_sym_LBRACK] = ACTIONS(763),
        [anon_sym_LBRACE] = ACTIONS(763),
        [sym_number] = ACTIONS(761),
        [sym_identifier] = ACTIONS(765),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(763),
        [sym__dedent] = ACTIONS(763),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(769),
        [sym__dedent] = ACTIONS(769),
    },
    [467] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(468),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [468] = {
        [ts_builtin_sym_end] = ACTIONS(679),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_print] = ACTIONS(677),
        [anon_sym_return] = ACTIONS(677),
        [anon_sym_del] = ACTIONS(677),
        [sym_pass_statement] = ACTIONS(677),
        [sym_break_statement] = ACTIONS(677),
        [sym_continue_statement] = ACTIONS(677),
        [anon_sym_if] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(677),
        [anon_sym_while] = ACTIONS(677),
        [anon_sym_try] = ACTIONS(677),
        [anon_sym_finally] = ACTIONS(677),
        [anon_sym_with] = ACTIONS(677),
        [anon_sym_def] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_AT] = ACTIONS(679),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [sym_number] = ACTIONS(677),
        [sym_identifier] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(679),
        [sym__dedent] = ACTIONS(679),
    },
    [469] = {
        [sym__expression] = STATE(470),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(413),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [470] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_in] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(1299),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(343),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(343),
    },
    [471] = {
        [sym__expression] = STATE(472),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [472] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1191),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1301),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [473] = {
        [sym_expression_list] = STATE(477),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_return] = ACTIONS(189),
        [anon_sym_del] = ACTIONS(189),
        [sym_pass_statement] = ACTIONS(189),
        [sym_break_statement] = ACTIONS(189),
        [sym_continue_statement] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [475] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1304),
    },
    [476] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_print] = ACTIONS(389),
        [anon_sym_return] = ACTIONS(389),
        [anon_sym_del] = ACTIONS(389),
        [sym_pass_statement] = ACTIONS(389),
        [sym_break_statement] = ACTIONS(389),
        [sym_continue_statement] = ACTIONS(389),
        [anon_sym_if] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_while] = ACTIONS(389),
        [anon_sym_try] = ACTIONS(389),
        [anon_sym_with] = ACTIONS(389),
        [anon_sym_def] = ACTIONS(389),
        [anon_sym_class] = ACTIONS(389),
        [anon_sym_AT] = ACTIONS(387),
        [anon_sym_LBRACK] = ACTIONS(387),
        [anon_sym_LBRACE] = ACTIONS(387),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(387),
        [sym__dedent] = ACTIONS(387),
    },
    [477] = {
        [anon_sym_in] = ACTIONS(1306),
        [sym_comment] = ACTIONS(73),
    },
    [478] = {
        [sym_expression_list] = STATE(479),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [479] = {
        [anon_sym_COLON] = ACTIONS(1148),
        [sym_comment] = ACTIONS(73),
    },
    [480] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(481),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [481] = {
        [sym_else_clause] = STATE(482),
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(1277),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(729),
        [anon_sym_LBRACE] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(729),
        [sym__dedent] = ACTIONS(729),
    },
    [482] = {
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
        [anon_sym_LBRACK] = ACTIONS(735),
        [anon_sym_LBRACE] = ACTIONS(735),
        [sym_number] = ACTIONS(733),
        [sym_identifier] = ACTIONS(737),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(735),
        [sym__dedent] = ACTIONS(735),
    },
    [483] = {
        [anon_sym_COMMA] = ACTIONS(881),
        [anon_sym_COLON] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_in] = ACTIONS(881),
        [anon_sym_as] = ACTIONS(881),
        [anon_sym_LPAREN] = ACTIONS(881),
        [anon_sym_RPAREN] = ACTIONS(881),
        [anon_sym_PLUS] = ACTIONS(881),
        [anon_sym_LBRACK] = ACTIONS(881),
        [anon_sym_RBRACK] = ACTIONS(881),
        [anon_sym_RBRACE] = ACTIONS(881),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(881),
    },
    [484] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(486),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [485] = {
        [anon_sym_COMMA] = ACTIONS(1308),
        [anon_sym_COLON] = ACTIONS(1308),
        [anon_sym_for] = ACTIONS(1308),
        [anon_sym_in] = ACTIONS(1308),
        [anon_sym_as] = ACTIONS(1308),
        [anon_sym_LPAREN] = ACTIONS(1308),
        [anon_sym_RPAREN] = ACTIONS(1308),
        [anon_sym_PLUS] = ACTIONS(1308),
        [anon_sym_LBRACK] = ACTIONS(1308),
        [anon_sym_RBRACK] = ACTIONS(1308),
        [anon_sym_RBRACE] = ACTIONS(1308),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1308),
    },
    [486] = {
        [anon_sym_RPAREN] = ACTIONS(1311),
        [sym_comment] = ACTIONS(73),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(1313),
        [anon_sym_COLON] = ACTIONS(1313),
        [anon_sym_for] = ACTIONS(1313),
        [anon_sym_in] = ACTIONS(1313),
        [anon_sym_as] = ACTIONS(1313),
        [anon_sym_LPAREN] = ACTIONS(1313),
        [anon_sym_RPAREN] = ACTIONS(1313),
        [anon_sym_PLUS] = ACTIONS(1313),
        [anon_sym_LBRACK] = ACTIONS(1313),
        [anon_sym_RBRACK] = ACTIONS(1313),
        [anon_sym_RBRACE] = ACTIONS(1313),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1313),
    },
    [488] = {
        [anon_sym_RPAREN] = ACTIONS(1289),
        [anon_sym_STAR] = ACTIONS(1316),
        [anon_sym_LBRACK] = ACTIONS(1319),
        [anon_sym_STAR_STAR] = ACTIONS(1319),
        [anon_sym_LBRACE] = ACTIONS(1319),
        [sym_number] = ACTIONS(1316),
        [sym_identifier] = ACTIONS(1316),
        [sym_comment] = ACTIONS(73),
    },
    [489] = {
        [sym__expression] = STATE(500),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(1289),
        [anon_sym_STAR] = ACTIONS(1316),
        [anon_sym_LBRACK] = ACTIONS(839),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1322),
        [anon_sym_STAR_STAR] = ACTIONS(1319),
        [anon_sym_LBRACE] = ACTIONS(851),
        [sym_number] = ACTIONS(857),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(73),
    },
    [490] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(493),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [491] = {
        [anon_sym_COMMA] = ACTIONS(1308),
        [anon_sym_COLON] = ACTIONS(1308),
        [anon_sym_for] = ACTIONS(1308),
        [anon_sym_in] = ACTIONS(1308),
        [anon_sym_as] = ACTIONS(1308),
        [anon_sym_LPAREN] = ACTIONS(1308),
        [anon_sym_RPAREN] = ACTIONS(1308),
        [anon_sym_PLUS] = ACTIONS(1308),
        [anon_sym_LBRACK] = ACTIONS(1308),
        [anon_sym_RBRACK] = ACTIONS(1308),
        [anon_sym_RBRACE] = ACTIONS(1308),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1324),
    },
    [492] = {
        [anon_sym_COMMA] = ACTIONS(1328),
        [anon_sym_COLON] = ACTIONS(1328),
        [anon_sym_for] = ACTIONS(1328),
        [anon_sym_in] = ACTIONS(1328),
        [anon_sym_as] = ACTIONS(1328),
        [anon_sym_LPAREN] = ACTIONS(1328),
        [anon_sym_RPAREN] = ACTIONS(1328),
        [anon_sym_PLUS] = ACTIONS(1328),
        [anon_sym_LBRACK] = ACTIONS(1328),
        [anon_sym_RBRACK] = ACTIONS(1328),
        [anon_sym_RBRACE] = ACTIONS(1328),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1328),
    },
    [493] = {
        [sym_elif_clause] = STATE(497),
        [sym_else_clause] = STATE(498),
        [aux_sym_if_statement_repeat1] = STATE(445),
        [ts_builtin_sym_end] = ACTIONS(1332),
        [anon_sym_SEMI] = ACTIONS(1332),
        [anon_sym_print] = ACTIONS(1338),
        [anon_sym_return] = ACTIONS(1338),
        [anon_sym_del] = ACTIONS(1338),
        [sym_pass_statement] = ACTIONS(1338),
        [sym_break_statement] = ACTIONS(1338),
        [sym_continue_statement] = ACTIONS(1338),
        [anon_sym_if] = ACTIONS(1338),
        [anon_sym_elif] = ACTIONS(1117),
        [anon_sym_else] = ACTIONS(1120),
        [anon_sym_for] = ACTIONS(1338),
        [anon_sym_while] = ACTIONS(1338),
        [anon_sym_try] = ACTIONS(1338),
        [anon_sym_except] = ACTIONS(1344),
        [anon_sym_finally] = ACTIONS(1344),
        [anon_sym_with] = ACTIONS(1338),
        [anon_sym_def] = ACTIONS(1338),
        [anon_sym_class] = ACTIONS(1338),
        [anon_sym_AT] = ACTIONS(1332),
        [anon_sym_LBRACK] = ACTIONS(1332),
        [anon_sym_LBRACE] = ACTIONS(1332),
        [sym_number] = ACTIONS(1338),
        [sym_identifier] = ACTIONS(1347),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1332),
        [sym__dedent] = ACTIONS(1332),
    },
    [494] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1353),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [495] = {
        [sym__expression] = STATE(496),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [496] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1191),
        [anon_sym_PLUS] = ACTIONS(1355),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [497] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_elif] = ACTIONS(749),
        [anon_sym_else] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(751),
        [sym__dedent] = ACTIONS(751),
    },
    [498] = {
        [ts_builtin_sym_end] = ACTIONS(1358),
        [anon_sym_SEMI] = ACTIONS(1358),
        [anon_sym_print] = ACTIONS(1361),
        [anon_sym_return] = ACTIONS(1361),
        [anon_sym_del] = ACTIONS(1361),
        [sym_pass_statement] = ACTIONS(1361),
        [sym_break_statement] = ACTIONS(1361),
        [sym_continue_statement] = ACTIONS(1361),
        [anon_sym_if] = ACTIONS(1361),
        [anon_sym_for] = ACTIONS(1361),
        [anon_sym_while] = ACTIONS(1361),
        [anon_sym_try] = ACTIONS(1361),
        [anon_sym_with] = ACTIONS(1361),
        [anon_sym_def] = ACTIONS(1361),
        [anon_sym_class] = ACTIONS(1361),
        [anon_sym_AT] = ACTIONS(1358),
        [anon_sym_LBRACK] = ACTIONS(1358),
        [anon_sym_LBRACE] = ACTIONS(1358),
        [sym_number] = ACTIONS(1361),
        [sym_identifier] = ACTIONS(1364),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1358),
        [sym__dedent] = ACTIONS(1358),
    },
    [499] = {
        [anon_sym_COMMA] = ACTIONS(1367),
        [anon_sym_COLON] = ACTIONS(1367),
        [anon_sym_for] = ACTIONS(1367),
        [anon_sym_in] = ACTIONS(1367),
        [anon_sym_as] = ACTIONS(1367),
        [anon_sym_LPAREN] = ACTIONS(1367),
        [anon_sym_RPAREN] = ACTIONS(1367),
        [anon_sym_PLUS] = ACTIONS(1367),
        [anon_sym_LBRACK] = ACTIONS(1367),
        [anon_sym_RBRACK] = ACTIONS(1367),
        [anon_sym_RBRACE] = ACTIONS(1367),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1367),
    },
    [500] = {
        [anon_sym_COMMA] = ACTIONS(1370),
        [anon_sym_COLON] = ACTIONS(1373),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(1299),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1370),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(355),
    },
    [501] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(502),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [502] = {
        [ts_builtin_sym_end] = ACTIONS(697),
        [anon_sym_SEMI] = ACTIONS(697),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_del] = ACTIONS(695),
        [sym_pass_statement] = ACTIONS(695),
        [sym_break_statement] = ACTIONS(695),
        [sym_continue_statement] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_else] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_except] = ACTIONS(695),
        [anon_sym_finally] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_AT] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [anon_sym_LBRACE] = ACTIONS(697),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(697),
        [sym__dedent] = ACTIONS(697),
    },
    [503] = {
        [anon_sym_COLON] = ACTIONS(1376),
        [sym_comment] = ACTIONS(73),
    },
    [504] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(505),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [505] = {
        [ts_builtin_sym_end] = ACTIONS(479),
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_print] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(481),
        [anon_sym_del] = ACTIONS(481),
        [sym_pass_statement] = ACTIONS(481),
        [sym_break_statement] = ACTIONS(481),
        [sym_continue_statement] = ACTIONS(481),
        [anon_sym_if] = ACTIONS(481),
        [anon_sym_for] = ACTIONS(481),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(481),
        [anon_sym_with] = ACTIONS(481),
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(479),
        [anon_sym_LBRACK] = ACTIONS(479),
        [anon_sym_LBRACE] = ACTIONS(479),
        [sym_number] = ACTIONS(481),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(479),
        [sym__dedent] = ACTIONS(479),
    },
    [506] = {
        [ts_builtin_sym_end] = ACTIONS(1378),
        [anon_sym_SEMI] = ACTIONS(1378),
        [anon_sym_print] = ACTIONS(1382),
        [anon_sym_return] = ACTIONS(1382),
        [anon_sym_del] = ACTIONS(1382),
        [sym_pass_statement] = ACTIONS(1382),
        [sym_break_statement] = ACTIONS(1382),
        [sym_continue_statement] = ACTIONS(1382),
        [anon_sym_if] = ACTIONS(1382),
        [anon_sym_for] = ACTIONS(1382),
        [anon_sym_while] = ACTIONS(1382),
        [anon_sym_try] = ACTIONS(1382),
        [anon_sym_with] = ACTIONS(1382),
        [anon_sym_def] = ACTIONS(1382),
        [anon_sym_class] = ACTIONS(1382),
        [anon_sym_AT] = ACTIONS(1378),
        [anon_sym_LBRACK] = ACTIONS(1378),
        [anon_sym_LBRACE] = ACTIONS(1378),
        [sym_number] = ACTIONS(1382),
        [sym_identifier] = ACTIONS(1386),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1378),
        [sym__dedent] = ACTIONS(1378),
    },
    [507] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_else] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
        [anon_sym_except] = ACTIONS(639),
        [anon_sym_finally] = ACTIONS(639),
        [anon_sym_with] = ACTIONS(639),
        [anon_sym_def] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_AT] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(641),
        [anon_sym_LBRACE] = ACTIONS(641),
        [sym_number] = ACTIONS(639),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(641),
        [sym__dedent] = ACTIONS(641),
    },
    [508] = {
        [ts_builtin_sym_end] = ACTIONS(647),
        [anon_sym_SEMI] = ACTIONS(647),
        [anon_sym_print] = ACTIONS(645),
        [anon_sym_return] = ACTIONS(645),
        [anon_sym_del] = ACTIONS(645),
        [sym_pass_statement] = ACTIONS(645),
        [sym_break_statement] = ACTIONS(645),
        [sym_continue_statement] = ACTIONS(645),
        [anon_sym_if] = ACTIONS(645),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_while] = ACTIONS(645),
        [anon_sym_try] = ACTIONS(645),
        [anon_sym_with] = ACTIONS(645),
        [anon_sym_def] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_AT] = ACTIONS(647),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_LBRACE] = ACTIONS(647),
        [sym_number] = ACTIONS(645),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(647),
        [sym__dedent] = ACTIONS(647),
    },
    [509] = {
        [anon_sym_COLON] = ACTIONS(1390),
        [sym_comment] = ACTIONS(73),
    },
    [510] = {
        [sym_dictionary_splat_parameter] = STATE(512),
        [anon_sym_STAR] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [511] = {
        [anon_sym_COLON] = ACTIONS(1395),
        [sym_comment] = ACTIONS(73),
    },
    [512] = {
        [anon_sym_RPAREN] = ACTIONS(1398),
        [sym_comment] = ACTIONS(73),
    },
    [513] = {
        [anon_sym_COLON] = ACTIONS(1400),
        [sym_comment] = ACTIONS(73),
    },
    [514] = {
        [anon_sym_RPAREN] = ACTIONS(1403),
        [anon_sym_STAR] = ACTIONS(1405),
        [sym_identifier] = ACTIONS(1408),
        [sym_comment] = ACTIONS(73),
    },
    [515] = {
        [anon_sym_COLON] = ACTIONS(1411),
        [sym_comment] = ACTIONS(73),
    },
    [516] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(517),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(543),
        [anon_sym_SEMI] = ACTIONS(543),
        [anon_sym_print] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(541),
        [anon_sym_del] = ACTIONS(541),
        [sym_pass_statement] = ACTIONS(541),
        [sym_break_statement] = ACTIONS(541),
        [sym_continue_statement] = ACTIONS(541),
        [anon_sym_if] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(541),
        [anon_sym_while] = ACTIONS(541),
        [anon_sym_try] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(541),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(543),
        [anon_sym_LBRACE] = ACTIONS(543),
        [sym_number] = ACTIONS(541),
        [sym_identifier] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(543),
        [sym__dedent] = ACTIONS(543),
    },
    [518] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(519),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [519] = {
        [ts_builtin_sym_end] = ACTIONS(623),
        [anon_sym_SEMI] = ACTIONS(623),
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(623),
        [anon_sym_LBRACE] = ACTIONS(623),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(623),
        [sym__dedent] = ACTIONS(623),
    },
    [520] = {
        [ts_builtin_sym_end] = ACTIONS(968),
        [anon_sym_SEMI] = ACTIONS(968),
        [anon_sym_print] = ACTIONS(971),
        [anon_sym_return] = ACTIONS(971),
        [anon_sym_del] = ACTIONS(971),
        [sym_pass_statement] = ACTIONS(971),
        [sym_break_statement] = ACTIONS(971),
        [sym_continue_statement] = ACTIONS(971),
        [anon_sym_if] = ACTIONS(971),
        [anon_sym_elif] = ACTIONS(487),
        [anon_sym_else] = ACTIONS(487),
        [anon_sym_for] = ACTIONS(971),
        [anon_sym_while] = ACTIONS(971),
        [anon_sym_try] = ACTIONS(971),
        [anon_sym_except] = ACTIONS(487),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(971),
        [anon_sym_def] = ACTIONS(971),
        [anon_sym_class] = ACTIONS(971),
        [anon_sym_AT] = ACTIONS(968),
        [anon_sym_LBRACK] = ACTIONS(968),
        [anon_sym_LBRACE] = ACTIONS(968),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(984),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(968),
        [sym__dedent] = ACTIONS(968),
    },
    [521] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(525),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [522] = {
        [sym_default_parameter] = STATE(239),
        [sym_list_splat_parameter] = STATE(240),
        [sym_dictionary_splat_parameter] = STATE(241),
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(242),
        [anon_sym_RPAREN] = ACTIONS(533),
        [anon_sym_STAR] = ACTIONS(535),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1414),
        [sym_comment] = ACTIONS(73),
    },
    [523] = {
        [anon_sym_COMMA] = ACTIONS(1416),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1419),
        [anon_sym_EQ] = ACTIONS(557),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [524] = {
        [anon_sym_RPAREN] = ACTIONS(1152),
        [sym_comment] = ACTIONS(73),
    },
    [525] = {
        [ts_builtin_sym_end] = ACTIONS(527),
        [anon_sym_SEMI] = ACTIONS(527),
        [anon_sym_print] = ACTIONS(525),
        [anon_sym_return] = ACTIONS(525),
        [anon_sym_del] = ACTIONS(525),
        [sym_pass_statement] = ACTIONS(525),
        [sym_break_statement] = ACTIONS(525),
        [sym_continue_statement] = ACTIONS(525),
        [anon_sym_if] = ACTIONS(525),
        [anon_sym_for] = ACTIONS(525),
        [anon_sym_while] = ACTIONS(525),
        [anon_sym_try] = ACTIONS(525),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(525),
        [anon_sym_AT] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(527),
        [anon_sym_LBRACE] = ACTIONS(527),
        [sym_number] = ACTIONS(525),
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(527),
        [sym__dedent] = ACTIONS(527),
    },
    [526] = {
        [aux_sym_print_statement_repeat1] = STATE(168),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1422),
        [anon_sym_for] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1424),
        [sym_comment] = ACTIONS(73),
    },
    [527] = {
        [sym__expression] = STATE(529),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1322),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [528] = {
        [anon_sym_COMMA] = ACTIONS(1426),
        [anon_sym_COLON] = ACTIONS(1426),
        [anon_sym_for] = ACTIONS(1426),
        [anon_sym_in] = ACTIONS(1426),
        [anon_sym_as] = ACTIONS(1426),
        [anon_sym_LPAREN] = ACTIONS(1426),
        [anon_sym_RPAREN] = ACTIONS(1426),
        [anon_sym_PLUS] = ACTIONS(1426),
        [anon_sym_LBRACK] = ACTIONS(1426),
        [anon_sym_RBRACK] = ACTIONS(1426),
        [anon_sym_RBRACE] = ACTIONS(1426),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1426),
    },
    [529] = {
        [anon_sym_COMMA] = ACTIONS(1370),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1370),
        [sym_comment] = ACTIONS(73),
    },
    [530] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1191),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1206),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [531] = {
        [anon_sym_LPAREN] = ACTIONS(1429),
        [anon_sym_DOT] = ACTIONS(1429),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1429),
    },
    [532] = {
        [anon_sym_COLON] = ACTIONS(1432),
        [anon_sym_LPAREN] = ACTIONS(1434),
        [sym_comment] = ACTIONS(73),
    },
    [533] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [534] = {
        [anon_sym_COMMA] = ACTIONS(1436),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1439),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [535] = {
        [anon_sym_COMMA] = ACTIONS(1443),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1443),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [536] = {
        [sym__expression] = STATE(127),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_STAR] = ACTIONS(549),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1446),
        [sym_comment] = ACTIONS(73),
    },
    [537] = {
        [anon_sym_COMMA] = ACTIONS(1416),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1419),
        [anon_sym_EQ] = ACTIONS(953),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [538] = {
        [aux_sym_print_statement_repeat1] = STATE(541),
        [anon_sym_COMMA] = ACTIONS(1448),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1450),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [539] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(1453),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(1456),
        [sym_number] = ACTIONS(1459),
        [sym_identifier] = ACTIONS(1459),
        [sym_comment] = ACTIONS(73),
    },
    [540] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1462),
    },
    [541] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_RPAREN] = ACTIONS(1269),
        [sym_comment] = ACTIONS(73),
    },
    [542] = {
        [anon_sym_COMMA] = ACTIONS(1436),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1436),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [543] = {
        [sym_parameters] = STATE(431),
        [anon_sym_LPAREN] = ACTIONS(531),
        [sym_comment] = ACTIONS(73),
    },
    [544] = {
        [aux_sym_with_statement_repeat1] = STATE(447),
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_COLON] = ACTIONS(1465),
        [sym_comment] = ACTIONS(73),
    },
    [545] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(546),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [546] = {
        [ts_builtin_sym_end] = ACTIONS(685),
        [anon_sym_SEMI] = ACTIONS(685),
        [anon_sym_print] = ACTIONS(683),
        [anon_sym_return] = ACTIONS(683),
        [anon_sym_del] = ACTIONS(683),
        [sym_pass_statement] = ACTIONS(683),
        [sym_break_statement] = ACTIONS(683),
        [sym_continue_statement] = ACTIONS(683),
        [anon_sym_if] = ACTIONS(683),
        [anon_sym_for] = ACTIONS(683),
        [anon_sym_while] = ACTIONS(683),
        [anon_sym_try] = ACTIONS(683),
        [anon_sym_with] = ACTIONS(683),
        [anon_sym_def] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(683),
        [anon_sym_AT] = ACTIONS(685),
        [anon_sym_LBRACK] = ACTIONS(685),
        [anon_sym_LBRACE] = ACTIONS(685),
        [sym_number] = ACTIONS(683),
        [sym_identifier] = ACTIONS(687),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(685),
        [sym__dedent] = ACTIONS(685),
    },
    [547] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_COLON] = ACTIONS(1467),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [548] = {
        [anon_sym_COMMA] = ACTIONS(1470),
        [anon_sym_COLON] = ACTIONS(1472),
        [anon_sym_as] = ACTIONS(1470),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [549] = {
        [sym__expression] = STATE(551),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [550] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(552),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [551] = {
        [anon_sym_COLON] = ACTIONS(1474),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [552] = {
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
        [anon_sym_LBRACK] = ACTIONS(703),
        [anon_sym_LBRACE] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(703),
        [sym__dedent] = ACTIONS(703),
    },
    [553] = {
        [sym__simple_statement] = STATE(278),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(554),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(629),
    },
    [554] = {
        [sym_except_clause] = STATE(507),
        [sym_finally_clause] = STATE(508),
        [aux_sym_try_statement_repeat1] = STATE(446),
        [anon_sym_except] = ACTIONS(1476),
        [anon_sym_finally] = ACTIONS(1478),
        [sym_comment] = ACTIONS(73),
    },
    [555] = {
        [anon_sym_COLON] = ACTIONS(1480),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [556] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(557),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [557] = {
        [sym_else_clause] = STATE(558),
        [ts_builtin_sym_end] = ACTIONS(713),
        [anon_sym_SEMI] = ACTIONS(713),
        [anon_sym_print] = ACTIONS(711),
        [anon_sym_return] = ACTIONS(711),
        [anon_sym_del] = ACTIONS(711),
        [sym_pass_statement] = ACTIONS(711),
        [sym_break_statement] = ACTIONS(711),
        [sym_continue_statement] = ACTIONS(711),
        [anon_sym_if] = ACTIONS(711),
        [anon_sym_else] = ACTIONS(1277),
        [anon_sym_for] = ACTIONS(711),
        [anon_sym_while] = ACTIONS(711),
        [anon_sym_try] = ACTIONS(711),
        [anon_sym_with] = ACTIONS(711),
        [anon_sym_def] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_AT] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(713),
        [anon_sym_LBRACE] = ACTIONS(713),
        [sym_number] = ACTIONS(711),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(713),
        [sym__dedent] = ACTIONS(713),
    },
    [558] = {
        [ts_builtin_sym_end] = ACTIONS(719),
        [anon_sym_SEMI] = ACTIONS(719),
        [anon_sym_print] = ACTIONS(717),
        [anon_sym_return] = ACTIONS(717),
        [anon_sym_del] = ACTIONS(717),
        [sym_pass_statement] = ACTIONS(717),
        [sym_break_statement] = ACTIONS(717),
        [sym_continue_statement] = ACTIONS(717),
        [anon_sym_if] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(717),
        [anon_sym_try] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(717),
        [anon_sym_def] = ACTIONS(717),
        [anon_sym_class] = ACTIONS(717),
        [anon_sym_AT] = ACTIONS(719),
        [anon_sym_LBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(717),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(719),
        [sym__dedent] = ACTIONS(719),
    },
    [559] = {
        [aux_sym_print_statement_repeat1] = STATE(120),
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1482),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(417),
        [sym_comment] = ACTIONS(73),
    },
    [560] = {
        [sym__expression] = STATE(561),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [561] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1484),
        [anon_sym_PLUS] = ACTIONS(1487),
        [anon_sym_LBRACK] = ACTIONS(1490),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [562] = {
        [anon_sym_in] = ACTIONS(1150),
        [sym_comment] = ACTIONS(73),
    },
    [563] = {
        [anon_sym_COLON] = ACTIONS(1493),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [564] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(565),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [565] = {
        [ts_builtin_sym_end] = ACTIONS(777),
        [anon_sym_SEMI] = ACTIONS(777),
        [anon_sym_print] = ACTIONS(775),
        [anon_sym_return] = ACTIONS(775),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(775),
        [sym_break_statement] = ACTIONS(775),
        [sym_continue_statement] = ACTIONS(775),
        [anon_sym_if] = ACTIONS(775),
        [anon_sym_elif] = ACTIONS(775),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(775),
        [anon_sym_while] = ACTIONS(775),
        [anon_sym_try] = ACTIONS(775),
        [anon_sym_with] = ACTIONS(775),
        [anon_sym_def] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_AT] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_number] = ACTIONS(775),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(777),
        [sym__dedent] = ACTIONS(777),
    },
    [566] = {
        [anon_sym_COLON] = ACTIONS(1495),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [567] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(568),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [568] = {
        [sym_elif_clause] = STATE(497),
        [sym_else_clause] = STATE(569),
        [aux_sym_if_statement_repeat1] = STATE(445),
        [ts_builtin_sym_end] = ACTIONS(745),
        [anon_sym_SEMI] = ACTIONS(745),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_elif] = ACTIONS(1275),
        [anon_sym_else] = ACTIONS(1277),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(745),
        [anon_sym_LBRACK] = ACTIONS(745),
        [anon_sym_LBRACE] = ACTIONS(745),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(747),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(745),
        [sym__dedent] = ACTIONS(745),
    },
    [569] = {
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_SEMI] = ACTIONS(757),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
        [sym__dedent] = ACTIONS(757),
    },
    [570] = {
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_COLON] = ACTIONS(1497),
        [anon_sym_for] = ACTIONS(1291),
        [anon_sym_in] = ACTIONS(1291),
        [anon_sym_as] = ACTIONS(1291),
        [anon_sym_LPAREN] = ACTIONS(1291),
        [anon_sym_RPAREN] = ACTIONS(1291),
        [anon_sym_PLUS] = ACTIONS(1291),
        [anon_sym_LBRACK] = ACTIONS(1291),
        [anon_sym_RBRACK] = ACTIONS(1291),
        [anon_sym_RBRACE] = ACTIONS(1291),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1291),
    },
    [571] = {
        [anon_sym_COMMA] = ACTIONS(1502),
        [anon_sym_RBRACK] = ACTIONS(1502),
        [sym_comment] = ACTIONS(73),
    },
    [572] = {
        [anon_sym_COMMA] = ACTIONS(1505),
        [anon_sym_COLON] = ACTIONS(1505),
        [anon_sym_for] = ACTIONS(1505),
        [anon_sym_in] = ACTIONS(1505),
        [anon_sym_as] = ACTIONS(1505),
        [anon_sym_LPAREN] = ACTIONS(1505),
        [anon_sym_RPAREN] = ACTIONS(1505),
        [anon_sym_PLUS] = ACTIONS(1505),
        [anon_sym_LBRACK] = ACTIONS(1505),
        [anon_sym_RBRACK] = ACTIONS(1505),
        [anon_sym_RBRACE] = ACTIONS(1505),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1505),
    },
    [573] = {
        [anon_sym_COMMA] = ACTIONS(1510),
        [anon_sym_COLON] = ACTIONS(1510),
        [anon_sym_for] = ACTIONS(1510),
        [anon_sym_in] = ACTIONS(1510),
        [anon_sym_as] = ACTIONS(1510),
        [anon_sym_LPAREN] = ACTIONS(1510),
        [anon_sym_RPAREN] = ACTIONS(1510),
        [anon_sym_PLUS] = ACTIONS(1510),
        [anon_sym_LBRACK] = ACTIONS(1510),
        [anon_sym_RBRACK] = ACTIONS(1510),
        [anon_sym_RBRACE] = ACTIONS(1510),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1510),
    },
    [574] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [575] = {
        [anon_sym_COMMA] = ACTIONS(1513),
        [anon_sym_COLON] = ACTIONS(1513),
        [sym_comment] = ACTIONS(73),
    },
    [576] = {
        [anon_sym_COMMA] = ACTIONS(1516),
        [anon_sym_COLON] = ACTIONS(1524),
        [anon_sym_in] = ACTIONS(1529),
        [anon_sym_as] = ACTIONS(605),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(1532),
        [anon_sym_PLUS] = ACTIONS(1537),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1539),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1529),
    },
    [577] = {
        [anon_sym_COMMA] = ACTIONS(1544),
        [anon_sym_RPAREN] = ACTIONS(1544),
        [sym_comment] = ACTIONS(73),
    },
    [578] = {
        [anon_sym_RPAREN] = ACTIONS(1547),
        [sym_comment] = ACTIONS(73),
    },
    [579] = {
        [anon_sym_COMMA] = ACTIONS(1549),
        [anon_sym_RBRACE] = ACTIONS(1549),
        [sym_comment] = ACTIONS(73),
    },
    [580] = {
        [anon_sym_COMMA] = ACTIONS(1552),
        [anon_sym_COLON] = ACTIONS(1552),
        [anon_sym_for] = ACTIONS(1552),
        [anon_sym_in] = ACTIONS(1552),
        [anon_sym_as] = ACTIONS(1552),
        [anon_sym_LPAREN] = ACTIONS(1552),
        [anon_sym_RPAREN] = ACTIONS(1552),
        [anon_sym_PLUS] = ACTIONS(1552),
        [anon_sym_LBRACK] = ACTIONS(1552),
        [anon_sym_RBRACK] = ACTIONS(1552),
        [anon_sym_RBRACE] = ACTIONS(1552),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1552),
    },
    [581] = {
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(502),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(867),
    },
    [582] = {
        [sym__expression] = STATE(583),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [583] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1191),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1556),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(392),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(393),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(394),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(395),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(396),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(397),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(398),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(399),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(400),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(401),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(402),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(403),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(404),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(405),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(406),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(407),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(408),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(409),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(410),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(411),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(412),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(413),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(414),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(415),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(61),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(416),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(417),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(418),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(419),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(420),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
    [833] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(249),
    [839] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
    [847] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(61),
    [851] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [857] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [861] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(574),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(543),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
    [881] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [887] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(504),
    [899] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
    [913] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(38),
    [917] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(42),
    [921] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [930] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_dictionary, 5),
    [935] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(514),
    [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(521),
    [942] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(522),
    [948] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(511),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [955] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(186),
    [959] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [964] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [968] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [971] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [974] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [979] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [984] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [989] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [992] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [995] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [998] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1001] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1004] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1009] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1012] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1015] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1018] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1024] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
    [1032] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1038] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1041] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1044] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1047] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1051] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1055] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1059] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(267),
    [1063] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(518),
    [1067] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1070] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1073] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
    [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1086] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1089] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1103] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1117] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(395),
    [1120] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(396),
    [1125] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(401),
    [1129] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(403),
    [1134] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1154] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1157] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(489),
    [1172] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(490),
    [1180] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(166),
    [1183] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1188] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(402),
    [1191] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1194] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(491),
    [1206] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(412),
    [1209] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(32),
    [1212] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(492),
    [1219] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3),
    [1222] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1229] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(488),
    [1233] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(485),
    [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1243] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(157),
    [1247] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(158),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
    [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
    [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
    [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
    [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
    [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [1269] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(185),
    [1272] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
    [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
    [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
    [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
    [1291] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [1296] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1301] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(471),
    [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [1308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1313] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1316] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1319] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1324] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1328] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1332] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1338] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1344] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1347] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1355] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(495),
    [1358] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1361] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1364] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1367] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1370] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1373] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(501),
    [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
    [1378] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1382] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1386] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1390] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1395] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
    [1400] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
    [1405] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1408] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1411] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(523),
    [1416] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(261),
    [1419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(258),
    [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
    [1426] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1429] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
    [1436] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1439] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1443] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
    [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
    [1450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(540),
    [1453] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(33),
    [1456] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(35),
    [1459] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(36),
    [1462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [1467] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(501),
    [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
    [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
    [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
    [1480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
    [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1487] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(560),
    [1490] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(41),
    [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
    [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
    [1497] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1502] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1505] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1510] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_dictionary, 5),
    [1513] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1516] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1524] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(581),
    [1529] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1532] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
    [1539] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1544] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
    [1549] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1552] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1556] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(582),
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
