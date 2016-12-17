#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 640
#define SYMBOL_COUNT 100
#define TOKEN_COUNT 44
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
    anon_sym_DASH = 30,
    anon_sym_SLASH = 31,
    anon_sym_STAR_STAR = 32,
    anon_sym_LBRACK = 33,
    anon_sym_DOT_DOT_DOT = 34,
    anon_sym_RBRACK = 35,
    anon_sym_LBRACE = 36,
    anon_sym_RBRACE = 37,
    sym_number = 38,
    sym_identifier = 39,
    sym_comment = 40,
    sym__newline = 41,
    sym__indent = 42,
    sym__dedent = 43,
    sym_module = 44,
    sym__statement = 45,
    sym__simple_statement = 46,
    sym_print_statement = 47,
    sym_expression_statement = 48,
    sym_return_statement = 49,
    sym_delete_statement = 50,
    sym__compound_statement = 51,
    sym_if_statement = 52,
    sym_elif_clause = 53,
    sym_else_clause = 54,
    sym_for_statement = 55,
    sym_while_statement = 56,
    sym_try_statement = 57,
    sym_except_clause = 58,
    sym_finally_clause = 59,
    sym_with_statement = 60,
    sym_with_item = 61,
    sym_function_definition = 62,
    sym_parameters = 63,
    sym_default_parameter = 64,
    sym_list_splat_parameter = 65,
    sym_dictionary_splat_parameter = 66,
    sym_class_definition = 67,
    sym_decorated_definition = 68,
    sym_decorator = 69,
    sym__suite = 70,
    sym_arguments = 71,
    sym_expression_list = 72,
    sym_dotted_name = 73,
    sym__expression = 74,
    sym_binary_operator = 75,
    sym_subscript = 76,
    sym_call = 77,
    sym_keyword_argument = 78,
    sym_list_splat_argument = 79,
    sym_dictionary_splat_argument = 80,
    sym_list = 81,
    sym_list_comprehension = 82,
    sym_dictionary = 83,
    sym_dictionary_comprehension = 84,
    sym_pair = 85,
    sym_set = 86,
    sym_set_comprehension = 87,
    aux_sym_module_repeat1 = 88,
    aux_sym_print_statement_repeat1 = 89,
    aux_sym_if_statement_repeat1 = 90,
    aux_sym_try_statement_repeat1 = 91,
    aux_sym_with_statement_repeat1 = 92,
    aux_sym_parameters_repeat1 = 93,
    aux_sym_decorated_definition_repeat1 = 94,
    aux_sym_dotted_name_repeat1 = 95,
    aux_sym_subscript_repeat1 = 96,
    aux_sym_call_repeat1 = 97,
    aux_sym_call_repeat2 = 98,
    aux_sym_dictionary_repeat1 = 99,
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
    [anon_sym_DASH] = "-",
    [anon_sym_SLASH] = "/",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym_LBRACK] = "[",
    [anon_sym_DOT_DOT_DOT] = "...",
    [anon_sym_RBRACK] = "]",
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
    [sym_dictionary_comprehension] = "dictionary_comprehension",
    [sym_pair] = "pair",
    [sym_set] = "set",
    [sym_set_comprehension] = "set_comprehension",
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
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SLASH] = {
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
    [sym_dictionary_comprehension] = {
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
    [sym_set] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_set_comprehension] = {
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
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(14);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(24);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(67);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '}')
                ADVANCE(96);
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
            ACCEPT_TOKEN(anon_sym_DASH);
        case 11:
            if (lookahead == '.')
                ADVANCE(12);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 12:
            if (lookahead == '.')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 14:
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 15:
            if (lookahead == '.')
                ADVANCE(16);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_number);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_number);
        case 17:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 18:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 19:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 20:
            ACCEPT_TOKEN(anon_sym_AT);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 23:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_as);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'k')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(sym_break_statement);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(32);
            if (lookahead == 'o')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_class);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'u')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(sym_continue_statement);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_def);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_del);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(48);
            if (lookahead == 'x')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 's')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_elif);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_else);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'p')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_except);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(59);
            if (lookahead == 'o')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(21);
            if (lookahead == 'y')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_finally);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_for);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(68);
            if (lookahead == 'n')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_if);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_in);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(71);
            if (lookahead == 'r')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(sym_pass_statement);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_print);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'u')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_return);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(21);
            if (lookahead == 'y')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_try);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'h')
                ADVANCE(88);
            if (lookahead == 'i')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_while);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'h')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_with);
        case 95:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 96:
            ACCEPT_TOKEN(anon_sym_RBRACE);
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
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(17);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            LEX_ERROR();
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(95);
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
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 106:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(106);
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
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 107:
            if (lookahead == 's')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_as);
        case 109:
            if (lookahead == 'o')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'r')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_for);
        case 112:
            if (lookahead == 'n')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_in);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 116:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(117);
            if (lookahead == 'd')
                ADVANCE(122);
            LEX_ERROR();
        case 117:
            if (lookahead == 'l')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'a')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 's')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 's')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_class);
        case 122:
            if (lookahead == 'e')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'f')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_def);
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(128);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 128:
            if (lookahead == '.')
                ADVANCE(12);
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
                ADVANCE(9);
            if (lookahead == ']')
                ADVANCE(23);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(128);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
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
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(22);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
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
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 135:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(135);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(137);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 137:
            if (lookahead == '*')
                ADVANCE(7);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(96);
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
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(112);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(112);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == 'i')
                ADVANCE(112);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == '}')
                ADVANCE(96);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(96);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'f')
                ADVANCE(109);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            LEX_ERROR();
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(17);
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
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(158);
            if (lookahead == 'd')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
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
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(47);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
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
                ADVANCE(165);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            LEX_ERROR();
        case 165:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(165);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(19);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(165);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(17);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'a')
                ADVANCE(107);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'f')
                ADVANCE(179);
            LEX_ERROR();
        case 173:
            if (lookahead == 'x')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'c')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'e')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'p')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 't')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            ACCEPT_TOKEN(anon_sym_except);
        case 179:
            if (lookahead == 'i')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'n')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'a')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 'l')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'l')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'y')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            ACCEPT_TOKEN(anon_sym_finally);
        case 186:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(187);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(188);
            if (lookahead == 'x')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(191);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier);
        case 192:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(193);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(187);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(191);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '@')
                ADVANCE(20);
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
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'e')
                ADVANCE(193);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 'r')
                ADVANCE(78);
            if (lookahead == 't')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
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
                ADVANCE(128);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 200:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(165);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(154);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == 'i')
                ADVANCE(112);
            LEX_ERROR();
        case 203:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(203);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 204:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(165);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(15);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 207:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 208:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(208);
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
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 209:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(209);
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
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        case 210:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(210);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(96);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 97},
    [2] = {.lex_state = 100},
    [3] = {.lex_state = 100},
    [4] = {.lex_state = 100},
    [5] = {.lex_state = 101, .external_tokens = 2},
    [6] = {.lex_state = 100},
    [7] = {.lex_state = 100},
    [8] = {.lex_state = 100},
    [9] = {.lex_state = 102},
    [10] = {.lex_state = 100},
    [11] = {.lex_state = 103},
    [12] = {.lex_state = 103},
    [13] = {.lex_state = 103},
    [14] = {.lex_state = 104},
    [15] = {.lex_state = 105},
    [16] = {.lex_state = 106, .external_tokens = 2},
    [17] = {.lex_state = 114},
    [18] = {.lex_state = 115, .external_tokens = 2},
    [19] = {.lex_state = 101, .external_tokens = 2},
    [20] = {.lex_state = 115, .external_tokens = 2},
    [21] = {.lex_state = 115, .external_tokens = 2},
    [22] = {.lex_state = 116},
    [23] = {.lex_state = 125, .external_tokens = 2},
    [24] = {.lex_state = 115, .external_tokens = 2},
    [25] = {.lex_state = 116},
    [26] = {.lex_state = 115, .external_tokens = 2},
    [27] = {.lex_state = 116},
    [28] = {.lex_state = 114},
    [29] = {.lex_state = 115, .external_tokens = 2},
    [30] = {.lex_state = 126},
    [31] = {.lex_state = 100},
    [32] = {.lex_state = 100},
    [33] = {.lex_state = 100},
    [34] = {.lex_state = 127},
    [35] = {.lex_state = 104},
    [36] = {.lex_state = 129},
    [37] = {.lex_state = 105},
    [38] = {.lex_state = 106},
    [39] = {.lex_state = 130},
    [40] = {.lex_state = 131},
    [41] = {.lex_state = 126},
    [42] = {.lex_state = 100},
    [43] = {.lex_state = 100},
    [44] = {.lex_state = 100},
    [45] = {.lex_state = 127},
    [46] = {.lex_state = 106, .external_tokens = 2},
    [47] = {.lex_state = 129},
    [48] = {.lex_state = 131},
    [49] = {.lex_state = 106, .external_tokens = 2},
    [50] = {.lex_state = 129},
    [51] = {.lex_state = 106, .external_tokens = 2},
    [52] = {.lex_state = 130},
    [53] = {.lex_state = 129},
    [54] = {.lex_state = 130},
    [55] = {.lex_state = 131},
    [56] = {.lex_state = 106},
    [57] = {.lex_state = 129},
    [58] = {.lex_state = 131},
    [59] = {.lex_state = 106},
    [60] = {.lex_state = 106},
    [61] = {.lex_state = 129},
    [62] = {.lex_state = 130},
    [63] = {.lex_state = 106},
    [64] = {.lex_state = 106},
    [65] = {.lex_state = 106},
    [66] = {.lex_state = 100},
    [67] = {.lex_state = 100},
    [68] = {.lex_state = 132},
    [69] = {.lex_state = 133},
    [70] = {.lex_state = 134},
    [71] = {.lex_state = 134},
    [72] = {.lex_state = 135},
    [73] = {.lex_state = 126},
    [74] = {.lex_state = 133},
    [75] = {.lex_state = 134},
    [76] = {.lex_state = 134},
    [77] = {.lex_state = 135},
    [78] = {.lex_state = 106},
    [79] = {.lex_state = 136},
    [80] = {.lex_state = 134},
    [81] = {.lex_state = 136},
    [82] = {.lex_state = 106},
    [83] = {.lex_state = 133},
    [84] = {.lex_state = 134},
    [85] = {.lex_state = 135},
    [86] = {.lex_state = 106},
    [87] = {.lex_state = 133},
    [88] = {.lex_state = 134},
    [89] = {.lex_state = 135},
    [90] = {.lex_state = 106},
    [91] = {.lex_state = 138},
    [92] = {.lex_state = 106},
    [93] = {.lex_state = 136},
    [94] = {.lex_state = 134},
    [95] = {.lex_state = 136},
    [96] = {.lex_state = 135},
    [97] = {.lex_state = 138},
    [98] = {.lex_state = 100},
    [99] = {.lex_state = 133},
    [100] = {.lex_state = 106},
    [101] = {.lex_state = 139},
    [102] = {.lex_state = 140},
    [103] = {.lex_state = 105},
    [104] = {.lex_state = 100},
    [105] = {.lex_state = 106},
    [106] = {.lex_state = 141},
    [107] = {.lex_state = 105},
    [108] = {.lex_state = 106},
    [109] = {.lex_state = 106},
    [110] = {.lex_state = 142},
    [111] = {.lex_state = 141},
    [112] = {.lex_state = 100},
    [113] = {.lex_state = 143},
    [114] = {.lex_state = 144},
    [115] = {.lex_state = 145},
    [116] = {.lex_state = 100},
    [117] = {.lex_state = 146},
    [118] = {.lex_state = 100},
    [119] = {.lex_state = 147},
    [120] = {.lex_state = 147},
    [121] = {.lex_state = 100},
    [122] = {.lex_state = 148},
    [123] = {.lex_state = 106},
    [124] = {.lex_state = 141},
    [125] = {.lex_state = 105},
    [126] = {.lex_state = 100},
    [127] = {.lex_state = 106},
    [128] = {.lex_state = 141},
    [129] = {.lex_state = 105},
    [130] = {.lex_state = 106},
    [131] = {.lex_state = 106},
    [132] = {.lex_state = 144},
    [133] = {.lex_state = 100},
    [134] = {.lex_state = 148},
    [135] = {.lex_state = 106},
    [136] = {.lex_state = 106},
    [137] = {.lex_state = 149},
    [138] = {.lex_state = 104},
    [139] = {.lex_state = 100},
    [140] = {.lex_state = 106},
    [141] = {.lex_state = 129},
    [142] = {.lex_state = 104},
    [143] = {.lex_state = 106},
    [144] = {.lex_state = 106},
    [145] = {.lex_state = 144},
    [146] = {.lex_state = 100},
    [147] = {.lex_state = 150},
    [148] = {.lex_state = 106},
    [149] = {.lex_state = 151},
    [150] = {.lex_state = 133},
    [151] = {.lex_state = 152, .external_tokens = 2},
    [152] = {.lex_state = 152, .external_tokens = 2},
    [153] = {.lex_state = 152, .external_tokens = 2},
    [154] = {.lex_state = 133},
    [155] = {.lex_state = 134},
    [156] = {.lex_state = 134},
    [157] = {.lex_state = 135},
    [158] = {.lex_state = 126},
    [159] = {.lex_state = 133},
    [160] = {.lex_state = 134},
    [161] = {.lex_state = 134},
    [162] = {.lex_state = 135},
    [163] = {.lex_state = 106, .external_tokens = 2},
    [164] = {.lex_state = 136},
    [165] = {.lex_state = 134},
    [166] = {.lex_state = 136},
    [167] = {.lex_state = 106, .external_tokens = 2},
    [168] = {.lex_state = 135},
    [169] = {.lex_state = 106, .external_tokens = 2},
    [170] = {.lex_state = 135},
    [171] = {.lex_state = 106, .external_tokens = 2},
    [172] = {.lex_state = 138},
    [173] = {.lex_state = 106, .external_tokens = 2},
    [174] = {.lex_state = 136},
    [175] = {.lex_state = 134},
    [176] = {.lex_state = 136},
    [177] = {.lex_state = 135},
    [178] = {.lex_state = 138},
    [179] = {.lex_state = 115, .external_tokens = 2},
    [180] = {.lex_state = 106, .external_tokens = 2},
    [181] = {.lex_state = 139},
    [182] = {.lex_state = 140},
    [183] = {.lex_state = 105},
    [184] = {.lex_state = 100},
    [185] = {.lex_state = 106, .external_tokens = 2},
    [186] = {.lex_state = 141},
    [187] = {.lex_state = 105},
    [188] = {.lex_state = 106, .external_tokens = 2},
    [189] = {.lex_state = 106, .external_tokens = 2},
    [190] = {.lex_state = 144},
    [191] = {.lex_state = 100},
    [192] = {.lex_state = 148},
    [193] = {.lex_state = 106, .external_tokens = 2},
    [194] = {.lex_state = 105},
    [195] = {.lex_state = 100},
    [196] = {.lex_state = 106, .external_tokens = 2},
    [197] = {.lex_state = 141},
    [198] = {.lex_state = 105},
    [199] = {.lex_state = 106, .external_tokens = 2},
    [200] = {.lex_state = 106, .external_tokens = 2},
    [201] = {.lex_state = 144},
    [202] = {.lex_state = 100},
    [203] = {.lex_state = 148},
    [204] = {.lex_state = 106, .external_tokens = 2},
    [205] = {.lex_state = 106, .external_tokens = 2},
    [206] = {.lex_state = 149},
    [207] = {.lex_state = 104},
    [208] = {.lex_state = 100},
    [209] = {.lex_state = 106, .external_tokens = 2},
    [210] = {.lex_state = 129},
    [211] = {.lex_state = 104},
    [212] = {.lex_state = 106, .external_tokens = 2},
    [213] = {.lex_state = 106, .external_tokens = 2},
    [214] = {.lex_state = 144},
    [215] = {.lex_state = 100},
    [216] = {.lex_state = 150},
    [217] = {.lex_state = 106, .external_tokens = 2},
    [218] = {.lex_state = 153, .external_tokens = 2},
    [219] = {.lex_state = 155, .external_tokens = 2},
    [220] = {.lex_state = 100},
    [221] = {.lex_state = 116},
    [222] = {.lex_state = 101, .external_tokens = 2},
    [223] = {.lex_state = 116},
    [224] = {.lex_state = 133},
    [225] = {.lex_state = 101, .external_tokens = 2},
    [226] = {.lex_state = 134},
    [227] = {.lex_state = 101, .external_tokens = 2},
    [228] = {.lex_state = 103},
    [229] = {.lex_state = 153, .external_tokens = 2},
    [230] = {.lex_state = 103},
    [231] = {.lex_state = 153, .external_tokens = 2},
    [232] = {.lex_state = 153, .external_tokens = 2},
    [233] = {.lex_state = 156},
    [234] = {.lex_state = 157, .external_tokens = 3},
    [235] = {.lex_state = 100},
    [236] = {.lex_state = 135},
    [237] = {.lex_state = 102},
    [238] = {.lex_state = 157, .external_tokens = 3},
    [239] = {.lex_state = 161, .external_tokens = 4},
    [240] = {.lex_state = 101, .external_tokens = 2},
    [241] = {.lex_state = 115, .external_tokens = 2},
    [242] = {.lex_state = 162, .external_tokens = 2},
    [243] = {.lex_state = 100},
    [244] = {.lex_state = 100},
    [245] = {.lex_state = 100},
    [246] = {.lex_state = 102},
    [247] = {.lex_state = 100},
    [248] = {.lex_state = 103},
    [249] = {.lex_state = 103},
    [250] = {.lex_state = 161, .external_tokens = 4},
    [251] = {.lex_state = 101, .external_tokens = 2},
    [252] = {.lex_state = 161, .external_tokens = 4},
    [253] = {.lex_state = 161, .external_tokens = 4},
    [254] = {.lex_state = 161, .external_tokens = 4},
    [255] = {.lex_state = 116},
    [256] = {.lex_state = 161, .external_tokens = 4},
    [257] = {.lex_state = 162, .external_tokens = 2},
    [258] = {.lex_state = 161, .external_tokens = 4},
    [259] = {.lex_state = 161, .external_tokens = 4},
    [260] = {.lex_state = 156},
    [261] = {.lex_state = 157, .external_tokens = 3},
    [262] = {.lex_state = 100},
    [263] = {.lex_state = 135},
    [264] = {.lex_state = 102},
    [265] = {.lex_state = 157, .external_tokens = 3},
    [266] = {.lex_state = 161, .external_tokens = 4},
    [267] = {.lex_state = 101, .external_tokens = 2},
    [268] = {.lex_state = 161, .external_tokens = 4},
    [269] = {.lex_state = 163, .external_tokens = 4},
    [270] = {.lex_state = 161, .external_tokens = 4},
    [271] = {.lex_state = 163, .external_tokens = 4},
    [272] = {.lex_state = 161, .external_tokens = 4},
    [273] = {.lex_state = 155},
    [274] = {.lex_state = 164},
    [275] = {.lex_state = 102},
    [276] = {.lex_state = 157, .external_tokens = 3},
    [277] = {.lex_state = 161, .external_tokens = 4},
    [278] = {.lex_state = 102},
    [279] = {.lex_state = 166},
    [280] = {.lex_state = 167},
    [281] = {.lex_state = 134},
    [282] = {.lex_state = 134},
    [283] = {.lex_state = 135},
    [284] = {.lex_state = 166},
    [285] = {.lex_state = 167},
    [286] = {.lex_state = 134},
    [287] = {.lex_state = 134},
    [288] = {.lex_state = 135},
    [289] = {.lex_state = 102},
    [290] = {.lex_state = 168},
    [291] = {.lex_state = 168},
    [292] = {.lex_state = 135},
    [293] = {.lex_state = 102},
    [294] = {.lex_state = 103},
    [295] = {.lex_state = 135},
    [296] = {.lex_state = 164},
    [297] = {.lex_state = 102},
    [298] = {.lex_state = 100},
    [299] = {.lex_state = 133},
    [300] = {.lex_state = 102},
    [301] = {.lex_state = 168},
    [302] = {.lex_state = 135},
    [303] = {.lex_state = 164},
    [304] = {.lex_state = 134},
    [305] = {.lex_state = 169},
    [306] = {.lex_state = 170},
    [307] = {.lex_state = 100},
    [308] = {.lex_state = 171},
    [309] = {.lex_state = 100},
    [310] = {.lex_state = 157, .external_tokens = 3},
    [311] = {.lex_state = 169},
    [312] = {.lex_state = 100},
    [313] = {.lex_state = 157, .external_tokens = 3},
    [314] = {.lex_state = 161, .external_tokens = 4},
    [315] = {.lex_state = 169},
    [316] = {.lex_state = 161, .external_tokens = 4},
    [317] = {.lex_state = 169},
    [318] = {.lex_state = 157, .external_tokens = 3},
    [319] = {.lex_state = 161, .external_tokens = 4},
    [320] = {.lex_state = 101, .external_tokens = 2},
    [321] = {.lex_state = 172},
    [322] = {.lex_state = 100},
    [323] = {.lex_state = 102},
    [324] = {.lex_state = 186, .external_tokens = 4},
    [325] = {.lex_state = 161, .external_tokens = 4},
    [326] = {.lex_state = 186, .external_tokens = 4},
    [327] = {.lex_state = 102},
    [328] = {.lex_state = 189, .external_tokens = 4},
    [329] = {.lex_state = 186, .external_tokens = 4},
    [330] = {.lex_state = 161, .external_tokens = 4},
    [331] = {.lex_state = 161, .external_tokens = 4},
    [332] = {.lex_state = 157, .external_tokens = 3},
    [333] = {.lex_state = 189, .external_tokens = 4},
    [334] = {.lex_state = 157, .external_tokens = 3},
    [335] = {.lex_state = 161, .external_tokens = 4},
    [336] = {.lex_state = 170},
    [337] = {.lex_state = 100},
    [338] = {.lex_state = 157, .external_tokens = 3},
    [339] = {.lex_state = 142},
    [340] = {.lex_state = 157, .external_tokens = 3},
    [341] = {.lex_state = 186, .external_tokens = 4},
    [342] = {.lex_state = 186, .external_tokens = 4},
    [343] = {.lex_state = 172},
    [344] = {.lex_state = 161, .external_tokens = 4},
    [345] = {.lex_state = 172},
    [346] = {.lex_state = 142},
    [347] = {.lex_state = 157, .external_tokens = 3},
    [348] = {.lex_state = 190, .external_tokens = 4},
    [349] = {.lex_state = 161, .external_tokens = 4},
    [350] = {.lex_state = 144},
    [351] = {.lex_state = 100},
    [352] = {.lex_state = 102},
    [353] = {.lex_state = 157, .external_tokens = 3},
    [354] = {.lex_state = 190, .external_tokens = 4},
    [355] = {.lex_state = 161, .external_tokens = 4},
    [356] = {.lex_state = 142},
    [357] = {.lex_state = 157, .external_tokens = 3},
    [358] = {.lex_state = 192, .external_tokens = 4},
    [359] = {.lex_state = 100},
    [360] = {.lex_state = 192, .external_tokens = 4},
    [361] = {.lex_state = 161, .external_tokens = 4},
    [362] = {.lex_state = 192, .external_tokens = 4},
    [363] = {.lex_state = 192, .external_tokens = 4},
    [364] = {.lex_state = 161, .external_tokens = 4},
    [365] = {.lex_state = 142},
    [366] = {.lex_state = 157, .external_tokens = 3},
    [367] = {.lex_state = 192, .external_tokens = 4},
    [368] = {.lex_state = 115, .external_tokens = 2},
    [369] = {.lex_state = 155},
    [370] = {.lex_state = 102},
    [371] = {.lex_state = 157, .external_tokens = 3},
    [372] = {.lex_state = 115, .external_tokens = 2},
    [373] = {.lex_state = 169},
    [374] = {.lex_state = 157, .external_tokens = 3},
    [375] = {.lex_state = 169},
    [376] = {.lex_state = 157, .external_tokens = 3},
    [377] = {.lex_state = 115, .external_tokens = 2},
    [378] = {.lex_state = 115, .external_tokens = 2},
    [379] = {.lex_state = 157, .external_tokens = 3},
    [380] = {.lex_state = 172},
    [381] = {.lex_state = 100},
    [382] = {.lex_state = 102},
    [383] = {.lex_state = 194, .external_tokens = 2},
    [384] = {.lex_state = 115, .external_tokens = 2},
    [385] = {.lex_state = 194, .external_tokens = 2},
    [386] = {.lex_state = 102},
    [387] = {.lex_state = 195, .external_tokens = 2},
    [388] = {.lex_state = 194, .external_tokens = 2},
    [389] = {.lex_state = 115, .external_tokens = 2},
    [390] = {.lex_state = 115, .external_tokens = 2},
    [391] = {.lex_state = 157, .external_tokens = 3},
    [392] = {.lex_state = 195, .external_tokens = 2},
    [393] = {.lex_state = 157, .external_tokens = 3},
    [394] = {.lex_state = 115, .external_tokens = 2},
    [395] = {.lex_state = 170},
    [396] = {.lex_state = 100},
    [397] = {.lex_state = 157, .external_tokens = 3},
    [398] = {.lex_state = 142},
    [399] = {.lex_state = 157, .external_tokens = 3},
    [400] = {.lex_state = 194, .external_tokens = 2},
    [401] = {.lex_state = 194, .external_tokens = 2},
    [402] = {.lex_state = 142},
    [403] = {.lex_state = 157, .external_tokens = 3},
    [404] = {.lex_state = 196, .external_tokens = 2},
    [405] = {.lex_state = 115, .external_tokens = 2},
    [406] = {.lex_state = 144},
    [407] = {.lex_state = 100},
    [408] = {.lex_state = 102},
    [409] = {.lex_state = 157, .external_tokens = 3},
    [410] = {.lex_state = 196, .external_tokens = 2},
    [411] = {.lex_state = 115, .external_tokens = 2},
    [412] = {.lex_state = 142},
    [413] = {.lex_state = 157, .external_tokens = 3},
    [414] = {.lex_state = 197, .external_tokens = 2},
    [415] = {.lex_state = 100},
    [416] = {.lex_state = 197, .external_tokens = 2},
    [417] = {.lex_state = 115, .external_tokens = 2},
    [418] = {.lex_state = 197, .external_tokens = 2},
    [419] = {.lex_state = 197, .external_tokens = 2},
    [420] = {.lex_state = 115, .external_tokens = 2},
    [421] = {.lex_state = 142},
    [422] = {.lex_state = 157, .external_tokens = 3},
    [423] = {.lex_state = 197, .external_tokens = 2},
    [424] = {.lex_state = 101, .external_tokens = 2},
    [425] = {.lex_state = 152, .external_tokens = 2},
    [426] = {.lex_state = 100},
    [427] = {.lex_state = 198, .external_tokens = 2},
    [428] = {.lex_state = 100},
    [429] = {.lex_state = 152, .external_tokens = 2},
    [430] = {.lex_state = 152, .external_tokens = 2},
    [431] = {.lex_state = 101, .external_tokens = 2},
    [432] = {.lex_state = 152, .external_tokens = 2},
    [433] = {.lex_state = 198, .external_tokens = 2},
    [434] = {.lex_state = 199},
    [435] = {.lex_state = 100},
    [436] = {.lex_state = 157, .external_tokens = 3},
    [437] = {.lex_state = 100},
    [438] = {.lex_state = 102},
    [439] = {.lex_state = 100},
    [440] = {.lex_state = 100},
    [441] = {.lex_state = 100},
    [442] = {.lex_state = 102},
    [443] = {.lex_state = 100},
    [444] = {.lex_state = 100},
    [445] = {.lex_state = 102},
    [446] = {.lex_state = 100},
    [447] = {.lex_state = 103},
    [448] = {.lex_state = 138},
    [449] = {.lex_state = 106, .external_tokens = 2},
    [450] = {.lex_state = 100},
    [451] = {.lex_state = 200},
    [452] = {.lex_state = 103},
    [453] = {.lex_state = 103},
    [454] = {.lex_state = 100},
    [455] = {.lex_state = 100},
    [456] = {.lex_state = 131},
    [457] = {.lex_state = 129},
    [458] = {.lex_state = 106, .external_tokens = 2},
    [459] = {.lex_state = 106, .external_tokens = 2},
    [460] = {.lex_state = 201, .external_tokens = 2},
    [461] = {.lex_state = 162, .external_tokens = 5},
    [462] = {.lex_state = 161, .external_tokens = 4},
    [463] = {.lex_state = 162, .external_tokens = 5},
    [464] = {.lex_state = 115, .external_tokens = 5},
    [465] = {.lex_state = 101, .external_tokens = 2},
    [466] = {.lex_state = 115, .external_tokens = 5},
    [467] = {.lex_state = 115, .external_tokens = 5},
    [468] = {.lex_state = 197, .external_tokens = 5},
    [469] = {.lex_state = 195, .external_tokens = 5},
    [470] = {.lex_state = 194, .external_tokens = 5},
    [471] = {.lex_state = 115, .external_tokens = 5},
    [472] = {.lex_state = 169},
    [473] = {.lex_state = 115, .external_tokens = 5},
    [474] = {.lex_state = 102},
    [475] = {.lex_state = 134},
    [476] = {.lex_state = 134},
    [477] = {.lex_state = 135},
    [478] = {.lex_state = 116},
    [479] = {.lex_state = 162, .external_tokens = 5},
    [480] = {.lex_state = 202, .external_tokens = 2},
    [481] = {.lex_state = 106, .external_tokens = 2},
    [482] = {.lex_state = 134},
    [483] = {.lex_state = 134},
    [484] = {.lex_state = 135},
    [485] = {.lex_state = 140},
    [486] = {.lex_state = 115, .external_tokens = 5},
    [487] = {.lex_state = 203, .external_tokens = 2},
    [488] = {.lex_state = 197, .external_tokens = 5},
    [489] = {.lex_state = 194, .external_tokens = 5},
    [490] = {.lex_state = 169},
    [491] = {.lex_state = 116},
    [492] = {.lex_state = 134},
    [493] = {.lex_state = 136},
    [494] = {.lex_state = 106, .external_tokens = 2},
    [495] = {.lex_state = 135},
    [496] = {.lex_state = 106, .external_tokens = 2},
    [497] = {.lex_state = 115, .external_tokens = 5},
    [498] = {.lex_state = 157, .external_tokens = 3},
    [499] = {.lex_state = 101, .external_tokens = 2},
    [500] = {.lex_state = 115, .external_tokens = 5},
    [501] = {.lex_state = 162, .external_tokens = 5},
    [502] = {.lex_state = 161, .external_tokens = 4},
    [503] = {.lex_state = 162, .external_tokens = 5},
    [504] = {.lex_state = 195, .external_tokens = 5},
    [505] = {.lex_state = 194, .external_tokens = 5},
    [506] = {.lex_state = 115, .external_tokens = 5},
    [507] = {.lex_state = 115, .external_tokens = 5},
    [508] = {.lex_state = 197, .external_tokens = 5},
    [509] = {.lex_state = 115, .external_tokens = 5},
    [510] = {.lex_state = 157, .external_tokens = 3},
    [511] = {.lex_state = 195, .external_tokens = 5},
    [512] = {.lex_state = 204},
    [513] = {.lex_state = 147, .external_tokens = 2},
    [514] = {.lex_state = 100},
    [515] = {.lex_state = 147, .external_tokens = 2},
    [516] = {.lex_state = 100},
    [517] = {.lex_state = 115, .external_tokens = 5},
    [518] = {.lex_state = 101, .external_tokens = 2},
    [519] = {.lex_state = 115, .external_tokens = 5},
    [520] = {.lex_state = 144},
    [521] = {.lex_state = 100},
    [522] = {.lex_state = 102},
    [523] = {.lex_state = 157, .external_tokens = 3},
    [524] = {.lex_state = 196, .external_tokens = 5},
    [525] = {.lex_state = 115, .external_tokens = 5},
    [526] = {.lex_state = 106, .external_tokens = 2},
    [527] = {.lex_state = 136},
    [528] = {.lex_state = 106, .external_tokens = 2},
    [529] = {.lex_state = 135},
    [530] = {.lex_state = 106, .external_tokens = 2},
    [531] = {.lex_state = 138},
    [532] = {.lex_state = 199},
    [533] = {.lex_state = 157, .external_tokens = 3},
    [534] = {.lex_state = 100},
    [535] = {.lex_state = 106, .external_tokens = 2},
    [536] = {.lex_state = 106, .external_tokens = 2},
    [537] = {.lex_state = 106, .external_tokens = 2},
    [538] = {.lex_state = 106, .external_tokens = 2},
    [539] = {.lex_state = 144},
    [540] = {.lex_state = 100},
    [541] = {.lex_state = 205},
    [542] = {.lex_state = 100},
    [543] = {.lex_state = 205},
    [544] = {.lex_state = 162, .external_tokens = 5},
    [545] = {.lex_state = 143, .external_tokens = 2},
    [546] = {.lex_state = 100},
    [547] = {.lex_state = 143, .external_tokens = 2},
    [548] = {.lex_state = 197, .external_tokens = 5},
    [549] = {.lex_state = 115, .external_tokens = 5},
    [550] = {.lex_state = 106, .external_tokens = 2},
    [551] = {.lex_state = 147, .external_tokens = 2},
    [552] = {.lex_state = 157, .external_tokens = 3},
    [553] = {.lex_state = 194, .external_tokens = 5},
    [554] = {.lex_state = 102},
    [555] = {.lex_state = 157, .external_tokens = 3},
    [556] = {.lex_state = 115, .external_tokens = 5},
    [557] = {.lex_state = 115, .external_tokens = 5},
    [558] = {.lex_state = 194, .external_tokens = 5},
    [559] = {.lex_state = 115, .external_tokens = 5},
    [560] = {.lex_state = 102},
    [561] = {.lex_state = 168},
    [562] = {.lex_state = 102},
    [563] = {.lex_state = 135},
    [564] = {.lex_state = 102},
    [565] = {.lex_state = 164},
    [566] = {.lex_state = 102},
    [567] = {.lex_state = 157, .external_tokens = 3},
    [568] = {.lex_state = 115, .external_tokens = 5},
    [569] = {.lex_state = 157, .external_tokens = 3},
    [570] = {.lex_state = 115, .external_tokens = 5},
    [571] = {.lex_state = 162, .external_tokens = 5},
    [572] = {.lex_state = 157, .external_tokens = 3},
    [573] = {.lex_state = 206},
    [574] = {.lex_state = 132},
    [575] = {.lex_state = 135},
    [576] = {.lex_state = 115, .external_tokens = 5},
    [577] = {.lex_state = 149},
    [578] = {.lex_state = 131},
    [579] = {.lex_state = 106, .external_tokens = 2},
    [580] = {.lex_state = 130},
    [581] = {.lex_state = 106, .external_tokens = 2},
    [582] = {.lex_state = 153, .external_tokens = 2},
    [583] = {.lex_state = 156},
    [584] = {.lex_state = 100},
    [585] = {.lex_state = 106, .external_tokens = 2},
    [586] = {.lex_state = 106, .external_tokens = 2},
    [587] = {.lex_state = 133},
    [588] = {.lex_state = 200},
    [589] = {.lex_state = 132},
    [590] = {.lex_state = 133},
    [591] = {.lex_state = 138},
    [592] = {.lex_state = 106, .external_tokens = 2},
    [593] = {.lex_state = 134},
    [594] = {.lex_state = 133},
    [595] = {.lex_state = 155},
    [596] = {.lex_state = 169},
    [597] = {.lex_state = 157, .external_tokens = 3},
    [598] = {.lex_state = 115, .external_tokens = 5},
    [599] = {.lex_state = 171},
    [600] = {.lex_state = 170},
    [601] = {.lex_state = 100},
    [602] = {.lex_state = 157, .external_tokens = 3},
    [603] = {.lex_state = 142},
    [604] = {.lex_state = 194, .external_tokens = 5},
    [605] = {.lex_state = 157, .external_tokens = 3},
    [606] = {.lex_state = 172},
    [607] = {.lex_state = 142},
    [608] = {.lex_state = 157, .external_tokens = 3},
    [609] = {.lex_state = 196, .external_tokens = 5},
    [610] = {.lex_state = 115, .external_tokens = 5},
    [611] = {.lex_state = 207},
    [612] = {.lex_state = 100},
    [613] = {.lex_state = 106, .external_tokens = 2},
    [614] = {.lex_state = 207},
    [615] = {.lex_state = 144},
    [616] = {.lex_state = 142},
    [617] = {.lex_state = 157, .external_tokens = 3},
    [618] = {.lex_state = 197, .external_tokens = 5},
    [619] = {.lex_state = 142},
    [620] = {.lex_state = 157, .external_tokens = 3},
    [621] = {.lex_state = 197, .external_tokens = 5},
    [622] = {.lex_state = 115, .external_tokens = 5},
    [623] = {.lex_state = 106, .external_tokens = 2},
    [624] = {.lex_state = 129},
    [625] = {.lex_state = 106, .external_tokens = 2},
    [626] = {.lex_state = 106, .external_tokens = 2},
    [627] = {.lex_state = 208, .external_tokens = 2},
    [628] = {.lex_state = 169},
    [629] = {.lex_state = 209, .external_tokens = 2},
    [630] = {.lex_state = 134},
    [631] = {.lex_state = 135},
    [632] = {.lex_state = 141},
    [633] = {.lex_state = 106, .external_tokens = 2},
    [634] = {.lex_state = 157, .external_tokens = 3},
    [635] = {.lex_state = 100},
    [636] = {.lex_state = 209, .external_tokens = 2},
    [637] = {.lex_state = 210, .external_tokens = 2},
    [638] = {.lex_state = 100},
    [639] = {.lex_state = 210, .external_tokens = 2},
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
        [sym__statement] = STATE(464),
        [sym__simple_statement] = STATE(465),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(466),
        [sym_if_statement] = STATE(467),
        [sym_elif_clause] = STATE(468),
        [sym_else_clause] = STATE(469),
        [sym_for_statement] = STATE(467),
        [sym_while_statement] = STATE(467),
        [sym_try_statement] = STATE(467),
        [sym_except_clause] = STATE(470),
        [sym_finally_clause] = STATE(471),
        [sym_with_statement] = STATE(467),
        [sym_with_item] = STATE(472),
        [sym_function_definition] = STATE(473),
        [sym_parameters] = STATE(474),
        [sym_default_parameter] = STATE(475),
        [sym_list_splat_parameter] = STATE(476),
        [sym_dictionary_splat_parameter] = STATE(477),
        [sym_class_definition] = STATE(473),
        [sym_decorated_definition] = STATE(467),
        [sym_decorator] = STATE(478),
        [sym__suite] = STATE(479),
        [sym_arguments] = STATE(222),
        [sym_expression_list] = STATE(480),
        [sym_dotted_name] = STATE(219),
        [sym__expression] = STATE(481),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(482),
        [sym_list_splat_argument] = STATE(483),
        [sym_dictionary_splat_argument] = STATE(484),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(485),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(486),
        [aux_sym_print_statement_repeat1] = STATE(487),
        [aux_sym_if_statement_repeat1] = STATE(488),
        [aux_sym_try_statement_repeat1] = STATE(489),
        [aux_sym_with_statement_repeat1] = STATE(490),
        [aux_sym_parameters_repeat1] = STATE(284),
        [aux_sym_decorated_definition_repeat1] = STATE(491),
        [aux_sym_dotted_name_repeat1] = STATE(229),
        [aux_sym_subscript_repeat1] = STATE(47),
        [aux_sym_call_repeat1] = STATE(158),
        [aux_sym_call_repeat2] = STATE(492),
        [aux_sym_dictionary_repeat1] = STATE(186),
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
        [anon_sym_DASH] = ACTIONS(55),
        [anon_sym_SLASH] = ACTIONS(55),
        [anon_sym_STAR_STAR] = ACTIONS(57),
        [anon_sym_LBRACK] = ACTIONS(59),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(61),
        [anon_sym_RBRACK] = ACTIONS(63),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__expression] = STATE(432),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [3] = {
        [sym_expression_list] = STATE(431),
        [sym__expression] = STATE(425),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [4] = {
        [sym_expression_list] = STATE(424),
        [sym__expression] = STATE(425),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__expression] = STATE(412),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [7] = {
        [sym_expression_list] = STATE(406),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [8] = {
        [sym__expression] = STATE(402),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
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
        [sym_with_item] = STATE(373),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
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
        [sym_dotted_name] = STATE(219),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(73),
    },
    [14] = {
        [sym__expression] = STATE(206),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [15] = {
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_pair] = STATE(182),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
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
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [sym_comment] = ACTIONS(73),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_del] = ACTIONS(143),
        [sym_pass_statement] = ACTIONS(143),
        [sym_break_statement] = ACTIONS(143),
        [sym_continue_statement] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(141),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(141),
    },
    [19] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(147),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_SEMI] = ACTIONS(149),
        [anon_sym_print] = ACTIONS(151),
        [anon_sym_return] = ACTIONS(151),
        [anon_sym_del] = ACTIONS(151),
        [sym_pass_statement] = ACTIONS(151),
        [sym_break_statement] = ACTIONS(151),
        [sym_continue_statement] = ACTIONS(151),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(151),
        [anon_sym_while] = ACTIONS(151),
        [anon_sym_try] = ACTIONS(151),
        [anon_sym_with] = ACTIONS(151),
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(149),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_return] = ACTIONS(157),
        [anon_sym_del] = ACTIONS(157),
        [sym_pass_statement] = ACTIONS(157),
        [sym_break_statement] = ACTIONS(157),
        [sym_continue_statement] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(157),
        [anon_sym_def] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_number] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(155),
    },
    [22] = {
        [anon_sym_def] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(161),
        [anon_sym_AT] = ACTIONS(161),
        [sym_comment] = ACTIONS(73),
    },
    [23] = {
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(175),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(25),
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(179),
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
        [sym__newline] = ACTIONS(179),
    },
    [25] = {
        [sym_function_definition] = STATE(26),
        [sym_class_definition] = STATE(26),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(181),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_return] = ACTIONS(187),
        [anon_sym_del] = ACTIONS(187),
        [sym_pass_statement] = ACTIONS(187),
        [sym_break_statement] = ACTIONS(187),
        [sym_continue_statement] = ACTIONS(187),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(187),
        [anon_sym_with] = ACTIONS(187),
        [anon_sym_def] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_AT] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_LBRACE] = ACTIONS(185),
        [sym_number] = ACTIONS(187),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(185),
    },
    [27] = {
        [anon_sym_def] = ACTIONS(191),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_AT] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [sym_comment] = ACTIONS(73),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_return] = ACTIONS(197),
        [anon_sym_del] = ACTIONS(197),
        [sym_pass_statement] = ACTIONS(197),
        [sym_break_statement] = ACTIONS(197),
        [sym_continue_statement] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_with] = ACTIONS(197),
        [anon_sym_def] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_AT] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(195),
        [sym_number] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(195),
    },
    [30] = {
        [sym__expression] = STATE(154),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(155),
        [sym_list_splat_argument] = STATE(156),
        [sym_dictionary_splat_argument] = STATE(157),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [aux_sym_call_repeat1] = STATE(158),
        [anon_sym_STAR] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [31] = {
        [sym__expression] = STATE(152),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [32] = {
        [sym__expression] = STATE(153),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [33] = {
        [sym__expression] = STATE(151),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [34] = {
        [sym__expression] = STATE(39),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [35] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(209),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [36] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [37] = {
        [sym__expression] = STATE(101),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_pair] = STATE(102),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(215),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [39] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [40] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(231),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [41] = {
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(70),
        [sym_list_splat_argument] = STATE(71),
        [sym_dictionary_splat_argument] = STATE(72),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [aux_sym_call_repeat1] = STATE(73),
        [anon_sym_STAR] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [42] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [43] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [44] = {
        [sym__expression] = STATE(63),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [45] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(233),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(235),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_STAR] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_DASH] = ACTIONS(235),
        [anon_sym_SLASH] = ACTIONS(235),
        [anon_sym_STAR_STAR] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(235),
        [anon_sym_RBRACE] = ACTIONS(235),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(235),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(73),
    },
    [48] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(243),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [49] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_in] = ACTIONS(245),
        [anon_sym_as] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(245),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_STAR] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(245),
        [anon_sym_DASH] = ACTIONS(245),
        [anon_sym_SLASH] = ACTIONS(245),
        [anon_sym_STAR_STAR] = ACTIONS(245),
        [anon_sym_LBRACK] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(245),
        [anon_sym_RBRACE] = ACTIONS(245),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(245),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_RBRACK] = ACTIONS(249),
        [sym_comment] = ACTIONS(73),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_for] = ACTIONS(251),
        [anon_sym_in] = ACTIONS(251),
        [anon_sym_as] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(251),
        [anon_sym_STAR_STAR] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(251),
        [anon_sym_RBRACE] = ACTIONS(251),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(251),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(249),
        [sym_comment] = ACTIONS(73),
    },
    [53] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(257),
        [sym_comment] = ACTIONS(73),
    },
    [54] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(257),
        [sym_comment] = ACTIONS(73),
    },
    [55] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(259),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(235),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_STAR] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_DASH] = ACTIONS(235),
        [anon_sym_SLASH] = ACTIONS(235),
        [anon_sym_STAR_STAR] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(235),
        [anon_sym_RBRACE] = ACTIONS(235),
        [sym_comment] = ACTIONS(73),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RBRACK] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [58] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(245),
        [anon_sym_for] = ACTIONS(245),
        [anon_sym_in] = ACTIONS(245),
        [anon_sym_as] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(245),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_STAR] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(245),
        [anon_sym_DASH] = ACTIONS(245),
        [anon_sym_SLASH] = ACTIONS(245),
        [anon_sym_STAR_STAR] = ACTIONS(245),
        [anon_sym_LBRACK] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(245),
        [anon_sym_RBRACE] = ACTIONS(245),
        [sym_comment] = ACTIONS(73),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_for] = ACTIONS(251),
        [anon_sym_in] = ACTIONS(251),
        [anon_sym_as] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(251),
        [anon_sym_STAR_STAR] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(251),
        [anon_sym_RBRACE] = ACTIONS(251),
        [sym_comment] = ACTIONS(73),
    },
    [61] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(265),
        [sym_comment] = ACTIONS(73),
    },
    [62] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(265),
        [sym_comment] = ACTIONS(73),
    },
    [63] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(267),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [64] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(267),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [66] = {
        [sym__expression] = STATE(150),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [67] = {
        [sym__expression] = STATE(149),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(271),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_RPAREN] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
    },
    [71] = {
        [aux_sym_call_repeat2] = STATE(94),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_RPAREN] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
    },
    [72] = {
        [anon_sym_RPAREN] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
    },
    [73] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(75),
        [sym_list_splat_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(77),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
    },
    [76] = {
        [aux_sym_call_repeat2] = STATE(80),
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_RPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
    },
    [77] = {
        [anon_sym_RPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_in] = ACTIONS(285),
        [anon_sym_as] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_DASH] = ACTIONS(285),
        [anon_sym_SLASH] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [anon_sym_RBRACE] = ACTIONS(285),
        [sym_comment] = ACTIONS(73),
    },
    [79] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(88),
        [sym_dictionary_splat_argument] = STATE(89),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_RPAREN] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [81] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(84),
        [sym_dictionary_splat_argument] = STATE(85),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_COLON] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_in] = ACTIONS(293),
        [anon_sym_as] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(293),
        [anon_sym_RPAREN] = ACTIONS(293),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(293),
        [anon_sym_DASH] = ACTIONS(293),
        [anon_sym_SLASH] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_RBRACK] = ACTIONS(293),
        [anon_sym_RBRACE] = ACTIONS(293),
        [sym_comment] = ACTIONS(73),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
    },
    [85] = {
        [anon_sym_RPAREN] = ACTIONS(299),
        [sym_comment] = ACTIONS(73),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_for] = ACTIONS(301),
        [anon_sym_in] = ACTIONS(301),
        [anon_sym_as] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(301),
        [anon_sym_STAR] = ACTIONS(303),
        [anon_sym_PLUS] = ACTIONS(301),
        [anon_sym_DASH] = ACTIONS(301),
        [anon_sym_SLASH] = ACTIONS(301),
        [anon_sym_STAR_STAR] = ACTIONS(301),
        [anon_sym_LBRACK] = ACTIONS(301),
        [anon_sym_RBRACK] = ACTIONS(301),
        [anon_sym_RBRACE] = ACTIONS(301),
        [sym_comment] = ACTIONS(73),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [88] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [sym_comment] = ACTIONS(73),
    },
    [89] = {
        [anon_sym_RPAREN] = ACTIONS(307),
        [sym_comment] = ACTIONS(73),
    },
    [90] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_COLON] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_in] = ACTIONS(309),
        [anon_sym_as] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(309),
        [anon_sym_STAR] = ACTIONS(311),
        [anon_sym_PLUS] = ACTIONS(309),
        [anon_sym_DASH] = ACTIONS(309),
        [anon_sym_SLASH] = ACTIONS(309),
        [anon_sym_STAR_STAR] = ACTIONS(309),
        [anon_sym_LBRACK] = ACTIONS(309),
        [anon_sym_RBRACK] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(309),
        [sym_comment] = ACTIONS(73),
    },
    [91] = {
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_STAR] = ACTIONS(313),
        [anon_sym_STAR_STAR] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_LBRACE] = ACTIONS(315),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
    },
    [92] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_as] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(317),
        [anon_sym_STAR_STAR] = ACTIONS(317),
        [anon_sym_LBRACK] = ACTIONS(317),
        [anon_sym_RBRACK] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
    },
    [93] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(88),
        [sym_dictionary_splat_argument] = STATE(96),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
    },
    [95] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(84),
        [sym_dictionary_splat_argument] = STATE(89),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [96] = {
        [anon_sym_RPAREN] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [97] = {
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(325),
        [anon_sym_LBRACE] = ACTIONS(325),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
    },
    [98] = {
        [sym__expression] = STATE(99),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(327),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_as] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_STAR] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(329),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_RBRACK] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
    },
    [101] = {
        [aux_sym_print_statement_repeat1] = STATE(128),
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_COLON] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
    },
    [102] = {
        [aux_sym_dictionary_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(345),
        [sym_comment] = ACTIONS(73),
    },
    [103] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_pair] = STATE(124),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(347),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [104] = {
        [sym_expression_list] = STATE(114),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(351),
        [anon_sym_PLUS] = ACTIONS(349),
        [anon_sym_DASH] = ACTIONS(349),
        [anon_sym_SLASH] = ACTIONS(349),
        [anon_sym_STAR_STAR] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_RBRACK] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(73),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_RBRACE] = ACTIONS(347),
        [sym_comment] = ACTIONS(73),
    },
    [107] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_pair] = STATE(111),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(355),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(357),
        [anon_sym_DASH] = ACTIONS(357),
        [anon_sym_SLASH] = ACTIONS(357),
        [anon_sym_STAR_STAR] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(357),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(73),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_in] = ACTIONS(361),
        [anon_sym_as] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_STAR] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(361),
        [anon_sym_DASH] = ACTIONS(361),
        [anon_sym_SLASH] = ACTIONS(361),
        [anon_sym_STAR_STAR] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
    },
    [110] = {
        [anon_sym_COLON] = ACTIONS(335),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(365),
        [sym_comment] = ACTIONS(73),
    },
    [112] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [113] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
    },
    [114] = {
        [anon_sym_in] = ACTIONS(369),
        [sym_comment] = ACTIONS(73),
    },
    [115] = {
        [aux_sym_print_statement_repeat1] = STATE(117),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_in] = ACTIONS(373),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [116] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(377),
        [anon_sym_in] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(377),
        [sym_comment] = ACTIONS(73),
    },
    [118] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_COLON] = ACTIONS(379),
        [anon_sym_in] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(379),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(381),
        [anon_sym_COLON] = ACTIONS(381),
        [anon_sym_in] = ACTIONS(381),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(381),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(381),
        [anon_sym_RBRACE] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [121] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [122] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(383),
        [sym_comment] = ACTIONS(73),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_for] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_as] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_STAR] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_DASH] = ACTIONS(385),
        [anon_sym_SLASH] = ACTIONS(385),
        [anon_sym_STAR_STAR] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [sym_comment] = ACTIONS(73),
    },
    [124] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_RBRACE] = ACTIONS(389),
        [sym_comment] = ACTIONS(73),
    },
    [125] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(391),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [126] = {
        [sym_expression_list] = STATE(132),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [127] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_in] = ACTIONS(393),
        [anon_sym_as] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(393),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(393),
        [anon_sym_DASH] = ACTIONS(393),
        [anon_sym_SLASH] = ACTIONS(393),
        [anon_sym_STAR_STAR] = ACTIONS(393),
        [anon_sym_LBRACK] = ACTIONS(393),
        [anon_sym_RBRACK] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(393),
        [sym_comment] = ACTIONS(73),
    },
    [128] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_RBRACE] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [129] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(399),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_COLON] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(401),
        [anon_sym_in] = ACTIONS(401),
        [anon_sym_as] = ACTIONS(401),
        [anon_sym_LPAREN] = ACTIONS(401),
        [anon_sym_RPAREN] = ACTIONS(401),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(401),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_LBRACK] = ACTIONS(401),
        [anon_sym_RBRACK] = ACTIONS(401),
        [anon_sym_RBRACE] = ACTIONS(401),
        [sym_comment] = ACTIONS(73),
    },
    [131] = {
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_for] = ACTIONS(405),
        [anon_sym_in] = ACTIONS(405),
        [anon_sym_as] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(405),
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_STAR] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(405),
        [anon_sym_DASH] = ACTIONS(405),
        [anon_sym_SLASH] = ACTIONS(405),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_LBRACK] = ACTIONS(405),
        [anon_sym_RBRACK] = ACTIONS(405),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [132] = {
        [anon_sym_in] = ACTIONS(409),
        [sym_comment] = ACTIONS(73),
    },
    [133] = {
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [134] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(411),
        [sym_comment] = ACTIONS(73),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(413),
        [anon_sym_COLON] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_in] = ACTIONS(413),
        [anon_sym_as] = ACTIONS(413),
        [anon_sym_LPAREN] = ACTIONS(413),
        [anon_sym_RPAREN] = ACTIONS(413),
        [anon_sym_STAR] = ACTIONS(415),
        [anon_sym_PLUS] = ACTIONS(413),
        [anon_sym_DASH] = ACTIONS(413),
        [anon_sym_SLASH] = ACTIONS(413),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_LBRACK] = ACTIONS(413),
        [anon_sym_RBRACK] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(413),
        [sym_comment] = ACTIONS(73),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_COLON] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_in] = ACTIONS(417),
        [anon_sym_as] = ACTIONS(417),
        [anon_sym_LPAREN] = ACTIONS(417),
        [anon_sym_RPAREN] = ACTIONS(417),
        [anon_sym_STAR] = ACTIONS(419),
        [anon_sym_PLUS] = ACTIONS(417),
        [anon_sym_DASH] = ACTIONS(417),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [anon_sym_RBRACK] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(417),
        [sym_comment] = ACTIONS(73),
    },
    [137] = {
        [aux_sym_print_statement_repeat1] = STATE(141),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(425),
        [sym_comment] = ACTIONS(73),
    },
    [138] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(427),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [139] = {
        [sym_expression_list] = STATE(145),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [140] = {
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_in] = ACTIONS(429),
        [anon_sym_as] = ACTIONS(429),
        [anon_sym_LPAREN] = ACTIONS(429),
        [anon_sym_RPAREN] = ACTIONS(429),
        [anon_sym_STAR] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(429),
        [anon_sym_DASH] = ACTIONS(429),
        [anon_sym_SLASH] = ACTIONS(429),
        [anon_sym_STAR_STAR] = ACTIONS(429),
        [anon_sym_LBRACK] = ACTIONS(429),
        [anon_sym_RBRACK] = ACTIONS(429),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_comment] = ACTIONS(73),
    },
    [141] = {
        [anon_sym_COMMA] = ACTIONS(433),
        [anon_sym_RBRACK] = ACTIONS(427),
        [sym_comment] = ACTIONS(73),
    },
    [142] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(435),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [143] = {
        [anon_sym_COMMA] = ACTIONS(437),
        [anon_sym_COLON] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_in] = ACTIONS(437),
        [anon_sym_as] = ACTIONS(437),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_RPAREN] = ACTIONS(437),
        [anon_sym_STAR] = ACTIONS(439),
        [anon_sym_PLUS] = ACTIONS(437),
        [anon_sym_DASH] = ACTIONS(437),
        [anon_sym_SLASH] = ACTIONS(437),
        [anon_sym_STAR_STAR] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [anon_sym_RBRACK] = ACTIONS(437),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
    },
    [144] = {
        [anon_sym_COMMA] = ACTIONS(441),
        [anon_sym_COLON] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_in] = ACTIONS(441),
        [anon_sym_as] = ACTIONS(441),
        [anon_sym_LPAREN] = ACTIONS(441),
        [anon_sym_RPAREN] = ACTIONS(441),
        [anon_sym_STAR] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(441),
        [anon_sym_DASH] = ACTIONS(441),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(441),
        [anon_sym_LBRACK] = ACTIONS(441),
        [anon_sym_RBRACK] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_comment] = ACTIONS(73),
    },
    [145] = {
        [anon_sym_in] = ACTIONS(445),
        [sym_comment] = ACTIONS(73),
    },
    [146] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [147] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(447),
        [sym_comment] = ACTIONS(73),
    },
    [148] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_in] = ACTIONS(449),
        [anon_sym_as] = ACTIONS(449),
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [anon_sym_PLUS] = ACTIONS(449),
        [anon_sym_DASH] = ACTIONS(449),
        [anon_sym_SLASH] = ACTIONS(449),
        [anon_sym_STAR_STAR] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [sym_comment] = ACTIONS(73),
    },
    [149] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(453),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(455),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(267),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(267),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [154] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(459),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(73),
    },
    [156] = {
        [aux_sym_call_repeat2] = STATE(175),
        [anon_sym_COMMA] = ACTIONS(461),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(73),
    },
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(73),
    },
    [158] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(160),
        [sym_list_splat_argument] = STATE(161),
        [sym_dictionary_splat_argument] = STATE(162),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(465),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_RPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(73),
    },
    [161] = {
        [aux_sym_call_repeat2] = STATE(165),
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_RPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(73),
    },
    [162] = {
        [anon_sym_RPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(73),
    },
    [163] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_in] = ACTIONS(285),
        [anon_sym_as] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_DASH] = ACTIONS(285),
        [anon_sym_SLASH] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [anon_sym_RBRACE] = ACTIONS(285),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(285),
    },
    [164] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(88),
        [sym_dictionary_splat_argument] = STATE(170),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [165] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
    },
    [166] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(84),
        [sym_dictionary_splat_argument] = STATE(168),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [167] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_COLON] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_in] = ACTIONS(293),
        [anon_sym_as] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(293),
        [anon_sym_RPAREN] = ACTIONS(293),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(293),
        [anon_sym_DASH] = ACTIONS(293),
        [anon_sym_SLASH] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_RBRACK] = ACTIONS(293),
        [anon_sym_RBRACE] = ACTIONS(293),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(293),
    },
    [168] = {
        [anon_sym_RPAREN] = ACTIONS(473),
        [sym_comment] = ACTIONS(73),
    },
    [169] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_for] = ACTIONS(301),
        [anon_sym_in] = ACTIONS(301),
        [anon_sym_as] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(301),
        [anon_sym_STAR] = ACTIONS(303),
        [anon_sym_PLUS] = ACTIONS(301),
        [anon_sym_DASH] = ACTIONS(301),
        [anon_sym_SLASH] = ACTIONS(301),
        [anon_sym_STAR_STAR] = ACTIONS(301),
        [anon_sym_LBRACK] = ACTIONS(301),
        [anon_sym_RBRACK] = ACTIONS(301),
        [anon_sym_RBRACE] = ACTIONS(301),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(301),
    },
    [170] = {
        [anon_sym_RPAREN] = ACTIONS(475),
        [sym_comment] = ACTIONS(73),
    },
    [171] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_COLON] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_in] = ACTIONS(309),
        [anon_sym_as] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(309),
        [anon_sym_STAR] = ACTIONS(311),
        [anon_sym_PLUS] = ACTIONS(309),
        [anon_sym_DASH] = ACTIONS(309),
        [anon_sym_SLASH] = ACTIONS(309),
        [anon_sym_STAR_STAR] = ACTIONS(309),
        [anon_sym_LBRACK] = ACTIONS(309),
        [anon_sym_RBRACK] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(309),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(309),
    },
    [172] = {
        [anon_sym_RPAREN] = ACTIONS(471),
        [anon_sym_STAR] = ACTIONS(313),
        [anon_sym_STAR_STAR] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_LBRACE] = ACTIONS(315),
        [sym_number] = ACTIONS(313),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
    },
    [173] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_as] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(317),
        [anon_sym_STAR_STAR] = ACTIONS(317),
        [anon_sym_LBRACK] = ACTIONS(317),
        [anon_sym_RBRACK] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(317),
    },
    [174] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(88),
        [sym_dictionary_splat_argument] = STATE(177),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_RPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(73),
    },
    [176] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(84),
        [sym_dictionary_splat_argument] = STATE(170),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [177] = {
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
    },
    [178] = {
        [anon_sym_RPAREN] = ACTIONS(465),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(325),
        [anon_sym_LBRACE] = ACTIONS(325),
        [sym_number] = ACTIONS(323),
        [sym_identifier] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
    },
    [179] = {
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
    [180] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_as] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_STAR] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(329),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_RBRACK] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(329),
    },
    [181] = {
        [aux_sym_print_statement_repeat1] = STATE(197),
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_COLON] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(487),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(489),
        [sym_comment] = ACTIONS(73),
    },
    [182] = {
        [aux_sym_dictionary_repeat1] = STATE(186),
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_RBRACE] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
    },
    [183] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_pair] = STATE(124),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(497),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [184] = {
        [sym_expression_list] = STATE(190),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(351),
        [anon_sym_PLUS] = ACTIONS(349),
        [anon_sym_DASH] = ACTIONS(349),
        [anon_sym_SLASH] = ACTIONS(349),
        [anon_sym_STAR_STAR] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_RBRACK] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(349),
    },
    [186] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(497),
        [sym_comment] = ACTIONS(73),
    },
    [187] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_pair] = STATE(111),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(501),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(357),
        [anon_sym_DASH] = ACTIONS(357),
        [anon_sym_SLASH] = ACTIONS(357),
        [anon_sym_STAR_STAR] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(357),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(357),
    },
    [189] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_in] = ACTIONS(361),
        [anon_sym_as] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_STAR] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(361),
        [anon_sym_DASH] = ACTIONS(361),
        [anon_sym_SLASH] = ACTIONS(361),
        [anon_sym_STAR_STAR] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(361),
    },
    [190] = {
        [anon_sym_in] = ACTIONS(503),
        [sym_comment] = ACTIONS(73),
    },
    [191] = {
        [sym__expression] = STATE(192),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [192] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(505),
        [sym_comment] = ACTIONS(73),
    },
    [193] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_for] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_as] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_STAR] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_DASH] = ACTIONS(385),
        [anon_sym_SLASH] = ACTIONS(385),
        [anon_sym_STAR_STAR] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(385),
    },
    [194] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [195] = {
        [sym_expression_list] = STATE(201),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [196] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_in] = ACTIONS(393),
        [anon_sym_as] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(393),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(393),
        [anon_sym_DASH] = ACTIONS(393),
        [anon_sym_SLASH] = ACTIONS(393),
        [anon_sym_STAR_STAR] = ACTIONS(393),
        [anon_sym_LBRACK] = ACTIONS(393),
        [anon_sym_RBRACK] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(393),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(393),
    },
    [197] = {
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_comment] = ACTIONS(73),
    },
    [198] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(511),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [199] = {
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_COLON] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(401),
        [anon_sym_in] = ACTIONS(401),
        [anon_sym_as] = ACTIONS(401),
        [anon_sym_LPAREN] = ACTIONS(401),
        [anon_sym_RPAREN] = ACTIONS(401),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(401),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_LBRACK] = ACTIONS(401),
        [anon_sym_RBRACK] = ACTIONS(401),
        [anon_sym_RBRACE] = ACTIONS(401),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(401),
    },
    [200] = {
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_for] = ACTIONS(405),
        [anon_sym_in] = ACTIONS(405),
        [anon_sym_as] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(405),
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_STAR] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(405),
        [anon_sym_DASH] = ACTIONS(405),
        [anon_sym_SLASH] = ACTIONS(405),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_LBRACK] = ACTIONS(405),
        [anon_sym_RBRACK] = ACTIONS(405),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(405),
    },
    [201] = {
        [anon_sym_in] = ACTIONS(513),
        [sym_comment] = ACTIONS(73),
    },
    [202] = {
        [sym__expression] = STATE(203),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [203] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(515),
        [sym_comment] = ACTIONS(73),
    },
    [204] = {
        [anon_sym_COMMA] = ACTIONS(413),
        [anon_sym_COLON] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_in] = ACTIONS(413),
        [anon_sym_as] = ACTIONS(413),
        [anon_sym_LPAREN] = ACTIONS(413),
        [anon_sym_RPAREN] = ACTIONS(413),
        [anon_sym_STAR] = ACTIONS(415),
        [anon_sym_PLUS] = ACTIONS(413),
        [anon_sym_DASH] = ACTIONS(413),
        [anon_sym_SLASH] = ACTIONS(413),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_LBRACK] = ACTIONS(413),
        [anon_sym_RBRACK] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(413),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(413),
    },
    [205] = {
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_COLON] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_in] = ACTIONS(417),
        [anon_sym_as] = ACTIONS(417),
        [anon_sym_LPAREN] = ACTIONS(417),
        [anon_sym_RPAREN] = ACTIONS(417),
        [anon_sym_STAR] = ACTIONS(419),
        [anon_sym_PLUS] = ACTIONS(417),
        [anon_sym_DASH] = ACTIONS(417),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [anon_sym_RBRACK] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(417),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(417),
    },
    [206] = {
        [aux_sym_print_statement_repeat1] = STATE(210),
        [anon_sym_COMMA] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(521),
        [sym_comment] = ACTIONS(73),
    },
    [207] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(523),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [208] = {
        [sym_expression_list] = STATE(214),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_in] = ACTIONS(429),
        [anon_sym_as] = ACTIONS(429),
        [anon_sym_LPAREN] = ACTIONS(429),
        [anon_sym_RPAREN] = ACTIONS(429),
        [anon_sym_STAR] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(429),
        [anon_sym_DASH] = ACTIONS(429),
        [anon_sym_SLASH] = ACTIONS(429),
        [anon_sym_STAR_STAR] = ACTIONS(429),
        [anon_sym_LBRACK] = ACTIONS(429),
        [anon_sym_RBRACK] = ACTIONS(429),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(429),
    },
    [210] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_RBRACK] = ACTIONS(523),
        [sym_comment] = ACTIONS(73),
    },
    [211] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(527),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(437),
        [anon_sym_COLON] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_in] = ACTIONS(437),
        [anon_sym_as] = ACTIONS(437),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_RPAREN] = ACTIONS(437),
        [anon_sym_STAR] = ACTIONS(439),
        [anon_sym_PLUS] = ACTIONS(437),
        [anon_sym_DASH] = ACTIONS(437),
        [anon_sym_SLASH] = ACTIONS(437),
        [anon_sym_STAR_STAR] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [anon_sym_RBRACK] = ACTIONS(437),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(437),
    },
    [213] = {
        [anon_sym_COMMA] = ACTIONS(441),
        [anon_sym_COLON] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_in] = ACTIONS(441),
        [anon_sym_as] = ACTIONS(441),
        [anon_sym_LPAREN] = ACTIONS(441),
        [anon_sym_RPAREN] = ACTIONS(441),
        [anon_sym_STAR] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(441),
        [anon_sym_DASH] = ACTIONS(441),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(441),
        [anon_sym_LBRACK] = ACTIONS(441),
        [anon_sym_RBRACK] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(441),
    },
    [214] = {
        [anon_sym_in] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
    },
    [215] = {
        [sym__expression] = STATE(216),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [216] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(531),
        [sym_comment] = ACTIONS(73),
    },
    [217] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_in] = ACTIONS(449),
        [anon_sym_as] = ACTIONS(449),
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [anon_sym_PLUS] = ACTIONS(449),
        [anon_sym_DASH] = ACTIONS(449),
        [anon_sym_SLASH] = ACTIONS(449),
        [anon_sym_STAR_STAR] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(449),
    },
    [218] = {
        [aux_sym_dotted_name_repeat1] = STATE(229),
        [anon_sym_LPAREN] = ACTIONS(533),
        [anon_sym_DOT] = ACTIONS(535),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(533),
    },
    [219] = {
        [sym_arguments] = STATE(222),
        [anon_sym_LPAREN] = ACTIONS(537),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(539),
    },
    [220] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [221] = {
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(541),
        [sym_comment] = ACTIONS(73),
    },
    [222] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(543),
    },
    [223] = {
        [anon_sym_def] = ACTIONS(545),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_AT] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
    },
    [224] = {
        [aux_sym_print_statement_repeat1] = STATE(226),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [225] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(549),
    },
    [226] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(551),
        [sym_comment] = ACTIONS(73),
    },
    [227] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(553),
    },
    [228] = {
        [sym_identifier] = ACTIONS(555),
        [sym_comment] = ACTIONS(73),
    },
    [229] = {
        [anon_sym_LPAREN] = ACTIONS(557),
        [anon_sym_DOT] = ACTIONS(559),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(557),
    },
    [230] = {
        [sym_identifier] = ACTIONS(561),
        [sym_comment] = ACTIONS(73),
    },
    [231] = {
        [anon_sym_LPAREN] = ACTIONS(563),
        [anon_sym_DOT] = ACTIONS(563),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(563),
    },
    [232] = {
        [anon_sym_LPAREN] = ACTIONS(565),
        [anon_sym_DOT] = ACTIONS(565),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(565),
    },
    [233] = {
        [anon_sym_COLON] = ACTIONS(567),
        [anon_sym_LPAREN] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
    },
    [234] = {
        [sym__simple_statement] = STATE(240),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [235] = {
        [sym_expression_list] = STATE(236),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [236] = {
        [anon_sym_RPAREN] = ACTIONS(573),
        [sym_comment] = ACTIONS(73),
    },
    [237] = {
        [anon_sym_COLON] = ACTIONS(575),
        [sym_comment] = ACTIONS(73),
    },
    [238] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(241),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [239] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(254),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(591),
    },
    [240] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(591),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [sym_pass_statement] = ACTIONS(595),
        [sym_break_statement] = ACTIONS(595),
        [sym_continue_statement] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [anon_sym_LBRACE] = ACTIONS(593),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(597),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(593),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_return] = ACTIONS(601),
        [anon_sym_del] = ACTIONS(601),
        [sym_pass_statement] = ACTIONS(601),
        [sym_break_statement] = ACTIONS(601),
        [sym_continue_statement] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_except] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_LBRACE] = ACTIONS(599),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(599),
    },
    [243] = {
        [sym__expression] = STATE(356),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [244] = {
        [sym_expression_list] = STATE(350),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [245] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [246] = {
        [anon_sym_COLON] = ACTIONS(605),
        [sym_comment] = ACTIONS(73),
    },
    [247] = {
        [sym_with_item] = STATE(305),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [248] = {
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(73),
    },
    [249] = {
        [sym_identifier] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
    },
    [250] = {
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_del] = ACTIONS(143),
        [sym_pass_statement] = ACTIONS(143),
        [sym_break_statement] = ACTIONS(143),
        [sym_continue_statement] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(141),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(141),
    },
    [251] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(611),
    },
    [252] = {
        [anon_sym_print] = ACTIONS(151),
        [anon_sym_return] = ACTIONS(151),
        [anon_sym_del] = ACTIONS(151),
        [sym_pass_statement] = ACTIONS(151),
        [sym_break_statement] = ACTIONS(151),
        [sym_continue_statement] = ACTIONS(151),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(151),
        [anon_sym_while] = ACTIONS(151),
        [anon_sym_try] = ACTIONS(151),
        [anon_sym_with] = ACTIONS(151),
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(149),
    },
    [253] = {
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_return] = ACTIONS(157),
        [anon_sym_del] = ACTIONS(157),
        [sym_pass_statement] = ACTIONS(157),
        [sym_break_statement] = ACTIONS(157),
        [sym_continue_statement] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(157),
        [anon_sym_def] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_number] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(155),
    },
    [254] = {
        [sym__statement] = STATE(258),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(613),
    },
    [255] = {
        [sym_function_definition] = STATE(256),
        [sym_class_definition] = STATE(256),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(617),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [256] = {
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_return] = ACTIONS(187),
        [anon_sym_del] = ACTIONS(187),
        [sym_pass_statement] = ACTIONS(187),
        [sym_break_statement] = ACTIONS(187),
        [sym_continue_statement] = ACTIONS(187),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(187),
        [anon_sym_with] = ACTIONS(187),
        [anon_sym_def] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_AT] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_LBRACE] = ACTIONS(185),
        [sym_number] = ACTIONS(187),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(185),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(619),
        [anon_sym_SEMI] = ACTIONS(619),
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_elif] = ACTIONS(621),
        [anon_sym_else] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_except] = ACTIONS(621),
        [anon_sym_finally] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(619),
        [anon_sym_LBRACE] = ACTIONS(619),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(619),
    },
    [258] = {
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_return] = ACTIONS(197),
        [anon_sym_del] = ACTIONS(197),
        [sym_pass_statement] = ACTIONS(197),
        [sym_break_statement] = ACTIONS(197),
        [sym_continue_statement] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_with] = ACTIONS(197),
        [anon_sym_def] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_AT] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(195),
        [sym_number] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(195),
    },
    [259] = {
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
    [260] = {
        [anon_sym_COLON] = ACTIONS(625),
        [anon_sym_LPAREN] = ACTIONS(627),
        [sym_comment] = ACTIONS(73),
    },
    [261] = {
        [sym__simple_statement] = STATE(267),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [262] = {
        [sym_expression_list] = STATE(263),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [263] = {
        [anon_sym_RPAREN] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
    },
    [264] = {
        [anon_sym_COLON] = ACTIONS(633),
        [sym_comment] = ACTIONS(73),
    },
    [265] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(268),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [266] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(270),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(635),
    },
    [267] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(635),
    },
    [268] = {
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [sym_pass_statement] = ACTIONS(595),
        [sym_break_statement] = ACTIONS(595),
        [sym_continue_statement] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [anon_sym_LBRACE] = ACTIONS(593),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(597),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(593),
    },
    [269] = {
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_return] = ACTIONS(601),
        [anon_sym_del] = ACTIONS(601),
        [sym_pass_statement] = ACTIONS(601),
        [sym_break_statement] = ACTIONS(601),
        [sym_continue_statement] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_except] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_LBRACE] = ACTIONS(599),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(599),
    },
    [270] = {
        [sym__statement] = STATE(258),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(637),
    },
    [271] = {
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_elif] = ACTIONS(621),
        [anon_sym_else] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_except] = ACTIONS(621),
        [anon_sym_finally] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(619),
        [anon_sym_LBRACE] = ACTIONS(619),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(619),
    },
    [272] = {
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
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
    [273] = {
        [sym_parameters] = STATE(275),
        [anon_sym_LPAREN] = ACTIONS(645),
        [sym_comment] = ACTIONS(73),
    },
    [274] = {
        [sym_default_parameter] = STATE(281),
        [sym_list_splat_parameter] = STATE(282),
        [sym_dictionary_splat_parameter] = STATE(283),
        [aux_sym_parameters_repeat1] = STATE(284),
        [anon_sym_RPAREN] = ACTIONS(647),
        [anon_sym_STAR] = ACTIONS(649),
        [sym_identifier] = ACTIONS(651),
        [sym_comment] = ACTIONS(73),
    },
    [275] = {
        [anon_sym_COLON] = ACTIONS(653),
        [sym_comment] = ACTIONS(73),
    },
    [276] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(277),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [anon_sym_print] = ACTIONS(655),
        [anon_sym_return] = ACTIONS(655),
        [anon_sym_del] = ACTIONS(655),
        [sym_pass_statement] = ACTIONS(655),
        [sym_break_statement] = ACTIONS(655),
        [sym_continue_statement] = ACTIONS(655),
        [anon_sym_if] = ACTIONS(655),
        [anon_sym_for] = ACTIONS(655),
        [anon_sym_while] = ACTIONS(655),
        [anon_sym_try] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(657),
        [anon_sym_LBRACE] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(657),
    },
    [278] = {
        [anon_sym_COLON] = ACTIONS(661),
        [sym_comment] = ACTIONS(73),
    },
    [279] = {
        [anon_sym_STAR] = ACTIONS(663),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(73),
    },
    [280] = {
        [anon_sym_COMMA] = ACTIONS(667),
        [anon_sym_RPAREN] = ACTIONS(669),
        [anon_sym_EQ] = ACTIONS(671),
        [sym_comment] = ACTIONS(73),
    },
    [281] = {
        [anon_sym_COMMA] = ACTIONS(667),
        [anon_sym_RPAREN] = ACTIONS(669),
        [sym_comment] = ACTIONS(73),
    },
    [282] = {
        [anon_sym_COMMA] = ACTIONS(673),
        [anon_sym_RPAREN] = ACTIONS(669),
        [sym_comment] = ACTIONS(73),
    },
    [283] = {
        [anon_sym_RPAREN] = ACTIONS(669),
        [sym_comment] = ACTIONS(73),
    },
    [284] = {
        [sym_default_parameter] = STATE(286),
        [sym_list_splat_parameter] = STATE(287),
        [sym_dictionary_splat_parameter] = STATE(288),
        [anon_sym_STAR] = ACTIONS(649),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(73),
    },
    [285] = {
        [anon_sym_COMMA] = ACTIONS(677),
        [anon_sym_RPAREN] = ACTIONS(679),
        [anon_sym_EQ] = ACTIONS(671),
        [sym_comment] = ACTIONS(73),
    },
    [286] = {
        [anon_sym_COMMA] = ACTIONS(677),
        [anon_sym_RPAREN] = ACTIONS(679),
        [sym_comment] = ACTIONS(73),
    },
    [287] = {
        [anon_sym_COMMA] = ACTIONS(681),
        [anon_sym_RPAREN] = ACTIONS(679),
        [sym_comment] = ACTIONS(73),
    },
    [288] = {
        [anon_sym_RPAREN] = ACTIONS(679),
        [sym_comment] = ACTIONS(73),
    },
    [289] = {
        [anon_sym_COLON] = ACTIONS(683),
        [sym_comment] = ACTIONS(73),
    },
    [290] = {
        [sym_dictionary_splat_parameter] = STATE(292),
        [anon_sym_STAR] = ACTIONS(685),
        [sym_comment] = ACTIONS(73),
    },
    [291] = {
        [anon_sym_STAR] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
    },
    [292] = {
        [anon_sym_RPAREN] = ACTIONS(687),
        [sym_comment] = ACTIONS(73),
    },
    [293] = {
        [anon_sym_COLON] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
    },
    [294] = {
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(73),
    },
    [295] = {
        [anon_sym_RPAREN] = ACTIONS(693),
        [sym_comment] = ACTIONS(73),
    },
    [296] = {
        [anon_sym_RPAREN] = ACTIONS(695),
        [anon_sym_STAR] = ACTIONS(697),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(73),
    },
    [297] = {
        [anon_sym_COLON] = ACTIONS(701),
        [sym_comment] = ACTIONS(73),
    },
    [298] = {
        [sym__expression] = STATE(299),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [299] = {
        [anon_sym_COMMA] = ACTIONS(703),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(703),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [300] = {
        [anon_sym_COLON] = ACTIONS(705),
        [sym_comment] = ACTIONS(73),
    },
    [301] = {
        [sym_dictionary_splat_parameter] = STATE(302),
        [anon_sym_STAR] = ACTIONS(685),
        [sym_comment] = ACTIONS(73),
    },
    [302] = {
        [anon_sym_RPAREN] = ACTIONS(695),
        [sym_comment] = ACTIONS(73),
    },
    [303] = {
        [anon_sym_RPAREN] = ACTIONS(679),
        [anon_sym_STAR] = ACTIONS(707),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(73),
    },
    [304] = {
        [anon_sym_COMMA] = ACTIONS(711),
        [anon_sym_RPAREN] = ACTIONS(711),
        [sym_comment] = ACTIONS(73),
    },
    [305] = {
        [aux_sym_with_statement_repeat1] = STATE(311),
        [anon_sym_COMMA] = ACTIONS(713),
        [anon_sym_COLON] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
    },
    [306] = {
        [anon_sym_COMMA] = ACTIONS(717),
        [anon_sym_COLON] = ACTIONS(717),
        [anon_sym_as] = ACTIONS(719),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [307] = {
        [sym__expression] = STATE(308),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [308] = {
        [anon_sym_COMMA] = ACTIONS(721),
        [anon_sym_COLON] = ACTIONS(721),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [309] = {
        [sym_with_item] = STATE(317),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [310] = {
        [sym__simple_statement] = STATE(267),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [311] = {
        [anon_sym_COMMA] = ACTIONS(723),
        [anon_sym_COLON] = ACTIONS(725),
        [sym_comment] = ACTIONS(73),
    },
    [312] = {
        [sym_with_item] = STATE(315),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [313] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(314),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [314] = {
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
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
    [315] = {
        [anon_sym_COMMA] = ACTIONS(733),
        [anon_sym_COLON] = ACTIONS(733),
        [sym_comment] = ACTIONS(73),
    },
    [316] = {
        [anon_sym_print] = ACTIONS(735),
        [anon_sym_return] = ACTIONS(735),
        [anon_sym_del] = ACTIONS(735),
        [sym_pass_statement] = ACTIONS(735),
        [sym_break_statement] = ACTIONS(735),
        [sym_continue_statement] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(735),
        [anon_sym_for] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(735),
        [anon_sym_try] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(735),
        [anon_sym_def] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_AT] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_number] = ACTIONS(735),
        [sym_identifier] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(737),
    },
    [317] = {
        [anon_sym_COMMA] = ACTIONS(741),
        [anon_sym_COLON] = ACTIONS(741),
        [sym_comment] = ACTIONS(73),
    },
    [318] = {
        [sym__simple_statement] = STATE(320),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(321),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(743),
    },
    [319] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(344),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(745),
    },
    [320] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(745),
    },
    [321] = {
        [sym_except_clause] = STATE(324),
        [sym_finally_clause] = STATE(325),
        [aux_sym_try_statement_repeat1] = STATE(326),
        [anon_sym_except] = ACTIONS(747),
        [anon_sym_finally] = ACTIONS(749),
        [sym_comment] = ACTIONS(73),
    },
    [322] = {
        [sym__expression] = STATE(336),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [323] = {
        [anon_sym_COLON] = ACTIONS(751),
        [sym_comment] = ACTIONS(73),
    },
    [324] = {
        [anon_sym_print] = ACTIONS(753),
        [anon_sym_return] = ACTIONS(753),
        [anon_sym_del] = ACTIONS(753),
        [sym_pass_statement] = ACTIONS(753),
        [sym_break_statement] = ACTIONS(753),
        [sym_continue_statement] = ACTIONS(753),
        [anon_sym_if] = ACTIONS(753),
        [anon_sym_else] = ACTIONS(753),
        [anon_sym_for] = ACTIONS(753),
        [anon_sym_while] = ACTIONS(753),
        [anon_sym_try] = ACTIONS(753),
        [anon_sym_except] = ACTIONS(753),
        [anon_sym_finally] = ACTIONS(753),
        [anon_sym_with] = ACTIONS(753),
        [anon_sym_def] = ACTIONS(753),
        [anon_sym_class] = ACTIONS(753),
        [anon_sym_AT] = ACTIONS(755),
        [anon_sym_LBRACK] = ACTIONS(755),
        [anon_sym_LBRACE] = ACTIONS(755),
        [sym_number] = ACTIONS(753),
        [sym_identifier] = ACTIONS(757),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(755),
    },
    [325] = {
        [anon_sym_print] = ACTIONS(759),
        [anon_sym_return] = ACTIONS(759),
        [anon_sym_del] = ACTIONS(759),
        [sym_pass_statement] = ACTIONS(759),
        [sym_break_statement] = ACTIONS(759),
        [sym_continue_statement] = ACTIONS(759),
        [anon_sym_if] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(759),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(759),
        [anon_sym_with] = ACTIONS(759),
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(761),
        [anon_sym_LBRACE] = ACTIONS(761),
        [sym_number] = ACTIONS(759),
        [sym_identifier] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(761),
    },
    [326] = {
        [sym_else_clause] = STATE(328),
        [sym_except_clause] = STATE(329),
        [sym_finally_clause] = STATE(330),
        [anon_sym_print] = ACTIONS(759),
        [anon_sym_return] = ACTIONS(759),
        [anon_sym_del] = ACTIONS(759),
        [sym_pass_statement] = ACTIONS(759),
        [sym_break_statement] = ACTIONS(759),
        [sym_continue_statement] = ACTIONS(759),
        [anon_sym_if] = ACTIONS(759),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(759),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(759),
        [anon_sym_except] = ACTIONS(767),
        [anon_sym_finally] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(759),
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(761),
        [anon_sym_LBRACE] = ACTIONS(761),
        [sym_number] = ACTIONS(759),
        [sym_identifier] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(761),
    },
    [327] = {
        [anon_sym_COLON] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
    },
    [328] = {
        [sym_finally_clause] = STATE(331),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_finally] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(775),
    },
    [329] = {
        [anon_sym_print] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(779),
        [anon_sym_del] = ACTIONS(779),
        [sym_pass_statement] = ACTIONS(779),
        [sym_break_statement] = ACTIONS(779),
        [sym_continue_statement] = ACTIONS(779),
        [anon_sym_if] = ACTIONS(779),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(779),
        [anon_sym_try] = ACTIONS(779),
        [anon_sym_except] = ACTIONS(779),
        [anon_sym_finally] = ACTIONS(779),
        [anon_sym_with] = ACTIONS(779),
        [anon_sym_def] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(779),
        [anon_sym_AT] = ACTIONS(781),
        [anon_sym_LBRACK] = ACTIONS(781),
        [anon_sym_LBRACE] = ACTIONS(781),
        [sym_number] = ACTIONS(779),
        [sym_identifier] = ACTIONS(783),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(781),
    },
    [330] = {
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(775),
    },
    [331] = {
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(787),
    },
    [332] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(333),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [333] = {
        [anon_sym_print] = ACTIONS(791),
        [anon_sym_return] = ACTIONS(791),
        [anon_sym_del] = ACTIONS(791),
        [sym_pass_statement] = ACTIONS(791),
        [sym_break_statement] = ACTIONS(791),
        [sym_continue_statement] = ACTIONS(791),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(791),
        [anon_sym_while] = ACTIONS(791),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_finally] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(791),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(791),
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(793),
    },
    [334] = {
        [sym__simple_statement] = STATE(267),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [335] = {
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_del] = ACTIONS(797),
        [sym_pass_statement] = ACTIONS(797),
        [sym_break_statement] = ACTIONS(797),
        [sym_continue_statement] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(799),
    },
    [336] = {
        [anon_sym_COMMA] = ACTIONS(803),
        [anon_sym_COLON] = ACTIONS(805),
        [anon_sym_as] = ACTIONS(803),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [337] = {
        [sym__expression] = STATE(339),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [338] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(342),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [339] = {
        [anon_sym_COLON] = ACTIONS(807),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [340] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(341),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [341] = {
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(811),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_LBRACE] = ACTIONS(811),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(811),
    },
    [342] = {
        [anon_sym_print] = ACTIONS(815),
        [anon_sym_return] = ACTIONS(815),
        [anon_sym_del] = ACTIONS(815),
        [sym_pass_statement] = ACTIONS(815),
        [sym_break_statement] = ACTIONS(815),
        [sym_continue_statement] = ACTIONS(815),
        [anon_sym_if] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(815),
        [anon_sym_while] = ACTIONS(815),
        [anon_sym_try] = ACTIONS(815),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(817),
    },
    [343] = {
        [anon_sym_except] = ACTIONS(599),
        [anon_sym_finally] = ACTIONS(599),
        [sym_comment] = ACTIONS(73),
    },
    [344] = {
        [sym__statement] = STATE(258),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(821),
    },
    [345] = {
        [anon_sym_except] = ACTIONS(619),
        [anon_sym_finally] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [346] = {
        [anon_sym_COLON] = ACTIONS(823),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [347] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(348),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [348] = {
        [sym_else_clause] = STATE(349),
        [anon_sym_print] = ACTIONS(825),
        [anon_sym_return] = ACTIONS(825),
        [anon_sym_del] = ACTIONS(825),
        [sym_pass_statement] = ACTIONS(825),
        [sym_break_statement] = ACTIONS(825),
        [sym_continue_statement] = ACTIONS(825),
        [anon_sym_if] = ACTIONS(825),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(825),
        [anon_sym_while] = ACTIONS(825),
        [anon_sym_try] = ACTIONS(825),
        [anon_sym_with] = ACTIONS(825),
        [anon_sym_def] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(827),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_LBRACE] = ACTIONS(827),
        [sym_number] = ACTIONS(825),
        [sym_identifier] = ACTIONS(829),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(827),
    },
    [349] = {
        [anon_sym_print] = ACTIONS(831),
        [anon_sym_return] = ACTIONS(831),
        [anon_sym_del] = ACTIONS(831),
        [sym_pass_statement] = ACTIONS(831),
        [sym_break_statement] = ACTIONS(831),
        [sym_continue_statement] = ACTIONS(831),
        [anon_sym_if] = ACTIONS(831),
        [anon_sym_for] = ACTIONS(831),
        [anon_sym_while] = ACTIONS(831),
        [anon_sym_try] = ACTIONS(831),
        [anon_sym_with] = ACTIONS(831),
        [anon_sym_def] = ACTIONS(831),
        [anon_sym_class] = ACTIONS(831),
        [anon_sym_AT] = ACTIONS(833),
        [anon_sym_LBRACK] = ACTIONS(833),
        [anon_sym_LBRACE] = ACTIONS(833),
        [sym_number] = ACTIONS(831),
        [sym_identifier] = ACTIONS(835),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(833),
    },
    [350] = {
        [anon_sym_in] = ACTIONS(837),
        [sym_comment] = ACTIONS(73),
    },
    [351] = {
        [sym_expression_list] = STATE(352),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [352] = {
        [anon_sym_COLON] = ACTIONS(839),
        [sym_comment] = ACTIONS(73),
    },
    [353] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(354),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [354] = {
        [sym_else_clause] = STATE(355),
        [anon_sym_print] = ACTIONS(841),
        [anon_sym_return] = ACTIONS(841),
        [anon_sym_del] = ACTIONS(841),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [anon_sym_if] = ACTIONS(841),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(841),
        [anon_sym_while] = ACTIONS(841),
        [anon_sym_try] = ACTIONS(841),
        [anon_sym_with] = ACTIONS(841),
        [anon_sym_def] = ACTIONS(841),
        [anon_sym_class] = ACTIONS(841),
        [anon_sym_AT] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(843),
        [anon_sym_LBRACE] = ACTIONS(843),
        [sym_number] = ACTIONS(841),
        [sym_identifier] = ACTIONS(845),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(843),
    },
    [355] = {
        [anon_sym_print] = ACTIONS(847),
        [anon_sym_return] = ACTIONS(847),
        [anon_sym_del] = ACTIONS(847),
        [sym_pass_statement] = ACTIONS(847),
        [sym_break_statement] = ACTIONS(847),
        [sym_continue_statement] = ACTIONS(847),
        [anon_sym_if] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(847),
        [anon_sym_while] = ACTIONS(847),
        [anon_sym_try] = ACTIONS(847),
        [anon_sym_with] = ACTIONS(847),
        [anon_sym_def] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_AT] = ACTIONS(849),
        [anon_sym_LBRACK] = ACTIONS(849),
        [anon_sym_LBRACE] = ACTIONS(849),
        [sym_number] = ACTIONS(847),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(849),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(853),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [357] = {
        [sym__simple_statement] = STATE(267),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [358] = {
        [sym_elif_clause] = STATE(360),
        [sym_else_clause] = STATE(361),
        [aux_sym_if_statement_repeat1] = STATE(362),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_elif] = ACTIONS(857),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(859),
        [anon_sym_LBRACE] = ACTIONS(859),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(861),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(859),
    },
    [359] = {
        [sym__expression] = STATE(365),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [360] = {
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [sym_pass_statement] = ACTIONS(863),
        [sym_break_statement] = ACTIONS(863),
        [sym_continue_statement] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_elif] = ACTIONS(863),
        [anon_sym_else] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(865),
        [anon_sym_LBRACK] = ACTIONS(865),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(867),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(865),
    },
    [361] = {
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(871),
    },
    [362] = {
        [sym_elif_clause] = STATE(363),
        [sym_else_clause] = STATE(364),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_elif] = ACTIONS(857),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(871),
    },
    [363] = {
        [anon_sym_print] = ACTIONS(875),
        [anon_sym_return] = ACTIONS(875),
        [anon_sym_del] = ACTIONS(875),
        [sym_pass_statement] = ACTIONS(875),
        [sym_break_statement] = ACTIONS(875),
        [sym_continue_statement] = ACTIONS(875),
        [anon_sym_if] = ACTIONS(875),
        [anon_sym_elif] = ACTIONS(875),
        [anon_sym_else] = ACTIONS(875),
        [anon_sym_for] = ACTIONS(875),
        [anon_sym_while] = ACTIONS(875),
        [anon_sym_try] = ACTIONS(875),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(875),
        [anon_sym_class] = ACTIONS(875),
        [anon_sym_AT] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [sym_number] = ACTIONS(875),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(877),
    },
    [364] = {
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(883),
    },
    [365] = {
        [anon_sym_COLON] = ACTIONS(887),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [366] = {
        [sym__simple_statement] = STATE(267),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(367),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
    [367] = {
        [anon_sym_print] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(889),
        [anon_sym_del] = ACTIONS(889),
        [sym_pass_statement] = ACTIONS(889),
        [sym_break_statement] = ACTIONS(889),
        [sym_continue_statement] = ACTIONS(889),
        [anon_sym_if] = ACTIONS(889),
        [anon_sym_elif] = ACTIONS(889),
        [anon_sym_else] = ACTIONS(889),
        [anon_sym_for] = ACTIONS(889),
        [anon_sym_while] = ACTIONS(889),
        [anon_sym_try] = ACTIONS(889),
        [anon_sym_with] = ACTIONS(889),
        [anon_sym_def] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(889),
        [anon_sym_AT] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(891),
        [anon_sym_LBRACE] = ACTIONS(891),
        [sym_number] = ACTIONS(889),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(891),
    },
    [368] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
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
    [369] = {
        [sym_parameters] = STATE(370),
        [anon_sym_LPAREN] = ACTIONS(645),
        [sym_comment] = ACTIONS(73),
    },
    [370] = {
        [anon_sym_COLON] = ACTIONS(895),
        [sym_comment] = ACTIONS(73),
    },
    [371] = {
        [sym__simple_statement] = STATE(240),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(657),
        [anon_sym_SEMI] = ACTIONS(657),
        [anon_sym_print] = ACTIONS(655),
        [anon_sym_return] = ACTIONS(655),
        [anon_sym_del] = ACTIONS(655),
        [sym_pass_statement] = ACTIONS(655),
        [sym_break_statement] = ACTIONS(655),
        [sym_continue_statement] = ACTIONS(655),
        [anon_sym_if] = ACTIONS(655),
        [anon_sym_for] = ACTIONS(655),
        [anon_sym_while] = ACTIONS(655),
        [anon_sym_try] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(657),
        [anon_sym_LBRACE] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(657),
    },
    [373] = {
        [aux_sym_with_statement_repeat1] = STATE(375),
        [anon_sym_COMMA] = ACTIONS(713),
        [anon_sym_COLON] = ACTIONS(897),
        [sym_comment] = ACTIONS(73),
    },
    [374] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(378),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [375] = {
        [anon_sym_COMMA] = ACTIONS(723),
        [anon_sym_COLON] = ACTIONS(899),
        [sym_comment] = ACTIONS(73),
    },
    [376] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(377),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [377] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
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
    [378] = {
        [ts_builtin_sym_end] = ACTIONS(737),
        [anon_sym_SEMI] = ACTIONS(737),
        [anon_sym_print] = ACTIONS(735),
        [anon_sym_return] = ACTIONS(735),
        [anon_sym_del] = ACTIONS(735),
        [sym_pass_statement] = ACTIONS(735),
        [sym_break_statement] = ACTIONS(735),
        [sym_continue_statement] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(735),
        [anon_sym_for] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(735),
        [anon_sym_try] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(735),
        [anon_sym_def] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_AT] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_number] = ACTIONS(735),
        [sym_identifier] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(737),
    },
    [379] = {
        [sym__simple_statement] = STATE(320),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(380),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(743),
    },
    [380] = {
        [sym_except_clause] = STATE(383),
        [sym_finally_clause] = STATE(384),
        [aux_sym_try_statement_repeat1] = STATE(385),
        [anon_sym_except] = ACTIONS(901),
        [anon_sym_finally] = ACTIONS(903),
        [sym_comment] = ACTIONS(73),
    },
    [381] = {
        [sym__expression] = STATE(395),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [382] = {
        [anon_sym_COLON] = ACTIONS(905),
        [sym_comment] = ACTIONS(73),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(755),
        [anon_sym_SEMI] = ACTIONS(755),
        [anon_sym_print] = ACTIONS(753),
        [anon_sym_return] = ACTIONS(753),
        [anon_sym_del] = ACTIONS(753),
        [sym_pass_statement] = ACTIONS(753),
        [sym_break_statement] = ACTIONS(753),
        [sym_continue_statement] = ACTIONS(753),
        [anon_sym_if] = ACTIONS(753),
        [anon_sym_else] = ACTIONS(753),
        [anon_sym_for] = ACTIONS(753),
        [anon_sym_while] = ACTIONS(753),
        [anon_sym_try] = ACTIONS(753),
        [anon_sym_except] = ACTIONS(753),
        [anon_sym_finally] = ACTIONS(753),
        [anon_sym_with] = ACTIONS(753),
        [anon_sym_def] = ACTIONS(753),
        [anon_sym_class] = ACTIONS(753),
        [anon_sym_AT] = ACTIONS(755),
        [anon_sym_LBRACK] = ACTIONS(755),
        [anon_sym_LBRACE] = ACTIONS(755),
        [sym_number] = ACTIONS(753),
        [sym_identifier] = ACTIONS(757),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(755),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(761),
        [anon_sym_SEMI] = ACTIONS(761),
        [anon_sym_print] = ACTIONS(759),
        [anon_sym_return] = ACTIONS(759),
        [anon_sym_del] = ACTIONS(759),
        [sym_pass_statement] = ACTIONS(759),
        [sym_break_statement] = ACTIONS(759),
        [sym_continue_statement] = ACTIONS(759),
        [anon_sym_if] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(759),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(759),
        [anon_sym_with] = ACTIONS(759),
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(761),
        [anon_sym_LBRACE] = ACTIONS(761),
        [sym_number] = ACTIONS(759),
        [sym_identifier] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(761),
    },
    [385] = {
        [sym_else_clause] = STATE(387),
        [sym_except_clause] = STATE(388),
        [sym_finally_clause] = STATE(389),
        [ts_builtin_sym_end] = ACTIONS(761),
        [anon_sym_SEMI] = ACTIONS(761),
        [anon_sym_print] = ACTIONS(759),
        [anon_sym_return] = ACTIONS(759),
        [anon_sym_del] = ACTIONS(759),
        [sym_pass_statement] = ACTIONS(759),
        [sym_break_statement] = ACTIONS(759),
        [sym_continue_statement] = ACTIONS(759),
        [anon_sym_if] = ACTIONS(759),
        [anon_sym_else] = ACTIONS(907),
        [anon_sym_for] = ACTIONS(759),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(759),
        [anon_sym_except] = ACTIONS(909),
        [anon_sym_finally] = ACTIONS(911),
        [anon_sym_with] = ACTIONS(759),
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(761),
        [anon_sym_LBRACE] = ACTIONS(761),
        [sym_number] = ACTIONS(759),
        [sym_identifier] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(761),
    },
    [386] = {
        [anon_sym_COLON] = ACTIONS(913),
        [sym_comment] = ACTIONS(73),
    },
    [387] = {
        [sym_finally_clause] = STATE(390),
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_finally] = ACTIONS(911),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(775),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(781),
        [anon_sym_SEMI] = ACTIONS(781),
        [anon_sym_print] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(779),
        [anon_sym_del] = ACTIONS(779),
        [sym_pass_statement] = ACTIONS(779),
        [sym_break_statement] = ACTIONS(779),
        [sym_continue_statement] = ACTIONS(779),
        [anon_sym_if] = ACTIONS(779),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(779),
        [anon_sym_try] = ACTIONS(779),
        [anon_sym_except] = ACTIONS(779),
        [anon_sym_finally] = ACTIONS(779),
        [anon_sym_with] = ACTIONS(779),
        [anon_sym_def] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(779),
        [anon_sym_AT] = ACTIONS(781),
        [anon_sym_LBRACK] = ACTIONS(781),
        [anon_sym_LBRACE] = ACTIONS(781),
        [sym_number] = ACTIONS(779),
        [sym_identifier] = ACTIONS(783),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(781),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(775),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(787),
        [anon_sym_SEMI] = ACTIONS(787),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(787),
    },
    [391] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(392),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [392] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_print] = ACTIONS(791),
        [anon_sym_return] = ACTIONS(791),
        [anon_sym_del] = ACTIONS(791),
        [sym_pass_statement] = ACTIONS(791),
        [sym_break_statement] = ACTIONS(791),
        [sym_continue_statement] = ACTIONS(791),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(791),
        [anon_sym_while] = ACTIONS(791),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_finally] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(791),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(791),
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(793),
    },
    [393] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(394),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [394] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_del] = ACTIONS(797),
        [sym_pass_statement] = ACTIONS(797),
        [sym_break_statement] = ACTIONS(797),
        [sym_continue_statement] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(799),
    },
    [395] = {
        [anon_sym_COMMA] = ACTIONS(915),
        [anon_sym_COLON] = ACTIONS(917),
        [anon_sym_as] = ACTIONS(915),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [396] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [397] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(401),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [398] = {
        [anon_sym_COLON] = ACTIONS(919),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [399] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(400),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(811),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(811),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_LBRACE] = ACTIONS(811),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(811),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(817),
        [anon_sym_SEMI] = ACTIONS(817),
        [anon_sym_print] = ACTIONS(815),
        [anon_sym_return] = ACTIONS(815),
        [anon_sym_del] = ACTIONS(815),
        [sym_pass_statement] = ACTIONS(815),
        [sym_break_statement] = ACTIONS(815),
        [sym_continue_statement] = ACTIONS(815),
        [anon_sym_if] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(815),
        [anon_sym_while] = ACTIONS(815),
        [anon_sym_try] = ACTIONS(815),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(817),
    },
    [402] = {
        [anon_sym_COLON] = ACTIONS(921),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [403] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(404),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [404] = {
        [sym_else_clause] = STATE(405),
        [ts_builtin_sym_end] = ACTIONS(827),
        [anon_sym_SEMI] = ACTIONS(827),
        [anon_sym_print] = ACTIONS(825),
        [anon_sym_return] = ACTIONS(825),
        [anon_sym_del] = ACTIONS(825),
        [sym_pass_statement] = ACTIONS(825),
        [sym_break_statement] = ACTIONS(825),
        [sym_continue_statement] = ACTIONS(825),
        [anon_sym_if] = ACTIONS(825),
        [anon_sym_else] = ACTIONS(907),
        [anon_sym_for] = ACTIONS(825),
        [anon_sym_while] = ACTIONS(825),
        [anon_sym_try] = ACTIONS(825),
        [anon_sym_with] = ACTIONS(825),
        [anon_sym_def] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(827),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_LBRACE] = ACTIONS(827),
        [sym_number] = ACTIONS(825),
        [sym_identifier] = ACTIONS(829),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(827),
    },
    [405] = {
        [ts_builtin_sym_end] = ACTIONS(833),
        [anon_sym_SEMI] = ACTIONS(833),
        [anon_sym_print] = ACTIONS(831),
        [anon_sym_return] = ACTIONS(831),
        [anon_sym_del] = ACTIONS(831),
        [sym_pass_statement] = ACTIONS(831),
        [sym_break_statement] = ACTIONS(831),
        [sym_continue_statement] = ACTIONS(831),
        [anon_sym_if] = ACTIONS(831),
        [anon_sym_for] = ACTIONS(831),
        [anon_sym_while] = ACTIONS(831),
        [anon_sym_try] = ACTIONS(831),
        [anon_sym_with] = ACTIONS(831),
        [anon_sym_def] = ACTIONS(831),
        [anon_sym_class] = ACTIONS(831),
        [anon_sym_AT] = ACTIONS(833),
        [anon_sym_LBRACK] = ACTIONS(833),
        [anon_sym_LBRACE] = ACTIONS(833),
        [sym_number] = ACTIONS(831),
        [sym_identifier] = ACTIONS(835),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(833),
    },
    [406] = {
        [anon_sym_in] = ACTIONS(923),
        [sym_comment] = ACTIONS(73),
    },
    [407] = {
        [sym_expression_list] = STATE(408),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [408] = {
        [anon_sym_COLON] = ACTIONS(925),
        [sym_comment] = ACTIONS(73),
    },
    [409] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(410),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [410] = {
        [sym_else_clause] = STATE(411),
        [ts_builtin_sym_end] = ACTIONS(843),
        [anon_sym_SEMI] = ACTIONS(843),
        [anon_sym_print] = ACTIONS(841),
        [anon_sym_return] = ACTIONS(841),
        [anon_sym_del] = ACTIONS(841),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [anon_sym_if] = ACTIONS(841),
        [anon_sym_else] = ACTIONS(907),
        [anon_sym_for] = ACTIONS(841),
        [anon_sym_while] = ACTIONS(841),
        [anon_sym_try] = ACTIONS(841),
        [anon_sym_with] = ACTIONS(841),
        [anon_sym_def] = ACTIONS(841),
        [anon_sym_class] = ACTIONS(841),
        [anon_sym_AT] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(843),
        [anon_sym_LBRACE] = ACTIONS(843),
        [sym_number] = ACTIONS(841),
        [sym_identifier] = ACTIONS(845),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(843),
    },
    [411] = {
        [ts_builtin_sym_end] = ACTIONS(849),
        [anon_sym_SEMI] = ACTIONS(849),
        [anon_sym_print] = ACTIONS(847),
        [anon_sym_return] = ACTIONS(847),
        [anon_sym_del] = ACTIONS(847),
        [sym_pass_statement] = ACTIONS(847),
        [sym_break_statement] = ACTIONS(847),
        [sym_continue_statement] = ACTIONS(847),
        [anon_sym_if] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(847),
        [anon_sym_while] = ACTIONS(847),
        [anon_sym_try] = ACTIONS(847),
        [anon_sym_with] = ACTIONS(847),
        [anon_sym_def] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_AT] = ACTIONS(849),
        [anon_sym_LBRACK] = ACTIONS(849),
        [anon_sym_LBRACE] = ACTIONS(849),
        [sym_number] = ACTIONS(847),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(849),
    },
    [412] = {
        [anon_sym_COLON] = ACTIONS(927),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [413] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(414),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [414] = {
        [sym_elif_clause] = STATE(416),
        [sym_else_clause] = STATE(417),
        [aux_sym_if_statement_repeat1] = STATE(418),
        [ts_builtin_sym_end] = ACTIONS(859),
        [anon_sym_SEMI] = ACTIONS(859),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_elif] = ACTIONS(929),
        [anon_sym_else] = ACTIONS(907),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(859),
        [anon_sym_LBRACE] = ACTIONS(859),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(861),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(859),
    },
    [415] = {
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [416] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_SEMI] = ACTIONS(865),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [sym_pass_statement] = ACTIONS(863),
        [sym_break_statement] = ACTIONS(863),
        [sym_continue_statement] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_elif] = ACTIONS(863),
        [anon_sym_else] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(865),
        [anon_sym_LBRACK] = ACTIONS(865),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(867),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(865),
    },
    [417] = {
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(871),
    },
    [418] = {
        [sym_elif_clause] = STATE(419),
        [sym_else_clause] = STATE(420),
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_elif] = ACTIONS(929),
        [anon_sym_else] = ACTIONS(907),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(871),
    },
    [419] = {
        [ts_builtin_sym_end] = ACTIONS(877),
        [anon_sym_SEMI] = ACTIONS(877),
        [anon_sym_print] = ACTIONS(875),
        [anon_sym_return] = ACTIONS(875),
        [anon_sym_del] = ACTIONS(875),
        [sym_pass_statement] = ACTIONS(875),
        [sym_break_statement] = ACTIONS(875),
        [sym_continue_statement] = ACTIONS(875),
        [anon_sym_if] = ACTIONS(875),
        [anon_sym_elif] = ACTIONS(875),
        [anon_sym_else] = ACTIONS(875),
        [anon_sym_for] = ACTIONS(875),
        [anon_sym_while] = ACTIONS(875),
        [anon_sym_try] = ACTIONS(875),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(875),
        [anon_sym_class] = ACTIONS(875),
        [anon_sym_AT] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [sym_number] = ACTIONS(875),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(877),
    },
    [420] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
    },
    [421] = {
        [anon_sym_COLON] = ACTIONS(931),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [422] = {
        [sym__simple_statement] = STATE(240),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(423),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(571),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(891),
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_print] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(889),
        [anon_sym_del] = ACTIONS(889),
        [sym_pass_statement] = ACTIONS(889),
        [sym_break_statement] = ACTIONS(889),
        [sym_continue_statement] = ACTIONS(889),
        [anon_sym_if] = ACTIONS(889),
        [anon_sym_elif] = ACTIONS(889),
        [anon_sym_else] = ACTIONS(889),
        [anon_sym_for] = ACTIONS(889),
        [anon_sym_while] = ACTIONS(889),
        [anon_sym_try] = ACTIONS(889),
        [anon_sym_with] = ACTIONS(889),
        [anon_sym_def] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(889),
        [anon_sym_AT] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(891),
        [anon_sym_LBRACE] = ACTIONS(891),
        [sym_number] = ACTIONS(889),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(891),
    },
    [424] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(933),
    },
    [425] = {
        [aux_sym_print_statement_repeat1] = STATE(427),
        [anon_sym_COMMA] = ACTIONS(935),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(373),
    },
    [426] = {
        [sym__expression] = STATE(430),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [427] = {
        [anon_sym_COMMA] = ACTIONS(937),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(377),
    },
    [428] = {
        [sym__expression] = STATE(429),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [429] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(379),
    },
    [430] = {
        [anon_sym_COMMA] = ACTIONS(381),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(381),
    },
    [431] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(939),
    },
    [432] = {
        [aux_sym_print_statement_repeat1] = STATE(433),
        [anon_sym_COMMA] = ACTIONS(935),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(941),
    },
    [433] = {
        [anon_sym_COMMA] = ACTIONS(937),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(943),
    },
    [434] = {
        [sym_with_item] = STATE(628),
        [sym_dictionary_splat_parameter] = STATE(563),
        [sym__expression] = STATE(629),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(630),
        [sym_dictionary_splat_argument] = STATE(631),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(632),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(945),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_LBRACK] = ACTIONS(957),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(961),
        [anon_sym_RBRACK] = ACTIONS(963),
        [anon_sym_LBRACE] = ACTIONS(965),
        [anon_sym_RBRACE] = ACTIONS(969),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(975),
        [sym_comment] = ACTIONS(73),
    },
    [435] = {
        [sym__expression] = STATE(619),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [436] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(479),
        [sym__expression] = STATE(545),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [437] = {
        [sym__expression] = STATE(616),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [438] = {
        [anon_sym_COLON] = ACTIONS(983),
        [sym_comment] = ACTIONS(73),
    },
    [439] = {
        [sym_expression_list] = STATE(615),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [440] = {
        [sym_expression_list] = STATE(522),
        [sym__expression] = STATE(611),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [441] = {
        [sym__expression] = STATE(607),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [442] = {
        [anon_sym_COLON] = ACTIONS(985),
        [sym_comment] = ACTIONS(73),
    },
    [443] = {
        [sym__expression] = STATE(600),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [444] = {
        [sym__expression] = STATE(599),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [445] = {
        [anon_sym_COLON] = ACTIONS(987),
        [sym_comment] = ACTIONS(73),
    },
    [446] = {
        [sym_with_item] = STATE(596),
        [sym__expression] = STATE(306),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [447] = {
        [sym_identifier] = ACTIONS(989),
        [sym_comment] = ACTIONS(73),
    },
    [448] = {
        [sym_default_parameter] = STATE(281),
        [sym_list_splat_parameter] = STATE(282),
        [sym_dictionary_splat_parameter] = STATE(283),
        [sym_expression_list] = STATE(575),
        [sym__expression] = STATE(590),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(155),
        [sym_list_splat_argument] = STATE(156),
        [sym_dictionary_splat_argument] = STATE(157),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [aux_sym_parameters_repeat1] = STATE(284),
        [aux_sym_call_repeat1] = STATE(158),
        [anon_sym_RPAREN] = ACTIONS(647),
        [anon_sym_STAR] = ACTIONS(991),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(73),
    },
    [449] = {
        [anon_sym_COMMA] = ACTIONS(995),
        [anon_sym_COLON] = ACTIONS(1001),
        [anon_sym_for] = ACTIONS(995),
        [anon_sym_in] = ACTIONS(995),
        [anon_sym_as] = ACTIONS(995),
        [anon_sym_LPAREN] = ACTIONS(995),
        [anon_sym_RPAREN] = ACTIONS(995),
        [anon_sym_STAR] = ACTIONS(1013),
        [anon_sym_PLUS] = ACTIONS(995),
        [anon_sym_DASH] = ACTIONS(995),
        [anon_sym_SLASH] = ACTIONS(995),
        [anon_sym_STAR_STAR] = ACTIONS(995),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_RBRACK] = ACTIONS(995),
        [anon_sym_RBRACE] = ACTIONS(995),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1019),
    },
    [450] = {
        [sym__expression] = STATE(587),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [451] = {
        [sym__expression] = STATE(586),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_STAR] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(73),
    },
    [452] = {
        [sym_identifier] = ACTIONS(1029),
        [sym_comment] = ACTIONS(73),
    },
    [453] = {
        [sym_identifier] = ACTIONS(1031),
        [sym_comment] = ACTIONS(73),
    },
    [454] = {
        [sym__expression] = STATE(538),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [455] = {
        [sym__expression] = STATE(581),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [456] = {
        [sym__expression] = STATE(577),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [457] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(1033),
        [anon_sym_RBRACK] = ACTIONS(1037),
        [sym_comment] = ACTIONS(73),
    },
    [458] = {
        [anon_sym_COMMA] = ACTIONS(1041),
        [anon_sym_COLON] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_in] = ACTIONS(1041),
        [anon_sym_as] = ACTIONS(1041),
        [anon_sym_LPAREN] = ACTIONS(1041),
        [anon_sym_RPAREN] = ACTIONS(1041),
        [anon_sym_STAR] = ACTIONS(1050),
        [anon_sym_PLUS] = ACTIONS(1041),
        [anon_sym_DASH] = ACTIONS(1041),
        [anon_sym_SLASH] = ACTIONS(1041),
        [anon_sym_STAR_STAR] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1041),
        [anon_sym_RBRACK] = ACTIONS(1041),
        [anon_sym_RBRACE] = ACTIONS(1041),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1041),
    },
    [459] = {
        [anon_sym_COMMA] = ACTIONS(1059),
        [anon_sym_COLON] = ACTIONS(1059),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_in] = ACTIONS(1059),
        [anon_sym_as] = ACTIONS(1059),
        [anon_sym_LPAREN] = ACTIONS(1059),
        [anon_sym_RPAREN] = ACTIONS(1059),
        [anon_sym_STAR] = ACTIONS(1069),
        [anon_sym_PLUS] = ACTIONS(1059),
        [anon_sym_DASH] = ACTIONS(1059),
        [anon_sym_SLASH] = ACTIONS(1059),
        [anon_sym_STAR_STAR] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1059),
        [anon_sym_RBRACK] = ACTIONS(1059),
        [anon_sym_RBRACE] = ACTIONS(1059),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1059),
    },
    [460] = {
        [sym_parameters] = STATE(474),
        [aux_sym_dotted_name_repeat1] = STATE(229),
        [anon_sym_COMMA] = ACTIONS(1079),
        [anon_sym_COLON] = ACTIONS(1083),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(1086),
        [anon_sym_RPAREN] = ACTIONS(1092),
        [anon_sym_EQ] = ACTIONS(1097),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_DOT] = ACTIONS(1099),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1103),
    },
    [461] = {
        [ts_builtin_sym_end] = ACTIONS(1108),
        [anon_sym_SEMI] = ACTIONS(1112),
        [anon_sym_print] = ACTIONS(1115),
        [anon_sym_return] = ACTIONS(1115),
        [anon_sym_del] = ACTIONS(1115),
        [sym_pass_statement] = ACTIONS(1115),
        [sym_break_statement] = ACTIONS(1115),
        [sym_continue_statement] = ACTIONS(1115),
        [anon_sym_if] = ACTIONS(1115),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(1115),
        [anon_sym_while] = ACTIONS(1115),
        [anon_sym_try] = ACTIONS(1115),
        [anon_sym_except] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(1115),
        [anon_sym_def] = ACTIONS(1118),
        [anon_sym_class] = ACTIONS(1118),
        [anon_sym_AT] = ACTIONS(1123),
        [anon_sym_LBRACK] = ACTIONS(1112),
        [anon_sym_LBRACE] = ACTIONS(1112),
        [sym_number] = ACTIONS(1115),
        [sym_identifier] = ACTIONS(1128),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1112),
        [sym__dedent] = ACTIONS(1112),
    },
    [462] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(502),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1131),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(1133),
        [anon_sym_SEMI] = ACTIONS(1133),
        [anon_sym_print] = ACTIONS(1136),
        [anon_sym_return] = ACTIONS(1136),
        [anon_sym_del] = ACTIONS(1136),
        [sym_pass_statement] = ACTIONS(1136),
        [sym_break_statement] = ACTIONS(1136),
        [sym_continue_statement] = ACTIONS(1136),
        [anon_sym_if] = ACTIONS(1136),
        [anon_sym_elif] = ACTIONS(1136),
        [anon_sym_else] = ACTIONS(1136),
        [anon_sym_for] = ACTIONS(1136),
        [anon_sym_while] = ACTIONS(1136),
        [anon_sym_try] = ACTIONS(1136),
        [anon_sym_except] = ACTIONS(1136),
        [anon_sym_finally] = ACTIONS(1136),
        [anon_sym_with] = ACTIONS(1136),
        [anon_sym_def] = ACTIONS(1136),
        [anon_sym_class] = ACTIONS(1136),
        [anon_sym_AT] = ACTIONS(1133),
        [anon_sym_LBRACK] = ACTIONS(1133),
        [anon_sym_LBRACE] = ACTIONS(1133),
        [sym_number] = ACTIONS(1136),
        [sym_identifier] = ACTIONS(1139),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1133),
        [sym__dedent] = ACTIONS(1133),
    },
    [464] = {
        [ts_builtin_sym_end] = ACTIONS(1142),
        [anon_sym_SEMI] = ACTIONS(1142),
        [anon_sym_print] = ACTIONS(1145),
        [anon_sym_return] = ACTIONS(1145),
        [anon_sym_del] = ACTIONS(1145),
        [sym_pass_statement] = ACTIONS(1145),
        [sym_break_statement] = ACTIONS(1145),
        [sym_continue_statement] = ACTIONS(1145),
        [anon_sym_if] = ACTIONS(1145),
        [anon_sym_for] = ACTIONS(1145),
        [anon_sym_while] = ACTIONS(1145),
        [anon_sym_try] = ACTIONS(1145),
        [anon_sym_with] = ACTIONS(1145),
        [anon_sym_def] = ACTIONS(1145),
        [anon_sym_class] = ACTIONS(1145),
        [anon_sym_AT] = ACTIONS(1142),
        [anon_sym_LBRACK] = ACTIONS(1142),
        [anon_sym_LBRACE] = ACTIONS(1142),
        [sym_number] = ACTIONS(1145),
        [sym_identifier] = ACTIONS(1148),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1142),
        [sym__dedent] = ACTIONS(1142),
    },
    [465] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1151),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_SEMI] = ACTIONS(149),
        [anon_sym_print] = ACTIONS(151),
        [anon_sym_return] = ACTIONS(151),
        [anon_sym_del] = ACTIONS(151),
        [sym_pass_statement] = ACTIONS(151),
        [sym_break_statement] = ACTIONS(151),
        [sym_continue_statement] = ACTIONS(151),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(151),
        [anon_sym_while] = ACTIONS(151),
        [anon_sym_try] = ACTIONS(151),
        [anon_sym_with] = ACTIONS(151),
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(149),
        [sym__dedent] = ACTIONS(149),
    },
    [467] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_return] = ACTIONS(157),
        [anon_sym_del] = ACTIONS(157),
        [sym_pass_statement] = ACTIONS(157),
        [sym_break_statement] = ACTIONS(157),
        [sym_continue_statement] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(157),
        [anon_sym_def] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_number] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(155),
        [sym__dedent] = ACTIONS(155),
    },
    [468] = {
        [ts_builtin_sym_end] = ACTIONS(1153),
        [anon_sym_SEMI] = ACTIONS(1153),
        [anon_sym_print] = ACTIONS(1156),
        [anon_sym_return] = ACTIONS(1156),
        [anon_sym_del] = ACTIONS(1156),
        [sym_pass_statement] = ACTIONS(1156),
        [sym_break_statement] = ACTIONS(1156),
        [sym_continue_statement] = ACTIONS(1156),
        [anon_sym_if] = ACTIONS(1156),
        [anon_sym_elif] = ACTIONS(1156),
        [anon_sym_else] = ACTIONS(1156),
        [anon_sym_for] = ACTIONS(1156),
        [anon_sym_while] = ACTIONS(1156),
        [anon_sym_try] = ACTIONS(1156),
        [anon_sym_with] = ACTIONS(1156),
        [anon_sym_def] = ACTIONS(1156),
        [anon_sym_class] = ACTIONS(1156),
        [anon_sym_AT] = ACTIONS(1153),
        [anon_sym_LBRACK] = ACTIONS(1153),
        [anon_sym_LBRACE] = ACTIONS(1153),
        [sym_number] = ACTIONS(1156),
        [sym_identifier] = ACTIONS(1159),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1153),
        [sym__dedent] = ACTIONS(1153),
    },
    [469] = {
        [sym_finally_clause] = STATE(507),
        [ts_builtin_sym_end] = ACTIONS(1162),
        [anon_sym_SEMI] = ACTIONS(1162),
        [anon_sym_print] = ACTIONS(1168),
        [anon_sym_return] = ACTIONS(1168),
        [anon_sym_del] = ACTIONS(1168),
        [sym_pass_statement] = ACTIONS(1168),
        [sym_break_statement] = ACTIONS(1168),
        [sym_continue_statement] = ACTIONS(1168),
        [anon_sym_if] = ACTIONS(1168),
        [anon_sym_for] = ACTIONS(1168),
        [anon_sym_while] = ACTIONS(1168),
        [anon_sym_try] = ACTIONS(1168),
        [anon_sym_finally] = ACTIONS(1174),
        [anon_sym_with] = ACTIONS(1168),
        [anon_sym_def] = ACTIONS(1168),
        [anon_sym_class] = ACTIONS(1168),
        [anon_sym_AT] = ACTIONS(1162),
        [anon_sym_LBRACK] = ACTIONS(1162),
        [anon_sym_LBRACE] = ACTIONS(1162),
        [sym_number] = ACTIONS(1168),
        [sym_identifier] = ACTIONS(1176),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1162),
        [sym__dedent] = ACTIONS(1162),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(1182),
        [anon_sym_SEMI] = ACTIONS(1182),
        [anon_sym_print] = ACTIONS(1185),
        [anon_sym_return] = ACTIONS(1185),
        [anon_sym_del] = ACTIONS(1185),
        [sym_pass_statement] = ACTIONS(1185),
        [sym_break_statement] = ACTIONS(1185),
        [sym_continue_statement] = ACTIONS(1185),
        [anon_sym_if] = ACTIONS(1185),
        [anon_sym_else] = ACTIONS(1185),
        [anon_sym_for] = ACTIONS(1185),
        [anon_sym_while] = ACTIONS(1185),
        [anon_sym_try] = ACTIONS(1185),
        [anon_sym_except] = ACTIONS(1185),
        [anon_sym_finally] = ACTIONS(1185),
        [anon_sym_with] = ACTIONS(1185),
        [anon_sym_def] = ACTIONS(1185),
        [anon_sym_class] = ACTIONS(1185),
        [anon_sym_AT] = ACTIONS(1182),
        [anon_sym_LBRACK] = ACTIONS(1182),
        [anon_sym_LBRACE] = ACTIONS(1182),
        [sym_number] = ACTIONS(1185),
        [sym_identifier] = ACTIONS(1188),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1182),
        [sym__dedent] = ACTIONS(1182),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(1191),
        [anon_sym_SEMI] = ACTIONS(1191),
        [anon_sym_print] = ACTIONS(1195),
        [anon_sym_return] = ACTIONS(1195),
        [anon_sym_del] = ACTIONS(1195),
        [sym_pass_statement] = ACTIONS(1195),
        [sym_break_statement] = ACTIONS(1195),
        [sym_continue_statement] = ACTIONS(1195),
        [anon_sym_if] = ACTIONS(1195),
        [anon_sym_for] = ACTIONS(1195),
        [anon_sym_while] = ACTIONS(1195),
        [anon_sym_try] = ACTIONS(1195),
        [anon_sym_with] = ACTIONS(1195),
        [anon_sym_def] = ACTIONS(1195),
        [anon_sym_class] = ACTIONS(1195),
        [anon_sym_AT] = ACTIONS(1191),
        [anon_sym_LBRACK] = ACTIONS(1191),
        [anon_sym_LBRACE] = ACTIONS(1191),
        [sym_number] = ACTIONS(1195),
        [sym_identifier] = ACTIONS(1199),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1191),
        [sym__dedent] = ACTIONS(1191),
    },
    [472] = {
        [aux_sym_with_statement_repeat1] = STATE(490),
        [anon_sym_COMMA] = ACTIONS(1203),
        [anon_sym_COLON] = ACTIONS(1207),
        [sym_comment] = ACTIONS(73),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(1211),
        [anon_sym_SEMI] = ACTIONS(1211),
        [anon_sym_print] = ACTIONS(1214),
        [anon_sym_return] = ACTIONS(1214),
        [anon_sym_del] = ACTIONS(1214),
        [sym_pass_statement] = ACTIONS(1214),
        [sym_break_statement] = ACTIONS(1214),
        [sym_continue_statement] = ACTIONS(1214),
        [anon_sym_if] = ACTIONS(1214),
        [anon_sym_for] = ACTIONS(1214),
        [anon_sym_while] = ACTIONS(1214),
        [anon_sym_try] = ACTIONS(1214),
        [anon_sym_with] = ACTIONS(1214),
        [anon_sym_def] = ACTIONS(1214),
        [anon_sym_class] = ACTIONS(1214),
        [anon_sym_AT] = ACTIONS(1211),
        [anon_sym_LBRACK] = ACTIONS(1211),
        [anon_sym_LBRACE] = ACTIONS(1211),
        [sym_number] = ACTIONS(1214),
        [sym_identifier] = ACTIONS(1217),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1211),
        [sym__dedent] = ACTIONS(1211),
    },
    [474] = {
        [anon_sym_COLON] = ACTIONS(1220),
        [sym_comment] = ACTIONS(73),
    },
    [475] = {
        [anon_sym_COMMA] = ACTIONS(1222),
        [anon_sym_RPAREN] = ACTIONS(1224),
        [sym_comment] = ACTIONS(73),
    },
    [476] = {
        [anon_sym_COMMA] = ACTIONS(1226),
        [anon_sym_RPAREN] = ACTIONS(1224),
        [sym_comment] = ACTIONS(73),
    },
    [477] = {
        [anon_sym_RPAREN] = ACTIONS(1228),
        [sym_comment] = ACTIONS(73),
    },
    [478] = {
        [anon_sym_def] = ACTIONS(1230),
        [anon_sym_class] = ACTIONS(1230),
        [anon_sym_AT] = ACTIONS(1230),
        [sym_comment] = ACTIONS(73),
    },
    [479] = {
        [sym_elif_clause] = STATE(548),
        [sym_else_clause] = STATE(557),
        [sym_except_clause] = STATE(558),
        [sym_finally_clause] = STATE(559),
        [aux_sym_if_statement_repeat1] = STATE(488),
        [aux_sym_try_statement_repeat1] = STATE(489),
        [ts_builtin_sym_end] = ACTIONS(1233),
        [anon_sym_SEMI] = ACTIONS(1233),
        [anon_sym_print] = ACTIONS(1247),
        [anon_sym_return] = ACTIONS(1247),
        [anon_sym_del] = ACTIONS(1247),
        [sym_pass_statement] = ACTIONS(1247),
        [sym_break_statement] = ACTIONS(1247),
        [sym_continue_statement] = ACTIONS(1247),
        [anon_sym_if] = ACTIONS(1247),
        [anon_sym_elif] = ACTIONS(1261),
        [anon_sym_else] = ACTIONS(1264),
        [anon_sym_for] = ACTIONS(1247),
        [anon_sym_while] = ACTIONS(1247),
        [anon_sym_try] = ACTIONS(1247),
        [anon_sym_except] = ACTIONS(1269),
        [anon_sym_finally] = ACTIONS(1273),
        [anon_sym_with] = ACTIONS(1247),
        [anon_sym_def] = ACTIONS(1247),
        [anon_sym_class] = ACTIONS(1247),
        [anon_sym_AT] = ACTIONS(1233),
        [anon_sym_LBRACK] = ACTIONS(1233),
        [anon_sym_LBRACE] = ACTIONS(1233),
        [sym_number] = ACTIONS(1247),
        [sym_identifier] = ACTIONS(1278),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1233),
        [sym__dedent] = ACTIONS(1233),
    },
    [480] = {
        [anon_sym_COLON] = ACTIONS(1292),
        [anon_sym_in] = ACTIONS(1294),
        [anon_sym_RPAREN] = ACTIONS(1296),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1298),
    },
    [481] = {
        [aux_sym_print_statement_repeat1] = STATE(487),
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(1301),
        [anon_sym_COLON] = ACTIONS(1316),
        [anon_sym_for] = ACTIONS(1324),
        [anon_sym_in] = ACTIONS(1328),
        [anon_sym_as] = ACTIONS(1333),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_RPAREN] = ACTIONS(1339),
        [anon_sym_STAR] = ACTIONS(1351),
        [anon_sym_PLUS] = ACTIONS(1354),
        [anon_sym_DASH] = ACTIONS(1354),
        [anon_sym_SLASH] = ACTIONS(1354),
        [anon_sym_STAR_STAR] = ACTIONS(1354),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(1360),
        [anon_sym_RBRACE] = ACTIONS(1367),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1373),
    },
    [482] = {
        [anon_sym_COMMA] = ACTIONS(1380),
        [anon_sym_RPAREN] = ACTIONS(1384),
        [sym_comment] = ACTIONS(73),
    },
    [483] = {
        [aux_sym_call_repeat2] = STATE(492),
        [anon_sym_COMMA] = ACTIONS(1388),
        [anon_sym_RPAREN] = ACTIONS(1390),
        [sym_comment] = ACTIONS(73),
    },
    [484] = {
        [anon_sym_RPAREN] = ACTIONS(1392),
        [sym_comment] = ACTIONS(73),
    },
    [485] = {
        [aux_sym_dictionary_repeat1] = STATE(186),
        [anon_sym_COMMA] = ACTIONS(1394),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_RBRACE] = ACTIONS(1398),
        [sym_comment] = ACTIONS(73),
    },
    [486] = {
        [sym__statement] = STATE(517),
        [sym__simple_statement] = STATE(518),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(466),
        [sym_if_statement] = STATE(467),
        [sym_for_statement] = STATE(467),
        [sym_while_statement] = STATE(467),
        [sym_try_statement] = STATE(467),
        [sym_with_statement] = STATE(467),
        [sym_function_definition] = STATE(467),
        [sym_class_definition] = STATE(467),
        [sym_decorated_definition] = STATE(467),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(491),
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(1402),
        [anon_sym_for] = ACTIONS(1404),
        [anon_sym_while] = ACTIONS(1406),
        [anon_sym_try] = ACTIONS(1408),
        [anon_sym_with] = ACTIONS(1410),
        [anon_sym_def] = ACTIONS(1412),
        [anon_sym_class] = ACTIONS(1414),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(1416),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(1418),
        [anon_sym_COLON] = ACTIONS(377),
        [anon_sym_in] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(1420),
        [anon_sym_RBRACK] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1423),
    },
    [488] = {
        [sym_elif_clause] = STATE(508),
        [sym_else_clause] = STATE(509),
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_elif] = ACTIONS(1426),
        [anon_sym_else] = ACTIONS(1428),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(871),
        [sym__dedent] = ACTIONS(871),
    },
    [489] = {
        [sym_else_clause] = STATE(504),
        [sym_except_clause] = STATE(505),
        [sym_finally_clause] = STATE(506),
        [ts_builtin_sym_end] = ACTIONS(761),
        [anon_sym_SEMI] = ACTIONS(761),
        [anon_sym_print] = ACTIONS(759),
        [anon_sym_return] = ACTIONS(759),
        [anon_sym_del] = ACTIONS(759),
        [sym_pass_statement] = ACTIONS(759),
        [sym_break_statement] = ACTIONS(759),
        [sym_continue_statement] = ACTIONS(759),
        [anon_sym_if] = ACTIONS(759),
        [anon_sym_else] = ACTIONS(1428),
        [anon_sym_for] = ACTIONS(759),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(759),
        [anon_sym_except] = ACTIONS(1430),
        [anon_sym_finally] = ACTIONS(1174),
        [anon_sym_with] = ACTIONS(759),
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(761),
        [anon_sym_LBRACE] = ACTIONS(761),
        [sym_number] = ACTIONS(759),
        [sym_identifier] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(761),
        [sym__dedent] = ACTIONS(761),
    },
    [490] = {
        [anon_sym_COMMA] = ACTIONS(723),
        [anon_sym_COLON] = ACTIONS(1432),
        [sym_comment] = ACTIONS(73),
    },
    [491] = {
        [sym_function_definition] = STATE(497),
        [sym_class_definition] = STATE(497),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1434),
        [anon_sym_class] = ACTIONS(1436),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [492] = {
        [anon_sym_COMMA] = ACTIONS(1438),
        [anon_sym_RPAREN] = ACTIONS(1440),
        [sym_comment] = ACTIONS(73),
    },
    [493] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(84),
        [sym_dictionary_splat_argument] = STATE(495),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [494] = {
        [anon_sym_COMMA] = ACTIONS(1442),
        [anon_sym_COLON] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(1442),
        [anon_sym_in] = ACTIONS(1442),
        [anon_sym_as] = ACTIONS(1442),
        [anon_sym_LPAREN] = ACTIONS(1442),
        [anon_sym_RPAREN] = ACTIONS(1442),
        [anon_sym_STAR] = ACTIONS(1445),
        [anon_sym_PLUS] = ACTIONS(1442),
        [anon_sym_DASH] = ACTIONS(1442),
        [anon_sym_SLASH] = ACTIONS(1442),
        [anon_sym_STAR_STAR] = ACTIONS(1442),
        [anon_sym_LBRACK] = ACTIONS(1442),
        [anon_sym_RBRACK] = ACTIONS(1442),
        [anon_sym_RBRACE] = ACTIONS(1442),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1442),
    },
    [495] = {
        [anon_sym_RPAREN] = ACTIONS(1448),
        [sym_comment] = ACTIONS(73),
    },
    [496] = {
        [anon_sym_COMMA] = ACTIONS(1450),
        [anon_sym_COLON] = ACTIONS(1450),
        [anon_sym_for] = ACTIONS(1450),
        [anon_sym_in] = ACTIONS(1450),
        [anon_sym_as] = ACTIONS(1450),
        [anon_sym_LPAREN] = ACTIONS(1450),
        [anon_sym_RPAREN] = ACTIONS(1450),
        [anon_sym_STAR] = ACTIONS(1453),
        [anon_sym_PLUS] = ACTIONS(1450),
        [anon_sym_DASH] = ACTIONS(1450),
        [anon_sym_SLASH] = ACTIONS(1450),
        [anon_sym_STAR_STAR] = ACTIONS(1450),
        [anon_sym_LBRACK] = ACTIONS(1450),
        [anon_sym_RBRACK] = ACTIONS(1450),
        [anon_sym_RBRACE] = ACTIONS(1450),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1450),
    },
    [497] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_return] = ACTIONS(187),
        [anon_sym_del] = ACTIONS(187),
        [sym_pass_statement] = ACTIONS(187),
        [sym_break_statement] = ACTIONS(187),
        [sym_continue_statement] = ACTIONS(187),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(187),
        [anon_sym_with] = ACTIONS(187),
        [anon_sym_def] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_AT] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_LBRACE] = ACTIONS(185),
        [sym_number] = ACTIONS(187),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(185),
        [sym__dedent] = ACTIONS(185),
    },
    [498] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(500),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [499] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1131),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
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
    [501] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(601),
        [anon_sym_return] = ACTIONS(601),
        [anon_sym_del] = ACTIONS(601),
        [sym_pass_statement] = ACTIONS(601),
        [sym_break_statement] = ACTIONS(601),
        [sym_continue_statement] = ACTIONS(601),
        [anon_sym_if] = ACTIONS(601),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(601),
        [anon_sym_while] = ACTIONS(601),
        [anon_sym_try] = ACTIONS(601),
        [anon_sym_except] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(601),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_LBRACE] = ACTIONS(599),
        [sym_number] = ACTIONS(601),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(599),
        [sym__dedent] = ACTIONS(599),
    },
    [502] = {
        [sym__statement] = STATE(258),
        [sym__simple_statement] = STATE(251),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(252),
        [sym_if_statement] = STATE(253),
        [sym_for_statement] = STATE(253),
        [sym_while_statement] = STATE(253),
        [sym_try_statement] = STATE(253),
        [sym_with_statement] = STATE(253),
        [sym_function_definition] = STATE(253),
        [sym_class_definition] = STATE(253),
        [sym_decorated_definition] = STATE(253),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(255),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(585),
        [anon_sym_def] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1416),
    },
    [503] = {
        [ts_builtin_sym_end] = ACTIONS(619),
        [anon_sym_SEMI] = ACTIONS(619),
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_elif] = ACTIONS(621),
        [anon_sym_else] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_except] = ACTIONS(621),
        [anon_sym_finally] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(619),
        [anon_sym_LBRACE] = ACTIONS(619),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(619),
        [sym__dedent] = ACTIONS(619),
    },
    [504] = {
        [sym_finally_clause] = STATE(507),
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_finally] = ACTIONS(1174),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(775),
        [sym__dedent] = ACTIONS(775),
    },
    [505] = {
        [ts_builtin_sym_end] = ACTIONS(781),
        [anon_sym_SEMI] = ACTIONS(781),
        [anon_sym_print] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(779),
        [anon_sym_del] = ACTIONS(779),
        [sym_pass_statement] = ACTIONS(779),
        [sym_break_statement] = ACTIONS(779),
        [sym_continue_statement] = ACTIONS(779),
        [anon_sym_if] = ACTIONS(779),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(779),
        [anon_sym_try] = ACTIONS(779),
        [anon_sym_except] = ACTIONS(779),
        [anon_sym_finally] = ACTIONS(779),
        [anon_sym_with] = ACTIONS(779),
        [anon_sym_def] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(779),
        [anon_sym_AT] = ACTIONS(781),
        [anon_sym_LBRACK] = ACTIONS(781),
        [anon_sym_LBRACE] = ACTIONS(781),
        [sym_number] = ACTIONS(779),
        [sym_identifier] = ACTIONS(783),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(781),
        [sym__dedent] = ACTIONS(781),
    },
    [506] = {
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(775),
        [sym__dedent] = ACTIONS(775),
    },
    [507] = {
        [ts_builtin_sym_end] = ACTIONS(787),
        [anon_sym_SEMI] = ACTIONS(787),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(787),
        [sym__dedent] = ACTIONS(787),
    },
    [508] = {
        [ts_builtin_sym_end] = ACTIONS(877),
        [anon_sym_SEMI] = ACTIONS(877),
        [anon_sym_print] = ACTIONS(875),
        [anon_sym_return] = ACTIONS(875),
        [anon_sym_del] = ACTIONS(875),
        [sym_pass_statement] = ACTIONS(875),
        [sym_break_statement] = ACTIONS(875),
        [sym_continue_statement] = ACTIONS(875),
        [anon_sym_if] = ACTIONS(875),
        [anon_sym_elif] = ACTIONS(875),
        [anon_sym_else] = ACTIONS(875),
        [anon_sym_for] = ACTIONS(875),
        [anon_sym_while] = ACTIONS(875),
        [anon_sym_try] = ACTIONS(875),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(875),
        [anon_sym_class] = ACTIONS(875),
        [anon_sym_AT] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [sym_number] = ACTIONS(875),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(877),
        [sym__dedent] = ACTIONS(877),
    },
    [509] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
        [sym__dedent] = ACTIONS(883),
    },
    [510] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(511),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [511] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_print] = ACTIONS(791),
        [anon_sym_return] = ACTIONS(791),
        [anon_sym_del] = ACTIONS(791),
        [sym_pass_statement] = ACTIONS(791),
        [sym_break_statement] = ACTIONS(791),
        [sym_continue_statement] = ACTIONS(791),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(791),
        [anon_sym_while] = ACTIONS(791),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_finally] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(791),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(791),
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(793),
        [sym__dedent] = ACTIONS(793),
    },
    [512] = {
        [sym__expression] = STATE(513),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(527),
        [anon_sym_LBRACE] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(511),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [513] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_COLON] = ACTIONS(379),
        [anon_sym_in] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(379),
        [anon_sym_STAR] = ACTIONS(1456),
        [anon_sym_PLUS] = ACTIONS(1458),
        [anon_sym_DASH] = ACTIONS(1458),
        [anon_sym_SLASH] = ACTIONS(1458),
        [anon_sym_STAR_STAR] = ACTIONS(1458),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(379),
    },
    [514] = {
        [sym__expression] = STATE(515),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [515] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(1460),
        [anon_sym_PLUS] = ACTIONS(1463),
        [anon_sym_DASH] = ACTIONS(1463),
        [anon_sym_SLASH] = ACTIONS(1463),
        [anon_sym_STAR_STAR] = ACTIONS(1463),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [516] = {
        [sym_expression_list] = STATE(520),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_return] = ACTIONS(197),
        [anon_sym_del] = ACTIONS(197),
        [sym_pass_statement] = ACTIONS(197),
        [sym_break_statement] = ACTIONS(197),
        [sym_continue_statement] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_with] = ACTIONS(197),
        [anon_sym_def] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_AT] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(195),
        [sym_number] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(195),
        [sym__dedent] = ACTIONS(195),
    },
    [518] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1466),
    },
    [519] = {
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
    [520] = {
        [anon_sym_in] = ACTIONS(1468),
        [sym_comment] = ACTIONS(73),
    },
    [521] = {
        [sym_expression_list] = STATE(522),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [522] = {
        [anon_sym_COLON] = ACTIONS(1292),
        [sym_comment] = ACTIONS(73),
    },
    [523] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(524),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [524] = {
        [sym_else_clause] = STATE(525),
        [ts_builtin_sym_end] = ACTIONS(843),
        [anon_sym_SEMI] = ACTIONS(843),
        [anon_sym_print] = ACTIONS(841),
        [anon_sym_return] = ACTIONS(841),
        [anon_sym_del] = ACTIONS(841),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [anon_sym_if] = ACTIONS(841),
        [anon_sym_else] = ACTIONS(1428),
        [anon_sym_for] = ACTIONS(841),
        [anon_sym_while] = ACTIONS(841),
        [anon_sym_try] = ACTIONS(841),
        [anon_sym_with] = ACTIONS(841),
        [anon_sym_def] = ACTIONS(841),
        [anon_sym_class] = ACTIONS(841),
        [anon_sym_AT] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(843),
        [anon_sym_LBRACE] = ACTIONS(843),
        [sym_number] = ACTIONS(841),
        [sym_identifier] = ACTIONS(845),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(843),
        [sym__dedent] = ACTIONS(843),
    },
    [525] = {
        [ts_builtin_sym_end] = ACTIONS(849),
        [anon_sym_SEMI] = ACTIONS(849),
        [anon_sym_print] = ACTIONS(847),
        [anon_sym_return] = ACTIONS(847),
        [anon_sym_del] = ACTIONS(847),
        [sym_pass_statement] = ACTIONS(847),
        [sym_break_statement] = ACTIONS(847),
        [sym_continue_statement] = ACTIONS(847),
        [anon_sym_if] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(847),
        [anon_sym_while] = ACTIONS(847),
        [anon_sym_try] = ACTIONS(847),
        [anon_sym_with] = ACTIONS(847),
        [anon_sym_def] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_AT] = ACTIONS(849),
        [anon_sym_LBRACK] = ACTIONS(849),
        [anon_sym_LBRACE] = ACTIONS(849),
        [sym_number] = ACTIONS(847),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(849),
        [sym__dedent] = ACTIONS(849),
    },
    [526] = {
        [anon_sym_COMMA] = ACTIONS(995),
        [anon_sym_COLON] = ACTIONS(995),
        [anon_sym_for] = ACTIONS(995),
        [anon_sym_in] = ACTIONS(995),
        [anon_sym_as] = ACTIONS(995),
        [anon_sym_LPAREN] = ACTIONS(995),
        [anon_sym_RPAREN] = ACTIONS(995),
        [anon_sym_STAR] = ACTIONS(1013),
        [anon_sym_PLUS] = ACTIONS(995),
        [anon_sym_DASH] = ACTIONS(995),
        [anon_sym_SLASH] = ACTIONS(995),
        [anon_sym_STAR_STAR] = ACTIONS(995),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_RBRACK] = ACTIONS(995),
        [anon_sym_RBRACE] = ACTIONS(995),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(995),
    },
    [527] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_keyword_argument] = STATE(88),
        [sym_dictionary_splat_argument] = STATE(529),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [528] = {
        [anon_sym_COMMA] = ACTIONS(1470),
        [anon_sym_COLON] = ACTIONS(1470),
        [anon_sym_for] = ACTIONS(1470),
        [anon_sym_in] = ACTIONS(1470),
        [anon_sym_as] = ACTIONS(1470),
        [anon_sym_LPAREN] = ACTIONS(1470),
        [anon_sym_RPAREN] = ACTIONS(1470),
        [anon_sym_STAR] = ACTIONS(1473),
        [anon_sym_PLUS] = ACTIONS(1470),
        [anon_sym_DASH] = ACTIONS(1470),
        [anon_sym_SLASH] = ACTIONS(1470),
        [anon_sym_STAR_STAR] = ACTIONS(1470),
        [anon_sym_LBRACK] = ACTIONS(1470),
        [anon_sym_RBRACK] = ACTIONS(1470),
        [anon_sym_RBRACE] = ACTIONS(1470),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1470),
    },
    [529] = {
        [anon_sym_RPAREN] = ACTIONS(1476),
        [sym_comment] = ACTIONS(73),
    },
    [530] = {
        [anon_sym_COMMA] = ACTIONS(1478),
        [anon_sym_COLON] = ACTIONS(1478),
        [anon_sym_for] = ACTIONS(1478),
        [anon_sym_in] = ACTIONS(1478),
        [anon_sym_as] = ACTIONS(1478),
        [anon_sym_LPAREN] = ACTIONS(1478),
        [anon_sym_RPAREN] = ACTIONS(1478),
        [anon_sym_STAR] = ACTIONS(1481),
        [anon_sym_PLUS] = ACTIONS(1478),
        [anon_sym_DASH] = ACTIONS(1478),
        [anon_sym_SLASH] = ACTIONS(1478),
        [anon_sym_STAR_STAR] = ACTIONS(1478),
        [anon_sym_LBRACK] = ACTIONS(1478),
        [anon_sym_RBRACK] = ACTIONS(1478),
        [anon_sym_RBRACE] = ACTIONS(1478),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1478),
    },
    [531] = {
        [anon_sym_RPAREN] = ACTIONS(1440),
        [anon_sym_STAR] = ACTIONS(1484),
        [anon_sym_STAR_STAR] = ACTIONS(1487),
        [anon_sym_LBRACK] = ACTIONS(1487),
        [anon_sym_LBRACE] = ACTIONS(1487),
        [sym_number] = ACTIONS(1484),
        [sym_identifier] = ACTIONS(1484),
        [sym_comment] = ACTIONS(73),
    },
    [532] = {
        [sym__expression] = STATE(551),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(1440),
        [anon_sym_STAR] = ACTIONS(1484),
        [anon_sym_STAR_STAR] = ACTIONS(1487),
        [anon_sym_LBRACK] = ACTIONS(957),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(1490),
        [anon_sym_LBRACE] = ACTIONS(965),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(971),
        [sym_comment] = ACTIONS(73),
    },
    [533] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(544),
        [sym__expression] = STATE(545),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [534] = {
        [sym_expression_list] = STATE(539),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [535] = {
        [anon_sym_COMMA] = ACTIONS(1470),
        [anon_sym_COLON] = ACTIONS(1470),
        [anon_sym_for] = ACTIONS(1470),
        [anon_sym_in] = ACTIONS(1470),
        [anon_sym_as] = ACTIONS(1470),
        [anon_sym_LPAREN] = ACTIONS(1470),
        [anon_sym_RPAREN] = ACTIONS(1470),
        [anon_sym_STAR] = ACTIONS(1473),
        [anon_sym_PLUS] = ACTIONS(1470),
        [anon_sym_DASH] = ACTIONS(1470),
        [anon_sym_SLASH] = ACTIONS(1470),
        [anon_sym_STAR_STAR] = ACTIONS(1470),
        [anon_sym_LBRACK] = ACTIONS(1470),
        [anon_sym_RBRACK] = ACTIONS(1470),
        [anon_sym_RBRACE] = ACTIONS(1470),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1492),
    },
    [536] = {
        [anon_sym_COMMA] = ACTIONS(1496),
        [anon_sym_COLON] = ACTIONS(1496),
        [anon_sym_for] = ACTIONS(1496),
        [anon_sym_in] = ACTIONS(1496),
        [anon_sym_as] = ACTIONS(1496),
        [anon_sym_LPAREN] = ACTIONS(1496),
        [anon_sym_RPAREN] = ACTIONS(1496),
        [anon_sym_STAR] = ACTIONS(1500),
        [anon_sym_PLUS] = ACTIONS(1496),
        [anon_sym_DASH] = ACTIONS(1496),
        [anon_sym_SLASH] = ACTIONS(1496),
        [anon_sym_STAR_STAR] = ACTIONS(1496),
        [anon_sym_LBRACK] = ACTIONS(1496),
        [anon_sym_RBRACK] = ACTIONS(1496),
        [anon_sym_RBRACE] = ACTIONS(1496),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1496),
    },
    [537] = {
        [anon_sym_COMMA] = ACTIONS(1504),
        [anon_sym_COLON] = ACTIONS(1504),
        [anon_sym_for] = ACTIONS(1504),
        [anon_sym_in] = ACTIONS(1504),
        [anon_sym_as] = ACTIONS(1504),
        [anon_sym_LPAREN] = ACTIONS(1504),
        [anon_sym_RPAREN] = ACTIONS(1504),
        [anon_sym_STAR] = ACTIONS(1508),
        [anon_sym_PLUS] = ACTIONS(1504),
        [anon_sym_DASH] = ACTIONS(1504),
        [anon_sym_SLASH] = ACTIONS(1504),
        [anon_sym_STAR_STAR] = ACTIONS(1504),
        [anon_sym_LBRACK] = ACTIONS(1504),
        [anon_sym_RBRACK] = ACTIONS(1504),
        [anon_sym_RBRACE] = ACTIONS(1504),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1504),
    },
    [538] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(1351),
        [anon_sym_PLUS] = ACTIONS(1354),
        [anon_sym_DASH] = ACTIONS(1354),
        [anon_sym_SLASH] = ACTIONS(1354),
        [anon_sym_STAR_STAR] = ACTIONS(1354),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [539] = {
        [anon_sym_in] = ACTIONS(1512),
        [sym_comment] = ACTIONS(73),
    },
    [540] = {
        [sym__expression] = STATE(541),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [541] = {
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(1514),
        [anon_sym_PLUS] = ACTIONS(1516),
        [anon_sym_DASH] = ACTIONS(1516),
        [anon_sym_SLASH] = ACTIONS(1516),
        [anon_sym_STAR_STAR] = ACTIONS(1516),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(515),
        [sym_comment] = ACTIONS(73),
    },
    [542] = {
        [sym__expression] = STATE(543),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [543] = {
        [anon_sym_LPAREN] = ACTIONS(1518),
        [anon_sym_STAR] = ACTIONS(1521),
        [anon_sym_PLUS] = ACTIONS(1524),
        [anon_sym_DASH] = ACTIONS(1524),
        [anon_sym_SLASH] = ACTIONS(1524),
        [anon_sym_STAR_STAR] = ACTIONS(1524),
        [anon_sym_LBRACK] = ACTIONS(1527),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [544] = {
        [sym_elif_clause] = STATE(548),
        [sym_else_clause] = STATE(549),
        [aux_sym_if_statement_repeat1] = STATE(488),
        [ts_builtin_sym_end] = ACTIONS(1530),
        [anon_sym_SEMI] = ACTIONS(1530),
        [anon_sym_print] = ACTIONS(1536),
        [anon_sym_return] = ACTIONS(1536),
        [anon_sym_del] = ACTIONS(1536),
        [sym_pass_statement] = ACTIONS(1536),
        [sym_break_statement] = ACTIONS(1536),
        [sym_continue_statement] = ACTIONS(1536),
        [anon_sym_if] = ACTIONS(1536),
        [anon_sym_elif] = ACTIONS(1261),
        [anon_sym_else] = ACTIONS(1264),
        [anon_sym_for] = ACTIONS(1536),
        [anon_sym_while] = ACTIONS(1536),
        [anon_sym_try] = ACTIONS(1536),
        [anon_sym_except] = ACTIONS(1542),
        [anon_sym_finally] = ACTIONS(1542),
        [anon_sym_with] = ACTIONS(1536),
        [anon_sym_def] = ACTIONS(1536),
        [anon_sym_class] = ACTIONS(1536),
        [anon_sym_AT] = ACTIONS(1530),
        [anon_sym_LBRACK] = ACTIONS(1530),
        [anon_sym_LBRACE] = ACTIONS(1530),
        [sym_number] = ACTIONS(1536),
        [sym_identifier] = ACTIONS(1545),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1530),
        [sym__dedent] = ACTIONS(1530),
    },
    [545] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(1551),
        [anon_sym_PLUS] = ACTIONS(1553),
        [anon_sym_DASH] = ACTIONS(1553),
        [anon_sym_SLASH] = ACTIONS(1553),
        [anon_sym_STAR_STAR] = ACTIONS(1553),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(175),
    },
    [546] = {
        [sym__expression] = STATE(547),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [547] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_STAR] = ACTIONS(1555),
        [anon_sym_PLUS] = ACTIONS(1558),
        [anon_sym_DASH] = ACTIONS(1558),
        [anon_sym_SLASH] = ACTIONS(1558),
        [anon_sym_STAR_STAR] = ACTIONS(1558),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [548] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_SEMI] = ACTIONS(865),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [sym_pass_statement] = ACTIONS(863),
        [sym_break_statement] = ACTIONS(863),
        [sym_continue_statement] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_elif] = ACTIONS(863),
        [anon_sym_else] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(865),
        [anon_sym_LBRACK] = ACTIONS(865),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(867),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(865),
        [sym__dedent] = ACTIONS(865),
    },
    [549] = {
        [ts_builtin_sym_end] = ACTIONS(1561),
        [anon_sym_SEMI] = ACTIONS(1561),
        [anon_sym_print] = ACTIONS(1564),
        [anon_sym_return] = ACTIONS(1564),
        [anon_sym_del] = ACTIONS(1564),
        [sym_pass_statement] = ACTIONS(1564),
        [sym_break_statement] = ACTIONS(1564),
        [sym_continue_statement] = ACTIONS(1564),
        [anon_sym_if] = ACTIONS(1564),
        [anon_sym_for] = ACTIONS(1564),
        [anon_sym_while] = ACTIONS(1564),
        [anon_sym_try] = ACTIONS(1564),
        [anon_sym_with] = ACTIONS(1564),
        [anon_sym_def] = ACTIONS(1564),
        [anon_sym_class] = ACTIONS(1564),
        [anon_sym_AT] = ACTIONS(1561),
        [anon_sym_LBRACK] = ACTIONS(1561),
        [anon_sym_LBRACE] = ACTIONS(1561),
        [sym_number] = ACTIONS(1564),
        [sym_identifier] = ACTIONS(1567),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1561),
        [sym__dedent] = ACTIONS(1561),
    },
    [550] = {
        [anon_sym_COMMA] = ACTIONS(1570),
        [anon_sym_COLON] = ACTIONS(1570),
        [anon_sym_for] = ACTIONS(1570),
        [anon_sym_in] = ACTIONS(1570),
        [anon_sym_as] = ACTIONS(1570),
        [anon_sym_LPAREN] = ACTIONS(1570),
        [anon_sym_RPAREN] = ACTIONS(1570),
        [anon_sym_STAR] = ACTIONS(1573),
        [anon_sym_PLUS] = ACTIONS(1570),
        [anon_sym_DASH] = ACTIONS(1570),
        [anon_sym_SLASH] = ACTIONS(1570),
        [anon_sym_STAR_STAR] = ACTIONS(1570),
        [anon_sym_LBRACK] = ACTIONS(1570),
        [anon_sym_RBRACK] = ACTIONS(1570),
        [anon_sym_RBRACE] = ACTIONS(1570),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1570),
    },
    [551] = {
        [anon_sym_COMMA] = ACTIONS(1576),
        [anon_sym_COLON] = ACTIONS(1579),
        [anon_sym_in] = ACTIONS(381),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(381),
        [anon_sym_STAR] = ACTIONS(1456),
        [anon_sym_PLUS] = ACTIONS(1458),
        [anon_sym_DASH] = ACTIONS(1458),
        [anon_sym_SLASH] = ACTIONS(1458),
        [anon_sym_STAR_STAR] = ACTIONS(1458),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(1576),
        [anon_sym_RBRACE] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(381),
    },
    [552] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(553),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [553] = {
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(811),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(811),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_LBRACE] = ACTIONS(811),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(811),
        [sym__dedent] = ACTIONS(811),
    },
    [554] = {
        [anon_sym_COLON] = ACTIONS(1582),
        [sym_comment] = ACTIONS(73),
    },
    [555] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(556),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [556] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [sym_pass_statement] = ACTIONS(595),
        [sym_break_statement] = ACTIONS(595),
        [sym_continue_statement] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [anon_sym_LBRACE] = ACTIONS(593),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(597),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(593),
        [sym__dedent] = ACTIONS(593),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(1584),
        [anon_sym_SEMI] = ACTIONS(1584),
        [anon_sym_print] = ACTIONS(1588),
        [anon_sym_return] = ACTIONS(1588),
        [anon_sym_del] = ACTIONS(1588),
        [sym_pass_statement] = ACTIONS(1588),
        [sym_break_statement] = ACTIONS(1588),
        [sym_continue_statement] = ACTIONS(1588),
        [anon_sym_if] = ACTIONS(1588),
        [anon_sym_for] = ACTIONS(1588),
        [anon_sym_while] = ACTIONS(1588),
        [anon_sym_try] = ACTIONS(1588),
        [anon_sym_with] = ACTIONS(1588),
        [anon_sym_def] = ACTIONS(1588),
        [anon_sym_class] = ACTIONS(1588),
        [anon_sym_AT] = ACTIONS(1584),
        [anon_sym_LBRACK] = ACTIONS(1584),
        [anon_sym_LBRACE] = ACTIONS(1584),
        [sym_number] = ACTIONS(1588),
        [sym_identifier] = ACTIONS(1592),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1584),
        [sym__dedent] = ACTIONS(1584),
    },
    [558] = {
        [ts_builtin_sym_end] = ACTIONS(755),
        [anon_sym_SEMI] = ACTIONS(755),
        [anon_sym_print] = ACTIONS(753),
        [anon_sym_return] = ACTIONS(753),
        [anon_sym_del] = ACTIONS(753),
        [sym_pass_statement] = ACTIONS(753),
        [sym_break_statement] = ACTIONS(753),
        [sym_continue_statement] = ACTIONS(753),
        [anon_sym_if] = ACTIONS(753),
        [anon_sym_else] = ACTIONS(753),
        [anon_sym_for] = ACTIONS(753),
        [anon_sym_while] = ACTIONS(753),
        [anon_sym_try] = ACTIONS(753),
        [anon_sym_except] = ACTIONS(753),
        [anon_sym_finally] = ACTIONS(753),
        [anon_sym_with] = ACTIONS(753),
        [anon_sym_def] = ACTIONS(753),
        [anon_sym_class] = ACTIONS(753),
        [anon_sym_AT] = ACTIONS(755),
        [anon_sym_LBRACK] = ACTIONS(755),
        [anon_sym_LBRACE] = ACTIONS(755),
        [sym_number] = ACTIONS(753),
        [sym_identifier] = ACTIONS(757),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(755),
        [sym__dedent] = ACTIONS(755),
    },
    [559] = {
        [ts_builtin_sym_end] = ACTIONS(761),
        [anon_sym_SEMI] = ACTIONS(761),
        [anon_sym_print] = ACTIONS(759),
        [anon_sym_return] = ACTIONS(759),
        [anon_sym_del] = ACTIONS(759),
        [sym_pass_statement] = ACTIONS(759),
        [sym_break_statement] = ACTIONS(759),
        [sym_continue_statement] = ACTIONS(759),
        [anon_sym_if] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(759),
        [anon_sym_while] = ACTIONS(759),
        [anon_sym_try] = ACTIONS(759),
        [anon_sym_with] = ACTIONS(759),
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(761),
        [anon_sym_LBRACE] = ACTIONS(761),
        [sym_number] = ACTIONS(759),
        [sym_identifier] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(761),
        [sym__dedent] = ACTIONS(761),
    },
    [560] = {
        [anon_sym_COLON] = ACTIONS(1596),
        [sym_comment] = ACTIONS(73),
    },
    [561] = {
        [sym_dictionary_splat_parameter] = STATE(563),
        [anon_sym_STAR] = ACTIONS(685),
        [sym_comment] = ACTIONS(73),
    },
    [562] = {
        [anon_sym_COLON] = ACTIONS(1601),
        [sym_comment] = ACTIONS(73),
    },
    [563] = {
        [anon_sym_RPAREN] = ACTIONS(1604),
        [sym_comment] = ACTIONS(73),
    },
    [564] = {
        [anon_sym_COLON] = ACTIONS(1606),
        [sym_comment] = ACTIONS(73),
    },
    [565] = {
        [anon_sym_RPAREN] = ACTIONS(1609),
        [anon_sym_STAR] = ACTIONS(1611),
        [sym_identifier] = ACTIONS(1614),
        [sym_comment] = ACTIONS(73),
    },
    [566] = {
        [anon_sym_COLON] = ACTIONS(1617),
        [sym_comment] = ACTIONS(73),
    },
    [567] = {
        [sym__simple_statement] = STATE(499),
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
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(657),
        [anon_sym_SEMI] = ACTIONS(657),
        [anon_sym_print] = ACTIONS(655),
        [anon_sym_return] = ACTIONS(655),
        [anon_sym_del] = ACTIONS(655),
        [sym_pass_statement] = ACTIONS(655),
        [sym_break_statement] = ACTIONS(655),
        [sym_continue_statement] = ACTIONS(655),
        [anon_sym_if] = ACTIONS(655),
        [anon_sym_for] = ACTIONS(655),
        [anon_sym_while] = ACTIONS(655),
        [anon_sym_try] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(657),
        [anon_sym_LBRACE] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(657),
        [sym__dedent] = ACTIONS(657),
    },
    [569] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(570),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [570] = {
        [ts_builtin_sym_end] = ACTIONS(737),
        [anon_sym_SEMI] = ACTIONS(737),
        [anon_sym_print] = ACTIONS(735),
        [anon_sym_return] = ACTIONS(735),
        [anon_sym_del] = ACTIONS(735),
        [sym_pass_statement] = ACTIONS(735),
        [sym_break_statement] = ACTIONS(735),
        [sym_continue_statement] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(735),
        [anon_sym_for] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(735),
        [anon_sym_try] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(735),
        [anon_sym_def] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_AT] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_number] = ACTIONS(735),
        [sym_identifier] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(737),
        [sym__dedent] = ACTIONS(737),
    },
    [571] = {
        [ts_builtin_sym_end] = ACTIONS(1112),
        [anon_sym_SEMI] = ACTIONS(1112),
        [anon_sym_print] = ACTIONS(1115),
        [anon_sym_return] = ACTIONS(1115),
        [anon_sym_del] = ACTIONS(1115),
        [sym_pass_statement] = ACTIONS(1115),
        [sym_break_statement] = ACTIONS(1115),
        [sym_continue_statement] = ACTIONS(1115),
        [anon_sym_if] = ACTIONS(1115),
        [anon_sym_elif] = ACTIONS(601),
        [anon_sym_else] = ACTIONS(601),
        [anon_sym_for] = ACTIONS(1115),
        [anon_sym_while] = ACTIONS(1115),
        [anon_sym_try] = ACTIONS(1115),
        [anon_sym_except] = ACTIONS(601),
        [anon_sym_finally] = ACTIONS(601),
        [anon_sym_with] = ACTIONS(1115),
        [anon_sym_def] = ACTIONS(1115),
        [anon_sym_class] = ACTIONS(1115),
        [anon_sym_AT] = ACTIONS(1112),
        [anon_sym_LBRACK] = ACTIONS(1112),
        [anon_sym_LBRACE] = ACTIONS(1112),
        [sym_number] = ACTIONS(1115),
        [sym_identifier] = ACTIONS(1128),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1112),
        [sym__dedent] = ACTIONS(1112),
    },
    [572] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(576),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [573] = {
        [sym_default_parameter] = STATE(281),
        [sym_list_splat_parameter] = STATE(282),
        [sym_dictionary_splat_parameter] = STATE(283),
        [sym_expression_list] = STATE(575),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [aux_sym_parameters_repeat1] = STATE(284),
        [anon_sym_RPAREN] = ACTIONS(647),
        [anon_sym_STAR] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1620),
        [sym_comment] = ACTIONS(73),
    },
    [574] = {
        [anon_sym_COMMA] = ACTIONS(1622),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1625),
        [anon_sym_EQ] = ACTIONS(671),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [575] = {
        [anon_sym_RPAREN] = ACTIONS(1296),
        [sym_comment] = ACTIONS(73),
    },
    [576] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
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
    [577] = {
        [aux_sym_print_statement_repeat1] = STATE(210),
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(1628),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(1630),
        [sym_comment] = ACTIONS(73),
    },
    [578] = {
        [sym__expression] = STATE(580),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(1490),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [579] = {
        [anon_sym_COMMA] = ACTIONS(1632),
        [anon_sym_COLON] = ACTIONS(1632),
        [anon_sym_for] = ACTIONS(1632),
        [anon_sym_in] = ACTIONS(1632),
        [anon_sym_as] = ACTIONS(1632),
        [anon_sym_LPAREN] = ACTIONS(1632),
        [anon_sym_RPAREN] = ACTIONS(1632),
        [anon_sym_STAR] = ACTIONS(1635),
        [anon_sym_PLUS] = ACTIONS(1632),
        [anon_sym_DASH] = ACTIONS(1632),
        [anon_sym_SLASH] = ACTIONS(1632),
        [anon_sym_STAR_STAR] = ACTIONS(1632),
        [anon_sym_LBRACK] = ACTIONS(1632),
        [anon_sym_RBRACK] = ACTIONS(1632),
        [anon_sym_RBRACE] = ACTIONS(1632),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1632),
    },
    [580] = {
        [anon_sym_COMMA] = ACTIONS(1576),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(1576),
        [sym_comment] = ACTIONS(73),
    },
    [581] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_RPAREN] = ACTIONS(1638),
        [anon_sym_STAR] = ACTIONS(1351),
        [anon_sym_PLUS] = ACTIONS(1354),
        [anon_sym_DASH] = ACTIONS(1354),
        [anon_sym_SLASH] = ACTIONS(1354),
        [anon_sym_STAR_STAR] = ACTIONS(1354),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [582] = {
        [anon_sym_LPAREN] = ACTIONS(1641),
        [anon_sym_DOT] = ACTIONS(1641),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1641),
    },
    [583] = {
        [anon_sym_COLON] = ACTIONS(1644),
        [anon_sym_LPAREN] = ACTIONS(1646),
        [sym_comment] = ACTIONS(73),
    },
    [584] = {
        [sym_expression_list] = STATE(575),
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [585] = {
        [anon_sym_COMMA] = ACTIONS(1648),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1651),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [586] = {
        [anon_sym_COMMA] = ACTIONS(1655),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_for] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_RPAREN] = ACTIONS(1655),
        [anon_sym_STAR] = ACTIONS(1351),
        [anon_sym_PLUS] = ACTIONS(1354),
        [anon_sym_DASH] = ACTIONS(1354),
        [anon_sym_SLASH] = ACTIONS(1354),
        [anon_sym_STAR_STAR] = ACTIONS(1354),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [587] = {
        [anon_sym_COMMA] = ACTIONS(1658),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(1658),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [588] = {
        [sym__expression] = STATE(150),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_STAR] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1661),
        [sym_comment] = ACTIONS(73),
    },
    [589] = {
        [anon_sym_COMMA] = ACTIONS(1622),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1625),
        [anon_sym_EQ] = ACTIONS(1097),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [590] = {
        [aux_sym_print_statement_repeat1] = STATE(593),
        [anon_sym_COMMA] = ACTIONS(1663),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(1665),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [591] = {
        [sym__expression] = STATE(120),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_RPAREN] = ACTIONS(465),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(1668),
        [anon_sym_LBRACE] = ACTIONS(1671),
        [sym_number] = ACTIONS(1674),
        [sym_identifier] = ACTIONS(1674),
        [sym_comment] = ACTIONS(73),
    },
    [592] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_as] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(317),
        [anon_sym_STAR_STAR] = ACTIONS(317),
        [anon_sym_LBRACK] = ACTIONS(317),
        [anon_sym_RBRACK] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1677),
    },
    [593] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(1420),
        [sym_comment] = ACTIONS(73),
    },
    [594] = {
        [anon_sym_COMMA] = ACTIONS(1648),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1648),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [595] = {
        [sym_parameters] = STATE(474),
        [anon_sym_LPAREN] = ACTIONS(645),
        [sym_comment] = ACTIONS(73),
    },
    [596] = {
        [aux_sym_with_statement_repeat1] = STATE(490),
        [anon_sym_COMMA] = ACTIONS(713),
        [anon_sym_COLON] = ACTIONS(1680),
        [sym_comment] = ACTIONS(73),
    },
    [597] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(598),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [598] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_del] = ACTIONS(797),
        [sym_pass_statement] = ACTIONS(797),
        [sym_break_statement] = ACTIONS(797),
        [sym_continue_statement] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(799),
        [sym__dedent] = ACTIONS(799),
    },
    [599] = {
        [anon_sym_COMMA] = ACTIONS(721),
        [anon_sym_COLON] = ACTIONS(1682),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [600] = {
        [anon_sym_COMMA] = ACTIONS(1685),
        [anon_sym_COLON] = ACTIONS(1687),
        [anon_sym_as] = ACTIONS(1685),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [601] = {
        [sym__expression] = STATE(603),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [602] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(604),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [603] = {
        [anon_sym_COLON] = ACTIONS(1689),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [604] = {
        [ts_builtin_sym_end] = ACTIONS(817),
        [anon_sym_SEMI] = ACTIONS(817),
        [anon_sym_print] = ACTIONS(815),
        [anon_sym_return] = ACTIONS(815),
        [anon_sym_del] = ACTIONS(815),
        [sym_pass_statement] = ACTIONS(815),
        [sym_break_statement] = ACTIONS(815),
        [sym_continue_statement] = ACTIONS(815),
        [anon_sym_if] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(815),
        [anon_sym_while] = ACTIONS(815),
        [anon_sym_try] = ACTIONS(815),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(817),
        [sym__dedent] = ACTIONS(817),
    },
    [605] = {
        [sym__simple_statement] = STATE(320),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(606),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(743),
    },
    [606] = {
        [sym_except_clause] = STATE(558),
        [sym_finally_clause] = STATE(559),
        [aux_sym_try_statement_repeat1] = STATE(489),
        [anon_sym_except] = ACTIONS(1691),
        [anon_sym_finally] = ACTIONS(1693),
        [sym_comment] = ACTIONS(73),
    },
    [607] = {
        [anon_sym_COLON] = ACTIONS(1695),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [608] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(609),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [609] = {
        [sym_else_clause] = STATE(610),
        [ts_builtin_sym_end] = ACTIONS(827),
        [anon_sym_SEMI] = ACTIONS(827),
        [anon_sym_print] = ACTIONS(825),
        [anon_sym_return] = ACTIONS(825),
        [anon_sym_del] = ACTIONS(825),
        [sym_pass_statement] = ACTIONS(825),
        [sym_break_statement] = ACTIONS(825),
        [sym_continue_statement] = ACTIONS(825),
        [anon_sym_if] = ACTIONS(825),
        [anon_sym_else] = ACTIONS(1428),
        [anon_sym_for] = ACTIONS(825),
        [anon_sym_while] = ACTIONS(825),
        [anon_sym_try] = ACTIONS(825),
        [anon_sym_with] = ACTIONS(825),
        [anon_sym_def] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(827),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_LBRACE] = ACTIONS(827),
        [sym_number] = ACTIONS(825),
        [sym_identifier] = ACTIONS(829),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(827),
        [sym__dedent] = ACTIONS(827),
    },
    [610] = {
        [ts_builtin_sym_end] = ACTIONS(833),
        [anon_sym_SEMI] = ACTIONS(833),
        [anon_sym_print] = ACTIONS(831),
        [anon_sym_return] = ACTIONS(831),
        [anon_sym_del] = ACTIONS(831),
        [sym_pass_statement] = ACTIONS(831),
        [sym_break_statement] = ACTIONS(831),
        [sym_continue_statement] = ACTIONS(831),
        [anon_sym_if] = ACTIONS(831),
        [anon_sym_for] = ACTIONS(831),
        [anon_sym_while] = ACTIONS(831),
        [anon_sym_try] = ACTIONS(831),
        [anon_sym_with] = ACTIONS(831),
        [anon_sym_def] = ACTIONS(831),
        [anon_sym_class] = ACTIONS(831),
        [anon_sym_AT] = ACTIONS(833),
        [anon_sym_LBRACK] = ACTIONS(833),
        [anon_sym_LBRACE] = ACTIONS(833),
        [sym_number] = ACTIONS(831),
        [sym_identifier] = ACTIONS(835),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(833),
        [sym__dedent] = ACTIONS(833),
    },
    [611] = {
        [aux_sym_print_statement_repeat1] = STATE(117),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(1697),
        [anon_sym_PLUS] = ACTIONS(1699),
        [anon_sym_DASH] = ACTIONS(1699),
        [anon_sym_SLASH] = ACTIONS(1699),
        [anon_sym_STAR_STAR] = ACTIONS(1699),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(1701),
        [sym_comment] = ACTIONS(73),
    },
    [612] = {
        [sym__expression] = STATE(614),
        [sym_binary_operator] = STATE(38),
        [sym_subscript] = STATE(38),
        [sym_call] = STATE(38),
        [sym_list] = STATE(38),
        [sym_list_comprehension] = STATE(38),
        [sym_dictionary] = STATE(38),
        [sym_dictionary_comprehension] = STATE(38),
        [sym_set] = STATE(38),
        [sym_set_comprehension] = STATE(38),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [613] = {
        [anon_sym_COMMA] = ACTIONS(1703),
        [anon_sym_COLON] = ACTIONS(1703),
        [anon_sym_for] = ACTIONS(1703),
        [anon_sym_in] = ACTIONS(1703),
        [anon_sym_as] = ACTIONS(1703),
        [anon_sym_LPAREN] = ACTIONS(1703),
        [anon_sym_RPAREN] = ACTIONS(1703),
        [anon_sym_STAR] = ACTIONS(1706),
        [anon_sym_PLUS] = ACTIONS(1703),
        [anon_sym_DASH] = ACTIONS(1703),
        [anon_sym_SLASH] = ACTIONS(1703),
        [anon_sym_STAR_STAR] = ACTIONS(1703),
        [anon_sym_LBRACK] = ACTIONS(1703),
        [anon_sym_RBRACK] = ACTIONS(1703),
        [anon_sym_RBRACE] = ACTIONS(1703),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1703),
    },
    [614] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1518),
        [anon_sym_STAR] = ACTIONS(1709),
        [anon_sym_PLUS] = ACTIONS(1712),
        [anon_sym_DASH] = ACTIONS(1712),
        [anon_sym_SLASH] = ACTIONS(1712),
        [anon_sym_STAR_STAR] = ACTIONS(1712),
        [anon_sym_LBRACK] = ACTIONS(1527),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [615] = {
        [anon_sym_in] = ACTIONS(1294),
        [sym_comment] = ACTIONS(73),
    },
    [616] = {
        [anon_sym_COLON] = ACTIONS(1715),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [617] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(618),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [618] = {
        [ts_builtin_sym_end] = ACTIONS(891),
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_print] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(889),
        [anon_sym_del] = ACTIONS(889),
        [sym_pass_statement] = ACTIONS(889),
        [sym_break_statement] = ACTIONS(889),
        [sym_continue_statement] = ACTIONS(889),
        [anon_sym_if] = ACTIONS(889),
        [anon_sym_elif] = ACTIONS(889),
        [anon_sym_else] = ACTIONS(889),
        [anon_sym_for] = ACTIONS(889),
        [anon_sym_while] = ACTIONS(889),
        [anon_sym_try] = ACTIONS(889),
        [anon_sym_with] = ACTIONS(889),
        [anon_sym_def] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(889),
        [anon_sym_AT] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(891),
        [anon_sym_LBRACE] = ACTIONS(891),
        [sym_number] = ACTIONS(889),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(891),
        [sym__dedent] = ACTIONS(891),
    },
    [619] = {
        [anon_sym_COLON] = ACTIONS(1717),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(73),
    },
    [620] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(621),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [621] = {
        [sym_elif_clause] = STATE(548),
        [sym_else_clause] = STATE(622),
        [aux_sym_if_statement_repeat1] = STATE(488),
        [ts_builtin_sym_end] = ACTIONS(859),
        [anon_sym_SEMI] = ACTIONS(859),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_elif] = ACTIONS(1426),
        [anon_sym_else] = ACTIONS(1428),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(859),
        [anon_sym_LBRACE] = ACTIONS(859),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(861),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(859),
        [sym__dedent] = ACTIONS(859),
    },
    [622] = {
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(871),
        [sym__dedent] = ACTIONS(871),
    },
    [623] = {
        [anon_sym_COMMA] = ACTIONS(1442),
        [anon_sym_COLON] = ACTIONS(1719),
        [anon_sym_for] = ACTIONS(1442),
        [anon_sym_in] = ACTIONS(1442),
        [anon_sym_as] = ACTIONS(1442),
        [anon_sym_LPAREN] = ACTIONS(1442),
        [anon_sym_RPAREN] = ACTIONS(1442),
        [anon_sym_STAR] = ACTIONS(1445),
        [anon_sym_PLUS] = ACTIONS(1442),
        [anon_sym_DASH] = ACTIONS(1442),
        [anon_sym_SLASH] = ACTIONS(1442),
        [anon_sym_STAR_STAR] = ACTIONS(1442),
        [anon_sym_LBRACK] = ACTIONS(1442),
        [anon_sym_RBRACK] = ACTIONS(1442),
        [anon_sym_RBRACE] = ACTIONS(1442),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1442),
    },
    [624] = {
        [anon_sym_COMMA] = ACTIONS(1724),
        [anon_sym_RBRACK] = ACTIONS(1724),
        [sym_comment] = ACTIONS(73),
    },
    [625] = {
        [anon_sym_COMMA] = ACTIONS(1727),
        [anon_sym_COLON] = ACTIONS(1727),
        [anon_sym_for] = ACTIONS(1727),
        [anon_sym_in] = ACTIONS(1727),
        [anon_sym_as] = ACTIONS(1727),
        [anon_sym_LPAREN] = ACTIONS(1727),
        [anon_sym_RPAREN] = ACTIONS(1727),
        [anon_sym_STAR] = ACTIONS(1732),
        [anon_sym_PLUS] = ACTIONS(1727),
        [anon_sym_DASH] = ACTIONS(1727),
        [anon_sym_SLASH] = ACTIONS(1727),
        [anon_sym_STAR_STAR] = ACTIONS(1727),
        [anon_sym_LBRACK] = ACTIONS(1727),
        [anon_sym_RBRACK] = ACTIONS(1727),
        [anon_sym_RBRACE] = ACTIONS(1727),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1727),
    },
    [626] = {
        [anon_sym_COMMA] = ACTIONS(1737),
        [anon_sym_COLON] = ACTIONS(1737),
        [anon_sym_for] = ACTIONS(1737),
        [anon_sym_in] = ACTIONS(1737),
        [anon_sym_as] = ACTIONS(1737),
        [anon_sym_LPAREN] = ACTIONS(1737),
        [anon_sym_RPAREN] = ACTIONS(1737),
        [anon_sym_STAR] = ACTIONS(1742),
        [anon_sym_PLUS] = ACTIONS(1737),
        [anon_sym_DASH] = ACTIONS(1737),
        [anon_sym_SLASH] = ACTIONS(1737),
        [anon_sym_STAR_STAR] = ACTIONS(1737),
        [anon_sym_LBRACK] = ACTIONS(1737),
        [anon_sym_RBRACK] = ACTIONS(1737),
        [anon_sym_RBRACE] = ACTIONS(1737),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1737),
    },
    [627] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(271),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [628] = {
        [anon_sym_COMMA] = ACTIONS(1747),
        [anon_sym_COLON] = ACTIONS(1747),
        [sym_comment] = ACTIONS(73),
    },
    [629] = {
        [anon_sym_COMMA] = ACTIONS(1750),
        [anon_sym_COLON] = ACTIONS(1758),
        [anon_sym_in] = ACTIONS(1763),
        [anon_sym_as] = ACTIONS(719),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(1766),
        [anon_sym_STAR] = ACTIONS(1771),
        [anon_sym_PLUS] = ACTIONS(1773),
        [anon_sym_DASH] = ACTIONS(1773),
        [anon_sym_SLASH] = ACTIONS(1773),
        [anon_sym_STAR_STAR] = ACTIONS(1773),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(1775),
        [anon_sym_RBRACE] = ACTIONS(1763),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1763),
    },
    [630] = {
        [anon_sym_COMMA] = ACTIONS(1780),
        [anon_sym_RPAREN] = ACTIONS(1780),
        [sym_comment] = ACTIONS(73),
    },
    [631] = {
        [anon_sym_RPAREN] = ACTIONS(1783),
        [sym_comment] = ACTIONS(73),
    },
    [632] = {
        [anon_sym_COMMA] = ACTIONS(1785),
        [anon_sym_RBRACE] = ACTIONS(1785),
        [sym_comment] = ACTIONS(73),
    },
    [633] = {
        [anon_sym_COMMA] = ACTIONS(1788),
        [anon_sym_COLON] = ACTIONS(1788),
        [anon_sym_for] = ACTIONS(1788),
        [anon_sym_in] = ACTIONS(1788),
        [anon_sym_as] = ACTIONS(1788),
        [anon_sym_LPAREN] = ACTIONS(1788),
        [anon_sym_RPAREN] = ACTIONS(1788),
        [anon_sym_STAR] = ACTIONS(1792),
        [anon_sym_PLUS] = ACTIONS(1788),
        [anon_sym_DASH] = ACTIONS(1788),
        [anon_sym_SLASH] = ACTIONS(1788),
        [anon_sym_STAR_STAR] = ACTIONS(1788),
        [anon_sym_LBRACK] = ACTIONS(1788),
        [anon_sym_RBRACK] = ACTIONS(1788),
        [anon_sym_RBRACE] = ACTIONS(1788),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1788),
    },
    [634] = {
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(553),
        [sym__expression] = STATE(637),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(981),
    },
    [635] = {
        [sym__expression] = STATE(636),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [636] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_in] = ACTIONS(267),
        [anon_sym_as] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(1796),
        [anon_sym_PLUS] = ACTIONS(1799),
        [anon_sym_DASH] = ACTIONS(1799),
        [anon_sym_SLASH] = ACTIONS(1799),
        [anon_sym_STAR_STAR] = ACTIONS(1799),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
    [637] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(1802),
        [anon_sym_PLUS] = ACTIONS(1804),
        [anon_sym_DASH] = ACTIONS(1804),
        [anon_sym_SLASH] = ACTIONS(1804),
        [anon_sym_STAR_STAR] = ACTIONS(1804),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(175),
    },
    [638] = {
        [sym__expression] = STATE(639),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [639] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(1336),
        [anon_sym_STAR] = ACTIONS(1806),
        [anon_sym_PLUS] = ACTIONS(1809),
        [anon_sym_DASH] = ACTIONS(1809),
        [anon_sym_SLASH] = ACTIONS(1809),
        [anon_sym_STAR_STAR] = ACTIONS(1809),
        [anon_sym_LBRACK] = ACTIONS(1357),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(267),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(434),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(435),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(436),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(437),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(438),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(439),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(440),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(441),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(442),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(443),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(444),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(445),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(446),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(447),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(448),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(449),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(450),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(451),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(452),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(453),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(454),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(455),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(456),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(457),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(458),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(459),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(460),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(461),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(462),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(463),
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
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
    [947] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(291),
    [953] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(67),
    [957] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(625),
    [965] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
    [971] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [975] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(627),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
    [989] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
    [991] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(588),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
    [995] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1001] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(555),
    [1013] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1019] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
    [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
    [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(582),
    [1033] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(40),
    [1037] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(46),
    [1041] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1050] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1059] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1069] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1079] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(565),
    [1083] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(572),
    [1086] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(573),
    [1092] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(562),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1099] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(228),
    [1103] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1108] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1115] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1118] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1123] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1128] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [1133] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1136] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1139] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1142] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1145] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1148] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
    [1153] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1156] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1159] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1162] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1168] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
    [1176] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1185] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1188] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1191] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1195] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1199] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1203] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(309),
    [1207] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(569),
    [1211] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1214] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1217] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
    [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
    [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
    [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1233] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1247] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1261] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(437),
    [1264] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(438),
    [1269] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(443),
    [1273] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(445),
    [1278] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
    [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1298] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1301] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(532),
    [1316] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(533),
    [1324] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(534),
    [1328] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1333] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(444),
    [1336] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1339] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(535),
    [1351] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(454),
    [1354] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(454),
    [1357] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(34),
    [1360] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(536),
    [1367] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(537),
    [1373] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1380] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(531),
    [1384] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(528),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
    [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1394] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(183),
    [1398] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(185),
    [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
    [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
    [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
    [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
    [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
    [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
    [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1420] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(227),
    [1423] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
    [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
    [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
    [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [1436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
    [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [1442] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1445] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1453] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
    [1458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1460] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(514),
    [1463] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(514),
    [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1473] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
    [1478] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1481] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1487] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
    [1492] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1496] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1500] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1504] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1508] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
    [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
    [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1518] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(41),
    [1521] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(542),
    [1524] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(542),
    [1527] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(45),
    [1530] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1536] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1542] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1545] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
    [1553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
    [1555] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(546),
    [1558] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(546),
    [1561] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1564] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1567] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1570] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1573] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1576] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1579] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(552),
    [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
    [1584] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1588] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1592] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1596] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1601] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
    [1606] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
    [1611] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1614] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1617] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(574),
    [1622] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(303),
    [1625] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(300),
    [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
    [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
    [1632] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1635] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1638] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1641] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
    [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
    [1648] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1651] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1655] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1658] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
    [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
    [1665] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(592),
    [1668] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(35),
    [1671] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(37),
    [1674] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(38),
    [1677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
    [1682] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(552),
    [1685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
    [1687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
    [1689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
    [1691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [1693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
    [1697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
    [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
    [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1703] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1706] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1709] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(612),
    [1712] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(612),
    [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
    [1717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
    [1719] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1724] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1727] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1732] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1737] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1742] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1747] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1750] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1758] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(634),
    [1763] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1766] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(635),
    [1773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [1775] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1780] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
    [1785] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1788] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1792] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1796] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(635),
    [1799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(635),
    [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(638),
    [1804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
    [1806] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(638),
    [1809] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(638),
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
