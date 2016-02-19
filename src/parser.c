#include "tree_sitter/parser.h"

#define STATE_COUNT 410
#define SYMBOL_COUNT 79

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
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '[')
                ADVANCE(145);
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
            if (lookahead == '=')
                ADVANCE(118);
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
    [159] = 140,
    [160] = 140,
    [161] = 140,
    [162] = 180,
    [163] = 180,
    [164] = 150,
    [165] = 151,
    [166] = 180,
    [167] = 180,
    [168] = 157,
    [169] = 180,
    [170] = 174,
    [171] = 180,
    [172] = 180,
    [173] = 151,
    [174] = 181,
    [175] = 182,
    [176] = 183,
    [177] = 183,
    [178] = 150,
    [179] = 151,
    [180] = 180,
    [181] = 183,
    [182] = 183,
    [183] = 157,
    [184] = 183,
    [185] = 174,
    [186] = 183,
    [187] = 183,
    [188] = 151,
    [189] = 181,
    [190] = 182,
    [191] = 183,
    [192] = 184,
    [193] = 185,
    [194] = 183,
    [195] = 182,
    [196] = 184,
    [197] = 183,
    [198] = 183,
    [199] = 184,
    [200] = 180,
    [201] = 180,
    [202] = 180,
    [203] = 164,
    [204] = 160,
    [205] = 164,
    [206] = 164,
    [207] = 170,
    [208] = 164,
    [209] = 164,
    [210] = 140,
    [211] = 164,
    [212] = 146,
    [213] = 146,
    [214] = 164,
    [215] = 164,
    [216] = 151,
    [217] = 181,
    [218] = 182,
    [219] = 168,
    [220] = 184,
    [221] = 168,
    [222] = 168,
    [223] = 168,
    [224] = 186,
    [225] = 164,
    [226] = 160,
    [227] = 164,
    [228] = 164,
    [229] = 170,
    [230] = 164,
    [231] = 164,
    [232] = 170,
    [233] = 170,
    [234] = 157,
    [235] = 157,
    [236] = 158,
    [237] = 172,
    [238] = 160,
    [239] = 151,
    [240] = 173,
    [241] = 160,
    [242] = 159,
    [243] = 160,
    [244] = 164,
    [245] = 157,
    [246] = 170,
    [247] = 157,
    [248] = 157,
    [249] = 164,
    [250] = 157,
    [251] = 170,
    [252] = 164,
    [253] = 157,
    [254] = 170,
    [255] = 157,
    [256] = 157,
    [257] = 158,
    [258] = 174,
    [259] = 158,
    [260] = 158,
    [261] = 175,
    [262] = 159,
    [263] = 160,
    [264] = 176,
    [265] = 174,
    [266] = 160,
    [267] = 164,
    [268] = 157,
    [269] = 170,
    [270] = 157,
    [271] = 157,
    [272] = 160,
    [273] = 164,
    [274] = 170,
    [275] = 157,
    [276] = 164,
    [277] = 157,
    [278] = 170,
    [279] = 140,
    [280] = 157,
    [281] = 160,
    [282] = 164,
    [283] = 157,
    [284] = 170,
    [285] = 157,
    [286] = 157,
    [287] = 140,
    [288] = 157,
    [289] = 146,
    [290] = 157,
    [291] = 157,
    [292] = 151,
    [293] = 181,
    [294] = 182,
    [295] = 158,
    [296] = 184,
    [297] = 158,
    [298] = 158,
    [299] = 158,
    [300] = 186,
    [301] = 164,
    [302] = 160,
    [303] = 164,
    [304] = 157,
    [305] = 170,
    [306] = 157,
    [307] = 157,
    [308] = 170,
    [309] = 174,
    [310] = 155,
    [311] = 155,
    [312] = 151,
    [313] = 181,
    [314] = 182,
    [315] = 155,
    [316] = 184,
    [317] = 155,
    [318] = 155,
    [319] = 155,
    [320] = 140,
    [321] = 185,
    [322] = 154,
    [323] = 140,
    [324] = 159,
    [325] = 160,
    [326] = 164,
    [327] = 123,
    [328] = 170,
    [329] = 123,
    [330] = 123,
    [331] = 143,
    [332] = 172,
    [333] = 160,
    [334] = 151,
    [335] = 173,
    [336] = 160,
    [337] = 159,
    [338] = 160,
    [339] = 164,
    [340] = 123,
    [341] = 170,
    [342] = 123,
    [343] = 123,
    [344] = 164,
    [345] = 123,
    [346] = 170,
    [347] = 164,
    [348] = 123,
    [349] = 170,
    [350] = 123,
    [351] = 157,
    [352] = 143,
    [353] = 174,
    [354] = 143,
    [355] = 143,
    [356] = 175,
    [357] = 159,
    [358] = 160,
    [359] = 176,
    [360] = 174,
    [361] = 160,
    [362] = 164,
    [363] = 123,
    [364] = 170,
    [365] = 123,
    [366] = 123,
    [367] = 160,
    [368] = 164,
    [369] = 170,
    [370] = 123,
    [371] = 164,
    [372] = 123,
    [373] = 170,
    [374] = 140,
    [375] = 123,
    [376] = 160,
    [377] = 164,
    [378] = 123,
    [379] = 170,
    [380] = 123,
    [381] = 123,
    [382] = 140,
    [383] = 123,
    [384] = 146,
    [385] = 123,
    [386] = 123,
    [387] = 123,
    [388] = 151,
    [389] = 181,
    [390] = 182,
    [391] = 143,
    [392] = 184,
    [393] = 143,
    [394] = 143,
    [395] = 143,
    [396] = 186,
    [397] = 164,
    [398] = 160,
    [399] = 164,
    [400] = 123,
    [401] = 170,
    [402] = 123,
    [403] = 123,
    [404] = 170,
    [405] = 169,
    [406] = 122,
    [407] = 148,
    [408] = 123,
    [409] = 122,
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
        [sym__do_block] = 518,
        [anon_sym_do] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [160] = {
        [sym__do_block] = 522,
        [anon_sym_do] = 522,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [161] = {
        [sym__do_block] = 68,
        [anon_sym_do] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [162] = {
        [sym__do_block] = 70,
        [anon_sym_do] = 70,
        [anon_sym_COLON_COLON] = 524,
        [anon_sym_LBRACK] = 526,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [163] = {
        [sym__do_block] = 76,
        [anon_sym_do] = 76,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [164] = {
        [sym__statement] = 528,
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
        [anon_sym_RPAREN] = 530,
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
        [sym_identifier] = 532,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [166] = {
        [sym__do_block] = 170,
        [anon_sym_do] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_LBRACK] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [167] = {
        [sym__do_block] = 190,
        [anon_sym_do] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [168] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 534,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 536,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [169] = {
        [sym__do_block] = 222,
        [anon_sym_do] = 222,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [170] = {
        [anon_sym_RPAREN] = 538,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [171] = {
        [sym__do_block] = 410,
        [anon_sym_do] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [172] = {
        [sym__do_block] = 412,
        [anon_sym_do] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [173] = {
        [sym_identifier] = 540,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [174] = {
        [sym__argument] = 542,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_RBRACK] = 552,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [175] = {
        [aux_sym__call_arguments_repeat1] = 556,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 560,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [176] = {
        [aux_sym__call_arguments_repeat1] = 70,
        [anon_sym_COMMA] = 70,
        [anon_sym_COLON_COLON] = 562,
        [anon_sym_LBRACK] = 564,
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
        [sym__statement] = 566,
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
        [anon_sym_RPAREN] = 568,
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
        [sym_identifier] = 570,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [180] = {
        [sym__do_block] = 572,
        [anon_sym_do] = 572,
        [anon_sym_COLON_COLON] = 572,
        [anon_sym_LBRACK] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 44,
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
        [aux_sym_program_repeat1] = 574,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 576,
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
        [anon_sym_RPAREN] = 578,
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
        [sym_identifier] = 580,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [189] = {
        [sym__argument] = 582,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_RBRACK] = 584,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [190] = {
        [aux_sym__call_arguments_repeat1] = 586,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 588,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [191] = {
        [aux_sym__call_arguments_repeat1] = 572,
        [anon_sym_COMMA] = 572,
        [anon_sym_COLON_COLON] = 572,
        [anon_sym_LBRACK] = 572,
        [anon_sym_RBRACK] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [192] = {
        [anon_sym_RBRACK] = 590,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [193] = {
        [sym__argument] = 592,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [194] = {
        [aux_sym__call_arguments_repeat1] = 594,
        [anon_sym_COMMA] = 594,
        [anon_sym_COLON_COLON] = 594,
        [anon_sym_LBRACK] = 594,
        [anon_sym_RBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [195] = {
        [aux_sym__call_arguments_repeat1] = 596,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [196] = {
        [anon_sym_RBRACK] = 600,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [197] = {
        [aux_sym__call_arguments_repeat1] = 602,
        [anon_sym_COMMA] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [anon_sym_RBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [198] = {
        [aux_sym__call_arguments_repeat1] = 604,
        [anon_sym_COMMA] = 604,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 604,
        [anon_sym_RBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [199] = {
        [anon_sym_RBRACK] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [200] = {
        [sym__do_block] = 594,
        [anon_sym_do] = 594,
        [anon_sym_COLON_COLON] = 594,
        [anon_sym_LBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [201] = {
        [sym__do_block] = 602,
        [anon_sym_do] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [202] = {
        [sym__do_block] = 604,
        [anon_sym_do] = 604,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [203] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [anon_sym_end] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [204] = {
        [sym__statement] = 610,
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
        [anon_sym_end] = 612,
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
    [205] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_end] = 616,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [206] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_end] = 618,
        [anon_sym_if] = 618,
        [anon_sym_while] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_until] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [207] = {
        [anon_sym_end] = 620,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [208] = {
        [sym__terminator] = 622,
        [aux_sym_program_repeat1] = 622,
        [anon_sym_end] = 622,
        [anon_sym_if] = 622,
        [anon_sym_while] = 622,
        [anon_sym_unless] = 622,
        [anon_sym_until] = 622,
        [sym_comment] = 44,
        [sym__line_break] = 622,
        [anon_sym_SEMI] = 622,
    },
    [209] = {
        [sym__terminator] = 624,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 624,
        [anon_sym_if] = 624,
        [anon_sym_while] = 624,
        [anon_sym_unless] = 624,
        [anon_sym_until] = 624,
        [sym_comment] = 44,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [210] = {
        [sym__do_block] = 626,
        [anon_sym_do] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [211] = {
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
    [212] = {
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
    [213] = {
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
    [214] = {
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
    [215] = {
        [sym__terminator] = 630,
        [aux_sym_program_repeat1] = 630,
        [anon_sym_end] = 630,
        [anon_sym_if] = 630,
        [anon_sym_while] = 630,
        [anon_sym_unless] = 630,
        [anon_sym_until] = 630,
        [sym_comment] = 44,
        [sym__line_break] = 630,
        [anon_sym_SEMI] = 630,
    },
    [216] = {
        [sym_identifier] = 632,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [217] = {
        [sym__argument] = 634,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_RBRACK] = 636,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [218] = {
        [aux_sym__call_arguments_repeat1] = 638,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 640,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [219] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_end] = 572,
        [anon_sym_if] = 572,
        [anon_sym_while] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_until] = 572,
        [anon_sym_COLON_COLON] = 572,
        [anon_sym_LBRACK] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [220] = {
        [anon_sym_RBRACK] = 642,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [221] = {
        [sym__terminator] = 594,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_end] = 594,
        [anon_sym_if] = 594,
        [anon_sym_while] = 594,
        [anon_sym_unless] = 594,
        [anon_sym_until] = 594,
        [anon_sym_COLON_COLON] = 594,
        [anon_sym_LBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 594,
        [anon_sym_SEMI] = 594,
    },
    [222] = {
        [sym__terminator] = 602,
        [aux_sym_program_repeat1] = 602,
        [anon_sym_end] = 602,
        [anon_sym_if] = 602,
        [anon_sym_while] = 602,
        [anon_sym_unless] = 602,
        [anon_sym_until] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [223] = {
        [sym__terminator] = 604,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_end] = 604,
        [anon_sym_if] = 604,
        [anon_sym_while] = 604,
        [anon_sym_unless] = 604,
        [anon_sym_until] = 604,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 604,
        [anon_sym_SEMI] = 604,
    },
    [224] = {
        [sym__statement] = 644,
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
        [anon_sym_PIPE] = 646,
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
    [225] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 648,
        [anon_sym_end] = 650,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [226] = {
        [sym__statement] = 652,
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
        [anon_sym_end] = 650,
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
    [227] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_end] = 656,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [228] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [sym_comment] = 44,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [229] = {
        [anon_sym_end] = 660,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [230] = {
        [sym__terminator] = 662,
        [aux_sym_program_repeat1] = 662,
        [anon_sym_end] = 662,
        [anon_sym_if] = 662,
        [anon_sym_while] = 662,
        [anon_sym_unless] = 662,
        [anon_sym_until] = 662,
        [sym_comment] = 44,
        [sym__line_break] = 662,
        [anon_sym_SEMI] = 662,
    },
    [231] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [232] = {
        [anon_sym_end] = 656,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [233] = {
        [anon_sym_end] = 666,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [234] = {
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
    [235] = {
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
    [236] = {
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
    [237] = {
        [sym__terminator] = 668,
        [anon_sym_LT] = 670,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [238] = {
        [sym__statement] = 672,
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
        [anon_sym_end] = 674,
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
    [239] = {
        [sym_identifier] = 676,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [240] = {
        [sym__terminator] = 678,
        [aux_sym_class_declaration_repeat1] = 680,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [241] = {
        [sym__statement] = 682,
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
        [anon_sym_end] = 684,
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
    [242] = {
        [sym__terminator] = 686,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [243] = {
        [sym__statement] = 688,
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
        [anon_sym_end] = 690,
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
    [244] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_end] = 694,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [245] = {
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
    [246] = {
        [anon_sym_end] = 696,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [247] = {
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
    [248] = {
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
    [249] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 698,
        [anon_sym_end] = 690,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [250] = {
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
    [251] = {
        [anon_sym_end] = 694,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [252] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 700,
        [anon_sym_end] = 702,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [253] = {
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
    [254] = {
        [anon_sym_end] = 684,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [255] = {
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
    [256] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 704,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 706,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [257] = {
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
    [258] = {
        [anon_sym_RPAREN] = 708,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [259] = {
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
    [260] = {
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
    [261] = {
        [sym_argument_list] = 710,
        [sym__terminator] = 712,
        [anon_sym_LPAREN] = 714,
        [anon_sym_STAR] = 422,
        [anon_sym_AMP] = 422,
        [sym_identifier] = 424,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [262] = {
        [sym__terminator] = 716,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [263] = {
        [sym__statement] = 718,
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
        [anon_sym_end] = 720,
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
    [264] = {
        [sym_argument_list] = 722,
        [anon_sym_RPAREN] = 716,
        [anon_sym_STAR] = 436,
        [anon_sym_AMP] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [265] = {
        [anon_sym_RPAREN] = 724,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [266] = {
        [sym__statement] = 726,
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
        [anon_sym_end] = 728,
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
    [267] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 730,
        [anon_sym_end] = 732,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [268] = {
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
    [269] = {
        [anon_sym_end] = 734,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [270] = {
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
    [271] = {
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
    [272] = {
        [sym__statement] = 736,
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
        [anon_sym_end] = 732,
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
    [273] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 738,
        [anon_sym_end] = 734,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [274] = {
        [anon_sym_end] = 740,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [275] = {
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
    [276] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_end] = 728,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [277] = {
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
    [278] = {
        [anon_sym_end] = 732,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [279] = {
        [sym__do_block] = 744,
        [anon_sym_do] = 746,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [280] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [anon_sym_RPAREN] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [281] = {
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
    [282] = {
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
    [283] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_if] = 618,
        [anon_sym_while] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_until] = 618,
        [anon_sym_RPAREN] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [284] = {
        [anon_sym_end] = 756,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [285] = {
        [sym__terminator] = 622,
        [aux_sym_program_repeat1] = 622,
        [anon_sym_if] = 622,
        [anon_sym_while] = 622,
        [anon_sym_unless] = 622,
        [anon_sym_until] = 622,
        [anon_sym_RPAREN] = 622,
        [sym_comment] = 44,
        [sym__line_break] = 622,
        [anon_sym_SEMI] = 622,
    },
    [286] = {
        [sym__terminator] = 624,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_if] = 624,
        [anon_sym_while] = 624,
        [anon_sym_unless] = 624,
        [anon_sym_until] = 624,
        [anon_sym_RPAREN] = 624,
        [sym_comment] = 44,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [287] = {
        [sym__do_block] = 758,
        [anon_sym_do] = 746,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [288] = {
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
    [289] = {
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
    [290] = {
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
    [291] = {
        [sym__terminator] = 630,
        [aux_sym_program_repeat1] = 630,
        [anon_sym_if] = 630,
        [anon_sym_while] = 630,
        [anon_sym_unless] = 630,
        [anon_sym_until] = 630,
        [anon_sym_RPAREN] = 630,
        [sym_comment] = 44,
        [sym__line_break] = 630,
        [anon_sym_SEMI] = 630,
    },
    [292] = {
        [sym_identifier] = 760,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [293] = {
        [sym__argument] = 762,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_RBRACK] = 764,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [294] = {
        [aux_sym__call_arguments_repeat1] = 766,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 768,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [295] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_if] = 572,
        [anon_sym_while] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_until] = 572,
        [anon_sym_RPAREN] = 572,
        [anon_sym_COLON_COLON] = 572,
        [anon_sym_LBRACK] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [296] = {
        [anon_sym_RBRACK] = 770,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [297] = {
        [sym__terminator] = 594,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_if] = 594,
        [anon_sym_while] = 594,
        [anon_sym_unless] = 594,
        [anon_sym_until] = 594,
        [anon_sym_RPAREN] = 594,
        [anon_sym_COLON_COLON] = 594,
        [anon_sym_LBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 594,
        [anon_sym_SEMI] = 594,
    },
    [298] = {
        [sym__terminator] = 602,
        [aux_sym_program_repeat1] = 602,
        [anon_sym_if] = 602,
        [anon_sym_while] = 602,
        [anon_sym_unless] = 602,
        [anon_sym_until] = 602,
        [anon_sym_RPAREN] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [299] = {
        [sym__terminator] = 604,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_if] = 604,
        [anon_sym_while] = 604,
        [anon_sym_unless] = 604,
        [anon_sym_until] = 604,
        [anon_sym_RPAREN] = 604,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 604,
        [anon_sym_SEMI] = 604,
    },
    [300] = {
        [sym__statement] = 772,
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
        [anon_sym_PIPE] = 774,
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
    [301] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 776,
        [anon_sym_end] = 778,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [302] = {
        [sym__statement] = 780,
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
        [anon_sym_end] = 778,
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
    [303] = {
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
    [304] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_RPAREN] = 658,
        [sym_comment] = 44,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [305] = {
        [anon_sym_end] = 786,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [306] = {
        [sym__terminator] = 662,
        [aux_sym_program_repeat1] = 662,
        [anon_sym_if] = 662,
        [anon_sym_while] = 662,
        [anon_sym_unless] = 662,
        [anon_sym_until] = 662,
        [anon_sym_RPAREN] = 662,
        [sym_comment] = 44,
        [sym__line_break] = 662,
        [anon_sym_SEMI] = 662,
    },
    [307] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [anon_sym_RPAREN] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [308] = {
        [anon_sym_end] = 784,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [309] = {
        [anon_sym_RPAREN] = 788,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [310] = {
        [aux_sym__call_arguments_repeat1] = 410,
        [anon_sym_do] = 410,
        [anon_sym_COMMA] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [311] = {
        [aux_sym__call_arguments_repeat1] = 412,
        [anon_sym_do] = 412,
        [anon_sym_COMMA] = 412,
        [anon_sym_COLON_COLON] = 412,
        [anon_sym_LBRACK] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [312] = {
        [sym_identifier] = 790,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [313] = {
        [sym__argument] = 792,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_RBRACK] = 794,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [314] = {
        [aux_sym__call_arguments_repeat1] = 796,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 798,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [315] = {
        [aux_sym__call_arguments_repeat1] = 572,
        [anon_sym_do] = 572,
        [anon_sym_COMMA] = 572,
        [anon_sym_COLON_COLON] = 572,
        [anon_sym_LBRACK] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [316] = {
        [anon_sym_RBRACK] = 800,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [317] = {
        [aux_sym__call_arguments_repeat1] = 594,
        [anon_sym_do] = 594,
        [anon_sym_COMMA] = 594,
        [anon_sym_COLON_COLON] = 594,
        [anon_sym_LBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [318] = {
        [aux_sym__call_arguments_repeat1] = 602,
        [anon_sym_do] = 602,
        [anon_sym_COMMA] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [319] = {
        [aux_sym__call_arguments_repeat1] = 604,
        [anon_sym_do] = 604,
        [anon_sym_COMMA] = 604,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [320] = {
        [anon_sym_do] = 802,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [321] = {
        [sym__argument] = 804,
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
    [322] = {
        [aux_sym__call_arguments_repeat1] = 806,
        [anon_sym_do] = 598,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [323] = {
        [anon_sym_do] = 600,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [324] = {
        [sym__terminator] = 808,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [325] = {
        [sym__statement] = 810,
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
        [anon_sym_end] = 812,
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
    [326] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 814,
        [anon_sym_end] = 816,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [327] = {
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
    [328] = {
        [anon_sym_end] = 818,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [329] = {
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
    [330] = {
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
    [331] = {
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
    [332] = {
        [sym__terminator] = 820,
        [anon_sym_LT] = 822,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [333] = {
        [sym__statement] = 824,
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
        [anon_sym_end] = 826,
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
    [334] = {
        [sym_identifier] = 828,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [335] = {
        [sym__terminator] = 830,
        [aux_sym_class_declaration_repeat1] = 832,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [336] = {
        [sym__statement] = 834,
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
        [anon_sym_end] = 836,
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
    [337] = {
        [sym__terminator] = 838,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [338] = {
        [sym__statement] = 840,
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
        [anon_sym_end] = 842,
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
    [339] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 844,
        [anon_sym_end] = 846,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [340] = {
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
    [341] = {
        [anon_sym_end] = 848,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [342] = {
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
    [343] = {
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
    [344] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 850,
        [anon_sym_end] = 842,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [345] = {
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
    [346] = {
        [anon_sym_end] = 846,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [347] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 852,
        [anon_sym_end] = 854,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [348] = {
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
    [349] = {
        [anon_sym_end] = 836,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [350] = {
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
    [351] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 856,
        [anon_sym_if] = 196,
        [anon_sym_while] = 196,
        [anon_sym_unless] = 196,
        [anon_sym_until] = 196,
        [anon_sym_RPAREN] = 858,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [352] = {
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
    [353] = {
        [anon_sym_RPAREN] = 860,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [354] = {
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
    [355] = {
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
    [356] = {
        [sym_argument_list] = 862,
        [sym__terminator] = 864,
        [anon_sym_LPAREN] = 866,
        [anon_sym_STAR] = 422,
        [anon_sym_AMP] = 422,
        [sym_identifier] = 424,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [357] = {
        [sym__terminator] = 868,
        [sym_comment] = 44,
        [sym__line_break] = 232,
        [anon_sym_SEMI] = 234,
    },
    [358] = {
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
    [359] = {
        [sym_argument_list] = 874,
        [anon_sym_RPAREN] = 868,
        [anon_sym_STAR] = 436,
        [anon_sym_AMP] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [360] = {
        [anon_sym_RPAREN] = 876,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [361] = {
        [sym__statement] = 878,
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
        [anon_sym_end] = 880,
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
    [362] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 882,
        [anon_sym_end] = 884,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [363] = {
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
    [364] = {
        [anon_sym_end] = 886,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [365] = {
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
    [366] = {
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
    [367] = {
        [sym__statement] = 888,
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
        [anon_sym_end] = 884,
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
    [368] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 890,
        [anon_sym_end] = 886,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [369] = {
        [anon_sym_end] = 892,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [370] = {
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
    [371] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 894,
        [anon_sym_end] = 880,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [372] = {
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
    [373] = {
        [anon_sym_end] = 884,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [374] = {
        [sym__do_block] = 896,
        [anon_sym_do] = 898,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [375] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [ts_builtin_sym_end] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [376] = {
        [sym__statement] = 900,
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
        [anon_sym_end] = 902,
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
    [377] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 904,
        [anon_sym_end] = 906,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [378] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [ts_builtin_sym_end] = 618,
        [anon_sym_if] = 618,
        [anon_sym_while] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_until] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [379] = {
        [anon_sym_end] = 908,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [380] = {
        [sym__terminator] = 622,
        [aux_sym_program_repeat1] = 622,
        [ts_builtin_sym_end] = 622,
        [anon_sym_if] = 622,
        [anon_sym_while] = 622,
        [anon_sym_unless] = 622,
        [anon_sym_until] = 622,
        [sym_comment] = 44,
        [sym__line_break] = 622,
        [anon_sym_SEMI] = 622,
    },
    [381] = {
        [sym__terminator] = 624,
        [aux_sym_program_repeat1] = 624,
        [ts_builtin_sym_end] = 624,
        [anon_sym_if] = 624,
        [anon_sym_while] = 624,
        [anon_sym_unless] = 624,
        [anon_sym_until] = 624,
        [sym_comment] = 44,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [382] = {
        [sym__do_block] = 910,
        [anon_sym_do] = 898,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [383] = {
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
    [384] = {
        [sym__function_name] = 912,
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
    [385] = {
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
    [386] = {
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
    [387] = {
        [sym__terminator] = 630,
        [aux_sym_program_repeat1] = 630,
        [ts_builtin_sym_end] = 630,
        [anon_sym_if] = 630,
        [anon_sym_while] = 630,
        [anon_sym_unless] = 630,
        [anon_sym_until] = 630,
        [sym_comment] = 44,
        [sym__line_break] = 630,
        [anon_sym_SEMI] = 630,
    },
    [388] = {
        [sym_identifier] = 914,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [389] = {
        [sym__argument] = 916,
        [sym__primary] = 544,
        [sym_scope_resolution_expression] = 546,
        [sym_subscript_expression] = 546,
        [sym__variable] = 546,
        [anon_sym_LPAREN] = 548,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_RBRACK] = 918,
        [anon_sym_nil] = 554,
        [anon_sym_self] = 554,
        [sym_identifier] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [390] = {
        [aux_sym__call_arguments_repeat1] = 920,
        [anon_sym_COMMA] = 558,
        [anon_sym_RBRACK] = 922,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [391] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [ts_builtin_sym_end] = 572,
        [anon_sym_if] = 572,
        [anon_sym_while] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_until] = 572,
        [anon_sym_COLON_COLON] = 572,
        [anon_sym_LBRACK] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [392] = {
        [anon_sym_RBRACK] = 924,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [393] = {
        [sym__terminator] = 594,
        [aux_sym_program_repeat1] = 594,
        [ts_builtin_sym_end] = 594,
        [anon_sym_if] = 594,
        [anon_sym_while] = 594,
        [anon_sym_unless] = 594,
        [anon_sym_until] = 594,
        [anon_sym_COLON_COLON] = 594,
        [anon_sym_LBRACK] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 594,
        [anon_sym_SEMI] = 594,
    },
    [394] = {
        [sym__terminator] = 602,
        [aux_sym_program_repeat1] = 602,
        [ts_builtin_sym_end] = 602,
        [anon_sym_if] = 602,
        [anon_sym_while] = 602,
        [anon_sym_unless] = 602,
        [anon_sym_until] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [395] = {
        [sym__terminator] = 604,
        [aux_sym_program_repeat1] = 604,
        [ts_builtin_sym_end] = 604,
        [anon_sym_if] = 604,
        [anon_sym_while] = 604,
        [anon_sym_unless] = 604,
        [anon_sym_until] = 604,
        [anon_sym_COLON_COLON] = 604,
        [anon_sym_LBRACK] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 604,
        [anon_sym_SEMI] = 604,
    },
    [396] = {
        [sym__statement] = 926,
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
        [anon_sym_PIPE] = 928,
        [anon_sym_end] = 912,
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
    [397] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 930,
        [anon_sym_end] = 932,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [398] = {
        [sym__statement] = 934,
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
        [anon_sym_end] = 932,
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
    [399] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 936,
        [anon_sym_end] = 938,
        [anon_sym_if] = 282,
        [anon_sym_while] = 282,
        [anon_sym_unless] = 282,
        [anon_sym_until] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [400] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [ts_builtin_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [sym_comment] = 44,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [401] = {
        [anon_sym_end] = 940,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [402] = {
        [sym__terminator] = 662,
        [aux_sym_program_repeat1] = 662,
        [ts_builtin_sym_end] = 662,
        [anon_sym_if] = 662,
        [anon_sym_while] = 662,
        [anon_sym_unless] = 662,
        [anon_sym_until] = 662,
        [sym_comment] = 44,
        [sym__line_break] = 662,
        [anon_sym_SEMI] = 662,
    },
    [403] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [ts_builtin_sym_end] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [404] = {
        [anon_sym_end] = 938,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [405] = {
        [sym__statement] = 942,
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
    [406] = {
        [ts_builtin_sym_end] = 944,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [407] = {
        [sym__expression] = 912,
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
    [408] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 946,
        [ts_builtin_sym_end] = 338,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [409] = {
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
    [48] = {.count = 1}, SHIFT(405, 0),
    [50] = {.count = 1}, SHIFT(406, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(407, 0),
    [56] = {.count = 1}, SHIFT(79, 0),
    [58] = {.count = 1}, SHIFT(80, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(396, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, SHIFT(388, 0),
    [74] = {.count = 1}, SHIFT(389, 0),
    [76] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [78] = {.count = 1}, SHIFT(387, 0),
    [80] = {.count = 1}, SHIFT(386, 0),
    [82] = {.count = 1}, SHIFT(384, 0),
    [84] = {.count = 1}, SHIFT(213, 0),
    [86] = {.count = 1}, SHIFT(382, 0),
    [88] = {.count = 1}, SHIFT(160, 0),
    [90] = {.count = 1}, SHIFT(161, 0),
    [92] = {.count = 1}, SHIFT(162, 0),
    [94] = {.count = 1}, SHIFT(163, 0),
    [96] = {.count = 1}, SHIFT(164, 0),
    [98] = {.count = 1}, SHIFT(165, 0),
    [100] = {.count = 1}, SHIFT(166, 0),
    [102] = {.count = 1}, SHIFT(374, 0),
    [104] = {.count = 1}, SHIFT(356, 0),
    [106] = {.count = 1}, SHIFT(119, 0),
    [108] = {.count = 1}, SHIFT(351, 0),
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
    [134] = {.count = 1}, SHIFT(352, 0),
    [136] = {.count = 1}, SHIFT(45, 0),
    [138] = {.count = 1}, SHIFT(46, 0),
    [140] = {.count = 1}, SHIFT(47, 0),
    [142] = {.count = 1}, SHIFT(48, 0),
    [144] = {.count = 1}, SHIFT(332, 0),
    [146] = {.count = 1}, SHIFT(331, 0),
    [148] = {.count = 1}, SHIFT(324, 0),
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
    [176] = {.count = 1}, SHIFT(320, 0),
    [178] = {.count = 1}, SHIFT(321, 0),
    [180] = {.count = 1}, SHIFT(312, 0),
    [182] = {.count = 1}, SHIFT(313, 0),
    [184] = {.count = 1}, SHIFT(31, 0),
    [186] = {.count = 1}, SHIFT(44, 0),
    [188] = {.count = 1}, SHIFT(30, 0),
    [190] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [192] = {.count = 1}, SHIFT(110, 0),
    [194] = {.count = 1}, SHIFT(309, 0),
    [196] = {.count = 1}, SHIFT(112, 0),
    [198] = {.count = 1}, SHIFT(310, 0),
    [200] = {.count = 1}, SHIFT(300, 0),
    [202] = {.count = 1}, SHIFT(292, 0),
    [204] = {.count = 1}, SHIFT(293, 0),
    [206] = {.count = 1}, SHIFT(291, 0),
    [208] = {.count = 1}, SHIFT(290, 0),
    [210] = {.count = 1}, SHIFT(289, 0),
    [212] = {.count = 1}, SHIFT(287, 0),
    [214] = {.count = 1}, SHIFT(279, 0),
    [216] = {.count = 1}, SHIFT(261, 0),
    [218] = {.count = 1}, SHIFT(256, 0),
    [220] = {.count = 1}, SHIFT(257, 0),
    [222] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [224] = {.count = 1}, SHIFT(237, 0),
    [226] = {.count = 1}, SHIFT(236, 0),
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
    [278] = {.count = 1}, SHIFT(233, 0),
    [280] = {.count = 1}, SHIFT(234, 0),
    [282] = {.count = 1}, SHIFT(78, 0),
    [284] = {.count = 1}, SHIFT(224, 0),
    [286] = {.count = 1}, SHIFT(216, 0),
    [288] = {.count = 1}, SHIFT(217, 0),
    [290] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [292] = {.count = 1}, SHIFT(215, 0),
    [294] = {.count = 1}, SHIFT(214, 0),
    [296] = {.count = 1}, SHIFT(212, 0),
    [298] = {.count = 1}, SHIFT(210, 0),
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
    [522] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [524] = {.count = 1}, SHIFT(173, 0),
    [526] = {.count = 1}, SHIFT(174, 0),
    [528] = {.count = 1}, SHIFT(168, 0),
    [530] = {.count = 1}, SHIFT(169, 0),
    [532] = {.count = 1}, SHIFT(167, 0),
    [534] = {.count = 1}, SHIFT(170, 0),
    [536] = {.count = 1}, SHIFT(171, 0),
    [538] = {.count = 1}, SHIFT(172, 0),
    [540] = {.count = 1}, SHIFT(202, 0),
    [542] = {.count = 1}, SHIFT(175, 0),
    [544] = {.count = 1}, SHIFT(176, 0),
    [546] = {.count = 1}, SHIFT(177, 0),
    [548] = {.count = 1}, SHIFT(178, 0),
    [550] = {.count = 1}, SHIFT(179, 0),
    [552] = {.count = 1}, SHIFT(180, 0),
    [554] = {.count = 1}, SHIFT(181, 0),
    [556] = {.count = 1}, SHIFT(199, 0),
    [558] = {.count = 1}, SHIFT(193, 0),
    [560] = {.count = 1}, SHIFT(200, 0),
    [562] = {.count = 1}, SHIFT(188, 0),
    [564] = {.count = 1}, SHIFT(189, 0),
    [566] = {.count = 1}, SHIFT(183, 0),
    [568] = {.count = 1}, SHIFT(184, 0),
    [570] = {.count = 1}, SHIFT(182, 0),
    [572] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [574] = {.count = 1}, SHIFT(185, 0),
    [576] = {.count = 1}, SHIFT(186, 0),
    [578] = {.count = 1}, SHIFT(187, 0),
    [580] = {.count = 1}, SHIFT(198, 0),
    [582] = {.count = 1}, SHIFT(190, 0),
    [584] = {.count = 1}, SHIFT(191, 0),
    [586] = {.count = 1}, SHIFT(192, 0),
    [588] = {.count = 1}, SHIFT(194, 0),
    [590] = {.count = 1}, SHIFT(197, 0),
    [592] = {.count = 1}, SHIFT(195, 0),
    [594] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [596] = {.count = 1}, SHIFT(196, 0),
    [598] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [600] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [602] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [604] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [606] = {.count = 1}, SHIFT(201, 0),
    [608] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [610] = {.count = 1}, SHIFT(205, 0),
    [612] = {.count = 1}, SHIFT(206, 0),
    [614] = {.count = 1}, SHIFT(207, 0),
    [616] = {.count = 1}, SHIFT(208, 0),
    [618] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [620] = {.count = 1}, SHIFT(209, 0),
    [622] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [624] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [626] = {.count = 1}, SHIFT(211, 0),
    [628] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [630] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [632] = {.count = 1}, SHIFT(223, 0),
    [634] = {.count = 1}, SHIFT(218, 0),
    [636] = {.count = 1}, SHIFT(219, 0),
    [638] = {.count = 1}, SHIFT(220, 0),
    [640] = {.count = 1}, SHIFT(221, 0),
    [642] = {.count = 1}, SHIFT(222, 0),
    [644] = {.count = 1}, SHIFT(225, 0),
    [646] = {.count = 1}, SHIFT(226, 0),
    [648] = {.count = 1}, SHIFT(232, 0),
    [650] = {.count = 1}, SHIFT(228, 0),
    [652] = {.count = 1}, SHIFT(227, 0),
    [654] = {.count = 1}, SHIFT(229, 0),
    [656] = {.count = 1}, SHIFT(230, 0),
    [658] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [660] = {.count = 1}, SHIFT(231, 0),
    [662] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [664] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [666] = {.count = 1}, SHIFT(235, 0),
    [668] = {.count = 1}, SHIFT(238, 0),
    [670] = {.count = 1}, SHIFT(239, 0),
    [672] = {.count = 1}, SHIFT(252, 0),
    [674] = {.count = 1}, SHIFT(253, 0),
    [676] = {.count = 1}, SHIFT(240, 0),
    [678] = {.count = 1}, SHIFT(241, 0),
    [680] = {.count = 1}, SHIFT(242, 0),
    [682] = {.count = 1}, SHIFT(249, 0),
    [684] = {.count = 1}, SHIFT(250, 0),
    [686] = {.count = 1}, SHIFT(243, 0),
    [688] = {.count = 1}, SHIFT(244, 0),
    [690] = {.count = 1}, SHIFT(245, 0),
    [692] = {.count = 1}, SHIFT(246, 0),
    [694] = {.count = 1}, SHIFT(247, 0),
    [696] = {.count = 1}, SHIFT(248, 0),
    [698] = {.count = 1}, SHIFT(251, 0),
    [700] = {.count = 1}, SHIFT(254, 0),
    [702] = {.count = 1}, SHIFT(255, 0),
    [704] = {.count = 1}, SHIFT(258, 0),
    [706] = {.count = 1}, SHIFT(259, 0),
    [708] = {.count = 1}, SHIFT(260, 0),
    [710] = {.count = 1}, SHIFT(262, 0),
    [712] = {.count = 1}, SHIFT(263, 0),
    [714] = {.count = 1}, SHIFT(264, 0),
    [716] = {.count = 1}, SHIFT(266, 0),
    [718] = {.count = 1}, SHIFT(276, 0),
    [720] = {.count = 1}, SHIFT(277, 0),
    [722] = {.count = 1}, SHIFT(265, 0),
    [724] = {.count = 1}, SHIFT(272, 0),
    [726] = {.count = 1}, SHIFT(267, 0),
    [728] = {.count = 1}, SHIFT(268, 0),
    [730] = {.count = 1}, SHIFT(269, 0),
    [732] = {.count = 1}, SHIFT(270, 0),
    [734] = {.count = 1}, SHIFT(271, 0),
    [736] = {.count = 1}, SHIFT(273, 0),
    [738] = {.count = 1}, SHIFT(274, 0),
    [740] = {.count = 1}, SHIFT(275, 0),
    [742] = {.count = 1}, SHIFT(278, 0),
    [744] = {.count = 1}, SHIFT(280, 0),
    [746] = {.count = 1}, SHIFT(281, 0),
    [748] = {.count = 1}, SHIFT(282, 0),
    [750] = {.count = 1}, SHIFT(283, 0),
    [752] = {.count = 1}, SHIFT(284, 0),
    [754] = {.count = 1}, SHIFT(285, 0),
    [756] = {.count = 1}, SHIFT(286, 0),
    [758] = {.count = 1}, SHIFT(288, 0),
    [760] = {.count = 1}, SHIFT(299, 0),
    [762] = {.count = 1}, SHIFT(294, 0),
    [764] = {.count = 1}, SHIFT(295, 0),
    [766] = {.count = 1}, SHIFT(296, 0),
    [768] = {.count = 1}, SHIFT(297, 0),
    [770] = {.count = 1}, SHIFT(298, 0),
    [772] = {.count = 1}, SHIFT(301, 0),
    [774] = {.count = 1}, SHIFT(302, 0),
    [776] = {.count = 1}, SHIFT(308, 0),
    [778] = {.count = 1}, SHIFT(304, 0),
    [780] = {.count = 1}, SHIFT(303, 0),
    [782] = {.count = 1}, SHIFT(305, 0),
    [784] = {.count = 1}, SHIFT(306, 0),
    [786] = {.count = 1}, SHIFT(307, 0),
    [788] = {.count = 1}, SHIFT(311, 0),
    [790] = {.count = 1}, SHIFT(319, 0),
    [792] = {.count = 1}, SHIFT(314, 0),
    [794] = {.count = 1}, SHIFT(315, 0),
    [796] = {.count = 1}, SHIFT(316, 0),
    [798] = {.count = 1}, SHIFT(317, 0),
    [800] = {.count = 1}, SHIFT(318, 0),
    [802] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [804] = {.count = 1}, SHIFT(322, 0),
    [806] = {.count = 1}, SHIFT(323, 0),
    [808] = {.count = 1}, SHIFT(325, 0),
    [810] = {.count = 1}, SHIFT(326, 0),
    [812] = {.count = 1}, SHIFT(327, 0),
    [814] = {.count = 1}, SHIFT(328, 0),
    [816] = {.count = 1}, SHIFT(329, 0),
    [818] = {.count = 1}, SHIFT(330, 0),
    [820] = {.count = 1}, SHIFT(333, 0),
    [822] = {.count = 1}, SHIFT(334, 0),
    [824] = {.count = 1}, SHIFT(347, 0),
    [826] = {.count = 1}, SHIFT(348, 0),
    [828] = {.count = 1}, SHIFT(335, 0),
    [830] = {.count = 1}, SHIFT(336, 0),
    [832] = {.count = 1}, SHIFT(337, 0),
    [834] = {.count = 1}, SHIFT(344, 0),
    [836] = {.count = 1}, SHIFT(345, 0),
    [838] = {.count = 1}, SHIFT(338, 0),
    [840] = {.count = 1}, SHIFT(339, 0),
    [842] = {.count = 1}, SHIFT(340, 0),
    [844] = {.count = 1}, SHIFT(341, 0),
    [846] = {.count = 1}, SHIFT(342, 0),
    [848] = {.count = 1}, SHIFT(343, 0),
    [850] = {.count = 1}, SHIFT(346, 0),
    [852] = {.count = 1}, SHIFT(349, 0),
    [854] = {.count = 1}, SHIFT(350, 0),
    [856] = {.count = 1}, SHIFT(353, 0),
    [858] = {.count = 1}, SHIFT(354, 0),
    [860] = {.count = 1}, SHIFT(355, 0),
    [862] = {.count = 1}, SHIFT(357, 0),
    [864] = {.count = 1}, SHIFT(358, 0),
    [866] = {.count = 1}, SHIFT(359, 0),
    [868] = {.count = 1}, SHIFT(361, 0),
    [870] = {.count = 1}, SHIFT(371, 0),
    [872] = {.count = 1}, SHIFT(372, 0),
    [874] = {.count = 1}, SHIFT(360, 0),
    [876] = {.count = 1}, SHIFT(367, 0),
    [878] = {.count = 1}, SHIFT(362, 0),
    [880] = {.count = 1}, SHIFT(363, 0),
    [882] = {.count = 1}, SHIFT(364, 0),
    [884] = {.count = 1}, SHIFT(365, 0),
    [886] = {.count = 1}, SHIFT(366, 0),
    [888] = {.count = 1}, SHIFT(368, 0),
    [890] = {.count = 1}, SHIFT(369, 0),
    [892] = {.count = 1}, SHIFT(370, 0),
    [894] = {.count = 1}, SHIFT(373, 0),
    [896] = {.count = 1}, SHIFT(375, 0),
    [898] = {.count = 1}, SHIFT(376, 0),
    [900] = {.count = 1}, SHIFT(377, 0),
    [902] = {.count = 1}, SHIFT(378, 0),
    [904] = {.count = 1}, SHIFT(379, 0),
    [906] = {.count = 1}, SHIFT(380, 0),
    [908] = {.count = 1}, SHIFT(381, 0),
    [910] = {.count = 1}, SHIFT(383, 0),
    [912] = {.count = 1}, SHIFT(385, 0),
    [914] = {.count = 1}, SHIFT(395, 0),
    [916] = {.count = 1}, SHIFT(390, 0),
    [918] = {.count = 1}, SHIFT(391, 0),
    [920] = {.count = 1}, SHIFT(392, 0),
    [922] = {.count = 1}, SHIFT(393, 0),
    [924] = {.count = 1}, SHIFT(394, 0),
    [926] = {.count = 1}, SHIFT(397, 0),
    [928] = {.count = 1}, SHIFT(398, 0),
    [930] = {.count = 1}, SHIFT(404, 0),
    [932] = {.count = 1}, SHIFT(400, 0),
    [934] = {.count = 1}, SHIFT(399, 0),
    [936] = {.count = 1}, SHIFT(401, 0),
    [938] = {.count = 1}, SHIFT(402, 0),
    [940] = {.count = 1}, SHIFT(403, 0),
    [942] = {.count = 1}, SHIFT(408, 0),
    [944] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [946] = {.count = 1}, SHIFT(409, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
