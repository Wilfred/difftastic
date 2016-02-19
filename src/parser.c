#include "tree_sitter/parser.h"

#define STATE_COUNT 353
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(163);
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(87);
            if (lookahead == 's')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
                ADVANCE(161);
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
                ADVANCE(170);
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
            if (lookahead == '=')
                ADVANCE(118);
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
                ADVANCE(170);
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
    [40] = 153,
    [41] = 149,
    [42] = 149,
    [43] = 149,
    [44] = 156,
    [45] = 157,
    [46] = 158,
    [47] = 159,
    [48] = 158,
    [49] = 162,
    [50] = 162,
    [51] = 162,
    [52] = 140,
    [53] = 162,
    [54] = 166,
    [55] = 166,
    [56] = 155,
    [57] = 146,
    [58] = 146,
    [59] = 146,
    [60] = 148,
    [61] = 149,
    [62] = 149,
    [63] = 149,
    [64] = 166,
    [65] = 157,
    [66] = 158,
    [67] = 162,
    [68] = 162,
    [69] = 167,
    [70] = 168,
    [71] = 162,
    [72] = 169,
    [73] = 171,
    [74] = 167,
    [75] = 162,
    [76] = 162,
    [77] = 162,
    [78] = 168,
    [79] = 166,
    [80] = 172,
    [81] = 158,
    [82] = 149,
    [83] = 173,
    [84] = 158,
    [85] = 157,
    [86] = 149,
    [87] = 173,
    [88] = 157,
    [89] = 158,
    [90] = 162,
    [91] = 162,
    [92] = 168,
    [93] = 162,
    [94] = 162,
    [95] = 162,
    [96] = 162,
    [97] = 168,
    [98] = 162,
    [99] = 162,
    [100] = 168,
    [101] = 162,
    [102] = 155,
    [103] = 166,
    [104] = 167,
    [105] = 174,
    [106] = 169,
    [107] = 166,
    [108] = 155,
    [109] = 166,
    [110] = 155,
    [111] = 174,
    [112] = 175,
    [113] = 175,
    [114] = 157,
    [115] = 158,
    [116] = 176,
    [117] = 149,
    [118] = 177,
    [119] = 157,
    [120] = 178,
    [121] = 149,
    [122] = 177,
    [123] = 157,
    [124] = 177,
    [125] = 157,
    [126] = 177,
    [127] = 157,
    [128] = 174,
    [129] = 158,
    [130] = 149,
    [131] = 179,
    [132] = 174,
    [133] = 178,
    [134] = 149,
    [135] = 179,
    [136] = 174,
    [137] = 179,
    [138] = 174,
    [139] = 179,
    [140] = 174,
    [141] = 162,
    [142] = 162,
    [143] = 168,
    [144] = 162,
    [145] = 162,
    [146] = 158,
    [147] = 162,
    [148] = 168,
    [149] = 162,
    [150] = 162,
    [151] = 162,
    [152] = 168,
    [153] = 146,
    [154] = 146,
    [155] = 162,
    [156] = 162,
    [157] = 149,
    [158] = 180,
    [159] = 181,
    [160] = 182,
    [161] = 182,
    [162] = 148,
    [163] = 149,
    [164] = 166,
    [165] = 182,
    [166] = 182,
    [167] = 155,
    [168] = 182,
    [169] = 174,
    [170] = 182,
    [171] = 182,
    [172] = 149,
    [173] = 180,
    [174] = 181,
    [175] = 182,
    [176] = 183,
    [177] = 184,
    [178] = 182,
    [179] = 181,
    [180] = 183,
    [181] = 182,
    [182] = 182,
    [183] = 183,
    [184] = 166,
    [185] = 166,
    [186] = 166,
    [187] = 185,
    [188] = 162,
    [189] = 158,
    [190] = 162,
    [191] = 162,
    [192] = 168,
    [193] = 162,
    [194] = 162,
    [195] = 168,
    [196] = 168,
    [197] = 155,
    [198] = 155,
    [199] = 156,
    [200] = 172,
    [201] = 158,
    [202] = 149,
    [203] = 173,
    [204] = 158,
    [205] = 157,
    [206] = 158,
    [207] = 162,
    [208] = 155,
    [209] = 168,
    [210] = 155,
    [211] = 155,
    [212] = 162,
    [213] = 155,
    [214] = 168,
    [215] = 162,
    [216] = 155,
    [217] = 168,
    [218] = 155,
    [219] = 155,
    [220] = 156,
    [221] = 174,
    [222] = 156,
    [223] = 156,
    [224] = 175,
    [225] = 157,
    [226] = 158,
    [227] = 176,
    [228] = 174,
    [229] = 158,
    [230] = 162,
    [231] = 155,
    [232] = 168,
    [233] = 155,
    [234] = 155,
    [235] = 158,
    [236] = 162,
    [237] = 168,
    [238] = 155,
    [239] = 162,
    [240] = 155,
    [241] = 168,
    [242] = 146,
    [243] = 155,
    [244] = 155,
    [245] = 149,
    [246] = 180,
    [247] = 181,
    [248] = 156,
    [249] = 183,
    [250] = 156,
    [251] = 156,
    [252] = 156,
    [253] = 185,
    [254] = 162,
    [255] = 158,
    [256] = 162,
    [257] = 155,
    [258] = 168,
    [259] = 155,
    [260] = 155,
    [261] = 168,
    [262] = 174,
    [263] = 153,
    [264] = 153,
    [265] = 149,
    [266] = 180,
    [267] = 181,
    [268] = 153,
    [269] = 183,
    [270] = 153,
    [271] = 153,
    [272] = 153,
    [273] = 140,
    [274] = 184,
    [275] = 152,
    [276] = 140,
    [277] = 157,
    [278] = 158,
    [279] = 162,
    [280] = 123,
    [281] = 168,
    [282] = 123,
    [283] = 123,
    [284] = 143,
    [285] = 172,
    [286] = 158,
    [287] = 149,
    [288] = 173,
    [289] = 158,
    [290] = 157,
    [291] = 158,
    [292] = 162,
    [293] = 123,
    [294] = 168,
    [295] = 123,
    [296] = 123,
    [297] = 162,
    [298] = 123,
    [299] = 168,
    [300] = 162,
    [301] = 123,
    [302] = 168,
    [303] = 123,
    [304] = 155,
    [305] = 143,
    [306] = 174,
    [307] = 143,
    [308] = 143,
    [309] = 175,
    [310] = 157,
    [311] = 158,
    [312] = 176,
    [313] = 174,
    [314] = 158,
    [315] = 162,
    [316] = 123,
    [317] = 168,
    [318] = 123,
    [319] = 123,
    [320] = 158,
    [321] = 162,
    [322] = 168,
    [323] = 123,
    [324] = 162,
    [325] = 123,
    [326] = 168,
    [327] = 146,
    [328] = 123,
    [329] = 123,
    [330] = 123,
    [331] = 149,
    [332] = 180,
    [333] = 181,
    [334] = 143,
    [335] = 183,
    [336] = 143,
    [337] = 143,
    [338] = 143,
    [339] = 185,
    [340] = 162,
    [341] = 158,
    [342] = 162,
    [343] = 123,
    [344] = 168,
    [345] = 123,
    [346] = 123,
    [347] = 168,
    [348] = 167,
    [349] = 122,
    [350] = 169,
    [351] = 123,
    [352] = 122,
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
        [anon_sym_RPAREN] = 108,
        [anon_sym_class] = 110,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_module] = 114,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [14] = {
        [sym_identifier] = 118,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [15] = {
        [sym_identifier] = 120,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [16] = {
        [sym_identifier] = 122,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [17] = {
        [sym__call_arguments] = 124,
        [sym__command] = 126,
        [sym__argument] = 128,
        [sym__primary] = 130,
        [sym_scope_resolution_expression] = 132,
        [sym_subscript_expression] = 132,
        [sym__variable] = 132,
        [anon_sym_do] = 134,
        [anon_sym_LPAREN] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_super] = 140,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [18] = {
        [sym__terminator] = 144,
        [aux_sym_program_repeat1] = 144,
        [ts_builtin_sym_end] = 144,
        [anon_sym_if] = 144,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 144,
        [anon_sym_until] = 144,
        [anon_sym_COLON_COLON] = 144,
        [anon_sym_LBRACK] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 144,
        [anon_sym_SEMI] = 144,
    },
    [19] = {
        [anon_sym_do] = 146,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [20] = {
        [anon_sym_do] = 148,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [21] = {
        [aux_sym__call_arguments_repeat1] = 150,
        [anon_sym_do] = 148,
        [anon_sym_COMMA] = 152,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [22] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [anon_sym_COLON_COLON] = 154,
        [anon_sym_LBRACK] = 156,
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
        [sym__statement] = 158,
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
        [anon_sym_RPAREN] = 160,
        [anon_sym_class] = 110,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_module] = 114,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [25] = {
        [sym_identifier] = 162,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [26] = {
        [sym__call_arguments] = 124,
        [sym__command] = 126,
        [sym__argument] = 128,
        [sym__primary] = 130,
        [sym_scope_resolution_expression] = 132,
        [sym_subscript_expression] = 132,
        [sym__variable] = 132,
        [anon_sym_LPAREN] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_super] = 140,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 144,
        [anon_sym_do] = 144,
        [anon_sym_COMMA] = 144,
        [anon_sym_COLON_COLON] = 144,
        [anon_sym_LBRACK] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [28] = {
        [aux_sym__call_arguments_repeat1] = 164,
        [anon_sym_do] = 164,
        [anon_sym_COMMA] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [29] = {
        [sym__terminator] = 166,
        [aux_sym_program_repeat1] = 168,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 172,
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
        [anon_sym_do] = 174,
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
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_LBRACK] = 178,
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
        [sym__function_name] = 180,
        [anon_sym_PIPE] = 182,
        [anon_sym_STAR] = 182,
        [anon_sym_AMP] = 182,
        [anon_sym_LT] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 182,
        [anon_sym_CARET] = 182,
        [anon_sym_LT_EQ_GT] = 182,
        [anon_sym_EQ_EQ] = 182,
        [anon_sym_EQ_EQ_EQ] = 182,
        [anon_sym_EQ_TILDE] = 182,
        [anon_sym_GT] = 182,
        [anon_sym_GT_EQ] = 182,
        [anon_sym_LT_EQ] = 182,
        [anon_sym_PLUS] = 182,
        [anon_sym_DASH] = 182,
        [anon_sym_SLASH] = 182,
        [anon_sym_PERCENT] = 182,
        [anon_sym_STAR_STAR] = 182,
        [anon_sym_LT_LT] = 182,
        [anon_sym_GT_GT] = 182,
        [anon_sym_TILDE] = 182,
        [anon_sym_PLUS_AT] = 182,
        [anon_sym_DASH_AT] = 182,
        [anon_sym_LBRACK_RBRACK] = 182,
        [anon_sym_LBRACK_RBRACK_EQ] = 182,
        [sym__line_break] = 40,
    },
    [37] = {
        [sym__function_name] = 184,
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
        [sym__function_name] = 186,
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
        [sym__statement] = 188,
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
        [anon_sym_RPAREN] = 190,
        [anon_sym_class] = 110,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_module] = 114,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [40] = {
        [aux_sym__call_arguments_repeat1] = 192,
        [anon_sym_do] = 192,
        [anon_sym_COMMA] = 192,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_LBRACK] = 192,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [41] = {
        [sym_identifier] = 194,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [42] = {
        [sym_identifier] = 196,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [43] = {
        [sym_identifier] = 198,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [44] = {
        [sym__terminator] = 144,
        [aux_sym_program_repeat1] = 144,
        [anon_sym_if] = 144,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 144,
        [anon_sym_until] = 144,
        [anon_sym_RPAREN] = 144,
        [anon_sym_COLON_COLON] = 144,
        [anon_sym_LBRACK] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 144,
        [anon_sym_SEMI] = 144,
    },
    [45] = {
        [sym__terminator] = 200,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [46] = {
        [sym__statement] = 206,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 220,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [47] = {
        [sym__statement] = 238,
        [sym__declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_argument_list] = 240,
        [sym_class_declaration] = 238,
        [sym_module_declaration] = 238,
        [sym__call] = 238,
        [sym__command] = 238,
        [sym__function_call] = 238,
        [sym__expression] = 238,
        [sym__argument] = 238,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 238,
        [sym_subscript_expression] = 238,
        [sym__variable] = 238,
        [sym__terminator] = 240,
        [aux_sym_class_declaration_repeat1] = 240,
        [anon_sym_end] = 238,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_STAR] = 240,
        [anon_sym_AMP] = 240,
        [anon_sym_class] = 238,
        [anon_sym_LT] = 240,
        [anon_sym_COLON_COLON] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 40,
        [sym_symbol] = 238,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 240,
    },
    [48] = {
        [sym__statement] = 238,
        [sym__declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_class_declaration] = 238,
        [sym_module_declaration] = 238,
        [sym__call] = 238,
        [sym__command] = 238,
        [sym__function_call] = 238,
        [sym__expression] = 238,
        [sym__argument] = 238,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 238,
        [sym_subscript_expression] = 238,
        [sym__variable] = 238,
        [anon_sym_end] = 238,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_class] = 238,
        [anon_sym_COLON_COLON] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 40,
        [sym_symbol] = 238,
        [sym__line_break] = 40,
    },
    [49] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 244,
        [anon_sym_end] = 246,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [50] = {
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
    [51] = {
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
    [52] = {
        [anon_sym_do] = 250,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [53] = {
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
    [54] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_COLON_COLON] = 252,
        [anon_sym_LBRACK] = 254,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [55] = {
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
    [56] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 256,
        [anon_sym_if] = 256,
        [anon_sym_while] = 256,
        [anon_sym_unless] = 256,
        [anon_sym_until] = 256,
        [anon_sym_RPAREN] = 256,
        [sym_comment] = 40,
        [sym__line_break] = 256,
        [anon_sym_SEMI] = 256,
    },
    [57] = {
        [sym__function_name] = 258,
        [anon_sym_PIPE] = 260,
        [anon_sym_STAR] = 260,
        [anon_sym_AMP] = 260,
        [anon_sym_LT] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 260,
        [anon_sym_CARET] = 260,
        [anon_sym_LT_EQ_GT] = 260,
        [anon_sym_EQ_EQ] = 260,
        [anon_sym_EQ_EQ_EQ] = 260,
        [anon_sym_EQ_TILDE] = 260,
        [anon_sym_GT] = 260,
        [anon_sym_GT_EQ] = 260,
        [anon_sym_LT_EQ] = 260,
        [anon_sym_PLUS] = 260,
        [anon_sym_DASH] = 260,
        [anon_sym_SLASH] = 260,
        [anon_sym_PERCENT] = 260,
        [anon_sym_STAR_STAR] = 260,
        [anon_sym_LT_LT] = 260,
        [anon_sym_GT_GT] = 260,
        [anon_sym_TILDE] = 260,
        [anon_sym_PLUS_AT] = 260,
        [anon_sym_DASH_AT] = 260,
        [anon_sym_LBRACK_RBRACK] = 260,
        [anon_sym_LBRACK_RBRACK_EQ] = 260,
        [sym__line_break] = 40,
    },
    [58] = {
        [sym__function_name] = 262,
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
    [59] = {
        [sym__function_name] = 264,
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
    [60] = {
        [sym__statement] = 266,
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
        [anon_sym_RPAREN] = 268,
        [anon_sym_class] = 110,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_module] = 114,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [61] = {
        [sym_identifier] = 270,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [62] = {
        [sym_identifier] = 272,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [63] = {
        [sym_identifier] = 274,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [64] = {
        [sym__terminator] = 144,
        [aux_sym_program_repeat1] = 144,
        [anon_sym_end] = 144,
        [anon_sym_if] = 144,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 144,
        [anon_sym_until] = 144,
        [anon_sym_COLON_COLON] = 144,
        [anon_sym_LBRACK] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 144,
        [anon_sym_SEMI] = 144,
    },
    [65] = {
        [sym__terminator] = 276,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [66] = {
        [sym__statement] = 278,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 280,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [67] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 282,
        [anon_sym_end] = 284,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [68] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 256,
        [anon_sym_end] = 256,
        [anon_sym_if] = 256,
        [anon_sym_while] = 256,
        [anon_sym_unless] = 256,
        [anon_sym_until] = 256,
        [sym_comment] = 40,
        [sym__line_break] = 256,
        [anon_sym_SEMI] = 256,
    },
    [69] = {
        [sym__statement] = 286,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [70] = {
        [anon_sym_end] = 288,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [71] = {
        [sym__terminator] = 290,
        [aux_sym_program_repeat1] = 290,
        [anon_sym_end] = 290,
        [anon_sym_if] = 290,
        [anon_sym_while] = 290,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 290,
        [sym_comment] = 40,
        [sym__line_break] = 290,
        [anon_sym_SEMI] = 290,
    },
    [72] = {
        [sym__expression] = 292,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_LPAREN] = 228,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [73] = {
        [sym__statement] = 238,
        [sym__declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_class_declaration] = 238,
        [sym_module_declaration] = 238,
        [sym__call] = 238,
        [sym__command] = 238,
        [sym__function_call] = 238,
        [sym__expression] = 238,
        [sym__argument] = 238,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 238,
        [sym_subscript_expression] = 238,
        [sym__variable] = 238,
        [sym__terminator] = 240,
        [aux_sym_program_repeat1] = 240,
        [ts_builtin_sym_end] = 240,
        [anon_sym_end] = 240,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_RPAREN] = 240,
        [anon_sym_class] = 238,
        [anon_sym_COLON_COLON] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 40,
        [sym_symbol] = 238,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 240,
    },
    [74] = {
        [sym__statement] = 238,
        [sym__declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_class_declaration] = 238,
        [sym_module_declaration] = 238,
        [sym__call] = 238,
        [sym__command] = 238,
        [sym__function_call] = 238,
        [sym__expression] = 238,
        [sym__argument] = 238,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 238,
        [sym_subscript_expression] = 238,
        [sym__variable] = 238,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_class] = 238,
        [anon_sym_COLON_COLON] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 40,
        [sym_symbol] = 238,
        [sym__line_break] = 40,
    },
    [75] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [anon_sym_end] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [sym_comment] = 40,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [76] = {
        [sym__terminator] = 296,
        [aux_sym_program_repeat1] = 296,
        [anon_sym_end] = 296,
        [anon_sym_if] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [sym_comment] = 40,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [77] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 298,
        [anon_sym_end] = 300,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [78] = {
        [anon_sym_end] = 302,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [79] = {
        [sym__terminator] = 164,
        [aux_sym_program_repeat1] = 164,
        [anon_sym_end] = 164,
        [anon_sym_if] = 164,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 164,
        [anon_sym_until] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 40,
        [sym__line_break] = 164,
        [anon_sym_SEMI] = 164,
    },
    [80] = {
        [sym__terminator] = 304,
        [anon_sym_LT] = 306,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [81] = {
        [sym__statement] = 308,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 310,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [82] = {
        [sym_identifier] = 312,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [83] = {
        [sym__terminator] = 314,
        [aux_sym_class_declaration_repeat1] = 316,
        [anon_sym_COLON_COLON] = 318,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [84] = {
        [sym__statement] = 320,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 322,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [85] = {
        [sym__terminator] = 324,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [86] = {
        [sym_identifier] = 326,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [87] = {
        [sym__terminator] = 328,
        [aux_sym_class_declaration_repeat1] = 330,
        [anon_sym_COLON_COLON] = 318,
        [sym_comment] = 40,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [88] = {
        [sym__terminator] = 332,
        [sym_comment] = 40,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [89] = {
        [sym__statement] = 334,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 336,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [90] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_end] = 340,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [91] = {
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
    [92] = {
        [anon_sym_end] = 344,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [93] = {
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_end] = 346,
        [anon_sym_if] = 346,
        [anon_sym_while] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_until] = 346,
        [sym_comment] = 40,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [94] = {
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
    [95] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 350,
        [anon_sym_end] = 336,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [96] = {
        [sym__terminator] = 352,
        [aux_sym_program_repeat1] = 352,
        [anon_sym_end] = 352,
        [anon_sym_if] = 352,
        [anon_sym_while] = 352,
        [anon_sym_unless] = 352,
        [anon_sym_until] = 352,
        [sym_comment] = 40,
        [sym__line_break] = 352,
        [anon_sym_SEMI] = 352,
    },
    [97] = {
        [anon_sym_end] = 340,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [98] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 354,
        [anon_sym_end] = 356,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [99] = {
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_end] = 358,
        [anon_sym_if] = 358,
        [anon_sym_while] = 358,
        [anon_sym_unless] = 358,
        [anon_sym_until] = 358,
        [sym_comment] = 40,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [100] = {
        [anon_sym_end] = 322,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [101] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [sym_comment] = 40,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [102] = {
        [sym__terminator] = 166,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 364,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [103] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 192,
        [anon_sym_end] = 192,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_LBRACK] = 192,
        [sym_comment] = 40,
        [sym__line_break] = 192,
        [anon_sym_SEMI] = 192,
    },
    [104] = {
        [sym__statement] = 366,
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
        [anon_sym_class] = 110,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_module] = 114,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [105] = {
        [anon_sym_RPAREN] = 368,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [106] = {
        [sym__expression] = 370,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 106,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [107] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_COLON_COLON] = 372,
        [anon_sym_LBRACK] = 372,
        [sym_comment] = 40,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [108] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [anon_sym_RPAREN] = 294,
        [sym_comment] = 40,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [109] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [anon_sym_COLON_COLON] = 374,
        [anon_sym_LBRACK] = 374,
        [sym_comment] = 40,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [110] = {
        [sym__terminator] = 166,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 300,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [111] = {
        [anon_sym_RPAREN] = 302,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [112] = {
        [sym_argument_list] = 378,
        [sym__terminator] = 380,
        [anon_sym_LPAREN] = 382,
        [anon_sym_STAR] = 384,
        [anon_sym_AMP] = 384,
        [sym_identifier] = 386,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [113] = {
        [sym_argument_list] = 388,
        [sym__terminator] = 388,
        [anon_sym_LPAREN] = 388,
        [anon_sym_STAR] = 388,
        [anon_sym_AMP] = 388,
        [sym_identifier] = 388,
        [sym_comment] = 40,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [114] = {
        [sym__terminator] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [115] = {
        [sym__statement] = 392,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 394,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [116] = {
        [sym_argument_list] = 396,
        [anon_sym_RPAREN] = 390,
        [anon_sym_STAR] = 398,
        [anon_sym_AMP] = 398,
        [sym_identifier] = 400,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [117] = {
        [sym_identifier] = 402,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [118] = {
        [sym__terminator] = 404,
        [aux_sym_argument_list_repeat1] = 406,
        [anon_sym_COMMA] = 408,
        [sym_comment] = 40,
        [sym__line_break] = 404,
        [anon_sym_SEMI] = 404,
    },
    [119] = {
        [sym__terminator] = 410,
        [sym_comment] = 40,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [120] = {
        [anon_sym_STAR] = 412,
        [anon_sym_AMP] = 412,
        [sym_identifier] = 414,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [121] = {
        [sym_identifier] = 416,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [122] = {
        [sym__terminator] = 418,
        [aux_sym_argument_list_repeat1] = 420,
        [anon_sym_COMMA] = 408,
        [sym_comment] = 40,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [123] = {
        [sym__terminator] = 422,
        [sym_comment] = 40,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [124] = {
        [sym__terminator] = 422,
        [aux_sym_argument_list_repeat1] = 424,
        [anon_sym_COMMA] = 408,
        [sym_comment] = 40,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [125] = {
        [sym__terminator] = 426,
        [sym_comment] = 40,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [126] = {
        [sym__terminator] = 410,
        [aux_sym_argument_list_repeat1] = 428,
        [anon_sym_COMMA] = 408,
        [sym_comment] = 40,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [127] = {
        [sym__terminator] = 430,
        [sym_comment] = 40,
        [sym__line_break] = 430,
        [anon_sym_SEMI] = 430,
    },
    [128] = {
        [anon_sym_RPAREN] = 432,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [129] = {
        [sym__statement] = 434,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 436,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [130] = {
        [sym_identifier] = 438,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [131] = {
        [aux_sym_argument_list_repeat1] = 440,
        [anon_sym_RPAREN] = 404,
        [anon_sym_COMMA] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [132] = {
        [anon_sym_RPAREN] = 410,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [133] = {
        [anon_sym_STAR] = 444,
        [anon_sym_AMP] = 444,
        [sym_identifier] = 446,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [134] = {
        [sym_identifier] = 448,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [135] = {
        [aux_sym_argument_list_repeat1] = 450,
        [anon_sym_RPAREN] = 418,
        [anon_sym_COMMA] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [136] = {
        [anon_sym_RPAREN] = 422,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [137] = {
        [aux_sym_argument_list_repeat1] = 452,
        [anon_sym_RPAREN] = 422,
        [anon_sym_COMMA] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [138] = {
        [anon_sym_RPAREN] = 426,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [139] = {
        [aux_sym_argument_list_repeat1] = 454,
        [anon_sym_RPAREN] = 410,
        [anon_sym_COMMA] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [140] = {
        [anon_sym_RPAREN] = 430,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [141] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 456,
        [anon_sym_end] = 458,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [142] = {
        [sym__terminator] = 460,
        [aux_sym_program_repeat1] = 460,
        [anon_sym_end] = 460,
        [anon_sym_if] = 460,
        [anon_sym_while] = 460,
        [anon_sym_unless] = 460,
        [anon_sym_until] = 460,
        [sym_comment] = 40,
        [sym__line_break] = 460,
        [anon_sym_SEMI] = 460,
    },
    [143] = {
        [anon_sym_end] = 462,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [144] = {
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
    [145] = {
        [sym__terminator] = 466,
        [aux_sym_program_repeat1] = 466,
        [anon_sym_end] = 466,
        [anon_sym_if] = 466,
        [anon_sym_while] = 466,
        [anon_sym_unless] = 466,
        [anon_sym_until] = 466,
        [sym_comment] = 40,
        [sym__line_break] = 466,
        [anon_sym_SEMI] = 466,
    },
    [146] = {
        [sym__statement] = 468,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 458,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [147] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 470,
        [anon_sym_end] = 462,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [148] = {
        [anon_sym_end] = 472,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [149] = {
        [sym__terminator] = 474,
        [aux_sym_program_repeat1] = 474,
        [anon_sym_end] = 474,
        [anon_sym_if] = 474,
        [anon_sym_while] = 474,
        [anon_sym_unless] = 474,
        [anon_sym_until] = 474,
        [sym_comment] = 40,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [150] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 476,
        [anon_sym_end] = 436,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [151] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [sym_comment] = 40,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [152] = {
        [anon_sym_end] = 458,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [153] = {
        [sym__function_name] = 292,
        [anon_sym_PIPE] = 260,
        [anon_sym_STAR] = 260,
        [anon_sym_AMP] = 260,
        [anon_sym_LT] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 260,
        [anon_sym_CARET] = 260,
        [anon_sym_LT_EQ_GT] = 260,
        [anon_sym_EQ_EQ] = 260,
        [anon_sym_EQ_EQ_EQ] = 260,
        [anon_sym_EQ_TILDE] = 260,
        [anon_sym_GT] = 260,
        [anon_sym_GT_EQ] = 260,
        [anon_sym_LT_EQ] = 260,
        [anon_sym_PLUS] = 260,
        [anon_sym_DASH] = 260,
        [anon_sym_SLASH] = 260,
        [anon_sym_PERCENT] = 260,
        [anon_sym_STAR_STAR] = 260,
        [anon_sym_LT_LT] = 260,
        [anon_sym_GT_GT] = 260,
        [anon_sym_TILDE] = 260,
        [anon_sym_PLUS_AT] = 260,
        [anon_sym_DASH_AT] = 260,
        [anon_sym_LBRACK_RBRACK] = 260,
        [anon_sym_LBRACK_RBRACK_EQ] = 260,
        [sym__line_break] = 40,
    },
    [154] = {
        [sym__function_name] = 388,
        [anon_sym_PIPE] = 388,
        [anon_sym_STAR] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_LT] = 388,
        [sym_identifier] = 388,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 388,
        [anon_sym_CARET] = 388,
        [anon_sym_LT_EQ_GT] = 388,
        [anon_sym_EQ_EQ] = 388,
        [anon_sym_EQ_EQ_EQ] = 388,
        [anon_sym_EQ_TILDE] = 388,
        [anon_sym_GT] = 388,
        [anon_sym_GT_EQ] = 388,
        [anon_sym_LT_EQ] = 388,
        [anon_sym_PLUS] = 388,
        [anon_sym_DASH] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_STAR_STAR] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_TILDE] = 388,
        [anon_sym_PLUS_AT] = 388,
        [anon_sym_DASH_AT] = 388,
        [anon_sym_LBRACK_RBRACK] = 388,
        [anon_sym_LBRACK_RBRACK_EQ] = 388,
        [sym__line_break] = 40,
    },
    [155] = {
        [sym__terminator] = 388,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_end] = 388,
        [anon_sym_if] = 388,
        [anon_sym_while] = 388,
        [anon_sym_unless] = 388,
        [anon_sym_until] = 388,
        [sym_comment] = 40,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [156] = {
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [anon_sym_end] = 480,
        [anon_sym_if] = 480,
        [anon_sym_while] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_until] = 480,
        [sym_comment] = 40,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [157] = {
        [sym_identifier] = 482,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [158] = {
        [sym__argument] = 484,
        [sym__primary] = 486,
        [sym_scope_resolution_expression] = 488,
        [sym_subscript_expression] = 488,
        [sym__variable] = 488,
        [anon_sym_LPAREN] = 490,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_RBRACK] = 494,
        [anon_sym_nil] = 496,
        [anon_sym_self] = 496,
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [159] = {
        [aux_sym__call_arguments_repeat1] = 498,
        [anon_sym_COMMA] = 500,
        [anon_sym_RBRACK] = 502,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [160] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_COMMA] = 66,
        [anon_sym_COLON_COLON] = 504,
        [anon_sym_LBRACK] = 506,
        [anon_sym_RBRACK] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [161] = {
        [aux_sym__call_arguments_repeat1] = 72,
        [anon_sym_COMMA] = 72,
        [anon_sym_COLON_COLON] = 72,
        [anon_sym_LBRACK] = 72,
        [anon_sym_RBRACK] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [162] = {
        [sym__statement] = 508,
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
        [anon_sym_RPAREN] = 510,
        [anon_sym_class] = 110,
        [anon_sym_COLON_COLON] = 112,
        [anon_sym_module] = 114,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 116,
        [anon_sym_self] = 116,
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym_symbol] = 94,
        [sym__line_break] = 40,
    },
    [163] = {
        [sym_identifier] = 512,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [164] = {
        [sym__terminator] = 514,
        [aux_sym_program_repeat1] = 514,
        [anon_sym_end] = 514,
        [anon_sym_if] = 514,
        [anon_sym_while] = 514,
        [anon_sym_unless] = 514,
        [anon_sym_until] = 514,
        [anon_sym_COLON_COLON] = 514,
        [anon_sym_LBRACK] = 514,
        [sym_comment] = 40,
        [sym__line_break] = 514,
        [anon_sym_SEMI] = 514,
    },
    [165] = {
        [aux_sym__call_arguments_repeat1] = 144,
        [anon_sym_COMMA] = 144,
        [anon_sym_COLON_COLON] = 144,
        [anon_sym_LBRACK] = 144,
        [anon_sym_RBRACK] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [166] = {
        [aux_sym__call_arguments_repeat1] = 164,
        [anon_sym_COMMA] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [anon_sym_RBRACK] = 164,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [167] = {
        [sym__terminator] = 166,
        [aux_sym_program_repeat1] = 516,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 518,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [168] = {
        [aux_sym__call_arguments_repeat1] = 192,
        [anon_sym_COMMA] = 192,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_LBRACK] = 192,
        [anon_sym_RBRACK] = 192,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [169] = {
        [anon_sym_RPAREN] = 520,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [170] = {
        [aux_sym__call_arguments_repeat1] = 372,
        [anon_sym_COMMA] = 372,
        [anon_sym_COLON_COLON] = 372,
        [anon_sym_LBRACK] = 372,
        [anon_sym_RBRACK] = 372,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [171] = {
        [aux_sym__call_arguments_repeat1] = 374,
        [anon_sym_COMMA] = 374,
        [anon_sym_COLON_COLON] = 374,
        [anon_sym_LBRACK] = 374,
        [anon_sym_RBRACK] = 374,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [172] = {
        [sym_identifier] = 522,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [173] = {
        [sym__argument] = 524,
        [sym__primary] = 486,
        [sym_scope_resolution_expression] = 488,
        [sym_subscript_expression] = 488,
        [sym__variable] = 488,
        [anon_sym_LPAREN] = 490,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_RBRACK] = 526,
        [anon_sym_nil] = 496,
        [anon_sym_self] = 496,
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [174] = {
        [aux_sym__call_arguments_repeat1] = 528,
        [anon_sym_COMMA] = 500,
        [anon_sym_RBRACK] = 530,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [175] = {
        [aux_sym__call_arguments_repeat1] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_COLON_COLON] = 514,
        [anon_sym_LBRACK] = 514,
        [anon_sym_RBRACK] = 514,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [176] = {
        [anon_sym_RBRACK] = 532,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [177] = {
        [sym__argument] = 534,
        [sym__primary] = 486,
        [sym_scope_resolution_expression] = 488,
        [sym_subscript_expression] = 488,
        [sym__variable] = 488,
        [anon_sym_LPAREN] = 490,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_nil] = 496,
        [anon_sym_self] = 496,
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [178] = {
        [aux_sym__call_arguments_repeat1] = 536,
        [anon_sym_COMMA] = 536,
        [anon_sym_COLON_COLON] = 536,
        [anon_sym_LBRACK] = 536,
        [anon_sym_RBRACK] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [179] = {
        [aux_sym__call_arguments_repeat1] = 538,
        [anon_sym_COMMA] = 500,
        [anon_sym_RBRACK] = 540,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [180] = {
        [anon_sym_RBRACK] = 542,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [181] = {
        [aux_sym__call_arguments_repeat1] = 544,
        [anon_sym_COMMA] = 544,
        [anon_sym_COLON_COLON] = 544,
        [anon_sym_LBRACK] = 544,
        [anon_sym_RBRACK] = 544,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [182] = {
        [aux_sym__call_arguments_repeat1] = 546,
        [anon_sym_COMMA] = 546,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_LBRACK] = 546,
        [anon_sym_RBRACK] = 546,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [183] = {
        [anon_sym_RBRACK] = 548,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [184] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [anon_sym_end] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [anon_sym_COLON_COLON] = 536,
        [anon_sym_LBRACK] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [185] = {
        [sym__terminator] = 544,
        [aux_sym_program_repeat1] = 544,
        [anon_sym_end] = 544,
        [anon_sym_if] = 544,
        [anon_sym_while] = 544,
        [anon_sym_unless] = 544,
        [anon_sym_until] = 544,
        [anon_sym_COLON_COLON] = 544,
        [anon_sym_LBRACK] = 544,
        [sym_comment] = 40,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [186] = {
        [sym__terminator] = 546,
        [aux_sym_program_repeat1] = 546,
        [anon_sym_end] = 546,
        [anon_sym_if] = 546,
        [anon_sym_while] = 546,
        [anon_sym_unless] = 546,
        [anon_sym_until] = 546,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_LBRACK] = 546,
        [sym_comment] = 40,
        [sym__line_break] = 546,
        [anon_sym_SEMI] = 546,
    },
    [187] = {
        [sym__statement] = 550,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_PIPE] = 552,
        [anon_sym_end] = 292,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [188] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 556,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [189] = {
        [sym__statement] = 558,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 556,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [190] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_end] = 562,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [191] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_end] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [sym_comment] = 40,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [192] = {
        [anon_sym_end] = 566,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [193] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [sym_comment] = 40,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [194] = {
        [sym__terminator] = 570,
        [aux_sym_program_repeat1] = 570,
        [anon_sym_end] = 570,
        [anon_sym_if] = 570,
        [anon_sym_while] = 570,
        [anon_sym_unless] = 570,
        [anon_sym_until] = 570,
        [sym_comment] = 40,
        [sym__line_break] = 570,
        [anon_sym_SEMI] = 570,
    },
    [195] = {
        [anon_sym_end] = 562,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [196] = {
        [anon_sym_end] = 572,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [197] = {
        [sym__terminator] = 290,
        [aux_sym_program_repeat1] = 290,
        [anon_sym_if] = 290,
        [anon_sym_while] = 290,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 290,
        [anon_sym_RPAREN] = 290,
        [sym_comment] = 40,
        [sym__line_break] = 290,
        [anon_sym_SEMI] = 290,
    },
    [198] = {
        [sym__terminator] = 296,
        [aux_sym_program_repeat1] = 296,
        [anon_sym_if] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [anon_sym_RPAREN] = 296,
        [sym_comment] = 40,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [199] = {
        [sym__terminator] = 164,
        [aux_sym_program_repeat1] = 164,
        [anon_sym_if] = 164,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 164,
        [anon_sym_until] = 164,
        [anon_sym_RPAREN] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 40,
        [sym__line_break] = 164,
        [anon_sym_SEMI] = 164,
    },
    [200] = {
        [sym__terminator] = 574,
        [anon_sym_LT] = 576,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [201] = {
        [sym__statement] = 578,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 580,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [202] = {
        [sym_identifier] = 582,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [203] = {
        [sym__terminator] = 584,
        [aux_sym_class_declaration_repeat1] = 586,
        [anon_sym_COLON_COLON] = 318,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [204] = {
        [sym__statement] = 588,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 590,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [205] = {
        [sym__terminator] = 592,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [206] = {
        [sym__statement] = 594,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 596,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [207] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_end] = 600,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [208] = {
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
    [209] = {
        [anon_sym_end] = 602,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [210] = {
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_if] = 346,
        [anon_sym_while] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_until] = 346,
        [anon_sym_RPAREN] = 346,
        [sym_comment] = 40,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [211] = {
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
    [212] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_end] = 596,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [213] = {
        [sym__terminator] = 352,
        [aux_sym_program_repeat1] = 352,
        [anon_sym_if] = 352,
        [anon_sym_while] = 352,
        [anon_sym_unless] = 352,
        [anon_sym_until] = 352,
        [anon_sym_RPAREN] = 352,
        [sym_comment] = 40,
        [sym__line_break] = 352,
        [anon_sym_SEMI] = 352,
    },
    [214] = {
        [anon_sym_end] = 600,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [215] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 606,
        [anon_sym_end] = 608,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [216] = {
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_if] = 358,
        [anon_sym_while] = 358,
        [anon_sym_unless] = 358,
        [anon_sym_until] = 358,
        [anon_sym_RPAREN] = 358,
        [sym_comment] = 40,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [217] = {
        [anon_sym_end] = 590,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [218] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [anon_sym_RPAREN] = 360,
        [sym_comment] = 40,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [219] = {
        [sym__terminator] = 166,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 612,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [220] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 192,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 192,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_LBRACK] = 192,
        [sym_comment] = 40,
        [sym__line_break] = 192,
        [anon_sym_SEMI] = 192,
    },
    [221] = {
        [anon_sym_RPAREN] = 614,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [222] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_RPAREN] = 372,
        [anon_sym_COLON_COLON] = 372,
        [anon_sym_LBRACK] = 372,
        [sym_comment] = 40,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [223] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [anon_sym_RPAREN] = 374,
        [anon_sym_COLON_COLON] = 374,
        [anon_sym_LBRACK] = 374,
        [sym_comment] = 40,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [224] = {
        [sym_argument_list] = 616,
        [sym__terminator] = 618,
        [anon_sym_LPAREN] = 620,
        [anon_sym_STAR] = 384,
        [anon_sym_AMP] = 384,
        [sym_identifier] = 386,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [225] = {
        [sym__terminator] = 622,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [226] = {
        [sym__statement] = 624,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 626,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [227] = {
        [sym_argument_list] = 628,
        [anon_sym_RPAREN] = 622,
        [anon_sym_STAR] = 398,
        [anon_sym_AMP] = 398,
        [sym_identifier] = 400,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [228] = {
        [anon_sym_RPAREN] = 630,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [229] = {
        [sym__statement] = 632,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 634,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [230] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 638,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [231] = {
        [sym__terminator] = 460,
        [aux_sym_program_repeat1] = 460,
        [anon_sym_if] = 460,
        [anon_sym_while] = 460,
        [anon_sym_unless] = 460,
        [anon_sym_until] = 460,
        [anon_sym_RPAREN] = 460,
        [sym_comment] = 40,
        [sym__line_break] = 460,
        [anon_sym_SEMI] = 460,
    },
    [232] = {
        [anon_sym_end] = 640,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [233] = {
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
    [234] = {
        [sym__terminator] = 466,
        [aux_sym_program_repeat1] = 466,
        [anon_sym_if] = 466,
        [anon_sym_while] = 466,
        [anon_sym_unless] = 466,
        [anon_sym_until] = 466,
        [anon_sym_RPAREN] = 466,
        [sym_comment] = 40,
        [sym__line_break] = 466,
        [anon_sym_SEMI] = 466,
    },
    [235] = {
        [sym__statement] = 642,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 638,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [236] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_end] = 640,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [237] = {
        [anon_sym_end] = 646,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [238] = {
        [sym__terminator] = 474,
        [aux_sym_program_repeat1] = 474,
        [anon_sym_if] = 474,
        [anon_sym_while] = 474,
        [anon_sym_unless] = 474,
        [anon_sym_until] = 474,
        [anon_sym_RPAREN] = 474,
        [sym_comment] = 40,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [239] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 648,
        [anon_sym_end] = 634,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [240] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [anon_sym_RPAREN] = 478,
        [sym_comment] = 40,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [241] = {
        [anon_sym_end] = 638,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [242] = {
        [sym__function_name] = 370,
        [anon_sym_PIPE] = 182,
        [anon_sym_STAR] = 182,
        [anon_sym_AMP] = 182,
        [anon_sym_LT] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 182,
        [anon_sym_CARET] = 182,
        [anon_sym_LT_EQ_GT] = 182,
        [anon_sym_EQ_EQ] = 182,
        [anon_sym_EQ_EQ_EQ] = 182,
        [anon_sym_EQ_TILDE] = 182,
        [anon_sym_GT] = 182,
        [anon_sym_GT_EQ] = 182,
        [anon_sym_LT_EQ] = 182,
        [anon_sym_PLUS] = 182,
        [anon_sym_DASH] = 182,
        [anon_sym_SLASH] = 182,
        [anon_sym_PERCENT] = 182,
        [anon_sym_STAR_STAR] = 182,
        [anon_sym_LT_LT] = 182,
        [anon_sym_GT_GT] = 182,
        [anon_sym_TILDE] = 182,
        [anon_sym_PLUS_AT] = 182,
        [anon_sym_DASH_AT] = 182,
        [anon_sym_LBRACK_RBRACK] = 182,
        [anon_sym_LBRACK_RBRACK_EQ] = 182,
        [sym__line_break] = 40,
    },
    [243] = {
        [sym__terminator] = 388,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_if] = 388,
        [anon_sym_while] = 388,
        [anon_sym_unless] = 388,
        [anon_sym_until] = 388,
        [anon_sym_RPAREN] = 388,
        [sym_comment] = 40,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [244] = {
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [anon_sym_if] = 480,
        [anon_sym_while] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_until] = 480,
        [anon_sym_RPAREN] = 480,
        [sym_comment] = 40,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [245] = {
        [sym_identifier] = 650,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [246] = {
        [sym__argument] = 652,
        [sym__primary] = 486,
        [sym_scope_resolution_expression] = 488,
        [sym_subscript_expression] = 488,
        [sym__variable] = 488,
        [anon_sym_LPAREN] = 490,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_RBRACK] = 654,
        [anon_sym_nil] = 496,
        [anon_sym_self] = 496,
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [247] = {
        [aux_sym__call_arguments_repeat1] = 656,
        [anon_sym_COMMA] = 500,
        [anon_sym_RBRACK] = 658,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [248] = {
        [sym__terminator] = 514,
        [aux_sym_program_repeat1] = 514,
        [anon_sym_if] = 514,
        [anon_sym_while] = 514,
        [anon_sym_unless] = 514,
        [anon_sym_until] = 514,
        [anon_sym_RPAREN] = 514,
        [anon_sym_COLON_COLON] = 514,
        [anon_sym_LBRACK] = 514,
        [sym_comment] = 40,
        [sym__line_break] = 514,
        [anon_sym_SEMI] = 514,
    },
    [249] = {
        [anon_sym_RBRACK] = 660,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [250] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [anon_sym_RPAREN] = 536,
        [anon_sym_COLON_COLON] = 536,
        [anon_sym_LBRACK] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [251] = {
        [sym__terminator] = 544,
        [aux_sym_program_repeat1] = 544,
        [anon_sym_if] = 544,
        [anon_sym_while] = 544,
        [anon_sym_unless] = 544,
        [anon_sym_until] = 544,
        [anon_sym_RPAREN] = 544,
        [anon_sym_COLON_COLON] = 544,
        [anon_sym_LBRACK] = 544,
        [sym_comment] = 40,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [252] = {
        [sym__terminator] = 546,
        [aux_sym_program_repeat1] = 546,
        [anon_sym_if] = 546,
        [anon_sym_while] = 546,
        [anon_sym_unless] = 546,
        [anon_sym_until] = 546,
        [anon_sym_RPAREN] = 546,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_LBRACK] = 546,
        [sym_comment] = 40,
        [sym__line_break] = 546,
        [anon_sym_SEMI] = 546,
    },
    [253] = {
        [sym__statement] = 662,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_PIPE] = 664,
        [anon_sym_end] = 370,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [254] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 668,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [255] = {
        [sym__statement] = 670,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 668,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [256] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 672,
        [anon_sym_end] = 674,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [257] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [anon_sym_RPAREN] = 564,
        [sym_comment] = 40,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [258] = {
        [anon_sym_end] = 676,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [259] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [anon_sym_RPAREN] = 568,
        [sym_comment] = 40,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [260] = {
        [sym__terminator] = 570,
        [aux_sym_program_repeat1] = 570,
        [anon_sym_if] = 570,
        [anon_sym_while] = 570,
        [anon_sym_unless] = 570,
        [anon_sym_until] = 570,
        [anon_sym_RPAREN] = 570,
        [sym_comment] = 40,
        [sym__line_break] = 570,
        [anon_sym_SEMI] = 570,
    },
    [261] = {
        [anon_sym_end] = 674,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [262] = {
        [anon_sym_RPAREN] = 678,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [263] = {
        [aux_sym__call_arguments_repeat1] = 372,
        [anon_sym_do] = 372,
        [anon_sym_COMMA] = 372,
        [anon_sym_COLON_COLON] = 372,
        [anon_sym_LBRACK] = 372,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [264] = {
        [aux_sym__call_arguments_repeat1] = 374,
        [anon_sym_do] = 374,
        [anon_sym_COMMA] = 374,
        [anon_sym_COLON_COLON] = 374,
        [anon_sym_LBRACK] = 374,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [265] = {
        [sym_identifier] = 680,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [266] = {
        [sym__argument] = 682,
        [sym__primary] = 486,
        [sym_scope_resolution_expression] = 488,
        [sym_subscript_expression] = 488,
        [sym__variable] = 488,
        [anon_sym_LPAREN] = 490,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_RBRACK] = 684,
        [anon_sym_nil] = 496,
        [anon_sym_self] = 496,
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [267] = {
        [aux_sym__call_arguments_repeat1] = 686,
        [anon_sym_COMMA] = 500,
        [anon_sym_RBRACK] = 688,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [268] = {
        [aux_sym__call_arguments_repeat1] = 514,
        [anon_sym_do] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_COLON_COLON] = 514,
        [anon_sym_LBRACK] = 514,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [269] = {
        [anon_sym_RBRACK] = 690,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [270] = {
        [aux_sym__call_arguments_repeat1] = 536,
        [anon_sym_do] = 536,
        [anon_sym_COMMA] = 536,
        [anon_sym_COLON_COLON] = 536,
        [anon_sym_LBRACK] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [271] = {
        [aux_sym__call_arguments_repeat1] = 544,
        [anon_sym_do] = 544,
        [anon_sym_COMMA] = 544,
        [anon_sym_COLON_COLON] = 544,
        [anon_sym_LBRACK] = 544,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [272] = {
        [aux_sym__call_arguments_repeat1] = 546,
        [anon_sym_do] = 546,
        [anon_sym_COMMA] = 546,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_LBRACK] = 546,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [273] = {
        [anon_sym_do] = 692,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [274] = {
        [sym__argument] = 694,
        [sym__primary] = 130,
        [sym_scope_resolution_expression] = 132,
        [sym_subscript_expression] = 132,
        [sym__variable] = 132,
        [anon_sym_LPAREN] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [275] = {
        [aux_sym__call_arguments_repeat1] = 696,
        [anon_sym_do] = 540,
        [anon_sym_COMMA] = 152,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [276] = {
        [anon_sym_do] = 542,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [277] = {
        [sym__terminator] = 698,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [278] = {
        [sym__statement] = 700,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 702,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [279] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 704,
        [anon_sym_end] = 706,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [280] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 256,
        [ts_builtin_sym_end] = 256,
        [anon_sym_if] = 256,
        [anon_sym_while] = 256,
        [anon_sym_unless] = 256,
        [anon_sym_until] = 256,
        [sym_comment] = 40,
        [sym__line_break] = 256,
        [anon_sym_SEMI] = 256,
    },
    [281] = {
        [anon_sym_end] = 708,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [282] = {
        [sym__terminator] = 290,
        [aux_sym_program_repeat1] = 290,
        [ts_builtin_sym_end] = 290,
        [anon_sym_if] = 290,
        [anon_sym_while] = 290,
        [anon_sym_unless] = 290,
        [anon_sym_until] = 290,
        [sym_comment] = 40,
        [sym__line_break] = 290,
        [anon_sym_SEMI] = 290,
    },
    [283] = {
        [sym__terminator] = 296,
        [aux_sym_program_repeat1] = 296,
        [ts_builtin_sym_end] = 296,
        [anon_sym_if] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [sym_comment] = 40,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [284] = {
        [sym__terminator] = 164,
        [aux_sym_program_repeat1] = 164,
        [ts_builtin_sym_end] = 164,
        [anon_sym_if] = 164,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 164,
        [anon_sym_until] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 40,
        [sym__line_break] = 164,
        [anon_sym_SEMI] = 164,
    },
    [285] = {
        [sym__terminator] = 710,
        [anon_sym_LT] = 712,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [286] = {
        [sym__statement] = 714,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 716,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [287] = {
        [sym_identifier] = 718,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [288] = {
        [sym__terminator] = 720,
        [aux_sym_class_declaration_repeat1] = 722,
        [anon_sym_COLON_COLON] = 318,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [289] = {
        [sym__statement] = 724,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 726,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [290] = {
        [sym__terminator] = 728,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [291] = {
        [sym__statement] = 730,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 732,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [292] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 734,
        [anon_sym_end] = 736,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [293] = {
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
    [294] = {
        [anon_sym_end] = 738,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [295] = {
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [ts_builtin_sym_end] = 346,
        [anon_sym_if] = 346,
        [anon_sym_while] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_until] = 346,
        [sym_comment] = 40,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [296] = {
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
    [297] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 740,
        [anon_sym_end] = 732,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [298] = {
        [sym__terminator] = 352,
        [aux_sym_program_repeat1] = 352,
        [ts_builtin_sym_end] = 352,
        [anon_sym_if] = 352,
        [anon_sym_while] = 352,
        [anon_sym_unless] = 352,
        [anon_sym_until] = 352,
        [sym_comment] = 40,
        [sym__line_break] = 352,
        [anon_sym_SEMI] = 352,
    },
    [299] = {
        [anon_sym_end] = 736,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [300] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_end] = 744,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [301] = {
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [ts_builtin_sym_end] = 358,
        [anon_sym_if] = 358,
        [anon_sym_while] = 358,
        [anon_sym_unless] = 358,
        [anon_sym_until] = 358,
        [sym_comment] = 40,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [302] = {
        [anon_sym_end] = 726,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [303] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [ts_builtin_sym_end] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [sym_comment] = 40,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [304] = {
        [sym__terminator] = 166,
        [aux_sym_program_repeat1] = 746,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 748,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [305] = {
        [sym__terminator] = 192,
        [aux_sym_program_repeat1] = 192,
        [ts_builtin_sym_end] = 192,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_LBRACK] = 192,
        [sym_comment] = 40,
        [sym__line_break] = 192,
        [anon_sym_SEMI] = 192,
    },
    [306] = {
        [anon_sym_RPAREN] = 750,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [307] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [ts_builtin_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_COLON_COLON] = 372,
        [anon_sym_LBRACK] = 372,
        [sym_comment] = 40,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [308] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [ts_builtin_sym_end] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [anon_sym_COLON_COLON] = 374,
        [anon_sym_LBRACK] = 374,
        [sym_comment] = 40,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [309] = {
        [sym_argument_list] = 752,
        [sym__terminator] = 754,
        [anon_sym_LPAREN] = 756,
        [anon_sym_STAR] = 384,
        [anon_sym_AMP] = 384,
        [sym_identifier] = 386,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [310] = {
        [sym__terminator] = 758,
        [sym_comment] = 40,
        [sym__line_break] = 202,
        [anon_sym_SEMI] = 204,
    },
    [311] = {
        [sym__statement] = 760,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 762,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [312] = {
        [sym_argument_list] = 764,
        [anon_sym_RPAREN] = 758,
        [anon_sym_STAR] = 398,
        [anon_sym_AMP] = 398,
        [sym_identifier] = 400,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [313] = {
        [anon_sym_RPAREN] = 766,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [314] = {
        [sym__statement] = 768,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 770,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [315] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 772,
        [anon_sym_end] = 774,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [316] = {
        [sym__terminator] = 460,
        [aux_sym_program_repeat1] = 460,
        [ts_builtin_sym_end] = 460,
        [anon_sym_if] = 460,
        [anon_sym_while] = 460,
        [anon_sym_unless] = 460,
        [anon_sym_until] = 460,
        [sym_comment] = 40,
        [sym__line_break] = 460,
        [anon_sym_SEMI] = 460,
    },
    [317] = {
        [anon_sym_end] = 776,
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
        [sym__terminator] = 466,
        [aux_sym_program_repeat1] = 466,
        [ts_builtin_sym_end] = 466,
        [anon_sym_if] = 466,
        [anon_sym_while] = 466,
        [anon_sym_unless] = 466,
        [anon_sym_until] = 466,
        [sym_comment] = 40,
        [sym__line_break] = 466,
        [anon_sym_SEMI] = 466,
    },
    [320] = {
        [sym__statement] = 778,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 774,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [321] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 780,
        [anon_sym_end] = 776,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [322] = {
        [anon_sym_end] = 782,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [323] = {
        [sym__terminator] = 474,
        [aux_sym_program_repeat1] = 474,
        [ts_builtin_sym_end] = 474,
        [anon_sym_if] = 474,
        [anon_sym_while] = 474,
        [anon_sym_unless] = 474,
        [anon_sym_until] = 474,
        [sym_comment] = 40,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [324] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 784,
        [anon_sym_end] = 770,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [325] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [ts_builtin_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [sym_comment] = 40,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [326] = {
        [anon_sym_end] = 774,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [327] = {
        [sym__function_name] = 786,
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
    [328] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [ts_builtin_sym_end] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [sym_comment] = 40,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [329] = {
        [sym__terminator] = 388,
        [aux_sym_program_repeat1] = 388,
        [ts_builtin_sym_end] = 388,
        [anon_sym_if] = 388,
        [anon_sym_while] = 388,
        [anon_sym_unless] = 388,
        [anon_sym_until] = 388,
        [sym_comment] = 40,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [330] = {
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [ts_builtin_sym_end] = 480,
        [anon_sym_if] = 480,
        [anon_sym_while] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_until] = 480,
        [sym_comment] = 40,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [331] = {
        [sym_identifier] = 788,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [332] = {
        [sym__argument] = 790,
        [sym__primary] = 486,
        [sym_scope_resolution_expression] = 488,
        [sym_subscript_expression] = 488,
        [sym__variable] = 488,
        [anon_sym_LPAREN] = 490,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_RBRACK] = 792,
        [anon_sym_nil] = 496,
        [anon_sym_self] = 496,
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [333] = {
        [aux_sym__call_arguments_repeat1] = 794,
        [anon_sym_COMMA] = 500,
        [anon_sym_RBRACK] = 796,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [334] = {
        [sym__terminator] = 514,
        [aux_sym_program_repeat1] = 514,
        [ts_builtin_sym_end] = 514,
        [anon_sym_if] = 514,
        [anon_sym_while] = 514,
        [anon_sym_unless] = 514,
        [anon_sym_until] = 514,
        [anon_sym_COLON_COLON] = 514,
        [anon_sym_LBRACK] = 514,
        [sym_comment] = 40,
        [sym__line_break] = 514,
        [anon_sym_SEMI] = 514,
    },
    [335] = {
        [anon_sym_RBRACK] = 798,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [336] = {
        [sym__terminator] = 536,
        [aux_sym_program_repeat1] = 536,
        [ts_builtin_sym_end] = 536,
        [anon_sym_if] = 536,
        [anon_sym_while] = 536,
        [anon_sym_unless] = 536,
        [anon_sym_until] = 536,
        [anon_sym_COLON_COLON] = 536,
        [anon_sym_LBRACK] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 536,
        [anon_sym_SEMI] = 536,
    },
    [337] = {
        [sym__terminator] = 544,
        [aux_sym_program_repeat1] = 544,
        [ts_builtin_sym_end] = 544,
        [anon_sym_if] = 544,
        [anon_sym_while] = 544,
        [anon_sym_unless] = 544,
        [anon_sym_until] = 544,
        [anon_sym_COLON_COLON] = 544,
        [anon_sym_LBRACK] = 544,
        [sym_comment] = 40,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [338] = {
        [sym__terminator] = 546,
        [aux_sym_program_repeat1] = 546,
        [ts_builtin_sym_end] = 546,
        [anon_sym_if] = 546,
        [anon_sym_while] = 546,
        [anon_sym_unless] = 546,
        [anon_sym_until] = 546,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_LBRACK] = 546,
        [sym_comment] = 40,
        [sym__line_break] = 546,
        [anon_sym_SEMI] = 546,
    },
    [339] = {
        [sym__statement] = 800,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_PIPE] = 802,
        [anon_sym_end] = 786,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [340] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 804,
        [anon_sym_end] = 806,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [341] = {
        [sym__statement] = 808,
        [sym__declaration] = 208,
        [sym_method_declaration] = 210,
        [sym_class_declaration] = 210,
        [sym_module_declaration] = 210,
        [sym__call] = 212,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 208,
        [sym__argument] = 214,
        [sym__primary] = 216,
        [sym_scope_resolution_expression] = 218,
        [sym_subscript_expression] = 218,
        [sym__variable] = 218,
        [anon_sym_end] = 806,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 226,
        [anon_sym_LPAREN] = 228,
        [anon_sym_class] = 230,
        [anon_sym_COLON_COLON] = 232,
        [anon_sym_module] = 234,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 236,
        [anon_sym_self] = 236,
        [sym_identifier] = 236,
        [sym_comment] = 40,
        [sym_symbol] = 214,
        [sym__line_break] = 40,
    },
    [342] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 810,
        [anon_sym_end] = 812,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_until] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [343] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [ts_builtin_sym_end] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [sym_comment] = 40,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [344] = {
        [anon_sym_end] = 814,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [345] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [ts_builtin_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [sym_comment] = 40,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [346] = {
        [sym__terminator] = 570,
        [aux_sym_program_repeat1] = 570,
        [ts_builtin_sym_end] = 570,
        [anon_sym_if] = 570,
        [anon_sym_while] = 570,
        [anon_sym_unless] = 570,
        [anon_sym_until] = 570,
        [sym_comment] = 40,
        [sym__line_break] = 570,
        [anon_sym_SEMI] = 570,
    },
    [347] = {
        [anon_sym_end] = 812,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [348] = {
        [sym__statement] = 816,
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
    [349] = {
        [ts_builtin_sym_end] = 818,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [350] = {
        [sym__expression] = 786,
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
    [351] = {
        [sym__terminator] = 44,
        [aux_sym_program_repeat1] = 820,
        [ts_builtin_sym_end] = 300,
        [anon_sym_if] = 50,
        [anon_sym_while] = 50,
        [anon_sym_unless] = 50,
        [anon_sym_until] = 50,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [352] = {
        [ts_builtin_sym_end] = 302,
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
    [44] = {.count = 1}, SHIFT(348, 0),
    [46] = {.count = 1}, SHIFT(349, 0),
    [48] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [50] = {.count = 1}, SHIFT(350, 0),
    [52] = {.count = 1}, SHIFT(73, 0),
    [54] = {.count = 1}, SHIFT(74, 0),
    [56] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [58] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [60] = {.count = 1}, SHIFT(339, 0),
    [62] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [68] = {.count = 1}, SHIFT(331, 0),
    [70] = {.count = 1}, SHIFT(332, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, SHIFT(330, 0),
    [76] = {.count = 1}, SHIFT(329, 0),
    [78] = {.count = 1}, SHIFT(327, 0),
    [80] = {.count = 1}, SHIFT(154, 0),
    [82] = {.count = 1}, SHIFT(309, 0),
    [84] = {.count = 1}, SHIFT(113, 0),
    [86] = {.count = 1}, SHIFT(304, 0),
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
    [108] = {.count = 1}, SHIFT(305, 0),
    [110] = {.count = 1}, SHIFT(41, 0),
    [112] = {.count = 1}, SHIFT(42, 0),
    [114] = {.count = 1}, SHIFT(43, 0),
    [116] = {.count = 1}, SHIFT(44, 0),
    [118] = {.count = 1}, SHIFT(285, 0),
    [120] = {.count = 1}, SHIFT(284, 0),
    [122] = {.count = 1}, SHIFT(277, 0),
    [124] = {.count = 1}, SHIFT(19, 0),
    [126] = {.count = 1}, SHIFT(20, 0),
    [128] = {.count = 1}, SHIFT(21, 0),
    [130] = {.count = 1}, SHIFT(22, 0),
    [132] = {.count = 1}, SHIFT(23, 0),
    [134] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [136] = {.count = 1}, SHIFT(24, 0),
    [138] = {.count = 1}, SHIFT(25, 0),
    [140] = {.count = 1}, SHIFT(26, 0),
    [142] = {.count = 1}, SHIFT(27, 0),
    [144] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [146] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [148] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [150] = {.count = 1}, SHIFT(273, 0),
    [152] = {.count = 1}, SHIFT(274, 0),
    [154] = {.count = 1}, SHIFT(265, 0),
    [156] = {.count = 1}, SHIFT(266, 0),
    [158] = {.count = 1}, SHIFT(29, 0),
    [160] = {.count = 1}, SHIFT(40, 0),
    [162] = {.count = 1}, SHIFT(28, 0),
    [164] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [166] = {.count = 1}, SHIFT(104, 0),
    [168] = {.count = 1}, SHIFT(262, 0),
    [170] = {.count = 1}, SHIFT(106, 0),
    [172] = {.count = 1}, SHIFT(263, 0),
    [174] = {.count = 1}, SHIFT(253, 0),
    [176] = {.count = 1}, SHIFT(245, 0),
    [178] = {.count = 1}, SHIFT(246, 0),
    [180] = {.count = 1}, SHIFT(244, 0),
    [182] = {.count = 1}, SHIFT(243, 0),
    [184] = {.count = 1}, SHIFT(242, 0),
    [186] = {.count = 1}, SHIFT(224, 0),
    [188] = {.count = 1}, SHIFT(219, 0),
    [190] = {.count = 1}, SHIFT(220, 0),
    [192] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [194] = {.count = 1}, SHIFT(200, 0),
    [196] = {.count = 1}, SHIFT(199, 0),
    [198] = {.count = 1}, SHIFT(45, 0),
    [200] = {.count = 1}, SHIFT(46, 0),
    [202] = {.count = 1}, SHIFT(47, 0),
    [204] = {.count = 1}, SHIFT(48, 0),
    [206] = {.count = 1}, SHIFT(49, 0),
    [208] = {.count = 1}, SHIFT(50, 0),
    [210] = {.count = 1}, SHIFT(51, 0),
    [212] = {.count = 1}, SHIFT(52, 0),
    [214] = {.count = 1}, SHIFT(53, 0),
    [216] = {.count = 1}, SHIFT(54, 0),
    [218] = {.count = 1}, SHIFT(55, 0),
    [220] = {.count = 1}, SHIFT(56, 0),
    [222] = {.count = 1}, SHIFT(57, 0),
    [224] = {.count = 1}, SHIFT(58, 0),
    [226] = {.count = 1}, SHIFT(59, 0),
    [228] = {.count = 1}, SHIFT(60, 0),
    [230] = {.count = 1}, SHIFT(61, 0),
    [232] = {.count = 1}, SHIFT(62, 0),
    [234] = {.count = 1}, SHIFT(63, 0),
    [236] = {.count = 1}, SHIFT(64, 0),
    [238] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [240] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [242] = {.count = 1}, SHIFT(69, 0),
    [244] = {.count = 1}, SHIFT(196, 0),
    [246] = {.count = 1}, SHIFT(197, 0),
    [248] = {.count = 1}, SHIFT(72, 0),
    [250] = {.count = 1}, SHIFT(187, 0),
    [252] = {.count = 1}, SHIFT(157, 0),
    [254] = {.count = 1}, SHIFT(158, 0),
    [256] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [258] = {.count = 1}, SHIFT(156, 0),
    [260] = {.count = 1}, SHIFT(155, 0),
    [262] = {.count = 1}, SHIFT(153, 0),
    [264] = {.count = 1}, SHIFT(112, 0),
    [266] = {.count = 1}, SHIFT(102, 0),
    [268] = {.count = 1}, SHIFT(103, 0),
    [270] = {.count = 1}, SHIFT(80, 0),
    [272] = {.count = 1}, SHIFT(79, 0),
    [274] = {.count = 1}, SHIFT(65, 0),
    [276] = {.count = 1}, SHIFT(66, 0),
    [278] = {.count = 1}, SHIFT(67, 0),
    [280] = {.count = 1}, SHIFT(68, 0),
    [282] = {.count = 1}, SHIFT(70, 0),
    [284] = {.count = 1}, SHIFT(71, 0),
    [286] = {.count = 1}, SHIFT(77, 0),
    [288] = {.count = 1}, SHIFT(76, 0),
    [290] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [292] = {.count = 1}, SHIFT(75, 0),
    [294] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [296] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [298] = {.count = 1}, SHIFT(78, 0),
    [300] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [302] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [304] = {.count = 1}, SHIFT(81, 0),
    [306] = {.count = 1}, SHIFT(82, 0),
    [308] = {.count = 1}, SHIFT(98, 0),
    [310] = {.count = 1}, SHIFT(99, 0),
    [312] = {.count = 1}, SHIFT(83, 0),
    [314] = {.count = 1}, SHIFT(84, 0),
    [316] = {.count = 1}, SHIFT(85, 0),
    [318] = {.count = 1}, SHIFT(86, 0),
    [320] = {.count = 1}, SHIFT(95, 0),
    [322] = {.count = 1}, SHIFT(96, 0),
    [324] = {.count = 1}, SHIFT(89, 0),
    [326] = {.count = 1}, SHIFT(87, 0),
    [328] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [330] = {.count = 1}, SHIFT(88, 0),
    [332] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [334] = {.count = 1}, SHIFT(90, 0),
    [336] = {.count = 1}, SHIFT(91, 0),
    [338] = {.count = 1}, SHIFT(92, 0),
    [340] = {.count = 1}, SHIFT(93, 0),
    [342] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [344] = {.count = 1}, SHIFT(94, 0),
    [346] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [348] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [350] = {.count = 1}, SHIFT(97, 0),
    [352] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [354] = {.count = 1}, SHIFT(100, 0),
    [356] = {.count = 1}, SHIFT(101, 0),
    [358] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [360] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [362] = {.count = 1}, SHIFT(105, 0),
    [364] = {.count = 1}, SHIFT(107, 0),
    [366] = {.count = 1}, SHIFT(110, 0),
    [368] = {.count = 1}, SHIFT(109, 0),
    [370] = {.count = 1}, SHIFT(108, 0),
    [372] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [374] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [376] = {.count = 1}, SHIFT(111, 0),
    [378] = {.count = 1}, SHIFT(114, 0),
    [380] = {.count = 1}, SHIFT(115, 0),
    [382] = {.count = 1}, SHIFT(116, 0),
    [384] = {.count = 1}, SHIFT(117, 0),
    [386] = {.count = 1}, SHIFT(118, 0),
    [388] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [390] = {.count = 1}, SHIFT(129, 0),
    [392] = {.count = 1}, SHIFT(150, 0),
    [394] = {.count = 1}, SHIFT(151, 0),
    [396] = {.count = 1}, SHIFT(128, 0),
    [398] = {.count = 1}, SHIFT(130, 0),
    [400] = {.count = 1}, SHIFT(131, 0),
    [402] = {.count = 1}, SHIFT(126, 0),
    [404] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [406] = {.count = 1}, SHIFT(119, 0),
    [408] = {.count = 1}, SHIFT(120, 0),
    [410] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [412] = {.count = 1}, SHIFT(121, 0),
    [414] = {.count = 1}, SHIFT(122, 0),
    [416] = {.count = 1}, SHIFT(124, 0),
    [418] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [420] = {.count = 1}, SHIFT(123, 0),
    [422] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [424] = {.count = 1}, SHIFT(125, 0),
    [426] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [428] = {.count = 1}, SHIFT(127, 0),
    [430] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [432] = {.count = 1}, SHIFT(146, 0),
    [434] = {.count = 1}, SHIFT(141, 0),
    [436] = {.count = 1}, SHIFT(142, 0),
    [438] = {.count = 1}, SHIFT(139, 0),
    [440] = {.count = 1}, SHIFT(132, 0),
    [442] = {.count = 1}, SHIFT(133, 0),
    [444] = {.count = 1}, SHIFT(134, 0),
    [446] = {.count = 1}, SHIFT(135, 0),
    [448] = {.count = 1}, SHIFT(137, 0),
    [450] = {.count = 1}, SHIFT(136, 0),
    [452] = {.count = 1}, SHIFT(138, 0),
    [454] = {.count = 1}, SHIFT(140, 0),
    [456] = {.count = 1}, SHIFT(143, 0),
    [458] = {.count = 1}, SHIFT(144, 0),
    [460] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [462] = {.count = 1}, SHIFT(145, 0),
    [464] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [466] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [468] = {.count = 1}, SHIFT(147, 0),
    [470] = {.count = 1}, SHIFT(148, 0),
    [472] = {.count = 1}, SHIFT(149, 0),
    [474] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [476] = {.count = 1}, SHIFT(152, 0),
    [478] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [480] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [482] = {.count = 1}, SHIFT(186, 0),
    [484] = {.count = 1}, SHIFT(159, 0),
    [486] = {.count = 1}, SHIFT(160, 0),
    [488] = {.count = 1}, SHIFT(161, 0),
    [490] = {.count = 1}, SHIFT(162, 0),
    [492] = {.count = 1}, SHIFT(163, 0),
    [494] = {.count = 1}, SHIFT(164, 0),
    [496] = {.count = 1}, SHIFT(165, 0),
    [498] = {.count = 1}, SHIFT(183, 0),
    [500] = {.count = 1}, SHIFT(177, 0),
    [502] = {.count = 1}, SHIFT(184, 0),
    [504] = {.count = 1}, SHIFT(172, 0),
    [506] = {.count = 1}, SHIFT(173, 0),
    [508] = {.count = 1}, SHIFT(167, 0),
    [510] = {.count = 1}, SHIFT(168, 0),
    [512] = {.count = 1}, SHIFT(166, 0),
    [514] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [516] = {.count = 1}, SHIFT(169, 0),
    [518] = {.count = 1}, SHIFT(170, 0),
    [520] = {.count = 1}, SHIFT(171, 0),
    [522] = {.count = 1}, SHIFT(182, 0),
    [524] = {.count = 1}, SHIFT(174, 0),
    [526] = {.count = 1}, SHIFT(175, 0),
    [528] = {.count = 1}, SHIFT(176, 0),
    [530] = {.count = 1}, SHIFT(178, 0),
    [532] = {.count = 1}, SHIFT(181, 0),
    [534] = {.count = 1}, SHIFT(179, 0),
    [536] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [538] = {.count = 1}, SHIFT(180, 0),
    [540] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [542] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [544] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [546] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [548] = {.count = 1}, SHIFT(185, 0),
    [550] = {.count = 1}, SHIFT(188, 0),
    [552] = {.count = 1}, SHIFT(189, 0),
    [554] = {.count = 1}, SHIFT(195, 0),
    [556] = {.count = 1}, SHIFT(191, 0),
    [558] = {.count = 1}, SHIFT(190, 0),
    [560] = {.count = 1}, SHIFT(192, 0),
    [562] = {.count = 1}, SHIFT(193, 0),
    [564] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [566] = {.count = 1}, SHIFT(194, 0),
    [568] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [570] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [572] = {.count = 1}, SHIFT(198, 0),
    [574] = {.count = 1}, SHIFT(201, 0),
    [576] = {.count = 1}, SHIFT(202, 0),
    [578] = {.count = 1}, SHIFT(215, 0),
    [580] = {.count = 1}, SHIFT(216, 0),
    [582] = {.count = 1}, SHIFT(203, 0),
    [584] = {.count = 1}, SHIFT(204, 0),
    [586] = {.count = 1}, SHIFT(205, 0),
    [588] = {.count = 1}, SHIFT(212, 0),
    [590] = {.count = 1}, SHIFT(213, 0),
    [592] = {.count = 1}, SHIFT(206, 0),
    [594] = {.count = 1}, SHIFT(207, 0),
    [596] = {.count = 1}, SHIFT(208, 0),
    [598] = {.count = 1}, SHIFT(209, 0),
    [600] = {.count = 1}, SHIFT(210, 0),
    [602] = {.count = 1}, SHIFT(211, 0),
    [604] = {.count = 1}, SHIFT(214, 0),
    [606] = {.count = 1}, SHIFT(217, 0),
    [608] = {.count = 1}, SHIFT(218, 0),
    [610] = {.count = 1}, SHIFT(221, 0),
    [612] = {.count = 1}, SHIFT(222, 0),
    [614] = {.count = 1}, SHIFT(223, 0),
    [616] = {.count = 1}, SHIFT(225, 0),
    [618] = {.count = 1}, SHIFT(226, 0),
    [620] = {.count = 1}, SHIFT(227, 0),
    [622] = {.count = 1}, SHIFT(229, 0),
    [624] = {.count = 1}, SHIFT(239, 0),
    [626] = {.count = 1}, SHIFT(240, 0),
    [628] = {.count = 1}, SHIFT(228, 0),
    [630] = {.count = 1}, SHIFT(235, 0),
    [632] = {.count = 1}, SHIFT(230, 0),
    [634] = {.count = 1}, SHIFT(231, 0),
    [636] = {.count = 1}, SHIFT(232, 0),
    [638] = {.count = 1}, SHIFT(233, 0),
    [640] = {.count = 1}, SHIFT(234, 0),
    [642] = {.count = 1}, SHIFT(236, 0),
    [644] = {.count = 1}, SHIFT(237, 0),
    [646] = {.count = 1}, SHIFT(238, 0),
    [648] = {.count = 1}, SHIFT(241, 0),
    [650] = {.count = 1}, SHIFT(252, 0),
    [652] = {.count = 1}, SHIFT(247, 0),
    [654] = {.count = 1}, SHIFT(248, 0),
    [656] = {.count = 1}, SHIFT(249, 0),
    [658] = {.count = 1}, SHIFT(250, 0),
    [660] = {.count = 1}, SHIFT(251, 0),
    [662] = {.count = 1}, SHIFT(254, 0),
    [664] = {.count = 1}, SHIFT(255, 0),
    [666] = {.count = 1}, SHIFT(261, 0),
    [668] = {.count = 1}, SHIFT(257, 0),
    [670] = {.count = 1}, SHIFT(256, 0),
    [672] = {.count = 1}, SHIFT(258, 0),
    [674] = {.count = 1}, SHIFT(259, 0),
    [676] = {.count = 1}, SHIFT(260, 0),
    [678] = {.count = 1}, SHIFT(264, 0),
    [680] = {.count = 1}, SHIFT(272, 0),
    [682] = {.count = 1}, SHIFT(267, 0),
    [684] = {.count = 1}, SHIFT(268, 0),
    [686] = {.count = 1}, SHIFT(269, 0),
    [688] = {.count = 1}, SHIFT(270, 0),
    [690] = {.count = 1}, SHIFT(271, 0),
    [692] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [694] = {.count = 1}, SHIFT(275, 0),
    [696] = {.count = 1}, SHIFT(276, 0),
    [698] = {.count = 1}, SHIFT(278, 0),
    [700] = {.count = 1}, SHIFT(279, 0),
    [702] = {.count = 1}, SHIFT(280, 0),
    [704] = {.count = 1}, SHIFT(281, 0),
    [706] = {.count = 1}, SHIFT(282, 0),
    [708] = {.count = 1}, SHIFT(283, 0),
    [710] = {.count = 1}, SHIFT(286, 0),
    [712] = {.count = 1}, SHIFT(287, 0),
    [714] = {.count = 1}, SHIFT(300, 0),
    [716] = {.count = 1}, SHIFT(301, 0),
    [718] = {.count = 1}, SHIFT(288, 0),
    [720] = {.count = 1}, SHIFT(289, 0),
    [722] = {.count = 1}, SHIFT(290, 0),
    [724] = {.count = 1}, SHIFT(297, 0),
    [726] = {.count = 1}, SHIFT(298, 0),
    [728] = {.count = 1}, SHIFT(291, 0),
    [730] = {.count = 1}, SHIFT(292, 0),
    [732] = {.count = 1}, SHIFT(293, 0),
    [734] = {.count = 1}, SHIFT(294, 0),
    [736] = {.count = 1}, SHIFT(295, 0),
    [738] = {.count = 1}, SHIFT(296, 0),
    [740] = {.count = 1}, SHIFT(299, 0),
    [742] = {.count = 1}, SHIFT(302, 0),
    [744] = {.count = 1}, SHIFT(303, 0),
    [746] = {.count = 1}, SHIFT(306, 0),
    [748] = {.count = 1}, SHIFT(307, 0),
    [750] = {.count = 1}, SHIFT(308, 0),
    [752] = {.count = 1}, SHIFT(310, 0),
    [754] = {.count = 1}, SHIFT(311, 0),
    [756] = {.count = 1}, SHIFT(312, 0),
    [758] = {.count = 1}, SHIFT(314, 0),
    [760] = {.count = 1}, SHIFT(324, 0),
    [762] = {.count = 1}, SHIFT(325, 0),
    [764] = {.count = 1}, SHIFT(313, 0),
    [766] = {.count = 1}, SHIFT(320, 0),
    [768] = {.count = 1}, SHIFT(315, 0),
    [770] = {.count = 1}, SHIFT(316, 0),
    [772] = {.count = 1}, SHIFT(317, 0),
    [774] = {.count = 1}, SHIFT(318, 0),
    [776] = {.count = 1}, SHIFT(319, 0),
    [778] = {.count = 1}, SHIFT(321, 0),
    [780] = {.count = 1}, SHIFT(322, 0),
    [782] = {.count = 1}, SHIFT(323, 0),
    [784] = {.count = 1}, SHIFT(326, 0),
    [786] = {.count = 1}, SHIFT(328, 0),
    [788] = {.count = 1}, SHIFT(338, 0),
    [790] = {.count = 1}, SHIFT(333, 0),
    [792] = {.count = 1}, SHIFT(334, 0),
    [794] = {.count = 1}, SHIFT(335, 0),
    [796] = {.count = 1}, SHIFT(336, 0),
    [798] = {.count = 1}, SHIFT(337, 0),
    [800] = {.count = 1}, SHIFT(340, 0),
    [802] = {.count = 1}, SHIFT(341, 0),
    [804] = {.count = 1}, SHIFT(347, 0),
    [806] = {.count = 1}, SHIFT(343, 0),
    [808] = {.count = 1}, SHIFT(342, 0),
    [810] = {.count = 1}, SHIFT(344, 0),
    [812] = {.count = 1}, SHIFT(345, 0),
    [814] = {.count = 1}, SHIFT(346, 0),
    [816] = {.count = 1}, SHIFT(351, 0),
    [818] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [820] = {.count = 1}, SHIFT(352, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
