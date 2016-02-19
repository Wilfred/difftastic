#include "tree_sitter/parser.h"

#define STATE_COUNT 275
#define SYMBOL_COUNT 71

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
            if (lookahead == '^')
                ADVANCE(60);
            if (lookahead == 'a')
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(71);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(109);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '~')
                ADVANCE(115);
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
            LEX_ERROR();
        case 58:
            if (lookahead == '=')
                ADVANCE(59);
            ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
        case 59:
            ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
        case 60:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_alias);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_class);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(72);
            if (lookahead == 'o')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_def);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_do);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_end);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(90);
            if (lookahead == 'u')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(92);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_self);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(95);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(96);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(98);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(102);
            if (lookahead == 't')
                ADVANCE(106);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(100);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(101);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(107);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(110);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(111);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(112);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(113);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 114:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 115:
            ACCEPT_TOKEN(anon_sym_TILDE);
        case 116:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(117);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
            LEX_ERROR();
        case 117:
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
                ADVANCE(72);
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
                ADVANCE(99);
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
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
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
                ADVANCE(57);
            if (lookahead == '^')
                ADVANCE(60);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '~')
                ADVANCE(115);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(117);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
            LEX_ERROR();
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
            if (lookahead == '(')
                ADVANCE(8);
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
                ADVANCE(147);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            LEX_ERROR();
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'd')
                ADVANCE(141);
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
            if (lookahead == '(')
                ADVANCE(8);
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
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(117);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(153);
            if (lookahead == 'i')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            if (lookahead == 'w')
                ADVANCE(135);
            LEX_ERROR();
        case 153:
            if (lookahead == 'n')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'd')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            ACCEPT_TOKEN(anon_sym_end);
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
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(153);
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
                ADVANCE(117);
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
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 159:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(117);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(109);
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
                ADVANCE(117);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
            LEX_ERROR();
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
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
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(165);
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
        case 165:
            ACCEPT_TOKEN(anon_sym_STAR);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(165);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(118);
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
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(165);
            if (lookahead == ':')
                ADVANCE(117);
            if (lookahead == ';')
                ADVANCE(33);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(165);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(117);
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
                ADVANCE(61);
            if (lookahead == 'c')
                ADVANCE(66);
            if (lookahead == 'd')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(120);
            if (lookahead == '|')
                ADVANCE(114);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
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
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(158);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 116,
    [1] = 122,
    [2] = 123,
    [3] = 123,
    [4] = 123,
    [5] = 140,
    [6] = 140,
    [7] = 123,
    [8] = 123,
    [9] = 123,
    [10] = 143,
    [11] = 143,
    [12] = 143,
    [13] = 144,
    [14] = 145,
    [15] = 145,
    [16] = 146,
    [17] = 123,
    [18] = 140,
    [19] = 140,
    [20] = 148,
    [21] = 148,
    [22] = 148,
    [23] = 144,
    [24] = 149,
    [25] = 148,
    [26] = 150,
    [27] = 150,
    [28] = 150,
    [29] = 140,
    [30] = 150,
    [31] = 150,
    [32] = 150,
    [33] = 143,
    [34] = 143,
    [35] = 143,
    [36] = 144,
    [37] = 145,
    [38] = 145,
    [39] = 150,
    [40] = 151,
    [41] = 152,
    [42] = 152,
    [43] = 152,
    [44] = 140,
    [45] = 152,
    [46] = 152,
    [47] = 152,
    [48] = 150,
    [49] = 143,
    [50] = 143,
    [51] = 143,
    [52] = 144,
    [53] = 145,
    [54] = 145,
    [55] = 152,
    [56] = 151,
    [57] = 152,
    [58] = 152,
    [59] = 144,
    [60] = 156,
    [61] = 152,
    [62] = 157,
    [63] = 159,
    [64] = 144,
    [65] = 152,
    [66] = 152,
    [67] = 152,
    [68] = 156,
    [69] = 160,
    [70] = 152,
    [71] = 152,
    [72] = 145,
    [73] = 162,
    [74] = 152,
    [75] = 151,
    [76] = 152,
    [77] = 145,
    [78] = 162,
    [79] = 151,
    [80] = 152,
    [81] = 152,
    [82] = 156,
    [83] = 152,
    [84] = 152,
    [85] = 156,
    [86] = 156,
    [87] = 152,
    [88] = 150,
    [89] = 144,
    [90] = 163,
    [91] = 157,
    [92] = 152,
    [93] = 150,
    [94] = 152,
    [95] = 150,
    [96] = 163,
    [97] = 164,
    [98] = 164,
    [99] = 166,
    [100] = 151,
    [101] = 167,
    [102] = 145,
    [103] = 168,
    [104] = 169,
    [105] = 151,
    [106] = 166,
    [107] = 170,
    [108] = 145,
    [109] = 168,
    [110] = 166,
    [111] = 168,
    [112] = 166,
    [113] = 168,
    [114] = 166,
    [115] = 163,
    [116] = 151,
    [117] = 145,
    [118] = 171,
    [119] = 163,
    [120] = 170,
    [121] = 145,
    [122] = 171,
    [123] = 163,
    [124] = 171,
    [125] = 163,
    [126] = 171,
    [127] = 163,
    [128] = 152,
    [129] = 152,
    [130] = 156,
    [131] = 152,
    [132] = 152,
    [133] = 151,
    [134] = 152,
    [135] = 156,
    [136] = 152,
    [137] = 152,
    [138] = 152,
    [139] = 156,
    [140] = 143,
    [141] = 143,
    [142] = 152,
    [143] = 152,
    [144] = 172,
    [145] = 152,
    [146] = 151,
    [147] = 152,
    [148] = 152,
    [149] = 156,
    [150] = 152,
    [151] = 152,
    [152] = 156,
    [153] = 156,
    [154] = 150,
    [155] = 150,
    [156] = 160,
    [157] = 152,
    [158] = 150,
    [159] = 145,
    [160] = 162,
    [161] = 152,
    [162] = 151,
    [163] = 150,
    [164] = 152,
    [165] = 150,
    [166] = 156,
    [167] = 150,
    [168] = 150,
    [169] = 156,
    [170] = 156,
    [171] = 150,
    [172] = 150,
    [173] = 163,
    [174] = 150,
    [175] = 150,
    [176] = 164,
    [177] = 166,
    [178] = 151,
    [179] = 167,
    [180] = 163,
    [181] = 151,
    [182] = 152,
    [183] = 150,
    [184] = 156,
    [185] = 150,
    [186] = 150,
    [187] = 151,
    [188] = 152,
    [189] = 156,
    [190] = 150,
    [191] = 152,
    [192] = 150,
    [193] = 156,
    [194] = 143,
    [195] = 150,
    [196] = 150,
    [197] = 172,
    [198] = 152,
    [199] = 151,
    [200] = 152,
    [201] = 150,
    [202] = 156,
    [203] = 150,
    [204] = 150,
    [205] = 156,
    [206] = 163,
    [207] = 148,
    [208] = 148,
    [209] = 140,
    [210] = 173,
    [211] = 148,
    [212] = 140,
    [213] = 151,
    [214] = 152,
    [215] = 123,
    [216] = 156,
    [217] = 123,
    [218] = 123,
    [219] = 160,
    [220] = 152,
    [221] = 123,
    [222] = 145,
    [223] = 162,
    [224] = 152,
    [225] = 151,
    [226] = 123,
    [227] = 152,
    [228] = 123,
    [229] = 156,
    [230] = 123,
    [231] = 123,
    [232] = 156,
    [233] = 156,
    [234] = 123,
    [235] = 150,
    [236] = 163,
    [237] = 123,
    [238] = 123,
    [239] = 164,
    [240] = 166,
    [241] = 151,
    [242] = 167,
    [243] = 163,
    [244] = 151,
    [245] = 152,
    [246] = 123,
    [247] = 156,
    [248] = 123,
    [249] = 123,
    [250] = 151,
    [251] = 152,
    [252] = 156,
    [253] = 123,
    [254] = 152,
    [255] = 123,
    [256] = 156,
    [257] = 143,
    [258] = 123,
    [259] = 123,
    [260] = 123,
    [261] = 172,
    [262] = 152,
    [263] = 151,
    [264] = 152,
    [265] = 123,
    [266] = 156,
    [267] = 123,
    [268] = 123,
    [269] = 156,
    [270] = 144,
    [271] = 122,
    [272] = 157,
    [273] = 123,
    [274] = 122,
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
        [sym__variable] = 18,
        [ts_builtin_sym_end] = 20,
        [anon_sym_undef] = 22,
        [anon_sym_alias] = 24,
        [anon_sym_def] = 26,
        [anon_sym_LPAREN] = 28,
        [anon_sym_class] = 30,
        [anon_sym_module] = 32,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 36,
        [anon_sym_self] = 36,
        [sym_identifier] = 36,
        [sym_comment] = 38,
        [sym_symbol] = 14,
        [sym__line_break] = 38,
    },
    [1] = {
        [ts_builtin_sym_end] = 40,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [2] = {
        [sym__terminator] = 42,
        [aux_sym_program_repeat1] = 44,
        [ts_builtin_sym_end] = 46,
        [anon_sym_if] = 48,
        [anon_sym_while] = 48,
        [anon_sym_unless] = 48,
        [anon_sym_until] = 48,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [3] = {
        [sym__terminator] = 54,
        [aux_sym_program_repeat1] = 54,
        [ts_builtin_sym_end] = 54,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 38,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 54,
    },
    [4] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 56,
        [ts_builtin_sym_end] = 56,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [sym_comment] = 38,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [5] = {
        [anon_sym_do] = 58,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [6] = {
        [anon_sym_do] = 60,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [7] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [ts_builtin_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 38,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [8] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [9] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [ts_builtin_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [10] = {
        [sym__function_name] = 68,
        [anon_sym_PIPE] = 70,
        [anon_sym_STAR] = 70,
        [anon_sym_AMP] = 70,
        [anon_sym_LT] = 70,
        [sym_identifier] = 70,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 70,
        [anon_sym_CARET] = 70,
        [anon_sym_LT_EQ_GT] = 70,
        [anon_sym_EQ_EQ] = 70,
        [anon_sym_EQ_EQ_EQ] = 70,
        [anon_sym_EQ_TILDE] = 70,
        [anon_sym_GT] = 70,
        [anon_sym_GT_EQ] = 70,
        [anon_sym_LT_EQ] = 70,
        [anon_sym_PLUS] = 70,
        [anon_sym_DASH] = 70,
        [anon_sym_SLASH] = 70,
        [anon_sym_PERCENT] = 70,
        [anon_sym_STAR_STAR] = 70,
        [anon_sym_LT_LT] = 70,
        [anon_sym_GT_GT] = 70,
        [anon_sym_TILDE] = 70,
        [anon_sym_PLUS_AT] = 70,
        [anon_sym_DASH_AT] = 70,
        [anon_sym_LBRACK_RBRACK] = 70,
        [anon_sym_LBRACK_RBRACK_EQ] = 70,
        [sym__line_break] = 38,
    },
    [11] = {
        [sym__function_name] = 72,
        [anon_sym_PIPE] = 74,
        [anon_sym_STAR] = 74,
        [anon_sym_AMP] = 74,
        [anon_sym_LT] = 74,
        [sym_identifier] = 74,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 74,
        [anon_sym_CARET] = 74,
        [anon_sym_LT_EQ_GT] = 74,
        [anon_sym_EQ_EQ] = 74,
        [anon_sym_EQ_EQ_EQ] = 74,
        [anon_sym_EQ_TILDE] = 74,
        [anon_sym_GT] = 74,
        [anon_sym_GT_EQ] = 74,
        [anon_sym_LT_EQ] = 74,
        [anon_sym_PLUS] = 74,
        [anon_sym_DASH] = 74,
        [anon_sym_SLASH] = 74,
        [anon_sym_PERCENT] = 74,
        [anon_sym_STAR_STAR] = 74,
        [anon_sym_LT_LT] = 74,
        [anon_sym_GT_GT] = 74,
        [anon_sym_TILDE] = 74,
        [anon_sym_PLUS_AT] = 74,
        [anon_sym_DASH_AT] = 74,
        [anon_sym_LBRACK_RBRACK] = 74,
        [anon_sym_LBRACK_RBRACK_EQ] = 74,
        [sym__line_break] = 38,
    },
    [12] = {
        [sym__function_name] = 76,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 78,
        [anon_sym_CARET] = 78,
        [anon_sym_LT_EQ_GT] = 78,
        [anon_sym_EQ_EQ] = 78,
        [anon_sym_EQ_EQ_EQ] = 78,
        [anon_sym_EQ_TILDE] = 78,
        [anon_sym_GT] = 78,
        [anon_sym_GT_EQ] = 78,
        [anon_sym_LT_EQ] = 78,
        [anon_sym_PLUS] = 78,
        [anon_sym_DASH] = 78,
        [anon_sym_SLASH] = 78,
        [anon_sym_PERCENT] = 78,
        [anon_sym_STAR_STAR] = 78,
        [anon_sym_LT_LT] = 78,
        [anon_sym_GT_GT] = 78,
        [anon_sym_TILDE] = 78,
        [anon_sym_PLUS_AT] = 78,
        [anon_sym_DASH_AT] = 78,
        [anon_sym_LBRACK_RBRACK] = 78,
        [anon_sym_LBRACK_RBRACK_EQ] = 78,
        [sym__line_break] = 38,
    },
    [13] = {
        [sym__statement] = 80,
        [sym__declaration] = 82,
        [sym_method_declaration] = 84,
        [sym_class_declaration] = 84,
        [sym_module_declaration] = 84,
        [sym__call] = 86,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 82,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym__variable] = 92,
        [anon_sym_undef] = 94,
        [anon_sym_alias] = 96,
        [anon_sym_def] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_class] = 102,
        [anon_sym_module] = 104,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 38,
        [sym_symbol] = 88,
        [sym__line_break] = 38,
    },
    [14] = {
        [sym_identifier] = 108,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [15] = {
        [sym_identifier] = 110,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [16] = {
        [sym__call_arguments] = 112,
        [sym__command] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [anon_sym_do] = 122,
        [anon_sym_LPAREN] = 124,
        [anon_sym_super] = 126,
        [anon_sym_nil] = 128,
        [anon_sym_self] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [17] = {
        [sym__terminator] = 130,
        [aux_sym_program_repeat1] = 130,
        [ts_builtin_sym_end] = 130,
        [anon_sym_if] = 130,
        [anon_sym_while] = 130,
        [anon_sym_unless] = 130,
        [anon_sym_until] = 130,
        [sym_comment] = 38,
        [sym__line_break] = 130,
        [anon_sym_SEMI] = 130,
    },
    [18] = {
        [anon_sym_do] = 132,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [19] = {
        [anon_sym_do] = 134,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [20] = {
        [aux_sym__call_arguments_repeat1] = 136,
        [anon_sym_do] = 134,
        [anon_sym_COMMA] = 138,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [21] = {
        [aux_sym__call_arguments_repeat1] = 64,
        [anon_sym_do] = 64,
        [anon_sym_COMMA] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [22] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [23] = {
        [sym__statement] = 140,
        [sym__declaration] = 82,
        [sym_method_declaration] = 84,
        [sym_class_declaration] = 84,
        [sym_module_declaration] = 84,
        [sym__call] = 86,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 82,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym__variable] = 92,
        [anon_sym_undef] = 94,
        [anon_sym_alias] = 96,
        [anon_sym_def] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_class] = 102,
        [anon_sym_module] = 104,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 38,
        [sym_symbol] = 88,
        [sym__line_break] = 38,
    },
    [24] = {
        [sym__call_arguments] = 112,
        [sym__command] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 124,
        [anon_sym_super] = 126,
        [anon_sym_nil] = 128,
        [anon_sym_self] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 130,
        [anon_sym_do] = 130,
        [anon_sym_COMMA] = 130,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [26] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 144,
        [anon_sym_if] = 146,
        [anon_sym_while] = 146,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 146,
        [anon_sym_RPAREN] = 148,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [27] = {
        [sym__terminator] = 54,
        [aux_sym_program_repeat1] = 54,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [anon_sym_RPAREN] = 54,
        [sym_comment] = 38,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 54,
    },
    [28] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 56,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [anon_sym_RPAREN] = 56,
        [sym_comment] = 38,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [29] = {
        [anon_sym_do] = 150,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [30] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [anon_sym_RPAREN] = 62,
        [sym_comment] = 38,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [31] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_RPAREN] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [32] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_RPAREN] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [33] = {
        [sym__function_name] = 152,
        [anon_sym_PIPE] = 154,
        [anon_sym_STAR] = 154,
        [anon_sym_AMP] = 154,
        [anon_sym_LT] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 154,
        [anon_sym_CARET] = 154,
        [anon_sym_LT_EQ_GT] = 154,
        [anon_sym_EQ_EQ] = 154,
        [anon_sym_EQ_EQ_EQ] = 154,
        [anon_sym_EQ_TILDE] = 154,
        [anon_sym_GT] = 154,
        [anon_sym_GT_EQ] = 154,
        [anon_sym_LT_EQ] = 154,
        [anon_sym_PLUS] = 154,
        [anon_sym_DASH] = 154,
        [anon_sym_SLASH] = 154,
        [anon_sym_PERCENT] = 154,
        [anon_sym_STAR_STAR] = 154,
        [anon_sym_LT_LT] = 154,
        [anon_sym_GT_GT] = 154,
        [anon_sym_TILDE] = 154,
        [anon_sym_PLUS_AT] = 154,
        [anon_sym_DASH_AT] = 154,
        [anon_sym_LBRACK_RBRACK] = 154,
        [anon_sym_LBRACK_RBRACK_EQ] = 154,
        [sym__line_break] = 38,
    },
    [34] = {
        [sym__function_name] = 156,
        [anon_sym_PIPE] = 74,
        [anon_sym_STAR] = 74,
        [anon_sym_AMP] = 74,
        [anon_sym_LT] = 74,
        [sym_identifier] = 74,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 74,
        [anon_sym_CARET] = 74,
        [anon_sym_LT_EQ_GT] = 74,
        [anon_sym_EQ_EQ] = 74,
        [anon_sym_EQ_EQ_EQ] = 74,
        [anon_sym_EQ_TILDE] = 74,
        [anon_sym_GT] = 74,
        [anon_sym_GT_EQ] = 74,
        [anon_sym_LT_EQ] = 74,
        [anon_sym_PLUS] = 74,
        [anon_sym_DASH] = 74,
        [anon_sym_SLASH] = 74,
        [anon_sym_PERCENT] = 74,
        [anon_sym_STAR_STAR] = 74,
        [anon_sym_LT_LT] = 74,
        [anon_sym_GT_GT] = 74,
        [anon_sym_TILDE] = 74,
        [anon_sym_PLUS_AT] = 74,
        [anon_sym_DASH_AT] = 74,
        [anon_sym_LBRACK_RBRACK] = 74,
        [anon_sym_LBRACK_RBRACK_EQ] = 74,
        [sym__line_break] = 38,
    },
    [35] = {
        [sym__function_name] = 158,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 78,
        [anon_sym_CARET] = 78,
        [anon_sym_LT_EQ_GT] = 78,
        [anon_sym_EQ_EQ] = 78,
        [anon_sym_EQ_EQ_EQ] = 78,
        [anon_sym_EQ_TILDE] = 78,
        [anon_sym_GT] = 78,
        [anon_sym_GT_EQ] = 78,
        [anon_sym_LT_EQ] = 78,
        [anon_sym_PLUS] = 78,
        [anon_sym_DASH] = 78,
        [anon_sym_SLASH] = 78,
        [anon_sym_PERCENT] = 78,
        [anon_sym_STAR_STAR] = 78,
        [anon_sym_LT_LT] = 78,
        [anon_sym_GT_GT] = 78,
        [anon_sym_TILDE] = 78,
        [anon_sym_PLUS_AT] = 78,
        [anon_sym_DASH_AT] = 78,
        [anon_sym_LBRACK_RBRACK] = 78,
        [anon_sym_LBRACK_RBRACK_EQ] = 78,
        [sym__line_break] = 38,
    },
    [36] = {
        [sym__statement] = 160,
        [sym__declaration] = 82,
        [sym_method_declaration] = 84,
        [sym_class_declaration] = 84,
        [sym_module_declaration] = 84,
        [sym__call] = 86,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 82,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym__variable] = 92,
        [anon_sym_undef] = 94,
        [anon_sym_alias] = 96,
        [anon_sym_def] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_class] = 102,
        [anon_sym_module] = 104,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 38,
        [sym_symbol] = 88,
        [sym__line_break] = 38,
    },
    [37] = {
        [sym_identifier] = 162,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [38] = {
        [sym_identifier] = 164,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [39] = {
        [sym__terminator] = 130,
        [aux_sym_program_repeat1] = 130,
        [anon_sym_if] = 130,
        [anon_sym_while] = 130,
        [anon_sym_unless] = 130,
        [anon_sym_until] = 130,
        [anon_sym_RPAREN] = 130,
        [sym_comment] = 38,
        [sym__line_break] = 130,
        [anon_sym_SEMI] = 130,
    },
    [40] = {
        [sym__statement] = 166,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 180,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [41] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 198,
        [anon_sym_end] = 200,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [42] = {
        [sym__terminator] = 54,
        [aux_sym_program_repeat1] = 54,
        [anon_sym_end] = 54,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 38,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 54,
    },
    [43] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 56,
        [anon_sym_end] = 56,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [sym_comment] = 38,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [44] = {
        [anon_sym_do] = 204,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [45] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 38,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [46] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [47] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [48] = {
        [sym__terminator] = 206,
        [aux_sym_program_repeat1] = 206,
        [anon_sym_if] = 206,
        [anon_sym_while] = 206,
        [anon_sym_unless] = 206,
        [anon_sym_until] = 206,
        [anon_sym_RPAREN] = 206,
        [sym_comment] = 38,
        [sym__line_break] = 206,
        [anon_sym_SEMI] = 206,
    },
    [49] = {
        [sym__function_name] = 208,
        [anon_sym_PIPE] = 210,
        [anon_sym_STAR] = 210,
        [anon_sym_AMP] = 210,
        [anon_sym_LT] = 210,
        [sym_identifier] = 210,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 210,
        [anon_sym_CARET] = 210,
        [anon_sym_LT_EQ_GT] = 210,
        [anon_sym_EQ_EQ] = 210,
        [anon_sym_EQ_EQ_EQ] = 210,
        [anon_sym_EQ_TILDE] = 210,
        [anon_sym_GT] = 210,
        [anon_sym_GT_EQ] = 210,
        [anon_sym_LT_EQ] = 210,
        [anon_sym_PLUS] = 210,
        [anon_sym_DASH] = 210,
        [anon_sym_SLASH] = 210,
        [anon_sym_PERCENT] = 210,
        [anon_sym_STAR_STAR] = 210,
        [anon_sym_LT_LT] = 210,
        [anon_sym_GT_GT] = 210,
        [anon_sym_TILDE] = 210,
        [anon_sym_PLUS_AT] = 210,
        [anon_sym_DASH_AT] = 210,
        [anon_sym_LBRACK_RBRACK] = 210,
        [anon_sym_LBRACK_RBRACK_EQ] = 210,
        [sym__line_break] = 38,
    },
    [50] = {
        [sym__function_name] = 212,
        [anon_sym_PIPE] = 74,
        [anon_sym_STAR] = 74,
        [anon_sym_AMP] = 74,
        [anon_sym_LT] = 74,
        [sym_identifier] = 74,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 74,
        [anon_sym_CARET] = 74,
        [anon_sym_LT_EQ_GT] = 74,
        [anon_sym_EQ_EQ] = 74,
        [anon_sym_EQ_EQ_EQ] = 74,
        [anon_sym_EQ_TILDE] = 74,
        [anon_sym_GT] = 74,
        [anon_sym_GT_EQ] = 74,
        [anon_sym_LT_EQ] = 74,
        [anon_sym_PLUS] = 74,
        [anon_sym_DASH] = 74,
        [anon_sym_SLASH] = 74,
        [anon_sym_PERCENT] = 74,
        [anon_sym_STAR_STAR] = 74,
        [anon_sym_LT_LT] = 74,
        [anon_sym_GT_GT] = 74,
        [anon_sym_TILDE] = 74,
        [anon_sym_PLUS_AT] = 74,
        [anon_sym_DASH_AT] = 74,
        [anon_sym_LBRACK_RBRACK] = 74,
        [anon_sym_LBRACK_RBRACK_EQ] = 74,
        [sym__line_break] = 38,
    },
    [51] = {
        [sym__function_name] = 214,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 78,
        [anon_sym_CARET] = 78,
        [anon_sym_LT_EQ_GT] = 78,
        [anon_sym_EQ_EQ] = 78,
        [anon_sym_EQ_EQ_EQ] = 78,
        [anon_sym_EQ_TILDE] = 78,
        [anon_sym_GT] = 78,
        [anon_sym_GT_EQ] = 78,
        [anon_sym_LT_EQ] = 78,
        [anon_sym_PLUS] = 78,
        [anon_sym_DASH] = 78,
        [anon_sym_SLASH] = 78,
        [anon_sym_PERCENT] = 78,
        [anon_sym_STAR_STAR] = 78,
        [anon_sym_LT_LT] = 78,
        [anon_sym_GT_GT] = 78,
        [anon_sym_TILDE] = 78,
        [anon_sym_PLUS_AT] = 78,
        [anon_sym_DASH_AT] = 78,
        [anon_sym_LBRACK_RBRACK] = 78,
        [anon_sym_LBRACK_RBRACK_EQ] = 78,
        [sym__line_break] = 38,
    },
    [52] = {
        [sym__statement] = 216,
        [sym__declaration] = 82,
        [sym_method_declaration] = 84,
        [sym_class_declaration] = 84,
        [sym_module_declaration] = 84,
        [sym__call] = 86,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 82,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym__variable] = 92,
        [anon_sym_undef] = 94,
        [anon_sym_alias] = 96,
        [anon_sym_def] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_class] = 102,
        [anon_sym_module] = 104,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 38,
        [sym_symbol] = 88,
        [sym__line_break] = 38,
    },
    [53] = {
        [sym_identifier] = 218,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [54] = {
        [sym_identifier] = 220,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [55] = {
        [sym__terminator] = 130,
        [aux_sym_program_repeat1] = 130,
        [anon_sym_end] = 130,
        [anon_sym_if] = 130,
        [anon_sym_while] = 130,
        [anon_sym_unless] = 130,
        [anon_sym_until] = 130,
        [sym_comment] = 38,
        [sym__line_break] = 130,
        [anon_sym_SEMI] = 130,
    },
    [56] = {
        [sym__statement] = 222,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 224,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [57] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 226,
        [anon_sym_end] = 228,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [58] = {
        [sym__terminator] = 206,
        [aux_sym_program_repeat1] = 206,
        [anon_sym_end] = 206,
        [anon_sym_if] = 206,
        [anon_sym_while] = 206,
        [anon_sym_unless] = 206,
        [anon_sym_until] = 206,
        [sym_comment] = 38,
        [sym__line_break] = 206,
        [anon_sym_SEMI] = 206,
    },
    [59] = {
        [sym__statement] = 230,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [60] = {
        [anon_sym_end] = 232,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [61] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 234,
        [anon_sym_end] = 234,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 234,
        [anon_sym_SEMI] = 234,
    },
    [62] = {
        [sym__expression] = 236,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_LPAREN] = 188,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [63] = {
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
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 38,
        [sym_symbol] = 238,
        [sym__line_break] = 38,
        [anon_sym_SEMI] = 240,
    },
    [64] = {
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
        [sym__variable] = 238,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_class] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 38,
        [sym_symbol] = 238,
        [sym__line_break] = 38,
    },
    [65] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 242,
        [anon_sym_end] = 242,
        [anon_sym_if] = 242,
        [anon_sym_while] = 242,
        [anon_sym_unless] = 242,
        [anon_sym_until] = 242,
        [sym_comment] = 38,
        [sym__line_break] = 242,
        [anon_sym_SEMI] = 242,
    },
    [66] = {
        [sym__terminator] = 244,
        [aux_sym_program_repeat1] = 244,
        [anon_sym_end] = 244,
        [anon_sym_if] = 244,
        [anon_sym_while] = 244,
        [anon_sym_unless] = 244,
        [anon_sym_until] = 244,
        [sym_comment] = 38,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [67] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 246,
        [anon_sym_end] = 248,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [68] = {
        [anon_sym_end] = 250,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [69] = {
        [sym__statement] = 252,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 254,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_LT] = 256,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [70] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 258,
        [anon_sym_end] = 260,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [71] = {
        [sym__terminator] = 262,
        [aux_sym_program_repeat1] = 262,
        [anon_sym_end] = 262,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 38,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 262,
    },
    [72] = {
        [sym_identifier] = 264,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [73] = {
        [sym__statement] = 266,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [aux_sym_class_declaration_repeat1] = 268,
        [anon_sym_end] = 270,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [74] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 274,
        [anon_sym_end] = 276,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [75] = {
        [sym__statement] = 278,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 276,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [76] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 38,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [77] = {
        [sym_identifier] = 282,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [78] = {
        [sym__statement] = 284,
        [sym__declaration] = 284,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym__call] = 284,
        [sym__command] = 284,
        [sym__function_call] = 284,
        [sym__expression] = 284,
        [sym__argument] = 284,
        [sym__primary] = 284,
        [sym__variable] = 284,
        [aux_sym_class_declaration_repeat1] = 286,
        [anon_sym_end] = 284,
        [anon_sym_undef] = 284,
        [anon_sym_alias] = 284,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_class] = 284,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 284,
        [anon_sym_super] = 284,
        [anon_sym_nil] = 284,
        [anon_sym_self] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 38,
        [sym_symbol] = 284,
        [sym__line_break] = 38,
    },
    [79] = {
        [sym__statement] = 288,
        [sym__declaration] = 288,
        [sym_method_declaration] = 288,
        [sym_class_declaration] = 288,
        [sym_module_declaration] = 288,
        [sym__call] = 288,
        [sym__command] = 288,
        [sym__function_call] = 288,
        [sym__expression] = 288,
        [sym__argument] = 288,
        [sym__primary] = 288,
        [sym__variable] = 288,
        [anon_sym_end] = 288,
        [anon_sym_undef] = 288,
        [anon_sym_alias] = 288,
        [anon_sym_def] = 288,
        [anon_sym_LPAREN] = 288,
        [anon_sym_class] = 288,
        [anon_sym_module] = 288,
        [anon_sym_super] = 288,
        [anon_sym_nil] = 288,
        [anon_sym_self] = 288,
        [sym_identifier] = 288,
        [sym_comment] = 38,
        [sym_symbol] = 288,
        [sym__line_break] = 38,
    },
    [80] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 290,
        [anon_sym_end] = 292,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [81] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [anon_sym_end] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [sym_comment] = 38,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [82] = {
        [anon_sym_end] = 296,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [83] = {
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [anon_sym_end] = 298,
        [anon_sym_if] = 298,
        [anon_sym_while] = 298,
        [anon_sym_unless] = 298,
        [anon_sym_until] = 298,
        [sym_comment] = 38,
        [sym__line_break] = 298,
        [anon_sym_SEMI] = 298,
    },
    [84] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 300,
        [anon_sym_end] = 300,
        [anon_sym_if] = 300,
        [anon_sym_while] = 300,
        [anon_sym_unless] = 300,
        [anon_sym_until] = 300,
        [sym_comment] = 38,
        [sym__line_break] = 300,
        [anon_sym_SEMI] = 300,
    },
    [85] = {
        [anon_sym_end] = 292,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [86] = {
        [anon_sym_end] = 270,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [87] = {
        [sym__terminator] = 302,
        [aux_sym_program_repeat1] = 302,
        [anon_sym_end] = 302,
        [anon_sym_if] = 302,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 302,
        [anon_sym_until] = 302,
        [sym_comment] = 38,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [88] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 304,
        [anon_sym_if] = 146,
        [anon_sym_while] = 146,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 146,
        [anon_sym_RPAREN] = 306,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [89] = {
        [sym__statement] = 308,
        [sym__declaration] = 82,
        [sym_method_declaration] = 84,
        [sym_class_declaration] = 84,
        [sym_module_declaration] = 84,
        [sym__call] = 86,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 82,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym__variable] = 92,
        [anon_sym_undef] = 94,
        [anon_sym_alias] = 96,
        [anon_sym_def] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_class] = 102,
        [anon_sym_module] = 104,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 38,
        [sym_symbol] = 88,
        [sym__line_break] = 38,
    },
    [90] = {
        [anon_sym_RPAREN] = 310,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [91] = {
        [sym__expression] = 312,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym__variable] = 92,
        [anon_sym_LPAREN] = 100,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 38,
        [sym_symbol] = 88,
        [sym__line_break] = 38,
    },
    [92] = {
        [sym__terminator] = 314,
        [aux_sym_program_repeat1] = 314,
        [anon_sym_end] = 314,
        [anon_sym_if] = 314,
        [anon_sym_while] = 314,
        [anon_sym_unless] = 314,
        [anon_sym_until] = 314,
        [sym_comment] = 38,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [93] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 242,
        [anon_sym_if] = 242,
        [anon_sym_while] = 242,
        [anon_sym_unless] = 242,
        [anon_sym_until] = 242,
        [anon_sym_RPAREN] = 242,
        [sym_comment] = 38,
        [sym__line_break] = 242,
        [anon_sym_SEMI] = 242,
    },
    [94] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_end] = 316,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 38,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [95] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 318,
        [anon_sym_if] = 146,
        [anon_sym_while] = 146,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 146,
        [anon_sym_RPAREN] = 248,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [96] = {
        [anon_sym_RPAREN] = 250,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [97] = {
        [sym_argument_list] = 320,
        [sym__terminator] = 322,
        [anon_sym_LPAREN] = 324,
        [anon_sym_STAR] = 326,
        [anon_sym_AMP] = 326,
        [sym_identifier] = 328,
        [sym_comment] = 38,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 332,
    },
    [98] = {
        [sym_argument_list] = 334,
        [sym__terminator] = 334,
        [anon_sym_LPAREN] = 334,
        [anon_sym_STAR] = 334,
        [anon_sym_AMP] = 334,
        [sym_identifier] = 334,
        [sym_comment] = 38,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [99] = {
        [sym__terminator] = 336,
        [sym_comment] = 38,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 332,
    },
    [100] = {
        [sym__statement] = 338,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 340,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [101] = {
        [sym_argument_list] = 342,
        [anon_sym_RPAREN] = 336,
        [anon_sym_STAR] = 344,
        [anon_sym_AMP] = 344,
        [sym_identifier] = 346,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [102] = {
        [sym_identifier] = 348,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [103] = {
        [sym__terminator] = 350,
        [aux_sym_argument_list_repeat1] = 352,
        [anon_sym_COMMA] = 354,
        [sym_comment] = 38,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [104] = {
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
        [sym__variable] = 238,
        [sym__terminator] = 240,
        [anon_sym_end] = 238,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_STAR] = 240,
        [anon_sym_AMP] = 240,
        [anon_sym_class] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 38,
        [sym_symbol] = 238,
        [sym__line_break] = 38,
        [anon_sym_SEMI] = 240,
    },
    [105] = {
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
        [sym__variable] = 238,
        [anon_sym_end] = 238,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 238,
        [anon_sym_def] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_class] = 238,
        [anon_sym_module] = 238,
        [anon_sym_super] = 238,
        [anon_sym_nil] = 238,
        [anon_sym_self] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 38,
        [sym_symbol] = 238,
        [sym__line_break] = 38,
    },
    [106] = {
        [sym__terminator] = 356,
        [sym_comment] = 38,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [107] = {
        [anon_sym_STAR] = 358,
        [anon_sym_AMP] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [108] = {
        [sym_identifier] = 362,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [109] = {
        [sym__terminator] = 364,
        [aux_sym_argument_list_repeat1] = 366,
        [anon_sym_COMMA] = 354,
        [sym_comment] = 38,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [110] = {
        [sym__terminator] = 368,
        [sym_comment] = 38,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [111] = {
        [sym__terminator] = 368,
        [aux_sym_argument_list_repeat1] = 370,
        [anon_sym_COMMA] = 354,
        [sym_comment] = 38,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [112] = {
        [sym__terminator] = 372,
        [sym_comment] = 38,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [113] = {
        [sym__terminator] = 356,
        [aux_sym_argument_list_repeat1] = 374,
        [anon_sym_COMMA] = 354,
        [sym_comment] = 38,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [114] = {
        [sym__terminator] = 376,
        [sym_comment] = 38,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [115] = {
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [116] = {
        [sym__statement] = 380,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 382,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [117] = {
        [sym_identifier] = 384,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [118] = {
        [aux_sym_argument_list_repeat1] = 386,
        [anon_sym_RPAREN] = 350,
        [anon_sym_COMMA] = 388,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [119] = {
        [anon_sym_RPAREN] = 356,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [120] = {
        [anon_sym_STAR] = 390,
        [anon_sym_AMP] = 390,
        [sym_identifier] = 392,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [121] = {
        [sym_identifier] = 394,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [122] = {
        [aux_sym_argument_list_repeat1] = 396,
        [anon_sym_RPAREN] = 364,
        [anon_sym_COMMA] = 388,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [123] = {
        [anon_sym_RPAREN] = 368,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [124] = {
        [aux_sym_argument_list_repeat1] = 398,
        [anon_sym_RPAREN] = 368,
        [anon_sym_COMMA] = 388,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [125] = {
        [anon_sym_RPAREN] = 372,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [126] = {
        [aux_sym_argument_list_repeat1] = 400,
        [anon_sym_RPAREN] = 356,
        [anon_sym_COMMA] = 388,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [127] = {
        [anon_sym_RPAREN] = 376,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [128] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 402,
        [anon_sym_end] = 404,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [129] = {
        [sym__terminator] = 406,
        [aux_sym_program_repeat1] = 406,
        [anon_sym_end] = 406,
        [anon_sym_if] = 406,
        [anon_sym_while] = 406,
        [anon_sym_unless] = 406,
        [anon_sym_until] = 406,
        [sym_comment] = 38,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [130] = {
        [anon_sym_end] = 408,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [131] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_end] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [sym_comment] = 38,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [132] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_end] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [sym_comment] = 38,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [133] = {
        [sym__statement] = 414,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 404,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [134] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 416,
        [anon_sym_end] = 408,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [135] = {
        [anon_sym_end] = 418,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [136] = {
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [anon_sym_end] = 420,
        [anon_sym_if] = 420,
        [anon_sym_while] = 420,
        [anon_sym_unless] = 420,
        [anon_sym_until] = 420,
        [sym_comment] = 38,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [137] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 422,
        [anon_sym_end] = 382,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [138] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [sym_comment] = 38,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [139] = {
        [anon_sym_end] = 404,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [140] = {
        [sym__function_name] = 236,
        [anon_sym_PIPE] = 210,
        [anon_sym_STAR] = 210,
        [anon_sym_AMP] = 210,
        [anon_sym_LT] = 210,
        [sym_identifier] = 210,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 210,
        [anon_sym_CARET] = 210,
        [anon_sym_LT_EQ_GT] = 210,
        [anon_sym_EQ_EQ] = 210,
        [anon_sym_EQ_EQ_EQ] = 210,
        [anon_sym_EQ_TILDE] = 210,
        [anon_sym_GT] = 210,
        [anon_sym_GT_EQ] = 210,
        [anon_sym_LT_EQ] = 210,
        [anon_sym_PLUS] = 210,
        [anon_sym_DASH] = 210,
        [anon_sym_SLASH] = 210,
        [anon_sym_PERCENT] = 210,
        [anon_sym_STAR_STAR] = 210,
        [anon_sym_LT_LT] = 210,
        [anon_sym_GT_GT] = 210,
        [anon_sym_TILDE] = 210,
        [anon_sym_PLUS_AT] = 210,
        [anon_sym_DASH_AT] = 210,
        [anon_sym_LBRACK_RBRACK] = 210,
        [anon_sym_LBRACK_RBRACK_EQ] = 210,
        [sym__line_break] = 38,
    },
    [141] = {
        [sym__function_name] = 334,
        [anon_sym_PIPE] = 334,
        [anon_sym_STAR] = 334,
        [anon_sym_AMP] = 334,
        [anon_sym_LT] = 334,
        [sym_identifier] = 334,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 334,
        [anon_sym_CARET] = 334,
        [anon_sym_LT_EQ_GT] = 334,
        [anon_sym_EQ_EQ] = 334,
        [anon_sym_EQ_EQ_EQ] = 334,
        [anon_sym_EQ_TILDE] = 334,
        [anon_sym_GT] = 334,
        [anon_sym_GT_EQ] = 334,
        [anon_sym_LT_EQ] = 334,
        [anon_sym_PLUS] = 334,
        [anon_sym_DASH] = 334,
        [anon_sym_SLASH] = 334,
        [anon_sym_PERCENT] = 334,
        [anon_sym_STAR_STAR] = 334,
        [anon_sym_LT_LT] = 334,
        [anon_sym_GT_GT] = 334,
        [anon_sym_TILDE] = 334,
        [anon_sym_PLUS_AT] = 334,
        [anon_sym_DASH_AT] = 334,
        [anon_sym_LBRACK_RBRACK] = 334,
        [anon_sym_LBRACK_RBRACK_EQ] = 334,
        [sym__line_break] = 38,
    },
    [142] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 38,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [143] = {
        [sym__terminator] = 426,
        [aux_sym_program_repeat1] = 426,
        [anon_sym_end] = 426,
        [anon_sym_if] = 426,
        [anon_sym_while] = 426,
        [anon_sym_unless] = 426,
        [anon_sym_until] = 426,
        [sym_comment] = 38,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [144] = {
        [sym__statement] = 428,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_PIPE] = 430,
        [anon_sym_end] = 236,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [145] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 432,
        [anon_sym_end] = 434,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [146] = {
        [sym__statement] = 436,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 434,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [147] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 440,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [148] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [sym_comment] = 38,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [149] = {
        [anon_sym_end] = 444,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [150] = {
        [sym__terminator] = 446,
        [aux_sym_program_repeat1] = 446,
        [anon_sym_end] = 446,
        [anon_sym_if] = 446,
        [anon_sym_while] = 446,
        [anon_sym_unless] = 446,
        [anon_sym_until] = 446,
        [sym_comment] = 38,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [151] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [sym_comment] = 38,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [152] = {
        [anon_sym_end] = 440,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [153] = {
        [anon_sym_end] = 450,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [154] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 234,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [anon_sym_RPAREN] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 234,
        [anon_sym_SEMI] = 234,
    },
    [155] = {
        [sym__terminator] = 244,
        [aux_sym_program_repeat1] = 244,
        [anon_sym_if] = 244,
        [anon_sym_while] = 244,
        [anon_sym_unless] = 244,
        [anon_sym_until] = 244,
        [anon_sym_RPAREN] = 244,
        [sym_comment] = 38,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [156] = {
        [sym__statement] = 452,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 454,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_LT] = 456,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [157] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 458,
        [anon_sym_end] = 460,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [158] = {
        [sym__terminator] = 262,
        [aux_sym_program_repeat1] = 262,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [anon_sym_RPAREN] = 262,
        [sym_comment] = 38,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 262,
    },
    [159] = {
        [sym_identifier] = 462,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [160] = {
        [sym__statement] = 464,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [aux_sym_class_declaration_repeat1] = 466,
        [anon_sym_end] = 468,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [161] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 470,
        [anon_sym_end] = 472,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [162] = {
        [sym__statement] = 474,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 472,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [163] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [anon_sym_RPAREN] = 280,
        [sym_comment] = 38,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [164] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 476,
        [anon_sym_end] = 478,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [165] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [anon_sym_RPAREN] = 294,
        [sym_comment] = 38,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [166] = {
        [anon_sym_end] = 480,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [167] = {
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [anon_sym_if] = 298,
        [anon_sym_while] = 298,
        [anon_sym_unless] = 298,
        [anon_sym_until] = 298,
        [anon_sym_RPAREN] = 298,
        [sym_comment] = 38,
        [sym__line_break] = 298,
        [anon_sym_SEMI] = 298,
    },
    [168] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 300,
        [anon_sym_if] = 300,
        [anon_sym_while] = 300,
        [anon_sym_unless] = 300,
        [anon_sym_until] = 300,
        [anon_sym_RPAREN] = 300,
        [sym_comment] = 38,
        [sym__line_break] = 300,
        [anon_sym_SEMI] = 300,
    },
    [169] = {
        [anon_sym_end] = 478,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [170] = {
        [anon_sym_end] = 468,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [171] = {
        [sym__terminator] = 302,
        [aux_sym_program_repeat1] = 302,
        [anon_sym_if] = 302,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 302,
        [anon_sym_until] = 302,
        [anon_sym_RPAREN] = 302,
        [sym_comment] = 38,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [172] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_if] = 146,
        [anon_sym_while] = 146,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 146,
        [anon_sym_RPAREN] = 484,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [173] = {
        [anon_sym_RPAREN] = 486,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [174] = {
        [sym__terminator] = 314,
        [aux_sym_program_repeat1] = 314,
        [anon_sym_if] = 314,
        [anon_sym_while] = 314,
        [anon_sym_unless] = 314,
        [anon_sym_until] = 314,
        [anon_sym_RPAREN] = 314,
        [sym_comment] = 38,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [175] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [anon_sym_RPAREN] = 316,
        [sym_comment] = 38,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [176] = {
        [sym_argument_list] = 488,
        [sym__terminator] = 490,
        [anon_sym_LPAREN] = 492,
        [anon_sym_STAR] = 326,
        [anon_sym_AMP] = 326,
        [sym_identifier] = 328,
        [sym_comment] = 38,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 332,
    },
    [177] = {
        [sym__terminator] = 494,
        [sym_comment] = 38,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 332,
    },
    [178] = {
        [sym__statement] = 496,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 498,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [179] = {
        [sym_argument_list] = 500,
        [anon_sym_RPAREN] = 494,
        [anon_sym_STAR] = 344,
        [anon_sym_AMP] = 344,
        [sym_identifier] = 346,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [180] = {
        [anon_sym_RPAREN] = 502,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [181] = {
        [sym__statement] = 504,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 506,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [182] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 508,
        [anon_sym_end] = 510,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [183] = {
        [sym__terminator] = 406,
        [aux_sym_program_repeat1] = 406,
        [anon_sym_if] = 406,
        [anon_sym_while] = 406,
        [anon_sym_unless] = 406,
        [anon_sym_until] = 406,
        [anon_sym_RPAREN] = 406,
        [sym_comment] = 38,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [184] = {
        [anon_sym_end] = 512,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [185] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [anon_sym_RPAREN] = 410,
        [sym_comment] = 38,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [186] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [anon_sym_RPAREN] = 412,
        [sym_comment] = 38,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [187] = {
        [sym__statement] = 514,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 510,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [188] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 516,
        [anon_sym_end] = 512,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [189] = {
        [anon_sym_end] = 518,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [190] = {
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [anon_sym_if] = 420,
        [anon_sym_while] = 420,
        [anon_sym_unless] = 420,
        [anon_sym_until] = 420,
        [anon_sym_RPAREN] = 420,
        [sym_comment] = 38,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [191] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 520,
        [anon_sym_end] = 506,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [192] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [anon_sym_RPAREN] = 424,
        [sym_comment] = 38,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [193] = {
        [anon_sym_end] = 510,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [194] = {
        [sym__function_name] = 312,
        [anon_sym_PIPE] = 154,
        [anon_sym_STAR] = 154,
        [anon_sym_AMP] = 154,
        [anon_sym_LT] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 154,
        [anon_sym_CARET] = 154,
        [anon_sym_LT_EQ_GT] = 154,
        [anon_sym_EQ_EQ] = 154,
        [anon_sym_EQ_EQ_EQ] = 154,
        [anon_sym_EQ_TILDE] = 154,
        [anon_sym_GT] = 154,
        [anon_sym_GT_EQ] = 154,
        [anon_sym_LT_EQ] = 154,
        [anon_sym_PLUS] = 154,
        [anon_sym_DASH] = 154,
        [anon_sym_SLASH] = 154,
        [anon_sym_PERCENT] = 154,
        [anon_sym_STAR_STAR] = 154,
        [anon_sym_LT_LT] = 154,
        [anon_sym_GT_GT] = 154,
        [anon_sym_TILDE] = 154,
        [anon_sym_PLUS_AT] = 154,
        [anon_sym_DASH_AT] = 154,
        [anon_sym_LBRACK_RBRACK] = 154,
        [anon_sym_LBRACK_RBRACK_EQ] = 154,
        [sym__line_break] = 38,
    },
    [195] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [anon_sym_RPAREN] = 334,
        [sym_comment] = 38,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [196] = {
        [sym__terminator] = 426,
        [aux_sym_program_repeat1] = 426,
        [anon_sym_if] = 426,
        [anon_sym_while] = 426,
        [anon_sym_unless] = 426,
        [anon_sym_until] = 426,
        [anon_sym_RPAREN] = 426,
        [sym_comment] = 38,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [197] = {
        [sym__statement] = 522,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_PIPE] = 524,
        [anon_sym_end] = 312,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [198] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 526,
        [anon_sym_end] = 528,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [199] = {
        [sym__statement] = 530,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 528,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [200] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 532,
        [anon_sym_end] = 534,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [201] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [anon_sym_RPAREN] = 442,
        [sym_comment] = 38,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [202] = {
        [anon_sym_end] = 536,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [203] = {
        [sym__terminator] = 446,
        [aux_sym_program_repeat1] = 446,
        [anon_sym_if] = 446,
        [anon_sym_while] = 446,
        [anon_sym_unless] = 446,
        [anon_sym_until] = 446,
        [anon_sym_RPAREN] = 446,
        [sym_comment] = 38,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [204] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_RPAREN] = 448,
        [sym_comment] = 38,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [205] = {
        [anon_sym_end] = 534,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [206] = {
        [anon_sym_RPAREN] = 538,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [207] = {
        [aux_sym__call_arguments_repeat1] = 314,
        [anon_sym_do] = 314,
        [anon_sym_COMMA] = 314,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [208] = {
        [aux_sym__call_arguments_repeat1] = 316,
        [anon_sym_do] = 316,
        [anon_sym_COMMA] = 316,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [209] = {
        [anon_sym_do] = 540,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [210] = {
        [sym__argument] = 542,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 124,
        [anon_sym_nil] = 128,
        [anon_sym_self] = 128,
        [sym_identifier] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [211] = {
        [aux_sym__call_arguments_repeat1] = 544,
        [anon_sym_do] = 546,
        [anon_sym_COMMA] = 138,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [212] = {
        [anon_sym_do] = 548,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [213] = {
        [sym__statement] = 550,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 552,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [214] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 556,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [215] = {
        [sym__terminator] = 206,
        [aux_sym_program_repeat1] = 206,
        [ts_builtin_sym_end] = 206,
        [anon_sym_if] = 206,
        [anon_sym_while] = 206,
        [anon_sym_unless] = 206,
        [anon_sym_until] = 206,
        [sym_comment] = 38,
        [sym__line_break] = 206,
        [anon_sym_SEMI] = 206,
    },
    [216] = {
        [anon_sym_end] = 558,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [217] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 234,
        [anon_sym_SEMI] = 234,
    },
    [218] = {
        [sym__terminator] = 244,
        [aux_sym_program_repeat1] = 244,
        [ts_builtin_sym_end] = 244,
        [anon_sym_if] = 244,
        [anon_sym_while] = 244,
        [anon_sym_unless] = 244,
        [anon_sym_until] = 244,
        [sym_comment] = 38,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [219] = {
        [sym__statement] = 560,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 562,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_LT] = 564,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [220] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 566,
        [anon_sym_end] = 568,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [221] = {
        [sym__terminator] = 262,
        [aux_sym_program_repeat1] = 262,
        [ts_builtin_sym_end] = 262,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 38,
        [sym__line_break] = 262,
        [anon_sym_SEMI] = 262,
    },
    [222] = {
        [sym_identifier] = 570,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [223] = {
        [sym__statement] = 572,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [aux_sym_class_declaration_repeat1] = 574,
        [anon_sym_end] = 576,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [224] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 578,
        [anon_sym_end] = 580,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [225] = {
        [sym__statement] = 582,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 580,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [226] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [ts_builtin_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 38,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [227] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 584,
        [anon_sym_end] = 586,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [228] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [ts_builtin_sym_end] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [sym_comment] = 38,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [229] = {
        [anon_sym_end] = 588,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [230] = {
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [ts_builtin_sym_end] = 298,
        [anon_sym_if] = 298,
        [anon_sym_while] = 298,
        [anon_sym_unless] = 298,
        [anon_sym_until] = 298,
        [sym_comment] = 38,
        [sym__line_break] = 298,
        [anon_sym_SEMI] = 298,
    },
    [231] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 300,
        [ts_builtin_sym_end] = 300,
        [anon_sym_if] = 300,
        [anon_sym_while] = 300,
        [anon_sym_unless] = 300,
        [anon_sym_until] = 300,
        [sym_comment] = 38,
        [sym__line_break] = 300,
        [anon_sym_SEMI] = 300,
    },
    [232] = {
        [anon_sym_end] = 586,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [233] = {
        [anon_sym_end] = 576,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [234] = {
        [sym__terminator] = 302,
        [aux_sym_program_repeat1] = 302,
        [ts_builtin_sym_end] = 302,
        [anon_sym_if] = 302,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 302,
        [anon_sym_until] = 302,
        [sym_comment] = 38,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [235] = {
        [sym__terminator] = 142,
        [aux_sym_program_repeat1] = 590,
        [anon_sym_if] = 146,
        [anon_sym_while] = 146,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 146,
        [anon_sym_RPAREN] = 592,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [236] = {
        [anon_sym_RPAREN] = 594,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [237] = {
        [sym__terminator] = 314,
        [aux_sym_program_repeat1] = 314,
        [ts_builtin_sym_end] = 314,
        [anon_sym_if] = 314,
        [anon_sym_while] = 314,
        [anon_sym_unless] = 314,
        [anon_sym_until] = 314,
        [sym_comment] = 38,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [238] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [ts_builtin_sym_end] = 316,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 38,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [239] = {
        [sym_argument_list] = 596,
        [sym__terminator] = 598,
        [anon_sym_LPAREN] = 600,
        [anon_sym_STAR] = 326,
        [anon_sym_AMP] = 326,
        [sym_identifier] = 328,
        [sym_comment] = 38,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 332,
    },
    [240] = {
        [sym__terminator] = 602,
        [sym_comment] = 38,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 332,
    },
    [241] = {
        [sym__statement] = 604,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 606,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [242] = {
        [sym_argument_list] = 608,
        [anon_sym_RPAREN] = 602,
        [anon_sym_STAR] = 344,
        [anon_sym_AMP] = 344,
        [sym_identifier] = 346,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [243] = {
        [anon_sym_RPAREN] = 610,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [244] = {
        [sym__statement] = 612,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 614,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [245] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 616,
        [anon_sym_end] = 618,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [246] = {
        [sym__terminator] = 406,
        [aux_sym_program_repeat1] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_if] = 406,
        [anon_sym_while] = 406,
        [anon_sym_unless] = 406,
        [anon_sym_until] = 406,
        [sym_comment] = 38,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [247] = {
        [anon_sym_end] = 620,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [248] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [ts_builtin_sym_end] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [sym_comment] = 38,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [249] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [ts_builtin_sym_end] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [sym_comment] = 38,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [250] = {
        [sym__statement] = 622,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 618,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [251] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 620,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [252] = {
        [anon_sym_end] = 626,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [253] = {
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [ts_builtin_sym_end] = 420,
        [anon_sym_if] = 420,
        [anon_sym_while] = 420,
        [anon_sym_unless] = 420,
        [anon_sym_until] = 420,
        [sym_comment] = 38,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [254] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 614,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [255] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [sym_comment] = 38,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [256] = {
        [anon_sym_end] = 618,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [257] = {
        [sym__function_name] = 630,
        [anon_sym_PIPE] = 70,
        [anon_sym_STAR] = 70,
        [anon_sym_AMP] = 70,
        [anon_sym_LT] = 70,
        [sym_identifier] = 70,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 70,
        [anon_sym_CARET] = 70,
        [anon_sym_LT_EQ_GT] = 70,
        [anon_sym_EQ_EQ] = 70,
        [anon_sym_EQ_EQ_EQ] = 70,
        [anon_sym_EQ_TILDE] = 70,
        [anon_sym_GT] = 70,
        [anon_sym_GT_EQ] = 70,
        [anon_sym_LT_EQ] = 70,
        [anon_sym_PLUS] = 70,
        [anon_sym_DASH] = 70,
        [anon_sym_SLASH] = 70,
        [anon_sym_PERCENT] = 70,
        [anon_sym_STAR_STAR] = 70,
        [anon_sym_LT_LT] = 70,
        [anon_sym_GT_GT] = 70,
        [anon_sym_TILDE] = 70,
        [anon_sym_PLUS_AT] = 70,
        [anon_sym_DASH_AT] = 70,
        [anon_sym_LBRACK_RBRACK] = 70,
        [anon_sym_LBRACK_RBRACK_EQ] = 70,
        [sym__line_break] = 38,
    },
    [258] = {
        [sym__terminator] = 242,
        [aux_sym_program_repeat1] = 242,
        [ts_builtin_sym_end] = 242,
        [anon_sym_if] = 242,
        [anon_sym_while] = 242,
        [anon_sym_unless] = 242,
        [anon_sym_until] = 242,
        [sym_comment] = 38,
        [sym__line_break] = 242,
        [anon_sym_SEMI] = 242,
    },
    [259] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 38,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [260] = {
        [sym__terminator] = 426,
        [aux_sym_program_repeat1] = 426,
        [ts_builtin_sym_end] = 426,
        [anon_sym_if] = 426,
        [anon_sym_while] = 426,
        [anon_sym_unless] = 426,
        [anon_sym_until] = 426,
        [sym_comment] = 38,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 426,
    },
    [261] = {
        [sym__statement] = 632,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_PIPE] = 634,
        [anon_sym_end] = 630,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [262] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 638,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [263] = {
        [sym__statement] = 640,
        [sym__declaration] = 168,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 172,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 168,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym__variable] = 178,
        [anon_sym_end] = 638,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 184,
        [anon_sym_def] = 186,
        [anon_sym_LPAREN] = 188,
        [anon_sym_class] = 190,
        [anon_sym_module] = 192,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 38,
        [sym_symbol] = 174,
        [sym__line_break] = 38,
    },
    [264] = {
        [sym__terminator] = 196,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 644,
        [anon_sym_if] = 202,
        [anon_sym_while] = 202,
        [anon_sym_unless] = 202,
        [anon_sym_until] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [265] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [ts_builtin_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [sym_comment] = 38,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [266] = {
        [anon_sym_end] = 646,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [267] = {
        [sym__terminator] = 446,
        [aux_sym_program_repeat1] = 446,
        [ts_builtin_sym_end] = 446,
        [anon_sym_if] = 446,
        [anon_sym_while] = 446,
        [anon_sym_unless] = 446,
        [anon_sym_until] = 446,
        [sym_comment] = 38,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [268] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [ts_builtin_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [sym_comment] = 38,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [269] = {
        [anon_sym_end] = 644,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [270] = {
        [sym__statement] = 648,
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
        [sym__variable] = 18,
        [anon_sym_undef] = 22,
        [anon_sym_alias] = 24,
        [anon_sym_def] = 26,
        [anon_sym_LPAREN] = 28,
        [anon_sym_class] = 30,
        [anon_sym_module] = 32,
        [anon_sym_super] = 34,
        [anon_sym_nil] = 36,
        [anon_sym_self] = 36,
        [sym_identifier] = 36,
        [sym_comment] = 38,
        [sym_symbol] = 14,
        [sym__line_break] = 38,
    },
    [271] = {
        [ts_builtin_sym_end] = 650,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [272] = {
        [sym__expression] = 630,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 28,
        [anon_sym_nil] = 36,
        [anon_sym_self] = 36,
        [sym_identifier] = 36,
        [sym_comment] = 38,
        [sym_symbol] = 14,
        [sym__line_break] = 38,
    },
    [273] = {
        [sym__terminator] = 42,
        [aux_sym_program_repeat1] = 652,
        [ts_builtin_sym_end] = 248,
        [anon_sym_if] = 48,
        [anon_sym_while] = 48,
        [anon_sym_unless] = 48,
        [anon_sym_until] = 48,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [274] = {
        [ts_builtin_sym_end] = 250,
        [sym_comment] = 38,
        [sym__line_break] = 38,
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
    [38] = {.count = 1}, SHIFT_EXTRA(),
    [40] = {.count = 1}, ACCEPT_INPUT(),
    [42] = {.count = 1}, SHIFT(270, 0),
    [44] = {.count = 1}, SHIFT(271, 0),
    [46] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [48] = {.count = 1}, SHIFT(272, 0),
    [50] = {.count = 1}, SHIFT(63, 0),
    [52] = {.count = 1}, SHIFT(64, 0),
    [54] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [56] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [58] = {.count = 1}, SHIFT(261, 0),
    [60] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [68] = {.count = 1}, SHIFT(260, 0),
    [70] = {.count = 1}, SHIFT(259, 0),
    [72] = {.count = 1}, SHIFT(257, 0),
    [74] = {.count = 1}, SHIFT(141, 0),
    [76] = {.count = 1}, SHIFT(239, 0),
    [78] = {.count = 1}, SHIFT(98, 0),
    [80] = {.count = 1}, SHIFT(235, 0),
    [82] = {.count = 1}, SHIFT(27, 0),
    [84] = {.count = 1}, SHIFT(28, 0),
    [86] = {.count = 1}, SHIFT(29, 0),
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
    [108] = {.count = 1}, SHIFT(219, 0),
    [110] = {.count = 1}, SHIFT(213, 0),
    [112] = {.count = 1}, SHIFT(18, 0),
    [114] = {.count = 1}, SHIFT(19, 0),
    [116] = {.count = 1}, SHIFT(20, 0),
    [118] = {.count = 1}, SHIFT(21, 0),
    [120] = {.count = 1}, SHIFT(22, 0),
    [122] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [124] = {.count = 1}, SHIFT(23, 0),
    [126] = {.count = 1}, SHIFT(24, 0),
    [128] = {.count = 1}, SHIFT(25, 0),
    [130] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [132] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [134] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [136] = {.count = 1}, SHIFT(209, 0),
    [138] = {.count = 1}, SHIFT(210, 0),
    [140] = {.count = 1}, SHIFT(26, 0),
    [142] = {.count = 1}, SHIFT(89, 0),
    [144] = {.count = 1}, SHIFT(206, 0),
    [146] = {.count = 1}, SHIFT(91, 0),
    [148] = {.count = 1}, SHIFT(207, 0),
    [150] = {.count = 1}, SHIFT(197, 0),
    [152] = {.count = 1}, SHIFT(196, 0),
    [154] = {.count = 1}, SHIFT(195, 0),
    [156] = {.count = 1}, SHIFT(194, 0),
    [158] = {.count = 1}, SHIFT(176, 0),
    [160] = {.count = 1}, SHIFT(172, 0),
    [162] = {.count = 1}, SHIFT(156, 0),
    [164] = {.count = 1}, SHIFT(40, 0),
    [166] = {.count = 1}, SHIFT(41, 0),
    [168] = {.count = 1}, SHIFT(42, 0),
    [170] = {.count = 1}, SHIFT(43, 0),
    [172] = {.count = 1}, SHIFT(44, 0),
    [174] = {.count = 1}, SHIFT(45, 0),
    [176] = {.count = 1}, SHIFT(46, 0),
    [178] = {.count = 1}, SHIFT(47, 0),
    [180] = {.count = 1}, SHIFT(48, 0),
    [182] = {.count = 1}, SHIFT(49, 0),
    [184] = {.count = 1}, SHIFT(50, 0),
    [186] = {.count = 1}, SHIFT(51, 0),
    [188] = {.count = 1}, SHIFT(52, 0),
    [190] = {.count = 1}, SHIFT(53, 0),
    [192] = {.count = 1}, SHIFT(54, 0),
    [194] = {.count = 1}, SHIFT(55, 0),
    [196] = {.count = 1}, SHIFT(59, 0),
    [198] = {.count = 1}, SHIFT(153, 0),
    [200] = {.count = 1}, SHIFT(154, 0),
    [202] = {.count = 1}, SHIFT(62, 0),
    [204] = {.count = 1}, SHIFT(144, 0),
    [206] = {.count = 1}, REDUCE(sym_module_declaration, 3, 0),
    [208] = {.count = 1}, SHIFT(143, 0),
    [210] = {.count = 1}, SHIFT(142, 0),
    [212] = {.count = 1}, SHIFT(140, 0),
    [214] = {.count = 1}, SHIFT(97, 0),
    [216] = {.count = 1}, SHIFT(88, 0),
    [218] = {.count = 1}, SHIFT(69, 0),
    [220] = {.count = 1}, SHIFT(56, 0),
    [222] = {.count = 1}, SHIFT(57, 0),
    [224] = {.count = 1}, SHIFT(58, 0),
    [226] = {.count = 1}, SHIFT(60, 0),
    [228] = {.count = 1}, SHIFT(61, 0),
    [230] = {.count = 1}, SHIFT(67, 0),
    [232] = {.count = 1}, SHIFT(66, 0),
    [234] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [236] = {.count = 1}, SHIFT(65, 0),
    [238] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [240] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [242] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [244] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [246] = {.count = 1}, SHIFT(68, 0),
    [248] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [250] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [252] = {.count = 1}, SHIFT(70, 0),
    [254] = {.count = 1}, SHIFT(71, 0),
    [256] = {.count = 1}, SHIFT(72, 0),
    [258] = {.count = 1}, SHIFT(86, 0),
    [260] = {.count = 1}, SHIFT(87, 0),
    [262] = {.count = 1}, REDUCE(sym_class_declaration, 3, 0),
    [264] = {.count = 1}, SHIFT(73, 0),
    [266] = {.count = 1}, SHIFT(74, 0),
    [268] = {.count = 1}, SHIFT(75, 0),
    [270] = {.count = 1}, SHIFT(76, 0),
    [272] = {.count = 1}, SHIFT(77, 0),
    [274] = {.count = 1}, SHIFT(85, 0),
    [276] = {.count = 1}, SHIFT(81, 0),
    [278] = {.count = 1}, SHIFT(80, 0),
    [280] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [282] = {.count = 1}, SHIFT(78, 0),
    [284] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [286] = {.count = 1}, SHIFT(79, 0),
    [288] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [290] = {.count = 1}, SHIFT(82, 0),
    [292] = {.count = 1}, SHIFT(83, 0),
    [294] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [296] = {.count = 1}, SHIFT(84, 0),
    [298] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [300] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [302] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [304] = {.count = 1}, SHIFT(90, 0),
    [306] = {.count = 1}, SHIFT(92, 0),
    [308] = {.count = 1}, SHIFT(95, 0),
    [310] = {.count = 1}, SHIFT(94, 0),
    [312] = {.count = 1}, SHIFT(93, 0),
    [314] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [316] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [318] = {.count = 1}, SHIFT(96, 0),
    [320] = {.count = 1}, SHIFT(99, 0),
    [322] = {.count = 1}, SHIFT(100, 0),
    [324] = {.count = 1}, SHIFT(101, 0),
    [326] = {.count = 1}, SHIFT(102, 0),
    [328] = {.count = 1}, SHIFT(103, 0),
    [330] = {.count = 1}, SHIFT(104, 0),
    [332] = {.count = 1}, SHIFT(105, 0),
    [334] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [336] = {.count = 1}, SHIFT(116, 0),
    [338] = {.count = 1}, SHIFT(137, 0),
    [340] = {.count = 1}, SHIFT(138, 0),
    [342] = {.count = 1}, SHIFT(115, 0),
    [344] = {.count = 1}, SHIFT(117, 0),
    [346] = {.count = 1}, SHIFT(118, 0),
    [348] = {.count = 1}, SHIFT(113, 0),
    [350] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [352] = {.count = 1}, SHIFT(106, 0),
    [354] = {.count = 1}, SHIFT(107, 0),
    [356] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [358] = {.count = 1}, SHIFT(108, 0),
    [360] = {.count = 1}, SHIFT(109, 0),
    [362] = {.count = 1}, SHIFT(111, 0),
    [364] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [366] = {.count = 1}, SHIFT(110, 0),
    [368] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [370] = {.count = 1}, SHIFT(112, 0),
    [372] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [374] = {.count = 1}, SHIFT(114, 0),
    [376] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [378] = {.count = 1}, SHIFT(133, 0),
    [380] = {.count = 1}, SHIFT(128, 0),
    [382] = {.count = 1}, SHIFT(129, 0),
    [384] = {.count = 1}, SHIFT(126, 0),
    [386] = {.count = 1}, SHIFT(119, 0),
    [388] = {.count = 1}, SHIFT(120, 0),
    [390] = {.count = 1}, SHIFT(121, 0),
    [392] = {.count = 1}, SHIFT(122, 0),
    [394] = {.count = 1}, SHIFT(124, 0),
    [396] = {.count = 1}, SHIFT(123, 0),
    [398] = {.count = 1}, SHIFT(125, 0),
    [400] = {.count = 1}, SHIFT(127, 0),
    [402] = {.count = 1}, SHIFT(130, 0),
    [404] = {.count = 1}, SHIFT(131, 0),
    [406] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [408] = {.count = 1}, SHIFT(132, 0),
    [410] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [412] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [414] = {.count = 1}, SHIFT(134, 0),
    [416] = {.count = 1}, SHIFT(135, 0),
    [418] = {.count = 1}, SHIFT(136, 0),
    [420] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [422] = {.count = 1}, SHIFT(139, 0),
    [424] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [426] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [428] = {.count = 1}, SHIFT(145, 0),
    [430] = {.count = 1}, SHIFT(146, 0),
    [432] = {.count = 1}, SHIFT(152, 0),
    [434] = {.count = 1}, SHIFT(148, 0),
    [436] = {.count = 1}, SHIFT(147, 0),
    [438] = {.count = 1}, SHIFT(149, 0),
    [440] = {.count = 1}, SHIFT(150, 0),
    [442] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [444] = {.count = 1}, SHIFT(151, 0),
    [446] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [448] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [450] = {.count = 1}, SHIFT(155, 0),
    [452] = {.count = 1}, SHIFT(157, 0),
    [454] = {.count = 1}, SHIFT(158, 0),
    [456] = {.count = 1}, SHIFT(159, 0),
    [458] = {.count = 1}, SHIFT(170, 0),
    [460] = {.count = 1}, SHIFT(171, 0),
    [462] = {.count = 1}, SHIFT(160, 0),
    [464] = {.count = 1}, SHIFT(161, 0),
    [466] = {.count = 1}, SHIFT(162, 0),
    [468] = {.count = 1}, SHIFT(163, 0),
    [470] = {.count = 1}, SHIFT(169, 0),
    [472] = {.count = 1}, SHIFT(165, 0),
    [474] = {.count = 1}, SHIFT(164, 0),
    [476] = {.count = 1}, SHIFT(166, 0),
    [478] = {.count = 1}, SHIFT(167, 0),
    [480] = {.count = 1}, SHIFT(168, 0),
    [482] = {.count = 1}, SHIFT(173, 0),
    [484] = {.count = 1}, SHIFT(174, 0),
    [486] = {.count = 1}, SHIFT(175, 0),
    [488] = {.count = 1}, SHIFT(177, 0),
    [490] = {.count = 1}, SHIFT(178, 0),
    [492] = {.count = 1}, SHIFT(179, 0),
    [494] = {.count = 1}, SHIFT(181, 0),
    [496] = {.count = 1}, SHIFT(191, 0),
    [498] = {.count = 1}, SHIFT(192, 0),
    [500] = {.count = 1}, SHIFT(180, 0),
    [502] = {.count = 1}, SHIFT(187, 0),
    [504] = {.count = 1}, SHIFT(182, 0),
    [506] = {.count = 1}, SHIFT(183, 0),
    [508] = {.count = 1}, SHIFT(184, 0),
    [510] = {.count = 1}, SHIFT(185, 0),
    [512] = {.count = 1}, SHIFT(186, 0),
    [514] = {.count = 1}, SHIFT(188, 0),
    [516] = {.count = 1}, SHIFT(189, 0),
    [518] = {.count = 1}, SHIFT(190, 0),
    [520] = {.count = 1}, SHIFT(193, 0),
    [522] = {.count = 1}, SHIFT(198, 0),
    [524] = {.count = 1}, SHIFT(199, 0),
    [526] = {.count = 1}, SHIFT(205, 0),
    [528] = {.count = 1}, SHIFT(201, 0),
    [530] = {.count = 1}, SHIFT(200, 0),
    [532] = {.count = 1}, SHIFT(202, 0),
    [534] = {.count = 1}, SHIFT(203, 0),
    [536] = {.count = 1}, SHIFT(204, 0),
    [538] = {.count = 1}, SHIFT(208, 0),
    [540] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [542] = {.count = 1}, SHIFT(211, 0),
    [544] = {.count = 1}, SHIFT(212, 0),
    [546] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [548] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [550] = {.count = 1}, SHIFT(214, 0),
    [552] = {.count = 1}, SHIFT(215, 0),
    [554] = {.count = 1}, SHIFT(216, 0),
    [556] = {.count = 1}, SHIFT(217, 0),
    [558] = {.count = 1}, SHIFT(218, 0),
    [560] = {.count = 1}, SHIFT(220, 0),
    [562] = {.count = 1}, SHIFT(221, 0),
    [564] = {.count = 1}, SHIFT(222, 0),
    [566] = {.count = 1}, SHIFT(233, 0),
    [568] = {.count = 1}, SHIFT(234, 0),
    [570] = {.count = 1}, SHIFT(223, 0),
    [572] = {.count = 1}, SHIFT(224, 0),
    [574] = {.count = 1}, SHIFT(225, 0),
    [576] = {.count = 1}, SHIFT(226, 0),
    [578] = {.count = 1}, SHIFT(232, 0),
    [580] = {.count = 1}, SHIFT(228, 0),
    [582] = {.count = 1}, SHIFT(227, 0),
    [584] = {.count = 1}, SHIFT(229, 0),
    [586] = {.count = 1}, SHIFT(230, 0),
    [588] = {.count = 1}, SHIFT(231, 0),
    [590] = {.count = 1}, SHIFT(236, 0),
    [592] = {.count = 1}, SHIFT(237, 0),
    [594] = {.count = 1}, SHIFT(238, 0),
    [596] = {.count = 1}, SHIFT(240, 0),
    [598] = {.count = 1}, SHIFT(241, 0),
    [600] = {.count = 1}, SHIFT(242, 0),
    [602] = {.count = 1}, SHIFT(244, 0),
    [604] = {.count = 1}, SHIFT(254, 0),
    [606] = {.count = 1}, SHIFT(255, 0),
    [608] = {.count = 1}, SHIFT(243, 0),
    [610] = {.count = 1}, SHIFT(250, 0),
    [612] = {.count = 1}, SHIFT(245, 0),
    [614] = {.count = 1}, SHIFT(246, 0),
    [616] = {.count = 1}, SHIFT(247, 0),
    [618] = {.count = 1}, SHIFT(248, 0),
    [620] = {.count = 1}, SHIFT(249, 0),
    [622] = {.count = 1}, SHIFT(251, 0),
    [624] = {.count = 1}, SHIFT(252, 0),
    [626] = {.count = 1}, SHIFT(253, 0),
    [628] = {.count = 1}, SHIFT(256, 0),
    [630] = {.count = 1}, SHIFT(258, 0),
    [632] = {.count = 1}, SHIFT(262, 0),
    [634] = {.count = 1}, SHIFT(263, 0),
    [636] = {.count = 1}, SHIFT(269, 0),
    [638] = {.count = 1}, SHIFT(265, 0),
    [640] = {.count = 1}, SHIFT(264, 0),
    [642] = {.count = 1}, SHIFT(266, 0),
    [644] = {.count = 1}, SHIFT(267, 0),
    [646] = {.count = 1}, SHIFT(268, 0),
    [648] = {.count = 1}, SHIFT(273, 0),
    [650] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [652] = {.count = 1}, SHIFT(274, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
