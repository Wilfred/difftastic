#include "tree_sitter/parser.h"

#define STATE_COUNT 431
#define SYMBOL_COUNT 80

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
    sym_condition,
    sym__statement_block,
    sym__do_block,
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
    [sym_condition] = "condition",
    [sym__statement_block] = "_statement_block",
    [sym__do_block] = "_do_block",
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
    [sym_condition] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__do_block] = {.visible = false, .named = false, .structural = true, .extra = false},
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
                (lookahead == 't') ||
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
                ADVANCE(79);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(98);
            if (lookahead == 'w')
                ADVANCE(110);
            if (lookahead == '|')
                ADVANCE(115);
            if (lookahead == '~')
                ADVANCE(116);
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_end);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(91);
            if (lookahead == 'u')
                ADVANCE(94);
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
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_self);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
                ADVANCE(95);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(96);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(99);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(100);
            if (lookahead == 'l')
                ADVANCE(103);
            if (lookahead == 't')
                ADVANCE(107);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(101);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(102);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(104);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(105);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(106);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(109);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(111);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(112);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(113);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(114);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 115:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 116:
            ACCEPT_TOKEN(anon_sym_TILDE);
        case 117:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
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
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
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
                ADVANCE(119);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == 'w')
                ADVANCE(110);
            LEX_ERROR();
        case 118:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(121);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(100);
            if (lookahead == 't')
                ADVANCE(107);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 122:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(118);
            LEX_ERROR();
        case 123:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 124:
            if (lookahead == 'f')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            ACCEPT_TOKEN(anon_sym_if);
        case 126:
            if (lookahead == 'n')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'l')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(132);
            LEX_ERROR();
        case 128:
            if (lookahead == 'e')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 's')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 's')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_unless);
        case 132:
            if (lookahead == 'i')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'l')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            ACCEPT_TOKEN(anon_sym_until);
        case 135:
            if (lookahead == 'h')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'i')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 'l')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'e')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_while);
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'd')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'o')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(anon_sym_do);
        case 143:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 144:
            if (lookahead == ':')
                ADVANCE(25);
            LEX_ERROR();
        case 145:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
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
                ADVANCE(147);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == '|')
                ADVANCE(115);
            if (lookahead == '~')
                ADVANCE(116);
            LEX_ERROR();
        case 147:
            if (lookahead == ']')
                ADVANCE(58);
            LEX_ERROR();
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
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
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
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
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
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
                ADVANCE(119);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == 'w')
                ADVANCE(110);
            LEX_ERROR();
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
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
                ADVANCE(153);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            LEX_ERROR();
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'd')
                ADVANCE(141);
            LEX_ERROR();
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
            if (lookahead == 'd')
                ADVANCE(141);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
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
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == 'w')
                ADVANCE(110);
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
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(162);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(163);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
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
                ADVANCE(76);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == 'w')
                ADVANCE(110);
            LEX_ERROR();
        case 162:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 163:
            ACCEPT_TOKEN(anon_sym_LT);
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
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(165);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 165:
            if (lookahead == 'n')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'd')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            ACCEPT_TOKEN(anon_sym_end);
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
            if (lookahead == 'e')
                ADVANCE(165);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
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
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
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
                ADVANCE(119);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == 'w')
                ADVANCE(110);
            LEX_ERROR();
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(165);
            LEX_ERROR();
        case 171:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
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
                ADVANCE(118);
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
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(98);
            if (lookahead == 'w')
                ADVANCE(110);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(163);
            if (lookahead == '=')
                ADVANCE(118);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            LEX_ERROR();
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'd')
                ADVANCE(141);
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
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
            if (lookahead == 'd')
                ADVANCE(141);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
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
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(149);
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(149);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
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
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'm')
                ADVANCE(81);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == 'w')
                ADVANCE(110);
            if (lookahead == '|')
                ADVANCE(115);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 117,
    [1] = 122,
    [2] = 123,
    [3] = 123,
    [4] = 123,
    [5] = 140,
    [6] = 140,
    [7] = 123,
    [8] = 143,
    [9] = 143,
    [10] = 146,
    [11] = 146,
    [12] = 148,
    [13] = 148,
    [14] = 146,
    [15] = 150,
    [16] = 151,
    [17] = 151,
    [18] = 151,
    [19] = 152,
    [20] = 143,
    [21] = 140,
    [22] = 140,
    [23] = 154,
    [24] = 155,
    [25] = 155,
    [26] = 150,
    [27] = 151,
    [28] = 156,
    [29] = 155,
    [30] = 155,
    [31] = 157,
    [32] = 157,
    [33] = 157,
    [34] = 140,
    [35] = 157,
    [36] = 158,
    [37] = 158,
    [38] = 146,
    [39] = 146,
    [40] = 148,
    [41] = 148,
    [42] = 146,
    [43] = 150,
    [44] = 155,
    [45] = 151,
    [46] = 151,
    [47] = 151,
    [48] = 158,
    [49] = 159,
    [50] = 160,
    [51] = 161,
    [52] = 160,
    [53] = 164,
    [54] = 164,
    [55] = 164,
    [56] = 140,
    [57] = 164,
    [58] = 168,
    [59] = 168,
    [60] = 157,
    [61] = 146,
    [62] = 146,
    [63] = 148,
    [64] = 148,
    [65] = 146,
    [66] = 150,
    [67] = 151,
    [68] = 151,
    [69] = 151,
    [70] = 168,
    [71] = 159,
    [72] = 160,
    [73] = 164,
    [74] = 164,
    [75] = 169,
    [76] = 170,
    [77] = 164,
    [78] = 148,
    [79] = 171,
    [80] = 169,
    [81] = 164,
    [82] = 164,
    [83] = 164,
    [84] = 170,
    [85] = 168,
    [86] = 172,
    [87] = 160,
    [88] = 151,
    [89] = 173,
    [90] = 160,
    [91] = 159,
    [92] = 151,
    [93] = 173,
    [94] = 159,
    [95] = 160,
    [96] = 164,
    [97] = 164,
    [98] = 170,
    [99] = 164,
    [100] = 164,
    [101] = 164,
    [102] = 164,
    [103] = 170,
    [104] = 164,
    [105] = 164,
    [106] = 170,
    [107] = 164,
    [108] = 157,
    [109] = 168,
    [110] = 169,
    [111] = 174,
    [112] = 148,
    [113] = 168,
    [114] = 157,
    [115] = 168,
    [116] = 157,
    [117] = 174,
    [118] = 175,
    [119] = 175,
    [120] = 159,
    [121] = 160,
    [122] = 176,
    [123] = 151,
    [124] = 177,
    [125] = 159,
    [126] = 178,
    [127] = 151,
    [128] = 177,
    [129] = 159,
    [130] = 177,
    [131] = 159,
    [132] = 177,
    [133] = 159,
    [134] = 174,
    [135] = 160,
    [136] = 151,
    [137] = 179,
    [138] = 174,
    [139] = 178,
    [140] = 151,
    [141] = 179,
    [142] = 174,
    [143] = 179,
    [144] = 174,
    [145] = 179,
    [146] = 174,
    [147] = 164,
    [148] = 164,
    [149] = 170,
    [150] = 164,
    [151] = 164,
    [152] = 160,
    [153] = 164,
    [154] = 170,
    [155] = 164,
    [156] = 164,
    [157] = 164,
    [158] = 170,
    [159] = 180,
    [160] = 180,
    [161] = 180,
    [162] = 181,
    [163] = 181,
    [164] = 150,
    [165] = 151,
    [166] = 181,
    [167] = 181,
    [168] = 157,
    [169] = 181,
    [170] = 174,
    [171] = 181,
    [172] = 181,
    [173] = 151,
    [174] = 182,
    [175] = 183,
    [176] = 184,
    [177] = 184,
    [178] = 150,
    [179] = 151,
    [180] = 181,
    [181] = 184,
    [182] = 184,
    [183] = 157,
    [184] = 184,
    [185] = 174,
    [186] = 184,
    [187] = 184,
    [188] = 151,
    [189] = 182,
    [190] = 183,
    [191] = 184,
    [192] = 185,
    [193] = 186,
    [194] = 184,
    [195] = 183,
    [196] = 185,
    [197] = 184,
    [198] = 184,
    [199] = 185,
    [200] = 181,
    [201] = 181,
    [202] = 181,
    [203] = 164,
    [204] = 164,
    [205] = 160,
    [206] = 160,
    [207] = 164,
    [208] = 164,
    [209] = 170,
    [210] = 164,
    [211] = 164,
    [212] = 164,
    [213] = 164,
    [214] = 170,
    [215] = 164,
    [216] = 164,
    [217] = 180,
    [218] = 164,
    [219] = 146,
    [220] = 146,
    [221] = 164,
    [222] = 164,
    [223] = 151,
    [224] = 182,
    [225] = 183,
    [226] = 168,
    [227] = 185,
    [228] = 168,
    [229] = 168,
    [230] = 168,
    [231] = 187,
    [232] = 164,
    [233] = 160,
    [234] = 164,
    [235] = 164,
    [236] = 170,
    [237] = 164,
    [238] = 164,
    [239] = 170,
    [240] = 170,
    [241] = 157,
    [242] = 157,
    [243] = 158,
    [244] = 172,
    [245] = 160,
    [246] = 151,
    [247] = 173,
    [248] = 160,
    [249] = 159,
    [250] = 160,
    [251] = 164,
    [252] = 157,
    [253] = 170,
    [254] = 157,
    [255] = 157,
    [256] = 164,
    [257] = 157,
    [258] = 170,
    [259] = 164,
    [260] = 157,
    [261] = 170,
    [262] = 157,
    [263] = 157,
    [264] = 158,
    [265] = 174,
    [266] = 158,
    [267] = 158,
    [268] = 175,
    [269] = 159,
    [270] = 160,
    [271] = 176,
    [272] = 174,
    [273] = 160,
    [274] = 164,
    [275] = 157,
    [276] = 170,
    [277] = 157,
    [278] = 157,
    [279] = 160,
    [280] = 164,
    [281] = 170,
    [282] = 157,
    [283] = 164,
    [284] = 157,
    [285] = 170,
    [286] = 180,
    [287] = 157,
    [288] = 157,
    [289] = 160,
    [290] = 160,
    [291] = 164,
    [292] = 157,
    [293] = 170,
    [294] = 157,
    [295] = 157,
    [296] = 164,
    [297] = 157,
    [298] = 170,
    [299] = 157,
    [300] = 157,
    [301] = 180,
    [302] = 157,
    [303] = 146,
    [304] = 157,
    [305] = 157,
    [306] = 151,
    [307] = 182,
    [308] = 183,
    [309] = 158,
    [310] = 185,
    [311] = 158,
    [312] = 158,
    [313] = 158,
    [314] = 187,
    [315] = 164,
    [316] = 160,
    [317] = 164,
    [318] = 157,
    [319] = 170,
    [320] = 157,
    [321] = 157,
    [322] = 170,
    [323] = 174,
    [324] = 155,
    [325] = 155,
    [326] = 151,
    [327] = 182,
    [328] = 183,
    [329] = 155,
    [330] = 185,
    [331] = 155,
    [332] = 155,
    [333] = 155,
    [334] = 140,
    [335] = 186,
    [336] = 154,
    [337] = 140,
    [338] = 159,
    [339] = 160,
    [340] = 164,
    [341] = 123,
    [342] = 170,
    [343] = 123,
    [344] = 123,
    [345] = 143,
    [346] = 172,
    [347] = 160,
    [348] = 151,
    [349] = 173,
    [350] = 160,
    [351] = 159,
    [352] = 160,
    [353] = 164,
    [354] = 123,
    [355] = 170,
    [356] = 123,
    [357] = 123,
    [358] = 164,
    [359] = 123,
    [360] = 170,
    [361] = 164,
    [362] = 123,
    [363] = 170,
    [364] = 123,
    [365] = 157,
    [366] = 143,
    [367] = 174,
    [368] = 143,
    [369] = 143,
    [370] = 175,
    [371] = 159,
    [372] = 160,
    [373] = 176,
    [374] = 174,
    [375] = 160,
    [376] = 164,
    [377] = 123,
    [378] = 170,
    [379] = 123,
    [380] = 123,
    [381] = 160,
    [382] = 164,
    [383] = 170,
    [384] = 123,
    [385] = 164,
    [386] = 123,
    [387] = 170,
    [388] = 180,
    [389] = 123,
    [390] = 123,
    [391] = 160,
    [392] = 160,
    [393] = 164,
    [394] = 123,
    [395] = 170,
    [396] = 123,
    [397] = 123,
    [398] = 164,
    [399] = 123,
    [400] = 170,
    [401] = 123,
    [402] = 123,
    [403] = 180,
    [404] = 123,
    [405] = 146,
    [406] = 123,
    [407] = 123,
    [408] = 123,
    [409] = 151,
    [410] = 182,
    [411] = 183,
    [412] = 143,
    [413] = 185,
    [414] = 143,
    [415] = 143,
    [416] = 143,
    [417] = 187,
    [418] = 164,
    [419] = 160,
    [420] = 164,
    [421] = 123,
    [422] = 170,
    [423] = 123,
    [424] = 123,
    [425] = 170,
    [426] = 169,
    [427] = 122,
    [428] = 148,
    [429] = 123,
    [430] = 122,
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
        [anon_sym_while] = 26,
        [anon_sym_until] = 28,
        [anon_sym_def] = 30,
        [anon_sym_LPAREN] = 32,
        [anon_sym_class] = 34,
        [anon_sym_COLON_COLON] = 36,
        [anon_sym_module] = 38,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 42,
        [anon_sym_self] = 42,
        [sym_identifier] = 42,
        [sym_comment] = 44,
        [sym_symbol] = 14,
        [sym__line_break] = 44,
    },
    [1] = {
        [ts_builtin_sym_end] = 46,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [2] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 50,
        [ts_builtin_sym_end] = 52,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [3] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [ts_builtin_sym_end] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [sym_comment] = 44,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [4] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [ts_builtin_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 44,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [5] = {
        [anon_sym_do] = 64,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [6] = {
        [anon_sym_do] = 66,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [7] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [8] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [ts_builtin_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 74,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [9] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [ts_builtin_sym_end] = 76,
        [anon_sym_if] = 76,
        [anon_sym_while] = 76,
        [anon_sym_unless] = 76,
        [anon_sym_until] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [10] = {
        [sym__function_name] = 78,
        [anon_sym_PIPE] = 80,
        [anon_sym_STAR] = 80,
        [anon_sym_AMP] = 80,
        [anon_sym_LT] = 80,
        [sym_identifier] = 80,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 80,
        [anon_sym_CARET] = 80,
        [anon_sym_LT_EQ_GT] = 80,
        [anon_sym_EQ_EQ] = 80,
        [anon_sym_EQ_EQ_EQ] = 80,
        [anon_sym_EQ_TILDE] = 80,
        [anon_sym_GT] = 80,
        [anon_sym_GT_EQ] = 80,
        [anon_sym_LT_EQ] = 80,
        [anon_sym_PLUS] = 80,
        [anon_sym_DASH] = 80,
        [anon_sym_SLASH] = 80,
        [anon_sym_PERCENT] = 80,
        [anon_sym_STAR_STAR] = 80,
        [anon_sym_LT_LT] = 80,
        [anon_sym_GT_GT] = 80,
        [anon_sym_TILDE] = 80,
        [anon_sym_PLUS_AT] = 80,
        [anon_sym_DASH_AT] = 80,
        [anon_sym_LBRACK_RBRACK] = 80,
        [anon_sym_LBRACK_RBRACK_EQ] = 80,
        [sym__line_break] = 44,
    },
    [11] = {
        [sym__function_name] = 82,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 44,
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
        [sym__line_break] = 44,
    },
    [12] = {
        [sym_condition] = 86,
        [sym__expression] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym_scope_resolution_expression] = 94,
        [sym_subscript_expression] = 94,
        [sym__variable] = 94,
        [anon_sym_LPAREN] = 96,
        [anon_sym_COLON_COLON] = 98,
        [anon_sym_nil] = 100,
        [anon_sym_self] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 44,
        [sym_symbol] = 90,
        [sym__line_break] = 44,
    },
    [13] = {
        [sym_condition] = 102,
        [sym__expression] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym_scope_resolution_expression] = 94,
        [sym_subscript_expression] = 94,
        [sym__variable] = 94,
        [anon_sym_LPAREN] = 96,
        [anon_sym_COLON_COLON] = 98,
        [anon_sym_nil] = 100,
        [anon_sym_self] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 44,
        [sym_symbol] = 90,
        [sym__line_break] = 44,
    },
    [14] = {
        [sym__function_name] = 104,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 106,
        [anon_sym_CARET] = 106,
        [anon_sym_LT_EQ_GT] = 106,
        [anon_sym_EQ_EQ] = 106,
        [anon_sym_EQ_EQ_EQ] = 106,
        [anon_sym_EQ_TILDE] = 106,
        [anon_sym_GT] = 106,
        [anon_sym_GT_EQ] = 106,
        [anon_sym_LT_EQ] = 106,
        [anon_sym_PLUS] = 106,
        [anon_sym_DASH] = 106,
        [anon_sym_SLASH] = 106,
        [anon_sym_PERCENT] = 106,
        [anon_sym_STAR_STAR] = 106,
        [anon_sym_LT_LT] = 106,
        [anon_sym_GT_GT] = 106,
        [anon_sym_TILDE] = 106,
        [anon_sym_PLUS_AT] = 106,
        [anon_sym_DASH_AT] = 106,
        [anon_sym_LBRACK_RBRACK] = 106,
        [anon_sym_LBRACK_RBRACK_EQ] = 106,
        [sym__line_break] = 44,
    },
    [15] = {
        [sym__statement] = 108,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 134,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [16] = {
        [sym_identifier] = 144,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [17] = {
        [sym_identifier] = 146,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [18] = {
        [sym_identifier] = 148,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [19] = {
        [sym__call_arguments] = 150,
        [sym__command] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym_scope_resolution_expression] = 158,
        [sym_subscript_expression] = 158,
        [sym__variable] = 158,
        [anon_sym_do] = 160,
        [anon_sym_LPAREN] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_super] = 166,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [20] = {
        [sym__terminator] = 170,
        [aux_sym_program_repeat1] = 170,
        [ts_builtin_sym_end] = 170,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [21] = {
        [anon_sym_do] = 172,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [22] = {
        [anon_sym_do] = 174,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [23] = {
        [aux_sym__call_arguments_repeat1] = 176,
        [anon_sym_do] = 174,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [24] = {
        [aux_sym__call_arguments_repeat1] = 70,
        [anon_sym_do] = 70,
        [anon_sym_COMMA] = 70,
        [anon_sym_COLON_COLON] = 180,
        [anon_sym_LBRACK] = 182,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 76,
        [anon_sym_do] = 76,
        [anon_sym_COMMA] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [26] = {
        [sym__statement] = 184,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 186,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [27] = {
        [sym_identifier] = 188,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [28] = {
        [sym__call_arguments] = 150,
        [sym__command] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym_scope_resolution_expression] = 158,
        [sym_subscript_expression] = 158,
        [sym__variable] = 158,
        [anon_sym_LPAREN] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_super] = 166,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [29] = {
        [aux_sym__call_arguments_repeat1] = 170,
        [anon_sym_do] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [30] = {
        [aux_sym__call_arguments_repeat1] = 190,
        [anon_sym_do] = 190,
        [anon_sym_COMMA] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [31] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 194,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 198,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [32] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [anon_sym_RPAREN] = 60,
        [sym_comment] = 44,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [33] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [anon_sym_RPAREN] = 62,
        [sym_comment] = 44,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [34] = {
        [anon_sym_do] = 200,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [35] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [anon_sym_RPAREN] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [36] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_RPAREN] = 70,
        [anon_sym_COLON_COLON] = 202,
        [anon_sym_LBRACK] = 204,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [37] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_if] = 76,
        [anon_sym_while] = 76,
        [anon_sym_unless] = 76,
        [anon_sym_until] = 76,
        [anon_sym_RPAREN] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [38] = {
        [sym__function_name] = 206,
        [anon_sym_PIPE] = 208,
        [anon_sym_STAR] = 208,
        [anon_sym_AMP] = 208,
        [anon_sym_LT] = 208,
        [sym_identifier] = 208,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 208,
        [anon_sym_CARET] = 208,
        [anon_sym_LT_EQ_GT] = 208,
        [anon_sym_EQ_EQ] = 208,
        [anon_sym_EQ_EQ_EQ] = 208,
        [anon_sym_EQ_TILDE] = 208,
        [anon_sym_GT] = 208,
        [anon_sym_GT_EQ] = 208,
        [anon_sym_LT_EQ] = 208,
        [anon_sym_PLUS] = 208,
        [anon_sym_DASH] = 208,
        [anon_sym_SLASH] = 208,
        [anon_sym_PERCENT] = 208,
        [anon_sym_STAR_STAR] = 208,
        [anon_sym_LT_LT] = 208,
        [anon_sym_GT_GT] = 208,
        [anon_sym_TILDE] = 208,
        [anon_sym_PLUS_AT] = 208,
        [anon_sym_DASH_AT] = 208,
        [anon_sym_LBRACK_RBRACK] = 208,
        [anon_sym_LBRACK_RBRACK_EQ] = 208,
        [sym__line_break] = 44,
    },
    [39] = {
        [sym__function_name] = 210,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 44,
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
        [sym__line_break] = 44,
    },
    [40] = {
        [sym_condition] = 212,
        [sym__expression] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym_scope_resolution_expression] = 94,
        [sym_subscript_expression] = 94,
        [sym__variable] = 94,
        [anon_sym_LPAREN] = 96,
        [anon_sym_COLON_COLON] = 98,
        [anon_sym_nil] = 100,
        [anon_sym_self] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 44,
        [sym_symbol] = 90,
        [sym__line_break] = 44,
    },
    [41] = {
        [sym_condition] = 214,
        [sym__expression] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym_scope_resolution_expression] = 94,
        [sym_subscript_expression] = 94,
        [sym__variable] = 94,
        [anon_sym_LPAREN] = 96,
        [anon_sym_COLON_COLON] = 98,
        [anon_sym_nil] = 100,
        [anon_sym_self] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 44,
        [sym_symbol] = 90,
        [sym__line_break] = 44,
    },
    [42] = {
        [sym__function_name] = 216,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 106,
        [anon_sym_CARET] = 106,
        [anon_sym_LT_EQ_GT] = 106,
        [anon_sym_EQ_EQ] = 106,
        [anon_sym_EQ_EQ_EQ] = 106,
        [anon_sym_EQ_TILDE] = 106,
        [anon_sym_GT] = 106,
        [anon_sym_GT_EQ] = 106,
        [anon_sym_LT_EQ] = 106,
        [anon_sym_PLUS] = 106,
        [anon_sym_DASH] = 106,
        [anon_sym_SLASH] = 106,
        [anon_sym_PERCENT] = 106,
        [anon_sym_STAR_STAR] = 106,
        [anon_sym_LT_LT] = 106,
        [anon_sym_GT_GT] = 106,
        [anon_sym_TILDE] = 106,
        [anon_sym_PLUS_AT] = 106,
        [anon_sym_DASH_AT] = 106,
        [anon_sym_LBRACK_RBRACK] = 106,
        [anon_sym_LBRACK_RBRACK_EQ] = 106,
        [sym__line_break] = 44,
    },
    [43] = {
        [sym__statement] = 218,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 220,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [44] = {
        [aux_sym__call_arguments_repeat1] = 222,
        [anon_sym_do] = 222,
        [anon_sym_COMMA] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [45] = {
        [sym_identifier] = 224,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [46] = {
        [sym_identifier] = 226,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [47] = {
        [sym_identifier] = 228,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [48] = {
        [sym__terminator] = 170,
        [aux_sym_program_repeat1] = 170,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [49] = {
        [sym__terminator] = 230,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [50] = {
        [sym__statement] = 236,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 250,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [51] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_argument_list] = 274,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym_while_statement] = 272,
        [sym_until_statement] = 272,
        [sym__statement_block] = 274,
        [sym__do_block] = 274,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym_scope_resolution_expression] = 272,
        [sym_subscript_expression] = 272,
        [sym__variable] = 272,
        [sym__terminator] = 274,
        [aux_sym_class_declaration_repeat1] = 274,
        [anon_sym_do] = 274,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_while] = 272,
        [anon_sym_until] = 272,
        [anon_sym_def] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_STAR] = 274,
        [anon_sym_AMP] = 274,
        [anon_sym_class] = 272,
        [anon_sym_LT] = 274,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 44,
        [sym_symbol] = 272,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 274,
    },
    [52] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym_while_statement] = 272,
        [sym_until_statement] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym_scope_resolution_expression] = 272,
        [sym_subscript_expression] = 272,
        [sym__variable] = 272,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_while] = 272,
        [anon_sym_until] = 272,
        [anon_sym_def] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_class] = 272,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 44,
        [sym_symbol] = 272,
        [sym__line_break] = 44,
    },
    [53] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 278,
        [anon_sym_end] = 280,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [54] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [anon_sym_end] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [sym_comment] = 44,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [55] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 44,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [56] = {
        [anon_sym_do] = 284,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [57] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [anon_sym_end] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [58] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_COLON_COLON] = 286,
        [anon_sym_LBRACK] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [59] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_end] = 76,
        [anon_sym_if] = 76,
        [anon_sym_while] = 76,
        [anon_sym_unless] = 76,
        [anon_sym_until] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [60] = {
        [sym__terminator] = 290,
        [aux_sym_program_repeat1] = 290,
        [anon_sym_if] = 290,
        [anon_sym_while] = 290,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 290,
        [anon_sym_RPAREN] = 290,
        [sym_comment] = 44,
        [sym__line_break] = 290,
        [anon_sym_SEMI] = 290,
    },
    [61] = {
        [sym__function_name] = 292,
        [anon_sym_PIPE] = 294,
        [anon_sym_STAR] = 294,
        [anon_sym_AMP] = 294,
        [anon_sym_LT] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 294,
        [anon_sym_CARET] = 294,
        [anon_sym_LT_EQ_GT] = 294,
        [anon_sym_EQ_EQ] = 294,
        [anon_sym_EQ_EQ_EQ] = 294,
        [anon_sym_EQ_TILDE] = 294,
        [anon_sym_GT] = 294,
        [anon_sym_GT_EQ] = 294,
        [anon_sym_LT_EQ] = 294,
        [anon_sym_PLUS] = 294,
        [anon_sym_DASH] = 294,
        [anon_sym_SLASH] = 294,
        [anon_sym_PERCENT] = 294,
        [anon_sym_STAR_STAR] = 294,
        [anon_sym_LT_LT] = 294,
        [anon_sym_GT_GT] = 294,
        [anon_sym_TILDE] = 294,
        [anon_sym_PLUS_AT] = 294,
        [anon_sym_DASH_AT] = 294,
        [anon_sym_LBRACK_RBRACK] = 294,
        [anon_sym_LBRACK_RBRACK_EQ] = 294,
        [sym__line_break] = 44,
    },
    [62] = {
        [sym__function_name] = 296,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 44,
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
        [sym__line_break] = 44,
    },
    [63] = {
        [sym_condition] = 298,
        [sym__expression] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym_scope_resolution_expression] = 94,
        [sym_subscript_expression] = 94,
        [sym__variable] = 94,
        [anon_sym_LPAREN] = 96,
        [anon_sym_COLON_COLON] = 98,
        [anon_sym_nil] = 100,
        [anon_sym_self] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 44,
        [sym_symbol] = 90,
        [sym__line_break] = 44,
    },
    [64] = {
        [sym_condition] = 300,
        [sym__expression] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym_scope_resolution_expression] = 94,
        [sym_subscript_expression] = 94,
        [sym__variable] = 94,
        [anon_sym_LPAREN] = 96,
        [anon_sym_COLON_COLON] = 98,
        [anon_sym_nil] = 100,
        [anon_sym_self] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 44,
        [sym_symbol] = 90,
        [sym__line_break] = 44,
    },
    [65] = {
        [sym__function_name] = 302,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 106,
        [anon_sym_CARET] = 106,
        [anon_sym_LT_EQ_GT] = 106,
        [anon_sym_EQ_EQ] = 106,
        [anon_sym_EQ_EQ_EQ] = 106,
        [anon_sym_EQ_TILDE] = 106,
        [anon_sym_GT] = 106,
        [anon_sym_GT_EQ] = 106,
        [anon_sym_LT_EQ] = 106,
        [anon_sym_PLUS] = 106,
        [anon_sym_DASH] = 106,
        [anon_sym_SLASH] = 106,
        [anon_sym_PERCENT] = 106,
        [anon_sym_STAR_STAR] = 106,
        [anon_sym_LT_LT] = 106,
        [anon_sym_GT_GT] = 106,
        [anon_sym_TILDE] = 106,
        [anon_sym_PLUS_AT] = 106,
        [anon_sym_DASH_AT] = 106,
        [anon_sym_LBRACK_RBRACK] = 106,
        [anon_sym_LBRACK_RBRACK_EQ] = 106,
        [sym__line_break] = 44,
    },
    [66] = {
        [sym__statement] = 304,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 306,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [67] = {
        [sym_identifier] = 308,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [68] = {
        [sym_identifier] = 310,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [69] = {
        [sym_identifier] = 312,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [70] = {
        [sym__terminator] = 170,
        [aux_sym_program_repeat1] = 170,
        [anon_sym_end] = 170,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [71] = {
        [sym__terminator] = 314,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [72] = {
        [sym__statement] = 316,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 318,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [73] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 320,
        [anon_sym_end] = 322,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [74] = {
        [sym__terminator] = 290,
        [aux_sym_program_repeat1] = 290,
        [anon_sym_end] = 290,
        [anon_sym_if] = 290,
        [anon_sym_while] = 290,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 290,
        [sym_comment] = 44,
        [sym__line_break] = 290,
        [anon_sym_SEMI] = 290,
    },
    [75] = {
        [sym__statement] = 324,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [76] = {
        [anon_sym_end] = 326,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [77] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_end] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [78] = {
        [sym__expression] = 330,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_LPAREN] = 262,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [79] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym_while_statement] = 272,
        [sym_until_statement] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym_scope_resolution_expression] = 272,
        [sym_subscript_expression] = 272,
        [sym__variable] = 272,
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 274,
        [ts_builtin_sym_end] = 274,
        [anon_sym_end] = 274,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_if] = 274,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 274,
        [anon_sym_until] = 272,
        [anon_sym_def] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_RPAREN] = 274,
        [anon_sym_class] = 272,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 44,
        [sym_symbol] = 272,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 274,
    },
    [80] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym_while_statement] = 272,
        [sym_until_statement] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym_scope_resolution_expression] = 272,
        [sym_subscript_expression] = 272,
        [sym__variable] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_while] = 272,
        [anon_sym_until] = 272,
        [anon_sym_def] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_class] = 272,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 44,
        [sym_symbol] = 272,
        [sym__line_break] = 44,
    },
    [81] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_if] = 332,
        [anon_sym_while] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_until] = 332,
        [sym_comment] = 44,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [82] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [83] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 338,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [84] = {
        [anon_sym_end] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [85] = {
        [sym__terminator] = 190,
        [aux_sym_program_repeat1] = 190,
        [anon_sym_end] = 190,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [86] = {
        [sym__terminator] = 342,
        [anon_sym_LT] = 344,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [87] = {
        [sym__statement] = 346,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 348,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [88] = {
        [sym_identifier] = 350,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [89] = {
        [sym__terminator] = 352,
        [aux_sym_class_declaration_repeat1] = 354,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [90] = {
        [sym__statement] = 358,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 360,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [91] = {
        [sym__terminator] = 362,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [92] = {
        [sym_identifier] = 364,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [93] = {
        [sym__terminator] = 366,
        [aux_sym_class_declaration_repeat1] = 368,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [94] = {
        [sym__terminator] = 370,
        [sym_comment] = 44,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [95] = {
        [sym__statement] = 372,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 374,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [96] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_end] = 378,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [97] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_end] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [sym_comment] = 44,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [98] = {
        [anon_sym_end] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [99] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 44,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [100] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [101] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_end] = 374,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [102] = {
        [sym__terminator] = 390,
        [aux_sym_program_repeat1] = 390,
        [anon_sym_end] = 390,
        [anon_sym_if] = 390,
        [anon_sym_while] = 390,
        [anon_sym_unless] = 390,
        [anon_sym_until] = 390,
        [sym_comment] = 44,
        [sym__line_break] = 390,
        [anon_sym_SEMI] = 390,
    },
    [103] = {
        [anon_sym_end] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [104] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 392,
        [anon_sym_end] = 394,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [105] = {
        [sym__terminator] = 396,
        [aux_sym_program_repeat1] = 396,
        [anon_sym_end] = 396,
        [anon_sym_if] = 396,
        [anon_sym_while] = 396,
        [anon_sym_unless] = 396,
        [anon_sym_until] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [106] = {
        [anon_sym_end] = 360,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [107] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [anon_sym_end] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [108] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 400,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 402,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [109] = {
        [sym__terminator] = 222,
        [aux_sym_program_repeat1] = 222,
        [anon_sym_end] = 222,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 222,
        [anon_sym_SEMI] = 222,
    },
    [110] = {
        [sym__statement] = 404,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [111] = {
        [anon_sym_RPAREN] = 406,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [112] = {
        [sym__expression] = 408,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [113] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_end] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [114] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_if] = 332,
        [anon_sym_while] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_until] = 332,
        [anon_sym_RPAREN] = 332,
        [sym_comment] = 44,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [115] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_end] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [116] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 414,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 338,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [117] = {
        [anon_sym_RPAREN] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [118] = {
        [sym_argument_list] = 416,
        [sym__terminator] = 418,
        [anon_sym_LPAREN] = 420,
        [anon_sym_STAR] = 422,
        [anon_sym_AMP] = 422,
        [sym_identifier] = 424,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [119] = {
        [sym_argument_list] = 426,
        [sym__terminator] = 426,
        [anon_sym_LPAREN] = 426,
        [anon_sym_STAR] = 426,
        [anon_sym_AMP] = 426,
        [sym_identifier] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [120] = {
        [sym__terminator] = 428,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [121] = {
        [sym__statement] = 430,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 432,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [122] = {
        [sym_argument_list] = 434,
        [anon_sym_RPAREN] = 428,
        [anon_sym_STAR] = 436,
        [anon_sym_AMP] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [123] = {
        [sym_identifier] = 440,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [124] = {
        [sym__terminator] = 442,
        [aux_sym_argument_list_repeat1] = 444,
        [anon_sym_COMMA] = 446,
        [sym_comment] = 44,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [125] = {
        [sym__terminator] = 448,
        [sym_comment] = 44,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [126] = {
        [anon_sym_STAR] = 450,
        [anon_sym_AMP] = 450,
        [sym_identifier] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [127] = {
        [sym_identifier] = 454,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [128] = {
        [sym__terminator] = 456,
        [aux_sym_argument_list_repeat1] = 458,
        [anon_sym_COMMA] = 446,
        [sym_comment] = 44,
        [sym__line_break] = 456,
        [anon_sym_SEMI] = 456,
    },
    [129] = {
        [sym__terminator] = 460,
        [sym_comment] = 44,
        [sym__line_break] = 460,
        [anon_sym_SEMI] = 460,
    },
    [130] = {
        [sym__terminator] = 460,
        [aux_sym_argument_list_repeat1] = 462,
        [anon_sym_COMMA] = 446,
        [sym_comment] = 44,
        [sym__line_break] = 460,
        [anon_sym_SEMI] = 460,
    },
    [131] = {
        [sym__terminator] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [132] = {
        [sym__terminator] = 448,
        [aux_sym_argument_list_repeat1] = 466,
        [anon_sym_COMMA] = 446,
        [sym_comment] = 44,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [133] = {
        [sym__terminator] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 468,
        [anon_sym_SEMI] = 468,
    },
    [134] = {
        [anon_sym_RPAREN] = 470,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [135] = {
        [sym__statement] = 472,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 474,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [136] = {
        [sym_identifier] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [137] = {
        [aux_sym_argument_list_repeat1] = 478,
        [anon_sym_RPAREN] = 442,
        [anon_sym_COMMA] = 480,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [138] = {
        [anon_sym_RPAREN] = 448,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [139] = {
        [anon_sym_STAR] = 482,
        [anon_sym_AMP] = 482,
        [sym_identifier] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [140] = {
        [sym_identifier] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [141] = {
        [aux_sym_argument_list_repeat1] = 488,
        [anon_sym_RPAREN] = 456,
        [anon_sym_COMMA] = 480,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [142] = {
        [anon_sym_RPAREN] = 460,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [143] = {
        [aux_sym_argument_list_repeat1] = 490,
        [anon_sym_RPAREN] = 460,
        [anon_sym_COMMA] = 480,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [144] = {
        [anon_sym_RPAREN] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [145] = {
        [aux_sym_argument_list_repeat1] = 492,
        [anon_sym_RPAREN] = 448,
        [anon_sym_COMMA] = 480,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [146] = {
        [anon_sym_RPAREN] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [147] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 494,
        [anon_sym_end] = 496,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [148] = {
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [anon_sym_end] = 498,
        [anon_sym_if] = 498,
        [anon_sym_while] = 498,
        [anon_sym_unless] = 498,
        [anon_sym_until] = 498,
        [sym_comment] = 44,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [149] = {
        [anon_sym_end] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [150] = {
        [sym__terminator] = 502,
        [aux_sym_program_repeat1] = 502,
        [anon_sym_end] = 502,
        [anon_sym_if] = 502,
        [anon_sym_while] = 502,
        [anon_sym_unless] = 502,
        [anon_sym_until] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [151] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_end] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [152] = {
        [sym__statement] = 506,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 496,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [153] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 508,
        [anon_sym_end] = 500,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [154] = {
        [anon_sym_end] = 510,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [155] = {
        [sym__terminator] = 512,
        [aux_sym_program_repeat1] = 512,
        [anon_sym_end] = 512,
        [anon_sym_if] = 512,
        [anon_sym_while] = 512,
        [anon_sym_unless] = 512,
        [anon_sym_until] = 512,
        [sym_comment] = 44,
        [sym__line_break] = 512,
        [anon_sym_SEMI] = 512,
    },
    [156] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 514,
        [anon_sym_end] = 474,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [157] = {
        [sym__terminator] = 516,
        [aux_sym_program_repeat1] = 516,
        [anon_sym_end] = 516,
        [anon_sym_if] = 516,
        [anon_sym_while] = 516,
        [anon_sym_unless] = 516,
        [anon_sym_until] = 516,
        [sym_comment] = 44,
        [sym__line_break] = 516,
        [anon_sym_SEMI] = 516,
    },
    [158] = {
        [anon_sym_end] = 496,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [159] = {
        [sym__statement_block] = 518,
        [sym__do_block] = 520,
        [sym__terminator] = 522,
        [anon_sym_do] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [160] = {
        [sym__statement_block] = 526,
        [sym__do_block] = 526,
        [sym__terminator] = 526,
        [anon_sym_do] = 526,
        [sym_comment] = 44,
        [sym__line_break] = 526,
        [anon_sym_SEMI] = 526,
    },
    [161] = {
        [sym__statement_block] = 68,
        [sym__do_block] = 68,
        [sym__terminator] = 68,
        [anon_sym_do] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [162] = {
        [sym__statement_block] = 70,
        [sym__do_block] = 70,
        [sym__terminator] = 70,
        [anon_sym_do] = 70,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_LBRACK] = 530,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [163] = {
        [sym__statement_block] = 76,
        [sym__do_block] = 76,
        [sym__terminator] = 76,
        [anon_sym_do] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [164] = {
        [sym__statement] = 532,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 534,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [165] = {
        [sym_identifier] = 536,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [166] = {
        [sym__statement_block] = 170,
        [sym__do_block] = 170,
        [sym__terminator] = 170,
        [anon_sym_do] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [167] = {
        [sym__statement_block] = 190,
        [sym__do_block] = 190,
        [sym__terminator] = 190,
        [anon_sym_do] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [168] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 538,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 540,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [169] = {
        [sym__statement_block] = 222,
        [sym__do_block] = 222,
        [sym__terminator] = 222,
        [anon_sym_do] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 222,
        [anon_sym_SEMI] = 222,
    },
    [170] = {
        [anon_sym_RPAREN] = 542,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [171] = {
        [sym__statement_block] = 410,
        [sym__do_block] = 410,
        [sym__terminator] = 410,
        [anon_sym_do] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [172] = {
        [sym__statement_block] = 412,
        [sym__do_block] = 412,
        [sym__terminator] = 412,
        [anon_sym_do] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [173] = {
        [sym_identifier] = 544,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [174] = {
        [sym__argument] = 546,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_RBRACK] = 556,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [175] = {
        [aux_sym__call_arguments_repeat1] = 560,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 564,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [176] = {
        [aux_sym__call_arguments_repeat1] = 70,
        [anon_sym_COMMA] = 70,
        [anon_sym_COLON_COLON] = 566,
        [anon_sym_LBRACK] = 568,
        [anon_sym_RBRACK] = 70,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [177] = {
        [aux_sym__call_arguments_repeat1] = 76,
        [anon_sym_COMMA] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [anon_sym_RBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [178] = {
        [sym__statement] = 570,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym__variable] = 120,
        [anon_sym_undef] = 122,
        [anon_sym_alias] = 124,
        [anon_sym_while] = 126,
        [anon_sym_until] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 572,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 44,
        [sym_symbol] = 116,
        [sym__line_break] = 44,
    },
    [179] = {
        [sym_identifier] = 574,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [180] = {
        [sym__statement_block] = 576,
        [sym__do_block] = 576,
        [sym__terminator] = 576,
        [anon_sym_do] = 576,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_LBRACK] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 576,
        [anon_sym_SEMI] = 576,
    },
    [181] = {
        [aux_sym__call_arguments_repeat1] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [anon_sym_RBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [182] = {
        [aux_sym__call_arguments_repeat1] = 190,
        [anon_sym_COMMA] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [anon_sym_RBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [183] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 578,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 580,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [184] = {
        [aux_sym__call_arguments_repeat1] = 222,
        [anon_sym_COMMA] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [anon_sym_RBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [185] = {
        [anon_sym_RPAREN] = 582,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [186] = {
        [aux_sym__call_arguments_repeat1] = 410,
        [anon_sym_COMMA] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [anon_sym_RBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [187] = {
        [aux_sym__call_arguments_repeat1] = 412,
        [anon_sym_COMMA] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [anon_sym_RBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [188] = {
        [sym_identifier] = 584,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [189] = {
        [sym__argument] = 586,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_RBRACK] = 588,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [190] = {
        [aux_sym__call_arguments_repeat1] = 590,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 592,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [191] = {
        [aux_sym__call_arguments_repeat1] = 576,
        [anon_sym_COMMA] = 576,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_LBRACK] = 576,
        [anon_sym_RBRACK] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [192] = {
        [anon_sym_RBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [193] = {
        [sym__argument] = 596,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [194] = {
        [aux_sym__call_arguments_repeat1] = 598,
        [anon_sym_COMMA] = 598,
        [anon_sym_COLON_COLON] = 598,
        [anon_sym_LBRACK] = 598,
        [anon_sym_RBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [195] = {
        [aux_sym__call_arguments_repeat1] = 600,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [196] = {
        [anon_sym_RBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [197] = {
        [aux_sym__call_arguments_repeat1] = 606,
        [anon_sym_COMMA] = 606,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_LBRACK] = 606,
        [anon_sym_RBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [198] = {
        [aux_sym__call_arguments_repeat1] = 608,
        [anon_sym_COMMA] = 608,
        [anon_sym_COLON_COLON] = 608,
        [anon_sym_LBRACK] = 608,
        [anon_sym_RBRACK] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [199] = {
        [anon_sym_RBRACK] = 610,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [200] = {
        [sym__statement_block] = 598,
        [sym__do_block] = 598,
        [sym__terminator] = 598,
        [anon_sym_do] = 598,
        [anon_sym_COLON_COLON] = 598,
        [anon_sym_LBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [201] = {
        [sym__statement_block] = 606,
        [sym__do_block] = 606,
        [sym__terminator] = 606,
        [anon_sym_do] = 606,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_LBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [202] = {
        [sym__statement_block] = 608,
        [sym__do_block] = 608,
        [sym__terminator] = 608,
        [anon_sym_do] = 608,
        [anon_sym_COLON_COLON] = 608,
        [anon_sym_LBRACK] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [203] = {
        [sym__terminator] = 612,
        [aux_sym_program_repeat1] = 612,
        [anon_sym_end] = 612,
        [anon_sym_if] = 612,
        [anon_sym_while] = 612,
        [anon_sym_unless] = 612,
        [anon_sym_until] = 612,
        [sym_comment] = 44,
        [sym__line_break] = 612,
        [anon_sym_SEMI] = 612,
    },
    [204] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [205] = {
        [sym__statement] = 616,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 618,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [206] = {
        [sym__statement] = 620,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 622,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [207] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 626,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [208] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [sym_comment] = 44,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [209] = {
        [anon_sym_end] = 630,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [210] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 632,
        [anon_sym_if] = 632,
        [anon_sym_while] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_until] = 632,
        [sym_comment] = 44,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [211] = {
        [sym__terminator] = 634,
        [aux_sym_program_repeat1] = 634,
        [anon_sym_end] = 634,
        [anon_sym_if] = 634,
        [anon_sym_while] = 634,
        [anon_sym_unless] = 634,
        [anon_sym_until] = 634,
        [sym_comment] = 44,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [212] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 638,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [213] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_end] = 640,
        [anon_sym_if] = 640,
        [anon_sym_while] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_until] = 640,
        [sym_comment] = 44,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [214] = {
        [anon_sym_end] = 642,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [215] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_end] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [sym_comment] = 44,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [216] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [sym_comment] = 44,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [217] = {
        [sym__statement_block] = 648,
        [sym__do_block] = 520,
        [sym__terminator] = 522,
        [anon_sym_do] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [218] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [sym_comment] = 44,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [219] = {
        [sym__function_name] = 330,
        [anon_sym_PIPE] = 294,
        [anon_sym_STAR] = 294,
        [anon_sym_AMP] = 294,
        [anon_sym_LT] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 294,
        [anon_sym_CARET] = 294,
        [anon_sym_LT_EQ_GT] = 294,
        [anon_sym_EQ_EQ] = 294,
        [anon_sym_EQ_EQ_EQ] = 294,
        [anon_sym_EQ_TILDE] = 294,
        [anon_sym_GT] = 294,
        [anon_sym_GT_EQ] = 294,
        [anon_sym_LT_EQ] = 294,
        [anon_sym_PLUS] = 294,
        [anon_sym_DASH] = 294,
        [anon_sym_SLASH] = 294,
        [anon_sym_PERCENT] = 294,
        [anon_sym_STAR_STAR] = 294,
        [anon_sym_LT_LT] = 294,
        [anon_sym_GT_GT] = 294,
        [anon_sym_TILDE] = 294,
        [anon_sym_PLUS_AT] = 294,
        [anon_sym_DASH_AT] = 294,
        [anon_sym_LBRACK_RBRACK] = 294,
        [anon_sym_LBRACK_RBRACK_EQ] = 294,
        [sym__line_break] = 44,
    },
    [220] = {
        [sym__function_name] = 426,
        [anon_sym_PIPE] = 426,
        [anon_sym_STAR] = 426,
        [anon_sym_AMP] = 426,
        [anon_sym_LT] = 426,
        [sym_identifier] = 426,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 426,
        [anon_sym_CARET] = 426,
        [anon_sym_LT_EQ_GT] = 426,
        [anon_sym_EQ_EQ] = 426,
        [anon_sym_EQ_EQ_EQ] = 426,
        [anon_sym_EQ_TILDE] = 426,
        [anon_sym_GT] = 426,
        [anon_sym_GT_EQ] = 426,
        [anon_sym_LT_EQ] = 426,
        [anon_sym_PLUS] = 426,
        [anon_sym_DASH] = 426,
        [anon_sym_SLASH] = 426,
        [anon_sym_PERCENT] = 426,
        [anon_sym_STAR_STAR] = 426,
        [anon_sym_LT_LT] = 426,
        [anon_sym_GT_GT] = 426,
        [anon_sym_TILDE] = 426,
        [anon_sym_PLUS_AT] = 426,
        [anon_sym_DASH_AT] = 426,
        [anon_sym_LBRACK_RBRACK] = 426,
        [anon_sym_LBRACK_RBRACK_EQ] = 426,
        [sym__line_break] = 44,
    },
    [221] = {
        [sym__terminator] = 426,
        [aux_sym_program_repeat1] = 426,
        [anon_sym_end] = 426,
        [anon_sym_if] = 426,
        [anon_sym_while] = 426,
        [anon_sym_unless] = 426,
        [anon_sym_until] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [222] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [anon_sym_end] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [sym_comment] = 44,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [223] = {
        [sym_identifier] = 654,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [224] = {
        [sym__argument] = 656,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_RBRACK] = 658,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [225] = {
        [aux_sym__call_arguments_repeat1] = 660,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 662,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [226] = {
        [sym__terminator] = 576,
        [aux_sym_program_repeat1] = 576,
        [anon_sym_end] = 576,
        [anon_sym_if] = 576,
        [anon_sym_while] = 576,
        [anon_sym_unless] = 576,
        [anon_sym_until] = 576,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_LBRACK] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 576,
        [anon_sym_SEMI] = 576,
    },
    [227] = {
        [anon_sym_RBRACK] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [228] = {
        [sym__terminator] = 598,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_end] = 598,
        [anon_sym_if] = 598,
        [anon_sym_while] = 598,
        [anon_sym_unless] = 598,
        [anon_sym_until] = 598,
        [anon_sym_COLON_COLON] = 598,
        [anon_sym_LBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [229] = {
        [sym__terminator] = 606,
        [aux_sym_program_repeat1] = 606,
        [anon_sym_end] = 606,
        [anon_sym_if] = 606,
        [anon_sym_while] = 606,
        [anon_sym_unless] = 606,
        [anon_sym_until] = 606,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_LBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [230] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [anon_sym_end] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [anon_sym_COLON_COLON] = 608,
        [anon_sym_LBRACK] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [231] = {
        [sym__statement] = 666,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_PIPE] = 668,
        [anon_sym_end] = 330,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [232] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_end] = 672,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [233] = {
        [sym__statement] = 674,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 672,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [234] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 676,
        [anon_sym_end] = 678,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [235] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [anon_sym_end] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [sym_comment] = 44,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [236] = {
        [anon_sym_end] = 682,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [237] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [sym_comment] = 44,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [238] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_end] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [sym_comment] = 44,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [239] = {
        [anon_sym_end] = 678,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [240] = {
        [anon_sym_end] = 688,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [241] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [anon_sym_RPAREN] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [242] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [anon_sym_RPAREN] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [243] = {
        [sym__terminator] = 190,
        [aux_sym_program_repeat1] = 190,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [244] = {
        [sym__terminator] = 690,
        [anon_sym_LT] = 692,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [245] = {
        [sym__statement] = 694,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 696,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [246] = {
        [sym_identifier] = 698,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [247] = {
        [sym__terminator] = 700,
        [aux_sym_class_declaration_repeat1] = 702,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [248] = {
        [sym__statement] = 704,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 706,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [249] = {
        [sym__terminator] = 708,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [250] = {
        [sym__statement] = 710,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 712,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [251] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 714,
        [anon_sym_end] = 716,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [252] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [anon_sym_RPAREN] = 380,
        [sym_comment] = 44,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [253] = {
        [anon_sym_end] = 718,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [254] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [anon_sym_RPAREN] = 384,
        [sym_comment] = 44,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [255] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [anon_sym_RPAREN] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [256] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 720,
        [anon_sym_end] = 712,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [257] = {
        [sym__terminator] = 390,
        [aux_sym_program_repeat1] = 390,
        [anon_sym_if] = 390,
        [anon_sym_while] = 390,
        [anon_sym_unless] = 390,
        [anon_sym_until] = 390,
        [anon_sym_RPAREN] = 390,
        [sym_comment] = 44,
        [sym__line_break] = 390,
        [anon_sym_SEMI] = 390,
    },
    [258] = {
        [anon_sym_end] = 716,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [259] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 722,
        [anon_sym_end] = 724,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [260] = {
        [sym__terminator] = 396,
        [aux_sym_program_repeat1] = 396,
        [anon_sym_if] = 396,
        [anon_sym_while] = 396,
        [anon_sym_unless] = 396,
        [anon_sym_until] = 396,
        [anon_sym_RPAREN] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [261] = {
        [anon_sym_end] = 706,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [262] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [anon_sym_RPAREN] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [263] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 726,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 728,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [264] = {
        [sym__terminator] = 222,
        [aux_sym_program_repeat1] = 222,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_RPAREN] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 222,
        [anon_sym_SEMI] = 222,
    },
    [265] = {
        [anon_sym_RPAREN] = 730,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [266] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [anon_sym_RPAREN] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [267] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [anon_sym_RPAREN] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [268] = {
        [sym_argument_list] = 732,
        [sym__terminator] = 734,
        [anon_sym_LPAREN] = 736,
        [anon_sym_STAR] = 422,
        [anon_sym_AMP] = 422,
        [sym_identifier] = 424,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [269] = {
        [sym__terminator] = 738,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [270] = {
        [sym__statement] = 740,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 742,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [271] = {
        [sym_argument_list] = 744,
        [anon_sym_RPAREN] = 738,
        [anon_sym_STAR] = 436,
        [anon_sym_AMP] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [272] = {
        [anon_sym_RPAREN] = 746,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [273] = {
        [sym__statement] = 748,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 750,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [274] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 752,
        [anon_sym_end] = 754,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [275] = {
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [anon_sym_if] = 498,
        [anon_sym_while] = 498,
        [anon_sym_unless] = 498,
        [anon_sym_until] = 498,
        [anon_sym_RPAREN] = 498,
        [sym_comment] = 44,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [276] = {
        [anon_sym_end] = 756,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [277] = {
        [sym__terminator] = 502,
        [aux_sym_program_repeat1] = 502,
        [anon_sym_if] = 502,
        [anon_sym_while] = 502,
        [anon_sym_unless] = 502,
        [anon_sym_until] = 502,
        [anon_sym_RPAREN] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [278] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [anon_sym_RPAREN] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [279] = {
        [sym__statement] = 758,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 754,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [280] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 760,
        [anon_sym_end] = 756,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [281] = {
        [anon_sym_end] = 762,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [282] = {
        [sym__terminator] = 512,
        [aux_sym_program_repeat1] = 512,
        [anon_sym_if] = 512,
        [anon_sym_while] = 512,
        [anon_sym_unless] = 512,
        [anon_sym_until] = 512,
        [anon_sym_RPAREN] = 512,
        [sym_comment] = 44,
        [sym__line_break] = 512,
        [anon_sym_SEMI] = 512,
    },
    [283] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 764,
        [anon_sym_end] = 750,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [284] = {
        [sym__terminator] = 516,
        [aux_sym_program_repeat1] = 516,
        [anon_sym_if] = 516,
        [anon_sym_while] = 516,
        [anon_sym_unless] = 516,
        [anon_sym_until] = 516,
        [anon_sym_RPAREN] = 516,
        [sym_comment] = 44,
        [sym__line_break] = 516,
        [anon_sym_SEMI] = 516,
    },
    [285] = {
        [anon_sym_end] = 754,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [286] = {
        [sym__statement_block] = 766,
        [sym__do_block] = 768,
        [sym__terminator] = 770,
        [anon_sym_do] = 772,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [287] = {
        [sym__terminator] = 612,
        [aux_sym_program_repeat1] = 612,
        [anon_sym_if] = 612,
        [anon_sym_while] = 612,
        [anon_sym_unless] = 612,
        [anon_sym_until] = 612,
        [anon_sym_RPAREN] = 612,
        [sym_comment] = 44,
        [sym__line_break] = 612,
        [anon_sym_SEMI] = 612,
    },
    [288] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_RPAREN] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [289] = {
        [sym__statement] = 774,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 776,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [290] = {
        [sym__statement] = 778,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 780,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [291] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 782,
        [anon_sym_end] = 784,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [292] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [anon_sym_RPAREN] = 628,
        [sym_comment] = 44,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [293] = {
        [anon_sym_end] = 786,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [294] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_if] = 632,
        [anon_sym_while] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_until] = 632,
        [anon_sym_RPAREN] = 632,
        [sym_comment] = 44,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [295] = {
        [sym__terminator] = 634,
        [aux_sym_program_repeat1] = 634,
        [anon_sym_if] = 634,
        [anon_sym_while] = 634,
        [anon_sym_unless] = 634,
        [anon_sym_until] = 634,
        [anon_sym_RPAREN] = 634,
        [sym_comment] = 44,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [296] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 788,
        [anon_sym_end] = 790,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [297] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_if] = 640,
        [anon_sym_while] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_until] = 640,
        [anon_sym_RPAREN] = 640,
        [sym_comment] = 44,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [298] = {
        [anon_sym_end] = 792,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [299] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [anon_sym_RPAREN] = 644,
        [sym_comment] = 44,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [300] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [anon_sym_RPAREN] = 646,
        [sym_comment] = 44,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [301] = {
        [sym__statement_block] = 794,
        [sym__do_block] = 768,
        [sym__terminator] = 770,
        [anon_sym_do] = 772,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [302] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_RPAREN] = 650,
        [sym_comment] = 44,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [303] = {
        [sym__function_name] = 408,
        [anon_sym_PIPE] = 208,
        [anon_sym_STAR] = 208,
        [anon_sym_AMP] = 208,
        [anon_sym_LT] = 208,
        [sym_identifier] = 208,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 208,
        [anon_sym_CARET] = 208,
        [anon_sym_LT_EQ_GT] = 208,
        [anon_sym_EQ_EQ] = 208,
        [anon_sym_EQ_EQ_EQ] = 208,
        [anon_sym_EQ_TILDE] = 208,
        [anon_sym_GT] = 208,
        [anon_sym_GT_EQ] = 208,
        [anon_sym_LT_EQ] = 208,
        [anon_sym_PLUS] = 208,
        [anon_sym_DASH] = 208,
        [anon_sym_SLASH] = 208,
        [anon_sym_PERCENT] = 208,
        [anon_sym_STAR_STAR] = 208,
        [anon_sym_LT_LT] = 208,
        [anon_sym_GT_GT] = 208,
        [anon_sym_TILDE] = 208,
        [anon_sym_PLUS_AT] = 208,
        [anon_sym_DASH_AT] = 208,
        [anon_sym_LBRACK_RBRACK] = 208,
        [anon_sym_LBRACK_RBRACK_EQ] = 208,
        [sym__line_break] = 44,
    },
    [304] = {
        [sym__terminator] = 426,
        [aux_sym_program_repeat1] = 426,
        [anon_sym_if] = 426,
        [anon_sym_while] = 426,
        [anon_sym_unless] = 426,
        [anon_sym_until] = 426,
        [anon_sym_RPAREN] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [305] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [anon_sym_RPAREN] = 652,
        [sym_comment] = 44,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [306] = {
        [sym_identifier] = 796,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [307] = {
        [sym__argument] = 798,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_RBRACK] = 800,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [308] = {
        [aux_sym__call_arguments_repeat1] = 802,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 804,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [309] = {
        [sym__terminator] = 576,
        [aux_sym_program_repeat1] = 576,
        [anon_sym_if] = 576,
        [anon_sym_while] = 576,
        [anon_sym_unless] = 576,
        [anon_sym_until] = 576,
        [anon_sym_RPAREN] = 576,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_LBRACK] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 576,
        [anon_sym_SEMI] = 576,
    },
    [310] = {
        [anon_sym_RBRACK] = 806,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [311] = {
        [sym__terminator] = 598,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_if] = 598,
        [anon_sym_while] = 598,
        [anon_sym_unless] = 598,
        [anon_sym_until] = 598,
        [anon_sym_RPAREN] = 598,
        [anon_sym_COLON_COLON] = 598,
        [anon_sym_LBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [312] = {
        [sym__terminator] = 606,
        [aux_sym_program_repeat1] = 606,
        [anon_sym_if] = 606,
        [anon_sym_while] = 606,
        [anon_sym_unless] = 606,
        [anon_sym_until] = 606,
        [anon_sym_RPAREN] = 606,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_LBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [313] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [anon_sym_RPAREN] = 608,
        [anon_sym_COLON_COLON] = 608,
        [anon_sym_LBRACK] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [314] = {
        [sym__statement] = 808,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_PIPE] = 810,
        [anon_sym_end] = 408,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [315] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 812,
        [anon_sym_end] = 814,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [316] = {
        [sym__statement] = 816,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 814,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [317] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 818,
        [anon_sym_end] = 820,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [318] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [anon_sym_RPAREN] = 680,
        [sym_comment] = 44,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [319] = {
        [anon_sym_end] = 822,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [320] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [anon_sym_RPAREN] = 684,
        [sym_comment] = 44,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [321] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [anon_sym_RPAREN] = 686,
        [sym_comment] = 44,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [322] = {
        [anon_sym_end] = 820,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [323] = {
        [anon_sym_RPAREN] = 824,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [324] = {
        [aux_sym__call_arguments_repeat1] = 410,
        [anon_sym_do] = 410,
        [anon_sym_COMMA] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [325] = {
        [aux_sym__call_arguments_repeat1] = 412,
        [anon_sym_do] = 412,
        [anon_sym_COMMA] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [326] = {
        [sym_identifier] = 826,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [327] = {
        [sym__argument] = 828,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_RBRACK] = 830,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [328] = {
        [aux_sym__call_arguments_repeat1] = 832,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 834,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [329] = {
        [aux_sym__call_arguments_repeat1] = 576,
        [anon_sym_do] = 576,
        [anon_sym_COMMA] = 576,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_LBRACK] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [330] = {
        [anon_sym_RBRACK] = 836,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [331] = {
        [aux_sym__call_arguments_repeat1] = 598,
        [anon_sym_do] = 598,
        [anon_sym_COMMA] = 598,
        [anon_sym_COLON_COLON] = 598,
        [anon_sym_LBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [332] = {
        [aux_sym__call_arguments_repeat1] = 606,
        [anon_sym_do] = 606,
        [anon_sym_COMMA] = 606,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_LBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [333] = {
        [aux_sym__call_arguments_repeat1] = 608,
        [anon_sym_do] = 608,
        [anon_sym_COMMA] = 608,
        [anon_sym_COLON_COLON] = 608,
        [anon_sym_LBRACK] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [334] = {
        [anon_sym_do] = 838,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [335] = {
        [sym__argument] = 840,
        [sym__primary] = 156,
        [sym_scope_resolution_expression] = 158,
        [sym_subscript_expression] = 158,
        [sym__variable] = 158,
        [anon_sym_LPAREN] = 162,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [sym_identifier] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [336] = {
        [aux_sym__call_arguments_repeat1] = 842,
        [anon_sym_do] = 602,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [337] = {
        [anon_sym_do] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [338] = {
        [sym__terminator] = 844,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [339] = {
        [sym__statement] = 846,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 848,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [340] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 850,
        [anon_sym_end] = 852,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [341] = {
        [sym__terminator] = 290,
        [aux_sym_program_repeat1] = 290,
        [ts_builtin_sym_end] = 290,
        [anon_sym_if] = 290,
        [anon_sym_while] = 290,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 290,
        [sym_comment] = 44,
        [sym__line_break] = 290,
        [anon_sym_SEMI] = 290,
    },
    [342] = {
        [anon_sym_end] = 854,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [343] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [ts_builtin_sym_end] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [344] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [345] = {
        [sym__terminator] = 190,
        [aux_sym_program_repeat1] = 190,
        [ts_builtin_sym_end] = 190,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [346] = {
        [sym__terminator] = 856,
        [anon_sym_LT] = 858,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [347] = {
        [sym__statement] = 860,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 862,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [348] = {
        [sym_identifier] = 864,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [349] = {
        [sym__terminator] = 866,
        [aux_sym_class_declaration_repeat1] = 868,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [350] = {
        [sym__statement] = 870,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 872,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [351] = {
        [sym__terminator] = 874,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [352] = {
        [sym__statement] = 876,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 878,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [353] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 880,
        [anon_sym_end] = 882,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [354] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [ts_builtin_sym_end] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [sym_comment] = 44,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [355] = {
        [anon_sym_end] = 884,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [356] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [ts_builtin_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 44,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [357] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [358] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 886,
        [anon_sym_end] = 878,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [359] = {
        [sym__terminator] = 390,
        [aux_sym_program_repeat1] = 390,
        [ts_builtin_sym_end] = 390,
        [anon_sym_if] = 390,
        [anon_sym_while] = 390,
        [anon_sym_unless] = 390,
        [anon_sym_until] = 390,
        [sym_comment] = 44,
        [sym__line_break] = 390,
        [anon_sym_SEMI] = 390,
    },
    [360] = {
        [anon_sym_end] = 882,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [361] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 888,
        [anon_sym_end] = 890,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [362] = {
        [sym__terminator] = 396,
        [aux_sym_program_repeat1] = 396,
        [ts_builtin_sym_end] = 396,
        [anon_sym_if] = 396,
        [anon_sym_while] = 396,
        [anon_sym_unless] = 396,
        [anon_sym_until] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [363] = {
        [anon_sym_end] = 872,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [364] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [ts_builtin_sym_end] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [365] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 892,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 894,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [366] = {
        [sym__terminator] = 222,
        [aux_sym_program_repeat1] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_unless] = 222,
        [anon_sym_until] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 222,
        [anon_sym_SEMI] = 222,
    },
    [367] = {
        [anon_sym_RPAREN] = 896,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [368] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [ts_builtin_sym_end] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [369] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [ts_builtin_sym_end] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [370] = {
        [sym_argument_list] = 898,
        [sym__terminator] = 900,
        [anon_sym_LPAREN] = 902,
        [anon_sym_STAR] = 422,
        [anon_sym_AMP] = 422,
        [sym_identifier] = 424,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [371] = {
        [sym__terminator] = 904,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [372] = {
        [sym__statement] = 906,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 908,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [373] = {
        [sym_argument_list] = 910,
        [anon_sym_RPAREN] = 904,
        [anon_sym_STAR] = 436,
        [anon_sym_AMP] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [374] = {
        [anon_sym_RPAREN] = 912,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [375] = {
        [sym__statement] = 914,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 916,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [376] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 918,
        [anon_sym_end] = 920,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [377] = {
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [ts_builtin_sym_end] = 498,
        [anon_sym_if] = 498,
        [anon_sym_while] = 498,
        [anon_sym_unless] = 498,
        [anon_sym_until] = 498,
        [sym_comment] = 44,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [378] = {
        [anon_sym_end] = 922,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [379] = {
        [sym__terminator] = 502,
        [aux_sym_program_repeat1] = 502,
        [ts_builtin_sym_end] = 502,
        [anon_sym_if] = 502,
        [anon_sym_while] = 502,
        [anon_sym_unless] = 502,
        [anon_sym_until] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [380] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [381] = {
        [sym__statement] = 924,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 920,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [382] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 926,
        [anon_sym_end] = 922,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [383] = {
        [anon_sym_end] = 928,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [384] = {
        [sym__terminator] = 512,
        [aux_sym_program_repeat1] = 512,
        [ts_builtin_sym_end] = 512,
        [anon_sym_if] = 512,
        [anon_sym_while] = 512,
        [anon_sym_unless] = 512,
        [anon_sym_until] = 512,
        [sym_comment] = 44,
        [sym__line_break] = 512,
        [anon_sym_SEMI] = 512,
    },
    [385] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 930,
        [anon_sym_end] = 916,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [386] = {
        [sym__terminator] = 516,
        [aux_sym_program_repeat1] = 516,
        [ts_builtin_sym_end] = 516,
        [anon_sym_if] = 516,
        [anon_sym_while] = 516,
        [anon_sym_unless] = 516,
        [anon_sym_until] = 516,
        [sym_comment] = 44,
        [sym__line_break] = 516,
        [anon_sym_SEMI] = 516,
    },
    [387] = {
        [anon_sym_end] = 920,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [388] = {
        [sym__statement_block] = 932,
        [sym__do_block] = 934,
        [sym__terminator] = 936,
        [anon_sym_do] = 938,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [389] = {
        [sym__terminator] = 612,
        [aux_sym_program_repeat1] = 612,
        [ts_builtin_sym_end] = 612,
        [anon_sym_if] = 612,
        [anon_sym_while] = 612,
        [anon_sym_unless] = 612,
        [anon_sym_until] = 612,
        [sym_comment] = 44,
        [sym__line_break] = 612,
        [anon_sym_SEMI] = 612,
    },
    [390] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [ts_builtin_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [391] = {
        [sym__statement] = 940,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 942,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [392] = {
        [sym__statement] = 944,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 946,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [393] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 948,
        [anon_sym_end] = 950,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [394] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [ts_builtin_sym_end] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [sym_comment] = 44,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [395] = {
        [anon_sym_end] = 952,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [396] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [ts_builtin_sym_end] = 632,
        [anon_sym_if] = 632,
        [anon_sym_while] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_until] = 632,
        [sym_comment] = 44,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [397] = {
        [sym__terminator] = 634,
        [aux_sym_program_repeat1] = 634,
        [ts_builtin_sym_end] = 634,
        [anon_sym_if] = 634,
        [anon_sym_while] = 634,
        [anon_sym_unless] = 634,
        [anon_sym_until] = 634,
        [sym_comment] = 44,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [398] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 954,
        [anon_sym_end] = 956,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [399] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [ts_builtin_sym_end] = 640,
        [anon_sym_if] = 640,
        [anon_sym_while] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_until] = 640,
        [sym_comment] = 44,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [400] = {
        [anon_sym_end] = 958,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [401] = {
        [sym__terminator] = 644,
        [aux_sym_program_repeat1] = 644,
        [ts_builtin_sym_end] = 644,
        [anon_sym_if] = 644,
        [anon_sym_while] = 644,
        [anon_sym_unless] = 644,
        [anon_sym_until] = 644,
        [sym_comment] = 44,
        [sym__line_break] = 644,
        [anon_sym_SEMI] = 644,
    },
    [402] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [ts_builtin_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [sym_comment] = 44,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [403] = {
        [sym__statement_block] = 960,
        [sym__do_block] = 934,
        [sym__terminator] = 936,
        [anon_sym_do] = 938,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [404] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [ts_builtin_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [sym_comment] = 44,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [405] = {
        [sym__function_name] = 962,
        [anon_sym_PIPE] = 80,
        [anon_sym_STAR] = 80,
        [anon_sym_AMP] = 80,
        [anon_sym_LT] = 80,
        [sym_identifier] = 80,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 80,
        [anon_sym_CARET] = 80,
        [anon_sym_LT_EQ_GT] = 80,
        [anon_sym_EQ_EQ] = 80,
        [anon_sym_EQ_EQ_EQ] = 80,
        [anon_sym_EQ_TILDE] = 80,
        [anon_sym_GT] = 80,
        [anon_sym_GT_EQ] = 80,
        [anon_sym_LT_EQ] = 80,
        [anon_sym_PLUS] = 80,
        [anon_sym_DASH] = 80,
        [anon_sym_SLASH] = 80,
        [anon_sym_PERCENT] = 80,
        [anon_sym_STAR_STAR] = 80,
        [anon_sym_LT_LT] = 80,
        [anon_sym_GT_GT] = 80,
        [anon_sym_TILDE] = 80,
        [anon_sym_PLUS_AT] = 80,
        [anon_sym_DASH_AT] = 80,
        [anon_sym_LBRACK_RBRACK] = 80,
        [anon_sym_LBRACK_RBRACK_EQ] = 80,
        [sym__line_break] = 44,
    },
    [406] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [ts_builtin_sym_end] = 332,
        [anon_sym_if] = 332,
        [anon_sym_while] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_until] = 332,
        [sym_comment] = 44,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [407] = {
        [sym__terminator] = 426,
        [aux_sym_program_repeat1] = 426,
        [ts_builtin_sym_end] = 426,
        [anon_sym_if] = 426,
        [anon_sym_while] = 426,
        [anon_sym_unless] = 426,
        [anon_sym_until] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [408] = {
        [sym__terminator] = 652,
        [aux_sym_program_repeat1] = 652,
        [ts_builtin_sym_end] = 652,
        [anon_sym_if] = 652,
        [anon_sym_while] = 652,
        [anon_sym_unless] = 652,
        [anon_sym_until] = 652,
        [sym_comment] = 44,
        [sym__line_break] = 652,
        [anon_sym_SEMI] = 652,
    },
    [409] = {
        [sym_identifier] = 964,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [410] = {
        [sym__argument] = 966,
        [sym__primary] = 548,
        [sym_scope_resolution_expression] = 550,
        [sym_subscript_expression] = 550,
        [sym__variable] = 550,
        [anon_sym_LPAREN] = 552,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_RBRACK] = 968,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [411] = {
        [aux_sym__call_arguments_repeat1] = 970,
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACK] = 972,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [412] = {
        [sym__terminator] = 576,
        [aux_sym_program_repeat1] = 576,
        [ts_builtin_sym_end] = 576,
        [anon_sym_if] = 576,
        [anon_sym_while] = 576,
        [anon_sym_unless] = 576,
        [anon_sym_until] = 576,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_LBRACK] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 576,
        [anon_sym_SEMI] = 576,
    },
    [413] = {
        [anon_sym_RBRACK] = 974,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [414] = {
        [sym__terminator] = 598,
        [aux_sym_program_repeat1] = 598,
        [ts_builtin_sym_end] = 598,
        [anon_sym_if] = 598,
        [anon_sym_while] = 598,
        [anon_sym_unless] = 598,
        [anon_sym_until] = 598,
        [anon_sym_COLON_COLON] = 598,
        [anon_sym_LBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [415] = {
        [sym__terminator] = 606,
        [aux_sym_program_repeat1] = 606,
        [ts_builtin_sym_end] = 606,
        [anon_sym_if] = 606,
        [anon_sym_while] = 606,
        [anon_sym_unless] = 606,
        [anon_sym_until] = 606,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_LBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [416] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [ts_builtin_sym_end] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [anon_sym_COLON_COLON] = 608,
        [anon_sym_LBRACK] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [417] = {
        [sym__statement] = 976,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_PIPE] = 978,
        [anon_sym_end] = 962,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [418] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 980,
        [anon_sym_end] = 982,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [419] = {
        [sym__statement] = 984,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym_while_statement] = 238,
        [sym_until_statement] = 238,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym_scope_resolution_expression] = 248,
        [sym_subscript_expression] = 248,
        [sym__variable] = 248,
        [anon_sym_end] = 982,
        [anon_sym_undef] = 252,
        [anon_sym_alias] = 254,
        [anon_sym_while] = 256,
        [anon_sym_until] = 258,
        [anon_sym_def] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 264,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_module] = 268,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 270,
        [anon_sym_self] = 270,
        [sym_identifier] = 270,
        [sym_comment] = 44,
        [sym_symbol] = 244,
        [sym__line_break] = 44,
    },
    [420] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 986,
        [anon_sym_end] = 988,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [421] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [ts_builtin_sym_end] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [sym_comment] = 44,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [422] = {
        [anon_sym_end] = 990,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [423] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [ts_builtin_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [sym_comment] = 44,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [424] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [ts_builtin_sym_end] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [sym_comment] = 44,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [425] = {
        [anon_sym_end] = 988,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [426] = {
        [sym__statement] = 992,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
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
        [anon_sym_while] = 26,
        [anon_sym_until] = 28,
        [anon_sym_def] = 30,
        [anon_sym_LPAREN] = 32,
        [anon_sym_class] = 34,
        [anon_sym_COLON_COLON] = 36,
        [anon_sym_module] = 38,
        [anon_sym_super] = 40,
        [anon_sym_nil] = 42,
        [anon_sym_self] = 42,
        [sym_identifier] = 42,
        [sym_comment] = 44,
        [sym_symbol] = 14,
        [sym__line_break] = 44,
    },
    [427] = {
        [ts_builtin_sym_end] = 994,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [428] = {
        [sym__expression] = 962,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 32,
        [anon_sym_COLON_COLON] = 36,
        [anon_sym_nil] = 42,
        [anon_sym_self] = 42,
        [sym_identifier] = 42,
        [sym_comment] = 44,
        [sym_symbol] = 14,
        [sym__line_break] = 44,
    },
    [429] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 996,
        [ts_builtin_sym_end] = 338,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [430] = {
        [ts_builtin_sym_end] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 44,
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
    [44] = {.count = 1}, SHIFT_EXTRA(),
    [46] = {.count = 1}, ACCEPT_INPUT(),
    [48] = {.count = 1}, SHIFT(426, 0),
    [50] = {.count = 1}, SHIFT(427, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(428, 0),
    [56] = {.count = 1}, SHIFT(79, 0),
    [58] = {.count = 1}, SHIFT(80, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(417, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, SHIFT(409, 0),
    [74] = {.count = 1}, SHIFT(410, 0),
    [76] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [78] = {.count = 1}, SHIFT(408, 0),
    [80] = {.count = 1}, SHIFT(407, 0),
    [82] = {.count = 1}, SHIFT(405, 0),
    [84] = {.count = 1}, SHIFT(220, 0),
    [86] = {.count = 1}, SHIFT(403, 0),
    [88] = {.count = 1}, SHIFT(160, 0),
    [90] = {.count = 1}, SHIFT(161, 0),
    [92] = {.count = 1}, SHIFT(162, 0),
    [94] = {.count = 1}, SHIFT(163, 0),
    [96] = {.count = 1}, SHIFT(164, 0),
    [98] = {.count = 1}, SHIFT(165, 0),
    [100] = {.count = 1}, SHIFT(166, 0),
    [102] = {.count = 1}, SHIFT(388, 0),
    [104] = {.count = 1}, SHIFT(370, 0),
    [106] = {.count = 1}, SHIFT(119, 0),
    [108] = {.count = 1}, SHIFT(365, 0),
    [110] = {.count = 1}, SHIFT(32, 0),
    [112] = {.count = 1}, SHIFT(33, 0),
    [114] = {.count = 1}, SHIFT(34, 0),
    [116] = {.count = 1}, SHIFT(35, 0),
    [118] = {.count = 1}, SHIFT(36, 0),
    [120] = {.count = 1}, SHIFT(37, 0),
    [122] = {.count = 1}, SHIFT(38, 0),
    [124] = {.count = 1}, SHIFT(39, 0),
    [126] = {.count = 1}, SHIFT(40, 0),
    [128] = {.count = 1}, SHIFT(41, 0),
    [130] = {.count = 1}, SHIFT(42, 0),
    [132] = {.count = 1}, SHIFT(43, 0),
    [134] = {.count = 1}, SHIFT(366, 0),
    [136] = {.count = 1}, SHIFT(45, 0),
    [138] = {.count = 1}, SHIFT(46, 0),
    [140] = {.count = 1}, SHIFT(47, 0),
    [142] = {.count = 1}, SHIFT(48, 0),
    [144] = {.count = 1}, SHIFT(346, 0),
    [146] = {.count = 1}, SHIFT(345, 0),
    [148] = {.count = 1}, SHIFT(338, 0),
    [150] = {.count = 1}, SHIFT(21, 0),
    [152] = {.count = 1}, SHIFT(22, 0),
    [154] = {.count = 1}, SHIFT(23, 0),
    [156] = {.count = 1}, SHIFT(24, 0),
    [158] = {.count = 1}, SHIFT(25, 0),
    [160] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [162] = {.count = 1}, SHIFT(26, 0),
    [164] = {.count = 1}, SHIFT(27, 0),
    [166] = {.count = 1}, SHIFT(28, 0),
    [168] = {.count = 1}, SHIFT(29, 0),
    [170] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [172] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [174] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [176] = {.count = 1}, SHIFT(334, 0),
    [178] = {.count = 1}, SHIFT(335, 0),
    [180] = {.count = 1}, SHIFT(326, 0),
    [182] = {.count = 1}, SHIFT(327, 0),
    [184] = {.count = 1}, SHIFT(31, 0),
    [186] = {.count = 1}, SHIFT(44, 0),
    [188] = {.count = 1}, SHIFT(30, 0),
    [190] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [192] = {.count = 1}, SHIFT(110, 0),
    [194] = {.count = 1}, SHIFT(323, 0),
    [196] = {.count = 1}, SHIFT(112, 0),
    [198] = {.count = 1}, SHIFT(324, 0),
    [200] = {.count = 1}, SHIFT(314, 0),
    [202] = {.count = 1}, SHIFT(306, 0),
    [204] = {.count = 1}, SHIFT(307, 0),
    [206] = {.count = 1}, SHIFT(305, 0),
    [208] = {.count = 1}, SHIFT(304, 0),
    [210] = {.count = 1}, SHIFT(303, 0),
    [212] = {.count = 1}, SHIFT(301, 0),
    [214] = {.count = 1}, SHIFT(286, 0),
    [216] = {.count = 1}, SHIFT(268, 0),
    [218] = {.count = 1}, SHIFT(263, 0),
    [220] = {.count = 1}, SHIFT(264, 0),
    [222] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [224] = {.count = 1}, SHIFT(244, 0),
    [226] = {.count = 1}, SHIFT(243, 0),
    [228] = {.count = 1}, SHIFT(49, 0),
    [230] = {.count = 1}, SHIFT(50, 0),
    [232] = {.count = 1}, SHIFT(51, 0),
    [234] = {.count = 1}, SHIFT(52, 0),
    [236] = {.count = 1}, SHIFT(53, 0),
    [238] = {.count = 1}, SHIFT(54, 0),
    [240] = {.count = 1}, SHIFT(55, 0),
    [242] = {.count = 1}, SHIFT(56, 0),
    [244] = {.count = 1}, SHIFT(57, 0),
    [246] = {.count = 1}, SHIFT(58, 0),
    [248] = {.count = 1}, SHIFT(59, 0),
    [250] = {.count = 1}, SHIFT(60, 0),
    [252] = {.count = 1}, SHIFT(61, 0),
    [254] = {.count = 1}, SHIFT(62, 0),
    [256] = {.count = 1}, SHIFT(63, 0),
    [258] = {.count = 1}, SHIFT(64, 0),
    [260] = {.count = 1}, SHIFT(65, 0),
    [262] = {.count = 1}, SHIFT(66, 0),
    [264] = {.count = 1}, SHIFT(67, 0),
    [266] = {.count = 1}, SHIFT(68, 0),
    [268] = {.count = 1}, SHIFT(69, 0),
    [270] = {.count = 1}, SHIFT(70, 0),
    [272] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [274] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [276] = {.count = 1}, SHIFT(75, 0),
    [278] = {.count = 1}, SHIFT(240, 0),
    [280] = {.count = 1}, SHIFT(241, 0),
    [282] = {.count = 1}, SHIFT(78, 0),
    [284] = {.count = 1}, SHIFT(231, 0),
    [286] = {.count = 1}, SHIFT(223, 0),
    [288] = {.count = 1}, SHIFT(224, 0),
    [290] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [292] = {.count = 1}, SHIFT(222, 0),
    [294] = {.count = 1}, SHIFT(221, 0),
    [296] = {.count = 1}, SHIFT(219, 0),
    [298] = {.count = 1}, SHIFT(217, 0),
    [300] = {.count = 1}, SHIFT(159, 0),
    [302] = {.count = 1}, SHIFT(118, 0),
    [304] = {.count = 1}, SHIFT(108, 0),
    [306] = {.count = 1}, SHIFT(109, 0),
    [308] = {.count = 1}, SHIFT(86, 0),
    [310] = {.count = 1}, SHIFT(85, 0),
    [312] = {.count = 1}, SHIFT(71, 0),
    [314] = {.count = 1}, SHIFT(72, 0),
    [316] = {.count = 1}, SHIFT(73, 0),
    [318] = {.count = 1}, SHIFT(74, 0),
    [320] = {.count = 1}, SHIFT(76, 0),
    [322] = {.count = 1}, SHIFT(77, 0),
    [324] = {.count = 1}, SHIFT(83, 0),
    [326] = {.count = 1}, SHIFT(82, 0),
    [328] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [330] = {.count = 1}, SHIFT(81, 0),
    [332] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [334] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [336] = {.count = 1}, SHIFT(84, 0),
    [338] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [340] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [342] = {.count = 1}, SHIFT(87, 0),
    [344] = {.count = 1}, SHIFT(88, 0),
    [346] = {.count = 1}, SHIFT(104, 0),
    [348] = {.count = 1}, SHIFT(105, 0),
    [350] = {.count = 1}, SHIFT(89, 0),
    [352] = {.count = 1}, SHIFT(90, 0),
    [354] = {.count = 1}, SHIFT(91, 0),
    [356] = {.count = 1}, SHIFT(92, 0),
    [358] = {.count = 1}, SHIFT(101, 0),
    [360] = {.count = 1}, SHIFT(102, 0),
    [362] = {.count = 1}, SHIFT(95, 0),
    [364] = {.count = 1}, SHIFT(93, 0),
    [366] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [368] = {.count = 1}, SHIFT(94, 0),
    [370] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [372] = {.count = 1}, SHIFT(96, 0),
    [374] = {.count = 1}, SHIFT(97, 0),
    [376] = {.count = 1}, SHIFT(98, 0),
    [378] = {.count = 1}, SHIFT(99, 0),
    [380] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [382] = {.count = 1}, SHIFT(100, 0),
    [384] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [386] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [388] = {.count = 1}, SHIFT(103, 0),
    [390] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [392] = {.count = 1}, SHIFT(106, 0),
    [394] = {.count = 1}, SHIFT(107, 0),
    [396] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [398] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [400] = {.count = 1}, SHIFT(111, 0),
    [402] = {.count = 1}, SHIFT(113, 0),
    [404] = {.count = 1}, SHIFT(116, 0),
    [406] = {.count = 1}, SHIFT(115, 0),
    [408] = {.count = 1}, SHIFT(114, 0),
    [410] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [412] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [414] = {.count = 1}, SHIFT(117, 0),
    [416] = {.count = 1}, SHIFT(120, 0),
    [418] = {.count = 1}, SHIFT(121, 0),
    [420] = {.count = 1}, SHIFT(122, 0),
    [422] = {.count = 1}, SHIFT(123, 0),
    [424] = {.count = 1}, SHIFT(124, 0),
    [426] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [428] = {.count = 1}, SHIFT(135, 0),
    [430] = {.count = 1}, SHIFT(156, 0),
    [432] = {.count = 1}, SHIFT(157, 0),
    [434] = {.count = 1}, SHIFT(134, 0),
    [436] = {.count = 1}, SHIFT(136, 0),
    [438] = {.count = 1}, SHIFT(137, 0),
    [440] = {.count = 1}, SHIFT(132, 0),
    [442] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [444] = {.count = 1}, SHIFT(125, 0),
    [446] = {.count = 1}, SHIFT(126, 0),
    [448] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [450] = {.count = 1}, SHIFT(127, 0),
    [452] = {.count = 1}, SHIFT(128, 0),
    [454] = {.count = 1}, SHIFT(130, 0),
    [456] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [458] = {.count = 1}, SHIFT(129, 0),
    [460] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [462] = {.count = 1}, SHIFT(131, 0),
    [464] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [466] = {.count = 1}, SHIFT(133, 0),
    [468] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [470] = {.count = 1}, SHIFT(152, 0),
    [472] = {.count = 1}, SHIFT(147, 0),
    [474] = {.count = 1}, SHIFT(148, 0),
    [476] = {.count = 1}, SHIFT(145, 0),
    [478] = {.count = 1}, SHIFT(138, 0),
    [480] = {.count = 1}, SHIFT(139, 0),
    [482] = {.count = 1}, SHIFT(140, 0),
    [484] = {.count = 1}, SHIFT(141, 0),
    [486] = {.count = 1}, SHIFT(143, 0),
    [488] = {.count = 1}, SHIFT(142, 0),
    [490] = {.count = 1}, SHIFT(144, 0),
    [492] = {.count = 1}, SHIFT(146, 0),
    [494] = {.count = 1}, SHIFT(149, 0),
    [496] = {.count = 1}, SHIFT(150, 0),
    [498] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [500] = {.count = 1}, SHIFT(151, 0),
    [502] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [504] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [506] = {.count = 1}, SHIFT(153, 0),
    [508] = {.count = 1}, SHIFT(154, 0),
    [510] = {.count = 1}, SHIFT(155, 0),
    [512] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [514] = {.count = 1}, SHIFT(158, 0),
    [516] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [518] = {.count = 1}, SHIFT(203, 0),
    [520] = {.count = 1}, SHIFT(204, 0),
    [522] = {.count = 1}, SHIFT(205, 0),
    [524] = {.count = 1}, SHIFT(206, 0),
    [526] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [528] = {.count = 1}, SHIFT(173, 0),
    [530] = {.count = 1}, SHIFT(174, 0),
    [532] = {.count = 1}, SHIFT(168, 0),
    [534] = {.count = 1}, SHIFT(169, 0),
    [536] = {.count = 1}, SHIFT(167, 0),
    [538] = {.count = 1}, SHIFT(170, 0),
    [540] = {.count = 1}, SHIFT(171, 0),
    [542] = {.count = 1}, SHIFT(172, 0),
    [544] = {.count = 1}, SHIFT(202, 0),
    [546] = {.count = 1}, SHIFT(175, 0),
    [548] = {.count = 1}, SHIFT(176, 0),
    [550] = {.count = 1}, SHIFT(177, 0),
    [552] = {.count = 1}, SHIFT(178, 0),
    [554] = {.count = 1}, SHIFT(179, 0),
    [556] = {.count = 1}, SHIFT(180, 0),
    [558] = {.count = 1}, SHIFT(181, 0),
    [560] = {.count = 1}, SHIFT(199, 0),
    [562] = {.count = 1}, SHIFT(193, 0),
    [564] = {.count = 1}, SHIFT(200, 0),
    [566] = {.count = 1}, SHIFT(188, 0),
    [568] = {.count = 1}, SHIFT(189, 0),
    [570] = {.count = 1}, SHIFT(183, 0),
    [572] = {.count = 1}, SHIFT(184, 0),
    [574] = {.count = 1}, SHIFT(182, 0),
    [576] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [578] = {.count = 1}, SHIFT(185, 0),
    [580] = {.count = 1}, SHIFT(186, 0),
    [582] = {.count = 1}, SHIFT(187, 0),
    [584] = {.count = 1}, SHIFT(198, 0),
    [586] = {.count = 1}, SHIFT(190, 0),
    [588] = {.count = 1}, SHIFT(191, 0),
    [590] = {.count = 1}, SHIFT(192, 0),
    [592] = {.count = 1}, SHIFT(194, 0),
    [594] = {.count = 1}, SHIFT(197, 0),
    [596] = {.count = 1}, SHIFT(195, 0),
    [598] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [600] = {.count = 1}, SHIFT(196, 0),
    [602] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [604] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [606] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [608] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [610] = {.count = 1}, SHIFT(201, 0),
    [612] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [614] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [616] = {.count = 1}, SHIFT(212, 0),
    [618] = {.count = 1}, SHIFT(213, 0),
    [620] = {.count = 1}, SHIFT(207, 0),
    [622] = {.count = 1}, SHIFT(208, 0),
    [624] = {.count = 1}, SHIFT(209, 0),
    [626] = {.count = 1}, SHIFT(210, 0),
    [628] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [630] = {.count = 1}, SHIFT(211, 0),
    [632] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [634] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [636] = {.count = 1}, SHIFT(214, 0),
    [638] = {.count = 1}, SHIFT(215, 0),
    [640] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [642] = {.count = 1}, SHIFT(216, 0),
    [644] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [646] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [648] = {.count = 1}, SHIFT(218, 0),
    [650] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [652] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [654] = {.count = 1}, SHIFT(230, 0),
    [656] = {.count = 1}, SHIFT(225, 0),
    [658] = {.count = 1}, SHIFT(226, 0),
    [660] = {.count = 1}, SHIFT(227, 0),
    [662] = {.count = 1}, SHIFT(228, 0),
    [664] = {.count = 1}, SHIFT(229, 0),
    [666] = {.count = 1}, SHIFT(232, 0),
    [668] = {.count = 1}, SHIFT(233, 0),
    [670] = {.count = 1}, SHIFT(239, 0),
    [672] = {.count = 1}, SHIFT(235, 0),
    [674] = {.count = 1}, SHIFT(234, 0),
    [676] = {.count = 1}, SHIFT(236, 0),
    [678] = {.count = 1}, SHIFT(237, 0),
    [680] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [682] = {.count = 1}, SHIFT(238, 0),
    [684] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [686] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [688] = {.count = 1}, SHIFT(242, 0),
    [690] = {.count = 1}, SHIFT(245, 0),
    [692] = {.count = 1}, SHIFT(246, 0),
    [694] = {.count = 1}, SHIFT(259, 0),
    [696] = {.count = 1}, SHIFT(260, 0),
    [698] = {.count = 1}, SHIFT(247, 0),
    [700] = {.count = 1}, SHIFT(248, 0),
    [702] = {.count = 1}, SHIFT(249, 0),
    [704] = {.count = 1}, SHIFT(256, 0),
    [706] = {.count = 1}, SHIFT(257, 0),
    [708] = {.count = 1}, SHIFT(250, 0),
    [710] = {.count = 1}, SHIFT(251, 0),
    [712] = {.count = 1}, SHIFT(252, 0),
    [714] = {.count = 1}, SHIFT(253, 0),
    [716] = {.count = 1}, SHIFT(254, 0),
    [718] = {.count = 1}, SHIFT(255, 0),
    [720] = {.count = 1}, SHIFT(258, 0),
    [722] = {.count = 1}, SHIFT(261, 0),
    [724] = {.count = 1}, SHIFT(262, 0),
    [726] = {.count = 1}, SHIFT(265, 0),
    [728] = {.count = 1}, SHIFT(266, 0),
    [730] = {.count = 1}, SHIFT(267, 0),
    [732] = {.count = 1}, SHIFT(269, 0),
    [734] = {.count = 1}, SHIFT(270, 0),
    [736] = {.count = 1}, SHIFT(271, 0),
    [738] = {.count = 1}, SHIFT(273, 0),
    [740] = {.count = 1}, SHIFT(283, 0),
    [742] = {.count = 1}, SHIFT(284, 0),
    [744] = {.count = 1}, SHIFT(272, 0),
    [746] = {.count = 1}, SHIFT(279, 0),
    [748] = {.count = 1}, SHIFT(274, 0),
    [750] = {.count = 1}, SHIFT(275, 0),
    [752] = {.count = 1}, SHIFT(276, 0),
    [754] = {.count = 1}, SHIFT(277, 0),
    [756] = {.count = 1}, SHIFT(278, 0),
    [758] = {.count = 1}, SHIFT(280, 0),
    [760] = {.count = 1}, SHIFT(281, 0),
    [762] = {.count = 1}, SHIFT(282, 0),
    [764] = {.count = 1}, SHIFT(285, 0),
    [766] = {.count = 1}, SHIFT(287, 0),
    [768] = {.count = 1}, SHIFT(288, 0),
    [770] = {.count = 1}, SHIFT(289, 0),
    [772] = {.count = 1}, SHIFT(290, 0),
    [774] = {.count = 1}, SHIFT(296, 0),
    [776] = {.count = 1}, SHIFT(297, 0),
    [778] = {.count = 1}, SHIFT(291, 0),
    [780] = {.count = 1}, SHIFT(292, 0),
    [782] = {.count = 1}, SHIFT(293, 0),
    [784] = {.count = 1}, SHIFT(294, 0),
    [786] = {.count = 1}, SHIFT(295, 0),
    [788] = {.count = 1}, SHIFT(298, 0),
    [790] = {.count = 1}, SHIFT(299, 0),
    [792] = {.count = 1}, SHIFT(300, 0),
    [794] = {.count = 1}, SHIFT(302, 0),
    [796] = {.count = 1}, SHIFT(313, 0),
    [798] = {.count = 1}, SHIFT(308, 0),
    [800] = {.count = 1}, SHIFT(309, 0),
    [802] = {.count = 1}, SHIFT(310, 0),
    [804] = {.count = 1}, SHIFT(311, 0),
    [806] = {.count = 1}, SHIFT(312, 0),
    [808] = {.count = 1}, SHIFT(315, 0),
    [810] = {.count = 1}, SHIFT(316, 0),
    [812] = {.count = 1}, SHIFT(322, 0),
    [814] = {.count = 1}, SHIFT(318, 0),
    [816] = {.count = 1}, SHIFT(317, 0),
    [818] = {.count = 1}, SHIFT(319, 0),
    [820] = {.count = 1}, SHIFT(320, 0),
    [822] = {.count = 1}, SHIFT(321, 0),
    [824] = {.count = 1}, SHIFT(325, 0),
    [826] = {.count = 1}, SHIFT(333, 0),
    [828] = {.count = 1}, SHIFT(328, 0),
    [830] = {.count = 1}, SHIFT(329, 0),
    [832] = {.count = 1}, SHIFT(330, 0),
    [834] = {.count = 1}, SHIFT(331, 0),
    [836] = {.count = 1}, SHIFT(332, 0),
    [838] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [840] = {.count = 1}, SHIFT(336, 0),
    [842] = {.count = 1}, SHIFT(337, 0),
    [844] = {.count = 1}, SHIFT(339, 0),
    [846] = {.count = 1}, SHIFT(340, 0),
    [848] = {.count = 1}, SHIFT(341, 0),
    [850] = {.count = 1}, SHIFT(342, 0),
    [852] = {.count = 1}, SHIFT(343, 0),
    [854] = {.count = 1}, SHIFT(344, 0),
    [856] = {.count = 1}, SHIFT(347, 0),
    [858] = {.count = 1}, SHIFT(348, 0),
    [860] = {.count = 1}, SHIFT(361, 0),
    [862] = {.count = 1}, SHIFT(362, 0),
    [864] = {.count = 1}, SHIFT(349, 0),
    [866] = {.count = 1}, SHIFT(350, 0),
    [868] = {.count = 1}, SHIFT(351, 0),
    [870] = {.count = 1}, SHIFT(358, 0),
    [872] = {.count = 1}, SHIFT(359, 0),
    [874] = {.count = 1}, SHIFT(352, 0),
    [876] = {.count = 1}, SHIFT(353, 0),
    [878] = {.count = 1}, SHIFT(354, 0),
    [880] = {.count = 1}, SHIFT(355, 0),
    [882] = {.count = 1}, SHIFT(356, 0),
    [884] = {.count = 1}, SHIFT(357, 0),
    [886] = {.count = 1}, SHIFT(360, 0),
    [888] = {.count = 1}, SHIFT(363, 0),
    [890] = {.count = 1}, SHIFT(364, 0),
    [892] = {.count = 1}, SHIFT(367, 0),
    [894] = {.count = 1}, SHIFT(368, 0),
    [896] = {.count = 1}, SHIFT(369, 0),
    [898] = {.count = 1}, SHIFT(371, 0),
    [900] = {.count = 1}, SHIFT(372, 0),
    [902] = {.count = 1}, SHIFT(373, 0),
    [904] = {.count = 1}, SHIFT(375, 0),
    [906] = {.count = 1}, SHIFT(385, 0),
    [908] = {.count = 1}, SHIFT(386, 0),
    [910] = {.count = 1}, SHIFT(374, 0),
    [912] = {.count = 1}, SHIFT(381, 0),
    [914] = {.count = 1}, SHIFT(376, 0),
    [916] = {.count = 1}, SHIFT(377, 0),
    [918] = {.count = 1}, SHIFT(378, 0),
    [920] = {.count = 1}, SHIFT(379, 0),
    [922] = {.count = 1}, SHIFT(380, 0),
    [924] = {.count = 1}, SHIFT(382, 0),
    [926] = {.count = 1}, SHIFT(383, 0),
    [928] = {.count = 1}, SHIFT(384, 0),
    [930] = {.count = 1}, SHIFT(387, 0),
    [932] = {.count = 1}, SHIFT(389, 0),
    [934] = {.count = 1}, SHIFT(390, 0),
    [936] = {.count = 1}, SHIFT(391, 0),
    [938] = {.count = 1}, SHIFT(392, 0),
    [940] = {.count = 1}, SHIFT(398, 0),
    [942] = {.count = 1}, SHIFT(399, 0),
    [944] = {.count = 1}, SHIFT(393, 0),
    [946] = {.count = 1}, SHIFT(394, 0),
    [948] = {.count = 1}, SHIFT(395, 0),
    [950] = {.count = 1}, SHIFT(396, 0),
    [952] = {.count = 1}, SHIFT(397, 0),
    [954] = {.count = 1}, SHIFT(400, 0),
    [956] = {.count = 1}, SHIFT(401, 0),
    [958] = {.count = 1}, SHIFT(402, 0),
    [960] = {.count = 1}, SHIFT(404, 0),
    [962] = {.count = 1}, SHIFT(406, 0),
    [964] = {.count = 1}, SHIFT(416, 0),
    [966] = {.count = 1}, SHIFT(411, 0),
    [968] = {.count = 1}, SHIFT(412, 0),
    [970] = {.count = 1}, SHIFT(413, 0),
    [972] = {.count = 1}, SHIFT(414, 0),
    [974] = {.count = 1}, SHIFT(415, 0),
    [976] = {.count = 1}, SHIFT(418, 0),
    [978] = {.count = 1}, SHIFT(419, 0),
    [980] = {.count = 1}, SHIFT(425, 0),
    [982] = {.count = 1}, SHIFT(421, 0),
    [984] = {.count = 1}, SHIFT(420, 0),
    [986] = {.count = 1}, SHIFT(422, 0),
    [988] = {.count = 1}, SHIFT(423, 0),
    [990] = {.count = 1}, SHIFT(424, 0),
    [992] = {.count = 1}, SHIFT(429, 0),
    [994] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [996] = {.count = 1}, SHIFT(430, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
