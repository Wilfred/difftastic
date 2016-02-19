#include "tree_sitter/parser.h"

#define STATE_COUNT 348
#define SYMBOL_COUNT 75

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_argument_list,
    sym_class_declaration,
    sym_module_declaration,
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
                ('v' <= lookahead && lookahead <= 'z'))
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
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(100);
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
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
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
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
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
                ADVANCE(151);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(90);
            LEX_ERROR();
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'd')
                ADVANCE(141);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
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
                ('v' <= lookahead && lookahead <= 'z'))
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(160);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(161);
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
                ('v' <= lookahead && lookahead <= 'z'))
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
            LEX_ERROR();
        case 160:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 161:
            ACCEPT_TOKEN(anon_sym_LT);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(163);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 163:
            if (lookahead == 'n')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 'd')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            ACCEPT_TOKEN(anon_sym_end);
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
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
                ADVANCE(163);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(163);
            LEX_ERROR();
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
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 170:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
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
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(161);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == ':')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(33);
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
            if (lookahead == ')')
                ADVANCE(9);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(160);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(160);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
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
                ADVANCE(169);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == ']')
                ADVANCE(60);
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
                ADVANCE(169);
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
                ('v' <= lookahead && lookahead <= 'z'))
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
    [12] = 146,
    [13] = 148,
    [14] = 149,
    [15] = 149,
    [16] = 149,
    [17] = 150,
    [18] = 143,
    [19] = 140,
    [20] = 140,
    [21] = 152,
    [22] = 153,
    [23] = 153,
    [24] = 148,
    [25] = 149,
    [26] = 154,
    [27] = 153,
    [28] = 153,
    [29] = 155,
    [30] = 155,
    [31] = 155,
    [32] = 140,
    [33] = 155,
    [34] = 156,
    [35] = 156,
    [36] = 146,
    [37] = 146,
    [38] = 146,
    [39] = 148,
    [40] = 149,
    [41] = 149,
    [42] = 149,
    [43] = 156,
    [44] = 157,
    [45] = 158,
    [46] = 159,
    [47] = 158,
    [48] = 162,
    [49] = 162,
    [50] = 162,
    [51] = 140,
    [52] = 162,
    [53] = 166,
    [54] = 166,
    [55] = 155,
    [56] = 146,
    [57] = 146,
    [58] = 146,
    [59] = 148,
    [60] = 149,
    [61] = 149,
    [62] = 149,
    [63] = 166,
    [64] = 157,
    [65] = 158,
    [66] = 162,
    [67] = 162,
    [68] = 148,
    [69] = 167,
    [70] = 162,
    [71] = 168,
    [72] = 170,
    [73] = 148,
    [74] = 162,
    [75] = 162,
    [76] = 162,
    [77] = 167,
    [78] = 166,
    [79] = 171,
    [80] = 158,
    [81] = 149,
    [82] = 172,
    [83] = 158,
    [84] = 157,
    [85] = 149,
    [86] = 172,
    [87] = 157,
    [88] = 158,
    [89] = 162,
    [90] = 162,
    [91] = 167,
    [92] = 162,
    [93] = 162,
    [94] = 162,
    [95] = 162,
    [96] = 167,
    [97] = 162,
    [98] = 162,
    [99] = 167,
    [100] = 162,
    [101] = 155,
    [102] = 148,
    [103] = 173,
    [104] = 168,
    [105] = 166,
    [106] = 155,
    [107] = 166,
    [108] = 155,
    [109] = 173,
    [110] = 174,
    [111] = 174,
    [112] = 157,
    [113] = 158,
    [114] = 175,
    [115] = 149,
    [116] = 176,
    [117] = 157,
    [118] = 177,
    [119] = 149,
    [120] = 176,
    [121] = 157,
    [122] = 176,
    [123] = 157,
    [124] = 176,
    [125] = 157,
    [126] = 173,
    [127] = 158,
    [128] = 149,
    [129] = 178,
    [130] = 173,
    [131] = 177,
    [132] = 149,
    [133] = 178,
    [134] = 173,
    [135] = 178,
    [136] = 173,
    [137] = 178,
    [138] = 173,
    [139] = 162,
    [140] = 162,
    [141] = 167,
    [142] = 162,
    [143] = 162,
    [144] = 158,
    [145] = 162,
    [146] = 167,
    [147] = 162,
    [148] = 162,
    [149] = 162,
    [150] = 167,
    [151] = 146,
    [152] = 146,
    [153] = 162,
    [154] = 162,
    [155] = 149,
    [156] = 179,
    [157] = 180,
    [158] = 181,
    [159] = 181,
    [160] = 148,
    [161] = 149,
    [162] = 166,
    [163] = 181,
    [164] = 181,
    [165] = 155,
    [166] = 173,
    [167] = 181,
    [168] = 181,
    [169] = 149,
    [170] = 179,
    [171] = 180,
    [172] = 181,
    [173] = 182,
    [174] = 183,
    [175] = 181,
    [176] = 180,
    [177] = 182,
    [178] = 181,
    [179] = 181,
    [180] = 182,
    [181] = 166,
    [182] = 166,
    [183] = 166,
    [184] = 184,
    [185] = 162,
    [186] = 158,
    [187] = 162,
    [188] = 162,
    [189] = 167,
    [190] = 162,
    [191] = 162,
    [192] = 167,
    [193] = 167,
    [194] = 155,
    [195] = 155,
    [196] = 156,
    [197] = 171,
    [198] = 158,
    [199] = 149,
    [200] = 172,
    [201] = 158,
    [202] = 157,
    [203] = 158,
    [204] = 162,
    [205] = 155,
    [206] = 167,
    [207] = 155,
    [208] = 155,
    [209] = 162,
    [210] = 155,
    [211] = 167,
    [212] = 162,
    [213] = 155,
    [214] = 167,
    [215] = 155,
    [216] = 155,
    [217] = 173,
    [218] = 156,
    [219] = 156,
    [220] = 174,
    [221] = 157,
    [222] = 158,
    [223] = 175,
    [224] = 173,
    [225] = 158,
    [226] = 162,
    [227] = 155,
    [228] = 167,
    [229] = 155,
    [230] = 155,
    [231] = 158,
    [232] = 162,
    [233] = 167,
    [234] = 155,
    [235] = 162,
    [236] = 155,
    [237] = 167,
    [238] = 146,
    [239] = 155,
    [240] = 155,
    [241] = 149,
    [242] = 179,
    [243] = 180,
    [244] = 156,
    [245] = 182,
    [246] = 156,
    [247] = 156,
    [248] = 156,
    [249] = 184,
    [250] = 162,
    [251] = 158,
    [252] = 162,
    [253] = 155,
    [254] = 167,
    [255] = 155,
    [256] = 155,
    [257] = 167,
    [258] = 173,
    [259] = 153,
    [260] = 153,
    [261] = 149,
    [262] = 179,
    [263] = 180,
    [264] = 153,
    [265] = 182,
    [266] = 153,
    [267] = 153,
    [268] = 153,
    [269] = 140,
    [270] = 183,
    [271] = 152,
    [272] = 140,
    [273] = 157,
    [274] = 158,
    [275] = 162,
    [276] = 123,
    [277] = 167,
    [278] = 123,
    [279] = 123,
    [280] = 143,
    [281] = 171,
    [282] = 158,
    [283] = 149,
    [284] = 172,
    [285] = 158,
    [286] = 157,
    [287] = 158,
    [288] = 162,
    [289] = 123,
    [290] = 167,
    [291] = 123,
    [292] = 123,
    [293] = 162,
    [294] = 123,
    [295] = 167,
    [296] = 162,
    [297] = 123,
    [298] = 167,
    [299] = 123,
    [300] = 155,
    [301] = 173,
    [302] = 143,
    [303] = 143,
    [304] = 174,
    [305] = 157,
    [306] = 158,
    [307] = 175,
    [308] = 173,
    [309] = 158,
    [310] = 162,
    [311] = 123,
    [312] = 167,
    [313] = 123,
    [314] = 123,
    [315] = 158,
    [316] = 162,
    [317] = 167,
    [318] = 123,
    [319] = 162,
    [320] = 123,
    [321] = 167,
    [322] = 146,
    [323] = 123,
    [324] = 123,
    [325] = 123,
    [326] = 149,
    [327] = 179,
    [328] = 180,
    [329] = 143,
    [330] = 182,
    [331] = 143,
    [332] = 143,
    [333] = 143,
    [334] = 184,
    [335] = 162,
    [336] = 158,
    [337] = 162,
    [338] = 123,
    [339] = 167,
    [340] = 123,
    [341] = 123,
    [342] = 167,
    [343] = 148,
    [344] = 122,
    [345] = 168,
    [346] = 123,
    [347] = 122,
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
        [anon_sym_def] = 26,
        [anon_sym_LPAREN] = 28,
        [anon_sym_class] = 30,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_module] = 34,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 38,
        [anon_sym_self] = 38,
        [sym_identifier] = 38,
        [sym_comment] = 40,
        [sym_symbol] = 14,
        [sym__line_break] = 40,
    },
    [1] = {
        [ts_builtin_sym_end] = 42,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [2] = {
        [sym__terminator] = 44,
        [aux_sym_program_repeat1] = 46,
        [ts_builtin_sym_end] = 48,
        [anon_sym_if] = 50,
        [anon_sym_while] = 50,
        [anon_sym_unless] = 50,
        [anon_sym_until] = 50,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [3] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 56,
        [ts_builtin_sym_end] = 56,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [sym_comment] = 40,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [4] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 58,
        [ts_builtin_sym_end] = 58,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 40,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [5] = {
        [anon_sym_do] = 60,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [6] = {
        [anon_sym_do] = 62,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [7] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [8] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [ts_builtin_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_COLON_COLON] = 68,
        [anon_sym_LBRACK] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [9] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [ts_builtin_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [10] = {
        [sym__function_name] = 74,
        [anon_sym_PIPE] = 76,
        [anon_sym_STAR] = 76,
        [anon_sym_AMP] = 76,
        [anon_sym_LT] = 76,
        [sym_identifier] = 76,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 76,
        [anon_sym_CARET] = 76,
        [anon_sym_LT_EQ_GT] = 76,
        [anon_sym_EQ_EQ] = 76,
        [anon_sym_EQ_EQ_EQ] = 76,
        [anon_sym_EQ_TILDE] = 76,
        [anon_sym_GT] = 76,
        [anon_sym_GT_EQ] = 76,
        [anon_sym_LT_EQ] = 76,
        [anon_sym_PLUS] = 76,
        [anon_sym_DASH] = 76,
        [anon_sym_SLASH] = 76,
        [anon_sym_PERCENT] = 76,
        [anon_sym_STAR_STAR] = 76,
        [anon_sym_LT_LT] = 76,
        [anon_sym_GT_GT] = 76,
        [anon_sym_TILDE] = 76,
        [anon_sym_PLUS_AT] = 76,
        [anon_sym_DASH_AT] = 76,
        [anon_sym_LBRACK_RBRACK] = 76,
        [anon_sym_LBRACK_RBRACK_EQ] = 76,
        [sym__line_break] = 40,
    },
    [11] = {
        [sym__function_name] = 78,
        [anon_sym_PIPE] = 80,
        [anon_sym_STAR] = 80,
        [anon_sym_AMP] = 80,
        [anon_sym_LT] = 80,
        [sym_identifier] = 80,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [12] = {
        [sym__function_name] = 82,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [13] = {
        [sym__statement] = 86,
        [sym__declaration] = 88,
        [sym_method_declaration] = 90,
        [sym_class_declaration] = 90,
        [sym_module_declaration] = 90,
        [sym__call] = 92,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 88,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_undef] = 100,
        [anon_sym_alias] = 102,
        [anon_sym_def] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_class] = 108,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_module] = 112,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [14] = {
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [15] = {
        [sym_identifier] = 118,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [16] = {
        [sym_identifier] = 120,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [17] = {
        [sym__call_arguments] = 122,
        [sym__command] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_do] = 132,
        [anon_sym_LPAREN] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_super] = 138,
        [anon_sym_nil] = 140,
        [anon_sym_self] = 140,
        [sym_identifier] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [18] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_if] = 142,
        [anon_sym_while] = 142,
        [anon_sym_unless] = 142,
        [anon_sym_until] = 142,
        [anon_sym_COLON_COLON] = 142,
        [anon_sym_LBRACK] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [19] = {
        [anon_sym_do] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [20] = {
        [anon_sym_do] = 146,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [21] = {
        [aux_sym__call_arguments_repeat1] = 148,
        [anon_sym_do] = 146,
        [anon_sym_COMMA] = 150,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [22] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [anon_sym_COLON_COLON] = 152,
        [anon_sym_LBRACK] = 154,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [23] = {
        [aux_sym__call_arguments_repeat1] = 72,
        [anon_sym_do] = 72,
        [anon_sym_COMMA] = 72,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [24] = {
        [sym__statement] = 156,
        [sym__declaration] = 88,
        [sym_method_declaration] = 90,
        [sym_class_declaration] = 90,
        [sym_module_declaration] = 90,
        [sym__call] = 92,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 88,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_undef] = 100,
        [anon_sym_alias] = 102,
        [anon_sym_def] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_class] = 108,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_module] = 112,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [25] = {
        [sym_identifier] = 158,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [26] = {
        [sym__call_arguments] = 122,
        [sym__command] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_super] = 138,
        [anon_sym_nil] = 140,
        [anon_sym_self] = 140,
        [sym_identifier] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 142,
        [anon_sym_do] = 142,
        [anon_sym_COMMA] = 142,
        [anon_sym_COLON_COLON] = 142,
        [anon_sym_LBRACK] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [28] = {
        [aux_sym__call_arguments_repeat1] = 160,
        [anon_sym_do] = 160,
        [anon_sym_COMMA] = 160,
        [anon_sym_COLON_COLON] = 160,
        [anon_sym_LBRACK] = 160,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [29] = {
        [sym__terminator] = 162,
        [aux_sym_program_repeat1] = 164,
        [anon_sym_if] = 166,
        [anon_sym_while] = 166,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 166,
        [anon_sym_RPAREN] = 168,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [30] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 56,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [anon_sym_RPAREN] = 56,
        [sym_comment] = 40,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [31] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 58,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [anon_sym_RPAREN] = 58,
        [sym_comment] = 40,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [32] = {
        [anon_sym_do] = 170,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [33] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_RPAREN] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [34] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_RPAREN] = 66,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_LBRACK] = 174,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [35] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_RPAREN] = 72,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [36] = {
        [sym__function_name] = 176,
        [anon_sym_PIPE] = 178,
        [anon_sym_STAR] = 178,
        [anon_sym_AMP] = 178,
        [anon_sym_LT] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 178,
        [anon_sym_CARET] = 178,
        [anon_sym_LT_EQ_GT] = 178,
        [anon_sym_EQ_EQ] = 178,
        [anon_sym_EQ_EQ_EQ] = 178,
        [anon_sym_EQ_TILDE] = 178,
        [anon_sym_GT] = 178,
        [anon_sym_GT_EQ] = 178,
        [anon_sym_LT_EQ] = 178,
        [anon_sym_PLUS] = 178,
        [anon_sym_DASH] = 178,
        [anon_sym_SLASH] = 178,
        [anon_sym_PERCENT] = 178,
        [anon_sym_STAR_STAR] = 178,
        [anon_sym_LT_LT] = 178,
        [anon_sym_GT_GT] = 178,
        [anon_sym_TILDE] = 178,
        [anon_sym_PLUS_AT] = 178,
        [anon_sym_DASH_AT] = 178,
        [anon_sym_LBRACK_RBRACK] = 178,
        [anon_sym_LBRACK_RBRACK_EQ] = 178,
        [sym__line_break] = 40,
    },
    [37] = {
        [sym__function_name] = 180,
        [anon_sym_PIPE] = 80,
        [anon_sym_STAR] = 80,
        [anon_sym_AMP] = 80,
        [anon_sym_LT] = 80,
        [sym_identifier] = 80,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [38] = {
        [sym__function_name] = 182,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [39] = {
        [sym__statement] = 184,
        [sym__declaration] = 88,
        [sym_method_declaration] = 90,
        [sym_class_declaration] = 90,
        [sym_module_declaration] = 90,
        [sym__call] = 92,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 88,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_undef] = 100,
        [anon_sym_alias] = 102,
        [anon_sym_def] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_class] = 108,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_module] = 112,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [40] = {
        [sym_identifier] = 186,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [41] = {
        [sym_identifier] = 188,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [42] = {
        [sym_identifier] = 190,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [43] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 142,
        [anon_sym_if] = 142,
        [anon_sym_while] = 142,
        [anon_sym_unless] = 142,
        [anon_sym_until] = 142,
        [anon_sym_RPAREN] = 142,
        [anon_sym_COLON_COLON] = 142,
        [anon_sym_LBRACK] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [44] = {
        [sym__terminator] = 192,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [45] = {
        [sym__statement] = 198,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 212,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [46] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_argument_list] = 232,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym_scope_resolution_expression] = 230,
        [sym_subscript_expression] = 230,
        [sym__variable] = 230,
        [sym__terminator] = 232,
        [aux_sym_class_declaration_repeat1] = 232,
        [anon_sym_end] = 230,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_def] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_STAR] = 232,
        [anon_sym_AMP] = 232,
        [anon_sym_class] = 230,
        [anon_sym_LT] = 232,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_module] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [sym_identifier] = 230,
        [sym_comment] = 40,
        [sym_symbol] = 230,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 232,
    },
    [47] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym_scope_resolution_expression] = 230,
        [sym_subscript_expression] = 230,
        [sym__variable] = 230,
        [anon_sym_end] = 230,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_def] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_module] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [sym_identifier] = 230,
        [sym_comment] = 40,
        [sym_symbol] = 230,
        [sym__line_break] = 40,
    },
    [48] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 236,
        [anon_sym_end] = 238,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [49] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 56,
        [anon_sym_end] = 56,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [sym_comment] = 40,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [50] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 58,
        [anon_sym_end] = 58,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 40,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [51] = {
        [anon_sym_do] = 242,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [52] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [53] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 246,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [54] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [55] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [anon_sym_RPAREN] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [56] = {
        [sym__function_name] = 250,
        [anon_sym_PIPE] = 252,
        [anon_sym_STAR] = 252,
        [anon_sym_AMP] = 252,
        [anon_sym_LT] = 252,
        [sym_identifier] = 252,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 252,
        [anon_sym_CARET] = 252,
        [anon_sym_LT_EQ_GT] = 252,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_EQ_EQ_EQ] = 252,
        [anon_sym_EQ_TILDE] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_PLUS] = 252,
        [anon_sym_DASH] = 252,
        [anon_sym_SLASH] = 252,
        [anon_sym_PERCENT] = 252,
        [anon_sym_STAR_STAR] = 252,
        [anon_sym_LT_LT] = 252,
        [anon_sym_GT_GT] = 252,
        [anon_sym_TILDE] = 252,
        [anon_sym_PLUS_AT] = 252,
        [anon_sym_DASH_AT] = 252,
        [anon_sym_LBRACK_RBRACK] = 252,
        [anon_sym_LBRACK_RBRACK_EQ] = 252,
        [sym__line_break] = 40,
    },
    [57] = {
        [sym__function_name] = 254,
        [anon_sym_PIPE] = 80,
        [anon_sym_STAR] = 80,
        [anon_sym_AMP] = 80,
        [anon_sym_LT] = 80,
        [sym_identifier] = 80,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [58] = {
        [sym__function_name] = 256,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [59] = {
        [sym__statement] = 258,
        [sym__declaration] = 88,
        [sym_method_declaration] = 90,
        [sym_class_declaration] = 90,
        [sym_module_declaration] = 90,
        [sym__call] = 92,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 88,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_undef] = 100,
        [anon_sym_alias] = 102,
        [anon_sym_def] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_class] = 108,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_module] = 112,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [60] = {
        [sym_identifier] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [61] = {
        [sym_identifier] = 262,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [62] = {
        [sym_identifier] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [63] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 142,
        [anon_sym_end] = 142,
        [anon_sym_if] = 142,
        [anon_sym_while] = 142,
        [anon_sym_unless] = 142,
        [anon_sym_until] = 142,
        [anon_sym_COLON_COLON] = 142,
        [anon_sym_LBRACK] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [64] = {
        [sym__terminator] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [65] = {
        [sym__statement] = 268,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 270,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [66] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 272,
        [anon_sym_end] = 274,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [67] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [anon_sym_end] = 248,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [68] = {
        [sym__statement] = 276,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [69] = {
        [anon_sym_end] = 278,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [70] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 40,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [71] = {
        [sym__expression] = 282,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_LPAREN] = 220,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [72] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym_scope_resolution_expression] = 230,
        [sym_subscript_expression] = 230,
        [sym__variable] = 230,
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 232,
        [ts_builtin_sym_end] = 232,
        [anon_sym_end] = 232,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_if] = 232,
        [anon_sym_while] = 232,
        [anon_sym_unless] = 232,
        [anon_sym_until] = 232,
        [anon_sym_def] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_RPAREN] = 232,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_module] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [sym_identifier] = 230,
        [sym_comment] = 40,
        [sym_symbol] = 230,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 232,
    },
    [73] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym_scope_resolution_expression] = 230,
        [sym_subscript_expression] = 230,
        [sym__variable] = 230,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_def] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_module] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [sym_identifier] = 230,
        [sym_comment] = 40,
        [sym_symbol] = 230,
        [sym__line_break] = 40,
    },
    [74] = {
        [sym__terminator] = 284,
        [aux_sym_program_repeat1] = 284,
        [anon_sym_end] = 284,
        [anon_sym_if] = 284,
        [anon_sym_while] = 284,
        [anon_sym_unless] = 284,
        [anon_sym_until] = 284,
        [sym_comment] = 40,
        [sym__line_break] = 284,
        [anon_sym_SEMI] = 284,
    },
    [75] = {
        [sym__terminator] = 286,
        [aux_sym_program_repeat1] = 286,
        [anon_sym_end] = 286,
        [anon_sym_if] = 286,
        [anon_sym_while] = 286,
        [anon_sym_unless] = 286,
        [anon_sym_until] = 286,
        [sym_comment] = 40,
        [sym__line_break] = 286,
        [anon_sym_SEMI] = 286,
    },
    [76] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 288,
        [anon_sym_end] = 290,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [77] = {
        [anon_sym_end] = 292,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [78] = {
        [sym__terminator] = 160,
        [aux_sym_program_repeat1] = 160,
        [anon_sym_end] = 160,
        [anon_sym_if] = 160,
        [anon_sym_while] = 160,
        [anon_sym_unless] = 160,
        [anon_sym_until] = 160,
        [anon_sym_COLON_COLON] = 160,
        [anon_sym_LBRACK] = 160,
        [sym_comment] = 40,
        [sym__line_break] = 160,
        [anon_sym_SEMI] = 160,
    },
    [79] = {
        [sym__terminator] = 294,
        [anon_sym_LT] = 296,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [80] = {
        [sym__statement] = 298,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 300,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [81] = {
        [sym_identifier] = 302,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [82] = {
        [sym__terminator] = 304,
        [aux_sym_class_declaration_repeat1] = 306,
        [anon_sym_COLON_COLON] = 308,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [83] = {
        [sym__statement] = 310,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 312,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [84] = {
        [sym__terminator] = 314,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [85] = {
        [sym_identifier] = 316,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [86] = {
        [sym__terminator] = 318,
        [aux_sym_class_declaration_repeat1] = 320,
        [anon_sym_COLON_COLON] = 308,
        [sym_comment] = 40,
        [sym__line_break] = 318,
        [anon_sym_SEMI] = 318,
    },
    [87] = {
        [sym__terminator] = 322,
        [sym_comment] = 40,
        [sym__line_break] = 322,
        [anon_sym_SEMI] = 322,
    },
    [88] = {
        [sym__statement] = 324,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [89] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_end] = 330,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [90] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_if] = 332,
        [anon_sym_while] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_until] = 332,
        [sym_comment] = 40,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [91] = {
        [anon_sym_end] = 334,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [92] = {
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 336,
        [anon_sym_if] = 336,
        [anon_sym_while] = 336,
        [anon_sym_unless] = 336,
        [anon_sym_until] = 336,
        [sym_comment] = 40,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [93] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [sym_comment] = 40,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [94] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 340,
        [anon_sym_end] = 326,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [95] = {
        [sym__terminator] = 342,
        [aux_sym_program_repeat1] = 342,
        [anon_sym_end] = 342,
        [anon_sym_if] = 342,
        [anon_sym_while] = 342,
        [anon_sym_unless] = 342,
        [anon_sym_until] = 342,
        [sym_comment] = 40,
        [sym__line_break] = 342,
        [anon_sym_SEMI] = 342,
    },
    [96] = {
        [anon_sym_end] = 330,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [97] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 344,
        [anon_sym_end] = 346,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [98] = {
        [sym__terminator] = 348,
        [aux_sym_program_repeat1] = 348,
        [anon_sym_end] = 348,
        [anon_sym_if] = 348,
        [anon_sym_while] = 348,
        [anon_sym_unless] = 348,
        [anon_sym_until] = 348,
        [sym_comment] = 40,
        [sym__line_break] = 348,
        [anon_sym_SEMI] = 348,
    },
    [99] = {
        [anon_sym_end] = 312,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [100] = {
        [sym__terminator] = 350,
        [aux_sym_program_repeat1] = 350,
        [anon_sym_end] = 350,
        [anon_sym_if] = 350,
        [anon_sym_while] = 350,
        [anon_sym_unless] = 350,
        [anon_sym_until] = 350,
        [sym_comment] = 40,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [101] = {
        [sym__terminator] = 162,
        [aux_sym_program_repeat1] = 352,
        [anon_sym_if] = 166,
        [anon_sym_while] = 166,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 166,
        [anon_sym_RPAREN] = 354,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [102] = {
        [sym__statement] = 356,
        [sym__declaration] = 88,
        [sym_method_declaration] = 90,
        [sym_class_declaration] = 90,
        [sym_module_declaration] = 90,
        [sym__call] = 92,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 88,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_undef] = 100,
        [anon_sym_alias] = 102,
        [anon_sym_def] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_class] = 108,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_module] = 112,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [103] = {
        [anon_sym_RPAREN] = 358,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [104] = {
        [sym__expression] = 360,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 106,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [105] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_end] = 362,
        [anon_sym_if] = 362,
        [anon_sym_while] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_until] = 362,
        [anon_sym_COLON_COLON] = 362,
        [anon_sym_LBRACK] = 362,
        [sym_comment] = 40,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [106] = {
        [sym__terminator] = 284,
        [aux_sym_program_repeat1] = 284,
        [anon_sym_if] = 284,
        [anon_sym_while] = 284,
        [anon_sym_unless] = 284,
        [anon_sym_until] = 284,
        [anon_sym_RPAREN] = 284,
        [sym_comment] = 40,
        [sym__line_break] = 284,
        [anon_sym_SEMI] = 284,
    },
    [107] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_end] = 364,
        [anon_sym_if] = 364,
        [anon_sym_while] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_until] = 364,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_LBRACK] = 364,
        [sym_comment] = 40,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [108] = {
        [sym__terminator] = 162,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_if] = 166,
        [anon_sym_while] = 166,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 166,
        [anon_sym_RPAREN] = 290,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [109] = {
        [anon_sym_RPAREN] = 292,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [110] = {
        [sym_argument_list] = 368,
        [sym__terminator] = 370,
        [anon_sym_LPAREN] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_AMP] = 374,
        [sym_identifier] = 376,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [111] = {
        [sym_argument_list] = 378,
        [sym__terminator] = 378,
        [anon_sym_LPAREN] = 378,
        [anon_sym_STAR] = 378,
        [anon_sym_AMP] = 378,
        [sym_identifier] = 378,
        [sym_comment] = 40,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [112] = {
        [sym__terminator] = 380,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [113] = {
        [sym__statement] = 382,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 384,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [114] = {
        [sym_argument_list] = 386,
        [anon_sym_RPAREN] = 380,
        [anon_sym_STAR] = 388,
        [anon_sym_AMP] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [115] = {
        [sym_identifier] = 392,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [116] = {
        [sym__terminator] = 394,
        [aux_sym_argument_list_repeat1] = 396,
        [anon_sym_COMMA] = 398,
        [sym_comment] = 40,
        [sym__line_break] = 394,
        [anon_sym_SEMI] = 394,
    },
    [117] = {
        [sym__terminator] = 400,
        [sym_comment] = 40,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [118] = {
        [anon_sym_STAR] = 402,
        [anon_sym_AMP] = 402,
        [sym_identifier] = 404,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [119] = {
        [sym_identifier] = 406,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [120] = {
        [sym__terminator] = 408,
        [aux_sym_argument_list_repeat1] = 410,
        [anon_sym_COMMA] = 398,
        [sym_comment] = 40,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [121] = {
        [sym__terminator] = 412,
        [sym_comment] = 40,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [122] = {
        [sym__terminator] = 412,
        [aux_sym_argument_list_repeat1] = 414,
        [anon_sym_COMMA] = 398,
        [sym_comment] = 40,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [123] = {
        [sym__terminator] = 416,
        [sym_comment] = 40,
        [sym__line_break] = 416,
        [anon_sym_SEMI] = 416,
    },
    [124] = {
        [sym__terminator] = 400,
        [aux_sym_argument_list_repeat1] = 418,
        [anon_sym_COMMA] = 398,
        [sym_comment] = 40,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [125] = {
        [sym__terminator] = 420,
        [sym_comment] = 40,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [126] = {
        [anon_sym_RPAREN] = 422,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [127] = {
        [sym__statement] = 424,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 426,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [128] = {
        [sym_identifier] = 428,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [129] = {
        [aux_sym_argument_list_repeat1] = 430,
        [anon_sym_RPAREN] = 394,
        [anon_sym_COMMA] = 432,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [130] = {
        [anon_sym_RPAREN] = 400,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [131] = {
        [anon_sym_STAR] = 434,
        [anon_sym_AMP] = 434,
        [sym_identifier] = 436,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [132] = {
        [sym_identifier] = 438,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [133] = {
        [aux_sym_argument_list_repeat1] = 440,
        [anon_sym_RPAREN] = 408,
        [anon_sym_COMMA] = 432,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [134] = {
        [anon_sym_RPAREN] = 412,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [135] = {
        [aux_sym_argument_list_repeat1] = 442,
        [anon_sym_RPAREN] = 412,
        [anon_sym_COMMA] = 432,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [136] = {
        [anon_sym_RPAREN] = 416,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [137] = {
        [aux_sym_argument_list_repeat1] = 444,
        [anon_sym_RPAREN] = 400,
        [anon_sym_COMMA] = 432,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [138] = {
        [anon_sym_RPAREN] = 420,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [139] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 446,
        [anon_sym_end] = 448,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [140] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [sym_comment] = 40,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [141] = {
        [anon_sym_end] = 452,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [142] = {
        [sym__terminator] = 454,
        [aux_sym_program_repeat1] = 454,
        [anon_sym_end] = 454,
        [anon_sym_if] = 454,
        [anon_sym_while] = 454,
        [anon_sym_unless] = 454,
        [anon_sym_until] = 454,
        [sym_comment] = 40,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 454,
    },
    [143] = {
        [sym__terminator] = 456,
        [aux_sym_program_repeat1] = 456,
        [anon_sym_end] = 456,
        [anon_sym_if] = 456,
        [anon_sym_while] = 456,
        [anon_sym_unless] = 456,
        [anon_sym_until] = 456,
        [sym_comment] = 40,
        [sym__line_break] = 456,
        [anon_sym_SEMI] = 456,
    },
    [144] = {
        [sym__statement] = 458,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 448,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [145] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 460,
        [anon_sym_end] = 452,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [146] = {
        [anon_sym_end] = 462,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [147] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [sym_comment] = 40,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [148] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 466,
        [anon_sym_end] = 426,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [149] = {
        [sym__terminator] = 468,
        [aux_sym_program_repeat1] = 468,
        [anon_sym_end] = 468,
        [anon_sym_if] = 468,
        [anon_sym_while] = 468,
        [anon_sym_unless] = 468,
        [anon_sym_until] = 468,
        [sym_comment] = 40,
        [sym__line_break] = 468,
        [anon_sym_SEMI] = 468,
    },
    [150] = {
        [anon_sym_end] = 448,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [151] = {
        [sym__function_name] = 282,
        [anon_sym_PIPE] = 252,
        [anon_sym_STAR] = 252,
        [anon_sym_AMP] = 252,
        [anon_sym_LT] = 252,
        [sym_identifier] = 252,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 252,
        [anon_sym_CARET] = 252,
        [anon_sym_LT_EQ_GT] = 252,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_EQ_EQ_EQ] = 252,
        [anon_sym_EQ_TILDE] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_PLUS] = 252,
        [anon_sym_DASH] = 252,
        [anon_sym_SLASH] = 252,
        [anon_sym_PERCENT] = 252,
        [anon_sym_STAR_STAR] = 252,
        [anon_sym_LT_LT] = 252,
        [anon_sym_GT_GT] = 252,
        [anon_sym_TILDE] = 252,
        [anon_sym_PLUS_AT] = 252,
        [anon_sym_DASH_AT] = 252,
        [anon_sym_LBRACK_RBRACK] = 252,
        [anon_sym_LBRACK_RBRACK_EQ] = 252,
        [sym__line_break] = 40,
    },
    [152] = {
        [sym__function_name] = 378,
        [anon_sym_PIPE] = 378,
        [anon_sym_STAR] = 378,
        [anon_sym_AMP] = 378,
        [anon_sym_LT] = 378,
        [sym_identifier] = 378,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 378,
        [anon_sym_CARET] = 378,
        [anon_sym_LT_EQ_GT] = 378,
        [anon_sym_EQ_EQ] = 378,
        [anon_sym_EQ_EQ_EQ] = 378,
        [anon_sym_EQ_TILDE] = 378,
        [anon_sym_GT] = 378,
        [anon_sym_GT_EQ] = 378,
        [anon_sym_LT_EQ] = 378,
        [anon_sym_PLUS] = 378,
        [anon_sym_DASH] = 378,
        [anon_sym_SLASH] = 378,
        [anon_sym_PERCENT] = 378,
        [anon_sym_STAR_STAR] = 378,
        [anon_sym_LT_LT] = 378,
        [anon_sym_GT_GT] = 378,
        [anon_sym_TILDE] = 378,
        [anon_sym_PLUS_AT] = 378,
        [anon_sym_DASH_AT] = 378,
        [anon_sym_LBRACK_RBRACK] = 378,
        [anon_sym_LBRACK_RBRACK_EQ] = 378,
        [sym__line_break] = 40,
    },
    [153] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [sym_comment] = 40,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [154] = {
        [sym__terminator] = 470,
        [aux_sym_program_repeat1] = 470,
        [anon_sym_end] = 470,
        [anon_sym_if] = 470,
        [anon_sym_while] = 470,
        [anon_sym_unless] = 470,
        [anon_sym_until] = 470,
        [sym_comment] = 40,
        [sym__line_break] = 470,
        [anon_sym_SEMI] = 470,
    },
    [155] = {
        [sym_identifier] = 472,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [156] = {
        [sym__argument] = 474,
        [sym__primary] = 476,
        [sym_scope_resolution_expression] = 478,
        [sym_subscript_expression] = 478,
        [sym__variable] = 478,
        [anon_sym_LPAREN] = 480,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_RBRACK] = 484,
        [anon_sym_nil] = 486,
        [anon_sym_self] = 486,
        [sym_identifier] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [157] = {
        [aux_sym__call_arguments_repeat1] = 488,
        [anon_sym_COMMA] = 490,
        [anon_sym_RBRACK] = 492,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [158] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_COMMA] = 66,
        [anon_sym_COLON_COLON] = 494,
        [anon_sym_LBRACK] = 496,
        [anon_sym_RBRACK] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [159] = {
        [aux_sym__call_arguments_repeat1] = 72,
        [anon_sym_COMMA] = 72,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 72,
        [anon_sym_RBRACK] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [160] = {
        [sym__statement] = 498,
        [sym__declaration] = 88,
        [sym_method_declaration] = 90,
        [sym_class_declaration] = 90,
        [sym_module_declaration] = 90,
        [sym__call] = 92,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 88,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_undef] = 100,
        [anon_sym_alias] = 102,
        [anon_sym_def] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_class] = 108,
        [anon_sym_COLON_COLON] = 110,
        [anon_sym_module] = 112,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [161] = {
        [sym_identifier] = 500,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [162] = {
        [sym__terminator] = 502,
        [aux_sym_program_repeat1] = 502,
        [anon_sym_end] = 502,
        [anon_sym_if] = 502,
        [anon_sym_while] = 502,
        [anon_sym_unless] = 502,
        [anon_sym_until] = 502,
        [anon_sym_COLON_COLON] = 502,
        [anon_sym_LBRACK] = 502,
        [sym_comment] = 40,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [163] = {
        [aux_sym__call_arguments_repeat1] = 142,
        [anon_sym_COMMA] = 142,
        [anon_sym_COLON_COLON] = 142,
        [anon_sym_LBRACK] = 142,
        [anon_sym_RBRACK] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [164] = {
        [aux_sym__call_arguments_repeat1] = 160,
        [anon_sym_COMMA] = 160,
        [anon_sym_COLON_COLON] = 160,
        [anon_sym_LBRACK] = 160,
        [anon_sym_RBRACK] = 160,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [165] = {
        [sym__terminator] = 162,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_if] = 166,
        [anon_sym_while] = 166,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 166,
        [anon_sym_RPAREN] = 506,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [166] = {
        [anon_sym_RPAREN] = 508,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [167] = {
        [aux_sym__call_arguments_repeat1] = 362,
        [anon_sym_COMMA] = 362,
        [anon_sym_COLON_COLON] = 362,
        [anon_sym_LBRACK] = 362,
        [anon_sym_RBRACK] = 362,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [168] = {
        [aux_sym__call_arguments_repeat1] = 364,
        [anon_sym_COMMA] = 364,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_LBRACK] = 364,
        [anon_sym_RBRACK] = 364,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [169] = {
        [sym_identifier] = 510,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [170] = {
        [sym__argument] = 512,
        [sym__primary] = 476,
        [sym_scope_resolution_expression] = 478,
        [sym_subscript_expression] = 478,
        [sym__variable] = 478,
        [anon_sym_LPAREN] = 480,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_RBRACK] = 514,
        [anon_sym_nil] = 486,
        [anon_sym_self] = 486,
        [sym_identifier] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [171] = {
        [aux_sym__call_arguments_repeat1] = 516,
        [anon_sym_COMMA] = 490,
        [anon_sym_RBRACK] = 518,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [172] = {
        [aux_sym__call_arguments_repeat1] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_COLON_COLON] = 502,
        [anon_sym_LBRACK] = 502,
        [anon_sym_RBRACK] = 502,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [173] = {
        [anon_sym_RBRACK] = 520,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [174] = {
        [sym__argument] = 522,
        [sym__primary] = 476,
        [sym_scope_resolution_expression] = 478,
        [sym_subscript_expression] = 478,
        [sym__variable] = 478,
        [anon_sym_LPAREN] = 480,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_nil] = 486,
        [anon_sym_self] = 486,
        [sym_identifier] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [175] = {
        [aux_sym__call_arguments_repeat1] = 524,
        [anon_sym_COMMA] = 524,
        [anon_sym_COLON_COLON] = 524,
        [anon_sym_LBRACK] = 524,
        [anon_sym_RBRACK] = 524,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [176] = {
        [aux_sym__call_arguments_repeat1] = 526,
        [anon_sym_COMMA] = 490,
        [anon_sym_RBRACK] = 528,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [177] = {
        [anon_sym_RBRACK] = 530,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [178] = {
        [aux_sym__call_arguments_repeat1] = 532,
        [anon_sym_COMMA] = 532,
        [anon_sym_COLON_COLON] = 532,
        [anon_sym_LBRACK] = 532,
        [anon_sym_RBRACK] = 532,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [179] = {
        [aux_sym__call_arguments_repeat1] = 534,
        [anon_sym_COMMA] = 534,
        [anon_sym_COLON_COLON] = 534,
        [anon_sym_LBRACK] = 534,
        [anon_sym_RBRACK] = 534,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [180] = {
        [anon_sym_RBRACK] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [181] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_end] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [anon_sym_COLON_COLON] = 524,
        [anon_sym_LBRACK] = 524,
        [sym_comment] = 40,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [182] = {
        [sym__terminator] = 532,
        [aux_sym_program_repeat1] = 532,
        [anon_sym_end] = 532,
        [anon_sym_if] = 532,
        [anon_sym_while] = 532,
        [anon_sym_unless] = 532,
        [anon_sym_until] = 532,
        [anon_sym_COLON_COLON] = 532,
        [anon_sym_LBRACK] = 532,
        [sym_comment] = 40,
        [sym__line_break] = 532,
        [anon_sym_SEMI] = 532,
    },
    [183] = {
        [sym__terminator] = 534,
        [aux_sym_program_repeat1] = 534,
        [anon_sym_end] = 534,
        [anon_sym_if] = 534,
        [anon_sym_while] = 534,
        [anon_sym_unless] = 534,
        [anon_sym_until] = 534,
        [anon_sym_COLON_COLON] = 534,
        [anon_sym_LBRACK] = 534,
        [sym_comment] = 40,
        [sym__line_break] = 534,
        [anon_sym_SEMI] = 534,
    },
    [184] = {
        [sym__statement] = 538,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_PIPE] = 540,
        [anon_sym_end] = 282,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [185] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 542,
        [anon_sym_end] = 544,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [186] = {
        [sym__statement] = 546,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 544,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [187] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 548,
        [anon_sym_end] = 550,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [188] = {
        [sym__terminator] = 552,
        [aux_sym_program_repeat1] = 552,
        [anon_sym_end] = 552,
        [anon_sym_if] = 552,
        [anon_sym_while] = 552,
        [anon_sym_unless] = 552,
        [anon_sym_until] = 552,
        [sym_comment] = 40,
        [sym__line_break] = 552,
        [anon_sym_SEMI] = 552,
    },
    [189] = {
        [anon_sym_end] = 554,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [190] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [sym_comment] = 40,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [191] = {
        [sym__terminator] = 558,
        [aux_sym_program_repeat1] = 558,
        [anon_sym_end] = 558,
        [anon_sym_if] = 558,
        [anon_sym_while] = 558,
        [anon_sym_unless] = 558,
        [anon_sym_until] = 558,
        [sym_comment] = 40,
        [sym__line_break] = 558,
        [anon_sym_SEMI] = 558,
    },
    [192] = {
        [anon_sym_end] = 550,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [193] = {
        [anon_sym_end] = 560,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [194] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [anon_sym_RPAREN] = 280,
        [sym_comment] = 40,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [195] = {
        [sym__terminator] = 286,
        [aux_sym_program_repeat1] = 286,
        [anon_sym_if] = 286,
        [anon_sym_while] = 286,
        [anon_sym_unless] = 286,
        [anon_sym_until] = 286,
        [anon_sym_RPAREN] = 286,
        [sym_comment] = 40,
        [sym__line_break] = 286,
        [anon_sym_SEMI] = 286,
    },
    [196] = {
        [sym__terminator] = 160,
        [aux_sym_program_repeat1] = 160,
        [anon_sym_if] = 160,
        [anon_sym_while] = 160,
        [anon_sym_unless] = 160,
        [anon_sym_until] = 160,
        [anon_sym_RPAREN] = 160,
        [anon_sym_COLON_COLON] = 160,
        [anon_sym_LBRACK] = 160,
        [sym_comment] = 40,
        [sym__line_break] = 160,
        [anon_sym_SEMI] = 160,
    },
    [197] = {
        [sym__terminator] = 562,
        [anon_sym_LT] = 564,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [198] = {
        [sym__statement] = 566,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 568,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [199] = {
        [sym_identifier] = 570,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [200] = {
        [sym__terminator] = 572,
        [aux_sym_class_declaration_repeat1] = 574,
        [anon_sym_COLON_COLON] = 308,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [201] = {
        [sym__statement] = 576,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 578,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [202] = {
        [sym__terminator] = 580,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [203] = {
        [sym__statement] = 582,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 584,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [204] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 586,
        [anon_sym_end] = 588,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [205] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_if] = 332,
        [anon_sym_while] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_until] = 332,
        [anon_sym_RPAREN] = 332,
        [sym_comment] = 40,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [206] = {
        [anon_sym_end] = 590,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [207] = {
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_if] = 336,
        [anon_sym_while] = 336,
        [anon_sym_unless] = 336,
        [anon_sym_until] = 336,
        [anon_sym_RPAREN] = 336,
        [sym_comment] = 40,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [208] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [anon_sym_RPAREN] = 338,
        [sym_comment] = 40,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [209] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 592,
        [anon_sym_end] = 584,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [210] = {
        [sym__terminator] = 342,
        [aux_sym_program_repeat1] = 342,
        [anon_sym_if] = 342,
        [anon_sym_while] = 342,
        [anon_sym_unless] = 342,
        [anon_sym_until] = 342,
        [anon_sym_RPAREN] = 342,
        [sym_comment] = 40,
        [sym__line_break] = 342,
        [anon_sym_SEMI] = 342,
    },
    [211] = {
        [anon_sym_end] = 588,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [212] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_end] = 596,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [213] = {
        [sym__terminator] = 348,
        [aux_sym_program_repeat1] = 348,
        [anon_sym_if] = 348,
        [anon_sym_while] = 348,
        [anon_sym_unless] = 348,
        [anon_sym_until] = 348,
        [anon_sym_RPAREN] = 348,
        [sym_comment] = 40,
        [sym__line_break] = 348,
        [anon_sym_SEMI] = 348,
    },
    [214] = {
        [anon_sym_end] = 578,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [215] = {
        [sym__terminator] = 350,
        [aux_sym_program_repeat1] = 350,
        [anon_sym_if] = 350,
        [anon_sym_while] = 350,
        [anon_sym_unless] = 350,
        [anon_sym_until] = 350,
        [anon_sym_RPAREN] = 350,
        [sym_comment] = 40,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [216] = {
        [sym__terminator] = 162,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_if] = 166,
        [anon_sym_while] = 166,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 166,
        [anon_sym_RPAREN] = 600,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [217] = {
        [anon_sym_RPAREN] = 602,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [218] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_if] = 362,
        [anon_sym_while] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_until] = 362,
        [anon_sym_RPAREN] = 362,
        [anon_sym_COLON_COLON] = 362,
        [anon_sym_LBRACK] = 362,
        [sym_comment] = 40,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [219] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_if] = 364,
        [anon_sym_while] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_until] = 364,
        [anon_sym_RPAREN] = 364,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_LBRACK] = 364,
        [sym_comment] = 40,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [220] = {
        [sym_argument_list] = 604,
        [sym__terminator] = 606,
        [anon_sym_LPAREN] = 608,
        [anon_sym_STAR] = 374,
        [anon_sym_AMP] = 374,
        [sym_identifier] = 376,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [221] = {
        [sym__terminator] = 610,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [222] = {
        [sym__statement] = 612,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 614,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [223] = {
        [sym_argument_list] = 616,
        [anon_sym_RPAREN] = 610,
        [anon_sym_STAR] = 388,
        [anon_sym_AMP] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [224] = {
        [anon_sym_RPAREN] = 618,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [225] = {
        [sym__statement] = 620,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 622,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [226] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 626,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [227] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_RPAREN] = 450,
        [sym_comment] = 40,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [228] = {
        [anon_sym_end] = 628,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [229] = {
        [sym__terminator] = 454,
        [aux_sym_program_repeat1] = 454,
        [anon_sym_if] = 454,
        [anon_sym_while] = 454,
        [anon_sym_unless] = 454,
        [anon_sym_until] = 454,
        [anon_sym_RPAREN] = 454,
        [sym_comment] = 40,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 454,
    },
    [230] = {
        [sym__terminator] = 456,
        [aux_sym_program_repeat1] = 456,
        [anon_sym_if] = 456,
        [anon_sym_while] = 456,
        [anon_sym_unless] = 456,
        [anon_sym_until] = 456,
        [anon_sym_RPAREN] = 456,
        [sym_comment] = 40,
        [sym__line_break] = 456,
        [anon_sym_SEMI] = 456,
    },
    [231] = {
        [sym__statement] = 630,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 626,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [232] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 628,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [233] = {
        [anon_sym_end] = 634,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [234] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_RPAREN] = 464,
        [sym_comment] = 40,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [235] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 622,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [236] = {
        [sym__terminator] = 468,
        [aux_sym_program_repeat1] = 468,
        [anon_sym_if] = 468,
        [anon_sym_while] = 468,
        [anon_sym_unless] = 468,
        [anon_sym_until] = 468,
        [anon_sym_RPAREN] = 468,
        [sym_comment] = 40,
        [sym__line_break] = 468,
        [anon_sym_SEMI] = 468,
    },
    [237] = {
        [anon_sym_end] = 626,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [238] = {
        [sym__function_name] = 360,
        [anon_sym_PIPE] = 178,
        [anon_sym_STAR] = 178,
        [anon_sym_AMP] = 178,
        [anon_sym_LT] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 178,
        [anon_sym_CARET] = 178,
        [anon_sym_LT_EQ_GT] = 178,
        [anon_sym_EQ_EQ] = 178,
        [anon_sym_EQ_EQ_EQ] = 178,
        [anon_sym_EQ_TILDE] = 178,
        [anon_sym_GT] = 178,
        [anon_sym_GT_EQ] = 178,
        [anon_sym_LT_EQ] = 178,
        [anon_sym_PLUS] = 178,
        [anon_sym_DASH] = 178,
        [anon_sym_SLASH] = 178,
        [anon_sym_PERCENT] = 178,
        [anon_sym_STAR_STAR] = 178,
        [anon_sym_LT_LT] = 178,
        [anon_sym_GT_GT] = 178,
        [anon_sym_TILDE] = 178,
        [anon_sym_PLUS_AT] = 178,
        [anon_sym_DASH_AT] = 178,
        [anon_sym_LBRACK_RBRACK] = 178,
        [anon_sym_LBRACK_RBRACK_EQ] = 178,
        [sym__line_break] = 40,
    },
    [239] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 40,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [240] = {
        [sym__terminator] = 470,
        [aux_sym_program_repeat1] = 470,
        [anon_sym_if] = 470,
        [anon_sym_while] = 470,
        [anon_sym_unless] = 470,
        [anon_sym_until] = 470,
        [anon_sym_RPAREN] = 470,
        [sym_comment] = 40,
        [sym__line_break] = 470,
        [anon_sym_SEMI] = 470,
    },
    [241] = {
        [sym_identifier] = 638,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [242] = {
        [sym__argument] = 640,
        [sym__primary] = 476,
        [sym_scope_resolution_expression] = 478,
        [sym_subscript_expression] = 478,
        [sym__variable] = 478,
        [anon_sym_LPAREN] = 480,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_RBRACK] = 642,
        [anon_sym_nil] = 486,
        [anon_sym_self] = 486,
        [sym_identifier] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [243] = {
        [aux_sym__call_arguments_repeat1] = 644,
        [anon_sym_COMMA] = 490,
        [anon_sym_RBRACK] = 646,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [244] = {
        [sym__terminator] = 502,
        [aux_sym_program_repeat1] = 502,
        [anon_sym_if] = 502,
        [anon_sym_while] = 502,
        [anon_sym_unless] = 502,
        [anon_sym_until] = 502,
        [anon_sym_RPAREN] = 502,
        [anon_sym_COLON_COLON] = 502,
        [anon_sym_LBRACK] = 502,
        [sym_comment] = 40,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [245] = {
        [anon_sym_RBRACK] = 648,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [246] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [anon_sym_RPAREN] = 524,
        [anon_sym_COLON_COLON] = 524,
        [anon_sym_LBRACK] = 524,
        [sym_comment] = 40,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [247] = {
        [sym__terminator] = 532,
        [aux_sym_program_repeat1] = 532,
        [anon_sym_if] = 532,
        [anon_sym_while] = 532,
        [anon_sym_unless] = 532,
        [anon_sym_until] = 532,
        [anon_sym_RPAREN] = 532,
        [anon_sym_COLON_COLON] = 532,
        [anon_sym_LBRACK] = 532,
        [sym_comment] = 40,
        [sym__line_break] = 532,
        [anon_sym_SEMI] = 532,
    },
    [248] = {
        [sym__terminator] = 534,
        [aux_sym_program_repeat1] = 534,
        [anon_sym_if] = 534,
        [anon_sym_while] = 534,
        [anon_sym_unless] = 534,
        [anon_sym_until] = 534,
        [anon_sym_RPAREN] = 534,
        [anon_sym_COLON_COLON] = 534,
        [anon_sym_LBRACK] = 534,
        [sym_comment] = 40,
        [sym__line_break] = 534,
        [anon_sym_SEMI] = 534,
    },
    [249] = {
        [sym__statement] = 650,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_PIPE] = 652,
        [anon_sym_end] = 360,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [250] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_end] = 656,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [251] = {
        [sym__statement] = 658,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 656,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [252] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_end] = 662,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [253] = {
        [sym__terminator] = 552,
        [aux_sym_program_repeat1] = 552,
        [anon_sym_if] = 552,
        [anon_sym_while] = 552,
        [anon_sym_unless] = 552,
        [anon_sym_until] = 552,
        [anon_sym_RPAREN] = 552,
        [sym_comment] = 40,
        [sym__line_break] = 552,
        [anon_sym_SEMI] = 552,
    },
    [254] = {
        [anon_sym_end] = 664,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [255] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [anon_sym_RPAREN] = 556,
        [sym_comment] = 40,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [256] = {
        [sym__terminator] = 558,
        [aux_sym_program_repeat1] = 558,
        [anon_sym_if] = 558,
        [anon_sym_while] = 558,
        [anon_sym_unless] = 558,
        [anon_sym_until] = 558,
        [anon_sym_RPAREN] = 558,
        [sym_comment] = 40,
        [sym__line_break] = 558,
        [anon_sym_SEMI] = 558,
    },
    [257] = {
        [anon_sym_end] = 662,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [258] = {
        [anon_sym_RPAREN] = 666,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [259] = {
        [aux_sym__call_arguments_repeat1] = 362,
        [anon_sym_do] = 362,
        [anon_sym_COMMA] = 362,
        [anon_sym_COLON_COLON] = 362,
        [anon_sym_LBRACK] = 362,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [260] = {
        [aux_sym__call_arguments_repeat1] = 364,
        [anon_sym_do] = 364,
        [anon_sym_COMMA] = 364,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_LBRACK] = 364,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [261] = {
        [sym_identifier] = 668,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [262] = {
        [sym__argument] = 670,
        [sym__primary] = 476,
        [sym_scope_resolution_expression] = 478,
        [sym_subscript_expression] = 478,
        [sym__variable] = 478,
        [anon_sym_LPAREN] = 480,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_RBRACK] = 672,
        [anon_sym_nil] = 486,
        [anon_sym_self] = 486,
        [sym_identifier] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [263] = {
        [aux_sym__call_arguments_repeat1] = 674,
        [anon_sym_COMMA] = 490,
        [anon_sym_RBRACK] = 676,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [264] = {
        [aux_sym__call_arguments_repeat1] = 502,
        [anon_sym_do] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_COLON_COLON] = 502,
        [anon_sym_LBRACK] = 502,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [265] = {
        [anon_sym_RBRACK] = 678,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [266] = {
        [aux_sym__call_arguments_repeat1] = 524,
        [anon_sym_do] = 524,
        [anon_sym_COMMA] = 524,
        [anon_sym_COLON_COLON] = 524,
        [anon_sym_LBRACK] = 524,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [267] = {
        [aux_sym__call_arguments_repeat1] = 532,
        [anon_sym_do] = 532,
        [anon_sym_COMMA] = 532,
        [anon_sym_COLON_COLON] = 532,
        [anon_sym_LBRACK] = 532,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [268] = {
        [aux_sym__call_arguments_repeat1] = 534,
        [anon_sym_do] = 534,
        [anon_sym_COMMA] = 534,
        [anon_sym_COLON_COLON] = 534,
        [anon_sym_LBRACK] = 534,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [269] = {
        [anon_sym_do] = 680,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [270] = {
        [sym__argument] = 682,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_nil] = 140,
        [anon_sym_self] = 140,
        [sym_identifier] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [271] = {
        [aux_sym__call_arguments_repeat1] = 684,
        [anon_sym_do] = 528,
        [anon_sym_COMMA] = 150,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [272] = {
        [anon_sym_do] = 530,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [273] = {
        [sym__terminator] = 686,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [274] = {
        [sym__statement] = 688,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 690,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [275] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_end] = 694,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [276] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [ts_builtin_sym_end] = 248,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [277] = {
        [anon_sym_end] = 696,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [278] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [ts_builtin_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 40,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [279] = {
        [sym__terminator] = 286,
        [aux_sym_program_repeat1] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_if] = 286,
        [anon_sym_while] = 286,
        [anon_sym_unless] = 286,
        [anon_sym_until] = 286,
        [sym_comment] = 40,
        [sym__line_break] = 286,
        [anon_sym_SEMI] = 286,
    },
    [280] = {
        [sym__terminator] = 160,
        [aux_sym_program_repeat1] = 160,
        [ts_builtin_sym_end] = 160,
        [anon_sym_if] = 160,
        [anon_sym_while] = 160,
        [anon_sym_unless] = 160,
        [anon_sym_until] = 160,
        [anon_sym_COLON_COLON] = 160,
        [anon_sym_LBRACK] = 160,
        [sym_comment] = 40,
        [sym__line_break] = 160,
        [anon_sym_SEMI] = 160,
    },
    [281] = {
        [sym__terminator] = 698,
        [anon_sym_LT] = 700,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [282] = {
        [sym__statement] = 702,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 704,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [283] = {
        [sym_identifier] = 706,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [284] = {
        [sym__terminator] = 708,
        [aux_sym_class_declaration_repeat1] = 710,
        [anon_sym_COLON_COLON] = 308,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [285] = {
        [sym__statement] = 712,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 714,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [286] = {
        [sym__terminator] = 716,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [287] = {
        [sym__statement] = 718,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 720,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [288] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 722,
        [anon_sym_end] = 724,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [289] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [ts_builtin_sym_end] = 332,
        [anon_sym_if] = 332,
        [anon_sym_while] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_until] = 332,
        [sym_comment] = 40,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [290] = {
        [anon_sym_end] = 726,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [291] = {
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [ts_builtin_sym_end] = 336,
        [anon_sym_if] = 336,
        [anon_sym_while] = 336,
        [anon_sym_unless] = 336,
        [anon_sym_until] = 336,
        [sym_comment] = 40,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [292] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [ts_builtin_sym_end] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [sym_comment] = 40,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [293] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 728,
        [anon_sym_end] = 720,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [294] = {
        [sym__terminator] = 342,
        [aux_sym_program_repeat1] = 342,
        [ts_builtin_sym_end] = 342,
        [anon_sym_if] = 342,
        [anon_sym_while] = 342,
        [anon_sym_unless] = 342,
        [anon_sym_until] = 342,
        [sym_comment] = 40,
        [sym__line_break] = 342,
        [anon_sym_SEMI] = 342,
    },
    [295] = {
        [anon_sym_end] = 724,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [296] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 730,
        [anon_sym_end] = 732,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [297] = {
        [sym__terminator] = 348,
        [aux_sym_program_repeat1] = 348,
        [ts_builtin_sym_end] = 348,
        [anon_sym_if] = 348,
        [anon_sym_while] = 348,
        [anon_sym_unless] = 348,
        [anon_sym_until] = 348,
        [sym_comment] = 40,
        [sym__line_break] = 348,
        [anon_sym_SEMI] = 348,
    },
    [298] = {
        [anon_sym_end] = 714,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [299] = {
        [sym__terminator] = 350,
        [aux_sym_program_repeat1] = 350,
        [ts_builtin_sym_end] = 350,
        [anon_sym_if] = 350,
        [anon_sym_while] = 350,
        [anon_sym_unless] = 350,
        [anon_sym_until] = 350,
        [sym_comment] = 40,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [300] = {
        [sym__terminator] = 162,
        [aux_sym_program_repeat1] = 734,
        [anon_sym_if] = 166,
        [anon_sym_while] = 166,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 166,
        [anon_sym_RPAREN] = 736,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [301] = {
        [anon_sym_RPAREN] = 738,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [302] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [ts_builtin_sym_end] = 362,
        [anon_sym_if] = 362,
        [anon_sym_while] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_until] = 362,
        [anon_sym_COLON_COLON] = 362,
        [anon_sym_LBRACK] = 362,
        [sym_comment] = 40,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [303] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [ts_builtin_sym_end] = 364,
        [anon_sym_if] = 364,
        [anon_sym_while] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_until] = 364,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_LBRACK] = 364,
        [sym_comment] = 40,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [304] = {
        [sym_argument_list] = 740,
        [sym__terminator] = 742,
        [anon_sym_LPAREN] = 744,
        [anon_sym_STAR] = 374,
        [anon_sym_AMP] = 374,
        [sym_identifier] = 376,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [305] = {
        [sym__terminator] = 746,
        [sym_comment] = 40,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 196,
    },
    [306] = {
        [sym__statement] = 748,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 750,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [307] = {
        [sym_argument_list] = 752,
        [anon_sym_RPAREN] = 746,
        [anon_sym_STAR] = 388,
        [anon_sym_AMP] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [308] = {
        [anon_sym_RPAREN] = 754,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [309] = {
        [sym__statement] = 756,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 758,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [310] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 760,
        [anon_sym_end] = 762,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [311] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [ts_builtin_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [sym_comment] = 40,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [312] = {
        [anon_sym_end] = 764,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [313] = {
        [sym__terminator] = 454,
        [aux_sym_program_repeat1] = 454,
        [ts_builtin_sym_end] = 454,
        [anon_sym_if] = 454,
        [anon_sym_while] = 454,
        [anon_sym_unless] = 454,
        [anon_sym_until] = 454,
        [sym_comment] = 40,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 454,
    },
    [314] = {
        [sym__terminator] = 456,
        [aux_sym_program_repeat1] = 456,
        [ts_builtin_sym_end] = 456,
        [anon_sym_if] = 456,
        [anon_sym_while] = 456,
        [anon_sym_unless] = 456,
        [anon_sym_until] = 456,
        [sym_comment] = 40,
        [sym__line_break] = 456,
        [anon_sym_SEMI] = 456,
    },
    [315] = {
        [sym__statement] = 766,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 762,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [316] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 768,
        [anon_sym_end] = 764,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [317] = {
        [anon_sym_end] = 770,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [318] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [ts_builtin_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [sym_comment] = 40,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [319] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 772,
        [anon_sym_end] = 758,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [320] = {
        [sym__terminator] = 468,
        [aux_sym_program_repeat1] = 468,
        [ts_builtin_sym_end] = 468,
        [anon_sym_if] = 468,
        [anon_sym_while] = 468,
        [anon_sym_unless] = 468,
        [anon_sym_until] = 468,
        [sym_comment] = 40,
        [sym__line_break] = 468,
        [anon_sym_SEMI] = 468,
    },
    [321] = {
        [anon_sym_end] = 762,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [322] = {
        [sym__function_name] = 774,
        [anon_sym_PIPE] = 76,
        [anon_sym_STAR] = 76,
        [anon_sym_AMP] = 76,
        [anon_sym_LT] = 76,
        [sym_identifier] = 76,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 76,
        [anon_sym_CARET] = 76,
        [anon_sym_LT_EQ_GT] = 76,
        [anon_sym_EQ_EQ] = 76,
        [anon_sym_EQ_EQ_EQ] = 76,
        [anon_sym_EQ_TILDE] = 76,
        [anon_sym_GT] = 76,
        [anon_sym_GT_EQ] = 76,
        [anon_sym_LT_EQ] = 76,
        [anon_sym_PLUS] = 76,
        [anon_sym_DASH] = 76,
        [anon_sym_SLASH] = 76,
        [anon_sym_PERCENT] = 76,
        [anon_sym_STAR_STAR] = 76,
        [anon_sym_LT_LT] = 76,
        [anon_sym_GT_GT] = 76,
        [anon_sym_TILDE] = 76,
        [anon_sym_PLUS_AT] = 76,
        [anon_sym_DASH_AT] = 76,
        [anon_sym_LBRACK_RBRACK] = 76,
        [anon_sym_LBRACK_RBRACK_EQ] = 76,
        [sym__line_break] = 40,
    },
    [323] = {
        [sym__terminator] = 284,
        [aux_sym_program_repeat1] = 284,
        [ts_builtin_sym_end] = 284,
        [anon_sym_if] = 284,
        [anon_sym_while] = 284,
        [anon_sym_unless] = 284,
        [anon_sym_until] = 284,
        [sym_comment] = 40,
        [sym__line_break] = 284,
        [anon_sym_SEMI] = 284,
    },
    [324] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [ts_builtin_sym_end] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [sym_comment] = 40,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [325] = {
        [sym__terminator] = 470,
        [aux_sym_program_repeat1] = 470,
        [ts_builtin_sym_end] = 470,
        [anon_sym_if] = 470,
        [anon_sym_while] = 470,
        [anon_sym_unless] = 470,
        [anon_sym_until] = 470,
        [sym_comment] = 40,
        [sym__line_break] = 470,
        [anon_sym_SEMI] = 470,
    },
    [326] = {
        [sym_identifier] = 776,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [327] = {
        [sym__argument] = 778,
        [sym__primary] = 476,
        [sym_scope_resolution_expression] = 478,
        [sym_subscript_expression] = 478,
        [sym__variable] = 478,
        [anon_sym_LPAREN] = 480,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_RBRACK] = 780,
        [anon_sym_nil] = 486,
        [anon_sym_self] = 486,
        [sym_identifier] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [328] = {
        [aux_sym__call_arguments_repeat1] = 782,
        [anon_sym_COMMA] = 490,
        [anon_sym_RBRACK] = 784,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [329] = {
        [sym__terminator] = 502,
        [aux_sym_program_repeat1] = 502,
        [ts_builtin_sym_end] = 502,
        [anon_sym_if] = 502,
        [anon_sym_while] = 502,
        [anon_sym_unless] = 502,
        [anon_sym_until] = 502,
        [anon_sym_COLON_COLON] = 502,
        [anon_sym_LBRACK] = 502,
        [sym_comment] = 40,
        [sym__line_break] = 502,
        [anon_sym_SEMI] = 502,
    },
    [330] = {
        [anon_sym_RBRACK] = 786,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [331] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [ts_builtin_sym_end] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [anon_sym_COLON_COLON] = 524,
        [anon_sym_LBRACK] = 524,
        [sym_comment] = 40,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [332] = {
        [sym__terminator] = 532,
        [aux_sym_program_repeat1] = 532,
        [ts_builtin_sym_end] = 532,
        [anon_sym_if] = 532,
        [anon_sym_while] = 532,
        [anon_sym_unless] = 532,
        [anon_sym_until] = 532,
        [anon_sym_COLON_COLON] = 532,
        [anon_sym_LBRACK] = 532,
        [sym_comment] = 40,
        [sym__line_break] = 532,
        [anon_sym_SEMI] = 532,
    },
    [333] = {
        [sym__terminator] = 534,
        [aux_sym_program_repeat1] = 534,
        [ts_builtin_sym_end] = 534,
        [anon_sym_if] = 534,
        [anon_sym_while] = 534,
        [anon_sym_unless] = 534,
        [anon_sym_until] = 534,
        [anon_sym_COLON_COLON] = 534,
        [anon_sym_LBRACK] = 534,
        [sym_comment] = 40,
        [sym__line_break] = 534,
        [anon_sym_SEMI] = 534,
    },
    [334] = {
        [sym__statement] = 788,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_PIPE] = 790,
        [anon_sym_end] = 774,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [335] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 792,
        [anon_sym_end] = 794,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [336] = {
        [sym__statement] = 796,
        [sym__declaration] = 200,
        [sym_method_declaration] = 202,
        [sym_class_declaration] = 202,
        [sym_module_declaration] = 202,
        [sym__call] = 204,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 200,
        [sym__argument] = 206,
        [sym__primary] = 208,
        [sym_scope_resolution_expression] = 210,
        [sym_subscript_expression] = 210,
        [sym__variable] = 210,
        [anon_sym_end] = 794,
        [anon_sym_undef] = 214,
        [anon_sym_alias] = 216,
        [anon_sym_def] = 218,
        [anon_sym_LPAREN] = 220,
        [anon_sym_class] = 222,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 226,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 40,
        [sym_symbol] = 206,
        [sym__line_break] = 40,
    },
    [337] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 798,
        [anon_sym_end] = 800,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [338] = {
        [sym__terminator] = 552,
        [aux_sym_program_repeat1] = 552,
        [ts_builtin_sym_end] = 552,
        [anon_sym_if] = 552,
        [anon_sym_while] = 552,
        [anon_sym_unless] = 552,
        [anon_sym_until] = 552,
        [sym_comment] = 40,
        [sym__line_break] = 552,
        [anon_sym_SEMI] = 552,
    },
    [339] = {
        [anon_sym_end] = 802,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [340] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [ts_builtin_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [sym_comment] = 40,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [341] = {
        [sym__terminator] = 558,
        [aux_sym_program_repeat1] = 558,
        [ts_builtin_sym_end] = 558,
        [anon_sym_if] = 558,
        [anon_sym_while] = 558,
        [anon_sym_unless] = 558,
        [anon_sym_until] = 558,
        [sym_comment] = 40,
        [sym__line_break] = 558,
        [anon_sym_SEMI] = 558,
    },
    [342] = {
        [anon_sym_end] = 800,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [343] = {
        [sym__statement] = 804,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
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
        [anon_sym_def] = 26,
        [anon_sym_LPAREN] = 28,
        [anon_sym_class] = 30,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_module] = 34,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 38,
        [anon_sym_self] = 38,
        [sym_identifier] = 38,
        [sym_comment] = 40,
        [sym_symbol] = 14,
        [sym__line_break] = 40,
    },
    [344] = {
        [ts_builtin_sym_end] = 806,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [345] = {
        [sym__expression] = 774,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 28,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_nil] = 38,
        [anon_sym_self] = 38,
        [sym_identifier] = 38,
        [sym_comment] = 40,
        [sym_symbol] = 14,
        [sym__line_break] = 40,
    },
    [346] = {
        [sym__terminator] = 44,
        [aux_sym_program_repeat1] = 808,
        [ts_builtin_sym_end] = 290,
        [anon_sym_if] = 50,
        [anon_sym_while] = 50,
        [anon_sym_unless] = 50,
        [anon_sym_until] = 50,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [347] = {
        [ts_builtin_sym_end] = 292,
        [sym_comment] = 40,
        [sym__line_break] = 40,
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
    [40] = {.count = 1}, SHIFT_EXTRA(),
    [42] = {.count = 1}, ACCEPT_INPUT(),
    [44] = {.count = 1}, SHIFT(343, 0),
    [46] = {.count = 1}, SHIFT(344, 0),
    [48] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [50] = {.count = 1}, SHIFT(345, 0),
    [52] = {.count = 1}, SHIFT(72, 0),
    [54] = {.count = 1}, SHIFT(73, 0),
    [56] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [58] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [60] = {.count = 1}, SHIFT(334, 0),
    [62] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [68] = {.count = 1}, SHIFT(326, 0),
    [70] = {.count = 1}, SHIFT(327, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, SHIFT(325, 0),
    [76] = {.count = 1}, SHIFT(324, 0),
    [78] = {.count = 1}, SHIFT(322, 0),
    [80] = {.count = 1}, SHIFT(152, 0),
    [82] = {.count = 1}, SHIFT(304, 0),
    [84] = {.count = 1}, SHIFT(111, 0),
    [86] = {.count = 1}, SHIFT(300, 0),
    [88] = {.count = 1}, SHIFT(30, 0),
    [90] = {.count = 1}, SHIFT(31, 0),
    [92] = {.count = 1}, SHIFT(32, 0),
    [94] = {.count = 1}, SHIFT(33, 0),
    [96] = {.count = 1}, SHIFT(34, 0),
    [98] = {.count = 1}, SHIFT(35, 0),
    [100] = {.count = 1}, SHIFT(36, 0),
    [102] = {.count = 1}, SHIFT(37, 0),
    [104] = {.count = 1}, SHIFT(38, 0),
    [106] = {.count = 1}, SHIFT(39, 0),
    [108] = {.count = 1}, SHIFT(40, 0),
    [110] = {.count = 1}, SHIFT(41, 0),
    [112] = {.count = 1}, SHIFT(42, 0),
    [114] = {.count = 1}, SHIFT(43, 0),
    [116] = {.count = 1}, SHIFT(281, 0),
    [118] = {.count = 1}, SHIFT(280, 0),
    [120] = {.count = 1}, SHIFT(273, 0),
    [122] = {.count = 1}, SHIFT(19, 0),
    [124] = {.count = 1}, SHIFT(20, 0),
    [126] = {.count = 1}, SHIFT(21, 0),
    [128] = {.count = 1}, SHIFT(22, 0),
    [130] = {.count = 1}, SHIFT(23, 0),
    [132] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [134] = {.count = 1}, SHIFT(24, 0),
    [136] = {.count = 1}, SHIFT(25, 0),
    [138] = {.count = 1}, SHIFT(26, 0),
    [140] = {.count = 1}, SHIFT(27, 0),
    [142] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [144] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [146] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [148] = {.count = 1}, SHIFT(269, 0),
    [150] = {.count = 1}, SHIFT(270, 0),
    [152] = {.count = 1}, SHIFT(261, 0),
    [154] = {.count = 1}, SHIFT(262, 0),
    [156] = {.count = 1}, SHIFT(29, 0),
    [158] = {.count = 1}, SHIFT(28, 0),
    [160] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [162] = {.count = 1}, SHIFT(102, 0),
    [164] = {.count = 1}, SHIFT(258, 0),
    [166] = {.count = 1}, SHIFT(104, 0),
    [168] = {.count = 1}, SHIFT(259, 0),
    [170] = {.count = 1}, SHIFT(249, 0),
    [172] = {.count = 1}, SHIFT(241, 0),
    [174] = {.count = 1}, SHIFT(242, 0),
    [176] = {.count = 1}, SHIFT(240, 0),
    [178] = {.count = 1}, SHIFT(239, 0),
    [180] = {.count = 1}, SHIFT(238, 0),
    [182] = {.count = 1}, SHIFT(220, 0),
    [184] = {.count = 1}, SHIFT(216, 0),
    [186] = {.count = 1}, SHIFT(197, 0),
    [188] = {.count = 1}, SHIFT(196, 0),
    [190] = {.count = 1}, SHIFT(44, 0),
    [192] = {.count = 1}, SHIFT(45, 0),
    [194] = {.count = 1}, SHIFT(46, 0),
    [196] = {.count = 1}, SHIFT(47, 0),
    [198] = {.count = 1}, SHIFT(48, 0),
    [200] = {.count = 1}, SHIFT(49, 0),
    [202] = {.count = 1}, SHIFT(50, 0),
    [204] = {.count = 1}, SHIFT(51, 0),
    [206] = {.count = 1}, SHIFT(52, 0),
    [208] = {.count = 1}, SHIFT(53, 0),
    [210] = {.count = 1}, SHIFT(54, 0),
    [212] = {.count = 1}, SHIFT(55, 0),
    [214] = {.count = 1}, SHIFT(56, 0),
    [216] = {.count = 1}, SHIFT(57, 0),
    [218] = {.count = 1}, SHIFT(58, 0),
    [220] = {.count = 1}, SHIFT(59, 0),
    [222] = {.count = 1}, SHIFT(60, 0),
    [224] = {.count = 1}, SHIFT(61, 0),
    [226] = {.count = 1}, SHIFT(62, 0),
    [228] = {.count = 1}, SHIFT(63, 0),
    [230] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [232] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [234] = {.count = 1}, SHIFT(68, 0),
    [236] = {.count = 1}, SHIFT(193, 0),
    [238] = {.count = 1}, SHIFT(194, 0),
    [240] = {.count = 1}, SHIFT(71, 0),
    [242] = {.count = 1}, SHIFT(184, 0),
    [244] = {.count = 1}, SHIFT(155, 0),
    [246] = {.count = 1}, SHIFT(156, 0),
    [248] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [250] = {.count = 1}, SHIFT(154, 0),
    [252] = {.count = 1}, SHIFT(153, 0),
    [254] = {.count = 1}, SHIFT(151, 0),
    [256] = {.count = 1}, SHIFT(110, 0),
    [258] = {.count = 1}, SHIFT(101, 0),
    [260] = {.count = 1}, SHIFT(79, 0),
    [262] = {.count = 1}, SHIFT(78, 0),
    [264] = {.count = 1}, SHIFT(64, 0),
    [266] = {.count = 1}, SHIFT(65, 0),
    [268] = {.count = 1}, SHIFT(66, 0),
    [270] = {.count = 1}, SHIFT(67, 0),
    [272] = {.count = 1}, SHIFT(69, 0),
    [274] = {.count = 1}, SHIFT(70, 0),
    [276] = {.count = 1}, SHIFT(76, 0),
    [278] = {.count = 1}, SHIFT(75, 0),
    [280] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [282] = {.count = 1}, SHIFT(74, 0),
    [284] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [286] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [288] = {.count = 1}, SHIFT(77, 0),
    [290] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [292] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [294] = {.count = 1}, SHIFT(80, 0),
    [296] = {.count = 1}, SHIFT(81, 0),
    [298] = {.count = 1}, SHIFT(97, 0),
    [300] = {.count = 1}, SHIFT(98, 0),
    [302] = {.count = 1}, SHIFT(82, 0),
    [304] = {.count = 1}, SHIFT(83, 0),
    [306] = {.count = 1}, SHIFT(84, 0),
    [308] = {.count = 1}, SHIFT(85, 0),
    [310] = {.count = 1}, SHIFT(94, 0),
    [312] = {.count = 1}, SHIFT(95, 0),
    [314] = {.count = 1}, SHIFT(88, 0),
    [316] = {.count = 1}, SHIFT(86, 0),
    [318] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [320] = {.count = 1}, SHIFT(87, 0),
    [322] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [324] = {.count = 1}, SHIFT(89, 0),
    [326] = {.count = 1}, SHIFT(90, 0),
    [328] = {.count = 1}, SHIFT(91, 0),
    [330] = {.count = 1}, SHIFT(92, 0),
    [332] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [334] = {.count = 1}, SHIFT(93, 0),
    [336] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [338] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [340] = {.count = 1}, SHIFT(96, 0),
    [342] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [344] = {.count = 1}, SHIFT(99, 0),
    [346] = {.count = 1}, SHIFT(100, 0),
    [348] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [350] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [352] = {.count = 1}, SHIFT(103, 0),
    [354] = {.count = 1}, SHIFT(105, 0),
    [356] = {.count = 1}, SHIFT(108, 0),
    [358] = {.count = 1}, SHIFT(107, 0),
    [360] = {.count = 1}, SHIFT(106, 0),
    [362] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [364] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [366] = {.count = 1}, SHIFT(109, 0),
    [368] = {.count = 1}, SHIFT(112, 0),
    [370] = {.count = 1}, SHIFT(113, 0),
    [372] = {.count = 1}, SHIFT(114, 0),
    [374] = {.count = 1}, SHIFT(115, 0),
    [376] = {.count = 1}, SHIFT(116, 0),
    [378] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [380] = {.count = 1}, SHIFT(127, 0),
    [382] = {.count = 1}, SHIFT(148, 0),
    [384] = {.count = 1}, SHIFT(149, 0),
    [386] = {.count = 1}, SHIFT(126, 0),
    [388] = {.count = 1}, SHIFT(128, 0),
    [390] = {.count = 1}, SHIFT(129, 0),
    [392] = {.count = 1}, SHIFT(124, 0),
    [394] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [396] = {.count = 1}, SHIFT(117, 0),
    [398] = {.count = 1}, SHIFT(118, 0),
    [400] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [402] = {.count = 1}, SHIFT(119, 0),
    [404] = {.count = 1}, SHIFT(120, 0),
    [406] = {.count = 1}, SHIFT(122, 0),
    [408] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [410] = {.count = 1}, SHIFT(121, 0),
    [412] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [414] = {.count = 1}, SHIFT(123, 0),
    [416] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [418] = {.count = 1}, SHIFT(125, 0),
    [420] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [422] = {.count = 1}, SHIFT(144, 0),
    [424] = {.count = 1}, SHIFT(139, 0),
    [426] = {.count = 1}, SHIFT(140, 0),
    [428] = {.count = 1}, SHIFT(137, 0),
    [430] = {.count = 1}, SHIFT(130, 0),
    [432] = {.count = 1}, SHIFT(131, 0),
    [434] = {.count = 1}, SHIFT(132, 0),
    [436] = {.count = 1}, SHIFT(133, 0),
    [438] = {.count = 1}, SHIFT(135, 0),
    [440] = {.count = 1}, SHIFT(134, 0),
    [442] = {.count = 1}, SHIFT(136, 0),
    [444] = {.count = 1}, SHIFT(138, 0),
    [446] = {.count = 1}, SHIFT(141, 0),
    [448] = {.count = 1}, SHIFT(142, 0),
    [450] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [452] = {.count = 1}, SHIFT(143, 0),
    [454] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [456] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [458] = {.count = 1}, SHIFT(145, 0),
    [460] = {.count = 1}, SHIFT(146, 0),
    [462] = {.count = 1}, SHIFT(147, 0),
    [464] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [466] = {.count = 1}, SHIFT(150, 0),
    [468] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [470] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [472] = {.count = 1}, SHIFT(183, 0),
    [474] = {.count = 1}, SHIFT(157, 0),
    [476] = {.count = 1}, SHIFT(158, 0),
    [478] = {.count = 1}, SHIFT(159, 0),
    [480] = {.count = 1}, SHIFT(160, 0),
    [482] = {.count = 1}, SHIFT(161, 0),
    [484] = {.count = 1}, SHIFT(162, 0),
    [486] = {.count = 1}, SHIFT(163, 0),
    [488] = {.count = 1}, SHIFT(180, 0),
    [490] = {.count = 1}, SHIFT(174, 0),
    [492] = {.count = 1}, SHIFT(181, 0),
    [494] = {.count = 1}, SHIFT(169, 0),
    [496] = {.count = 1}, SHIFT(170, 0),
    [498] = {.count = 1}, SHIFT(165, 0),
    [500] = {.count = 1}, SHIFT(164, 0),
    [502] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [504] = {.count = 1}, SHIFT(166, 0),
    [506] = {.count = 1}, SHIFT(167, 0),
    [508] = {.count = 1}, SHIFT(168, 0),
    [510] = {.count = 1}, SHIFT(179, 0),
    [512] = {.count = 1}, SHIFT(171, 0),
    [514] = {.count = 1}, SHIFT(172, 0),
    [516] = {.count = 1}, SHIFT(173, 0),
    [518] = {.count = 1}, SHIFT(175, 0),
    [520] = {.count = 1}, SHIFT(178, 0),
    [522] = {.count = 1}, SHIFT(176, 0),
    [524] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [526] = {.count = 1}, SHIFT(177, 0),
    [528] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [530] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [532] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [534] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [536] = {.count = 1}, SHIFT(182, 0),
    [538] = {.count = 1}, SHIFT(185, 0),
    [540] = {.count = 1}, SHIFT(186, 0),
    [542] = {.count = 1}, SHIFT(192, 0),
    [544] = {.count = 1}, SHIFT(188, 0),
    [546] = {.count = 1}, SHIFT(187, 0),
    [548] = {.count = 1}, SHIFT(189, 0),
    [550] = {.count = 1}, SHIFT(190, 0),
    [552] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [554] = {.count = 1}, SHIFT(191, 0),
    [556] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [558] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [560] = {.count = 1}, SHIFT(195, 0),
    [562] = {.count = 1}, SHIFT(198, 0),
    [564] = {.count = 1}, SHIFT(199, 0),
    [566] = {.count = 1}, SHIFT(212, 0),
    [568] = {.count = 1}, SHIFT(213, 0),
    [570] = {.count = 1}, SHIFT(200, 0),
    [572] = {.count = 1}, SHIFT(201, 0),
    [574] = {.count = 1}, SHIFT(202, 0),
    [576] = {.count = 1}, SHIFT(209, 0),
    [578] = {.count = 1}, SHIFT(210, 0),
    [580] = {.count = 1}, SHIFT(203, 0),
    [582] = {.count = 1}, SHIFT(204, 0),
    [584] = {.count = 1}, SHIFT(205, 0),
    [586] = {.count = 1}, SHIFT(206, 0),
    [588] = {.count = 1}, SHIFT(207, 0),
    [590] = {.count = 1}, SHIFT(208, 0),
    [592] = {.count = 1}, SHIFT(211, 0),
    [594] = {.count = 1}, SHIFT(214, 0),
    [596] = {.count = 1}, SHIFT(215, 0),
    [598] = {.count = 1}, SHIFT(217, 0),
    [600] = {.count = 1}, SHIFT(218, 0),
    [602] = {.count = 1}, SHIFT(219, 0),
    [604] = {.count = 1}, SHIFT(221, 0),
    [606] = {.count = 1}, SHIFT(222, 0),
    [608] = {.count = 1}, SHIFT(223, 0),
    [610] = {.count = 1}, SHIFT(225, 0),
    [612] = {.count = 1}, SHIFT(235, 0),
    [614] = {.count = 1}, SHIFT(236, 0),
    [616] = {.count = 1}, SHIFT(224, 0),
    [618] = {.count = 1}, SHIFT(231, 0),
    [620] = {.count = 1}, SHIFT(226, 0),
    [622] = {.count = 1}, SHIFT(227, 0),
    [624] = {.count = 1}, SHIFT(228, 0),
    [626] = {.count = 1}, SHIFT(229, 0),
    [628] = {.count = 1}, SHIFT(230, 0),
    [630] = {.count = 1}, SHIFT(232, 0),
    [632] = {.count = 1}, SHIFT(233, 0),
    [634] = {.count = 1}, SHIFT(234, 0),
    [636] = {.count = 1}, SHIFT(237, 0),
    [638] = {.count = 1}, SHIFT(248, 0),
    [640] = {.count = 1}, SHIFT(243, 0),
    [642] = {.count = 1}, SHIFT(244, 0),
    [644] = {.count = 1}, SHIFT(245, 0),
    [646] = {.count = 1}, SHIFT(246, 0),
    [648] = {.count = 1}, SHIFT(247, 0),
    [650] = {.count = 1}, SHIFT(250, 0),
    [652] = {.count = 1}, SHIFT(251, 0),
    [654] = {.count = 1}, SHIFT(257, 0),
    [656] = {.count = 1}, SHIFT(253, 0),
    [658] = {.count = 1}, SHIFT(252, 0),
    [660] = {.count = 1}, SHIFT(254, 0),
    [662] = {.count = 1}, SHIFT(255, 0),
    [664] = {.count = 1}, SHIFT(256, 0),
    [666] = {.count = 1}, SHIFT(260, 0),
    [668] = {.count = 1}, SHIFT(268, 0),
    [670] = {.count = 1}, SHIFT(263, 0),
    [672] = {.count = 1}, SHIFT(264, 0),
    [674] = {.count = 1}, SHIFT(265, 0),
    [676] = {.count = 1}, SHIFT(266, 0),
    [678] = {.count = 1}, SHIFT(267, 0),
    [680] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [682] = {.count = 1}, SHIFT(271, 0),
    [684] = {.count = 1}, SHIFT(272, 0),
    [686] = {.count = 1}, SHIFT(274, 0),
    [688] = {.count = 1}, SHIFT(275, 0),
    [690] = {.count = 1}, SHIFT(276, 0),
    [692] = {.count = 1}, SHIFT(277, 0),
    [694] = {.count = 1}, SHIFT(278, 0),
    [696] = {.count = 1}, SHIFT(279, 0),
    [698] = {.count = 1}, SHIFT(282, 0),
    [700] = {.count = 1}, SHIFT(283, 0),
    [702] = {.count = 1}, SHIFT(296, 0),
    [704] = {.count = 1}, SHIFT(297, 0),
    [706] = {.count = 1}, SHIFT(284, 0),
    [708] = {.count = 1}, SHIFT(285, 0),
    [710] = {.count = 1}, SHIFT(286, 0),
    [712] = {.count = 1}, SHIFT(293, 0),
    [714] = {.count = 1}, SHIFT(294, 0),
    [716] = {.count = 1}, SHIFT(287, 0),
    [718] = {.count = 1}, SHIFT(288, 0),
    [720] = {.count = 1}, SHIFT(289, 0),
    [722] = {.count = 1}, SHIFT(290, 0),
    [724] = {.count = 1}, SHIFT(291, 0),
    [726] = {.count = 1}, SHIFT(292, 0),
    [728] = {.count = 1}, SHIFT(295, 0),
    [730] = {.count = 1}, SHIFT(298, 0),
    [732] = {.count = 1}, SHIFT(299, 0),
    [734] = {.count = 1}, SHIFT(301, 0),
    [736] = {.count = 1}, SHIFT(302, 0),
    [738] = {.count = 1}, SHIFT(303, 0),
    [740] = {.count = 1}, SHIFT(305, 0),
    [742] = {.count = 1}, SHIFT(306, 0),
    [744] = {.count = 1}, SHIFT(307, 0),
    [746] = {.count = 1}, SHIFT(309, 0),
    [748] = {.count = 1}, SHIFT(319, 0),
    [750] = {.count = 1}, SHIFT(320, 0),
    [752] = {.count = 1}, SHIFT(308, 0),
    [754] = {.count = 1}, SHIFT(315, 0),
    [756] = {.count = 1}, SHIFT(310, 0),
    [758] = {.count = 1}, SHIFT(311, 0),
    [760] = {.count = 1}, SHIFT(312, 0),
    [762] = {.count = 1}, SHIFT(313, 0),
    [764] = {.count = 1}, SHIFT(314, 0),
    [766] = {.count = 1}, SHIFT(316, 0),
    [768] = {.count = 1}, SHIFT(317, 0),
    [770] = {.count = 1}, SHIFT(318, 0),
    [772] = {.count = 1}, SHIFT(321, 0),
    [774] = {.count = 1}, SHIFT(323, 0),
    [776] = {.count = 1}, SHIFT(333, 0),
    [778] = {.count = 1}, SHIFT(328, 0),
    [780] = {.count = 1}, SHIFT(329, 0),
    [782] = {.count = 1}, SHIFT(330, 0),
    [784] = {.count = 1}, SHIFT(331, 0),
    [786] = {.count = 1}, SHIFT(332, 0),
    [788] = {.count = 1}, SHIFT(335, 0),
    [790] = {.count = 1}, SHIFT(336, 0),
    [792] = {.count = 1}, SHIFT(342, 0),
    [794] = {.count = 1}, SHIFT(338, 0),
    [796] = {.count = 1}, SHIFT(337, 0),
    [798] = {.count = 1}, SHIFT(339, 0),
    [800] = {.count = 1}, SHIFT(340, 0),
    [802] = {.count = 1}, SHIFT(341, 0),
    [804] = {.count = 1}, SHIFT(346, 0),
    [806] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [808] = {.count = 1}, SHIFT(347, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
