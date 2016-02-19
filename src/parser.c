#include "tree_sitter/parser.h"

#define STATE_COUNT 658
#define SYMBOL_COUNT 85

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_argument_list,
    sym_class_declaration,
    sym_module_declaration,
    sym_while_statement,
    sym_until_statement,
    sym_if_statement,
    sym_unless_statement,
    sym_condition,
    sym__statement_block,
    sym__do_block,
    sym__then_else_block,
    sym__call,
    sym__call_arguments,
    sym__command,
    sym__function_call,
    sym__expression,
    sym__argument,
    sym__primary,
    sym_scope_resolution_expression,
    sym_subscript_expression,
    sym__variable,
    sym__function_name,
    sym__terminator,
    aux_sym_program_repeat1,
    aux_sym_argument_list_repeat1,
    aux_sym_class_declaration_repeat1,
    aux_sym__call_arguments_repeat1,
    anon_sym_do,
    anon_sym_PIPE,
    anon_sym_end,
    anon_sym_undef,
    anon_sym_alias,
    anon_sym_if,
    anon_sym_while,
    anon_sym_unless,
    anon_sym_until,
    anon_sym_def,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_STAR,
    anon_sym_AMP,
    anon_sym_COMMA,
    anon_sym_class,
    anon_sym_LT,
    anon_sym_COLON_COLON,
    anon_sym_module,
    anon_sym_then,
    anon_sym_else,
    anon_sym_super,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_nil,
    anon_sym_self,
    sym_identifier,
    sym_comment,
    sym_symbol,
    anon_sym_DOT_DOT,
    anon_sym_CARET,
    anon_sym_LT_EQ_GT,
    anon_sym_EQ_EQ,
    anon_sym_EQ_EQ_EQ,
    anon_sym_EQ_TILDE,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT_EQ,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_LT_LT,
    anon_sym_GT_GT,
    anon_sym_TILDE,
    anon_sym_PLUS_AT,
    anon_sym_DASH_AT,
    anon_sym_LBRACK_RBRACK,
    anon_sym_LBRACK_RBRACK_EQ,
    sym__line_break,
    anon_sym_SEMI,
};

static const char *ts_symbol_names[] = {
    [sym_program] = "program",
    [sym__statement] = "_statement",
    [sym__declaration] = "_declaration",
    [sym_method_declaration] = "method_declaration",
    [sym_argument_list] = "argument_list",
    [sym_class_declaration] = "class_declaration",
    [sym_module_declaration] = "module_declaration",
    [sym_while_statement] = "while_statement",
    [sym_until_statement] = "until_statement",
    [sym_if_statement] = "if_statement",
    [sym_unless_statement] = "unless_statement",
    [sym_condition] = "condition",
    [sym__statement_block] = "_statement_block",
    [sym__do_block] = "_do_block",
    [sym__then_else_block] = "_then_else_block",
    [sym__call] = "_call",
    [sym__call_arguments] = "_call_arguments",
    [sym__command] = "_command",
    [sym__function_call] = "_function_call",
    [sym__expression] = "_expression",
    [sym__argument] = "_argument",
    [sym__primary] = "_primary",
    [sym_scope_resolution_expression] = "scope_resolution_expression",
    [sym_subscript_expression] = "subscript_expression",
    [sym__variable] = "_variable",
    [sym__function_name] = "_function_name",
    [sym__terminator] = "_terminator",
    [aux_sym_program_repeat1] = "program_repeat1",
    [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym__call_arguments_repeat1] = "_call_arguments_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_do] = "do",
    [anon_sym_PIPE] = "|",
    [anon_sym_end] = "end",
    [anon_sym_undef] = "undef",
    [anon_sym_alias] = "alias",
    [anon_sym_if] = "if",
    [anon_sym_while] = "while",
    [anon_sym_unless] = "unless",
    [anon_sym_until] = "until",
    [anon_sym_def] = "def",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_STAR] = "*",
    [anon_sym_AMP] = "&",
    [anon_sym_COMMA] = ",",
    [anon_sym_class] = "class",
    [anon_sym_LT] = "<",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_module] = "module",
    [anon_sym_then] = "then",
    [anon_sym_else] = "else",
    [anon_sym_super] = "super",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_nil] = "nil",
    [anon_sym_self] = "self",
    [sym_identifier] = "identifier",
    [sym_comment] = "comment",
    [sym_symbol] = "symbol",
    [anon_sym_DOT_DOT] = "..",
    [anon_sym_CARET] = "^",
    [anon_sym_LT_EQ_GT] = "<=>",
    [anon_sym_EQ_EQ] = "==",
    [anon_sym_EQ_EQ_EQ] = "===",
    [anon_sym_EQ_TILDE] = "=~",
    [anon_sym_GT] = ">",
    [anon_sym_GT_EQ] = ">=",
    [anon_sym_LT_EQ] = "<=",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_TILDE] = "~",
    [anon_sym_PLUS_AT] = "+@",
    [anon_sym_DASH_AT] = "-@",
    [anon_sym_LBRACK_RBRACK] = "[]",
    [anon_sym_LBRACK_RBRACK_EQ] = "[]=",
    [sym__line_break] = "_line_break",
    [anon_sym_SEMI] = ";",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_program] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_argument_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_class_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_module_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_while_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_until_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_if_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unless_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_condition] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__do_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__then_else_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__call] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__call_arguments] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__command] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__function_call] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__argument] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__primary] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_scope_resolution_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_subscript_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__variable] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__function_name] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__terminator] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_program_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_argument_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_class_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__call_arguments_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_do] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_end] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_undef] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_alias] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_if] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_while] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_unless] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_until] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_def] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_class] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_module] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_then] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_else] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_super] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_nil] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_self] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_comment] = {.visible = true, .named = true, .structural = false, .extra = true},
    [sym_symbol] = {.visible = true, .named = true, .structural = true, .extra = false},
    [anon_sym_DOT_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_TILDE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PERCENT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_TILDE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS_AT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH_AT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK_RBRACK_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym__line_break] = {.visible = false, .named = false, .structural = true, .extra = true},
    [anon_sym_SEMI] = {.visible = true, .named = false, .structural = true, .extra = false},
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(0);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '%')
                ADVANCE(6);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(10);
            if (lookahead == '+')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(19);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(34);
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(54);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == '[')
                ADVANCE(57);
            if (lookahead == ']')
                ADVANCE(60);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(72);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 't')
                ADVANCE(101);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '~')
                ADVANCE(123);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(sym__line_break);
        case 3:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_comment);
        case 4:
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 6:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 7:
            ACCEPT_TOKEN(anon_sym_AMP);
        case 8:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 9:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 10:
            if (lookahead == '*')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 11:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
        case 12:
            if (lookahead == '@')
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 13:
            ACCEPT_TOKEN(anon_sym_PLUS_AT);
        case 14:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 15:
            if (lookahead == '@')
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 16:
            ACCEPT_TOKEN(anon_sym_DASH_AT);
        case 17:
            if (lookahead == '.')
                ADVANCE(18);
            LEX_ERROR();
        case 18:
            ACCEPT_TOKEN(anon_sym_DOT_DOT);
        case 19:
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 20:
            if (lookahead == '%')
                ADVANCE(21);
            if (lookahead == '&')
                ADVANCE(21);
            if (lookahead == '*')
                ADVANCE(22);
            if (lookahead == '+')
                ADVANCE(23);
            if (lookahead == '-')
                ADVANCE(23);
            if (lookahead == '.')
                ADVANCE(24);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(21);
            if (lookahead == '|')
                ADVANCE(21);
            if (lookahead == '~')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            ACCEPT_TOKEN(sym_symbol);
        case 22:
            if (lookahead == '*')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 23:
            if (lookahead == '@')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 24:
            if (lookahead == '.')
                ADVANCE(21);
            LEX_ERROR();
        case 25:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 26:
            if (lookahead == '<')
                ADVANCE(21);
            if (lookahead == '=')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_symbol);
        case 27:
            if (lookahead == '>')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 28:
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '~')
                ADVANCE(21);
            LEX_ERROR();
        case 29:
            if (lookahead == '=')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 30:
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '>')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(sym_symbol);
        case 32:
            if (lookahead == ']')
                ADVANCE(29);
            LEX_ERROR();
        case 33:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 34:
            if (lookahead == '<')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_TOKEN(anon_sym_LT);
        case 35:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 36:
            if (lookahead == '>')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 37:
            ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
        case 38:
            if (lookahead == '=')
                ADVANCE(39);
            if (lookahead == 'b')
                ADVANCE(41);
            if (lookahead == '~')
                ADVANCE(53);
            LEX_ERROR();
        case 39:
            if (lookahead == '=')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 40:
            ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
        case 41:
            if (lookahead == 'e')
                ADVANCE(42);
            LEX_ERROR();
        case 42:
            if (lookahead == 'g')
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            if (lookahead == 'i')
                ADVANCE(44);
            LEX_ERROR();
        case 44:
            if (lookahead == 'n')
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (lookahead == '\n')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == '=')
                ADVANCE(47);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(52);
            LEX_ERROR();
        case 47:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == 'e')
                ADVANCE(48);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'e')))
                ADVANCE(52);
            LEX_ERROR();
        case 48:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == 'n')
                ADVANCE(49);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'n')))
                ADVANCE(52);
            LEX_ERROR();
        case 49:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(50);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'd')))
                ADVANCE(52);
            LEX_ERROR();
        case 50:
            if (lookahead == '\n')
                ADVANCE(51);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(52);
            LEX_ERROR();
        case 51:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == '=')
                ADVANCE(47);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(52);
            ACCEPT_TOKEN(sym_comment);
        case 52:
            if (lookahead == '\n')
                ADVANCE(46);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(52);
            LEX_ERROR();
        case 53:
            ACCEPT_TOKEN(anon_sym_EQ_TILDE);
        case 54:
            if (lookahead == '=')
                ADVANCE(55);
            if (lookahead == '>')
                ADVANCE(56);
            ACCEPT_TOKEN(anon_sym_GT);
        case 55:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 56:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 57:
            if (lookahead == ']')
                ADVANCE(58);
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 58:
            if (lookahead == '=')
                ADVANCE(59);
            ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
        case 59:
            ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
        case 60:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 61:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_alias);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_class);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_def);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_do);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(77);
            if (lookahead == 'n')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_else);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_end);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(92);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(94);
            if (lookahead == 'u')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(95);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(96);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_self);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
                ADVANCE(98);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(99);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(100);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(102);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(103);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(104);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_then);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(106);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(107);
            if (lookahead == 'l')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(114);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(109);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(111);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(112);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(113);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(115);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(118);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(119);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(120);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(121);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 122:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 123:
            ACCEPT_TOKEN(anon_sym_TILDE);
        case 124:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 125:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 127:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 128:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 129:
            if (lookahead == 'f')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(anon_sym_if);
        case 131:
            if (lookahead == 'n')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'l')
                ADVANCE(133);
            if (lookahead == 't')
                ADVANCE(137);
            LEX_ERROR();
        case 133:
            if (lookahead == 'e')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 's')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 's')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            ACCEPT_TOKEN(anon_sym_unless);
        case 137:
            if (lookahead == 'i')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'l')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_until);
        case 140:
            if (lookahead == 'h')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'i')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 'l')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'e')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            ACCEPT_TOKEN(anon_sym_while);
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'd')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'o')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(anon_sym_do);
        case 148:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 149:
            if (lookahead == ':')
                ADVANCE(25);
            LEX_ERROR();
        case 150:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '%')
                ADVANCE(6);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(10);
            if (lookahead == '+')
                ADVANCE(12);
            if (lookahead == '-')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(19);
            if (lookahead == '<')
                ADVANCE(34);
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(54);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '~')
                ADVANCE(123);
            LEX_ERROR();
        case 152:
            if (lookahead == ']')
                ADVANCE(58);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(158);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            LEX_ERROR();
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'd')
                ADVANCE(146);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 'd')
                ADVANCE(146);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(168);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(169);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(72);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 168:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 169:
            ACCEPT_TOKEN(anon_sym_LT);
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(171);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 171:
            if (lookahead == 'n')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 'd')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            ACCEPT_TOKEN(anon_sym_end);
        case 174:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(174);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 'e')
                ADVANCE(171);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(175);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(171);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(169);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(168);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(168);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(168);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 185:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(125);
            LEX_ERROR();
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'd')
                ADVANCE(146);
            LEX_ERROR();
        case 187:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(187);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 'd')
                ADVANCE(146);
            LEX_ERROR();
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == ']')
                ADVANCE(60);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(154);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(154);
            LEX_ERROR();
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 't')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'h')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'e')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'n')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            ACCEPT_TOKEN(anon_sym_then);
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 't')
                ADVANCE(194);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 't')
                ADVANCE(101);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(202);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 202:
            if (lookahead == 'l')
                ADVANCE(203);
            if (lookahead == 'n')
                ADVANCE(172);
            LEX_ERROR();
        case 203:
            if (lookahead == 's')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            ACCEPT_TOKEN(anon_sym_else);
        case 206:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(206);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '[')
                ADVANCE(150);
            if (lookahead == 'e')
                ADVANCE(202);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 207:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(207);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(202);
            LEX_ERROR();
        case 208:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(208);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 'm')
                ADVANCE(84);
            if (lookahead == 'n')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(93);
            if (lookahead == 'u')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(117);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 124,
    [1] = 127,
    [2] = 128,
    [3] = 128,
    [4] = 128,
    [5] = 145,
    [6] = 145,
    [7] = 128,
    [8] = 148,
    [9] = 148,
    [10] = 151,
    [11] = 151,
    [12] = 153,
    [13] = 153,
    [14] = 153,
    [15] = 153,
    [16] = 151,
    [17] = 155,
    [18] = 156,
    [19] = 156,
    [20] = 156,
    [21] = 157,
    [22] = 148,
    [23] = 145,
    [24] = 145,
    [25] = 159,
    [26] = 160,
    [27] = 160,
    [28] = 155,
    [29] = 156,
    [30] = 161,
    [31] = 160,
    [32] = 160,
    [33] = 162,
    [34] = 162,
    [35] = 162,
    [36] = 145,
    [37] = 162,
    [38] = 163,
    [39] = 163,
    [40] = 151,
    [41] = 151,
    [42] = 153,
    [43] = 153,
    [44] = 153,
    [45] = 153,
    [46] = 151,
    [47] = 155,
    [48] = 160,
    [49] = 156,
    [50] = 156,
    [51] = 156,
    [52] = 163,
    [53] = 164,
    [54] = 165,
    [55] = 167,
    [56] = 165,
    [57] = 170,
    [58] = 170,
    [59] = 170,
    [60] = 145,
    [61] = 170,
    [62] = 174,
    [63] = 174,
    [64] = 162,
    [65] = 151,
    [66] = 151,
    [67] = 153,
    [68] = 153,
    [69] = 153,
    [70] = 153,
    [71] = 151,
    [72] = 155,
    [73] = 156,
    [74] = 156,
    [75] = 156,
    [76] = 174,
    [77] = 164,
    [78] = 165,
    [79] = 170,
    [80] = 170,
    [81] = 175,
    [82] = 176,
    [83] = 170,
    [84] = 153,
    [85] = 177,
    [86] = 175,
    [87] = 170,
    [88] = 170,
    [89] = 170,
    [90] = 176,
    [91] = 174,
    [92] = 178,
    [93] = 165,
    [94] = 156,
    [95] = 179,
    [96] = 165,
    [97] = 164,
    [98] = 156,
    [99] = 179,
    [100] = 164,
    [101] = 165,
    [102] = 170,
    [103] = 170,
    [104] = 176,
    [105] = 170,
    [106] = 170,
    [107] = 170,
    [108] = 170,
    [109] = 176,
    [110] = 170,
    [111] = 170,
    [112] = 176,
    [113] = 170,
    [114] = 162,
    [115] = 174,
    [116] = 175,
    [117] = 180,
    [118] = 153,
    [119] = 174,
    [120] = 162,
    [121] = 174,
    [122] = 162,
    [123] = 180,
    [124] = 181,
    [125] = 181,
    [126] = 164,
    [127] = 165,
    [128] = 182,
    [129] = 156,
    [130] = 183,
    [131] = 164,
    [132] = 184,
    [133] = 156,
    [134] = 183,
    [135] = 164,
    [136] = 183,
    [137] = 164,
    [138] = 183,
    [139] = 164,
    [140] = 180,
    [141] = 165,
    [142] = 156,
    [143] = 185,
    [144] = 180,
    [145] = 184,
    [146] = 156,
    [147] = 185,
    [148] = 180,
    [149] = 185,
    [150] = 180,
    [151] = 185,
    [152] = 180,
    [153] = 170,
    [154] = 170,
    [155] = 176,
    [156] = 170,
    [157] = 170,
    [158] = 165,
    [159] = 170,
    [160] = 176,
    [161] = 170,
    [162] = 170,
    [163] = 170,
    [164] = 176,
    [165] = 186,
    [166] = 186,
    [167] = 186,
    [168] = 187,
    [169] = 187,
    [170] = 155,
    [171] = 156,
    [172] = 187,
    [173] = 187,
    [174] = 162,
    [175] = 187,
    [176] = 180,
    [177] = 187,
    [178] = 187,
    [179] = 156,
    [180] = 188,
    [181] = 189,
    [182] = 190,
    [183] = 190,
    [184] = 155,
    [185] = 156,
    [186] = 187,
    [187] = 190,
    [188] = 190,
    [189] = 162,
    [190] = 190,
    [191] = 180,
    [192] = 190,
    [193] = 190,
    [194] = 156,
    [195] = 188,
    [196] = 189,
    [197] = 190,
    [198] = 191,
    [199] = 192,
    [200] = 190,
    [201] = 189,
    [202] = 191,
    [203] = 190,
    [204] = 190,
    [205] = 191,
    [206] = 187,
    [207] = 187,
    [208] = 187,
    [209] = 170,
    [210] = 170,
    [211] = 165,
    [212] = 165,
    [213] = 170,
    [214] = 170,
    [215] = 176,
    [216] = 170,
    [217] = 170,
    [218] = 170,
    [219] = 170,
    [220] = 176,
    [221] = 170,
    [222] = 170,
    [223] = 193,
    [224] = 193,
    [225] = 193,
    [226] = 198,
    [227] = 198,
    [228] = 155,
    [229] = 156,
    [230] = 198,
    [231] = 198,
    [232] = 162,
    [233] = 198,
    [234] = 180,
    [235] = 198,
    [236] = 198,
    [237] = 156,
    [238] = 188,
    [239] = 189,
    [240] = 198,
    [241] = 191,
    [242] = 198,
    [243] = 198,
    [244] = 198,
    [245] = 170,
    [246] = 199,
    [247] = 200,
    [248] = 199,
    [249] = 201,
    [250] = 201,
    [251] = 201,
    [252] = 145,
    [253] = 201,
    [254] = 206,
    [255] = 206,
    [256] = 170,
    [257] = 151,
    [258] = 151,
    [259] = 153,
    [260] = 153,
    [261] = 153,
    [262] = 153,
    [263] = 151,
    [264] = 155,
    [265] = 156,
    [266] = 156,
    [267] = 156,
    [268] = 165,
    [269] = 206,
    [270] = 170,
    [271] = 170,
    [272] = 176,
    [273] = 170,
    [274] = 170,
    [275] = 164,
    [276] = 165,
    [277] = 170,
    [278] = 201,
    [279] = 176,
    [280] = 201,
    [281] = 201,
    [282] = 206,
    [283] = 178,
    [284] = 165,
    [285] = 156,
    [286] = 179,
    [287] = 165,
    [288] = 164,
    [289] = 165,
    [290] = 170,
    [291] = 201,
    [292] = 176,
    [293] = 201,
    [294] = 201,
    [295] = 170,
    [296] = 201,
    [297] = 176,
    [298] = 170,
    [299] = 201,
    [300] = 176,
    [301] = 201,
    [302] = 162,
    [303] = 206,
    [304] = 180,
    [305] = 206,
    [306] = 206,
    [307] = 181,
    [308] = 164,
    [309] = 165,
    [310] = 182,
    [311] = 180,
    [312] = 165,
    [313] = 170,
    [314] = 201,
    [315] = 176,
    [316] = 201,
    [317] = 201,
    [318] = 165,
    [319] = 170,
    [320] = 176,
    [321] = 201,
    [322] = 170,
    [323] = 201,
    [324] = 176,
    [325] = 186,
    [326] = 201,
    [327] = 201,
    [328] = 165,
    [329] = 165,
    [330] = 170,
    [331] = 201,
    [332] = 176,
    [333] = 201,
    [334] = 201,
    [335] = 170,
    [336] = 201,
    [337] = 176,
    [338] = 201,
    [339] = 201,
    [340] = 193,
    [341] = 201,
    [342] = 199,
    [343] = 201,
    [344] = 201,
    [345] = 165,
    [346] = 170,
    [347] = 201,
    [348] = 176,
    [349] = 201,
    [350] = 201,
    [351] = 175,
    [352] = 207,
    [353] = 153,
    [354] = 165,
    [355] = 170,
    [356] = 176,
    [357] = 201,
    [358] = 201,
    [359] = 165,
    [360] = 170,
    [361] = 176,
    [362] = 201,
    [363] = 201,
    [364] = 207,
    [365] = 186,
    [366] = 201,
    [367] = 193,
    [368] = 201,
    [369] = 151,
    [370] = 151,
    [371] = 201,
    [372] = 201,
    [373] = 156,
    [374] = 188,
    [375] = 189,
    [376] = 206,
    [377] = 191,
    [378] = 206,
    [379] = 206,
    [380] = 206,
    [381] = 208,
    [382] = 170,
    [383] = 165,
    [384] = 170,
    [385] = 201,
    [386] = 176,
    [387] = 201,
    [388] = 201,
    [389] = 176,
    [390] = 207,
    [391] = 165,
    [392] = 170,
    [393] = 176,
    [394] = 170,
    [395] = 165,
    [396] = 170,
    [397] = 176,
    [398] = 170,
    [399] = 186,
    [400] = 170,
    [401] = 193,
    [402] = 170,
    [403] = 151,
    [404] = 170,
    [405] = 170,
    [406] = 156,
    [407] = 188,
    [408] = 189,
    [409] = 174,
    [410] = 191,
    [411] = 174,
    [412] = 174,
    [413] = 174,
    [414] = 208,
    [415] = 170,
    [416] = 165,
    [417] = 170,
    [418] = 170,
    [419] = 176,
    [420] = 170,
    [421] = 170,
    [422] = 176,
    [423] = 176,
    [424] = 162,
    [425] = 162,
    [426] = 163,
    [427] = 178,
    [428] = 165,
    [429] = 156,
    [430] = 179,
    [431] = 165,
    [432] = 164,
    [433] = 165,
    [434] = 170,
    [435] = 162,
    [436] = 176,
    [437] = 162,
    [438] = 162,
    [439] = 170,
    [440] = 162,
    [441] = 176,
    [442] = 170,
    [443] = 162,
    [444] = 176,
    [445] = 162,
    [446] = 162,
    [447] = 163,
    [448] = 180,
    [449] = 163,
    [450] = 163,
    [451] = 181,
    [452] = 164,
    [453] = 165,
    [454] = 182,
    [455] = 180,
    [456] = 165,
    [457] = 170,
    [458] = 162,
    [459] = 176,
    [460] = 162,
    [461] = 162,
    [462] = 165,
    [463] = 170,
    [464] = 176,
    [465] = 162,
    [466] = 170,
    [467] = 162,
    [468] = 176,
    [469] = 186,
    [470] = 162,
    [471] = 162,
    [472] = 165,
    [473] = 165,
    [474] = 170,
    [475] = 162,
    [476] = 176,
    [477] = 162,
    [478] = 162,
    [479] = 170,
    [480] = 162,
    [481] = 176,
    [482] = 162,
    [483] = 162,
    [484] = 193,
    [485] = 162,
    [486] = 199,
    [487] = 201,
    [488] = 162,
    [489] = 165,
    [490] = 170,
    [491] = 162,
    [492] = 176,
    [493] = 162,
    [494] = 162,
    [495] = 207,
    [496] = 165,
    [497] = 170,
    [498] = 176,
    [499] = 162,
    [500] = 165,
    [501] = 170,
    [502] = 176,
    [503] = 162,
    [504] = 186,
    [505] = 162,
    [506] = 193,
    [507] = 162,
    [508] = 151,
    [509] = 162,
    [510] = 162,
    [511] = 156,
    [512] = 188,
    [513] = 189,
    [514] = 163,
    [515] = 191,
    [516] = 163,
    [517] = 163,
    [518] = 163,
    [519] = 208,
    [520] = 170,
    [521] = 165,
    [522] = 170,
    [523] = 162,
    [524] = 176,
    [525] = 162,
    [526] = 162,
    [527] = 176,
    [528] = 180,
    [529] = 160,
    [530] = 160,
    [531] = 156,
    [532] = 188,
    [533] = 189,
    [534] = 160,
    [535] = 191,
    [536] = 160,
    [537] = 160,
    [538] = 160,
    [539] = 145,
    [540] = 192,
    [541] = 159,
    [542] = 145,
    [543] = 164,
    [544] = 165,
    [545] = 170,
    [546] = 128,
    [547] = 176,
    [548] = 128,
    [549] = 128,
    [550] = 148,
    [551] = 178,
    [552] = 165,
    [553] = 156,
    [554] = 179,
    [555] = 165,
    [556] = 164,
    [557] = 165,
    [558] = 170,
    [559] = 128,
    [560] = 176,
    [561] = 128,
    [562] = 128,
    [563] = 170,
    [564] = 128,
    [565] = 176,
    [566] = 170,
    [567] = 128,
    [568] = 176,
    [569] = 128,
    [570] = 162,
    [571] = 148,
    [572] = 180,
    [573] = 148,
    [574] = 148,
    [575] = 181,
    [576] = 164,
    [577] = 165,
    [578] = 182,
    [579] = 180,
    [580] = 165,
    [581] = 170,
    [582] = 128,
    [583] = 176,
    [584] = 128,
    [585] = 128,
    [586] = 165,
    [587] = 170,
    [588] = 176,
    [589] = 128,
    [590] = 170,
    [591] = 128,
    [592] = 176,
    [593] = 186,
    [594] = 128,
    [595] = 128,
    [596] = 165,
    [597] = 165,
    [598] = 170,
    [599] = 128,
    [600] = 176,
    [601] = 128,
    [602] = 128,
    [603] = 170,
    [604] = 128,
    [605] = 176,
    [606] = 128,
    [607] = 128,
    [608] = 193,
    [609] = 128,
    [610] = 199,
    [611] = 201,
    [612] = 128,
    [613] = 165,
    [614] = 170,
    [615] = 128,
    [616] = 176,
    [617] = 128,
    [618] = 128,
    [619] = 207,
    [620] = 165,
    [621] = 170,
    [622] = 176,
    [623] = 128,
    [624] = 165,
    [625] = 170,
    [626] = 176,
    [627] = 128,
    [628] = 186,
    [629] = 128,
    [630] = 193,
    [631] = 128,
    [632] = 151,
    [633] = 128,
    [634] = 128,
    [635] = 128,
    [636] = 156,
    [637] = 188,
    [638] = 189,
    [639] = 148,
    [640] = 191,
    [641] = 148,
    [642] = 148,
    [643] = 148,
    [644] = 208,
    [645] = 170,
    [646] = 165,
    [647] = 170,
    [648] = 128,
    [649] = 176,
    [650] = 128,
    [651] = 128,
    [652] = 176,
    [653] = 175,
    [654] = 127,
    [655] = 153,
    [656] = 128,
    [657] = 127,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = 2,
        [sym__statement] = 4,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym__call] = 10,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 6,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [ts_builtin_sym_end] = 20,
        [anon_sym_undef] = 22,
        [anon_sym_alias] = 24,
        [anon_sym_if] = 26,
        [anon_sym_while] = 28,
        [anon_sym_unless] = 30,
        [anon_sym_until] = 32,
        [anon_sym_def] = 34,
        [anon_sym_LPAREN] = 36,
        [anon_sym_class] = 38,
        [anon_sym_COLON_COLON] = 40,
        [anon_sym_module] = 42,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [1] = {
        [ts_builtin_sym_end] = 50,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [2] = {
        [sym__terminator] = 52,
        [aux_sym_program_repeat1] = 54,
        [ts_builtin_sym_end] = 56,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [3] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [4] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [ts_builtin_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [5] = {
        [anon_sym_do] = 68,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [6] = {
        [anon_sym_do] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [7] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [ts_builtin_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [8] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [ts_builtin_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [9] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [ts_builtin_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [10] = {
        [sym__function_name] = 82,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 84,
        [anon_sym_CARET] = 84,
        [anon_sym_LT_EQ_GT] = 84,
        [anon_sym_EQ_EQ] = 84,
        [anon_sym_EQ_EQ_EQ] = 84,
        [anon_sym_EQ_TILDE] = 84,
        [anon_sym_GT] = 84,
        [anon_sym_GT_EQ] = 84,
        [anon_sym_LT_EQ] = 84,
        [anon_sym_PLUS] = 84,
        [anon_sym_DASH] = 84,
        [anon_sym_SLASH] = 84,
        [anon_sym_PERCENT] = 84,
        [anon_sym_STAR_STAR] = 84,
        [anon_sym_LT_LT] = 84,
        [anon_sym_GT_GT] = 84,
        [anon_sym_TILDE] = 84,
        [anon_sym_PLUS_AT] = 84,
        [anon_sym_DASH_AT] = 84,
        [anon_sym_LBRACK_RBRACK] = 84,
        [anon_sym_LBRACK_RBRACK_EQ] = 84,
        [sym__line_break] = 48,
    },
    [11] = {
        [sym__function_name] = 86,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [12] = {
        [sym_condition] = 90,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [13] = {
        [sym_condition] = 106,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [14] = {
        [sym_condition] = 122,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [15] = {
        [sym_condition] = 124,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [16] = {
        [sym__function_name] = 126,
        [anon_sym_PIPE] = 128,
        [anon_sym_STAR] = 128,
        [anon_sym_AMP] = 128,
        [anon_sym_LT] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 128,
        [anon_sym_CARET] = 128,
        [anon_sym_LT_EQ_GT] = 128,
        [anon_sym_EQ_EQ] = 128,
        [anon_sym_EQ_EQ_EQ] = 128,
        [anon_sym_EQ_TILDE] = 128,
        [anon_sym_GT] = 128,
        [anon_sym_GT_EQ] = 128,
        [anon_sym_LT_EQ] = 128,
        [anon_sym_PLUS] = 128,
        [anon_sym_DASH] = 128,
        [anon_sym_SLASH] = 128,
        [anon_sym_PERCENT] = 128,
        [anon_sym_STAR_STAR] = 128,
        [anon_sym_LT_LT] = 128,
        [anon_sym_GT_GT] = 128,
        [anon_sym_TILDE] = 128,
        [anon_sym_PLUS_AT] = 128,
        [anon_sym_DASH_AT] = 128,
        [anon_sym_LBRACK_RBRACK] = 128,
        [anon_sym_LBRACK_RBRACK_EQ] = 128,
        [sym__line_break] = 48,
    },
    [17] = {
        [sym__statement] = 130,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 160,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [18] = {
        [sym_identifier] = 170,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [19] = {
        [sym_identifier] = 172,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [20] = {
        [sym_identifier] = 174,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [21] = {
        [sym__call_arguments] = 176,
        [sym__command] = 178,
        [sym__argument] = 180,
        [sym__primary] = 182,
        [sym_scope_resolution_expression] = 184,
        [sym_subscript_expression] = 184,
        [sym__variable] = 184,
        [anon_sym_do] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_super] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [22] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 196,
        [ts_builtin_sym_end] = 196,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 196,
    },
    [23] = {
        [anon_sym_do] = 198,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [24] = {
        [anon_sym_do] = 200,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 202,
        [anon_sym_do] = 200,
        [anon_sym_COMMA] = 204,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [26] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COMMA] = 74,
        [anon_sym_COLON_COLON] = 206,
        [anon_sym_LBRACK] = 208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 80,
        [anon_sym_do] = 80,
        [anon_sym_COMMA] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [28] = {
        [sym__statement] = 210,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 212,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [29] = {
        [sym_identifier] = 214,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [30] = {
        [sym__call_arguments] = 176,
        [sym__command] = 178,
        [sym__argument] = 180,
        [sym__primary] = 182,
        [sym_scope_resolution_expression] = 184,
        [sym_subscript_expression] = 184,
        [sym__variable] = 184,
        [anon_sym_LPAREN] = 188,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_super] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 196,
        [anon_sym_do] = 196,
        [anon_sym_COMMA] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [32] = {
        [aux_sym__call_arguments_repeat1] = 216,
        [anon_sym_do] = 216,
        [anon_sym_COMMA] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [33] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 220,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 224,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [34] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_RPAREN] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [35] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_RPAREN] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [36] = {
        [anon_sym_do] = 226,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [37] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_RPAREN] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [38] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_RPAREN] = 74,
        [anon_sym_COLON_COLON] = 228,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [39] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_RPAREN] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [40] = {
        [sym__function_name] = 232,
        [anon_sym_PIPE] = 234,
        [anon_sym_STAR] = 234,
        [anon_sym_AMP] = 234,
        [anon_sym_LT] = 234,
        [sym_identifier] = 234,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 234,
        [anon_sym_CARET] = 234,
        [anon_sym_LT_EQ_GT] = 234,
        [anon_sym_EQ_EQ] = 234,
        [anon_sym_EQ_EQ_EQ] = 234,
        [anon_sym_EQ_TILDE] = 234,
        [anon_sym_GT] = 234,
        [anon_sym_GT_EQ] = 234,
        [anon_sym_LT_EQ] = 234,
        [anon_sym_PLUS] = 234,
        [anon_sym_DASH] = 234,
        [anon_sym_SLASH] = 234,
        [anon_sym_PERCENT] = 234,
        [anon_sym_STAR_STAR] = 234,
        [anon_sym_LT_LT] = 234,
        [anon_sym_GT_GT] = 234,
        [anon_sym_TILDE] = 234,
        [anon_sym_PLUS_AT] = 234,
        [anon_sym_DASH_AT] = 234,
        [anon_sym_LBRACK_RBRACK] = 234,
        [anon_sym_LBRACK_RBRACK_EQ] = 234,
        [sym__line_break] = 48,
    },
    [41] = {
        [sym__function_name] = 236,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [42] = {
        [sym_condition] = 238,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [43] = {
        [sym_condition] = 240,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [44] = {
        [sym_condition] = 242,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [45] = {
        [sym_condition] = 244,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [46] = {
        [sym__function_name] = 246,
        [anon_sym_PIPE] = 128,
        [anon_sym_STAR] = 128,
        [anon_sym_AMP] = 128,
        [anon_sym_LT] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 128,
        [anon_sym_CARET] = 128,
        [anon_sym_LT_EQ_GT] = 128,
        [anon_sym_EQ_EQ] = 128,
        [anon_sym_EQ_EQ_EQ] = 128,
        [anon_sym_EQ_TILDE] = 128,
        [anon_sym_GT] = 128,
        [anon_sym_GT_EQ] = 128,
        [anon_sym_LT_EQ] = 128,
        [anon_sym_PLUS] = 128,
        [anon_sym_DASH] = 128,
        [anon_sym_SLASH] = 128,
        [anon_sym_PERCENT] = 128,
        [anon_sym_STAR_STAR] = 128,
        [anon_sym_LT_LT] = 128,
        [anon_sym_GT_GT] = 128,
        [anon_sym_TILDE] = 128,
        [anon_sym_PLUS_AT] = 128,
        [anon_sym_DASH_AT] = 128,
        [anon_sym_LBRACK_RBRACK] = 128,
        [anon_sym_LBRACK_RBRACK_EQ] = 128,
        [sym__line_break] = 48,
    },
    [47] = {
        [sym__statement] = 248,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 250,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [48] = {
        [aux_sym__call_arguments_repeat1] = 252,
        [anon_sym_do] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [49] = {
        [sym_identifier] = 254,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [50] = {
        [sym_identifier] = 256,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [51] = {
        [sym_identifier] = 258,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [52] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 196,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 196,
    },
    [53] = {
        [sym__terminator] = 260,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [54] = {
        [sym__statement] = 266,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 280,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [55] = {
        [sym__statement] = 306,
        [sym__declaration] = 306,
        [sym_method_declaration] = 306,
        [sym_argument_list] = 308,
        [sym_class_declaration] = 306,
        [sym_module_declaration] = 306,
        [sym_while_statement] = 306,
        [sym_until_statement] = 306,
        [sym_if_statement] = 306,
        [sym_unless_statement] = 306,
        [sym__statement_block] = 308,
        [sym__do_block] = 308,
        [sym__call] = 306,
        [sym__command] = 306,
        [sym__function_call] = 306,
        [sym__expression] = 306,
        [sym__argument] = 306,
        [sym__primary] = 306,
        [sym_scope_resolution_expression] = 306,
        [sym_subscript_expression] = 306,
        [sym__variable] = 306,
        [sym__terminator] = 308,
        [aux_sym_class_declaration_repeat1] = 308,
        [anon_sym_do] = 308,
        [anon_sym_end] = 306,
        [anon_sym_undef] = 306,
        [anon_sym_alias] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_def] = 306,
        [anon_sym_LPAREN] = 306,
        [anon_sym_STAR] = 308,
        [anon_sym_AMP] = 308,
        [anon_sym_class] = 306,
        [anon_sym_LT] = 308,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_module] = 306,
        [anon_sym_super] = 306,
        [anon_sym_nil] = 306,
        [anon_sym_self] = 306,
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym_symbol] = 306,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 308,
    },
    [56] = {
        [sym__statement] = 306,
        [sym__declaration] = 306,
        [sym_method_declaration] = 306,
        [sym_class_declaration] = 306,
        [sym_module_declaration] = 306,
        [sym_while_statement] = 306,
        [sym_until_statement] = 306,
        [sym_if_statement] = 306,
        [sym_unless_statement] = 306,
        [sym__call] = 306,
        [sym__command] = 306,
        [sym__function_call] = 306,
        [sym__expression] = 306,
        [sym__argument] = 306,
        [sym__primary] = 306,
        [sym_scope_resolution_expression] = 306,
        [sym_subscript_expression] = 306,
        [sym__variable] = 306,
        [anon_sym_end] = 306,
        [anon_sym_undef] = 306,
        [anon_sym_alias] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_def] = 306,
        [anon_sym_LPAREN] = 306,
        [anon_sym_class] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_module] = 306,
        [anon_sym_super] = 306,
        [anon_sym_nil] = 306,
        [anon_sym_self] = 306,
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym_symbol] = 306,
        [sym__line_break] = 48,
    },
    [57] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 312,
        [anon_sym_end] = 314,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [58] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [59] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [60] = {
        [anon_sym_do] = 318,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [61] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [62] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_LBRACK] = 322,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [63] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [64] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [anon_sym_RPAREN] = 324,
        [sym_comment] = 48,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [65] = {
        [sym__function_name] = 326,
        [anon_sym_PIPE] = 328,
        [anon_sym_STAR] = 328,
        [anon_sym_AMP] = 328,
        [anon_sym_LT] = 328,
        [sym_identifier] = 328,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 328,
        [anon_sym_CARET] = 328,
        [anon_sym_LT_EQ_GT] = 328,
        [anon_sym_EQ_EQ] = 328,
        [anon_sym_EQ_EQ_EQ] = 328,
        [anon_sym_EQ_TILDE] = 328,
        [anon_sym_GT] = 328,
        [anon_sym_GT_EQ] = 328,
        [anon_sym_LT_EQ] = 328,
        [anon_sym_PLUS] = 328,
        [anon_sym_DASH] = 328,
        [anon_sym_SLASH] = 328,
        [anon_sym_PERCENT] = 328,
        [anon_sym_STAR_STAR] = 328,
        [anon_sym_LT_LT] = 328,
        [anon_sym_GT_GT] = 328,
        [anon_sym_TILDE] = 328,
        [anon_sym_PLUS_AT] = 328,
        [anon_sym_DASH_AT] = 328,
        [anon_sym_LBRACK_RBRACK] = 328,
        [anon_sym_LBRACK_RBRACK_EQ] = 328,
        [sym__line_break] = 48,
    },
    [66] = {
        [sym__function_name] = 330,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [67] = {
        [sym_condition] = 332,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [68] = {
        [sym_condition] = 334,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [69] = {
        [sym_condition] = 336,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [70] = {
        [sym_condition] = 338,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [71] = {
        [sym__function_name] = 340,
        [anon_sym_PIPE] = 128,
        [anon_sym_STAR] = 128,
        [anon_sym_AMP] = 128,
        [anon_sym_LT] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 128,
        [anon_sym_CARET] = 128,
        [anon_sym_LT_EQ_GT] = 128,
        [anon_sym_EQ_EQ] = 128,
        [anon_sym_EQ_EQ_EQ] = 128,
        [anon_sym_EQ_TILDE] = 128,
        [anon_sym_GT] = 128,
        [anon_sym_GT_EQ] = 128,
        [anon_sym_LT_EQ] = 128,
        [anon_sym_PLUS] = 128,
        [anon_sym_DASH] = 128,
        [anon_sym_SLASH] = 128,
        [anon_sym_PERCENT] = 128,
        [anon_sym_STAR_STAR] = 128,
        [anon_sym_LT_LT] = 128,
        [anon_sym_GT_GT] = 128,
        [anon_sym_TILDE] = 128,
        [anon_sym_PLUS_AT] = 128,
        [anon_sym_DASH_AT] = 128,
        [anon_sym_LBRACK_RBRACK] = 128,
        [anon_sym_LBRACK_RBRACK_EQ] = 128,
        [sym__line_break] = 48,
    },
    [72] = {
        [sym__statement] = 342,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 344,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [73] = {
        [sym_identifier] = 346,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [74] = {
        [sym_identifier] = 348,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [75] = {
        [sym_identifier] = 350,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [76] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 196,
        [anon_sym_end] = 196,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 196,
    },
    [77] = {
        [sym__terminator] = 352,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [78] = {
        [sym__statement] = 354,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [79] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_end] = 360,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [80] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [sym_comment] = 48,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [81] = {
        [sym__statement] = 362,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [82] = {
        [anon_sym_end] = 364,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [83] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [sym_comment] = 48,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [84] = {
        [sym__expression] = 368,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_LPAREN] = 296,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [85] = {
        [sym__statement] = 306,
        [sym__declaration] = 306,
        [sym_method_declaration] = 306,
        [sym_class_declaration] = 306,
        [sym_module_declaration] = 306,
        [sym_while_statement] = 306,
        [sym_until_statement] = 306,
        [sym_if_statement] = 306,
        [sym_unless_statement] = 306,
        [sym__call] = 306,
        [sym__command] = 306,
        [sym__function_call] = 306,
        [sym__expression] = 306,
        [sym__argument] = 306,
        [sym__primary] = 306,
        [sym_scope_resolution_expression] = 306,
        [sym_subscript_expression] = 306,
        [sym__variable] = 306,
        [sym__terminator] = 308,
        [aux_sym_program_repeat1] = 308,
        [ts_builtin_sym_end] = 308,
        [anon_sym_end] = 308,
        [anon_sym_undef] = 306,
        [anon_sym_alias] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_def] = 306,
        [anon_sym_LPAREN] = 306,
        [anon_sym_RPAREN] = 308,
        [anon_sym_class] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_module] = 306,
        [anon_sym_else] = 308,
        [anon_sym_super] = 306,
        [anon_sym_nil] = 306,
        [anon_sym_self] = 306,
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym_symbol] = 306,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 308,
    },
    [86] = {
        [sym__statement] = 306,
        [sym__declaration] = 306,
        [sym_method_declaration] = 306,
        [sym_class_declaration] = 306,
        [sym_module_declaration] = 306,
        [sym_while_statement] = 306,
        [sym_until_statement] = 306,
        [sym_if_statement] = 306,
        [sym_unless_statement] = 306,
        [sym__call] = 306,
        [sym__command] = 306,
        [sym__function_call] = 306,
        [sym__expression] = 306,
        [sym__argument] = 306,
        [sym__primary] = 306,
        [sym_scope_resolution_expression] = 306,
        [sym_subscript_expression] = 306,
        [sym__variable] = 306,
        [anon_sym_undef] = 306,
        [anon_sym_alias] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_def] = 306,
        [anon_sym_LPAREN] = 306,
        [anon_sym_class] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_module] = 306,
        [anon_sym_super] = 306,
        [anon_sym_nil] = 306,
        [anon_sym_self] = 306,
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym_symbol] = 306,
        [sym__line_break] = 48,
    },
    [87] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [sym_comment] = 48,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [88] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [sym_comment] = 48,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [89] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 376,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [90] = {
        [anon_sym_end] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [91] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [92] = {
        [sym__terminator] = 380,
        [anon_sym_LT] = 382,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [93] = {
        [sym__statement] = 384,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 386,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [94] = {
        [sym_identifier] = 388,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [95] = {
        [sym__terminator] = 390,
        [aux_sym_class_declaration_repeat1] = 392,
        [anon_sym_COLON_COLON] = 394,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [96] = {
        [sym__statement] = 396,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 398,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [97] = {
        [sym__terminator] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [98] = {
        [sym_identifier] = 402,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [99] = {
        [sym__terminator] = 404,
        [aux_sym_class_declaration_repeat1] = 406,
        [anon_sym_COLON_COLON] = 394,
        [sym_comment] = 48,
        [sym__line_break] = 404,
        [anon_sym_SEMI] = 404,
    },
    [100] = {
        [sym__terminator] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [101] = {
        [sym__statement] = 410,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 412,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [102] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 414,
        [anon_sym_end] = 416,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [103] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [anon_sym_end] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [104] = {
        [anon_sym_end] = 420,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [105] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [anon_sym_end] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [sym_comment] = 48,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [106] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [sym_comment] = 48,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [107] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 426,
        [anon_sym_end] = 412,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [108] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_end] = 428,
        [anon_sym_if] = 428,
        [anon_sym_while] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_until] = 428,
        [sym_comment] = 48,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [109] = {
        [anon_sym_end] = 416,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [110] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 430,
        [anon_sym_end] = 432,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [111] = {
        [sym__terminator] = 434,
        [aux_sym_program_repeat1] = 434,
        [anon_sym_end] = 434,
        [anon_sym_if] = 434,
        [anon_sym_while] = 434,
        [anon_sym_unless] = 434,
        [anon_sym_until] = 434,
        [sym_comment] = 48,
        [sym__line_break] = 434,
        [anon_sym_SEMI] = 434,
    },
    [112] = {
        [anon_sym_end] = 398,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [113] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [114] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 440,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [115] = {
        [sym__terminator] = 252,
        [aux_sym_program_repeat1] = 252,
        [anon_sym_end] = 252,
        [anon_sym_if] = 252,
        [anon_sym_while] = 252,
        [anon_sym_unless] = 252,
        [anon_sym_until] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 252,
        [anon_sym_SEMI] = 252,
    },
    [116] = {
        [sym__statement] = 442,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [117] = {
        [anon_sym_RPAREN] = 444,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [118] = {
        [sym__expression] = 446,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_LPAREN] = 158,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [119] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [120] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [anon_sym_RPAREN] = 370,
        [sym_comment] = 48,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [121] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [122] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 452,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 376,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [123] = {
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [124] = {
        [sym_argument_list] = 454,
        [sym__terminator] = 456,
        [anon_sym_LPAREN] = 458,
        [anon_sym_STAR] = 460,
        [anon_sym_AMP] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [125] = {
        [sym_argument_list] = 464,
        [sym__terminator] = 464,
        [anon_sym_LPAREN] = 464,
        [anon_sym_STAR] = 464,
        [anon_sym_AMP] = 464,
        [sym_identifier] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [126] = {
        [sym__terminator] = 466,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [127] = {
        [sym__statement] = 468,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 470,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [128] = {
        [sym_argument_list] = 472,
        [anon_sym_RPAREN] = 466,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [129] = {
        [sym_identifier] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [130] = {
        [sym__terminator] = 480,
        [aux_sym_argument_list_repeat1] = 482,
        [anon_sym_COMMA] = 484,
        [sym_comment] = 48,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [131] = {
        [sym__terminator] = 486,
        [sym_comment] = 48,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [132] = {
        [anon_sym_STAR] = 488,
        [anon_sym_AMP] = 488,
        [sym_identifier] = 490,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [133] = {
        [sym_identifier] = 492,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [134] = {
        [sym__terminator] = 494,
        [aux_sym_argument_list_repeat1] = 496,
        [anon_sym_COMMA] = 484,
        [sym_comment] = 48,
        [sym__line_break] = 494,
        [anon_sym_SEMI] = 494,
    },
    [135] = {
        [sym__terminator] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [136] = {
        [sym__terminator] = 498,
        [aux_sym_argument_list_repeat1] = 500,
        [anon_sym_COMMA] = 484,
        [sym_comment] = 48,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [137] = {
        [sym__terminator] = 502,
        [sym_comment] = 48,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [138] = {
        [sym__terminator] = 486,
        [aux_sym_argument_list_repeat1] = 504,
        [anon_sym_COMMA] = 484,
        [sym_comment] = 48,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [139] = {
        [sym__terminator] = 506,
        [sym_comment] = 48,
        [sym__line_break] = 506,
        [anon_sym_SEMI] = 506,
    },
    [140] = {
        [anon_sym_RPAREN] = 508,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [141] = {
        [sym__statement] = 510,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 512,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [142] = {
        [sym_identifier] = 514,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [143] = {
        [aux_sym_argument_list_repeat1] = 516,
        [anon_sym_RPAREN] = 480,
        [anon_sym_COMMA] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [144] = {
        [anon_sym_RPAREN] = 486,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [145] = {
        [anon_sym_STAR] = 520,
        [anon_sym_AMP] = 520,
        [sym_identifier] = 522,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [146] = {
        [sym_identifier] = 524,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [147] = {
        [aux_sym_argument_list_repeat1] = 526,
        [anon_sym_RPAREN] = 494,
        [anon_sym_COMMA] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [148] = {
        [anon_sym_RPAREN] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [149] = {
        [aux_sym_argument_list_repeat1] = 528,
        [anon_sym_RPAREN] = 498,
        [anon_sym_COMMA] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [150] = {
        [anon_sym_RPAREN] = 502,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [151] = {
        [aux_sym_argument_list_repeat1] = 530,
        [anon_sym_RPAREN] = 486,
        [anon_sym_COMMA] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [152] = {
        [anon_sym_RPAREN] = 506,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [153] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 532,
        [anon_sym_end] = 534,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [154] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [anon_sym_end] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [sym_comment] = 48,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [155] = {
        [anon_sym_end] = 538,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [156] = {
        [sym__terminator] = 540,
        [aux_sym_program_repeat1] = 540,
        [anon_sym_end] = 540,
        [anon_sym_if] = 540,
        [anon_sym_while] = 540,
        [anon_sym_unless] = 540,
        [anon_sym_until] = 540,
        [sym_comment] = 48,
        [sym__line_break] = 540,
        [anon_sym_SEMI] = 540,
    },
    [157] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [anon_sym_end] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [sym_comment] = 48,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [158] = {
        [sym__statement] = 544,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 534,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [159] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 546,
        [anon_sym_end] = 538,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [160] = {
        [anon_sym_end] = 548,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [161] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [162] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 552,
        [anon_sym_end] = 512,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [163] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [164] = {
        [anon_sym_end] = 534,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [165] = {
        [sym__statement_block] = 556,
        [sym__do_block] = 558,
        [sym__terminator] = 560,
        [anon_sym_do] = 562,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [166] = {
        [sym__statement_block] = 564,
        [sym__do_block] = 564,
        [sym__terminator] = 564,
        [anon_sym_do] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [167] = {
        [sym__statement_block] = 72,
        [sym__do_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_do] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [168] = {
        [sym__statement_block] = 74,
        [sym__do_block] = 74,
        [sym__terminator] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COLON_COLON] = 566,
        [anon_sym_LBRACK] = 568,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [169] = {
        [sym__statement_block] = 80,
        [sym__do_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_do] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [170] = {
        [sym__statement] = 570,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 572,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [171] = {
        [sym_identifier] = 574,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [172] = {
        [sym__statement_block] = 196,
        [sym__do_block] = 196,
        [sym__terminator] = 196,
        [anon_sym_do] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 196,
    },
    [173] = {
        [sym__statement_block] = 216,
        [sym__do_block] = 216,
        [sym__terminator] = 216,
        [anon_sym_do] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [174] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 576,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 578,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [175] = {
        [sym__statement_block] = 252,
        [sym__do_block] = 252,
        [sym__terminator] = 252,
        [anon_sym_do] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 252,
        [anon_sym_SEMI] = 252,
    },
    [176] = {
        [anon_sym_RPAREN] = 580,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [177] = {
        [sym__statement_block] = 448,
        [sym__do_block] = 448,
        [sym__terminator] = 448,
        [anon_sym_do] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [178] = {
        [sym__statement_block] = 450,
        [sym__do_block] = 450,
        [sym__terminator] = 450,
        [anon_sym_do] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [179] = {
        [sym_identifier] = 582,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [180] = {
        [sym__argument] = 584,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 594,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [181] = {
        [aux_sym__call_arguments_repeat1] = 598,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 602,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [182] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_COMMA] = 74,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 606,
        [anon_sym_RBRACK] = 74,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [183] = {
        [aux_sym__call_arguments_repeat1] = 80,
        [anon_sym_COMMA] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [anon_sym_RBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [184] = {
        [sym__statement] = 608,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 610,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [185] = {
        [sym_identifier] = 612,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [186] = {
        [sym__statement_block] = 614,
        [sym__do_block] = 614,
        [sym__terminator] = 614,
        [anon_sym_do] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [187] = {
        [aux_sym__call_arguments_repeat1] = 196,
        [anon_sym_COMMA] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 196,
        [anon_sym_RBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [188] = {
        [aux_sym__call_arguments_repeat1] = 216,
        [anon_sym_COMMA] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [anon_sym_RBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [189] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 616,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 618,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [190] = {
        [aux_sym__call_arguments_repeat1] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 252,
        [anon_sym_RBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [191] = {
        [anon_sym_RPAREN] = 620,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [192] = {
        [aux_sym__call_arguments_repeat1] = 448,
        [anon_sym_COMMA] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_RBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [193] = {
        [aux_sym__call_arguments_repeat1] = 450,
        [anon_sym_COMMA] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_LBRACK] = 450,
        [anon_sym_RBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [194] = {
        [sym_identifier] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [195] = {
        [sym__argument] = 624,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 626,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [196] = {
        [aux_sym__call_arguments_repeat1] = 628,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 630,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [197] = {
        [aux_sym__call_arguments_repeat1] = 614,
        [anon_sym_COMMA] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_LBRACK] = 614,
        [anon_sym_RBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [198] = {
        [anon_sym_RBRACK] = 632,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [199] = {
        [sym__argument] = 634,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [200] = {
        [aux_sym__call_arguments_repeat1] = 636,
        [anon_sym_COMMA] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_LBRACK] = 636,
        [anon_sym_RBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [201] = {
        [aux_sym__call_arguments_repeat1] = 638,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 640,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [202] = {
        [anon_sym_RBRACK] = 642,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [203] = {
        [aux_sym__call_arguments_repeat1] = 644,
        [anon_sym_COMMA] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_LBRACK] = 644,
        [anon_sym_RBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [204] = {
        [aux_sym__call_arguments_repeat1] = 646,
        [anon_sym_COMMA] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_LBRACK] = 646,
        [anon_sym_RBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [205] = {
        [anon_sym_RBRACK] = 648,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [206] = {
        [sym__statement_block] = 636,
        [sym__do_block] = 636,
        [sym__terminator] = 636,
        [anon_sym_do] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [207] = {
        [sym__statement_block] = 644,
        [sym__do_block] = 644,
        [sym__terminator] = 644,
        [anon_sym_do] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [208] = {
        [sym__statement_block] = 646,
        [sym__do_block] = 646,
        [sym__terminator] = 646,
        [anon_sym_do] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [209] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [210] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [anon_sym_end] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [sym_comment] = 48,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [211] = {
        [sym__statement] = 654,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 656,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [212] = {
        [sym__statement] = 658,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 660,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [213] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 662,
        [anon_sym_end] = 664,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [214] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [215] = {
        [anon_sym_end] = 668,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [216] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_end] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [sym_comment] = 48,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [217] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [anon_sym_end] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [sym_comment] = 48,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [218] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 674,
        [anon_sym_end] = 676,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [219] = {
        [sym__terminator] = 678,
        [aux_sym_program_repeat1] = 678,
        [anon_sym_end] = 678,
        [anon_sym_if] = 678,
        [anon_sym_while] = 678,
        [anon_sym_unless] = 678,
        [anon_sym_until] = 678,
        [sym_comment] = 48,
        [sym__line_break] = 678,
        [anon_sym_SEMI] = 678,
    },
    [220] = {
        [anon_sym_end] = 680,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [221] = {
        [sym__terminator] = 682,
        [aux_sym_program_repeat1] = 682,
        [anon_sym_end] = 682,
        [anon_sym_if] = 682,
        [anon_sym_while] = 682,
        [anon_sym_unless] = 682,
        [anon_sym_until] = 682,
        [sym_comment] = 48,
        [sym__line_break] = 682,
        [anon_sym_SEMI] = 682,
    },
    [222] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [223] = {
        [sym__then_else_block] = 686,
        [sym__terminator] = 688,
        [anon_sym_then] = 688,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [224] = {
        [sym__then_else_block] = 564,
        [sym__terminator] = 564,
        [anon_sym_then] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [225] = {
        [sym__then_else_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_then] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [226] = {
        [sym__then_else_block] = 74,
        [sym__terminator] = 74,
        [anon_sym_COLON_COLON] = 694,
        [anon_sym_then] = 74,
        [anon_sym_LBRACK] = 696,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [227] = {
        [sym__then_else_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [228] = {
        [sym__statement] = 698,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 700,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [229] = {
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [230] = {
        [sym__then_else_block] = 196,
        [sym__terminator] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_then] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 196,
    },
    [231] = {
        [sym__then_else_block] = 216,
        [sym__terminator] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_then] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [232] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 704,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 706,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [233] = {
        [sym__then_else_block] = 252,
        [sym__terminator] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_then] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 252,
        [anon_sym_SEMI] = 252,
    },
    [234] = {
        [anon_sym_RPAREN] = 708,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [235] = {
        [sym__then_else_block] = 448,
        [sym__terminator] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_then] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [236] = {
        [sym__then_else_block] = 450,
        [sym__terminator] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_then] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [237] = {
        [sym_identifier] = 710,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [238] = {
        [sym__argument] = 712,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 714,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [239] = {
        [aux_sym__call_arguments_repeat1] = 716,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 718,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [240] = {
        [sym__then_else_block] = 614,
        [sym__terminator] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_then] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [241] = {
        [anon_sym_RBRACK] = 720,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [242] = {
        [sym__then_else_block] = 636,
        [sym__terminator] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_then] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [243] = {
        [sym__then_else_block] = 644,
        [sym__terminator] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_then] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [244] = {
        [sym__then_else_block] = 646,
        [sym__terminator] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_then] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [245] = {
        [sym__terminator] = 722,
        [aux_sym_program_repeat1] = 722,
        [anon_sym_end] = 722,
        [anon_sym_if] = 722,
        [anon_sym_while] = 722,
        [anon_sym_unless] = 722,
        [anon_sym_until] = 722,
        [sym_comment] = 48,
        [sym__line_break] = 722,
        [anon_sym_SEMI] = 722,
    },
    [246] = {
        [sym__statement] = 724,
        [sym__declaration] = 726,
        [sym_method_declaration] = 728,
        [sym_class_declaration] = 728,
        [sym_module_declaration] = 728,
        [sym_while_statement] = 726,
        [sym_until_statement] = 726,
        [sym_if_statement] = 726,
        [sym_unless_statement] = 726,
        [sym__call] = 730,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 726,
        [sym__argument] = 732,
        [sym__primary] = 734,
        [sym_scope_resolution_expression] = 736,
        [sym_subscript_expression] = 736,
        [sym__variable] = 736,
        [anon_sym_end] = 738,
        [anon_sym_undef] = 740,
        [anon_sym_alias] = 742,
        [anon_sym_if] = 744,
        [anon_sym_while] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 750,
        [anon_sym_def] = 752,
        [anon_sym_LPAREN] = 754,
        [anon_sym_class] = 756,
        [anon_sym_COLON_COLON] = 758,
        [anon_sym_module] = 760,
        [anon_sym_else] = 762,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 764,
        [anon_sym_self] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 48,
        [sym_symbol] = 732,
        [sym__line_break] = 48,
    },
    [247] = {
        [sym__statement] = 306,
        [sym__declaration] = 306,
        [sym_method_declaration] = 306,
        [sym_class_declaration] = 306,
        [sym_module_declaration] = 306,
        [sym_while_statement] = 306,
        [sym_until_statement] = 306,
        [sym_if_statement] = 306,
        [sym_unless_statement] = 306,
        [sym__then_else_block] = 308,
        [sym__call] = 306,
        [sym__command] = 306,
        [sym__function_call] = 306,
        [sym__expression] = 306,
        [sym__argument] = 306,
        [sym__primary] = 306,
        [sym_scope_resolution_expression] = 306,
        [sym_subscript_expression] = 306,
        [sym__variable] = 306,
        [sym__terminator] = 308,
        [anon_sym_end] = 306,
        [anon_sym_undef] = 306,
        [anon_sym_alias] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_def] = 306,
        [anon_sym_LPAREN] = 306,
        [anon_sym_class] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_module] = 306,
        [anon_sym_then] = 308,
        [anon_sym_else] = 306,
        [anon_sym_super] = 306,
        [anon_sym_nil] = 306,
        [anon_sym_self] = 306,
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym_symbol] = 306,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 308,
    },
    [248] = {
        [sym__statement] = 306,
        [sym__declaration] = 306,
        [sym_method_declaration] = 306,
        [sym_class_declaration] = 306,
        [sym_module_declaration] = 306,
        [sym_while_statement] = 306,
        [sym_until_statement] = 306,
        [sym_if_statement] = 306,
        [sym_unless_statement] = 306,
        [sym__call] = 306,
        [sym__command] = 306,
        [sym__function_call] = 306,
        [sym__expression] = 306,
        [sym__argument] = 306,
        [sym__primary] = 306,
        [sym_scope_resolution_expression] = 306,
        [sym_subscript_expression] = 306,
        [sym__variable] = 306,
        [anon_sym_end] = 306,
        [anon_sym_undef] = 306,
        [anon_sym_alias] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_def] = 306,
        [anon_sym_LPAREN] = 306,
        [anon_sym_class] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_module] = 306,
        [anon_sym_else] = 306,
        [anon_sym_super] = 306,
        [anon_sym_nil] = 306,
        [anon_sym_self] = 306,
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym_symbol] = 306,
        [sym__line_break] = 48,
    },
    [249] = {
        [sym__terminator] = 766,
        [aux_sym_program_repeat1] = 768,
        [anon_sym_end] = 770,
        [anon_sym_if] = 772,
        [anon_sym_while] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_until] = 772,
        [anon_sym_else] = 774,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [250] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_else] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [251] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_else] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [252] = {
        [anon_sym_do] = 776,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [253] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_else] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [254] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 778,
        [anon_sym_else] = 74,
        [anon_sym_LBRACK] = 780,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [255] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_else] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [256] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [anon_sym_end] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [sym_comment] = 48,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [257] = {
        [sym__function_name] = 784,
        [anon_sym_PIPE] = 786,
        [anon_sym_STAR] = 786,
        [anon_sym_AMP] = 786,
        [anon_sym_LT] = 786,
        [sym_identifier] = 786,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 786,
        [anon_sym_CARET] = 786,
        [anon_sym_LT_EQ_GT] = 786,
        [anon_sym_EQ_EQ] = 786,
        [anon_sym_EQ_EQ_EQ] = 786,
        [anon_sym_EQ_TILDE] = 786,
        [anon_sym_GT] = 786,
        [anon_sym_GT_EQ] = 786,
        [anon_sym_LT_EQ] = 786,
        [anon_sym_PLUS] = 786,
        [anon_sym_DASH] = 786,
        [anon_sym_SLASH] = 786,
        [anon_sym_PERCENT] = 786,
        [anon_sym_STAR_STAR] = 786,
        [anon_sym_LT_LT] = 786,
        [anon_sym_GT_GT] = 786,
        [anon_sym_TILDE] = 786,
        [anon_sym_PLUS_AT] = 786,
        [anon_sym_DASH_AT] = 786,
        [anon_sym_LBRACK_RBRACK] = 786,
        [anon_sym_LBRACK_RBRACK_EQ] = 786,
        [sym__line_break] = 48,
    },
    [258] = {
        [sym__function_name] = 788,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [259] = {
        [sym_condition] = 790,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [260] = {
        [sym_condition] = 792,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [261] = {
        [sym_condition] = 794,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [262] = {
        [sym_condition] = 796,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [263] = {
        [sym__function_name] = 798,
        [anon_sym_PIPE] = 128,
        [anon_sym_STAR] = 128,
        [anon_sym_AMP] = 128,
        [anon_sym_LT] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 128,
        [anon_sym_CARET] = 128,
        [anon_sym_LT_EQ_GT] = 128,
        [anon_sym_EQ_EQ] = 128,
        [anon_sym_EQ_EQ_EQ] = 128,
        [anon_sym_EQ_TILDE] = 128,
        [anon_sym_GT] = 128,
        [anon_sym_GT_EQ] = 128,
        [anon_sym_LT_EQ] = 128,
        [anon_sym_PLUS] = 128,
        [anon_sym_DASH] = 128,
        [anon_sym_SLASH] = 128,
        [anon_sym_PERCENT] = 128,
        [anon_sym_STAR_STAR] = 128,
        [anon_sym_LT_LT] = 128,
        [anon_sym_GT_GT] = 128,
        [anon_sym_TILDE] = 128,
        [anon_sym_PLUS_AT] = 128,
        [anon_sym_DASH_AT] = 128,
        [anon_sym_LBRACK_RBRACK] = 128,
        [anon_sym_LBRACK_RBRACK_EQ] = 128,
        [sym__line_break] = 48,
    },
    [264] = {
        [sym__statement] = 800,
        [sym__declaration] = 132,
        [sym_method_declaration] = 134,
        [sym_class_declaration] = 134,
        [sym_module_declaration] = 134,
        [sym_while_statement] = 132,
        [sym_until_statement] = 132,
        [sym_if_statement] = 132,
        [sym_unless_statement] = 132,
        [sym__call] = 136,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 132,
        [sym__argument] = 138,
        [sym__primary] = 140,
        [sym_scope_resolution_expression] = 142,
        [sym_subscript_expression] = 142,
        [sym__variable] = 142,
        [anon_sym_undef] = 144,
        [anon_sym_alias] = 146,
        [anon_sym_if] = 148,
        [anon_sym_while] = 150,
        [anon_sym_unless] = 152,
        [anon_sym_until] = 154,
        [anon_sym_def] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 802,
        [anon_sym_class] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_module] = 166,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 48,
        [sym_symbol] = 138,
        [sym__line_break] = 48,
    },
    [265] = {
        [sym_identifier] = 804,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [266] = {
        [sym_identifier] = 806,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [267] = {
        [sym_identifier] = 808,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [268] = {
        [sym__statement] = 810,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 770,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [269] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 196,
        [anon_sym_end] = 196,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_else] = 196,
        [anon_sym_LBRACK] = 196,
        [sym_comment] = 48,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 196,
    },
    [270] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 812,
        [anon_sym_end] = 814,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [271] = {
        [sym__terminator] = 816,
        [aux_sym_program_repeat1] = 816,
        [anon_sym_end] = 816,
        [anon_sym_if] = 816,
        [anon_sym_while] = 816,
        [anon_sym_unless] = 816,
        [anon_sym_until] = 816,
        [sym_comment] = 48,
        [sym__line_break] = 816,
        [anon_sym_SEMI] = 816,
    },
    [272] = {
        [anon_sym_end] = 818,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [273] = {
        [sym__terminator] = 820,
        [aux_sym_program_repeat1] = 820,
        [anon_sym_end] = 820,
        [anon_sym_if] = 820,
        [anon_sym_while] = 820,
        [anon_sym_unless] = 820,
        [anon_sym_until] = 820,
        [sym_comment] = 48,
        [sym__line_break] = 820,
        [anon_sym_SEMI] = 820,
    },
    [274] = {
        [sym__terminator] = 822,
        [aux_sym_program_repeat1] = 822,
        [anon_sym_end] = 822,
        [anon_sym_if] = 822,
        [anon_sym_while] = 822,
        [anon_sym_unless] = 822,
        [anon_sym_until] = 822,
        [sym_comment] = 48,
        [sym__line_break] = 822,
        [anon_sym_SEMI] = 822,
    },
    [275] = {
        [sym__terminator] = 824,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [276] = {
        [sym__statement] = 826,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 828,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [277] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 830,
        [anon_sym_end] = 832,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [278] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [anon_sym_else] = 324,
        [sym_comment] = 48,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [279] = {
        [anon_sym_end] = 834,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [280] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [anon_sym_else] = 366,
        [sym_comment] = 48,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [281] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_else] = 372,
        [sym_comment] = 48,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [282] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_else] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [283] = {
        [sym__terminator] = 836,
        [anon_sym_LT] = 838,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [284] = {
        [sym__statement] = 840,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 842,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [285] = {
        [sym_identifier] = 844,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [286] = {
        [sym__terminator] = 846,
        [aux_sym_class_declaration_repeat1] = 848,
        [anon_sym_COLON_COLON] = 394,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [287] = {
        [sym__statement] = 850,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 852,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [288] = {
        [sym__terminator] = 854,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [289] = {
        [sym__statement] = 856,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 858,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [290] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 860,
        [anon_sym_end] = 862,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [291] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [anon_sym_end] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [292] = {
        [anon_sym_end] = 864,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [293] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [anon_sym_end] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [anon_sym_else] = 422,
        [sym_comment] = 48,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [294] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [anon_sym_else] = 424,
        [sym_comment] = 48,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [295] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 866,
        [anon_sym_end] = 858,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [296] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_end] = 428,
        [anon_sym_if] = 428,
        [anon_sym_while] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_until] = 428,
        [anon_sym_else] = 428,
        [sym_comment] = 48,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [297] = {
        [anon_sym_end] = 862,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [298] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 868,
        [anon_sym_end] = 870,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [299] = {
        [sym__terminator] = 434,
        [aux_sym_program_repeat1] = 434,
        [anon_sym_end] = 434,
        [anon_sym_if] = 434,
        [anon_sym_while] = 434,
        [anon_sym_unless] = 434,
        [anon_sym_until] = 434,
        [anon_sym_else] = 434,
        [sym_comment] = 48,
        [sym__line_break] = 434,
        [anon_sym_SEMI] = 434,
    },
    [300] = {
        [anon_sym_end] = 852,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [301] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_else] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [302] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 872,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [303] = {
        [sym__terminator] = 252,
        [aux_sym_program_repeat1] = 252,
        [anon_sym_end] = 252,
        [anon_sym_if] = 252,
        [anon_sym_while] = 252,
        [anon_sym_unless] = 252,
        [anon_sym_until] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_else] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 252,
        [anon_sym_SEMI] = 252,
    },
    [304] = {
        [anon_sym_RPAREN] = 876,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [305] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_else] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [306] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_else] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [307] = {
        [sym_argument_list] = 878,
        [sym__terminator] = 880,
        [anon_sym_LPAREN] = 882,
        [anon_sym_STAR] = 460,
        [anon_sym_AMP] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [308] = {
        [sym__terminator] = 884,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [309] = {
        [sym__statement] = 886,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 888,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [310] = {
        [sym_argument_list] = 890,
        [anon_sym_RPAREN] = 884,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [311] = {
        [anon_sym_RPAREN] = 892,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [312] = {
        [sym__statement] = 894,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 896,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [313] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 898,
        [anon_sym_end] = 900,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [314] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [anon_sym_end] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [anon_sym_else] = 536,
        [sym_comment] = 48,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [315] = {
        [anon_sym_end] = 902,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [316] = {
        [sym__terminator] = 540,
        [aux_sym_program_repeat1] = 540,
        [anon_sym_end] = 540,
        [anon_sym_if] = 540,
        [anon_sym_while] = 540,
        [anon_sym_unless] = 540,
        [anon_sym_until] = 540,
        [anon_sym_else] = 540,
        [sym_comment] = 48,
        [sym__line_break] = 540,
        [anon_sym_SEMI] = 540,
    },
    [317] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [anon_sym_end] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [anon_sym_else] = 542,
        [sym_comment] = 48,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [318] = {
        [sym__statement] = 904,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 900,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [319] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 906,
        [anon_sym_end] = 902,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [320] = {
        [anon_sym_end] = 908,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [321] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [anon_sym_else] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [322] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 910,
        [anon_sym_end] = 896,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [323] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [anon_sym_else] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [324] = {
        [anon_sym_end] = 900,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [325] = {
        [sym__statement_block] = 912,
        [sym__do_block] = 914,
        [sym__terminator] = 916,
        [anon_sym_do] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [326] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_else] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [327] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [anon_sym_end] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [anon_sym_else] = 652,
        [sym_comment] = 48,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [328] = {
        [sym__statement] = 920,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 922,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [329] = {
        [sym__statement] = 924,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 926,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [330] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 928,
        [anon_sym_end] = 930,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [331] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [anon_sym_else] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [332] = {
        [anon_sym_end] = 932,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [333] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_end] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [anon_sym_else] = 670,
        [sym_comment] = 48,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [334] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [anon_sym_end] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [anon_sym_else] = 672,
        [sym_comment] = 48,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [335] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 934,
        [anon_sym_end] = 936,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [336] = {
        [sym__terminator] = 678,
        [aux_sym_program_repeat1] = 678,
        [anon_sym_end] = 678,
        [anon_sym_if] = 678,
        [anon_sym_while] = 678,
        [anon_sym_unless] = 678,
        [anon_sym_until] = 678,
        [anon_sym_else] = 678,
        [sym_comment] = 48,
        [sym__line_break] = 678,
        [anon_sym_SEMI] = 678,
    },
    [337] = {
        [anon_sym_end] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [338] = {
        [sym__terminator] = 682,
        [aux_sym_program_repeat1] = 682,
        [anon_sym_end] = 682,
        [anon_sym_if] = 682,
        [anon_sym_while] = 682,
        [anon_sym_unless] = 682,
        [anon_sym_until] = 682,
        [anon_sym_else] = 682,
        [sym_comment] = 48,
        [sym__line_break] = 682,
        [anon_sym_SEMI] = 682,
    },
    [339] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [anon_sym_else] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [340] = {
        [sym__then_else_block] = 940,
        [sym__terminator] = 942,
        [anon_sym_then] = 942,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [341] = {
        [sym__terminator] = 722,
        [aux_sym_program_repeat1] = 722,
        [anon_sym_end] = 722,
        [anon_sym_if] = 722,
        [anon_sym_while] = 722,
        [anon_sym_unless] = 722,
        [anon_sym_until] = 722,
        [anon_sym_else] = 722,
        [sym_comment] = 48,
        [sym__line_break] = 722,
        [anon_sym_SEMI] = 722,
    },
    [342] = {
        [sym__statement] = 944,
        [sym__declaration] = 726,
        [sym_method_declaration] = 728,
        [sym_class_declaration] = 728,
        [sym_module_declaration] = 728,
        [sym_while_statement] = 726,
        [sym_until_statement] = 726,
        [sym_if_statement] = 726,
        [sym_unless_statement] = 726,
        [sym__call] = 730,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 726,
        [sym__argument] = 732,
        [sym__primary] = 734,
        [sym_scope_resolution_expression] = 736,
        [sym_subscript_expression] = 736,
        [sym__variable] = 736,
        [anon_sym_end] = 946,
        [anon_sym_undef] = 740,
        [anon_sym_alias] = 742,
        [anon_sym_if] = 744,
        [anon_sym_while] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 750,
        [anon_sym_def] = 752,
        [anon_sym_LPAREN] = 754,
        [anon_sym_class] = 756,
        [anon_sym_COLON_COLON] = 758,
        [anon_sym_module] = 760,
        [anon_sym_else] = 948,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 764,
        [anon_sym_self] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 48,
        [sym_symbol] = 732,
        [sym__line_break] = 48,
    },
    [343] = {
        [sym__terminator] = 766,
        [aux_sym_program_repeat1] = 950,
        [anon_sym_end] = 952,
        [anon_sym_if] = 772,
        [anon_sym_while] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_until] = 772,
        [anon_sym_else] = 954,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [344] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [anon_sym_end] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [anon_sym_else] = 782,
        [sym_comment] = 48,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [345] = {
        [sym__statement] = 956,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 952,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [346] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 958,
        [anon_sym_end] = 960,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [347] = {
        [sym__terminator] = 816,
        [aux_sym_program_repeat1] = 816,
        [anon_sym_end] = 816,
        [anon_sym_if] = 816,
        [anon_sym_while] = 816,
        [anon_sym_unless] = 816,
        [anon_sym_until] = 816,
        [anon_sym_else] = 816,
        [sym_comment] = 48,
        [sym__line_break] = 816,
        [anon_sym_SEMI] = 816,
    },
    [348] = {
        [anon_sym_end] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [349] = {
        [sym__terminator] = 820,
        [aux_sym_program_repeat1] = 820,
        [anon_sym_end] = 820,
        [anon_sym_if] = 820,
        [anon_sym_while] = 820,
        [anon_sym_unless] = 820,
        [anon_sym_until] = 820,
        [anon_sym_else] = 820,
        [sym_comment] = 48,
        [sym__line_break] = 820,
        [anon_sym_SEMI] = 820,
    },
    [350] = {
        [sym__terminator] = 822,
        [aux_sym_program_repeat1] = 822,
        [anon_sym_end] = 822,
        [anon_sym_if] = 822,
        [anon_sym_while] = 822,
        [anon_sym_unless] = 822,
        [anon_sym_until] = 822,
        [anon_sym_else] = 822,
        [sym_comment] = 48,
        [sym__line_break] = 822,
        [anon_sym_SEMI] = 822,
    },
    [351] = {
        [sym__statement] = 964,
        [sym__declaration] = 726,
        [sym_method_declaration] = 728,
        [sym_class_declaration] = 728,
        [sym_module_declaration] = 728,
        [sym_while_statement] = 726,
        [sym_until_statement] = 726,
        [sym_if_statement] = 726,
        [sym_unless_statement] = 726,
        [sym__call] = 730,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 726,
        [sym__argument] = 732,
        [sym__primary] = 734,
        [sym_scope_resolution_expression] = 736,
        [sym_subscript_expression] = 736,
        [sym__variable] = 736,
        [anon_sym_undef] = 740,
        [anon_sym_alias] = 742,
        [anon_sym_if] = 744,
        [anon_sym_while] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 750,
        [anon_sym_def] = 752,
        [anon_sym_LPAREN] = 754,
        [anon_sym_class] = 756,
        [anon_sym_COLON_COLON] = 758,
        [anon_sym_module] = 760,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 764,
        [anon_sym_self] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 48,
        [sym_symbol] = 732,
        [sym__line_break] = 48,
    },
    [352] = {
        [anon_sym_end] = 960,
        [anon_sym_else] = 966,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [353] = {
        [sym__expression] = 968,
        [sym__argument] = 732,
        [sym__primary] = 734,
        [sym_scope_resolution_expression] = 736,
        [sym_subscript_expression] = 736,
        [sym__variable] = 736,
        [anon_sym_LPAREN] = 754,
        [anon_sym_COLON_COLON] = 758,
        [anon_sym_nil] = 764,
        [anon_sym_self] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 48,
        [sym_symbol] = 732,
        [sym__line_break] = 48,
    },
    [354] = {
        [sym__statement] = 970,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 960,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [355] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 972,
        [anon_sym_end] = 962,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [356] = {
        [anon_sym_end] = 974,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [357] = {
        [sym__terminator] = 976,
        [aux_sym_program_repeat1] = 976,
        [anon_sym_end] = 976,
        [anon_sym_if] = 976,
        [anon_sym_while] = 976,
        [anon_sym_unless] = 976,
        [anon_sym_until] = 976,
        [anon_sym_else] = 976,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 976,
    },
    [358] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [anon_sym_else] = 370,
        [sym_comment] = 48,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [359] = {
        [sym__statement] = 978,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 962,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [360] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 980,
        [anon_sym_end] = 974,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [361] = {
        [anon_sym_end] = 982,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [362] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [anon_sym_end] = 984,
        [anon_sym_if] = 984,
        [anon_sym_while] = 984,
        [anon_sym_unless] = 984,
        [anon_sym_until] = 984,
        [anon_sym_else] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [363] = {
        [sym__terminator] = 766,
        [aux_sym_program_repeat1] = 986,
        [anon_sym_end] = 376,
        [anon_sym_if] = 772,
        [anon_sym_while] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_until] = 772,
        [anon_sym_else] = 376,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [364] = {
        [anon_sym_end] = 378,
        [anon_sym_else] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [365] = {
        [sym__statement_block] = 988,
        [sym__do_block] = 914,
        [sym__terminator] = 916,
        [anon_sym_do] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [366] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_end] = 990,
        [anon_sym_if] = 990,
        [anon_sym_while] = 990,
        [anon_sym_unless] = 990,
        [anon_sym_until] = 990,
        [anon_sym_else] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [367] = {
        [sym__then_else_block] = 992,
        [sym__terminator] = 942,
        [anon_sym_then] = 942,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [368] = {
        [sym__terminator] = 994,
        [aux_sym_program_repeat1] = 994,
        [anon_sym_end] = 994,
        [anon_sym_if] = 994,
        [anon_sym_while] = 994,
        [anon_sym_unless] = 994,
        [anon_sym_until] = 994,
        [anon_sym_else] = 994,
        [sym_comment] = 48,
        [sym__line_break] = 994,
        [anon_sym_SEMI] = 994,
    },
    [369] = {
        [sym__function_name] = 968,
        [anon_sym_PIPE] = 786,
        [anon_sym_STAR] = 786,
        [anon_sym_AMP] = 786,
        [anon_sym_LT] = 786,
        [sym_identifier] = 786,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 786,
        [anon_sym_CARET] = 786,
        [anon_sym_LT_EQ_GT] = 786,
        [anon_sym_EQ_EQ] = 786,
        [anon_sym_EQ_EQ_EQ] = 786,
        [anon_sym_EQ_TILDE] = 786,
        [anon_sym_GT] = 786,
        [anon_sym_GT_EQ] = 786,
        [anon_sym_LT_EQ] = 786,
        [anon_sym_PLUS] = 786,
        [anon_sym_DASH] = 786,
        [anon_sym_SLASH] = 786,
        [anon_sym_PERCENT] = 786,
        [anon_sym_STAR_STAR] = 786,
        [anon_sym_LT_LT] = 786,
        [anon_sym_GT_GT] = 786,
        [anon_sym_TILDE] = 786,
        [anon_sym_PLUS_AT] = 786,
        [anon_sym_DASH_AT] = 786,
        [anon_sym_LBRACK_RBRACK] = 786,
        [anon_sym_LBRACK_RBRACK_EQ] = 786,
        [sym__line_break] = 48,
    },
    [370] = {
        [sym__function_name] = 464,
        [anon_sym_PIPE] = 464,
        [anon_sym_STAR] = 464,
        [anon_sym_AMP] = 464,
        [anon_sym_LT] = 464,
        [sym_identifier] = 464,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 464,
        [anon_sym_CARET] = 464,
        [anon_sym_LT_EQ_GT] = 464,
        [anon_sym_EQ_EQ] = 464,
        [anon_sym_EQ_EQ_EQ] = 464,
        [anon_sym_EQ_TILDE] = 464,
        [anon_sym_GT] = 464,
        [anon_sym_GT_EQ] = 464,
        [anon_sym_LT_EQ] = 464,
        [anon_sym_PLUS] = 464,
        [anon_sym_DASH] = 464,
        [anon_sym_SLASH] = 464,
        [anon_sym_PERCENT] = 464,
        [anon_sym_STAR_STAR] = 464,
        [anon_sym_LT_LT] = 464,
        [anon_sym_GT_GT] = 464,
        [anon_sym_TILDE] = 464,
        [anon_sym_PLUS_AT] = 464,
        [anon_sym_DASH_AT] = 464,
        [anon_sym_LBRACK_RBRACK] = 464,
        [anon_sym_LBRACK_RBRACK_EQ] = 464,
        [sym__line_break] = 48,
    },
    [371] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_else] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [372] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [anon_sym_end] = 996,
        [anon_sym_if] = 996,
        [anon_sym_while] = 996,
        [anon_sym_unless] = 996,
        [anon_sym_until] = 996,
        [anon_sym_else] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [373] = {
        [sym_identifier] = 998,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [374] = {
        [sym__argument] = 1000,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 1002,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [375] = {
        [aux_sym__call_arguments_repeat1] = 1004,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 1006,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [376] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_else] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [377] = {
        [anon_sym_RBRACK] = 1008,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [378] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 636,
        [anon_sym_if] = 636,
        [anon_sym_while] = 636,
        [anon_sym_unless] = 636,
        [anon_sym_until] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_else] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [379] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_end] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_else] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [380] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_else] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [381] = {
        [sym__statement] = 1010,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_PIPE] = 1012,
        [anon_sym_end] = 968,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [382] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1014,
        [anon_sym_end] = 1016,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [383] = {
        [sym__statement] = 1018,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1016,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [384] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1020,
        [anon_sym_end] = 1022,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [385] = {
        [sym__terminator] = 1024,
        [aux_sym_program_repeat1] = 1024,
        [anon_sym_end] = 1024,
        [anon_sym_if] = 1024,
        [anon_sym_while] = 1024,
        [anon_sym_unless] = 1024,
        [anon_sym_until] = 1024,
        [anon_sym_else] = 1024,
        [sym_comment] = 48,
        [sym__line_break] = 1024,
        [anon_sym_SEMI] = 1024,
    },
    [386] = {
        [anon_sym_end] = 1026,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [387] = {
        [sym__terminator] = 1028,
        [aux_sym_program_repeat1] = 1028,
        [anon_sym_end] = 1028,
        [anon_sym_if] = 1028,
        [anon_sym_while] = 1028,
        [anon_sym_unless] = 1028,
        [anon_sym_until] = 1028,
        [anon_sym_else] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 1028,
        [anon_sym_SEMI] = 1028,
    },
    [388] = {
        [sym__terminator] = 1030,
        [aux_sym_program_repeat1] = 1030,
        [anon_sym_end] = 1030,
        [anon_sym_if] = 1030,
        [anon_sym_while] = 1030,
        [anon_sym_unless] = 1030,
        [anon_sym_until] = 1030,
        [anon_sym_else] = 1030,
        [sym_comment] = 48,
        [sym__line_break] = 1030,
        [anon_sym_SEMI] = 1030,
    },
    [389] = {
        [anon_sym_end] = 1022,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [390] = {
        [anon_sym_end] = 814,
        [anon_sym_else] = 1032,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [391] = {
        [sym__statement] = 1034,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 814,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [392] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1036,
        [anon_sym_end] = 818,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [393] = {
        [anon_sym_end] = 1038,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [394] = {
        [sym__terminator] = 976,
        [aux_sym_program_repeat1] = 976,
        [anon_sym_end] = 976,
        [anon_sym_if] = 976,
        [anon_sym_while] = 976,
        [anon_sym_unless] = 976,
        [anon_sym_until] = 976,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 976,
    },
    [395] = {
        [sym__statement] = 1040,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 818,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [396] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1042,
        [anon_sym_end] = 1038,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [397] = {
        [anon_sym_end] = 1044,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [398] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [anon_sym_end] = 984,
        [anon_sym_if] = 984,
        [anon_sym_while] = 984,
        [anon_sym_unless] = 984,
        [anon_sym_until] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [399] = {
        [sym__statement_block] = 1046,
        [sym__do_block] = 558,
        [sym__terminator] = 560,
        [anon_sym_do] = 562,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [400] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_end] = 990,
        [anon_sym_if] = 990,
        [anon_sym_while] = 990,
        [anon_sym_unless] = 990,
        [anon_sym_until] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [401] = {
        [sym__then_else_block] = 1048,
        [sym__terminator] = 688,
        [anon_sym_then] = 688,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [402] = {
        [sym__terminator] = 994,
        [aux_sym_program_repeat1] = 994,
        [anon_sym_end] = 994,
        [anon_sym_if] = 994,
        [anon_sym_while] = 994,
        [anon_sym_unless] = 994,
        [anon_sym_until] = 994,
        [sym_comment] = 48,
        [sym__line_break] = 994,
        [anon_sym_SEMI] = 994,
    },
    [403] = {
        [sym__function_name] = 368,
        [anon_sym_PIPE] = 328,
        [anon_sym_STAR] = 328,
        [anon_sym_AMP] = 328,
        [anon_sym_LT] = 328,
        [sym_identifier] = 328,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 328,
        [anon_sym_CARET] = 328,
        [anon_sym_LT_EQ_GT] = 328,
        [anon_sym_EQ_EQ] = 328,
        [anon_sym_EQ_EQ_EQ] = 328,
        [anon_sym_EQ_TILDE] = 328,
        [anon_sym_GT] = 328,
        [anon_sym_GT_EQ] = 328,
        [anon_sym_LT_EQ] = 328,
        [anon_sym_PLUS] = 328,
        [anon_sym_DASH] = 328,
        [anon_sym_SLASH] = 328,
        [anon_sym_PERCENT] = 328,
        [anon_sym_STAR_STAR] = 328,
        [anon_sym_LT_LT] = 328,
        [anon_sym_GT_GT] = 328,
        [anon_sym_TILDE] = 328,
        [anon_sym_PLUS_AT] = 328,
        [anon_sym_DASH_AT] = 328,
        [anon_sym_LBRACK_RBRACK] = 328,
        [anon_sym_LBRACK_RBRACK_EQ] = 328,
        [sym__line_break] = 48,
    },
    [404] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [405] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [anon_sym_end] = 996,
        [anon_sym_if] = 996,
        [anon_sym_while] = 996,
        [anon_sym_unless] = 996,
        [anon_sym_until] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [406] = {
        [sym_identifier] = 1050,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [407] = {
        [sym__argument] = 1052,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 1054,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [408] = {
        [aux_sym__call_arguments_repeat1] = 1056,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 1058,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [409] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [410] = {
        [anon_sym_RBRACK] = 1060,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [411] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 636,
        [anon_sym_if] = 636,
        [anon_sym_while] = 636,
        [anon_sym_unless] = 636,
        [anon_sym_until] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [412] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_end] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [413] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [414] = {
        [sym__statement] = 1062,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_PIPE] = 1064,
        [anon_sym_end] = 368,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [415] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1066,
        [anon_sym_end] = 1068,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [416] = {
        [sym__statement] = 1070,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1068,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [417] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1072,
        [anon_sym_end] = 1074,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [418] = {
        [sym__terminator] = 1024,
        [aux_sym_program_repeat1] = 1024,
        [anon_sym_end] = 1024,
        [anon_sym_if] = 1024,
        [anon_sym_while] = 1024,
        [anon_sym_unless] = 1024,
        [anon_sym_until] = 1024,
        [sym_comment] = 48,
        [sym__line_break] = 1024,
        [anon_sym_SEMI] = 1024,
    },
    [419] = {
        [anon_sym_end] = 1076,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [420] = {
        [sym__terminator] = 1028,
        [aux_sym_program_repeat1] = 1028,
        [anon_sym_end] = 1028,
        [anon_sym_if] = 1028,
        [anon_sym_while] = 1028,
        [anon_sym_unless] = 1028,
        [anon_sym_until] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 1028,
        [anon_sym_SEMI] = 1028,
    },
    [421] = {
        [sym__terminator] = 1030,
        [aux_sym_program_repeat1] = 1030,
        [anon_sym_end] = 1030,
        [anon_sym_if] = 1030,
        [anon_sym_while] = 1030,
        [anon_sym_unless] = 1030,
        [anon_sym_until] = 1030,
        [sym_comment] = 48,
        [sym__line_break] = 1030,
        [anon_sym_SEMI] = 1030,
    },
    [422] = {
        [anon_sym_end] = 1074,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [423] = {
        [anon_sym_end] = 1078,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [424] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [anon_sym_RPAREN] = 366,
        [sym_comment] = 48,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [425] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_RPAREN] = 372,
        [sym_comment] = 48,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [426] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [427] = {
        [sym__terminator] = 1080,
        [anon_sym_LT] = 1082,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [428] = {
        [sym__statement] = 1084,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1086,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [429] = {
        [sym_identifier] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [430] = {
        [sym__terminator] = 1090,
        [aux_sym_class_declaration_repeat1] = 1092,
        [anon_sym_COLON_COLON] = 394,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [431] = {
        [sym__statement] = 1094,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1096,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [432] = {
        [sym__terminator] = 1098,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [433] = {
        [sym__statement] = 1100,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1102,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [434] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1104,
        [anon_sym_end] = 1106,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [435] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [anon_sym_RPAREN] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [436] = {
        [anon_sym_end] = 1108,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [437] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [anon_sym_RPAREN] = 422,
        [sym_comment] = 48,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [438] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [anon_sym_RPAREN] = 424,
        [sym_comment] = 48,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [439] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1110,
        [anon_sym_end] = 1102,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [440] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_if] = 428,
        [anon_sym_while] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_until] = 428,
        [anon_sym_RPAREN] = 428,
        [sym_comment] = 48,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [441] = {
        [anon_sym_end] = 1106,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [442] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_end] = 1114,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [443] = {
        [sym__terminator] = 434,
        [aux_sym_program_repeat1] = 434,
        [anon_sym_if] = 434,
        [anon_sym_while] = 434,
        [anon_sym_unless] = 434,
        [anon_sym_until] = 434,
        [anon_sym_RPAREN] = 434,
        [sym_comment] = 48,
        [sym__line_break] = 434,
        [anon_sym_SEMI] = 434,
    },
    [444] = {
        [anon_sym_end] = 1096,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [445] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_RPAREN] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [446] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 1116,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 1118,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [447] = {
        [sym__terminator] = 252,
        [aux_sym_program_repeat1] = 252,
        [anon_sym_if] = 252,
        [anon_sym_while] = 252,
        [anon_sym_unless] = 252,
        [anon_sym_until] = 252,
        [anon_sym_RPAREN] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 252,
        [anon_sym_SEMI] = 252,
    },
    [448] = {
        [anon_sym_RPAREN] = 1120,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [449] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_RPAREN] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [450] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_RPAREN] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [451] = {
        [sym_argument_list] = 1122,
        [sym__terminator] = 1124,
        [anon_sym_LPAREN] = 1126,
        [anon_sym_STAR] = 460,
        [anon_sym_AMP] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [452] = {
        [sym__terminator] = 1128,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [453] = {
        [sym__statement] = 1130,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1132,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [454] = {
        [sym_argument_list] = 1134,
        [anon_sym_RPAREN] = 1128,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [455] = {
        [anon_sym_RPAREN] = 1136,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [456] = {
        [sym__statement] = 1138,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1140,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [457] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1142,
        [anon_sym_end] = 1144,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [458] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [anon_sym_RPAREN] = 536,
        [sym_comment] = 48,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [459] = {
        [anon_sym_end] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [460] = {
        [sym__terminator] = 540,
        [aux_sym_program_repeat1] = 540,
        [anon_sym_if] = 540,
        [anon_sym_while] = 540,
        [anon_sym_unless] = 540,
        [anon_sym_until] = 540,
        [anon_sym_RPAREN] = 540,
        [sym_comment] = 48,
        [sym__line_break] = 540,
        [anon_sym_SEMI] = 540,
    },
    [461] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [anon_sym_RPAREN] = 542,
        [sym_comment] = 48,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [462] = {
        [sym__statement] = 1148,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1144,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [463] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1150,
        [anon_sym_end] = 1146,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [464] = {
        [anon_sym_end] = 1152,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [465] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [anon_sym_RPAREN] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [466] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1154,
        [anon_sym_end] = 1140,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [467] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [anon_sym_RPAREN] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [468] = {
        [anon_sym_end] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [469] = {
        [sym__statement_block] = 1156,
        [sym__do_block] = 1158,
        [sym__terminator] = 1160,
        [anon_sym_do] = 1162,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [470] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_RPAREN] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [471] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [anon_sym_RPAREN] = 652,
        [sym_comment] = 48,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [472] = {
        [sym__statement] = 1164,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1166,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [473] = {
        [sym__statement] = 1168,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1170,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [474] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1172,
        [anon_sym_end] = 1174,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [475] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [anon_sym_RPAREN] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [476] = {
        [anon_sym_end] = 1176,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [477] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [anon_sym_RPAREN] = 670,
        [sym_comment] = 48,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [478] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [anon_sym_RPAREN] = 672,
        [sym_comment] = 48,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [479] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1178,
        [anon_sym_end] = 1180,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [480] = {
        [sym__terminator] = 678,
        [aux_sym_program_repeat1] = 678,
        [anon_sym_if] = 678,
        [anon_sym_while] = 678,
        [anon_sym_unless] = 678,
        [anon_sym_until] = 678,
        [anon_sym_RPAREN] = 678,
        [sym_comment] = 48,
        [sym__line_break] = 678,
        [anon_sym_SEMI] = 678,
    },
    [481] = {
        [anon_sym_end] = 1182,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [482] = {
        [sym__terminator] = 682,
        [aux_sym_program_repeat1] = 682,
        [anon_sym_if] = 682,
        [anon_sym_while] = 682,
        [anon_sym_unless] = 682,
        [anon_sym_until] = 682,
        [anon_sym_RPAREN] = 682,
        [sym_comment] = 48,
        [sym__line_break] = 682,
        [anon_sym_SEMI] = 682,
    },
    [483] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [anon_sym_RPAREN] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [484] = {
        [sym__then_else_block] = 1184,
        [sym__terminator] = 1186,
        [anon_sym_then] = 1186,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [485] = {
        [sym__terminator] = 722,
        [aux_sym_program_repeat1] = 722,
        [anon_sym_if] = 722,
        [anon_sym_while] = 722,
        [anon_sym_unless] = 722,
        [anon_sym_until] = 722,
        [anon_sym_RPAREN] = 722,
        [sym_comment] = 48,
        [sym__line_break] = 722,
        [anon_sym_SEMI] = 722,
    },
    [486] = {
        [sym__statement] = 1188,
        [sym__declaration] = 726,
        [sym_method_declaration] = 728,
        [sym_class_declaration] = 728,
        [sym_module_declaration] = 728,
        [sym_while_statement] = 726,
        [sym_until_statement] = 726,
        [sym_if_statement] = 726,
        [sym_unless_statement] = 726,
        [sym__call] = 730,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 726,
        [sym__argument] = 732,
        [sym__primary] = 734,
        [sym_scope_resolution_expression] = 736,
        [sym_subscript_expression] = 736,
        [sym__variable] = 736,
        [anon_sym_end] = 1190,
        [anon_sym_undef] = 740,
        [anon_sym_alias] = 742,
        [anon_sym_if] = 744,
        [anon_sym_while] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 750,
        [anon_sym_def] = 752,
        [anon_sym_LPAREN] = 754,
        [anon_sym_class] = 756,
        [anon_sym_COLON_COLON] = 758,
        [anon_sym_module] = 760,
        [anon_sym_else] = 1192,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 764,
        [anon_sym_self] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 48,
        [sym_symbol] = 732,
        [sym__line_break] = 48,
    },
    [487] = {
        [sym__terminator] = 766,
        [aux_sym_program_repeat1] = 1194,
        [anon_sym_end] = 1196,
        [anon_sym_if] = 772,
        [anon_sym_while] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_until] = 772,
        [anon_sym_else] = 1198,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [488] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [anon_sym_RPAREN] = 782,
        [sym_comment] = 48,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [489] = {
        [sym__statement] = 1200,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1196,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [490] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1202,
        [anon_sym_end] = 1204,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [491] = {
        [sym__terminator] = 816,
        [aux_sym_program_repeat1] = 816,
        [anon_sym_if] = 816,
        [anon_sym_while] = 816,
        [anon_sym_unless] = 816,
        [anon_sym_until] = 816,
        [anon_sym_RPAREN] = 816,
        [sym_comment] = 48,
        [sym__line_break] = 816,
        [anon_sym_SEMI] = 816,
    },
    [492] = {
        [anon_sym_end] = 1206,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [493] = {
        [sym__terminator] = 820,
        [aux_sym_program_repeat1] = 820,
        [anon_sym_if] = 820,
        [anon_sym_while] = 820,
        [anon_sym_unless] = 820,
        [anon_sym_until] = 820,
        [anon_sym_RPAREN] = 820,
        [sym_comment] = 48,
        [sym__line_break] = 820,
        [anon_sym_SEMI] = 820,
    },
    [494] = {
        [sym__terminator] = 822,
        [aux_sym_program_repeat1] = 822,
        [anon_sym_if] = 822,
        [anon_sym_while] = 822,
        [anon_sym_unless] = 822,
        [anon_sym_until] = 822,
        [anon_sym_RPAREN] = 822,
        [sym_comment] = 48,
        [sym__line_break] = 822,
        [anon_sym_SEMI] = 822,
    },
    [495] = {
        [anon_sym_end] = 1204,
        [anon_sym_else] = 1208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [496] = {
        [sym__statement] = 1210,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1204,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [497] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1212,
        [anon_sym_end] = 1206,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [498] = {
        [anon_sym_end] = 1214,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [499] = {
        [sym__terminator] = 976,
        [aux_sym_program_repeat1] = 976,
        [anon_sym_if] = 976,
        [anon_sym_while] = 976,
        [anon_sym_unless] = 976,
        [anon_sym_until] = 976,
        [anon_sym_RPAREN] = 976,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 976,
    },
    [500] = {
        [sym__statement] = 1216,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1206,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [501] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1218,
        [anon_sym_end] = 1214,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [502] = {
        [anon_sym_end] = 1220,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [503] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [anon_sym_if] = 984,
        [anon_sym_while] = 984,
        [anon_sym_unless] = 984,
        [anon_sym_until] = 984,
        [anon_sym_RPAREN] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [504] = {
        [sym__statement_block] = 1222,
        [sym__do_block] = 1158,
        [sym__terminator] = 1160,
        [anon_sym_do] = 1162,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [505] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_if] = 990,
        [anon_sym_while] = 990,
        [anon_sym_unless] = 990,
        [anon_sym_until] = 990,
        [anon_sym_RPAREN] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [506] = {
        [sym__then_else_block] = 1224,
        [sym__terminator] = 1186,
        [anon_sym_then] = 1186,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [507] = {
        [sym__terminator] = 994,
        [aux_sym_program_repeat1] = 994,
        [anon_sym_if] = 994,
        [anon_sym_while] = 994,
        [anon_sym_unless] = 994,
        [anon_sym_until] = 994,
        [anon_sym_RPAREN] = 994,
        [sym_comment] = 48,
        [sym__line_break] = 994,
        [anon_sym_SEMI] = 994,
    },
    [508] = {
        [sym__function_name] = 446,
        [anon_sym_PIPE] = 234,
        [anon_sym_STAR] = 234,
        [anon_sym_AMP] = 234,
        [anon_sym_LT] = 234,
        [sym_identifier] = 234,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 234,
        [anon_sym_CARET] = 234,
        [anon_sym_LT_EQ_GT] = 234,
        [anon_sym_EQ_EQ] = 234,
        [anon_sym_EQ_EQ_EQ] = 234,
        [anon_sym_EQ_TILDE] = 234,
        [anon_sym_GT] = 234,
        [anon_sym_GT_EQ] = 234,
        [anon_sym_LT_EQ] = 234,
        [anon_sym_PLUS] = 234,
        [anon_sym_DASH] = 234,
        [anon_sym_SLASH] = 234,
        [anon_sym_PERCENT] = 234,
        [anon_sym_STAR_STAR] = 234,
        [anon_sym_LT_LT] = 234,
        [anon_sym_GT_GT] = 234,
        [anon_sym_TILDE] = 234,
        [anon_sym_PLUS_AT] = 234,
        [anon_sym_DASH_AT] = 234,
        [anon_sym_LBRACK_RBRACK] = 234,
        [anon_sym_LBRACK_RBRACK_EQ] = 234,
        [sym__line_break] = 48,
    },
    [509] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_RPAREN] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [510] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [anon_sym_if] = 996,
        [anon_sym_while] = 996,
        [anon_sym_unless] = 996,
        [anon_sym_until] = 996,
        [anon_sym_RPAREN] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [511] = {
        [sym_identifier] = 1226,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [512] = {
        [sym__argument] = 1228,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 1230,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [513] = {
        [aux_sym__call_arguments_repeat1] = 1232,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 1234,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [514] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_RPAREN] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [515] = {
        [anon_sym_RBRACK] = 1236,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [516] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_if] = 636,
        [anon_sym_while] = 636,
        [anon_sym_unless] = 636,
        [anon_sym_until] = 636,
        [anon_sym_RPAREN] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [517] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [anon_sym_RPAREN] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [518] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [anon_sym_RPAREN] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [519] = {
        [sym__statement] = 1238,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_PIPE] = 1240,
        [anon_sym_end] = 446,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [520] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1242,
        [anon_sym_end] = 1244,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [521] = {
        [sym__statement] = 1246,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1244,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [522] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1248,
        [anon_sym_end] = 1250,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [523] = {
        [sym__terminator] = 1024,
        [aux_sym_program_repeat1] = 1024,
        [anon_sym_if] = 1024,
        [anon_sym_while] = 1024,
        [anon_sym_unless] = 1024,
        [anon_sym_until] = 1024,
        [anon_sym_RPAREN] = 1024,
        [sym_comment] = 48,
        [sym__line_break] = 1024,
        [anon_sym_SEMI] = 1024,
    },
    [524] = {
        [anon_sym_end] = 1252,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [525] = {
        [sym__terminator] = 1028,
        [aux_sym_program_repeat1] = 1028,
        [anon_sym_if] = 1028,
        [anon_sym_while] = 1028,
        [anon_sym_unless] = 1028,
        [anon_sym_until] = 1028,
        [anon_sym_RPAREN] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 1028,
        [anon_sym_SEMI] = 1028,
    },
    [526] = {
        [sym__terminator] = 1030,
        [aux_sym_program_repeat1] = 1030,
        [anon_sym_if] = 1030,
        [anon_sym_while] = 1030,
        [anon_sym_unless] = 1030,
        [anon_sym_until] = 1030,
        [anon_sym_RPAREN] = 1030,
        [sym_comment] = 48,
        [sym__line_break] = 1030,
        [anon_sym_SEMI] = 1030,
    },
    [527] = {
        [anon_sym_end] = 1250,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [528] = {
        [anon_sym_RPAREN] = 1254,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [529] = {
        [aux_sym__call_arguments_repeat1] = 448,
        [anon_sym_do] = 448,
        [anon_sym_COMMA] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [530] = {
        [aux_sym__call_arguments_repeat1] = 450,
        [anon_sym_do] = 450,
        [anon_sym_COMMA] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [531] = {
        [sym_identifier] = 1256,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [532] = {
        [sym__argument] = 1258,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 1260,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [533] = {
        [aux_sym__call_arguments_repeat1] = 1262,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 1264,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [534] = {
        [aux_sym__call_arguments_repeat1] = 614,
        [anon_sym_do] = 614,
        [anon_sym_COMMA] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [535] = {
        [anon_sym_RBRACK] = 1266,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [536] = {
        [aux_sym__call_arguments_repeat1] = 636,
        [anon_sym_do] = 636,
        [anon_sym_COMMA] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [537] = {
        [aux_sym__call_arguments_repeat1] = 644,
        [anon_sym_do] = 644,
        [anon_sym_COMMA] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [538] = {
        [aux_sym__call_arguments_repeat1] = 646,
        [anon_sym_do] = 646,
        [anon_sym_COMMA] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [539] = {
        [anon_sym_do] = 1268,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [540] = {
        [sym__argument] = 1270,
        [sym__primary] = 182,
        [sym_scope_resolution_expression] = 184,
        [sym_subscript_expression] = 184,
        [sym__variable] = 184,
        [anon_sym_LPAREN] = 188,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [541] = {
        [aux_sym__call_arguments_repeat1] = 1272,
        [anon_sym_do] = 640,
        [anon_sym_COMMA] = 204,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [542] = {
        [anon_sym_do] = 642,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [543] = {
        [sym__terminator] = 1274,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [544] = {
        [sym__statement] = 1276,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1278,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [545] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1280,
        [anon_sym_end] = 1282,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [546] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [ts_builtin_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [sym_comment] = 48,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [547] = {
        [anon_sym_end] = 1284,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [548] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [ts_builtin_sym_end] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [sym_comment] = 48,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [549] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [ts_builtin_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [sym_comment] = 48,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [550] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [ts_builtin_sym_end] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [551] = {
        [sym__terminator] = 1286,
        [anon_sym_LT] = 1288,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [552] = {
        [sym__statement] = 1290,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1292,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [553] = {
        [sym_identifier] = 1294,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [554] = {
        [sym__terminator] = 1296,
        [aux_sym_class_declaration_repeat1] = 1298,
        [anon_sym_COLON_COLON] = 394,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [555] = {
        [sym__statement] = 1300,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1302,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [556] = {
        [sym__terminator] = 1304,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [557] = {
        [sym__statement] = 1306,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1308,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [558] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1310,
        [anon_sym_end] = 1312,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [559] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [ts_builtin_sym_end] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [560] = {
        [anon_sym_end] = 1314,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [561] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [ts_builtin_sym_end] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [sym_comment] = 48,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [562] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [sym_comment] = 48,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [563] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1316,
        [anon_sym_end] = 1308,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [564] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [ts_builtin_sym_end] = 428,
        [anon_sym_if] = 428,
        [anon_sym_while] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_until] = 428,
        [sym_comment] = 48,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [565] = {
        [anon_sym_end] = 1312,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [566] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1318,
        [anon_sym_end] = 1320,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [567] = {
        [sym__terminator] = 434,
        [aux_sym_program_repeat1] = 434,
        [ts_builtin_sym_end] = 434,
        [anon_sym_if] = 434,
        [anon_sym_while] = 434,
        [anon_sym_unless] = 434,
        [anon_sym_until] = 434,
        [sym_comment] = 48,
        [sym__line_break] = 434,
        [anon_sym_SEMI] = 434,
    },
    [568] = {
        [anon_sym_end] = 1302,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [569] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [ts_builtin_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [570] = {
        [sym__terminator] = 218,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 1324,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [571] = {
        [sym__terminator] = 252,
        [aux_sym_program_repeat1] = 252,
        [ts_builtin_sym_end] = 252,
        [anon_sym_if] = 252,
        [anon_sym_while] = 252,
        [anon_sym_unless] = 252,
        [anon_sym_until] = 252,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 252,
        [anon_sym_SEMI] = 252,
    },
    [572] = {
        [anon_sym_RPAREN] = 1326,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [573] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [ts_builtin_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [574] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [ts_builtin_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_COLON_COLON] = 450,
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [575] = {
        [sym_argument_list] = 1328,
        [sym__terminator] = 1330,
        [anon_sym_LPAREN] = 1332,
        [anon_sym_STAR] = 460,
        [anon_sym_AMP] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [576] = {
        [sym__terminator] = 1334,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [577] = {
        [sym__statement] = 1336,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1338,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [578] = {
        [sym_argument_list] = 1340,
        [anon_sym_RPAREN] = 1334,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [579] = {
        [anon_sym_RPAREN] = 1342,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [580] = {
        [sym__statement] = 1344,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1346,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [581] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1348,
        [anon_sym_end] = 1350,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [582] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [ts_builtin_sym_end] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [sym_comment] = 48,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [583] = {
        [anon_sym_end] = 1352,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [584] = {
        [sym__terminator] = 540,
        [aux_sym_program_repeat1] = 540,
        [ts_builtin_sym_end] = 540,
        [anon_sym_if] = 540,
        [anon_sym_while] = 540,
        [anon_sym_unless] = 540,
        [anon_sym_until] = 540,
        [sym_comment] = 48,
        [sym__line_break] = 540,
        [anon_sym_SEMI] = 540,
    },
    [585] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [ts_builtin_sym_end] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [sym_comment] = 48,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [586] = {
        [sym__statement] = 1354,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1350,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [587] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1356,
        [anon_sym_end] = 1352,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [588] = {
        [anon_sym_end] = 1358,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [589] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [ts_builtin_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [590] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1360,
        [anon_sym_end] = 1346,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [591] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [ts_builtin_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [592] = {
        [anon_sym_end] = 1350,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [593] = {
        [sym__statement_block] = 1362,
        [sym__do_block] = 1364,
        [sym__terminator] = 1366,
        [anon_sym_do] = 1368,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [594] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [ts_builtin_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [595] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [ts_builtin_sym_end] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [sym_comment] = 48,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [596] = {
        [sym__statement] = 1370,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1372,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [597] = {
        [sym__statement] = 1374,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1376,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [598] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1378,
        [anon_sym_end] = 1380,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [599] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [ts_builtin_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [600] = {
        [anon_sym_end] = 1382,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [601] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [ts_builtin_sym_end] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [sym_comment] = 48,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [602] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [ts_builtin_sym_end] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [sym_comment] = 48,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [603] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1384,
        [anon_sym_end] = 1386,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [604] = {
        [sym__terminator] = 678,
        [aux_sym_program_repeat1] = 678,
        [ts_builtin_sym_end] = 678,
        [anon_sym_if] = 678,
        [anon_sym_while] = 678,
        [anon_sym_unless] = 678,
        [anon_sym_until] = 678,
        [sym_comment] = 48,
        [sym__line_break] = 678,
        [anon_sym_SEMI] = 678,
    },
    [605] = {
        [anon_sym_end] = 1388,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [606] = {
        [sym__terminator] = 682,
        [aux_sym_program_repeat1] = 682,
        [ts_builtin_sym_end] = 682,
        [anon_sym_if] = 682,
        [anon_sym_while] = 682,
        [anon_sym_unless] = 682,
        [anon_sym_until] = 682,
        [sym_comment] = 48,
        [sym__line_break] = 682,
        [anon_sym_SEMI] = 682,
    },
    [607] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [ts_builtin_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [608] = {
        [sym__then_else_block] = 1390,
        [sym__terminator] = 1392,
        [anon_sym_then] = 1392,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [609] = {
        [sym__terminator] = 722,
        [aux_sym_program_repeat1] = 722,
        [ts_builtin_sym_end] = 722,
        [anon_sym_if] = 722,
        [anon_sym_while] = 722,
        [anon_sym_unless] = 722,
        [anon_sym_until] = 722,
        [sym_comment] = 48,
        [sym__line_break] = 722,
        [anon_sym_SEMI] = 722,
    },
    [610] = {
        [sym__statement] = 1394,
        [sym__declaration] = 726,
        [sym_method_declaration] = 728,
        [sym_class_declaration] = 728,
        [sym_module_declaration] = 728,
        [sym_while_statement] = 726,
        [sym_until_statement] = 726,
        [sym_if_statement] = 726,
        [sym_unless_statement] = 726,
        [sym__call] = 730,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 726,
        [sym__argument] = 732,
        [sym__primary] = 734,
        [sym_scope_resolution_expression] = 736,
        [sym_subscript_expression] = 736,
        [sym__variable] = 736,
        [anon_sym_end] = 1396,
        [anon_sym_undef] = 740,
        [anon_sym_alias] = 742,
        [anon_sym_if] = 744,
        [anon_sym_while] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 750,
        [anon_sym_def] = 752,
        [anon_sym_LPAREN] = 754,
        [anon_sym_class] = 756,
        [anon_sym_COLON_COLON] = 758,
        [anon_sym_module] = 760,
        [anon_sym_else] = 1398,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 764,
        [anon_sym_self] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 48,
        [sym_symbol] = 732,
        [sym__line_break] = 48,
    },
    [611] = {
        [sym__terminator] = 766,
        [aux_sym_program_repeat1] = 1400,
        [anon_sym_end] = 1402,
        [anon_sym_if] = 772,
        [anon_sym_while] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_until] = 772,
        [anon_sym_else] = 1404,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [612] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [ts_builtin_sym_end] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [sym_comment] = 48,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [613] = {
        [sym__statement] = 1406,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1402,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [614] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1408,
        [anon_sym_end] = 1410,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [615] = {
        [sym__terminator] = 816,
        [aux_sym_program_repeat1] = 816,
        [ts_builtin_sym_end] = 816,
        [anon_sym_if] = 816,
        [anon_sym_while] = 816,
        [anon_sym_unless] = 816,
        [anon_sym_until] = 816,
        [sym_comment] = 48,
        [sym__line_break] = 816,
        [anon_sym_SEMI] = 816,
    },
    [616] = {
        [anon_sym_end] = 1412,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [617] = {
        [sym__terminator] = 820,
        [aux_sym_program_repeat1] = 820,
        [ts_builtin_sym_end] = 820,
        [anon_sym_if] = 820,
        [anon_sym_while] = 820,
        [anon_sym_unless] = 820,
        [anon_sym_until] = 820,
        [sym_comment] = 48,
        [sym__line_break] = 820,
        [anon_sym_SEMI] = 820,
    },
    [618] = {
        [sym__terminator] = 822,
        [aux_sym_program_repeat1] = 822,
        [ts_builtin_sym_end] = 822,
        [anon_sym_if] = 822,
        [anon_sym_while] = 822,
        [anon_sym_unless] = 822,
        [anon_sym_until] = 822,
        [sym_comment] = 48,
        [sym__line_break] = 822,
        [anon_sym_SEMI] = 822,
    },
    [619] = {
        [anon_sym_end] = 1410,
        [anon_sym_else] = 1414,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [620] = {
        [sym__statement] = 1416,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1410,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [621] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1418,
        [anon_sym_end] = 1412,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [622] = {
        [anon_sym_end] = 1420,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [623] = {
        [sym__terminator] = 976,
        [aux_sym_program_repeat1] = 976,
        [ts_builtin_sym_end] = 976,
        [anon_sym_if] = 976,
        [anon_sym_while] = 976,
        [anon_sym_unless] = 976,
        [anon_sym_until] = 976,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 976,
    },
    [624] = {
        [sym__statement] = 1422,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1412,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [625] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1424,
        [anon_sym_end] = 1420,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [626] = {
        [anon_sym_end] = 1426,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [627] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [ts_builtin_sym_end] = 984,
        [anon_sym_if] = 984,
        [anon_sym_while] = 984,
        [anon_sym_unless] = 984,
        [anon_sym_until] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [628] = {
        [sym__statement_block] = 1428,
        [sym__do_block] = 1364,
        [sym__terminator] = 1366,
        [anon_sym_do] = 1368,
        [sym_comment] = 48,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 264,
    },
    [629] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [ts_builtin_sym_end] = 990,
        [anon_sym_if] = 990,
        [anon_sym_while] = 990,
        [anon_sym_unless] = 990,
        [anon_sym_until] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [630] = {
        [sym__then_else_block] = 1430,
        [sym__terminator] = 1392,
        [anon_sym_then] = 1392,
        [sym_comment] = 48,
        [sym__line_break] = 690,
        [anon_sym_SEMI] = 692,
    },
    [631] = {
        [sym__terminator] = 994,
        [aux_sym_program_repeat1] = 994,
        [ts_builtin_sym_end] = 994,
        [anon_sym_if] = 994,
        [anon_sym_while] = 994,
        [anon_sym_unless] = 994,
        [anon_sym_until] = 994,
        [sym_comment] = 48,
        [sym__line_break] = 994,
        [anon_sym_SEMI] = 994,
    },
    [632] = {
        [sym__function_name] = 1432,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 84,
        [anon_sym_CARET] = 84,
        [anon_sym_LT_EQ_GT] = 84,
        [anon_sym_EQ_EQ] = 84,
        [anon_sym_EQ_EQ_EQ] = 84,
        [anon_sym_EQ_TILDE] = 84,
        [anon_sym_GT] = 84,
        [anon_sym_GT_EQ] = 84,
        [anon_sym_LT_EQ] = 84,
        [anon_sym_PLUS] = 84,
        [anon_sym_DASH] = 84,
        [anon_sym_SLASH] = 84,
        [anon_sym_PERCENT] = 84,
        [anon_sym_STAR_STAR] = 84,
        [anon_sym_LT_LT] = 84,
        [anon_sym_GT_GT] = 84,
        [anon_sym_TILDE] = 84,
        [anon_sym_PLUS_AT] = 84,
        [anon_sym_DASH_AT] = 84,
        [anon_sym_LBRACK_RBRACK] = 84,
        [anon_sym_LBRACK_RBRACK_EQ] = 84,
        [sym__line_break] = 48,
    },
    [633] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [ts_builtin_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [sym_comment] = 48,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [634] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [ts_builtin_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [635] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [ts_builtin_sym_end] = 996,
        [anon_sym_if] = 996,
        [anon_sym_while] = 996,
        [anon_sym_unless] = 996,
        [anon_sym_until] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [636] = {
        [sym_identifier] = 1434,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [637] = {
        [sym__argument] = 1436,
        [sym__primary] = 586,
        [sym_scope_resolution_expression] = 588,
        [sym_subscript_expression] = 588,
        [sym__variable] = 588,
        [anon_sym_LPAREN] = 590,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_RBRACK] = 1438,
        [anon_sym_nil] = 596,
        [anon_sym_self] = 596,
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [638] = {
        [aux_sym__call_arguments_repeat1] = 1440,
        [anon_sym_COMMA] = 600,
        [anon_sym_RBRACK] = 1442,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [639] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [ts_builtin_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_COLON_COLON] = 614,
        [anon_sym_LBRACK] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [640] = {
        [anon_sym_RBRACK] = 1444,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [641] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [ts_builtin_sym_end] = 636,
        [anon_sym_if] = 636,
        [anon_sym_while] = 636,
        [anon_sym_unless] = 636,
        [anon_sym_until] = 636,
        [anon_sym_COLON_COLON] = 636,
        [anon_sym_LBRACK] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [642] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [ts_builtin_sym_end] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [anon_sym_COLON_COLON] = 644,
        [anon_sym_LBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [643] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [ts_builtin_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [anon_sym_COLON_COLON] = 646,
        [anon_sym_LBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [644] = {
        [sym__statement] = 1446,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_PIPE] = 1448,
        [anon_sym_end] = 1432,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [645] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1450,
        [anon_sym_end] = 1452,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [646] = {
        [sym__statement] = 1454,
        [sym__declaration] = 268,
        [sym_method_declaration] = 270,
        [sym_class_declaration] = 270,
        [sym_module_declaration] = 270,
        [sym_while_statement] = 268,
        [sym_until_statement] = 268,
        [sym_if_statement] = 268,
        [sym_unless_statement] = 268,
        [sym__call] = 272,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 268,
        [sym__argument] = 274,
        [sym__primary] = 276,
        [sym_scope_resolution_expression] = 278,
        [sym_subscript_expression] = 278,
        [sym__variable] = 278,
        [anon_sym_end] = 1452,
        [anon_sym_undef] = 282,
        [anon_sym_alias] = 284,
        [anon_sym_if] = 286,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 292,
        [anon_sym_def] = 294,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 298,
        [anon_sym_COLON_COLON] = 300,
        [anon_sym_module] = 302,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 304,
        [anon_sym_self] = 304,
        [sym_identifier] = 304,
        [sym_comment] = 48,
        [sym_symbol] = 274,
        [sym__line_break] = 48,
    },
    [647] = {
        [sym__terminator] = 310,
        [aux_sym_program_repeat1] = 1456,
        [anon_sym_end] = 1458,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [648] = {
        [sym__terminator] = 1024,
        [aux_sym_program_repeat1] = 1024,
        [ts_builtin_sym_end] = 1024,
        [anon_sym_if] = 1024,
        [anon_sym_while] = 1024,
        [anon_sym_unless] = 1024,
        [anon_sym_until] = 1024,
        [sym_comment] = 48,
        [sym__line_break] = 1024,
        [anon_sym_SEMI] = 1024,
    },
    [649] = {
        [anon_sym_end] = 1460,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [650] = {
        [sym__terminator] = 1028,
        [aux_sym_program_repeat1] = 1028,
        [ts_builtin_sym_end] = 1028,
        [anon_sym_if] = 1028,
        [anon_sym_while] = 1028,
        [anon_sym_unless] = 1028,
        [anon_sym_until] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 1028,
        [anon_sym_SEMI] = 1028,
    },
    [651] = {
        [sym__terminator] = 1030,
        [aux_sym_program_repeat1] = 1030,
        [ts_builtin_sym_end] = 1030,
        [anon_sym_if] = 1030,
        [anon_sym_while] = 1030,
        [anon_sym_unless] = 1030,
        [anon_sym_until] = 1030,
        [sym_comment] = 48,
        [sym__line_break] = 1030,
        [anon_sym_SEMI] = 1030,
    },
    [652] = {
        [anon_sym_end] = 1458,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [653] = {
        [sym__statement] = 1462,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym__call] = 10,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 6,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_undef] = 22,
        [anon_sym_alias] = 24,
        [anon_sym_if] = 26,
        [anon_sym_while] = 28,
        [anon_sym_unless] = 30,
        [anon_sym_until] = 32,
        [anon_sym_def] = 34,
        [anon_sym_LPAREN] = 36,
        [anon_sym_class] = 38,
        [anon_sym_COLON_COLON] = 40,
        [anon_sym_module] = 42,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [654] = {
        [ts_builtin_sym_end] = 1464,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [655] = {
        [sym__expression] = 1432,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 36,
        [anon_sym_COLON_COLON] = 40,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [656] = {
        [sym__terminator] = 52,
        [aux_sym_program_repeat1] = 1466,
        [ts_builtin_sym_end] = 376,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [657] = {
        [ts_builtin_sym_end] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT(4, 0),
    [10] = {.count = 1}, SHIFT(5, 0),
    [12] = {.count = 1}, SHIFT(6, 0),
    [14] = {.count = 1}, SHIFT(7, 0),
    [16] = {.count = 1}, SHIFT(8, 0),
    [18] = {.count = 1}, SHIFT(9, 0),
    [20] = {.count = 1}, REDUCE(sym_program, 0, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, SHIFT(11, 0),
    [26] = {.count = 1}, SHIFT(12, 0),
    [28] = {.count = 1}, SHIFT(13, 0),
    [30] = {.count = 1}, SHIFT(14, 0),
    [32] = {.count = 1}, SHIFT(15, 0),
    [34] = {.count = 1}, SHIFT(16, 0),
    [36] = {.count = 1}, SHIFT(17, 0),
    [38] = {.count = 1}, SHIFT(18, 0),
    [40] = {.count = 1}, SHIFT(19, 0),
    [42] = {.count = 1}, SHIFT(20, 0),
    [44] = {.count = 1}, SHIFT(21, 0),
    [46] = {.count = 1}, SHIFT(22, 0),
    [48] = {.count = 1}, SHIFT_EXTRA(),
    [50] = {.count = 1}, ACCEPT_INPUT(),
    [52] = {.count = 1}, SHIFT(653, 0),
    [54] = {.count = 1}, SHIFT(654, 0),
    [56] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [58] = {.count = 1}, SHIFT(655, 0),
    [60] = {.count = 1}, SHIFT(85, 0),
    [62] = {.count = 1}, SHIFT(86, 0),
    [64] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [68] = {.count = 1}, SHIFT(644, 0),
    [70] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [76] = {.count = 1}, SHIFT(636, 0),
    [78] = {.count = 1}, SHIFT(637, 0),
    [80] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [82] = {.count = 1}, SHIFT(635, 0),
    [84] = {.count = 1}, SHIFT(634, 0),
    [86] = {.count = 1}, SHIFT(632, 0),
    [88] = {.count = 1}, SHIFT(370, 0),
    [90] = {.count = 1}, SHIFT(630, 0),
    [92] = {.count = 1}, SHIFT(224, 0),
    [94] = {.count = 1}, SHIFT(225, 0),
    [96] = {.count = 1}, SHIFT(226, 0),
    [98] = {.count = 1}, SHIFT(227, 0),
    [100] = {.count = 1}, SHIFT(228, 0),
    [102] = {.count = 1}, SHIFT(229, 0),
    [104] = {.count = 1}, SHIFT(230, 0),
    [106] = {.count = 1}, SHIFT(628, 0),
    [108] = {.count = 1}, SHIFT(166, 0),
    [110] = {.count = 1}, SHIFT(167, 0),
    [112] = {.count = 1}, SHIFT(168, 0),
    [114] = {.count = 1}, SHIFT(169, 0),
    [116] = {.count = 1}, SHIFT(170, 0),
    [118] = {.count = 1}, SHIFT(171, 0),
    [120] = {.count = 1}, SHIFT(172, 0),
    [122] = {.count = 1}, SHIFT(608, 0),
    [124] = {.count = 1}, SHIFT(593, 0),
    [126] = {.count = 1}, SHIFT(575, 0),
    [128] = {.count = 1}, SHIFT(125, 0),
    [130] = {.count = 1}, SHIFT(570, 0),
    [132] = {.count = 1}, SHIFT(34, 0),
    [134] = {.count = 1}, SHIFT(35, 0),
    [136] = {.count = 1}, SHIFT(36, 0),
    [138] = {.count = 1}, SHIFT(37, 0),
    [140] = {.count = 1}, SHIFT(38, 0),
    [142] = {.count = 1}, SHIFT(39, 0),
    [144] = {.count = 1}, SHIFT(40, 0),
    [146] = {.count = 1}, SHIFT(41, 0),
    [148] = {.count = 1}, SHIFT(42, 0),
    [150] = {.count = 1}, SHIFT(43, 0),
    [152] = {.count = 1}, SHIFT(44, 0),
    [154] = {.count = 1}, SHIFT(45, 0),
    [156] = {.count = 1}, SHIFT(46, 0),
    [158] = {.count = 1}, SHIFT(47, 0),
    [160] = {.count = 1}, SHIFT(571, 0),
    [162] = {.count = 1}, SHIFT(49, 0),
    [164] = {.count = 1}, SHIFT(50, 0),
    [166] = {.count = 1}, SHIFT(51, 0),
    [168] = {.count = 1}, SHIFT(52, 0),
    [170] = {.count = 1}, SHIFT(551, 0),
    [172] = {.count = 1}, SHIFT(550, 0),
    [174] = {.count = 1}, SHIFT(543, 0),
    [176] = {.count = 1}, SHIFT(23, 0),
    [178] = {.count = 1}, SHIFT(24, 0),
    [180] = {.count = 1}, SHIFT(25, 0),
    [182] = {.count = 1}, SHIFT(26, 0),
    [184] = {.count = 1}, SHIFT(27, 0),
    [186] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [188] = {.count = 1}, SHIFT(28, 0),
    [190] = {.count = 1}, SHIFT(29, 0),
    [192] = {.count = 1}, SHIFT(30, 0),
    [194] = {.count = 1}, SHIFT(31, 0),
    [196] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [198] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [200] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [202] = {.count = 1}, SHIFT(539, 0),
    [204] = {.count = 1}, SHIFT(540, 0),
    [206] = {.count = 1}, SHIFT(531, 0),
    [208] = {.count = 1}, SHIFT(532, 0),
    [210] = {.count = 1}, SHIFT(33, 0),
    [212] = {.count = 1}, SHIFT(48, 0),
    [214] = {.count = 1}, SHIFT(32, 0),
    [216] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [218] = {.count = 1}, SHIFT(116, 0),
    [220] = {.count = 1}, SHIFT(528, 0),
    [222] = {.count = 1}, SHIFT(118, 0),
    [224] = {.count = 1}, SHIFT(529, 0),
    [226] = {.count = 1}, SHIFT(519, 0),
    [228] = {.count = 1}, SHIFT(511, 0),
    [230] = {.count = 1}, SHIFT(512, 0),
    [232] = {.count = 1}, SHIFT(510, 0),
    [234] = {.count = 1}, SHIFT(509, 0),
    [236] = {.count = 1}, SHIFT(508, 0),
    [238] = {.count = 1}, SHIFT(506, 0),
    [240] = {.count = 1}, SHIFT(504, 0),
    [242] = {.count = 1}, SHIFT(484, 0),
    [244] = {.count = 1}, SHIFT(469, 0),
    [246] = {.count = 1}, SHIFT(451, 0),
    [248] = {.count = 1}, SHIFT(446, 0),
    [250] = {.count = 1}, SHIFT(447, 0),
    [252] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [254] = {.count = 1}, SHIFT(427, 0),
    [256] = {.count = 1}, SHIFT(426, 0),
    [258] = {.count = 1}, SHIFT(53, 0),
    [260] = {.count = 1}, SHIFT(54, 0),
    [262] = {.count = 1}, SHIFT(55, 0),
    [264] = {.count = 1}, SHIFT(56, 0),
    [266] = {.count = 1}, SHIFT(57, 0),
    [268] = {.count = 1}, SHIFT(58, 0),
    [270] = {.count = 1}, SHIFT(59, 0),
    [272] = {.count = 1}, SHIFT(60, 0),
    [274] = {.count = 1}, SHIFT(61, 0),
    [276] = {.count = 1}, SHIFT(62, 0),
    [278] = {.count = 1}, SHIFT(63, 0),
    [280] = {.count = 1}, SHIFT(64, 0),
    [282] = {.count = 1}, SHIFT(65, 0),
    [284] = {.count = 1}, SHIFT(66, 0),
    [286] = {.count = 1}, SHIFT(67, 0),
    [288] = {.count = 1}, SHIFT(68, 0),
    [290] = {.count = 1}, SHIFT(69, 0),
    [292] = {.count = 1}, SHIFT(70, 0),
    [294] = {.count = 1}, SHIFT(71, 0),
    [296] = {.count = 1}, SHIFT(72, 0),
    [298] = {.count = 1}, SHIFT(73, 0),
    [300] = {.count = 1}, SHIFT(74, 0),
    [302] = {.count = 1}, SHIFT(75, 0),
    [304] = {.count = 1}, SHIFT(76, 0),
    [306] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [308] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [310] = {.count = 1}, SHIFT(81, 0),
    [312] = {.count = 1}, SHIFT(423, 0),
    [314] = {.count = 1}, SHIFT(424, 0),
    [316] = {.count = 1}, SHIFT(84, 0),
    [318] = {.count = 1}, SHIFT(414, 0),
    [320] = {.count = 1}, SHIFT(406, 0),
    [322] = {.count = 1}, SHIFT(407, 0),
    [324] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [326] = {.count = 1}, SHIFT(405, 0),
    [328] = {.count = 1}, SHIFT(404, 0),
    [330] = {.count = 1}, SHIFT(403, 0),
    [332] = {.count = 1}, SHIFT(401, 0),
    [334] = {.count = 1}, SHIFT(399, 0),
    [336] = {.count = 1}, SHIFT(223, 0),
    [338] = {.count = 1}, SHIFT(165, 0),
    [340] = {.count = 1}, SHIFT(124, 0),
    [342] = {.count = 1}, SHIFT(114, 0),
    [344] = {.count = 1}, SHIFT(115, 0),
    [346] = {.count = 1}, SHIFT(92, 0),
    [348] = {.count = 1}, SHIFT(91, 0),
    [350] = {.count = 1}, SHIFT(77, 0),
    [352] = {.count = 1}, SHIFT(78, 0),
    [354] = {.count = 1}, SHIFT(79, 0),
    [356] = {.count = 1}, SHIFT(80, 0),
    [358] = {.count = 1}, SHIFT(82, 0),
    [360] = {.count = 1}, SHIFT(83, 0),
    [362] = {.count = 1}, SHIFT(89, 0),
    [364] = {.count = 1}, SHIFT(88, 0),
    [366] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [368] = {.count = 1}, SHIFT(87, 0),
    [370] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [372] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [374] = {.count = 1}, SHIFT(90, 0),
    [376] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [378] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [380] = {.count = 1}, SHIFT(93, 0),
    [382] = {.count = 1}, SHIFT(94, 0),
    [384] = {.count = 1}, SHIFT(110, 0),
    [386] = {.count = 1}, SHIFT(111, 0),
    [388] = {.count = 1}, SHIFT(95, 0),
    [390] = {.count = 1}, SHIFT(96, 0),
    [392] = {.count = 1}, SHIFT(97, 0),
    [394] = {.count = 1}, SHIFT(98, 0),
    [396] = {.count = 1}, SHIFT(107, 0),
    [398] = {.count = 1}, SHIFT(108, 0),
    [400] = {.count = 1}, SHIFT(101, 0),
    [402] = {.count = 1}, SHIFT(99, 0),
    [404] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [406] = {.count = 1}, SHIFT(100, 0),
    [408] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [410] = {.count = 1}, SHIFT(102, 0),
    [412] = {.count = 1}, SHIFT(103, 0),
    [414] = {.count = 1}, SHIFT(104, 0),
    [416] = {.count = 1}, SHIFT(105, 0),
    [418] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [420] = {.count = 1}, SHIFT(106, 0),
    [422] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [424] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [426] = {.count = 1}, SHIFT(109, 0),
    [428] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [430] = {.count = 1}, SHIFT(112, 0),
    [432] = {.count = 1}, SHIFT(113, 0),
    [434] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [436] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [438] = {.count = 1}, SHIFT(117, 0),
    [440] = {.count = 1}, SHIFT(119, 0),
    [442] = {.count = 1}, SHIFT(122, 0),
    [444] = {.count = 1}, SHIFT(121, 0),
    [446] = {.count = 1}, SHIFT(120, 0),
    [448] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [450] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [452] = {.count = 1}, SHIFT(123, 0),
    [454] = {.count = 1}, SHIFT(126, 0),
    [456] = {.count = 1}, SHIFT(127, 0),
    [458] = {.count = 1}, SHIFT(128, 0),
    [460] = {.count = 1}, SHIFT(129, 0),
    [462] = {.count = 1}, SHIFT(130, 0),
    [464] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [466] = {.count = 1}, SHIFT(141, 0),
    [468] = {.count = 1}, SHIFT(162, 0),
    [470] = {.count = 1}, SHIFT(163, 0),
    [472] = {.count = 1}, SHIFT(140, 0),
    [474] = {.count = 1}, SHIFT(142, 0),
    [476] = {.count = 1}, SHIFT(143, 0),
    [478] = {.count = 1}, SHIFT(138, 0),
    [480] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [482] = {.count = 1}, SHIFT(131, 0),
    [484] = {.count = 1}, SHIFT(132, 0),
    [486] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [488] = {.count = 1}, SHIFT(133, 0),
    [490] = {.count = 1}, SHIFT(134, 0),
    [492] = {.count = 1}, SHIFT(136, 0),
    [494] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [496] = {.count = 1}, SHIFT(135, 0),
    [498] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [500] = {.count = 1}, SHIFT(137, 0),
    [502] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [504] = {.count = 1}, SHIFT(139, 0),
    [506] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [508] = {.count = 1}, SHIFT(158, 0),
    [510] = {.count = 1}, SHIFT(153, 0),
    [512] = {.count = 1}, SHIFT(154, 0),
    [514] = {.count = 1}, SHIFT(151, 0),
    [516] = {.count = 1}, SHIFT(144, 0),
    [518] = {.count = 1}, SHIFT(145, 0),
    [520] = {.count = 1}, SHIFT(146, 0),
    [522] = {.count = 1}, SHIFT(147, 0),
    [524] = {.count = 1}, SHIFT(149, 0),
    [526] = {.count = 1}, SHIFT(148, 0),
    [528] = {.count = 1}, SHIFT(150, 0),
    [530] = {.count = 1}, SHIFT(152, 0),
    [532] = {.count = 1}, SHIFT(155, 0),
    [534] = {.count = 1}, SHIFT(156, 0),
    [536] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [538] = {.count = 1}, SHIFT(157, 0),
    [540] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [542] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [544] = {.count = 1}, SHIFT(159, 0),
    [546] = {.count = 1}, SHIFT(160, 0),
    [548] = {.count = 1}, SHIFT(161, 0),
    [550] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [552] = {.count = 1}, SHIFT(164, 0),
    [554] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [556] = {.count = 1}, SHIFT(209, 0),
    [558] = {.count = 1}, SHIFT(210, 0),
    [560] = {.count = 1}, SHIFT(211, 0),
    [562] = {.count = 1}, SHIFT(212, 0),
    [564] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [566] = {.count = 1}, SHIFT(179, 0),
    [568] = {.count = 1}, SHIFT(180, 0),
    [570] = {.count = 1}, SHIFT(174, 0),
    [572] = {.count = 1}, SHIFT(175, 0),
    [574] = {.count = 1}, SHIFT(173, 0),
    [576] = {.count = 1}, SHIFT(176, 0),
    [578] = {.count = 1}, SHIFT(177, 0),
    [580] = {.count = 1}, SHIFT(178, 0),
    [582] = {.count = 1}, SHIFT(208, 0),
    [584] = {.count = 1}, SHIFT(181, 0),
    [586] = {.count = 1}, SHIFT(182, 0),
    [588] = {.count = 1}, SHIFT(183, 0),
    [590] = {.count = 1}, SHIFT(184, 0),
    [592] = {.count = 1}, SHIFT(185, 0),
    [594] = {.count = 1}, SHIFT(186, 0),
    [596] = {.count = 1}, SHIFT(187, 0),
    [598] = {.count = 1}, SHIFT(205, 0),
    [600] = {.count = 1}, SHIFT(199, 0),
    [602] = {.count = 1}, SHIFT(206, 0),
    [604] = {.count = 1}, SHIFT(194, 0),
    [606] = {.count = 1}, SHIFT(195, 0),
    [608] = {.count = 1}, SHIFT(189, 0),
    [610] = {.count = 1}, SHIFT(190, 0),
    [612] = {.count = 1}, SHIFT(188, 0),
    [614] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [616] = {.count = 1}, SHIFT(191, 0),
    [618] = {.count = 1}, SHIFT(192, 0),
    [620] = {.count = 1}, SHIFT(193, 0),
    [622] = {.count = 1}, SHIFT(204, 0),
    [624] = {.count = 1}, SHIFT(196, 0),
    [626] = {.count = 1}, SHIFT(197, 0),
    [628] = {.count = 1}, SHIFT(198, 0),
    [630] = {.count = 1}, SHIFT(200, 0),
    [632] = {.count = 1}, SHIFT(203, 0),
    [634] = {.count = 1}, SHIFT(201, 0),
    [636] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [638] = {.count = 1}, SHIFT(202, 0),
    [640] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [642] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [644] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [646] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [648] = {.count = 1}, SHIFT(207, 0),
    [650] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [652] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [654] = {.count = 1}, SHIFT(218, 0),
    [656] = {.count = 1}, SHIFT(219, 0),
    [658] = {.count = 1}, SHIFT(213, 0),
    [660] = {.count = 1}, SHIFT(214, 0),
    [662] = {.count = 1}, SHIFT(215, 0),
    [664] = {.count = 1}, SHIFT(216, 0),
    [666] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [668] = {.count = 1}, SHIFT(217, 0),
    [670] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [672] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [674] = {.count = 1}, SHIFT(220, 0),
    [676] = {.count = 1}, SHIFT(221, 0),
    [678] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [680] = {.count = 1}, SHIFT(222, 0),
    [682] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [684] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [686] = {.count = 1}, SHIFT(245, 0),
    [688] = {.count = 1}, SHIFT(246, 0),
    [690] = {.count = 1}, SHIFT(247, 0),
    [692] = {.count = 1}, SHIFT(248, 0),
    [694] = {.count = 1}, SHIFT(237, 0),
    [696] = {.count = 1}, SHIFT(238, 0),
    [698] = {.count = 1}, SHIFT(232, 0),
    [700] = {.count = 1}, SHIFT(233, 0),
    [702] = {.count = 1}, SHIFT(231, 0),
    [704] = {.count = 1}, SHIFT(234, 0),
    [706] = {.count = 1}, SHIFT(235, 0),
    [708] = {.count = 1}, SHIFT(236, 0),
    [710] = {.count = 1}, SHIFT(244, 0),
    [712] = {.count = 1}, SHIFT(239, 0),
    [714] = {.count = 1}, SHIFT(240, 0),
    [716] = {.count = 1}, SHIFT(241, 0),
    [718] = {.count = 1}, SHIFT(242, 0),
    [720] = {.count = 1}, SHIFT(243, 0),
    [722] = {.count = 1}, REDUCE(sym_unless_statement, 3, 0),
    [724] = {.count = 1}, SHIFT(249, 0),
    [726] = {.count = 1}, SHIFT(250, 0),
    [728] = {.count = 1}, SHIFT(251, 0),
    [730] = {.count = 1}, SHIFT(252, 0),
    [732] = {.count = 1}, SHIFT(253, 0),
    [734] = {.count = 1}, SHIFT(254, 0),
    [736] = {.count = 1}, SHIFT(255, 0),
    [738] = {.count = 1}, SHIFT(256, 0),
    [740] = {.count = 1}, SHIFT(257, 0),
    [742] = {.count = 1}, SHIFT(258, 0),
    [744] = {.count = 1}, SHIFT(259, 0),
    [746] = {.count = 1}, SHIFT(260, 0),
    [748] = {.count = 1}, SHIFT(261, 0),
    [750] = {.count = 1}, SHIFT(262, 0),
    [752] = {.count = 1}, SHIFT(263, 0),
    [754] = {.count = 1}, SHIFT(264, 0),
    [756] = {.count = 1}, SHIFT(265, 0),
    [758] = {.count = 1}, SHIFT(266, 0),
    [760] = {.count = 1}, SHIFT(267, 0),
    [762] = {.count = 1}, SHIFT(268, 0),
    [764] = {.count = 1}, SHIFT(269, 0),
    [766] = {.count = 1}, SHIFT(351, 0),
    [768] = {.count = 1}, SHIFT(390, 0),
    [770] = {.count = 1}, SHIFT(271, 0),
    [772] = {.count = 1}, SHIFT(353, 0),
    [774] = {.count = 1}, SHIFT(391, 0),
    [776] = {.count = 1}, SHIFT(381, 0),
    [778] = {.count = 1}, SHIFT(373, 0),
    [780] = {.count = 1}, SHIFT(374, 0),
    [782] = {.count = 1}, REDUCE(sym__then_else_block, 2, 0),
    [784] = {.count = 1}, SHIFT(372, 0),
    [786] = {.count = 1}, SHIFT(371, 0),
    [788] = {.count = 1}, SHIFT(369, 0),
    [790] = {.count = 1}, SHIFT(367, 0),
    [792] = {.count = 1}, SHIFT(365, 0),
    [794] = {.count = 1}, SHIFT(340, 0),
    [796] = {.count = 1}, SHIFT(325, 0),
    [798] = {.count = 1}, SHIFT(307, 0),
    [800] = {.count = 1}, SHIFT(302, 0),
    [802] = {.count = 1}, SHIFT(303, 0),
    [804] = {.count = 1}, SHIFT(283, 0),
    [806] = {.count = 1}, SHIFT(282, 0),
    [808] = {.count = 1}, SHIFT(275, 0),
    [810] = {.count = 1}, SHIFT(270, 0),
    [812] = {.count = 1}, SHIFT(272, 0),
    [814] = {.count = 1}, SHIFT(273, 0),
    [816] = {.count = 1}, REDUCE(sym__then_else_block, 3, 0),
    [818] = {.count = 1}, SHIFT(274, 0),
    [820] = {.count = 1}, REDUCE(sym__then_else_block, 4, 0),
    [822] = {.count = 1}, REDUCE(sym__then_else_block, 5, 0),
    [824] = {.count = 1}, SHIFT(276, 0),
    [826] = {.count = 1}, SHIFT(277, 0),
    [828] = {.count = 1}, SHIFT(278, 0),
    [830] = {.count = 1}, SHIFT(279, 0),
    [832] = {.count = 1}, SHIFT(280, 0),
    [834] = {.count = 1}, SHIFT(281, 0),
    [836] = {.count = 1}, SHIFT(284, 0),
    [838] = {.count = 1}, SHIFT(285, 0),
    [840] = {.count = 1}, SHIFT(298, 0),
    [842] = {.count = 1}, SHIFT(299, 0),
    [844] = {.count = 1}, SHIFT(286, 0),
    [846] = {.count = 1}, SHIFT(287, 0),
    [848] = {.count = 1}, SHIFT(288, 0),
    [850] = {.count = 1}, SHIFT(295, 0),
    [852] = {.count = 1}, SHIFT(296, 0),
    [854] = {.count = 1}, SHIFT(289, 0),
    [856] = {.count = 1}, SHIFT(290, 0),
    [858] = {.count = 1}, SHIFT(291, 0),
    [860] = {.count = 1}, SHIFT(292, 0),
    [862] = {.count = 1}, SHIFT(293, 0),
    [864] = {.count = 1}, SHIFT(294, 0),
    [866] = {.count = 1}, SHIFT(297, 0),
    [868] = {.count = 1}, SHIFT(300, 0),
    [870] = {.count = 1}, SHIFT(301, 0),
    [872] = {.count = 1}, SHIFT(304, 0),
    [874] = {.count = 1}, SHIFT(305, 0),
    [876] = {.count = 1}, SHIFT(306, 0),
    [878] = {.count = 1}, SHIFT(308, 0),
    [880] = {.count = 1}, SHIFT(309, 0),
    [882] = {.count = 1}, SHIFT(310, 0),
    [884] = {.count = 1}, SHIFT(312, 0),
    [886] = {.count = 1}, SHIFT(322, 0),
    [888] = {.count = 1}, SHIFT(323, 0),
    [890] = {.count = 1}, SHIFT(311, 0),
    [892] = {.count = 1}, SHIFT(318, 0),
    [894] = {.count = 1}, SHIFT(313, 0),
    [896] = {.count = 1}, SHIFT(314, 0),
    [898] = {.count = 1}, SHIFT(315, 0),
    [900] = {.count = 1}, SHIFT(316, 0),
    [902] = {.count = 1}, SHIFT(317, 0),
    [904] = {.count = 1}, SHIFT(319, 0),
    [906] = {.count = 1}, SHIFT(320, 0),
    [908] = {.count = 1}, SHIFT(321, 0),
    [910] = {.count = 1}, SHIFT(324, 0),
    [912] = {.count = 1}, SHIFT(326, 0),
    [914] = {.count = 1}, SHIFT(327, 0),
    [916] = {.count = 1}, SHIFT(328, 0),
    [918] = {.count = 1}, SHIFT(329, 0),
    [920] = {.count = 1}, SHIFT(335, 0),
    [922] = {.count = 1}, SHIFT(336, 0),
    [924] = {.count = 1}, SHIFT(330, 0),
    [926] = {.count = 1}, SHIFT(331, 0),
    [928] = {.count = 1}, SHIFT(332, 0),
    [930] = {.count = 1}, SHIFT(333, 0),
    [932] = {.count = 1}, SHIFT(334, 0),
    [934] = {.count = 1}, SHIFT(337, 0),
    [936] = {.count = 1}, SHIFT(338, 0),
    [938] = {.count = 1}, SHIFT(339, 0),
    [940] = {.count = 1}, SHIFT(341, 0),
    [942] = {.count = 1}, SHIFT(342, 0),
    [944] = {.count = 1}, SHIFT(343, 0),
    [946] = {.count = 1}, SHIFT(344, 0),
    [948] = {.count = 1}, SHIFT(345, 0),
    [950] = {.count = 1}, SHIFT(352, 0),
    [952] = {.count = 1}, SHIFT(347, 0),
    [954] = {.count = 1}, SHIFT(354, 0),
    [956] = {.count = 1}, SHIFT(346, 0),
    [958] = {.count = 1}, SHIFT(348, 0),
    [960] = {.count = 1}, SHIFT(349, 0),
    [962] = {.count = 1}, SHIFT(350, 0),
    [964] = {.count = 1}, SHIFT(363, 0),
    [966] = {.count = 1}, SHIFT(359, 0),
    [968] = {.count = 1}, SHIFT(358, 0),
    [970] = {.count = 1}, SHIFT(355, 0),
    [972] = {.count = 1}, SHIFT(356, 0),
    [974] = {.count = 1}, SHIFT(357, 0),
    [976] = {.count = 1}, REDUCE(sym__then_else_block, 6, 0),
    [978] = {.count = 1}, SHIFT(360, 0),
    [980] = {.count = 1}, SHIFT(361, 0),
    [982] = {.count = 1}, SHIFT(362, 0),
    [984] = {.count = 1}, REDUCE(sym__then_else_block, 7, 0),
    [986] = {.count = 1}, SHIFT(364, 0),
    [988] = {.count = 1}, SHIFT(366, 0),
    [990] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [992] = {.count = 1}, SHIFT(368, 0),
    [994] = {.count = 1}, REDUCE(sym_if_statement, 3, 0),
    [996] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [998] = {.count = 1}, SHIFT(380, 0),
    [1000] = {.count = 1}, SHIFT(375, 0),
    [1002] = {.count = 1}, SHIFT(376, 0),
    [1004] = {.count = 1}, SHIFT(377, 0),
    [1006] = {.count = 1}, SHIFT(378, 0),
    [1008] = {.count = 1}, SHIFT(379, 0),
    [1010] = {.count = 1}, SHIFT(382, 0),
    [1012] = {.count = 1}, SHIFT(383, 0),
    [1014] = {.count = 1}, SHIFT(389, 0),
    [1016] = {.count = 1}, SHIFT(385, 0),
    [1018] = {.count = 1}, SHIFT(384, 0),
    [1020] = {.count = 1}, SHIFT(386, 0),
    [1022] = {.count = 1}, SHIFT(387, 0),
    [1024] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [1026] = {.count = 1}, SHIFT(388, 0),
    [1028] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [1030] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [1032] = {.count = 1}, SHIFT(395, 0),
    [1034] = {.count = 1}, SHIFT(392, 0),
    [1036] = {.count = 1}, SHIFT(393, 0),
    [1038] = {.count = 1}, SHIFT(394, 0),
    [1040] = {.count = 1}, SHIFT(396, 0),
    [1042] = {.count = 1}, SHIFT(397, 0),
    [1044] = {.count = 1}, SHIFT(398, 0),
    [1046] = {.count = 1}, SHIFT(400, 0),
    [1048] = {.count = 1}, SHIFT(402, 0),
    [1050] = {.count = 1}, SHIFT(413, 0),
    [1052] = {.count = 1}, SHIFT(408, 0),
    [1054] = {.count = 1}, SHIFT(409, 0),
    [1056] = {.count = 1}, SHIFT(410, 0),
    [1058] = {.count = 1}, SHIFT(411, 0),
    [1060] = {.count = 1}, SHIFT(412, 0),
    [1062] = {.count = 1}, SHIFT(415, 0),
    [1064] = {.count = 1}, SHIFT(416, 0),
    [1066] = {.count = 1}, SHIFT(422, 0),
    [1068] = {.count = 1}, SHIFT(418, 0),
    [1070] = {.count = 1}, SHIFT(417, 0),
    [1072] = {.count = 1}, SHIFT(419, 0),
    [1074] = {.count = 1}, SHIFT(420, 0),
    [1076] = {.count = 1}, SHIFT(421, 0),
    [1078] = {.count = 1}, SHIFT(425, 0),
    [1080] = {.count = 1}, SHIFT(428, 0),
    [1082] = {.count = 1}, SHIFT(429, 0),
    [1084] = {.count = 1}, SHIFT(442, 0),
    [1086] = {.count = 1}, SHIFT(443, 0),
    [1088] = {.count = 1}, SHIFT(430, 0),
    [1090] = {.count = 1}, SHIFT(431, 0),
    [1092] = {.count = 1}, SHIFT(432, 0),
    [1094] = {.count = 1}, SHIFT(439, 0),
    [1096] = {.count = 1}, SHIFT(440, 0),
    [1098] = {.count = 1}, SHIFT(433, 0),
    [1100] = {.count = 1}, SHIFT(434, 0),
    [1102] = {.count = 1}, SHIFT(435, 0),
    [1104] = {.count = 1}, SHIFT(436, 0),
    [1106] = {.count = 1}, SHIFT(437, 0),
    [1108] = {.count = 1}, SHIFT(438, 0),
    [1110] = {.count = 1}, SHIFT(441, 0),
    [1112] = {.count = 1}, SHIFT(444, 0),
    [1114] = {.count = 1}, SHIFT(445, 0),
    [1116] = {.count = 1}, SHIFT(448, 0),
    [1118] = {.count = 1}, SHIFT(449, 0),
    [1120] = {.count = 1}, SHIFT(450, 0),
    [1122] = {.count = 1}, SHIFT(452, 0),
    [1124] = {.count = 1}, SHIFT(453, 0),
    [1126] = {.count = 1}, SHIFT(454, 0),
    [1128] = {.count = 1}, SHIFT(456, 0),
    [1130] = {.count = 1}, SHIFT(466, 0),
    [1132] = {.count = 1}, SHIFT(467, 0),
    [1134] = {.count = 1}, SHIFT(455, 0),
    [1136] = {.count = 1}, SHIFT(462, 0),
    [1138] = {.count = 1}, SHIFT(457, 0),
    [1140] = {.count = 1}, SHIFT(458, 0),
    [1142] = {.count = 1}, SHIFT(459, 0),
    [1144] = {.count = 1}, SHIFT(460, 0),
    [1146] = {.count = 1}, SHIFT(461, 0),
    [1148] = {.count = 1}, SHIFT(463, 0),
    [1150] = {.count = 1}, SHIFT(464, 0),
    [1152] = {.count = 1}, SHIFT(465, 0),
    [1154] = {.count = 1}, SHIFT(468, 0),
    [1156] = {.count = 1}, SHIFT(470, 0),
    [1158] = {.count = 1}, SHIFT(471, 0),
    [1160] = {.count = 1}, SHIFT(472, 0),
    [1162] = {.count = 1}, SHIFT(473, 0),
    [1164] = {.count = 1}, SHIFT(479, 0),
    [1166] = {.count = 1}, SHIFT(480, 0),
    [1168] = {.count = 1}, SHIFT(474, 0),
    [1170] = {.count = 1}, SHIFT(475, 0),
    [1172] = {.count = 1}, SHIFT(476, 0),
    [1174] = {.count = 1}, SHIFT(477, 0),
    [1176] = {.count = 1}, SHIFT(478, 0),
    [1178] = {.count = 1}, SHIFT(481, 0),
    [1180] = {.count = 1}, SHIFT(482, 0),
    [1182] = {.count = 1}, SHIFT(483, 0),
    [1184] = {.count = 1}, SHIFT(485, 0),
    [1186] = {.count = 1}, SHIFT(486, 0),
    [1188] = {.count = 1}, SHIFT(487, 0),
    [1190] = {.count = 1}, SHIFT(488, 0),
    [1192] = {.count = 1}, SHIFT(489, 0),
    [1194] = {.count = 1}, SHIFT(495, 0),
    [1196] = {.count = 1}, SHIFT(491, 0),
    [1198] = {.count = 1}, SHIFT(496, 0),
    [1200] = {.count = 1}, SHIFT(490, 0),
    [1202] = {.count = 1}, SHIFT(492, 0),
    [1204] = {.count = 1}, SHIFT(493, 0),
    [1206] = {.count = 1}, SHIFT(494, 0),
    [1208] = {.count = 1}, SHIFT(500, 0),
    [1210] = {.count = 1}, SHIFT(497, 0),
    [1212] = {.count = 1}, SHIFT(498, 0),
    [1214] = {.count = 1}, SHIFT(499, 0),
    [1216] = {.count = 1}, SHIFT(501, 0),
    [1218] = {.count = 1}, SHIFT(502, 0),
    [1220] = {.count = 1}, SHIFT(503, 0),
    [1222] = {.count = 1}, SHIFT(505, 0),
    [1224] = {.count = 1}, SHIFT(507, 0),
    [1226] = {.count = 1}, SHIFT(518, 0),
    [1228] = {.count = 1}, SHIFT(513, 0),
    [1230] = {.count = 1}, SHIFT(514, 0),
    [1232] = {.count = 1}, SHIFT(515, 0),
    [1234] = {.count = 1}, SHIFT(516, 0),
    [1236] = {.count = 1}, SHIFT(517, 0),
    [1238] = {.count = 1}, SHIFT(520, 0),
    [1240] = {.count = 1}, SHIFT(521, 0),
    [1242] = {.count = 1}, SHIFT(527, 0),
    [1244] = {.count = 1}, SHIFT(523, 0),
    [1246] = {.count = 1}, SHIFT(522, 0),
    [1248] = {.count = 1}, SHIFT(524, 0),
    [1250] = {.count = 1}, SHIFT(525, 0),
    [1252] = {.count = 1}, SHIFT(526, 0),
    [1254] = {.count = 1}, SHIFT(530, 0),
    [1256] = {.count = 1}, SHIFT(538, 0),
    [1258] = {.count = 1}, SHIFT(533, 0),
    [1260] = {.count = 1}, SHIFT(534, 0),
    [1262] = {.count = 1}, SHIFT(535, 0),
    [1264] = {.count = 1}, SHIFT(536, 0),
    [1266] = {.count = 1}, SHIFT(537, 0),
    [1268] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [1270] = {.count = 1}, SHIFT(541, 0),
    [1272] = {.count = 1}, SHIFT(542, 0),
    [1274] = {.count = 1}, SHIFT(544, 0),
    [1276] = {.count = 1}, SHIFT(545, 0),
    [1278] = {.count = 1}, SHIFT(546, 0),
    [1280] = {.count = 1}, SHIFT(547, 0),
    [1282] = {.count = 1}, SHIFT(548, 0),
    [1284] = {.count = 1}, SHIFT(549, 0),
    [1286] = {.count = 1}, SHIFT(552, 0),
    [1288] = {.count = 1}, SHIFT(553, 0),
    [1290] = {.count = 1}, SHIFT(566, 0),
    [1292] = {.count = 1}, SHIFT(567, 0),
    [1294] = {.count = 1}, SHIFT(554, 0),
    [1296] = {.count = 1}, SHIFT(555, 0),
    [1298] = {.count = 1}, SHIFT(556, 0),
    [1300] = {.count = 1}, SHIFT(563, 0),
    [1302] = {.count = 1}, SHIFT(564, 0),
    [1304] = {.count = 1}, SHIFT(557, 0),
    [1306] = {.count = 1}, SHIFT(558, 0),
    [1308] = {.count = 1}, SHIFT(559, 0),
    [1310] = {.count = 1}, SHIFT(560, 0),
    [1312] = {.count = 1}, SHIFT(561, 0),
    [1314] = {.count = 1}, SHIFT(562, 0),
    [1316] = {.count = 1}, SHIFT(565, 0),
    [1318] = {.count = 1}, SHIFT(568, 0),
    [1320] = {.count = 1}, SHIFT(569, 0),
    [1322] = {.count = 1}, SHIFT(572, 0),
    [1324] = {.count = 1}, SHIFT(573, 0),
    [1326] = {.count = 1}, SHIFT(574, 0),
    [1328] = {.count = 1}, SHIFT(576, 0),
    [1330] = {.count = 1}, SHIFT(577, 0),
    [1332] = {.count = 1}, SHIFT(578, 0),
    [1334] = {.count = 1}, SHIFT(580, 0),
    [1336] = {.count = 1}, SHIFT(590, 0),
    [1338] = {.count = 1}, SHIFT(591, 0),
    [1340] = {.count = 1}, SHIFT(579, 0),
    [1342] = {.count = 1}, SHIFT(586, 0),
    [1344] = {.count = 1}, SHIFT(581, 0),
    [1346] = {.count = 1}, SHIFT(582, 0),
    [1348] = {.count = 1}, SHIFT(583, 0),
    [1350] = {.count = 1}, SHIFT(584, 0),
    [1352] = {.count = 1}, SHIFT(585, 0),
    [1354] = {.count = 1}, SHIFT(587, 0),
    [1356] = {.count = 1}, SHIFT(588, 0),
    [1358] = {.count = 1}, SHIFT(589, 0),
    [1360] = {.count = 1}, SHIFT(592, 0),
    [1362] = {.count = 1}, SHIFT(594, 0),
    [1364] = {.count = 1}, SHIFT(595, 0),
    [1366] = {.count = 1}, SHIFT(596, 0),
    [1368] = {.count = 1}, SHIFT(597, 0),
    [1370] = {.count = 1}, SHIFT(603, 0),
    [1372] = {.count = 1}, SHIFT(604, 0),
    [1374] = {.count = 1}, SHIFT(598, 0),
    [1376] = {.count = 1}, SHIFT(599, 0),
    [1378] = {.count = 1}, SHIFT(600, 0),
    [1380] = {.count = 1}, SHIFT(601, 0),
    [1382] = {.count = 1}, SHIFT(602, 0),
    [1384] = {.count = 1}, SHIFT(605, 0),
    [1386] = {.count = 1}, SHIFT(606, 0),
    [1388] = {.count = 1}, SHIFT(607, 0),
    [1390] = {.count = 1}, SHIFT(609, 0),
    [1392] = {.count = 1}, SHIFT(610, 0),
    [1394] = {.count = 1}, SHIFT(611, 0),
    [1396] = {.count = 1}, SHIFT(612, 0),
    [1398] = {.count = 1}, SHIFT(613, 0),
    [1400] = {.count = 1}, SHIFT(619, 0),
    [1402] = {.count = 1}, SHIFT(615, 0),
    [1404] = {.count = 1}, SHIFT(620, 0),
    [1406] = {.count = 1}, SHIFT(614, 0),
    [1408] = {.count = 1}, SHIFT(616, 0),
    [1410] = {.count = 1}, SHIFT(617, 0),
    [1412] = {.count = 1}, SHIFT(618, 0),
    [1414] = {.count = 1}, SHIFT(624, 0),
    [1416] = {.count = 1}, SHIFT(621, 0),
    [1418] = {.count = 1}, SHIFT(622, 0),
    [1420] = {.count = 1}, SHIFT(623, 0),
    [1422] = {.count = 1}, SHIFT(625, 0),
    [1424] = {.count = 1}, SHIFT(626, 0),
    [1426] = {.count = 1}, SHIFT(627, 0),
    [1428] = {.count = 1}, SHIFT(629, 0),
    [1430] = {.count = 1}, SHIFT(631, 0),
    [1432] = {.count = 1}, SHIFT(633, 0),
    [1434] = {.count = 1}, SHIFT(643, 0),
    [1436] = {.count = 1}, SHIFT(638, 0),
    [1438] = {.count = 1}, SHIFT(639, 0),
    [1440] = {.count = 1}, SHIFT(640, 0),
    [1442] = {.count = 1}, SHIFT(641, 0),
    [1444] = {.count = 1}, SHIFT(642, 0),
    [1446] = {.count = 1}, SHIFT(645, 0),
    [1448] = {.count = 1}, SHIFT(646, 0),
    [1450] = {.count = 1}, SHIFT(652, 0),
    [1452] = {.count = 1}, SHIFT(648, 0),
    [1454] = {.count = 1}, SHIFT(647, 0),
    [1456] = {.count = 1}, SHIFT(649, 0),
    [1458] = {.count = 1}, SHIFT(650, 0),
    [1460] = {.count = 1}, SHIFT(651, 0),
    [1462] = {.count = 1}, SHIFT(656, 0),
    [1464] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [1466] = {.count = 1}, SHIFT(657, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
