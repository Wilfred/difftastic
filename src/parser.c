#include "tree_sitter/parser.h"

#define STATE_COUNT 299
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
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(118);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(119);
            LEX_ERROR();
        case 117:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(72);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(120);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(99);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 121:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(117);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(125);
            if (lookahead == 'w')
                ADVANCE(134);
            LEX_ERROR();
        case 123:
            if (lookahead == 'f')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_if);
        case 125:
            if (lookahead == 'n')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'l')
                ADVANCE(127);
            if (lookahead == 't')
                ADVANCE(131);
            LEX_ERROR();
        case 127:
            if (lookahead == 'e')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 's')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 's')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(anon_sym_unless);
        case 131:
            if (lookahead == 'i')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'l')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(anon_sym_until);
        case 134:
            if (lookahead == 'h')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 'i')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'l')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 'e')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            ACCEPT_TOKEN(anon_sym_while);
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'd')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 'o')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_do);
        case 142:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(125);
            if (lookahead == 'w')
                ADVANCE(134);
            LEX_ERROR();
        case 143:
            if (lookahead == ':')
                ADVANCE(25);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(118);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(119);
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
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(148);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            LEX_ERROR();
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'd')
                ADVANCE(140);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'd')
                ADVANCE(140);
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
                ADVANCE(143);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(125);
            if (lookahead == 'w')
                ADVANCE(134);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(125);
            if (lookahead == 'w')
                ADVANCE(134);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(119);
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
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(157);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(119);
            LEX_ERROR();
        case 157:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 158:
            ACCEPT_TOKEN(anon_sym_LT);
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
                ADVANCE(117);
            if (lookahead == 'e')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(125);
            if (lookahead == 'w')
                ADVANCE(134);
            LEX_ERROR();
        case 160:
            if (lookahead == 'n')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 'd')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            ACCEPT_TOKEN(anon_sym_end);
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
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'e')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(125);
            if (lookahead == 'w')
                ADVANCE(134);
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
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == 'e')
                ADVANCE(160);
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
                ADVANCE(117);
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
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 167:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(118);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(117);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == '*')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(117);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(75);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 's')
                ADVANCE(89);
            if (lookahead == 'u')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(114);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(143);
            if (lookahead == '=')
                ADVANCE(117);
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
                ADVANCE(166);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 116,
    [1] = 121,
    [2] = 122,
    [3] = 122,
    [4] = 122,
    [5] = 139,
    [6] = 139,
    [7] = 122,
    [8] = 142,
    [9] = 142,
    [10] = 144,
    [11] = 144,
    [12] = 144,
    [13] = 145,
    [14] = 146,
    [15] = 146,
    [16] = 146,
    [17] = 147,
    [18] = 142,
    [19] = 139,
    [20] = 139,
    [21] = 149,
    [22] = 150,
    [23] = 150,
    [24] = 145,
    [25] = 146,
    [26] = 151,
    [27] = 150,
    [28] = 150,
    [29] = 152,
    [30] = 152,
    [31] = 152,
    [32] = 139,
    [33] = 152,
    [34] = 153,
    [35] = 153,
    [36] = 144,
    [37] = 144,
    [38] = 144,
    [39] = 145,
    [40] = 146,
    [41] = 146,
    [42] = 146,
    [43] = 153,
    [44] = 154,
    [45] = 155,
    [46] = 156,
    [47] = 155,
    [48] = 159,
    [49] = 159,
    [50] = 159,
    [51] = 139,
    [52] = 159,
    [53] = 163,
    [54] = 163,
    [55] = 152,
    [56] = 144,
    [57] = 144,
    [58] = 144,
    [59] = 145,
    [60] = 146,
    [61] = 146,
    [62] = 146,
    [63] = 163,
    [64] = 154,
    [65] = 155,
    [66] = 159,
    [67] = 159,
    [68] = 145,
    [69] = 164,
    [70] = 159,
    [71] = 165,
    [72] = 167,
    [73] = 145,
    [74] = 159,
    [75] = 159,
    [76] = 159,
    [77] = 164,
    [78] = 163,
    [79] = 168,
    [80] = 155,
    [81] = 146,
    [82] = 169,
    [83] = 155,
    [84] = 154,
    [85] = 146,
    [86] = 169,
    [87] = 154,
    [88] = 155,
    [89] = 159,
    [90] = 159,
    [91] = 164,
    [92] = 159,
    [93] = 159,
    [94] = 159,
    [95] = 159,
    [96] = 164,
    [97] = 159,
    [98] = 159,
    [99] = 164,
    [100] = 159,
    [101] = 152,
    [102] = 145,
    [103] = 170,
    [104] = 165,
    [105] = 163,
    [106] = 152,
    [107] = 163,
    [108] = 152,
    [109] = 170,
    [110] = 171,
    [111] = 171,
    [112] = 154,
    [113] = 155,
    [114] = 172,
    [115] = 146,
    [116] = 173,
    [117] = 154,
    [118] = 174,
    [119] = 146,
    [120] = 173,
    [121] = 154,
    [122] = 173,
    [123] = 154,
    [124] = 173,
    [125] = 154,
    [126] = 170,
    [127] = 155,
    [128] = 146,
    [129] = 175,
    [130] = 170,
    [131] = 174,
    [132] = 146,
    [133] = 175,
    [134] = 170,
    [135] = 175,
    [136] = 170,
    [137] = 175,
    [138] = 170,
    [139] = 159,
    [140] = 159,
    [141] = 164,
    [142] = 159,
    [143] = 159,
    [144] = 155,
    [145] = 159,
    [146] = 164,
    [147] = 159,
    [148] = 159,
    [149] = 159,
    [150] = 164,
    [151] = 144,
    [152] = 144,
    [153] = 159,
    [154] = 159,
    [155] = 146,
    [156] = 176,
    [157] = 159,
    [158] = 155,
    [159] = 159,
    [160] = 159,
    [161] = 164,
    [162] = 159,
    [163] = 159,
    [164] = 164,
    [165] = 164,
    [166] = 152,
    [167] = 152,
    [168] = 153,
    [169] = 168,
    [170] = 155,
    [171] = 146,
    [172] = 169,
    [173] = 155,
    [174] = 154,
    [175] = 155,
    [176] = 159,
    [177] = 152,
    [178] = 164,
    [179] = 152,
    [180] = 152,
    [181] = 159,
    [182] = 152,
    [183] = 164,
    [184] = 159,
    [185] = 152,
    [186] = 164,
    [187] = 152,
    [188] = 152,
    [189] = 170,
    [190] = 153,
    [191] = 153,
    [192] = 171,
    [193] = 154,
    [194] = 155,
    [195] = 172,
    [196] = 170,
    [197] = 155,
    [198] = 159,
    [199] = 152,
    [200] = 164,
    [201] = 152,
    [202] = 152,
    [203] = 155,
    [204] = 159,
    [205] = 164,
    [206] = 152,
    [207] = 159,
    [208] = 152,
    [209] = 164,
    [210] = 144,
    [211] = 152,
    [212] = 152,
    [213] = 146,
    [214] = 176,
    [215] = 159,
    [216] = 155,
    [217] = 159,
    [218] = 152,
    [219] = 164,
    [220] = 152,
    [221] = 152,
    [222] = 164,
    [223] = 170,
    [224] = 150,
    [225] = 150,
    [226] = 146,
    [227] = 139,
    [228] = 177,
    [229] = 149,
    [230] = 139,
    [231] = 154,
    [232] = 155,
    [233] = 159,
    [234] = 122,
    [235] = 164,
    [236] = 122,
    [237] = 122,
    [238] = 142,
    [239] = 168,
    [240] = 155,
    [241] = 146,
    [242] = 169,
    [243] = 155,
    [244] = 154,
    [245] = 155,
    [246] = 159,
    [247] = 122,
    [248] = 164,
    [249] = 122,
    [250] = 122,
    [251] = 159,
    [252] = 122,
    [253] = 164,
    [254] = 159,
    [255] = 122,
    [256] = 164,
    [257] = 122,
    [258] = 152,
    [259] = 170,
    [260] = 142,
    [261] = 142,
    [262] = 171,
    [263] = 154,
    [264] = 155,
    [265] = 172,
    [266] = 170,
    [267] = 155,
    [268] = 159,
    [269] = 122,
    [270] = 164,
    [271] = 122,
    [272] = 122,
    [273] = 155,
    [274] = 159,
    [275] = 164,
    [276] = 122,
    [277] = 159,
    [278] = 122,
    [279] = 164,
    [280] = 144,
    [281] = 122,
    [282] = 122,
    [283] = 122,
    [284] = 146,
    [285] = 176,
    [286] = 159,
    [287] = 155,
    [288] = 159,
    [289] = 122,
    [290] = 164,
    [291] = 122,
    [292] = 122,
    [293] = 164,
    [294] = 145,
    [295] = 121,
    [296] = 165,
    [297] = 122,
    [298] = 121,
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
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [9] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [ts_builtin_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_COLON_COLON] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [10] = {
        [sym__function_name] = 72,
        [anon_sym_PIPE] = 74,
        [anon_sym_STAR] = 74,
        [anon_sym_AMP] = 74,
        [anon_sym_LT] = 74,
        [sym_identifier] = 74,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [11] = {
        [sym__function_name] = 76,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [12] = {
        [sym__function_name] = 80,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 82,
        [anon_sym_CARET] = 82,
        [anon_sym_LT_EQ_GT] = 82,
        [anon_sym_EQ_EQ] = 82,
        [anon_sym_EQ_EQ_EQ] = 82,
        [anon_sym_EQ_TILDE] = 82,
        [anon_sym_GT] = 82,
        [anon_sym_GT_EQ] = 82,
        [anon_sym_LT_EQ] = 82,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_SLASH] = 82,
        [anon_sym_PERCENT] = 82,
        [anon_sym_STAR_STAR] = 82,
        [anon_sym_LT_LT] = 82,
        [anon_sym_GT_GT] = 82,
        [anon_sym_TILDE] = 82,
        [anon_sym_PLUS_AT] = 82,
        [anon_sym_DASH_AT] = 82,
        [anon_sym_LBRACK_RBRACK] = 82,
        [anon_sym_LBRACK_RBRACK_EQ] = 82,
        [sym__line_break] = 40,
    },
    [13] = {
        [sym__statement] = 84,
        [sym__declaration] = 86,
        [sym_method_declaration] = 88,
        [sym_class_declaration] = 88,
        [sym_module_declaration] = 88,
        [sym__call] = 90,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 86,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [anon_sym_undef] = 98,
        [anon_sym_alias] = 100,
        [anon_sym_def] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_class] = 106,
        [anon_sym_COLON_COLON] = 108,
        [anon_sym_module] = 110,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [sym_identifier] = 112,
        [sym_comment] = 40,
        [sym_symbol] = 92,
        [sym__line_break] = 40,
    },
    [14] = {
        [sym_identifier] = 114,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [15] = {
        [sym_identifier] = 116,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [16] = {
        [sym_identifier] = 118,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [17] = {
        [sym__call_arguments] = 120,
        [sym__command] = 122,
        [sym__argument] = 124,
        [sym__primary] = 126,
        [sym__variable] = 128,
        [anon_sym_do] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_super] = 136,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [18] = {
        [sym__terminator] = 140,
        [aux_sym_program_repeat1] = 140,
        [ts_builtin_sym_end] = 140,
        [anon_sym_if] = 140,
        [anon_sym_while] = 140,
        [anon_sym_unless] = 140,
        [anon_sym_until] = 140,
        [anon_sym_COLON_COLON] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 140,
        [anon_sym_SEMI] = 140,
    },
    [19] = {
        [anon_sym_do] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [20] = {
        [anon_sym_do] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [21] = {
        [aux_sym__call_arguments_repeat1] = 146,
        [anon_sym_do] = 144,
        [anon_sym_COMMA] = 148,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [22] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [anon_sym_COLON_COLON] = 150,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [23] = {
        [aux_sym__call_arguments_repeat1] = 70,
        [anon_sym_do] = 70,
        [anon_sym_COMMA] = 70,
        [anon_sym_COLON_COLON] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [24] = {
        [sym__statement] = 152,
        [sym__declaration] = 86,
        [sym_method_declaration] = 88,
        [sym_class_declaration] = 88,
        [sym_module_declaration] = 88,
        [sym__call] = 90,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 86,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [anon_sym_undef] = 98,
        [anon_sym_alias] = 100,
        [anon_sym_def] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_class] = 106,
        [anon_sym_COLON_COLON] = 108,
        [anon_sym_module] = 110,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [sym_identifier] = 112,
        [sym_comment] = 40,
        [sym_symbol] = 92,
        [sym__line_break] = 40,
    },
    [25] = {
        [sym_identifier] = 154,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [26] = {
        [sym__call_arguments] = 120,
        [sym__command] = 122,
        [sym__argument] = 124,
        [sym__primary] = 126,
        [sym__variable] = 128,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_super] = 136,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 140,
        [anon_sym_do] = 140,
        [anon_sym_COMMA] = 140,
        [anon_sym_COLON_COLON] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [28] = {
        [aux_sym__call_arguments_repeat1] = 156,
        [anon_sym_do] = 156,
        [anon_sym_COMMA] = 156,
        [anon_sym_COLON_COLON] = 156,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [29] = {
        [sym__terminator] = 158,
        [aux_sym_program_repeat1] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 162,
        [anon_sym_unless] = 162,
        [anon_sym_until] = 162,
        [anon_sym_RPAREN] = 164,
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
        [anon_sym_do] = 166,
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
        [anon_sym_COLON_COLON] = 168,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [35] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_RPAREN] = 70,
        [anon_sym_COLON_COLON] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [36] = {
        [sym__function_name] = 170,
        [anon_sym_PIPE] = 172,
        [anon_sym_STAR] = 172,
        [anon_sym_AMP] = 172,
        [anon_sym_LT] = 172,
        [sym_identifier] = 172,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 172,
        [anon_sym_CARET] = 172,
        [anon_sym_LT_EQ_GT] = 172,
        [anon_sym_EQ_EQ] = 172,
        [anon_sym_EQ_EQ_EQ] = 172,
        [anon_sym_EQ_TILDE] = 172,
        [anon_sym_GT] = 172,
        [anon_sym_GT_EQ] = 172,
        [anon_sym_LT_EQ] = 172,
        [anon_sym_PLUS] = 172,
        [anon_sym_DASH] = 172,
        [anon_sym_SLASH] = 172,
        [anon_sym_PERCENT] = 172,
        [anon_sym_STAR_STAR] = 172,
        [anon_sym_LT_LT] = 172,
        [anon_sym_GT_GT] = 172,
        [anon_sym_TILDE] = 172,
        [anon_sym_PLUS_AT] = 172,
        [anon_sym_DASH_AT] = 172,
        [anon_sym_LBRACK_RBRACK] = 172,
        [anon_sym_LBRACK_RBRACK_EQ] = 172,
        [sym__line_break] = 40,
    },
    [37] = {
        [sym__function_name] = 174,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [38] = {
        [sym__function_name] = 176,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 82,
        [anon_sym_CARET] = 82,
        [anon_sym_LT_EQ_GT] = 82,
        [anon_sym_EQ_EQ] = 82,
        [anon_sym_EQ_EQ_EQ] = 82,
        [anon_sym_EQ_TILDE] = 82,
        [anon_sym_GT] = 82,
        [anon_sym_GT_EQ] = 82,
        [anon_sym_LT_EQ] = 82,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_SLASH] = 82,
        [anon_sym_PERCENT] = 82,
        [anon_sym_STAR_STAR] = 82,
        [anon_sym_LT_LT] = 82,
        [anon_sym_GT_GT] = 82,
        [anon_sym_TILDE] = 82,
        [anon_sym_PLUS_AT] = 82,
        [anon_sym_DASH_AT] = 82,
        [anon_sym_LBRACK_RBRACK] = 82,
        [anon_sym_LBRACK_RBRACK_EQ] = 82,
        [sym__line_break] = 40,
    },
    [39] = {
        [sym__statement] = 178,
        [sym__declaration] = 86,
        [sym_method_declaration] = 88,
        [sym_class_declaration] = 88,
        [sym_module_declaration] = 88,
        [sym__call] = 90,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 86,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [anon_sym_undef] = 98,
        [anon_sym_alias] = 100,
        [anon_sym_def] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_class] = 106,
        [anon_sym_COLON_COLON] = 108,
        [anon_sym_module] = 110,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [sym_identifier] = 112,
        [sym_comment] = 40,
        [sym_symbol] = 92,
        [sym__line_break] = 40,
    },
    [40] = {
        [sym_identifier] = 180,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [41] = {
        [sym_identifier] = 182,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [42] = {
        [sym_identifier] = 184,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [43] = {
        [sym__terminator] = 140,
        [aux_sym_program_repeat1] = 140,
        [anon_sym_if] = 140,
        [anon_sym_while] = 140,
        [anon_sym_unless] = 140,
        [anon_sym_until] = 140,
        [anon_sym_RPAREN] = 140,
        [anon_sym_COLON_COLON] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 140,
        [anon_sym_SEMI] = 140,
    },
    [44] = {
        [sym__terminator] = 186,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [45] = {
        [sym__statement] = 192,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 206,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [46] = {
        [sym__statement] = 224,
        [sym__declaration] = 224,
        [sym_method_declaration] = 224,
        [sym_argument_list] = 226,
        [sym_class_declaration] = 224,
        [sym_module_declaration] = 224,
        [sym__call] = 224,
        [sym__command] = 224,
        [sym__function_call] = 224,
        [sym__expression] = 224,
        [sym__argument] = 224,
        [sym__primary] = 224,
        [sym__variable] = 224,
        [sym__terminator] = 226,
        [aux_sym_class_declaration_repeat1] = 226,
        [anon_sym_end] = 224,
        [anon_sym_undef] = 224,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 224,
        [anon_sym_LPAREN] = 224,
        [anon_sym_STAR] = 226,
        [anon_sym_AMP] = 226,
        [anon_sym_class] = 224,
        [anon_sym_LT] = 226,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 224,
        [anon_sym_super] = 224,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 40,
        [sym_symbol] = 224,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 226,
    },
    [47] = {
        [sym__statement] = 224,
        [sym__declaration] = 224,
        [sym_method_declaration] = 224,
        [sym_class_declaration] = 224,
        [sym_module_declaration] = 224,
        [sym__call] = 224,
        [sym__command] = 224,
        [sym__function_call] = 224,
        [sym__expression] = 224,
        [sym__argument] = 224,
        [sym__primary] = 224,
        [sym__variable] = 224,
        [anon_sym_end] = 224,
        [anon_sym_undef] = 224,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 224,
        [anon_sym_LPAREN] = 224,
        [anon_sym_class] = 224,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 224,
        [anon_sym_super] = 224,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 40,
        [sym_symbol] = 224,
        [sym__line_break] = 40,
    },
    [48] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 230,
        [anon_sym_end] = 232,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
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
        [anon_sym_do] = 236,
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
        [anon_sym_COLON_COLON] = 238,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [54] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_COLON_COLON] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [55] = {
        [sym__terminator] = 240,
        [aux_sym_program_repeat1] = 240,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [anon_sym_RPAREN] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 240,
        [anon_sym_SEMI] = 240,
    },
    [56] = {
        [sym__function_name] = 242,
        [anon_sym_PIPE] = 244,
        [anon_sym_STAR] = 244,
        [anon_sym_AMP] = 244,
        [anon_sym_LT] = 244,
        [sym_identifier] = 244,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 244,
        [anon_sym_CARET] = 244,
        [anon_sym_LT_EQ_GT] = 244,
        [anon_sym_EQ_EQ] = 244,
        [anon_sym_EQ_EQ_EQ] = 244,
        [anon_sym_EQ_TILDE] = 244,
        [anon_sym_GT] = 244,
        [anon_sym_GT_EQ] = 244,
        [anon_sym_LT_EQ] = 244,
        [anon_sym_PLUS] = 244,
        [anon_sym_DASH] = 244,
        [anon_sym_SLASH] = 244,
        [anon_sym_PERCENT] = 244,
        [anon_sym_STAR_STAR] = 244,
        [anon_sym_LT_LT] = 244,
        [anon_sym_GT_GT] = 244,
        [anon_sym_TILDE] = 244,
        [anon_sym_PLUS_AT] = 244,
        [anon_sym_DASH_AT] = 244,
        [anon_sym_LBRACK_RBRACK] = 244,
        [anon_sym_LBRACK_RBRACK_EQ] = 244,
        [sym__line_break] = 40,
    },
    [57] = {
        [sym__function_name] = 246,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [58] = {
        [sym__function_name] = 248,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 82,
        [anon_sym_CARET] = 82,
        [anon_sym_LT_EQ_GT] = 82,
        [anon_sym_EQ_EQ] = 82,
        [anon_sym_EQ_EQ_EQ] = 82,
        [anon_sym_EQ_TILDE] = 82,
        [anon_sym_GT] = 82,
        [anon_sym_GT_EQ] = 82,
        [anon_sym_LT_EQ] = 82,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_SLASH] = 82,
        [anon_sym_PERCENT] = 82,
        [anon_sym_STAR_STAR] = 82,
        [anon_sym_LT_LT] = 82,
        [anon_sym_GT_GT] = 82,
        [anon_sym_TILDE] = 82,
        [anon_sym_PLUS_AT] = 82,
        [anon_sym_DASH_AT] = 82,
        [anon_sym_LBRACK_RBRACK] = 82,
        [anon_sym_LBRACK_RBRACK_EQ] = 82,
        [sym__line_break] = 40,
    },
    [59] = {
        [sym__statement] = 250,
        [sym__declaration] = 86,
        [sym_method_declaration] = 88,
        [sym_class_declaration] = 88,
        [sym_module_declaration] = 88,
        [sym__call] = 90,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 86,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [anon_sym_undef] = 98,
        [anon_sym_alias] = 100,
        [anon_sym_def] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_class] = 106,
        [anon_sym_COLON_COLON] = 108,
        [anon_sym_module] = 110,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [sym_identifier] = 112,
        [sym_comment] = 40,
        [sym_symbol] = 92,
        [sym__line_break] = 40,
    },
    [60] = {
        [sym_identifier] = 252,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [61] = {
        [sym_identifier] = 254,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [62] = {
        [sym_identifier] = 256,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [63] = {
        [sym__terminator] = 140,
        [aux_sym_program_repeat1] = 140,
        [anon_sym_end] = 140,
        [anon_sym_if] = 140,
        [anon_sym_while] = 140,
        [anon_sym_unless] = 140,
        [anon_sym_until] = 140,
        [anon_sym_COLON_COLON] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 140,
        [anon_sym_SEMI] = 140,
    },
    [64] = {
        [sym__terminator] = 258,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [65] = {
        [sym__statement] = 260,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 262,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [66] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 264,
        [anon_sym_end] = 266,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [67] = {
        [sym__terminator] = 240,
        [aux_sym_program_repeat1] = 240,
        [anon_sym_end] = 240,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 240,
        [anon_sym_SEMI] = 240,
    },
    [68] = {
        [sym__statement] = 268,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [69] = {
        [anon_sym_end] = 270,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [70] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 272,
        [anon_sym_end] = 272,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 40,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [71] = {
        [sym__expression] = 274,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 214,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [72] = {
        [sym__statement] = 224,
        [sym__declaration] = 224,
        [sym_method_declaration] = 224,
        [sym_class_declaration] = 224,
        [sym_module_declaration] = 224,
        [sym__call] = 224,
        [sym__command] = 224,
        [sym__function_call] = 224,
        [sym__expression] = 224,
        [sym__argument] = 224,
        [sym__primary] = 224,
        [sym__variable] = 224,
        [sym__terminator] = 226,
        [aux_sym_program_repeat1] = 226,
        [ts_builtin_sym_end] = 226,
        [anon_sym_end] = 226,
        [anon_sym_undef] = 224,
        [anon_sym_alias] = 224,
        [anon_sym_if] = 226,
        [anon_sym_while] = 226,
        [anon_sym_unless] = 226,
        [anon_sym_until] = 226,
        [anon_sym_def] = 224,
        [anon_sym_LPAREN] = 224,
        [anon_sym_RPAREN] = 226,
        [anon_sym_class] = 224,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 224,
        [anon_sym_super] = 224,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 40,
        [sym_symbol] = 224,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 226,
    },
    [73] = {
        [sym__statement] = 224,
        [sym__declaration] = 224,
        [sym_method_declaration] = 224,
        [sym_class_declaration] = 224,
        [sym_module_declaration] = 224,
        [sym__call] = 224,
        [sym__command] = 224,
        [sym__function_call] = 224,
        [sym__expression] = 224,
        [sym__argument] = 224,
        [sym__primary] = 224,
        [sym__variable] = 224,
        [anon_sym_undef] = 224,
        [anon_sym_alias] = 224,
        [anon_sym_def] = 224,
        [anon_sym_LPAREN] = 224,
        [anon_sym_class] = 224,
        [anon_sym_COLON_COLON] = 224,
        [anon_sym_module] = 224,
        [anon_sym_super] = 224,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 40,
        [sym_symbol] = 224,
        [sym__line_break] = 40,
    },
    [74] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [anon_sym_end] = 276,
        [anon_sym_if] = 276,
        [anon_sym_while] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_until] = 276,
        [sym_comment] = 40,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [75] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 278,
        [anon_sym_end] = 278,
        [anon_sym_if] = 278,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 278,
        [anon_sym_until] = 278,
        [sym_comment] = 40,
        [sym__line_break] = 278,
        [anon_sym_SEMI] = 278,
    },
    [76] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_end] = 282,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [77] = {
        [anon_sym_end] = 284,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [78] = {
        [sym__terminator] = 156,
        [aux_sym_program_repeat1] = 156,
        [anon_sym_end] = 156,
        [anon_sym_if] = 156,
        [anon_sym_while] = 156,
        [anon_sym_unless] = 156,
        [anon_sym_until] = 156,
        [anon_sym_COLON_COLON] = 156,
        [sym_comment] = 40,
        [sym__line_break] = 156,
        [anon_sym_SEMI] = 156,
    },
    [79] = {
        [sym__terminator] = 286,
        [anon_sym_LT] = 288,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [80] = {
        [sym__statement] = 290,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 292,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [81] = {
        [sym_identifier] = 294,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [82] = {
        [sym__terminator] = 296,
        [aux_sym_class_declaration_repeat1] = 298,
        [anon_sym_COLON_COLON] = 300,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [83] = {
        [sym__statement] = 302,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 304,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [84] = {
        [sym__terminator] = 306,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [85] = {
        [sym_identifier] = 308,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [86] = {
        [sym__terminator] = 310,
        [aux_sym_class_declaration_repeat1] = 312,
        [anon_sym_COLON_COLON] = 300,
        [sym_comment] = 40,
        [sym__line_break] = 310,
        [anon_sym_SEMI] = 310,
    },
    [87] = {
        [sym__terminator] = 314,
        [sym_comment] = 40,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [88] = {
        [sym__statement] = 316,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 318,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [89] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 320,
        [anon_sym_end] = 322,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [90] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [sym_comment] = 40,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [91] = {
        [anon_sym_end] = 326,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [92] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_end] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [sym_comment] = 40,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [93] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_end] = 330,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 40,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [94] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 318,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [95] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 40,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [96] = {
        [anon_sym_end] = 322,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [97] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 338,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [98] = {
        [sym__terminator] = 340,
        [aux_sym_program_repeat1] = 340,
        [anon_sym_end] = 340,
        [anon_sym_if] = 340,
        [anon_sym_while] = 340,
        [anon_sym_unless] = 340,
        [anon_sym_until] = 340,
        [sym_comment] = 40,
        [sym__line_break] = 340,
        [anon_sym_SEMI] = 340,
    },
    [99] = {
        [anon_sym_end] = 304,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [100] = {
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
    [101] = {
        [sym__terminator] = 158,
        [aux_sym_program_repeat1] = 344,
        [anon_sym_if] = 162,
        [anon_sym_while] = 162,
        [anon_sym_unless] = 162,
        [anon_sym_until] = 162,
        [anon_sym_RPAREN] = 346,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [102] = {
        [sym__statement] = 348,
        [sym__declaration] = 86,
        [sym_method_declaration] = 88,
        [sym_class_declaration] = 88,
        [sym_module_declaration] = 88,
        [sym__call] = 90,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 86,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [anon_sym_undef] = 98,
        [anon_sym_alias] = 100,
        [anon_sym_def] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_class] = 106,
        [anon_sym_COLON_COLON] = 108,
        [anon_sym_module] = 110,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [sym_identifier] = 112,
        [sym_comment] = 40,
        [sym_symbol] = 92,
        [sym__line_break] = 40,
    },
    [103] = {
        [anon_sym_RPAREN] = 350,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [104] = {
        [sym__expression] = 352,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 104,
        [anon_sym_COLON_COLON] = 108,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [sym_identifier] = 112,
        [sym_comment] = 40,
        [sym_symbol] = 92,
        [sym__line_break] = 40,
    },
    [105] = {
        [sym__terminator] = 354,
        [aux_sym_program_repeat1] = 354,
        [anon_sym_end] = 354,
        [anon_sym_if] = 354,
        [anon_sym_while] = 354,
        [anon_sym_unless] = 354,
        [anon_sym_until] = 354,
        [anon_sym_COLON_COLON] = 354,
        [sym_comment] = 40,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [106] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [anon_sym_if] = 276,
        [anon_sym_while] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_until] = 276,
        [anon_sym_RPAREN] = 276,
        [sym_comment] = 40,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [107] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_if] = 356,
        [anon_sym_while] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_until] = 356,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 40,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [108] = {
        [sym__terminator] = 158,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_if] = 162,
        [anon_sym_while] = 162,
        [anon_sym_unless] = 162,
        [anon_sym_until] = 162,
        [anon_sym_RPAREN] = 282,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [109] = {
        [anon_sym_RPAREN] = 284,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [110] = {
        [sym_argument_list] = 360,
        [sym__terminator] = 362,
        [anon_sym_LPAREN] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_AMP] = 366,
        [sym_identifier] = 368,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [111] = {
        [sym_argument_list] = 370,
        [sym__terminator] = 370,
        [anon_sym_LPAREN] = 370,
        [anon_sym_STAR] = 370,
        [anon_sym_AMP] = 370,
        [sym_identifier] = 370,
        [sym_comment] = 40,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [112] = {
        [sym__terminator] = 372,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [113] = {
        [sym__statement] = 374,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 376,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [114] = {
        [sym_argument_list] = 378,
        [anon_sym_RPAREN] = 372,
        [anon_sym_STAR] = 380,
        [anon_sym_AMP] = 380,
        [sym_identifier] = 382,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [115] = {
        [sym_identifier] = 384,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [116] = {
        [sym__terminator] = 386,
        [aux_sym_argument_list_repeat1] = 388,
        [anon_sym_COMMA] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [117] = {
        [sym__terminator] = 392,
        [sym_comment] = 40,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [118] = {
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 394,
        [sym_identifier] = 396,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [119] = {
        [sym_identifier] = 398,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [120] = {
        [sym__terminator] = 400,
        [aux_sym_argument_list_repeat1] = 402,
        [anon_sym_COMMA] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [121] = {
        [sym__terminator] = 404,
        [sym_comment] = 40,
        [sym__line_break] = 404,
        [anon_sym_SEMI] = 404,
    },
    [122] = {
        [sym__terminator] = 404,
        [aux_sym_argument_list_repeat1] = 406,
        [anon_sym_COMMA] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 404,
        [anon_sym_SEMI] = 404,
    },
    [123] = {
        [sym__terminator] = 408,
        [sym_comment] = 40,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [124] = {
        [sym__terminator] = 392,
        [aux_sym_argument_list_repeat1] = 410,
        [anon_sym_COMMA] = 390,
        [sym_comment] = 40,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [125] = {
        [sym__terminator] = 412,
        [sym_comment] = 40,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [126] = {
        [anon_sym_RPAREN] = 414,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [127] = {
        [sym__statement] = 416,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 418,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [128] = {
        [sym_identifier] = 420,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [129] = {
        [aux_sym_argument_list_repeat1] = 422,
        [anon_sym_RPAREN] = 386,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [130] = {
        [anon_sym_RPAREN] = 392,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [131] = {
        [anon_sym_STAR] = 426,
        [anon_sym_AMP] = 426,
        [sym_identifier] = 428,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [132] = {
        [sym_identifier] = 430,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [133] = {
        [aux_sym_argument_list_repeat1] = 432,
        [anon_sym_RPAREN] = 400,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [134] = {
        [anon_sym_RPAREN] = 404,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [135] = {
        [aux_sym_argument_list_repeat1] = 434,
        [anon_sym_RPAREN] = 404,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [136] = {
        [anon_sym_RPAREN] = 408,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [137] = {
        [aux_sym_argument_list_repeat1] = 436,
        [anon_sym_RPAREN] = 392,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [138] = {
        [anon_sym_RPAREN] = 412,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [139] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 440,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [140] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [141] = {
        [anon_sym_end] = 444,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [142] = {
        [sym__terminator] = 446,
        [aux_sym_program_repeat1] = 446,
        [anon_sym_end] = 446,
        [anon_sym_if] = 446,
        [anon_sym_while] = 446,
        [anon_sym_unless] = 446,
        [anon_sym_until] = 446,
        [sym_comment] = 40,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [143] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [sym_comment] = 40,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [144] = {
        [sym__statement] = 450,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 440,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [145] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 452,
        [anon_sym_end] = 444,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [146] = {
        [anon_sym_end] = 454,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [147] = {
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
    [148] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 458,
        [anon_sym_end] = 418,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [149] = {
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
    [150] = {
        [anon_sym_end] = 440,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [151] = {
        [sym__function_name] = 274,
        [anon_sym_PIPE] = 244,
        [anon_sym_STAR] = 244,
        [anon_sym_AMP] = 244,
        [anon_sym_LT] = 244,
        [sym_identifier] = 244,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 244,
        [anon_sym_CARET] = 244,
        [anon_sym_LT_EQ_GT] = 244,
        [anon_sym_EQ_EQ] = 244,
        [anon_sym_EQ_EQ_EQ] = 244,
        [anon_sym_EQ_TILDE] = 244,
        [anon_sym_GT] = 244,
        [anon_sym_GT_EQ] = 244,
        [anon_sym_LT_EQ] = 244,
        [anon_sym_PLUS] = 244,
        [anon_sym_DASH] = 244,
        [anon_sym_SLASH] = 244,
        [anon_sym_PERCENT] = 244,
        [anon_sym_STAR_STAR] = 244,
        [anon_sym_LT_LT] = 244,
        [anon_sym_GT_GT] = 244,
        [anon_sym_TILDE] = 244,
        [anon_sym_PLUS_AT] = 244,
        [anon_sym_DASH_AT] = 244,
        [anon_sym_LBRACK_RBRACK] = 244,
        [anon_sym_LBRACK_RBRACK_EQ] = 244,
        [sym__line_break] = 40,
    },
    [152] = {
        [sym__function_name] = 370,
        [anon_sym_PIPE] = 370,
        [anon_sym_STAR] = 370,
        [anon_sym_AMP] = 370,
        [anon_sym_LT] = 370,
        [sym_identifier] = 370,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 370,
        [anon_sym_CARET] = 370,
        [anon_sym_LT_EQ_GT] = 370,
        [anon_sym_EQ_EQ] = 370,
        [anon_sym_EQ_EQ_EQ] = 370,
        [anon_sym_EQ_TILDE] = 370,
        [anon_sym_GT] = 370,
        [anon_sym_GT_EQ] = 370,
        [anon_sym_LT_EQ] = 370,
        [anon_sym_PLUS] = 370,
        [anon_sym_DASH] = 370,
        [anon_sym_SLASH] = 370,
        [anon_sym_PERCENT] = 370,
        [anon_sym_STAR_STAR] = 370,
        [anon_sym_LT_LT] = 370,
        [anon_sym_GT_GT] = 370,
        [anon_sym_TILDE] = 370,
        [anon_sym_PLUS_AT] = 370,
        [anon_sym_DASH_AT] = 370,
        [anon_sym_LBRACK_RBRACK] = 370,
        [anon_sym_LBRACK_RBRACK_EQ] = 370,
        [sym__line_break] = 40,
    },
    [153] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [sym_comment] = 40,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [154] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [anon_sym_end] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [sym_comment] = 40,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [155] = {
        [sym_identifier] = 346,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [156] = {
        [sym__statement] = 464,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_PIPE] = 466,
        [anon_sym_end] = 274,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [157] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 468,
        [anon_sym_end] = 470,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [158] = {
        [sym__statement] = 472,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 470,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [159] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 474,
        [anon_sym_end] = 476,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [160] = {
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
    [161] = {
        [anon_sym_end] = 480,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [162] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_end] = 482,
        [anon_sym_if] = 482,
        [anon_sym_while] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_until] = 482,
        [sym_comment] = 40,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [163] = {
        [sym__terminator] = 484,
        [aux_sym_program_repeat1] = 484,
        [anon_sym_end] = 484,
        [anon_sym_if] = 484,
        [anon_sym_while] = 484,
        [anon_sym_unless] = 484,
        [anon_sym_until] = 484,
        [sym_comment] = 40,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [164] = {
        [anon_sym_end] = 476,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [165] = {
        [anon_sym_end] = 486,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [166] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 272,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [anon_sym_RPAREN] = 272,
        [sym_comment] = 40,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [167] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 278,
        [anon_sym_if] = 278,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 278,
        [anon_sym_until] = 278,
        [anon_sym_RPAREN] = 278,
        [sym_comment] = 40,
        [sym__line_break] = 278,
        [anon_sym_SEMI] = 278,
    },
    [168] = {
        [sym__terminator] = 156,
        [aux_sym_program_repeat1] = 156,
        [anon_sym_if] = 156,
        [anon_sym_while] = 156,
        [anon_sym_unless] = 156,
        [anon_sym_until] = 156,
        [anon_sym_RPAREN] = 156,
        [anon_sym_COLON_COLON] = 156,
        [sym_comment] = 40,
        [sym__line_break] = 156,
        [anon_sym_SEMI] = 156,
    },
    [169] = {
        [sym__terminator] = 488,
        [anon_sym_LT] = 490,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [170] = {
        [sym__statement] = 492,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 494,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [171] = {
        [sym_identifier] = 496,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [172] = {
        [sym__terminator] = 498,
        [aux_sym_class_declaration_repeat1] = 500,
        [anon_sym_COLON_COLON] = 300,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [173] = {
        [sym__statement] = 502,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 504,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [174] = {
        [sym__terminator] = 506,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [175] = {
        [sym__statement] = 508,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 510,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [176] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 512,
        [anon_sym_end] = 514,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [177] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [anon_sym_RPAREN] = 324,
        [sym_comment] = 40,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [178] = {
        [anon_sym_end] = 516,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [179] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [anon_sym_RPAREN] = 328,
        [sym_comment] = 40,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [180] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [anon_sym_RPAREN] = 330,
        [sym_comment] = 40,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [181] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 518,
        [anon_sym_end] = 510,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [182] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [anon_sym_RPAREN] = 334,
        [sym_comment] = 40,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [183] = {
        [anon_sym_end] = 514,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [184] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 520,
        [anon_sym_end] = 522,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [185] = {
        [sym__terminator] = 340,
        [aux_sym_program_repeat1] = 340,
        [anon_sym_if] = 340,
        [anon_sym_while] = 340,
        [anon_sym_unless] = 340,
        [anon_sym_until] = 340,
        [anon_sym_RPAREN] = 340,
        [sym_comment] = 40,
        [sym__line_break] = 340,
        [anon_sym_SEMI] = 340,
    },
    [186] = {
        [anon_sym_end] = 504,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [187] = {
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
    [188] = {
        [sym__terminator] = 158,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_if] = 162,
        [anon_sym_while] = 162,
        [anon_sym_unless] = 162,
        [anon_sym_until] = 162,
        [anon_sym_RPAREN] = 526,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [189] = {
        [anon_sym_RPAREN] = 528,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [190] = {
        [sym__terminator] = 354,
        [aux_sym_program_repeat1] = 354,
        [anon_sym_if] = 354,
        [anon_sym_while] = 354,
        [anon_sym_unless] = 354,
        [anon_sym_until] = 354,
        [anon_sym_RPAREN] = 354,
        [anon_sym_COLON_COLON] = 354,
        [sym_comment] = 40,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [191] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_if] = 356,
        [anon_sym_while] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_until] = 356,
        [anon_sym_RPAREN] = 356,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 40,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [192] = {
        [sym_argument_list] = 530,
        [sym__terminator] = 532,
        [anon_sym_LPAREN] = 534,
        [anon_sym_STAR] = 366,
        [anon_sym_AMP] = 366,
        [sym_identifier] = 368,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [193] = {
        [sym__terminator] = 536,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [194] = {
        [sym__statement] = 538,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 540,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [195] = {
        [sym_argument_list] = 542,
        [anon_sym_RPAREN] = 536,
        [anon_sym_STAR] = 380,
        [anon_sym_AMP] = 380,
        [sym_identifier] = 382,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [196] = {
        [anon_sym_RPAREN] = 544,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [197] = {
        [sym__statement] = 546,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 548,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [198] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 552,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [199] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [anon_sym_RPAREN] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [200] = {
        [anon_sym_end] = 554,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [201] = {
        [sym__terminator] = 446,
        [aux_sym_program_repeat1] = 446,
        [anon_sym_if] = 446,
        [anon_sym_while] = 446,
        [anon_sym_unless] = 446,
        [anon_sym_until] = 446,
        [anon_sym_RPAREN] = 446,
        [sym_comment] = 40,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [202] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_RPAREN] = 448,
        [sym_comment] = 40,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [203] = {
        [sym__statement] = 556,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 552,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [204] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 558,
        [anon_sym_end] = 554,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [205] = {
        [anon_sym_end] = 560,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [206] = {
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
    [207] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 562,
        [anon_sym_end] = 548,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [208] = {
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
    [209] = {
        [anon_sym_end] = 552,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [210] = {
        [sym__function_name] = 352,
        [anon_sym_PIPE] = 172,
        [anon_sym_STAR] = 172,
        [anon_sym_AMP] = 172,
        [anon_sym_LT] = 172,
        [sym_identifier] = 172,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 172,
        [anon_sym_CARET] = 172,
        [anon_sym_LT_EQ_GT] = 172,
        [anon_sym_EQ_EQ] = 172,
        [anon_sym_EQ_EQ_EQ] = 172,
        [anon_sym_EQ_TILDE] = 172,
        [anon_sym_GT] = 172,
        [anon_sym_GT_EQ] = 172,
        [anon_sym_LT_EQ] = 172,
        [anon_sym_PLUS] = 172,
        [anon_sym_DASH] = 172,
        [anon_sym_SLASH] = 172,
        [anon_sym_PERCENT] = 172,
        [anon_sym_STAR_STAR] = 172,
        [anon_sym_LT_LT] = 172,
        [anon_sym_GT_GT] = 172,
        [anon_sym_TILDE] = 172,
        [anon_sym_PLUS_AT] = 172,
        [anon_sym_DASH_AT] = 172,
        [anon_sym_LBRACK_RBRACK] = 172,
        [anon_sym_LBRACK_RBRACK_EQ] = 172,
        [sym__line_break] = 40,
    },
    [211] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [anon_sym_RPAREN] = 370,
        [sym_comment] = 40,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [212] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [anon_sym_RPAREN] = 462,
        [sym_comment] = 40,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [213] = {
        [sym_identifier] = 526,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [214] = {
        [sym__statement] = 564,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_PIPE] = 566,
        [anon_sym_end] = 352,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [215] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_end] = 570,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [216] = {
        [sym__statement] = 572,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 570,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [217] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 574,
        [anon_sym_end] = 576,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [218] = {
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
    [219] = {
        [anon_sym_end] = 578,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [220] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_if] = 482,
        [anon_sym_while] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_until] = 482,
        [anon_sym_RPAREN] = 482,
        [sym_comment] = 40,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [221] = {
        [sym__terminator] = 484,
        [aux_sym_program_repeat1] = 484,
        [anon_sym_if] = 484,
        [anon_sym_while] = 484,
        [anon_sym_unless] = 484,
        [anon_sym_until] = 484,
        [anon_sym_RPAREN] = 484,
        [sym_comment] = 40,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [222] = {
        [anon_sym_end] = 576,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [223] = {
        [anon_sym_RPAREN] = 580,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [224] = {
        [aux_sym__call_arguments_repeat1] = 354,
        [anon_sym_do] = 354,
        [anon_sym_COMMA] = 354,
        [anon_sym_COLON_COLON] = 354,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [225] = {
        [aux_sym__call_arguments_repeat1] = 356,
        [anon_sym_do] = 356,
        [anon_sym_COMMA] = 356,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [226] = {
        [sym_identifier] = 164,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [227] = {
        [anon_sym_do] = 582,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [228] = {
        [sym__argument] = 584,
        [sym__primary] = 126,
        [sym__variable] = 128,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [229] = {
        [aux_sym__call_arguments_repeat1] = 586,
        [anon_sym_do] = 588,
        [anon_sym_COMMA] = 148,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [230] = {
        [anon_sym_do] = 590,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [231] = {
        [sym__terminator] = 592,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [232] = {
        [sym__statement] = 594,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 596,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [233] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_end] = 600,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [234] = {
        [sym__terminator] = 240,
        [aux_sym_program_repeat1] = 240,
        [ts_builtin_sym_end] = 240,
        [anon_sym_if] = 240,
        [anon_sym_while] = 240,
        [anon_sym_unless] = 240,
        [anon_sym_until] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 240,
        [anon_sym_SEMI] = 240,
    },
    [235] = {
        [anon_sym_end] = 602,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [236] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 272,
        [ts_builtin_sym_end] = 272,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 40,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [237] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 278,
        [ts_builtin_sym_end] = 278,
        [anon_sym_if] = 278,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 278,
        [anon_sym_until] = 278,
        [sym_comment] = 40,
        [sym__line_break] = 278,
        [anon_sym_SEMI] = 278,
    },
    [238] = {
        [sym__terminator] = 156,
        [aux_sym_program_repeat1] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_if] = 156,
        [anon_sym_while] = 156,
        [anon_sym_unless] = 156,
        [anon_sym_until] = 156,
        [anon_sym_COLON_COLON] = 156,
        [sym_comment] = 40,
        [sym__line_break] = 156,
        [anon_sym_SEMI] = 156,
    },
    [239] = {
        [sym__terminator] = 604,
        [anon_sym_LT] = 606,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [240] = {
        [sym__statement] = 608,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 610,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [241] = {
        [sym_identifier] = 612,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [242] = {
        [sym__terminator] = 614,
        [aux_sym_class_declaration_repeat1] = 616,
        [anon_sym_COLON_COLON] = 300,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [243] = {
        [sym__statement] = 618,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 620,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [244] = {
        [sym__terminator] = 622,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [245] = {
        [sym__statement] = 624,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 626,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [246] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 630,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [247] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [ts_builtin_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [sym_comment] = 40,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [248] = {
        [anon_sym_end] = 632,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [249] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [ts_builtin_sym_end] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [sym_comment] = 40,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [250] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 40,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [251] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 634,
        [anon_sym_end] = 626,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [252] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 40,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [253] = {
        [anon_sym_end] = 630,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [254] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 638,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [255] = {
        [sym__terminator] = 340,
        [aux_sym_program_repeat1] = 340,
        [ts_builtin_sym_end] = 340,
        [anon_sym_if] = 340,
        [anon_sym_while] = 340,
        [anon_sym_unless] = 340,
        [anon_sym_until] = 340,
        [sym_comment] = 40,
        [sym__line_break] = 340,
        [anon_sym_SEMI] = 340,
    },
    [256] = {
        [anon_sym_end] = 620,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [257] = {
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
    [258] = {
        [sym__terminator] = 158,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_if] = 162,
        [anon_sym_while] = 162,
        [anon_sym_unless] = 162,
        [anon_sym_until] = 162,
        [anon_sym_RPAREN] = 642,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [259] = {
        [anon_sym_RPAREN] = 644,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [260] = {
        [sym__terminator] = 354,
        [aux_sym_program_repeat1] = 354,
        [ts_builtin_sym_end] = 354,
        [anon_sym_if] = 354,
        [anon_sym_while] = 354,
        [anon_sym_unless] = 354,
        [anon_sym_until] = 354,
        [anon_sym_COLON_COLON] = 354,
        [sym_comment] = 40,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [261] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [ts_builtin_sym_end] = 356,
        [anon_sym_if] = 356,
        [anon_sym_while] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_until] = 356,
        [anon_sym_COLON_COLON] = 356,
        [sym_comment] = 40,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [262] = {
        [sym_argument_list] = 646,
        [sym__terminator] = 648,
        [anon_sym_LPAREN] = 650,
        [anon_sym_STAR] = 366,
        [anon_sym_AMP] = 366,
        [sym_identifier] = 368,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [263] = {
        [sym__terminator] = 652,
        [sym_comment] = 40,
        [sym__line_break] = 188,
        [anon_sym_SEMI] = 190,
    },
    [264] = {
        [sym__statement] = 654,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 656,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [265] = {
        [sym_argument_list] = 658,
        [anon_sym_RPAREN] = 652,
        [anon_sym_STAR] = 380,
        [anon_sym_AMP] = 380,
        [sym_identifier] = 382,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [266] = {
        [anon_sym_RPAREN] = 660,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [267] = {
        [sym__statement] = 662,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 664,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [268] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 668,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [269] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [ts_builtin_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [sym_comment] = 40,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [270] = {
        [anon_sym_end] = 670,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [271] = {
        [sym__terminator] = 446,
        [aux_sym_program_repeat1] = 446,
        [ts_builtin_sym_end] = 446,
        [anon_sym_if] = 446,
        [anon_sym_while] = 446,
        [anon_sym_unless] = 446,
        [anon_sym_until] = 446,
        [sym_comment] = 40,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [272] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [ts_builtin_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [sym_comment] = 40,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [273] = {
        [sym__statement] = 672,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 668,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [274] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 674,
        [anon_sym_end] = 670,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [275] = {
        [anon_sym_end] = 676,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [276] = {
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
    [277] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 678,
        [anon_sym_end] = 664,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [278] = {
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
    [279] = {
        [anon_sym_end] = 668,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [280] = {
        [sym__function_name] = 680,
        [anon_sym_PIPE] = 74,
        [anon_sym_STAR] = 74,
        [anon_sym_AMP] = 74,
        [anon_sym_LT] = 74,
        [sym_identifier] = 74,
        [sym_comment] = 40,
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
        [sym__line_break] = 40,
    },
    [281] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [ts_builtin_sym_end] = 276,
        [anon_sym_if] = 276,
        [anon_sym_while] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_until] = 276,
        [sym_comment] = 40,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [282] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [ts_builtin_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [sym_comment] = 40,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [283] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [ts_builtin_sym_end] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [sym_comment] = 40,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [284] = {
        [sym_identifier] = 642,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [285] = {
        [sym__statement] = 682,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_PIPE] = 684,
        [anon_sym_end] = 680,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [286] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_end] = 688,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [287] = {
        [sym__statement] = 690,
        [sym__declaration] = 194,
        [sym_method_declaration] = 196,
        [sym_class_declaration] = 196,
        [sym_module_declaration] = 196,
        [sym__call] = 198,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 194,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym__variable] = 204,
        [anon_sym_end] = 688,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_def] = 212,
        [anon_sym_LPAREN] = 214,
        [anon_sym_class] = 216,
        [anon_sym_COLON_COLON] = 218,
        [anon_sym_module] = 220,
        [anon_sym_super] = 36,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [sym_identifier] = 222,
        [sym_comment] = 40,
        [sym_symbol] = 200,
        [sym__line_break] = 40,
    },
    [288] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_end] = 694,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [289] = {
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
    [290] = {
        [anon_sym_end] = 696,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [291] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [ts_builtin_sym_end] = 482,
        [anon_sym_if] = 482,
        [anon_sym_while] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_until] = 482,
        [sym_comment] = 40,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [292] = {
        [sym__terminator] = 484,
        [aux_sym_program_repeat1] = 484,
        [ts_builtin_sym_end] = 484,
        [anon_sym_if] = 484,
        [anon_sym_while] = 484,
        [anon_sym_unless] = 484,
        [anon_sym_until] = 484,
        [sym_comment] = 40,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [293] = {
        [anon_sym_end] = 694,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [294] = {
        [sym__statement] = 698,
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
    [295] = {
        [ts_builtin_sym_end] = 700,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [296] = {
        [sym__expression] = 680,
        [sym__argument] = 14,
        [sym__primary] = 16,
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
    [297] = {
        [sym__terminator] = 44,
        [aux_sym_program_repeat1] = 702,
        [ts_builtin_sym_end] = 282,
        [anon_sym_if] = 50,
        [anon_sym_while] = 50,
        [anon_sym_unless] = 50,
        [anon_sym_until] = 50,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [298] = {
        [ts_builtin_sym_end] = 284,
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
    [44] = {.count = 1}, SHIFT(294, 0),
    [46] = {.count = 1}, SHIFT(295, 0),
    [48] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [50] = {.count = 1}, SHIFT(296, 0),
    [52] = {.count = 1}, SHIFT(72, 0),
    [54] = {.count = 1}, SHIFT(73, 0),
    [56] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [58] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [60] = {.count = 1}, SHIFT(285, 0),
    [62] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [68] = {.count = 1}, SHIFT(284, 0),
    [70] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [72] = {.count = 1}, SHIFT(283, 0),
    [74] = {.count = 1}, SHIFT(282, 0),
    [76] = {.count = 1}, SHIFT(280, 0),
    [78] = {.count = 1}, SHIFT(152, 0),
    [80] = {.count = 1}, SHIFT(262, 0),
    [82] = {.count = 1}, SHIFT(111, 0),
    [84] = {.count = 1}, SHIFT(258, 0),
    [86] = {.count = 1}, SHIFT(30, 0),
    [88] = {.count = 1}, SHIFT(31, 0),
    [90] = {.count = 1}, SHIFT(32, 0),
    [92] = {.count = 1}, SHIFT(33, 0),
    [94] = {.count = 1}, SHIFT(34, 0),
    [96] = {.count = 1}, SHIFT(35, 0),
    [98] = {.count = 1}, SHIFT(36, 0),
    [100] = {.count = 1}, SHIFT(37, 0),
    [102] = {.count = 1}, SHIFT(38, 0),
    [104] = {.count = 1}, SHIFT(39, 0),
    [106] = {.count = 1}, SHIFT(40, 0),
    [108] = {.count = 1}, SHIFT(41, 0),
    [110] = {.count = 1}, SHIFT(42, 0),
    [112] = {.count = 1}, SHIFT(43, 0),
    [114] = {.count = 1}, SHIFT(239, 0),
    [116] = {.count = 1}, SHIFT(238, 0),
    [118] = {.count = 1}, SHIFT(231, 0),
    [120] = {.count = 1}, SHIFT(19, 0),
    [122] = {.count = 1}, SHIFT(20, 0),
    [124] = {.count = 1}, SHIFT(21, 0),
    [126] = {.count = 1}, SHIFT(22, 0),
    [128] = {.count = 1}, SHIFT(23, 0),
    [130] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [132] = {.count = 1}, SHIFT(24, 0),
    [134] = {.count = 1}, SHIFT(25, 0),
    [136] = {.count = 1}, SHIFT(26, 0),
    [138] = {.count = 1}, SHIFT(27, 0),
    [140] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [142] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [144] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [146] = {.count = 1}, SHIFT(227, 0),
    [148] = {.count = 1}, SHIFT(228, 0),
    [150] = {.count = 1}, SHIFT(226, 0),
    [152] = {.count = 1}, SHIFT(29, 0),
    [154] = {.count = 1}, SHIFT(28, 0),
    [156] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [158] = {.count = 1}, SHIFT(102, 0),
    [160] = {.count = 1}, SHIFT(223, 0),
    [162] = {.count = 1}, SHIFT(104, 0),
    [164] = {.count = 1}, SHIFT(224, 0),
    [166] = {.count = 1}, SHIFT(214, 0),
    [168] = {.count = 1}, SHIFT(213, 0),
    [170] = {.count = 1}, SHIFT(212, 0),
    [172] = {.count = 1}, SHIFT(211, 0),
    [174] = {.count = 1}, SHIFT(210, 0),
    [176] = {.count = 1}, SHIFT(192, 0),
    [178] = {.count = 1}, SHIFT(188, 0),
    [180] = {.count = 1}, SHIFT(169, 0),
    [182] = {.count = 1}, SHIFT(168, 0),
    [184] = {.count = 1}, SHIFT(44, 0),
    [186] = {.count = 1}, SHIFT(45, 0),
    [188] = {.count = 1}, SHIFT(46, 0),
    [190] = {.count = 1}, SHIFT(47, 0),
    [192] = {.count = 1}, SHIFT(48, 0),
    [194] = {.count = 1}, SHIFT(49, 0),
    [196] = {.count = 1}, SHIFT(50, 0),
    [198] = {.count = 1}, SHIFT(51, 0),
    [200] = {.count = 1}, SHIFT(52, 0),
    [202] = {.count = 1}, SHIFT(53, 0),
    [204] = {.count = 1}, SHIFT(54, 0),
    [206] = {.count = 1}, SHIFT(55, 0),
    [208] = {.count = 1}, SHIFT(56, 0),
    [210] = {.count = 1}, SHIFT(57, 0),
    [212] = {.count = 1}, SHIFT(58, 0),
    [214] = {.count = 1}, SHIFT(59, 0),
    [216] = {.count = 1}, SHIFT(60, 0),
    [218] = {.count = 1}, SHIFT(61, 0),
    [220] = {.count = 1}, SHIFT(62, 0),
    [222] = {.count = 1}, SHIFT(63, 0),
    [224] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [226] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [228] = {.count = 1}, SHIFT(68, 0),
    [230] = {.count = 1}, SHIFT(165, 0),
    [232] = {.count = 1}, SHIFT(166, 0),
    [234] = {.count = 1}, SHIFT(71, 0),
    [236] = {.count = 1}, SHIFT(156, 0),
    [238] = {.count = 1}, SHIFT(155, 0),
    [240] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [242] = {.count = 1}, SHIFT(154, 0),
    [244] = {.count = 1}, SHIFT(153, 0),
    [246] = {.count = 1}, SHIFT(151, 0),
    [248] = {.count = 1}, SHIFT(110, 0),
    [250] = {.count = 1}, SHIFT(101, 0),
    [252] = {.count = 1}, SHIFT(79, 0),
    [254] = {.count = 1}, SHIFT(78, 0),
    [256] = {.count = 1}, SHIFT(64, 0),
    [258] = {.count = 1}, SHIFT(65, 0),
    [260] = {.count = 1}, SHIFT(66, 0),
    [262] = {.count = 1}, SHIFT(67, 0),
    [264] = {.count = 1}, SHIFT(69, 0),
    [266] = {.count = 1}, SHIFT(70, 0),
    [268] = {.count = 1}, SHIFT(76, 0),
    [270] = {.count = 1}, SHIFT(75, 0),
    [272] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [274] = {.count = 1}, SHIFT(74, 0),
    [276] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [278] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [280] = {.count = 1}, SHIFT(77, 0),
    [282] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [284] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [286] = {.count = 1}, SHIFT(80, 0),
    [288] = {.count = 1}, SHIFT(81, 0),
    [290] = {.count = 1}, SHIFT(97, 0),
    [292] = {.count = 1}, SHIFT(98, 0),
    [294] = {.count = 1}, SHIFT(82, 0),
    [296] = {.count = 1}, SHIFT(83, 0),
    [298] = {.count = 1}, SHIFT(84, 0),
    [300] = {.count = 1}, SHIFT(85, 0),
    [302] = {.count = 1}, SHIFT(94, 0),
    [304] = {.count = 1}, SHIFT(95, 0),
    [306] = {.count = 1}, SHIFT(88, 0),
    [308] = {.count = 1}, SHIFT(86, 0),
    [310] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [312] = {.count = 1}, SHIFT(87, 0),
    [314] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [316] = {.count = 1}, SHIFT(89, 0),
    [318] = {.count = 1}, SHIFT(90, 0),
    [320] = {.count = 1}, SHIFT(91, 0),
    [322] = {.count = 1}, SHIFT(92, 0),
    [324] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [326] = {.count = 1}, SHIFT(93, 0),
    [328] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [330] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [332] = {.count = 1}, SHIFT(96, 0),
    [334] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [336] = {.count = 1}, SHIFT(99, 0),
    [338] = {.count = 1}, SHIFT(100, 0),
    [340] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [342] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [344] = {.count = 1}, SHIFT(103, 0),
    [346] = {.count = 1}, SHIFT(105, 0),
    [348] = {.count = 1}, SHIFT(108, 0),
    [350] = {.count = 1}, SHIFT(107, 0),
    [352] = {.count = 1}, SHIFT(106, 0),
    [354] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [356] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [358] = {.count = 1}, SHIFT(109, 0),
    [360] = {.count = 1}, SHIFT(112, 0),
    [362] = {.count = 1}, SHIFT(113, 0),
    [364] = {.count = 1}, SHIFT(114, 0),
    [366] = {.count = 1}, SHIFT(115, 0),
    [368] = {.count = 1}, SHIFT(116, 0),
    [370] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [372] = {.count = 1}, SHIFT(127, 0),
    [374] = {.count = 1}, SHIFT(148, 0),
    [376] = {.count = 1}, SHIFT(149, 0),
    [378] = {.count = 1}, SHIFT(126, 0),
    [380] = {.count = 1}, SHIFT(128, 0),
    [382] = {.count = 1}, SHIFT(129, 0),
    [384] = {.count = 1}, SHIFT(124, 0),
    [386] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [388] = {.count = 1}, SHIFT(117, 0),
    [390] = {.count = 1}, SHIFT(118, 0),
    [392] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [394] = {.count = 1}, SHIFT(119, 0),
    [396] = {.count = 1}, SHIFT(120, 0),
    [398] = {.count = 1}, SHIFT(122, 0),
    [400] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [402] = {.count = 1}, SHIFT(121, 0),
    [404] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [406] = {.count = 1}, SHIFT(123, 0),
    [408] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [410] = {.count = 1}, SHIFT(125, 0),
    [412] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [414] = {.count = 1}, SHIFT(144, 0),
    [416] = {.count = 1}, SHIFT(139, 0),
    [418] = {.count = 1}, SHIFT(140, 0),
    [420] = {.count = 1}, SHIFT(137, 0),
    [422] = {.count = 1}, SHIFT(130, 0),
    [424] = {.count = 1}, SHIFT(131, 0),
    [426] = {.count = 1}, SHIFT(132, 0),
    [428] = {.count = 1}, SHIFT(133, 0),
    [430] = {.count = 1}, SHIFT(135, 0),
    [432] = {.count = 1}, SHIFT(134, 0),
    [434] = {.count = 1}, SHIFT(136, 0),
    [436] = {.count = 1}, SHIFT(138, 0),
    [438] = {.count = 1}, SHIFT(141, 0),
    [440] = {.count = 1}, SHIFT(142, 0),
    [442] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [444] = {.count = 1}, SHIFT(143, 0),
    [446] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [448] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [450] = {.count = 1}, SHIFT(145, 0),
    [452] = {.count = 1}, SHIFT(146, 0),
    [454] = {.count = 1}, SHIFT(147, 0),
    [456] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [458] = {.count = 1}, SHIFT(150, 0),
    [460] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [462] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [464] = {.count = 1}, SHIFT(157, 0),
    [466] = {.count = 1}, SHIFT(158, 0),
    [468] = {.count = 1}, SHIFT(164, 0),
    [470] = {.count = 1}, SHIFT(160, 0),
    [472] = {.count = 1}, SHIFT(159, 0),
    [474] = {.count = 1}, SHIFT(161, 0),
    [476] = {.count = 1}, SHIFT(162, 0),
    [478] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [480] = {.count = 1}, SHIFT(163, 0),
    [482] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [484] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [486] = {.count = 1}, SHIFT(167, 0),
    [488] = {.count = 1}, SHIFT(170, 0),
    [490] = {.count = 1}, SHIFT(171, 0),
    [492] = {.count = 1}, SHIFT(184, 0),
    [494] = {.count = 1}, SHIFT(185, 0),
    [496] = {.count = 1}, SHIFT(172, 0),
    [498] = {.count = 1}, SHIFT(173, 0),
    [500] = {.count = 1}, SHIFT(174, 0),
    [502] = {.count = 1}, SHIFT(181, 0),
    [504] = {.count = 1}, SHIFT(182, 0),
    [506] = {.count = 1}, SHIFT(175, 0),
    [508] = {.count = 1}, SHIFT(176, 0),
    [510] = {.count = 1}, SHIFT(177, 0),
    [512] = {.count = 1}, SHIFT(178, 0),
    [514] = {.count = 1}, SHIFT(179, 0),
    [516] = {.count = 1}, SHIFT(180, 0),
    [518] = {.count = 1}, SHIFT(183, 0),
    [520] = {.count = 1}, SHIFT(186, 0),
    [522] = {.count = 1}, SHIFT(187, 0),
    [524] = {.count = 1}, SHIFT(189, 0),
    [526] = {.count = 1}, SHIFT(190, 0),
    [528] = {.count = 1}, SHIFT(191, 0),
    [530] = {.count = 1}, SHIFT(193, 0),
    [532] = {.count = 1}, SHIFT(194, 0),
    [534] = {.count = 1}, SHIFT(195, 0),
    [536] = {.count = 1}, SHIFT(197, 0),
    [538] = {.count = 1}, SHIFT(207, 0),
    [540] = {.count = 1}, SHIFT(208, 0),
    [542] = {.count = 1}, SHIFT(196, 0),
    [544] = {.count = 1}, SHIFT(203, 0),
    [546] = {.count = 1}, SHIFT(198, 0),
    [548] = {.count = 1}, SHIFT(199, 0),
    [550] = {.count = 1}, SHIFT(200, 0),
    [552] = {.count = 1}, SHIFT(201, 0),
    [554] = {.count = 1}, SHIFT(202, 0),
    [556] = {.count = 1}, SHIFT(204, 0),
    [558] = {.count = 1}, SHIFT(205, 0),
    [560] = {.count = 1}, SHIFT(206, 0),
    [562] = {.count = 1}, SHIFT(209, 0),
    [564] = {.count = 1}, SHIFT(215, 0),
    [566] = {.count = 1}, SHIFT(216, 0),
    [568] = {.count = 1}, SHIFT(222, 0),
    [570] = {.count = 1}, SHIFT(218, 0),
    [572] = {.count = 1}, SHIFT(217, 0),
    [574] = {.count = 1}, SHIFT(219, 0),
    [576] = {.count = 1}, SHIFT(220, 0),
    [578] = {.count = 1}, SHIFT(221, 0),
    [580] = {.count = 1}, SHIFT(225, 0),
    [582] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [584] = {.count = 1}, SHIFT(229, 0),
    [586] = {.count = 1}, SHIFT(230, 0),
    [588] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [590] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [592] = {.count = 1}, SHIFT(232, 0),
    [594] = {.count = 1}, SHIFT(233, 0),
    [596] = {.count = 1}, SHIFT(234, 0),
    [598] = {.count = 1}, SHIFT(235, 0),
    [600] = {.count = 1}, SHIFT(236, 0),
    [602] = {.count = 1}, SHIFT(237, 0),
    [604] = {.count = 1}, SHIFT(240, 0),
    [606] = {.count = 1}, SHIFT(241, 0),
    [608] = {.count = 1}, SHIFT(254, 0),
    [610] = {.count = 1}, SHIFT(255, 0),
    [612] = {.count = 1}, SHIFT(242, 0),
    [614] = {.count = 1}, SHIFT(243, 0),
    [616] = {.count = 1}, SHIFT(244, 0),
    [618] = {.count = 1}, SHIFT(251, 0),
    [620] = {.count = 1}, SHIFT(252, 0),
    [622] = {.count = 1}, SHIFT(245, 0),
    [624] = {.count = 1}, SHIFT(246, 0),
    [626] = {.count = 1}, SHIFT(247, 0),
    [628] = {.count = 1}, SHIFT(248, 0),
    [630] = {.count = 1}, SHIFT(249, 0),
    [632] = {.count = 1}, SHIFT(250, 0),
    [634] = {.count = 1}, SHIFT(253, 0),
    [636] = {.count = 1}, SHIFT(256, 0),
    [638] = {.count = 1}, SHIFT(257, 0),
    [640] = {.count = 1}, SHIFT(259, 0),
    [642] = {.count = 1}, SHIFT(260, 0),
    [644] = {.count = 1}, SHIFT(261, 0),
    [646] = {.count = 1}, SHIFT(263, 0),
    [648] = {.count = 1}, SHIFT(264, 0),
    [650] = {.count = 1}, SHIFT(265, 0),
    [652] = {.count = 1}, SHIFT(267, 0),
    [654] = {.count = 1}, SHIFT(277, 0),
    [656] = {.count = 1}, SHIFT(278, 0),
    [658] = {.count = 1}, SHIFT(266, 0),
    [660] = {.count = 1}, SHIFT(273, 0),
    [662] = {.count = 1}, SHIFT(268, 0),
    [664] = {.count = 1}, SHIFT(269, 0),
    [666] = {.count = 1}, SHIFT(270, 0),
    [668] = {.count = 1}, SHIFT(271, 0),
    [670] = {.count = 1}, SHIFT(272, 0),
    [672] = {.count = 1}, SHIFT(274, 0),
    [674] = {.count = 1}, SHIFT(275, 0),
    [676] = {.count = 1}, SHIFT(276, 0),
    [678] = {.count = 1}, SHIFT(279, 0),
    [680] = {.count = 1}, SHIFT(281, 0),
    [682] = {.count = 1}, SHIFT(286, 0),
    [684] = {.count = 1}, SHIFT(287, 0),
    [686] = {.count = 1}, SHIFT(293, 0),
    [688] = {.count = 1}, SHIFT(289, 0),
    [690] = {.count = 1}, SHIFT(288, 0),
    [692] = {.count = 1}, SHIFT(290, 0),
    [694] = {.count = 1}, SHIFT(291, 0),
    [696] = {.count = 1}, SHIFT(292, 0),
    [698] = {.count = 1}, SHIFT(297, 0),
    [700] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [702] = {.count = 1}, SHIFT(298, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
