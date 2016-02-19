#include "tree_sitter/parser.h"

#define STATE_COUNT 401
#define SYMBOL_COUNT 78

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_argument_list,
    sym_class_declaration,
    sym_module_declaration,
    sym_while_statement,
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
    [13] = 146,
    [14] = 150,
    [15] = 151,
    [16] = 151,
    [17] = 151,
    [18] = 152,
    [19] = 143,
    [20] = 140,
    [21] = 140,
    [22] = 154,
    [23] = 155,
    [24] = 155,
    [25] = 150,
    [26] = 151,
    [27] = 156,
    [28] = 155,
    [29] = 155,
    [30] = 157,
    [31] = 157,
    [32] = 157,
    [33] = 140,
    [34] = 157,
    [35] = 158,
    [36] = 158,
    [37] = 146,
    [38] = 146,
    [39] = 148,
    [40] = 146,
    [41] = 150,
    [42] = 155,
    [43] = 151,
    [44] = 151,
    [45] = 151,
    [46] = 158,
    [47] = 159,
    [48] = 160,
    [49] = 161,
    [50] = 160,
    [51] = 164,
    [52] = 164,
    [53] = 164,
    [54] = 140,
    [55] = 164,
    [56] = 168,
    [57] = 168,
    [58] = 157,
    [59] = 146,
    [60] = 146,
    [61] = 148,
    [62] = 146,
    [63] = 150,
    [64] = 151,
    [65] = 151,
    [66] = 151,
    [67] = 168,
    [68] = 159,
    [69] = 160,
    [70] = 164,
    [71] = 164,
    [72] = 169,
    [73] = 170,
    [74] = 164,
    [75] = 148,
    [76] = 171,
    [77] = 169,
    [78] = 164,
    [79] = 164,
    [80] = 164,
    [81] = 170,
    [82] = 168,
    [83] = 172,
    [84] = 160,
    [85] = 151,
    [86] = 173,
    [87] = 160,
    [88] = 159,
    [89] = 151,
    [90] = 173,
    [91] = 159,
    [92] = 160,
    [93] = 164,
    [94] = 164,
    [95] = 170,
    [96] = 164,
    [97] = 164,
    [98] = 164,
    [99] = 164,
    [100] = 170,
    [101] = 164,
    [102] = 164,
    [103] = 170,
    [104] = 164,
    [105] = 157,
    [106] = 168,
    [107] = 169,
    [108] = 174,
    [109] = 148,
    [110] = 168,
    [111] = 157,
    [112] = 168,
    [113] = 157,
    [114] = 174,
    [115] = 175,
    [116] = 175,
    [117] = 159,
    [118] = 160,
    [119] = 176,
    [120] = 151,
    [121] = 177,
    [122] = 159,
    [123] = 178,
    [124] = 151,
    [125] = 177,
    [126] = 159,
    [127] = 177,
    [128] = 159,
    [129] = 177,
    [130] = 159,
    [131] = 174,
    [132] = 160,
    [133] = 151,
    [134] = 179,
    [135] = 174,
    [136] = 178,
    [137] = 151,
    [138] = 179,
    [139] = 174,
    [140] = 179,
    [141] = 174,
    [142] = 179,
    [143] = 174,
    [144] = 164,
    [145] = 164,
    [146] = 170,
    [147] = 164,
    [148] = 164,
    [149] = 160,
    [150] = 164,
    [151] = 170,
    [152] = 164,
    [153] = 164,
    [154] = 164,
    [155] = 170,
    [156] = 140,
    [157] = 140,
    [158] = 140,
    [159] = 180,
    [160] = 180,
    [161] = 150,
    [162] = 151,
    [163] = 180,
    [164] = 180,
    [165] = 157,
    [166] = 180,
    [167] = 174,
    [168] = 180,
    [169] = 180,
    [170] = 151,
    [171] = 181,
    [172] = 182,
    [173] = 183,
    [174] = 183,
    [175] = 150,
    [176] = 151,
    [177] = 180,
    [178] = 183,
    [179] = 183,
    [180] = 157,
    [181] = 183,
    [182] = 174,
    [183] = 183,
    [184] = 183,
    [185] = 151,
    [186] = 181,
    [187] = 182,
    [188] = 183,
    [189] = 184,
    [190] = 185,
    [191] = 183,
    [192] = 182,
    [193] = 184,
    [194] = 183,
    [195] = 183,
    [196] = 184,
    [197] = 180,
    [198] = 180,
    [199] = 180,
    [200] = 164,
    [201] = 160,
    [202] = 164,
    [203] = 164,
    [204] = 170,
    [205] = 164,
    [206] = 164,
    [207] = 146,
    [208] = 146,
    [209] = 164,
    [210] = 164,
    [211] = 151,
    [212] = 181,
    [213] = 182,
    [214] = 168,
    [215] = 184,
    [216] = 168,
    [217] = 168,
    [218] = 168,
    [219] = 186,
    [220] = 164,
    [221] = 160,
    [222] = 164,
    [223] = 164,
    [224] = 170,
    [225] = 164,
    [226] = 164,
    [227] = 170,
    [228] = 170,
    [229] = 157,
    [230] = 157,
    [231] = 158,
    [232] = 172,
    [233] = 160,
    [234] = 151,
    [235] = 173,
    [236] = 160,
    [237] = 159,
    [238] = 160,
    [239] = 164,
    [240] = 157,
    [241] = 170,
    [242] = 157,
    [243] = 157,
    [244] = 164,
    [245] = 157,
    [246] = 170,
    [247] = 164,
    [248] = 157,
    [249] = 170,
    [250] = 157,
    [251] = 157,
    [252] = 158,
    [253] = 174,
    [254] = 158,
    [255] = 158,
    [256] = 175,
    [257] = 159,
    [258] = 160,
    [259] = 176,
    [260] = 174,
    [261] = 160,
    [262] = 164,
    [263] = 157,
    [264] = 170,
    [265] = 157,
    [266] = 157,
    [267] = 160,
    [268] = 164,
    [269] = 170,
    [270] = 157,
    [271] = 164,
    [272] = 157,
    [273] = 170,
    [274] = 140,
    [275] = 157,
    [276] = 160,
    [277] = 164,
    [278] = 157,
    [279] = 170,
    [280] = 157,
    [281] = 157,
    [282] = 146,
    [283] = 157,
    [284] = 157,
    [285] = 151,
    [286] = 181,
    [287] = 182,
    [288] = 158,
    [289] = 184,
    [290] = 158,
    [291] = 158,
    [292] = 158,
    [293] = 186,
    [294] = 164,
    [295] = 160,
    [296] = 164,
    [297] = 157,
    [298] = 170,
    [299] = 157,
    [300] = 157,
    [301] = 170,
    [302] = 174,
    [303] = 155,
    [304] = 155,
    [305] = 151,
    [306] = 181,
    [307] = 182,
    [308] = 155,
    [309] = 184,
    [310] = 155,
    [311] = 155,
    [312] = 155,
    [313] = 140,
    [314] = 185,
    [315] = 154,
    [316] = 140,
    [317] = 159,
    [318] = 160,
    [319] = 164,
    [320] = 123,
    [321] = 170,
    [322] = 123,
    [323] = 123,
    [324] = 143,
    [325] = 172,
    [326] = 160,
    [327] = 151,
    [328] = 173,
    [329] = 160,
    [330] = 159,
    [331] = 160,
    [332] = 164,
    [333] = 123,
    [334] = 170,
    [335] = 123,
    [336] = 123,
    [337] = 164,
    [338] = 123,
    [339] = 170,
    [340] = 164,
    [341] = 123,
    [342] = 170,
    [343] = 123,
    [344] = 157,
    [345] = 143,
    [346] = 174,
    [347] = 143,
    [348] = 143,
    [349] = 175,
    [350] = 159,
    [351] = 160,
    [352] = 176,
    [353] = 174,
    [354] = 160,
    [355] = 164,
    [356] = 123,
    [357] = 170,
    [358] = 123,
    [359] = 123,
    [360] = 160,
    [361] = 164,
    [362] = 170,
    [363] = 123,
    [364] = 164,
    [365] = 123,
    [366] = 170,
    [367] = 140,
    [368] = 123,
    [369] = 160,
    [370] = 164,
    [371] = 123,
    [372] = 170,
    [373] = 123,
    [374] = 123,
    [375] = 146,
    [376] = 123,
    [377] = 123,
    [378] = 123,
    [379] = 151,
    [380] = 181,
    [381] = 182,
    [382] = 143,
    [383] = 184,
    [384] = 143,
    [385] = 143,
    [386] = 143,
    [387] = 186,
    [388] = 164,
    [389] = 160,
    [390] = 164,
    [391] = 123,
    [392] = 170,
    [393] = 123,
    [394] = 123,
    [395] = 170,
    [396] = 169,
    [397] = 122,
    [398] = 148,
    [399] = 123,
    [400] = 122,
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
        [anon_sym_def] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_class] = 32,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_module] = 36,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 40,
        [anon_sym_self] = 40,
        [sym_identifier] = 40,
        [sym_comment] = 42,
        [sym_symbol] = 14,
        [sym__line_break] = 42,
    },
    [1] = {
        [ts_builtin_sym_end] = 44,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [2] = {
        [sym__terminator] = 46,
        [aux_sym_program_repeat1] = 48,
        [ts_builtin_sym_end] = 50,
        [anon_sym_if] = 52,
        [anon_sym_while] = 52,
        [anon_sym_unless] = 52,
        [anon_sym_until] = 52,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [3] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 58,
        [ts_builtin_sym_end] = 58,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 42,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [4] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [ts_builtin_sym_end] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [sym_comment] = 42,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [5] = {
        [anon_sym_do] = 62,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [6] = {
        [anon_sym_do] = 64,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [7] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [ts_builtin_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 42,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [8] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [anon_sym_COLON_COLON] = 70,
        [anon_sym_LBRACK] = 72,
        [sym_comment] = 42,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [9] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [ts_builtin_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 74,
        [sym_comment] = 42,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [10] = {
        [sym__function_name] = 76,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 42,
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
        [sym__line_break] = 42,
    },
    [11] = {
        [sym__function_name] = 80,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 42,
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
        [sym__line_break] = 42,
    },
    [12] = {
        [sym_condition] = 84,
        [sym__expression] = 86,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym_scope_resolution_expression] = 92,
        [sym_subscript_expression] = 92,
        [sym__variable] = 92,
        [anon_sym_LPAREN] = 94,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_nil] = 98,
        [anon_sym_self] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 42,
        [sym_symbol] = 88,
        [sym__line_break] = 42,
    },
    [13] = {
        [sym__function_name] = 100,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 102,
        [anon_sym_CARET] = 102,
        [anon_sym_LT_EQ_GT] = 102,
        [anon_sym_EQ_EQ] = 102,
        [anon_sym_EQ_EQ_EQ] = 102,
        [anon_sym_EQ_TILDE] = 102,
        [anon_sym_GT] = 102,
        [anon_sym_GT_EQ] = 102,
        [anon_sym_LT_EQ] = 102,
        [anon_sym_PLUS] = 102,
        [anon_sym_DASH] = 102,
        [anon_sym_SLASH] = 102,
        [anon_sym_PERCENT] = 102,
        [anon_sym_STAR_STAR] = 102,
        [anon_sym_LT_LT] = 102,
        [anon_sym_GT_GT] = 102,
        [anon_sym_TILDE] = 102,
        [anon_sym_PLUS_AT] = 102,
        [anon_sym_DASH_AT] = 102,
        [anon_sym_LBRACK_RBRACK] = 102,
        [anon_sym_LBRACK_RBRACK_EQ] = 102,
        [sym__line_break] = 42,
    },
    [14] = {
        [sym__statement] = 104,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_RPAREN] = 128,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [15] = {
        [sym_identifier] = 138,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [16] = {
        [sym_identifier] = 140,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [17] = {
        [sym_identifier] = 142,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [18] = {
        [sym__call_arguments] = 144,
        [sym__command] = 146,
        [sym__argument] = 148,
        [sym__primary] = 150,
        [sym_scope_resolution_expression] = 152,
        [sym_subscript_expression] = 152,
        [sym__variable] = 152,
        [anon_sym_do] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_super] = 160,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [19] = {
        [sym__terminator] = 164,
        [aux_sym_program_repeat1] = 164,
        [ts_builtin_sym_end] = 164,
        [anon_sym_if] = 164,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 164,
        [anon_sym_until] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 42,
        [sym__line_break] = 164,
        [anon_sym_SEMI] = 164,
    },
    [20] = {
        [anon_sym_do] = 166,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [21] = {
        [anon_sym_do] = 168,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [22] = {
        [aux_sym__call_arguments_repeat1] = 170,
        [anon_sym_do] = 168,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [23] = {
        [aux_sym__call_arguments_repeat1] = 68,
        [anon_sym_do] = 68,
        [anon_sym_COMMA] = 68,
        [anon_sym_COLON_COLON] = 174,
        [anon_sym_LBRACK] = 176,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [24] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COMMA] = 74,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 74,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [25] = {
        [sym__statement] = 178,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_RPAREN] = 180,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [26] = {
        [sym_identifier] = 182,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [27] = {
        [sym__call_arguments] = 144,
        [sym__command] = 146,
        [sym__argument] = 148,
        [sym__primary] = 150,
        [sym_scope_resolution_expression] = 152,
        [sym_subscript_expression] = 152,
        [sym__variable] = 152,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_super] = 160,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [28] = {
        [aux_sym__call_arguments_repeat1] = 164,
        [anon_sym_do] = 164,
        [anon_sym_COMMA] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [29] = {
        [aux_sym__call_arguments_repeat1] = 184,
        [anon_sym_do] = 184,
        [anon_sym_COMMA] = 184,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_LBRACK] = 184,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [30] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 188,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 192,
        [sym_comment] = 42,
        [sym__line_break] = 54,
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
        [sym_comment] = 42,
        [sym__line_break] = 58,
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
        [sym_comment] = 42,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [33] = {
        [anon_sym_do] = 194,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [34] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_RPAREN] = 66,
        [sym_comment] = 42,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [35] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [anon_sym_RPAREN] = 68,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_LBRACK] = 198,
        [sym_comment] = 42,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [36] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_RPAREN] = 74,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 74,
        [sym_comment] = 42,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [37] = {
        [sym__function_name] = 200,
        [anon_sym_PIPE] = 202,
        [anon_sym_STAR] = 202,
        [anon_sym_AMP] = 202,
        [anon_sym_LT] = 202,
        [sym_identifier] = 202,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 202,
        [anon_sym_CARET] = 202,
        [anon_sym_LT_EQ_GT] = 202,
        [anon_sym_EQ_EQ] = 202,
        [anon_sym_EQ_EQ_EQ] = 202,
        [anon_sym_EQ_TILDE] = 202,
        [anon_sym_GT] = 202,
        [anon_sym_GT_EQ] = 202,
        [anon_sym_LT_EQ] = 202,
        [anon_sym_PLUS] = 202,
        [anon_sym_DASH] = 202,
        [anon_sym_SLASH] = 202,
        [anon_sym_PERCENT] = 202,
        [anon_sym_STAR_STAR] = 202,
        [anon_sym_LT_LT] = 202,
        [anon_sym_GT_GT] = 202,
        [anon_sym_TILDE] = 202,
        [anon_sym_PLUS_AT] = 202,
        [anon_sym_DASH_AT] = 202,
        [anon_sym_LBRACK_RBRACK] = 202,
        [anon_sym_LBRACK_RBRACK_EQ] = 202,
        [sym__line_break] = 42,
    },
    [38] = {
        [sym__function_name] = 204,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 42,
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
        [sym__line_break] = 42,
    },
    [39] = {
        [sym_condition] = 206,
        [sym__expression] = 86,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym_scope_resolution_expression] = 92,
        [sym_subscript_expression] = 92,
        [sym__variable] = 92,
        [anon_sym_LPAREN] = 94,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_nil] = 98,
        [anon_sym_self] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 42,
        [sym_symbol] = 88,
        [sym__line_break] = 42,
    },
    [40] = {
        [sym__function_name] = 208,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 102,
        [anon_sym_CARET] = 102,
        [anon_sym_LT_EQ_GT] = 102,
        [anon_sym_EQ_EQ] = 102,
        [anon_sym_EQ_EQ_EQ] = 102,
        [anon_sym_EQ_TILDE] = 102,
        [anon_sym_GT] = 102,
        [anon_sym_GT_EQ] = 102,
        [anon_sym_LT_EQ] = 102,
        [anon_sym_PLUS] = 102,
        [anon_sym_DASH] = 102,
        [anon_sym_SLASH] = 102,
        [anon_sym_PERCENT] = 102,
        [anon_sym_STAR_STAR] = 102,
        [anon_sym_LT_LT] = 102,
        [anon_sym_GT_GT] = 102,
        [anon_sym_TILDE] = 102,
        [anon_sym_PLUS_AT] = 102,
        [anon_sym_DASH_AT] = 102,
        [anon_sym_LBRACK_RBRACK] = 102,
        [anon_sym_LBRACK_RBRACK_EQ] = 102,
        [sym__line_break] = 42,
    },
    [41] = {
        [sym__statement] = 210,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_RPAREN] = 212,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [42] = {
        [aux_sym__call_arguments_repeat1] = 214,
        [anon_sym_do] = 214,
        [anon_sym_COMMA] = 214,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_LBRACK] = 214,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [43] = {
        [sym_identifier] = 216,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [44] = {
        [sym_identifier] = 218,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [45] = {
        [sym_identifier] = 220,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [46] = {
        [sym__terminator] = 164,
        [aux_sym_program_repeat1] = 164,
        [anon_sym_if] = 164,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 164,
        [anon_sym_until] = 164,
        [anon_sym_RPAREN] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 42,
        [sym__line_break] = 164,
        [anon_sym_SEMI] = 164,
    },
    [47] = {
        [sym__terminator] = 222,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [48] = {
        [sym__statement] = 228,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 242,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [49] = {
        [sym__statement] = 262,
        [sym__declaration] = 262,
        [sym_method_declaration] = 262,
        [sym_argument_list] = 264,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 262,
        [sym__call] = 262,
        [sym__command] = 262,
        [sym__function_call] = 262,
        [sym__expression] = 262,
        [sym__argument] = 262,
        [sym__primary] = 262,
        [sym_scope_resolution_expression] = 262,
        [sym_subscript_expression] = 262,
        [sym__variable] = 262,
        [sym__terminator] = 264,
        [aux_sym_class_declaration_repeat1] = 264,
        [anon_sym_end] = 262,
        [anon_sym_undef] = 262,
        [anon_sym_alias] = 262,
        [anon_sym_while] = 262,
        [anon_sym_def] = 262,
        [anon_sym_LPAREN] = 262,
        [anon_sym_STAR] = 264,
        [anon_sym_AMP] = 264,
        [anon_sym_class] = 262,
        [anon_sym_LT] = 264,
        [anon_sym_COLON_COLON] = 262,
        [anon_sym_module] = 262,
        [anon_sym_super] = 262,
        [anon_sym_nil] = 262,
        [anon_sym_self] = 262,
        [sym_identifier] = 262,
        [sym_comment] = 42,
        [sym_symbol] = 262,
        [sym__line_break] = 42,
        [anon_sym_SEMI] = 264,
    },
    [50] = {
        [sym__statement] = 262,
        [sym__declaration] = 262,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 262,
        [sym__call] = 262,
        [sym__command] = 262,
        [sym__function_call] = 262,
        [sym__expression] = 262,
        [sym__argument] = 262,
        [sym__primary] = 262,
        [sym_scope_resolution_expression] = 262,
        [sym_subscript_expression] = 262,
        [sym__variable] = 262,
        [anon_sym_end] = 262,
        [anon_sym_undef] = 262,
        [anon_sym_alias] = 262,
        [anon_sym_while] = 262,
        [anon_sym_def] = 262,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 262,
        [anon_sym_COLON_COLON] = 262,
        [anon_sym_module] = 262,
        [anon_sym_super] = 262,
        [anon_sym_nil] = 262,
        [anon_sym_self] = 262,
        [sym_identifier] = 262,
        [sym_comment] = 42,
        [sym_symbol] = 262,
        [sym__line_break] = 42,
    },
    [51] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 268,
        [anon_sym_end] = 270,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [52] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 58,
        [anon_sym_end] = 58,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 42,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [53] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [anon_sym_end] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [sym_comment] = 42,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [54] = {
        [anon_sym_do] = 274,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [55] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 42,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [56] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [anon_sym_end] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_LBRACK] = 278,
        [sym_comment] = 42,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [57] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 74,
        [sym_comment] = 42,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [58] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [anon_sym_RPAREN] = 280,
        [sym_comment] = 42,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [59] = {
        [sym__function_name] = 282,
        [anon_sym_PIPE] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_AMP] = 284,
        [anon_sym_LT] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 284,
        [anon_sym_CARET] = 284,
        [anon_sym_LT_EQ_GT] = 284,
        [anon_sym_EQ_EQ] = 284,
        [anon_sym_EQ_EQ_EQ] = 284,
        [anon_sym_EQ_TILDE] = 284,
        [anon_sym_GT] = 284,
        [anon_sym_GT_EQ] = 284,
        [anon_sym_LT_EQ] = 284,
        [anon_sym_PLUS] = 284,
        [anon_sym_DASH] = 284,
        [anon_sym_SLASH] = 284,
        [anon_sym_PERCENT] = 284,
        [anon_sym_STAR_STAR] = 284,
        [anon_sym_LT_LT] = 284,
        [anon_sym_GT_GT] = 284,
        [anon_sym_TILDE] = 284,
        [anon_sym_PLUS_AT] = 284,
        [anon_sym_DASH_AT] = 284,
        [anon_sym_LBRACK_RBRACK] = 284,
        [anon_sym_LBRACK_RBRACK_EQ] = 284,
        [sym__line_break] = 42,
    },
    [60] = {
        [sym__function_name] = 286,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 42,
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
        [sym__line_break] = 42,
    },
    [61] = {
        [sym_condition] = 288,
        [sym__expression] = 86,
        [sym__argument] = 88,
        [sym__primary] = 90,
        [sym_scope_resolution_expression] = 92,
        [sym_subscript_expression] = 92,
        [sym__variable] = 92,
        [anon_sym_LPAREN] = 94,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_nil] = 98,
        [anon_sym_self] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 42,
        [sym_symbol] = 88,
        [sym__line_break] = 42,
    },
    [62] = {
        [sym__function_name] = 290,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 102,
        [anon_sym_CARET] = 102,
        [anon_sym_LT_EQ_GT] = 102,
        [anon_sym_EQ_EQ] = 102,
        [anon_sym_EQ_EQ_EQ] = 102,
        [anon_sym_EQ_TILDE] = 102,
        [anon_sym_GT] = 102,
        [anon_sym_GT_EQ] = 102,
        [anon_sym_LT_EQ] = 102,
        [anon_sym_PLUS] = 102,
        [anon_sym_DASH] = 102,
        [anon_sym_SLASH] = 102,
        [anon_sym_PERCENT] = 102,
        [anon_sym_STAR_STAR] = 102,
        [anon_sym_LT_LT] = 102,
        [anon_sym_GT_GT] = 102,
        [anon_sym_TILDE] = 102,
        [anon_sym_PLUS_AT] = 102,
        [anon_sym_DASH_AT] = 102,
        [anon_sym_LBRACK_RBRACK] = 102,
        [anon_sym_LBRACK_RBRACK_EQ] = 102,
        [sym__line_break] = 42,
    },
    [63] = {
        [sym__statement] = 292,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_RPAREN] = 294,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [64] = {
        [sym_identifier] = 296,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [65] = {
        [sym_identifier] = 298,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [66] = {
        [sym_identifier] = 300,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [67] = {
        [sym__terminator] = 164,
        [aux_sym_program_repeat1] = 164,
        [anon_sym_end] = 164,
        [anon_sym_if] = 164,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 164,
        [anon_sym_until] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 42,
        [sym__line_break] = 164,
        [anon_sym_SEMI] = 164,
    },
    [68] = {
        [sym__terminator] = 302,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [69] = {
        [sym__statement] = 304,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 306,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [70] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 308,
        [anon_sym_end] = 310,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [71] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 42,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [72] = {
        [sym__statement] = 312,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [73] = {
        [anon_sym_end] = 314,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [74] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_end] = 316,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 42,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [75] = {
        [sym__expression] = 318,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_LPAREN] = 252,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [76] = {
        [sym__statement] = 262,
        [sym__declaration] = 262,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 262,
        [sym__call] = 262,
        [sym__command] = 262,
        [sym__function_call] = 262,
        [sym__expression] = 262,
        [sym__argument] = 262,
        [sym__primary] = 262,
        [sym_scope_resolution_expression] = 262,
        [sym_subscript_expression] = 262,
        [sym__variable] = 262,
        [sym__terminator] = 264,
        [aux_sym_program_repeat1] = 264,
        [ts_builtin_sym_end] = 264,
        [anon_sym_end] = 264,
        [anon_sym_undef] = 262,
        [anon_sym_alias] = 262,
        [anon_sym_if] = 264,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 264,
        [anon_sym_until] = 264,
        [anon_sym_def] = 262,
        [anon_sym_LPAREN] = 262,
        [anon_sym_RPAREN] = 264,
        [anon_sym_class] = 262,
        [anon_sym_COLON_COLON] = 262,
        [anon_sym_module] = 262,
        [anon_sym_super] = 262,
        [anon_sym_nil] = 262,
        [anon_sym_self] = 262,
        [sym_identifier] = 262,
        [sym_comment] = 42,
        [sym_symbol] = 262,
        [sym__line_break] = 42,
        [anon_sym_SEMI] = 264,
    },
    [77] = {
        [sym__statement] = 262,
        [sym__declaration] = 262,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 262,
        [sym__call] = 262,
        [sym__command] = 262,
        [sym__function_call] = 262,
        [sym__expression] = 262,
        [sym__argument] = 262,
        [sym__primary] = 262,
        [sym_scope_resolution_expression] = 262,
        [sym_subscript_expression] = 262,
        [sym__variable] = 262,
        [anon_sym_undef] = 262,
        [anon_sym_alias] = 262,
        [anon_sym_while] = 262,
        [anon_sym_def] = 262,
        [anon_sym_LPAREN] = 262,
        [anon_sym_class] = 262,
        [anon_sym_COLON_COLON] = 262,
        [anon_sym_module] = 262,
        [anon_sym_super] = 262,
        [anon_sym_nil] = 262,
        [anon_sym_self] = 262,
        [sym_identifier] = 262,
        [sym_comment] = 42,
        [sym_symbol] = 262,
        [sym__line_break] = 42,
    },
    [78] = {
        [sym__terminator] = 320,
        [aux_sym_program_repeat1] = 320,
        [anon_sym_end] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [sym_comment] = 42,
        [sym__line_break] = 320,
        [anon_sym_SEMI] = 320,
    },
    [79] = {
        [sym__terminator] = 322,
        [aux_sym_program_repeat1] = 322,
        [anon_sym_end] = 322,
        [anon_sym_if] = 322,
        [anon_sym_while] = 322,
        [anon_sym_unless] = 322,
        [anon_sym_until] = 322,
        [sym_comment] = 42,
        [sym__line_break] = 322,
        [anon_sym_SEMI] = 322,
    },
    [80] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_end] = 326,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [81] = {
        [anon_sym_end] = 328,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [82] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 184,
        [anon_sym_end] = 184,
        [anon_sym_if] = 184,
        [anon_sym_while] = 184,
        [anon_sym_unless] = 184,
        [anon_sym_until] = 184,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_LBRACK] = 184,
        [sym_comment] = 42,
        [sym__line_break] = 184,
        [anon_sym_SEMI] = 184,
    },
    [83] = {
        [sym__terminator] = 330,
        [anon_sym_LT] = 332,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [84] = {
        [sym__statement] = 334,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 336,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [85] = {
        [sym_identifier] = 338,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [86] = {
        [sym__terminator] = 340,
        [aux_sym_class_declaration_repeat1] = 342,
        [anon_sym_COLON_COLON] = 344,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [87] = {
        [sym__statement] = 346,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 348,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [88] = {
        [sym__terminator] = 350,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [89] = {
        [sym_identifier] = 352,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [90] = {
        [sym__terminator] = 354,
        [aux_sym_class_declaration_repeat1] = 356,
        [anon_sym_COLON_COLON] = 344,
        [sym_comment] = 42,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [91] = {
        [sym__terminator] = 358,
        [sym_comment] = 42,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [92] = {
        [sym__statement] = 360,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 362,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [93] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_end] = 366,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [94] = {
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [anon_sym_end] = 368,
        [anon_sym_if] = 368,
        [anon_sym_while] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_until] = 368,
        [sym_comment] = 42,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [95] = {
        [anon_sym_end] = 370,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [96] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [sym_comment] = 42,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [97] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [sym_comment] = 42,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [98] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_end] = 362,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [99] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [sym_comment] = 42,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [100] = {
        [anon_sym_end] = 366,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [101] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_end] = 382,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [102] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 42,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [103] = {
        [anon_sym_end] = 348,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [104] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 42,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [105] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 390,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [106] = {
        [sym__terminator] = 214,
        [aux_sym_program_repeat1] = 214,
        [anon_sym_end] = 214,
        [anon_sym_if] = 214,
        [anon_sym_while] = 214,
        [anon_sym_unless] = 214,
        [anon_sym_until] = 214,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_LBRACK] = 214,
        [sym_comment] = 42,
        [sym__line_break] = 214,
        [anon_sym_SEMI] = 214,
    },
    [107] = {
        [sym__statement] = 392,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [108] = {
        [anon_sym_RPAREN] = 394,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [109] = {
        [sym__expression] = 396,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_LPAREN] = 126,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [110] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [anon_sym_end] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [anon_sym_COLON_COLON] = 398,
        [anon_sym_LBRACK] = 398,
        [sym_comment] = 42,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [111] = {
        [sym__terminator] = 320,
        [aux_sym_program_repeat1] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_RPAREN] = 320,
        [sym_comment] = 42,
        [sym__line_break] = 320,
        [anon_sym_SEMI] = 320,
    },
    [112] = {
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [anon_sym_end] = 400,
        [anon_sym_if] = 400,
        [anon_sym_while] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_until] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 42,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [113] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 402,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 326,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [114] = {
        [anon_sym_RPAREN] = 328,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [115] = {
        [sym_argument_list] = 404,
        [sym__terminator] = 406,
        [anon_sym_LPAREN] = 408,
        [anon_sym_STAR] = 410,
        [anon_sym_AMP] = 410,
        [sym_identifier] = 412,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [116] = {
        [sym_argument_list] = 414,
        [sym__terminator] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_AMP] = 414,
        [sym_identifier] = 414,
        [sym_comment] = 42,
        [sym__line_break] = 414,
        [anon_sym_SEMI] = 414,
    },
    [117] = {
        [sym__terminator] = 416,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [118] = {
        [sym__statement] = 418,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 420,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [119] = {
        [sym_argument_list] = 422,
        [anon_sym_RPAREN] = 416,
        [anon_sym_STAR] = 424,
        [anon_sym_AMP] = 424,
        [sym_identifier] = 426,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [120] = {
        [sym_identifier] = 428,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [121] = {
        [sym__terminator] = 430,
        [aux_sym_argument_list_repeat1] = 432,
        [anon_sym_COMMA] = 434,
        [sym_comment] = 42,
        [sym__line_break] = 430,
        [anon_sym_SEMI] = 430,
    },
    [122] = {
        [sym__terminator] = 436,
        [sym_comment] = 42,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [123] = {
        [anon_sym_STAR] = 438,
        [anon_sym_AMP] = 438,
        [sym_identifier] = 440,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [124] = {
        [sym_identifier] = 442,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [125] = {
        [sym__terminator] = 444,
        [aux_sym_argument_list_repeat1] = 446,
        [anon_sym_COMMA] = 434,
        [sym_comment] = 42,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 444,
    },
    [126] = {
        [sym__terminator] = 448,
        [sym_comment] = 42,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [127] = {
        [sym__terminator] = 448,
        [aux_sym_argument_list_repeat1] = 450,
        [anon_sym_COMMA] = 434,
        [sym_comment] = 42,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [128] = {
        [sym__terminator] = 452,
        [sym_comment] = 42,
        [sym__line_break] = 452,
        [anon_sym_SEMI] = 452,
    },
    [129] = {
        [sym__terminator] = 436,
        [aux_sym_argument_list_repeat1] = 454,
        [anon_sym_COMMA] = 434,
        [sym_comment] = 42,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [130] = {
        [sym__terminator] = 456,
        [sym_comment] = 42,
        [sym__line_break] = 456,
        [anon_sym_SEMI] = 456,
    },
    [131] = {
        [anon_sym_RPAREN] = 458,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [132] = {
        [sym__statement] = 460,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 462,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [133] = {
        [sym_identifier] = 464,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [134] = {
        [aux_sym_argument_list_repeat1] = 466,
        [anon_sym_RPAREN] = 430,
        [anon_sym_COMMA] = 468,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [135] = {
        [anon_sym_RPAREN] = 436,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [136] = {
        [anon_sym_STAR] = 470,
        [anon_sym_AMP] = 470,
        [sym_identifier] = 472,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [137] = {
        [sym_identifier] = 474,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [138] = {
        [aux_sym_argument_list_repeat1] = 476,
        [anon_sym_RPAREN] = 444,
        [anon_sym_COMMA] = 468,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [139] = {
        [anon_sym_RPAREN] = 448,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [140] = {
        [aux_sym_argument_list_repeat1] = 478,
        [anon_sym_RPAREN] = 448,
        [anon_sym_COMMA] = 468,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [141] = {
        [anon_sym_RPAREN] = 452,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [142] = {
        [aux_sym_argument_list_repeat1] = 480,
        [anon_sym_RPAREN] = 436,
        [anon_sym_COMMA] = 468,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [143] = {
        [anon_sym_RPAREN] = 456,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [144] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_end] = 484,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [145] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_end] = 486,
        [anon_sym_if] = 486,
        [anon_sym_while] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_until] = 486,
        [sym_comment] = 42,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [146] = {
        [anon_sym_end] = 488,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [147] = {
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [anon_sym_end] = 490,
        [anon_sym_if] = 490,
        [anon_sym_while] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_until] = 490,
        [sym_comment] = 42,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [148] = {
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [anon_sym_end] = 492,
        [anon_sym_if] = 492,
        [anon_sym_while] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_until] = 492,
        [sym_comment] = 42,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [149] = {
        [sym__statement] = 494,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 484,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [150] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 496,
        [anon_sym_end] = 488,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [151] = {
        [anon_sym_end] = 498,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [152] = {
        [sym__terminator] = 500,
        [aux_sym_program_repeat1] = 500,
        [anon_sym_end] = 500,
        [anon_sym_if] = 500,
        [anon_sym_while] = 500,
        [anon_sym_unless] = 500,
        [anon_sym_until] = 500,
        [sym_comment] = 42,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [153] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 502,
        [anon_sym_end] = 462,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [154] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_end] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [sym_comment] = 42,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [155] = {
        [anon_sym_end] = 484,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [156] = {
        [sym__do_block] = 506,
        [anon_sym_do] = 508,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [157] = {
        [sym__do_block] = 510,
        [anon_sym_do] = 510,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [158] = {
        [sym__do_block] = 66,
        [anon_sym_do] = 66,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [159] = {
        [sym__do_block] = 68,
        [anon_sym_do] = 68,
        [anon_sym_COLON_COLON] = 512,
        [anon_sym_LBRACK] = 514,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [160] = {
        [sym__do_block] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 74,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [161] = {
        [sym__statement] = 516,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_RPAREN] = 518,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [162] = {
        [sym_identifier] = 520,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [163] = {
        [sym__do_block] = 164,
        [anon_sym_do] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [164] = {
        [sym__do_block] = 184,
        [anon_sym_do] = 184,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_LBRACK] = 184,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [165] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 522,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 524,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [166] = {
        [sym__do_block] = 214,
        [anon_sym_do] = 214,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_LBRACK] = 214,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [167] = {
        [anon_sym_RPAREN] = 526,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [168] = {
        [sym__do_block] = 398,
        [anon_sym_do] = 398,
        [anon_sym_COLON_COLON] = 398,
        [anon_sym_LBRACK] = 398,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [169] = {
        [sym__do_block] = 400,
        [anon_sym_do] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [170] = {
        [sym_identifier] = 528,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [171] = {
        [sym__argument] = 530,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_RBRACK] = 540,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [172] = {
        [aux_sym__call_arguments_repeat1] = 544,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 548,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [173] = {
        [aux_sym__call_arguments_repeat1] = 68,
        [anon_sym_COMMA] = 68,
        [anon_sym_COLON_COLON] = 550,
        [anon_sym_LBRACK] = 552,
        [anon_sym_RBRACK] = 68,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [174] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_COMMA] = 74,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 74,
        [anon_sym_RBRACK] = 74,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [175] = {
        [sym__statement] = 554,
        [sym__declaration] = 106,
        [sym_method_declaration] = 108,
        [sym_class_declaration] = 108,
        [sym_module_declaration] = 108,
        [sym_while_statement] = 106,
        [sym__call] = 110,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 106,
        [sym__argument] = 112,
        [sym__primary] = 114,
        [sym_scope_resolution_expression] = 116,
        [sym_subscript_expression] = 116,
        [sym__variable] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_alias] = 120,
        [anon_sym_while] = 122,
        [anon_sym_def] = 124,
        [anon_sym_LPAREN] = 126,
        [anon_sym_RPAREN] = 556,
        [anon_sym_class] = 130,
        [anon_sym_COLON_COLON] = 132,
        [anon_sym_module] = 134,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 42,
        [sym_symbol] = 112,
        [sym__line_break] = 42,
    },
    [176] = {
        [sym_identifier] = 558,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [177] = {
        [sym__do_block] = 560,
        [anon_sym_do] = 560,
        [anon_sym_COLON_COLON] = 560,
        [anon_sym_LBRACK] = 560,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [178] = {
        [aux_sym__call_arguments_repeat1] = 164,
        [anon_sym_COMMA] = 164,
        [anon_sym_COLON_COLON] = 164,
        [anon_sym_LBRACK] = 164,
        [anon_sym_RBRACK] = 164,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [179] = {
        [aux_sym__call_arguments_repeat1] = 184,
        [anon_sym_COMMA] = 184,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_LBRACK] = 184,
        [anon_sym_RBRACK] = 184,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [180] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 562,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 564,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [181] = {
        [aux_sym__call_arguments_repeat1] = 214,
        [anon_sym_COMMA] = 214,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_LBRACK] = 214,
        [anon_sym_RBRACK] = 214,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [182] = {
        [anon_sym_RPAREN] = 566,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [183] = {
        [aux_sym__call_arguments_repeat1] = 398,
        [anon_sym_COMMA] = 398,
        [anon_sym_COLON_COLON] = 398,
        [anon_sym_LBRACK] = 398,
        [anon_sym_RBRACK] = 398,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [184] = {
        [aux_sym__call_arguments_repeat1] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [anon_sym_RBRACK] = 400,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [185] = {
        [sym_identifier] = 568,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [186] = {
        [sym__argument] = 570,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_RBRACK] = 572,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [187] = {
        [aux_sym__call_arguments_repeat1] = 574,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 576,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [188] = {
        [aux_sym__call_arguments_repeat1] = 560,
        [anon_sym_COMMA] = 560,
        [anon_sym_COLON_COLON] = 560,
        [anon_sym_LBRACK] = 560,
        [anon_sym_RBRACK] = 560,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [189] = {
        [anon_sym_RBRACK] = 578,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [190] = {
        [sym__argument] = 580,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [191] = {
        [aux_sym__call_arguments_repeat1] = 582,
        [anon_sym_COMMA] = 582,
        [anon_sym_COLON_COLON] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_RBRACK] = 582,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [192] = {
        [aux_sym__call_arguments_repeat1] = 584,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 586,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [193] = {
        [anon_sym_RBRACK] = 588,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [194] = {
        [aux_sym__call_arguments_repeat1] = 590,
        [anon_sym_COMMA] = 590,
        [anon_sym_COLON_COLON] = 590,
        [anon_sym_LBRACK] = 590,
        [anon_sym_RBRACK] = 590,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [195] = {
        [aux_sym__call_arguments_repeat1] = 592,
        [anon_sym_COMMA] = 592,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 592,
        [anon_sym_RBRACK] = 592,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [196] = {
        [anon_sym_RBRACK] = 594,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [197] = {
        [sym__do_block] = 582,
        [anon_sym_do] = 582,
        [anon_sym_COLON_COLON] = 582,
        [anon_sym_LBRACK] = 582,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [198] = {
        [sym__do_block] = 590,
        [anon_sym_do] = 590,
        [anon_sym_COLON_COLON] = 590,
        [anon_sym_LBRACK] = 590,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [199] = {
        [sym__do_block] = 592,
        [anon_sym_do] = 592,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 592,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [200] = {
        [sym__terminator] = 596,
        [aux_sym_program_repeat1] = 596,
        [anon_sym_end] = 596,
        [anon_sym_if] = 596,
        [anon_sym_while] = 596,
        [anon_sym_unless] = 596,
        [anon_sym_until] = 596,
        [sym_comment] = 42,
        [sym__line_break] = 596,
        [anon_sym_SEMI] = 596,
    },
    [201] = {
        [sym__statement] = 598,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 600,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [202] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 602,
        [anon_sym_end] = 604,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [203] = {
        [sym__terminator] = 606,
        [aux_sym_program_repeat1] = 606,
        [anon_sym_end] = 606,
        [anon_sym_if] = 606,
        [anon_sym_while] = 606,
        [anon_sym_unless] = 606,
        [anon_sym_until] = 606,
        [sym_comment] = 42,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [204] = {
        [anon_sym_end] = 608,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [205] = {
        [sym__terminator] = 610,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_end] = 610,
        [anon_sym_if] = 610,
        [anon_sym_while] = 610,
        [anon_sym_unless] = 610,
        [anon_sym_until] = 610,
        [sym_comment] = 42,
        [sym__line_break] = 610,
        [anon_sym_SEMI] = 610,
    },
    [206] = {
        [sym__terminator] = 612,
        [aux_sym_program_repeat1] = 612,
        [anon_sym_end] = 612,
        [anon_sym_if] = 612,
        [anon_sym_while] = 612,
        [anon_sym_unless] = 612,
        [anon_sym_until] = 612,
        [sym_comment] = 42,
        [sym__line_break] = 612,
        [anon_sym_SEMI] = 612,
    },
    [207] = {
        [sym__function_name] = 318,
        [anon_sym_PIPE] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_AMP] = 284,
        [anon_sym_LT] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 284,
        [anon_sym_CARET] = 284,
        [anon_sym_LT_EQ_GT] = 284,
        [anon_sym_EQ_EQ] = 284,
        [anon_sym_EQ_EQ_EQ] = 284,
        [anon_sym_EQ_TILDE] = 284,
        [anon_sym_GT] = 284,
        [anon_sym_GT_EQ] = 284,
        [anon_sym_LT_EQ] = 284,
        [anon_sym_PLUS] = 284,
        [anon_sym_DASH] = 284,
        [anon_sym_SLASH] = 284,
        [anon_sym_PERCENT] = 284,
        [anon_sym_STAR_STAR] = 284,
        [anon_sym_LT_LT] = 284,
        [anon_sym_GT_GT] = 284,
        [anon_sym_TILDE] = 284,
        [anon_sym_PLUS_AT] = 284,
        [anon_sym_DASH_AT] = 284,
        [anon_sym_LBRACK_RBRACK] = 284,
        [anon_sym_LBRACK_RBRACK_EQ] = 284,
        [sym__line_break] = 42,
    },
    [208] = {
        [sym__function_name] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_LT] = 414,
        [sym_identifier] = 414,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_LT_EQ_GT] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_EQ_EQ_EQ] = 414,
        [anon_sym_EQ_TILDE] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_STAR_STAR] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_TILDE] = 414,
        [anon_sym_PLUS_AT] = 414,
        [anon_sym_DASH_AT] = 414,
        [anon_sym_LBRACK_RBRACK] = 414,
        [anon_sym_LBRACK_RBRACK_EQ] = 414,
        [sym__line_break] = 42,
    },
    [209] = {
        [sym__terminator] = 414,
        [aux_sym_program_repeat1] = 414,
        [anon_sym_end] = 414,
        [anon_sym_if] = 414,
        [anon_sym_while] = 414,
        [anon_sym_unless] = 414,
        [anon_sym_until] = 414,
        [sym_comment] = 42,
        [sym__line_break] = 414,
        [anon_sym_SEMI] = 414,
    },
    [210] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [sym_comment] = 42,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [211] = {
        [sym_identifier] = 616,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [212] = {
        [sym__argument] = 618,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_RBRACK] = 620,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [213] = {
        [aux_sym__call_arguments_repeat1] = 622,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 624,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [214] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_end] = 560,
        [anon_sym_if] = 560,
        [anon_sym_while] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_until] = 560,
        [anon_sym_COLON_COLON] = 560,
        [anon_sym_LBRACK] = 560,
        [sym_comment] = 42,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [215] = {
        [anon_sym_RBRACK] = 626,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [216] = {
        [sym__terminator] = 582,
        [aux_sym_program_repeat1] = 582,
        [anon_sym_end] = 582,
        [anon_sym_if] = 582,
        [anon_sym_while] = 582,
        [anon_sym_unless] = 582,
        [anon_sym_until] = 582,
        [anon_sym_COLON_COLON] = 582,
        [anon_sym_LBRACK] = 582,
        [sym_comment] = 42,
        [sym__line_break] = 582,
        [anon_sym_SEMI] = 582,
    },
    [217] = {
        [sym__terminator] = 590,
        [aux_sym_program_repeat1] = 590,
        [anon_sym_end] = 590,
        [anon_sym_if] = 590,
        [anon_sym_while] = 590,
        [anon_sym_unless] = 590,
        [anon_sym_until] = 590,
        [anon_sym_COLON_COLON] = 590,
        [anon_sym_LBRACK] = 590,
        [sym_comment] = 42,
        [sym__line_break] = 590,
        [anon_sym_SEMI] = 590,
    },
    [218] = {
        [sym__terminator] = 592,
        [aux_sym_program_repeat1] = 592,
        [anon_sym_end] = 592,
        [anon_sym_if] = 592,
        [anon_sym_while] = 592,
        [anon_sym_unless] = 592,
        [anon_sym_until] = 592,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 592,
        [sym_comment] = 42,
        [sym__line_break] = 592,
        [anon_sym_SEMI] = 592,
    },
    [219] = {
        [sym__statement] = 628,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_PIPE] = 630,
        [anon_sym_end] = 318,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [220] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 634,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [221] = {
        [sym__statement] = 636,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 634,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [222] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 638,
        [anon_sym_end] = 640,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [223] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 642,
        [anon_sym_if] = 642,
        [anon_sym_while] = 642,
        [anon_sym_unless] = 642,
        [anon_sym_until] = 642,
        [sym_comment] = 42,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [224] = {
        [anon_sym_end] = 644,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [225] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [sym_comment] = 42,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [226] = {
        [sym__terminator] = 648,
        [aux_sym_program_repeat1] = 648,
        [anon_sym_end] = 648,
        [anon_sym_if] = 648,
        [anon_sym_while] = 648,
        [anon_sym_unless] = 648,
        [anon_sym_until] = 648,
        [sym_comment] = 42,
        [sym__line_break] = 648,
        [anon_sym_SEMI] = 648,
    },
    [227] = {
        [anon_sym_end] = 640,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [228] = {
        [anon_sym_end] = 650,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [229] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [anon_sym_RPAREN] = 316,
        [sym_comment] = 42,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [230] = {
        [sym__terminator] = 322,
        [aux_sym_program_repeat1] = 322,
        [anon_sym_if] = 322,
        [anon_sym_while] = 322,
        [anon_sym_unless] = 322,
        [anon_sym_until] = 322,
        [anon_sym_RPAREN] = 322,
        [sym_comment] = 42,
        [sym__line_break] = 322,
        [anon_sym_SEMI] = 322,
    },
    [231] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 184,
        [anon_sym_if] = 184,
        [anon_sym_while] = 184,
        [anon_sym_unless] = 184,
        [anon_sym_until] = 184,
        [anon_sym_RPAREN] = 184,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_LBRACK] = 184,
        [sym_comment] = 42,
        [sym__line_break] = 184,
        [anon_sym_SEMI] = 184,
    },
    [232] = {
        [sym__terminator] = 652,
        [anon_sym_LT] = 654,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [233] = {
        [sym__statement] = 656,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 658,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [234] = {
        [sym_identifier] = 660,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [235] = {
        [sym__terminator] = 662,
        [aux_sym_class_declaration_repeat1] = 664,
        [anon_sym_COLON_COLON] = 344,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [236] = {
        [sym__statement] = 666,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 668,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [237] = {
        [sym__terminator] = 670,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [238] = {
        [sym__statement] = 672,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 674,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [239] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 676,
        [anon_sym_end] = 678,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [240] = {
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [anon_sym_if] = 368,
        [anon_sym_while] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_until] = 368,
        [anon_sym_RPAREN] = 368,
        [sym_comment] = 42,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [241] = {
        [anon_sym_end] = 680,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [242] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_RPAREN] = 372,
        [sym_comment] = 42,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [243] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [anon_sym_RPAREN] = 374,
        [sym_comment] = 42,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [244] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 682,
        [anon_sym_end] = 674,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [245] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 42,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [246] = {
        [anon_sym_end] = 678,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [247] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 686,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [248] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [anon_sym_RPAREN] = 384,
        [sym_comment] = 42,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [249] = {
        [anon_sym_end] = 668,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [250] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [anon_sym_RPAREN] = 386,
        [sym_comment] = 42,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [251] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 688,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 690,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [252] = {
        [sym__terminator] = 214,
        [aux_sym_program_repeat1] = 214,
        [anon_sym_if] = 214,
        [anon_sym_while] = 214,
        [anon_sym_unless] = 214,
        [anon_sym_until] = 214,
        [anon_sym_RPAREN] = 214,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_LBRACK] = 214,
        [sym_comment] = 42,
        [sym__line_break] = 214,
        [anon_sym_SEMI] = 214,
    },
    [253] = {
        [anon_sym_RPAREN] = 692,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [254] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [anon_sym_RPAREN] = 398,
        [anon_sym_COLON_COLON] = 398,
        [anon_sym_LBRACK] = 398,
        [sym_comment] = 42,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [255] = {
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [anon_sym_if] = 400,
        [anon_sym_while] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_until] = 400,
        [anon_sym_RPAREN] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 42,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [256] = {
        [sym_argument_list] = 694,
        [sym__terminator] = 696,
        [anon_sym_LPAREN] = 698,
        [anon_sym_STAR] = 410,
        [anon_sym_AMP] = 410,
        [sym_identifier] = 412,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [257] = {
        [sym__terminator] = 700,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [258] = {
        [sym__statement] = 702,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 704,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [259] = {
        [sym_argument_list] = 706,
        [anon_sym_RPAREN] = 700,
        [anon_sym_STAR] = 424,
        [anon_sym_AMP] = 424,
        [sym_identifier] = 426,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [260] = {
        [anon_sym_RPAREN] = 708,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [261] = {
        [sym__statement] = 710,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 712,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [262] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 714,
        [anon_sym_end] = 716,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [263] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_if] = 486,
        [anon_sym_while] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_until] = 486,
        [anon_sym_RPAREN] = 486,
        [sym_comment] = 42,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [264] = {
        [anon_sym_end] = 718,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [265] = {
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [anon_sym_if] = 490,
        [anon_sym_while] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_until] = 490,
        [anon_sym_RPAREN] = 490,
        [sym_comment] = 42,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [266] = {
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [anon_sym_if] = 492,
        [anon_sym_while] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_until] = 492,
        [anon_sym_RPAREN] = 492,
        [sym_comment] = 42,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [267] = {
        [sym__statement] = 720,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 716,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [268] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 722,
        [anon_sym_end] = 718,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [269] = {
        [anon_sym_end] = 724,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [270] = {
        [sym__terminator] = 500,
        [aux_sym_program_repeat1] = 500,
        [anon_sym_if] = 500,
        [anon_sym_while] = 500,
        [anon_sym_unless] = 500,
        [anon_sym_until] = 500,
        [anon_sym_RPAREN] = 500,
        [sym_comment] = 42,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [271] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 726,
        [anon_sym_end] = 712,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [272] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [anon_sym_RPAREN] = 504,
        [sym_comment] = 42,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [273] = {
        [anon_sym_end] = 716,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [274] = {
        [sym__do_block] = 728,
        [anon_sym_do] = 730,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [275] = {
        [sym__terminator] = 596,
        [aux_sym_program_repeat1] = 596,
        [anon_sym_if] = 596,
        [anon_sym_while] = 596,
        [anon_sym_unless] = 596,
        [anon_sym_until] = 596,
        [anon_sym_RPAREN] = 596,
        [sym_comment] = 42,
        [sym__line_break] = 596,
        [anon_sym_SEMI] = 596,
    },
    [276] = {
        [sym__statement] = 732,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 734,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [277] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 736,
        [anon_sym_end] = 738,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [278] = {
        [sym__terminator] = 606,
        [aux_sym_program_repeat1] = 606,
        [anon_sym_if] = 606,
        [anon_sym_while] = 606,
        [anon_sym_unless] = 606,
        [anon_sym_until] = 606,
        [anon_sym_RPAREN] = 606,
        [sym_comment] = 42,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [279] = {
        [anon_sym_end] = 740,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [280] = {
        [sym__terminator] = 610,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_if] = 610,
        [anon_sym_while] = 610,
        [anon_sym_unless] = 610,
        [anon_sym_until] = 610,
        [anon_sym_RPAREN] = 610,
        [sym_comment] = 42,
        [sym__line_break] = 610,
        [anon_sym_SEMI] = 610,
    },
    [281] = {
        [sym__terminator] = 612,
        [aux_sym_program_repeat1] = 612,
        [anon_sym_if] = 612,
        [anon_sym_while] = 612,
        [anon_sym_unless] = 612,
        [anon_sym_until] = 612,
        [anon_sym_RPAREN] = 612,
        [sym_comment] = 42,
        [sym__line_break] = 612,
        [anon_sym_SEMI] = 612,
    },
    [282] = {
        [sym__function_name] = 396,
        [anon_sym_PIPE] = 202,
        [anon_sym_STAR] = 202,
        [anon_sym_AMP] = 202,
        [anon_sym_LT] = 202,
        [sym_identifier] = 202,
        [sym_comment] = 42,
        [anon_sym_DOT_DOT] = 202,
        [anon_sym_CARET] = 202,
        [anon_sym_LT_EQ_GT] = 202,
        [anon_sym_EQ_EQ] = 202,
        [anon_sym_EQ_EQ_EQ] = 202,
        [anon_sym_EQ_TILDE] = 202,
        [anon_sym_GT] = 202,
        [anon_sym_GT_EQ] = 202,
        [anon_sym_LT_EQ] = 202,
        [anon_sym_PLUS] = 202,
        [anon_sym_DASH] = 202,
        [anon_sym_SLASH] = 202,
        [anon_sym_PERCENT] = 202,
        [anon_sym_STAR_STAR] = 202,
        [anon_sym_LT_LT] = 202,
        [anon_sym_GT_GT] = 202,
        [anon_sym_TILDE] = 202,
        [anon_sym_PLUS_AT] = 202,
        [anon_sym_DASH_AT] = 202,
        [anon_sym_LBRACK_RBRACK] = 202,
        [anon_sym_LBRACK_RBRACK_EQ] = 202,
        [sym__line_break] = 42,
    },
    [283] = {
        [sym__terminator] = 414,
        [aux_sym_program_repeat1] = 414,
        [anon_sym_if] = 414,
        [anon_sym_while] = 414,
        [anon_sym_unless] = 414,
        [anon_sym_until] = 414,
        [anon_sym_RPAREN] = 414,
        [sym_comment] = 42,
        [sym__line_break] = 414,
        [anon_sym_SEMI] = 414,
    },
    [284] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_RPAREN] = 614,
        [sym_comment] = 42,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [285] = {
        [sym_identifier] = 742,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [286] = {
        [sym__argument] = 744,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_RBRACK] = 746,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [287] = {
        [aux_sym__call_arguments_repeat1] = 748,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 750,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [288] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_if] = 560,
        [anon_sym_while] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_until] = 560,
        [anon_sym_RPAREN] = 560,
        [anon_sym_COLON_COLON] = 560,
        [anon_sym_LBRACK] = 560,
        [sym_comment] = 42,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [289] = {
        [anon_sym_RBRACK] = 752,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [290] = {
        [sym__terminator] = 582,
        [aux_sym_program_repeat1] = 582,
        [anon_sym_if] = 582,
        [anon_sym_while] = 582,
        [anon_sym_unless] = 582,
        [anon_sym_until] = 582,
        [anon_sym_RPAREN] = 582,
        [anon_sym_COLON_COLON] = 582,
        [anon_sym_LBRACK] = 582,
        [sym_comment] = 42,
        [sym__line_break] = 582,
        [anon_sym_SEMI] = 582,
    },
    [291] = {
        [sym__terminator] = 590,
        [aux_sym_program_repeat1] = 590,
        [anon_sym_if] = 590,
        [anon_sym_while] = 590,
        [anon_sym_unless] = 590,
        [anon_sym_until] = 590,
        [anon_sym_RPAREN] = 590,
        [anon_sym_COLON_COLON] = 590,
        [anon_sym_LBRACK] = 590,
        [sym_comment] = 42,
        [sym__line_break] = 590,
        [anon_sym_SEMI] = 590,
    },
    [292] = {
        [sym__terminator] = 592,
        [aux_sym_program_repeat1] = 592,
        [anon_sym_if] = 592,
        [anon_sym_while] = 592,
        [anon_sym_unless] = 592,
        [anon_sym_until] = 592,
        [anon_sym_RPAREN] = 592,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 592,
        [sym_comment] = 42,
        [sym__line_break] = 592,
        [anon_sym_SEMI] = 592,
    },
    [293] = {
        [sym__statement] = 754,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_PIPE] = 756,
        [anon_sym_end] = 396,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [294] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 758,
        [anon_sym_end] = 760,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [295] = {
        [sym__statement] = 762,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 760,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [296] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 764,
        [anon_sym_end] = 766,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [297] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_if] = 642,
        [anon_sym_while] = 642,
        [anon_sym_unless] = 642,
        [anon_sym_until] = 642,
        [anon_sym_RPAREN] = 642,
        [sym_comment] = 42,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [298] = {
        [anon_sym_end] = 768,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [299] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [anon_sym_RPAREN] = 646,
        [sym_comment] = 42,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [300] = {
        [sym__terminator] = 648,
        [aux_sym_program_repeat1] = 648,
        [anon_sym_if] = 648,
        [anon_sym_while] = 648,
        [anon_sym_unless] = 648,
        [anon_sym_until] = 648,
        [anon_sym_RPAREN] = 648,
        [sym_comment] = 42,
        [sym__line_break] = 648,
        [anon_sym_SEMI] = 648,
    },
    [301] = {
        [anon_sym_end] = 766,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [302] = {
        [anon_sym_RPAREN] = 770,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [303] = {
        [aux_sym__call_arguments_repeat1] = 398,
        [anon_sym_do] = 398,
        [anon_sym_COMMA] = 398,
        [anon_sym_COLON_COLON] = 398,
        [anon_sym_LBRACK] = 398,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [304] = {
        [aux_sym__call_arguments_repeat1] = 400,
        [anon_sym_do] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [305] = {
        [sym_identifier] = 772,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [306] = {
        [sym__argument] = 774,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_RBRACK] = 776,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [307] = {
        [aux_sym__call_arguments_repeat1] = 778,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 780,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [308] = {
        [aux_sym__call_arguments_repeat1] = 560,
        [anon_sym_do] = 560,
        [anon_sym_COMMA] = 560,
        [anon_sym_COLON_COLON] = 560,
        [anon_sym_LBRACK] = 560,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [309] = {
        [anon_sym_RBRACK] = 782,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [310] = {
        [aux_sym__call_arguments_repeat1] = 582,
        [anon_sym_do] = 582,
        [anon_sym_COMMA] = 582,
        [anon_sym_COLON_COLON] = 582,
        [anon_sym_LBRACK] = 582,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [311] = {
        [aux_sym__call_arguments_repeat1] = 590,
        [anon_sym_do] = 590,
        [anon_sym_COMMA] = 590,
        [anon_sym_COLON_COLON] = 590,
        [anon_sym_LBRACK] = 590,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [312] = {
        [aux_sym__call_arguments_repeat1] = 592,
        [anon_sym_do] = 592,
        [anon_sym_COMMA] = 592,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 592,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [313] = {
        [anon_sym_do] = 784,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [314] = {
        [sym__argument] = 786,
        [sym__primary] = 150,
        [sym_scope_resolution_expression] = 152,
        [sym_subscript_expression] = 152,
        [sym__variable] = 152,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [315] = {
        [aux_sym__call_arguments_repeat1] = 788,
        [anon_sym_do] = 586,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [316] = {
        [anon_sym_do] = 588,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [317] = {
        [sym__terminator] = 790,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [318] = {
        [sym__statement] = 792,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 794,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [319] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 796,
        [anon_sym_end] = 798,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [320] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [ts_builtin_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 42,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [321] = {
        [anon_sym_end] = 800,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [322] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [ts_builtin_sym_end] = 316,
        [anon_sym_if] = 316,
        [anon_sym_while] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_until] = 316,
        [sym_comment] = 42,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [323] = {
        [sym__terminator] = 322,
        [aux_sym_program_repeat1] = 322,
        [ts_builtin_sym_end] = 322,
        [anon_sym_if] = 322,
        [anon_sym_while] = 322,
        [anon_sym_unless] = 322,
        [anon_sym_until] = 322,
        [sym_comment] = 42,
        [sym__line_break] = 322,
        [anon_sym_SEMI] = 322,
    },
    [324] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 184,
        [ts_builtin_sym_end] = 184,
        [anon_sym_if] = 184,
        [anon_sym_while] = 184,
        [anon_sym_unless] = 184,
        [anon_sym_until] = 184,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_LBRACK] = 184,
        [sym_comment] = 42,
        [sym__line_break] = 184,
        [anon_sym_SEMI] = 184,
    },
    [325] = {
        [sym__terminator] = 802,
        [anon_sym_LT] = 804,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [326] = {
        [sym__statement] = 806,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 808,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [327] = {
        [sym_identifier] = 810,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [328] = {
        [sym__terminator] = 812,
        [aux_sym_class_declaration_repeat1] = 814,
        [anon_sym_COLON_COLON] = 344,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [329] = {
        [sym__statement] = 816,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 818,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [330] = {
        [sym__terminator] = 820,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [331] = {
        [sym__statement] = 822,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 824,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [332] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 826,
        [anon_sym_end] = 828,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [333] = {
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [ts_builtin_sym_end] = 368,
        [anon_sym_if] = 368,
        [anon_sym_while] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_until] = 368,
        [sym_comment] = 42,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [334] = {
        [anon_sym_end] = 830,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [335] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [ts_builtin_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [sym_comment] = 42,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [336] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [ts_builtin_sym_end] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [sym_comment] = 42,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [337] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 832,
        [anon_sym_end] = 824,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [338] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [ts_builtin_sym_end] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [sym_comment] = 42,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [339] = {
        [anon_sym_end] = 828,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [340] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 834,
        [anon_sym_end] = 836,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [341] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [ts_builtin_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 42,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [342] = {
        [anon_sym_end] = 818,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [343] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 42,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [344] = {
        [sym__terminator] = 186,
        [aux_sym_program_repeat1] = 838,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 840,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [345] = {
        [sym__terminator] = 214,
        [aux_sym_program_repeat1] = 214,
        [ts_builtin_sym_end] = 214,
        [anon_sym_if] = 214,
        [anon_sym_while] = 214,
        [anon_sym_unless] = 214,
        [anon_sym_until] = 214,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_LBRACK] = 214,
        [sym_comment] = 42,
        [sym__line_break] = 214,
        [anon_sym_SEMI] = 214,
    },
    [346] = {
        [anon_sym_RPAREN] = 842,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [347] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [ts_builtin_sym_end] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [anon_sym_COLON_COLON] = 398,
        [anon_sym_LBRACK] = 398,
        [sym_comment] = 42,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [348] = {
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [ts_builtin_sym_end] = 400,
        [anon_sym_if] = 400,
        [anon_sym_while] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_until] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 42,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [349] = {
        [sym_argument_list] = 844,
        [sym__terminator] = 846,
        [anon_sym_LPAREN] = 848,
        [anon_sym_STAR] = 410,
        [anon_sym_AMP] = 410,
        [sym_identifier] = 412,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [350] = {
        [sym__terminator] = 850,
        [sym_comment] = 42,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [351] = {
        [sym__statement] = 852,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 854,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [352] = {
        [sym_argument_list] = 856,
        [anon_sym_RPAREN] = 850,
        [anon_sym_STAR] = 424,
        [anon_sym_AMP] = 424,
        [sym_identifier] = 426,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [353] = {
        [anon_sym_RPAREN] = 858,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [354] = {
        [sym__statement] = 860,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 862,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [355] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 864,
        [anon_sym_end] = 866,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [356] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [ts_builtin_sym_end] = 486,
        [anon_sym_if] = 486,
        [anon_sym_while] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_until] = 486,
        [sym_comment] = 42,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [357] = {
        [anon_sym_end] = 868,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [358] = {
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [ts_builtin_sym_end] = 490,
        [anon_sym_if] = 490,
        [anon_sym_while] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_until] = 490,
        [sym_comment] = 42,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [359] = {
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [ts_builtin_sym_end] = 492,
        [anon_sym_if] = 492,
        [anon_sym_while] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_until] = 492,
        [sym_comment] = 42,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [360] = {
        [sym__statement] = 870,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 866,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [361] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 872,
        [anon_sym_end] = 868,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [362] = {
        [anon_sym_end] = 874,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [363] = {
        [sym__terminator] = 500,
        [aux_sym_program_repeat1] = 500,
        [ts_builtin_sym_end] = 500,
        [anon_sym_if] = 500,
        [anon_sym_while] = 500,
        [anon_sym_unless] = 500,
        [anon_sym_until] = 500,
        [sym_comment] = 42,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [364] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 876,
        [anon_sym_end] = 862,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [365] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [sym_comment] = 42,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [366] = {
        [anon_sym_end] = 866,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [367] = {
        [sym__do_block] = 878,
        [anon_sym_do] = 880,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [368] = {
        [sym__terminator] = 596,
        [aux_sym_program_repeat1] = 596,
        [ts_builtin_sym_end] = 596,
        [anon_sym_if] = 596,
        [anon_sym_while] = 596,
        [anon_sym_unless] = 596,
        [anon_sym_until] = 596,
        [sym_comment] = 42,
        [sym__line_break] = 596,
        [anon_sym_SEMI] = 596,
    },
    [369] = {
        [sym__statement] = 882,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 884,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [370] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 886,
        [anon_sym_end] = 888,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [371] = {
        [sym__terminator] = 606,
        [aux_sym_program_repeat1] = 606,
        [ts_builtin_sym_end] = 606,
        [anon_sym_if] = 606,
        [anon_sym_while] = 606,
        [anon_sym_unless] = 606,
        [anon_sym_until] = 606,
        [sym_comment] = 42,
        [sym__line_break] = 606,
        [anon_sym_SEMI] = 606,
    },
    [372] = {
        [anon_sym_end] = 890,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [373] = {
        [sym__terminator] = 610,
        [aux_sym_program_repeat1] = 610,
        [ts_builtin_sym_end] = 610,
        [anon_sym_if] = 610,
        [anon_sym_while] = 610,
        [anon_sym_unless] = 610,
        [anon_sym_until] = 610,
        [sym_comment] = 42,
        [sym__line_break] = 610,
        [anon_sym_SEMI] = 610,
    },
    [374] = {
        [sym__terminator] = 612,
        [aux_sym_program_repeat1] = 612,
        [ts_builtin_sym_end] = 612,
        [anon_sym_if] = 612,
        [anon_sym_while] = 612,
        [anon_sym_unless] = 612,
        [anon_sym_until] = 612,
        [sym_comment] = 42,
        [sym__line_break] = 612,
        [anon_sym_SEMI] = 612,
    },
    [375] = {
        [sym__function_name] = 892,
        [anon_sym_PIPE] = 78,
        [anon_sym_STAR] = 78,
        [anon_sym_AMP] = 78,
        [anon_sym_LT] = 78,
        [sym_identifier] = 78,
        [sym_comment] = 42,
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
        [sym__line_break] = 42,
    },
    [376] = {
        [sym__terminator] = 320,
        [aux_sym_program_repeat1] = 320,
        [ts_builtin_sym_end] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [sym_comment] = 42,
        [sym__line_break] = 320,
        [anon_sym_SEMI] = 320,
    },
    [377] = {
        [sym__terminator] = 414,
        [aux_sym_program_repeat1] = 414,
        [ts_builtin_sym_end] = 414,
        [anon_sym_if] = 414,
        [anon_sym_while] = 414,
        [anon_sym_unless] = 414,
        [anon_sym_until] = 414,
        [sym_comment] = 42,
        [sym__line_break] = 414,
        [anon_sym_SEMI] = 414,
    },
    [378] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [ts_builtin_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [sym_comment] = 42,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [379] = {
        [sym_identifier] = 894,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [380] = {
        [sym__argument] = 896,
        [sym__primary] = 532,
        [sym_scope_resolution_expression] = 534,
        [sym_subscript_expression] = 534,
        [sym__variable] = 534,
        [anon_sym_LPAREN] = 536,
        [anon_sym_COLON_COLON] = 538,
        [anon_sym_RBRACK] = 898,
        [anon_sym_nil] = 542,
        [anon_sym_self] = 542,
        [sym_identifier] = 542,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [381] = {
        [aux_sym__call_arguments_repeat1] = 900,
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACK] = 902,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [382] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [ts_builtin_sym_end] = 560,
        [anon_sym_if] = 560,
        [anon_sym_while] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_until] = 560,
        [anon_sym_COLON_COLON] = 560,
        [anon_sym_LBRACK] = 560,
        [sym_comment] = 42,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [383] = {
        [anon_sym_RBRACK] = 904,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [384] = {
        [sym__terminator] = 582,
        [aux_sym_program_repeat1] = 582,
        [ts_builtin_sym_end] = 582,
        [anon_sym_if] = 582,
        [anon_sym_while] = 582,
        [anon_sym_unless] = 582,
        [anon_sym_until] = 582,
        [anon_sym_COLON_COLON] = 582,
        [anon_sym_LBRACK] = 582,
        [sym_comment] = 42,
        [sym__line_break] = 582,
        [anon_sym_SEMI] = 582,
    },
    [385] = {
        [sym__terminator] = 590,
        [aux_sym_program_repeat1] = 590,
        [ts_builtin_sym_end] = 590,
        [anon_sym_if] = 590,
        [anon_sym_while] = 590,
        [anon_sym_unless] = 590,
        [anon_sym_until] = 590,
        [anon_sym_COLON_COLON] = 590,
        [anon_sym_LBRACK] = 590,
        [sym_comment] = 42,
        [sym__line_break] = 590,
        [anon_sym_SEMI] = 590,
    },
    [386] = {
        [sym__terminator] = 592,
        [aux_sym_program_repeat1] = 592,
        [ts_builtin_sym_end] = 592,
        [anon_sym_if] = 592,
        [anon_sym_while] = 592,
        [anon_sym_unless] = 592,
        [anon_sym_until] = 592,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 592,
        [sym_comment] = 42,
        [sym__line_break] = 592,
        [anon_sym_SEMI] = 592,
    },
    [387] = {
        [sym__statement] = 906,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_PIPE] = 908,
        [anon_sym_end] = 892,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [388] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 910,
        [anon_sym_end] = 912,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [389] = {
        [sym__statement] = 914,
        [sym__declaration] = 230,
        [sym_method_declaration] = 232,
        [sym_class_declaration] = 232,
        [sym_module_declaration] = 232,
        [sym_while_statement] = 230,
        [sym__call] = 234,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 230,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym__variable] = 240,
        [anon_sym_end] = 912,
        [anon_sym_undef] = 244,
        [anon_sym_alias] = 246,
        [anon_sym_while] = 248,
        [anon_sym_def] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 256,
        [anon_sym_module] = 258,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 42,
        [sym_symbol] = 236,
        [sym__line_break] = 42,
    },
    [390] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 916,
        [anon_sym_end] = 918,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [391] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [ts_builtin_sym_end] = 642,
        [anon_sym_if] = 642,
        [anon_sym_while] = 642,
        [anon_sym_unless] = 642,
        [anon_sym_until] = 642,
        [sym_comment] = 42,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [392] = {
        [anon_sym_end] = 920,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [393] = {
        [sym__terminator] = 646,
        [aux_sym_program_repeat1] = 646,
        [ts_builtin_sym_end] = 646,
        [anon_sym_if] = 646,
        [anon_sym_while] = 646,
        [anon_sym_unless] = 646,
        [anon_sym_until] = 646,
        [sym_comment] = 42,
        [sym__line_break] = 646,
        [anon_sym_SEMI] = 646,
    },
    [394] = {
        [sym__terminator] = 648,
        [aux_sym_program_repeat1] = 648,
        [ts_builtin_sym_end] = 648,
        [anon_sym_if] = 648,
        [anon_sym_while] = 648,
        [anon_sym_unless] = 648,
        [anon_sym_until] = 648,
        [sym_comment] = 42,
        [sym__line_break] = 648,
        [anon_sym_SEMI] = 648,
    },
    [395] = {
        [anon_sym_end] = 918,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [396] = {
        [sym__statement] = 922,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
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
        [anon_sym_def] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_class] = 32,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_module] = 36,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 40,
        [anon_sym_self] = 40,
        [sym_identifier] = 40,
        [sym_comment] = 42,
        [sym_symbol] = 14,
        [sym__line_break] = 42,
    },
    [397] = {
        [ts_builtin_sym_end] = 924,
        [sym_comment] = 42,
        [sym__line_break] = 42,
    },
    [398] = {
        [sym__expression] = 892,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 40,
        [anon_sym_self] = 40,
        [sym_identifier] = 40,
        [sym_comment] = 42,
        [sym_symbol] = 14,
        [sym__line_break] = 42,
    },
    [399] = {
        [sym__terminator] = 46,
        [aux_sym_program_repeat1] = 926,
        [ts_builtin_sym_end] = 326,
        [anon_sym_if] = 52,
        [anon_sym_while] = 52,
        [anon_sym_unless] = 52,
        [anon_sym_until] = 52,
        [sym_comment] = 42,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [400] = {
        [ts_builtin_sym_end] = 328,
        [sym_comment] = 42,
        [sym__line_break] = 42,
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
    [42] = {.count = 1}, SHIFT_EXTRA(),
    [44] = {.count = 1}, ACCEPT_INPUT(),
    [46] = {.count = 1}, SHIFT(396, 0),
    [48] = {.count = 1}, SHIFT(397, 0),
    [50] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [52] = {.count = 1}, SHIFT(398, 0),
    [54] = {.count = 1}, SHIFT(76, 0),
    [56] = {.count = 1}, SHIFT(77, 0),
    [58] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [60] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [62] = {.count = 1}, SHIFT(387, 0),
    [64] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [70] = {.count = 1}, SHIFT(379, 0),
    [72] = {.count = 1}, SHIFT(380, 0),
    [74] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [76] = {.count = 1}, SHIFT(378, 0),
    [78] = {.count = 1}, SHIFT(377, 0),
    [80] = {.count = 1}, SHIFT(375, 0),
    [82] = {.count = 1}, SHIFT(208, 0),
    [84] = {.count = 1}, SHIFT(367, 0),
    [86] = {.count = 1}, SHIFT(157, 0),
    [88] = {.count = 1}, SHIFT(158, 0),
    [90] = {.count = 1}, SHIFT(159, 0),
    [92] = {.count = 1}, SHIFT(160, 0),
    [94] = {.count = 1}, SHIFT(161, 0),
    [96] = {.count = 1}, SHIFT(162, 0),
    [98] = {.count = 1}, SHIFT(163, 0),
    [100] = {.count = 1}, SHIFT(349, 0),
    [102] = {.count = 1}, SHIFT(116, 0),
    [104] = {.count = 1}, SHIFT(344, 0),
    [106] = {.count = 1}, SHIFT(31, 0),
    [108] = {.count = 1}, SHIFT(32, 0),
    [110] = {.count = 1}, SHIFT(33, 0),
    [112] = {.count = 1}, SHIFT(34, 0),
    [114] = {.count = 1}, SHIFT(35, 0),
    [116] = {.count = 1}, SHIFT(36, 0),
    [118] = {.count = 1}, SHIFT(37, 0),
    [120] = {.count = 1}, SHIFT(38, 0),
    [122] = {.count = 1}, SHIFT(39, 0),
    [124] = {.count = 1}, SHIFT(40, 0),
    [126] = {.count = 1}, SHIFT(41, 0),
    [128] = {.count = 1}, SHIFT(345, 0),
    [130] = {.count = 1}, SHIFT(43, 0),
    [132] = {.count = 1}, SHIFT(44, 0),
    [134] = {.count = 1}, SHIFT(45, 0),
    [136] = {.count = 1}, SHIFT(46, 0),
    [138] = {.count = 1}, SHIFT(325, 0),
    [140] = {.count = 1}, SHIFT(324, 0),
    [142] = {.count = 1}, SHIFT(317, 0),
    [144] = {.count = 1}, SHIFT(20, 0),
    [146] = {.count = 1}, SHIFT(21, 0),
    [148] = {.count = 1}, SHIFT(22, 0),
    [150] = {.count = 1}, SHIFT(23, 0),
    [152] = {.count = 1}, SHIFT(24, 0),
    [154] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [156] = {.count = 1}, SHIFT(25, 0),
    [158] = {.count = 1}, SHIFT(26, 0),
    [160] = {.count = 1}, SHIFT(27, 0),
    [162] = {.count = 1}, SHIFT(28, 0),
    [164] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [166] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [168] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [170] = {.count = 1}, SHIFT(313, 0),
    [172] = {.count = 1}, SHIFT(314, 0),
    [174] = {.count = 1}, SHIFT(305, 0),
    [176] = {.count = 1}, SHIFT(306, 0),
    [178] = {.count = 1}, SHIFT(30, 0),
    [180] = {.count = 1}, SHIFT(42, 0),
    [182] = {.count = 1}, SHIFT(29, 0),
    [184] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [186] = {.count = 1}, SHIFT(107, 0),
    [188] = {.count = 1}, SHIFT(302, 0),
    [190] = {.count = 1}, SHIFT(109, 0),
    [192] = {.count = 1}, SHIFT(303, 0),
    [194] = {.count = 1}, SHIFT(293, 0),
    [196] = {.count = 1}, SHIFT(285, 0),
    [198] = {.count = 1}, SHIFT(286, 0),
    [200] = {.count = 1}, SHIFT(284, 0),
    [202] = {.count = 1}, SHIFT(283, 0),
    [204] = {.count = 1}, SHIFT(282, 0),
    [206] = {.count = 1}, SHIFT(274, 0),
    [208] = {.count = 1}, SHIFT(256, 0),
    [210] = {.count = 1}, SHIFT(251, 0),
    [212] = {.count = 1}, SHIFT(252, 0),
    [214] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [216] = {.count = 1}, SHIFT(232, 0),
    [218] = {.count = 1}, SHIFT(231, 0),
    [220] = {.count = 1}, SHIFT(47, 0),
    [222] = {.count = 1}, SHIFT(48, 0),
    [224] = {.count = 1}, SHIFT(49, 0),
    [226] = {.count = 1}, SHIFT(50, 0),
    [228] = {.count = 1}, SHIFT(51, 0),
    [230] = {.count = 1}, SHIFT(52, 0),
    [232] = {.count = 1}, SHIFT(53, 0),
    [234] = {.count = 1}, SHIFT(54, 0),
    [236] = {.count = 1}, SHIFT(55, 0),
    [238] = {.count = 1}, SHIFT(56, 0),
    [240] = {.count = 1}, SHIFT(57, 0),
    [242] = {.count = 1}, SHIFT(58, 0),
    [244] = {.count = 1}, SHIFT(59, 0),
    [246] = {.count = 1}, SHIFT(60, 0),
    [248] = {.count = 1}, SHIFT(61, 0),
    [250] = {.count = 1}, SHIFT(62, 0),
    [252] = {.count = 1}, SHIFT(63, 0),
    [254] = {.count = 1}, SHIFT(64, 0),
    [256] = {.count = 1}, SHIFT(65, 0),
    [258] = {.count = 1}, SHIFT(66, 0),
    [260] = {.count = 1}, SHIFT(67, 0),
    [262] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [264] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [266] = {.count = 1}, SHIFT(72, 0),
    [268] = {.count = 1}, SHIFT(228, 0),
    [270] = {.count = 1}, SHIFT(229, 0),
    [272] = {.count = 1}, SHIFT(75, 0),
    [274] = {.count = 1}, SHIFT(219, 0),
    [276] = {.count = 1}, SHIFT(211, 0),
    [278] = {.count = 1}, SHIFT(212, 0),
    [280] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [282] = {.count = 1}, SHIFT(210, 0),
    [284] = {.count = 1}, SHIFT(209, 0),
    [286] = {.count = 1}, SHIFT(207, 0),
    [288] = {.count = 1}, SHIFT(156, 0),
    [290] = {.count = 1}, SHIFT(115, 0),
    [292] = {.count = 1}, SHIFT(105, 0),
    [294] = {.count = 1}, SHIFT(106, 0),
    [296] = {.count = 1}, SHIFT(83, 0),
    [298] = {.count = 1}, SHIFT(82, 0),
    [300] = {.count = 1}, SHIFT(68, 0),
    [302] = {.count = 1}, SHIFT(69, 0),
    [304] = {.count = 1}, SHIFT(70, 0),
    [306] = {.count = 1}, SHIFT(71, 0),
    [308] = {.count = 1}, SHIFT(73, 0),
    [310] = {.count = 1}, SHIFT(74, 0),
    [312] = {.count = 1}, SHIFT(80, 0),
    [314] = {.count = 1}, SHIFT(79, 0),
    [316] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [318] = {.count = 1}, SHIFT(78, 0),
    [320] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [322] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [324] = {.count = 1}, SHIFT(81, 0),
    [326] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [328] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [330] = {.count = 1}, SHIFT(84, 0),
    [332] = {.count = 1}, SHIFT(85, 0),
    [334] = {.count = 1}, SHIFT(101, 0),
    [336] = {.count = 1}, SHIFT(102, 0),
    [338] = {.count = 1}, SHIFT(86, 0),
    [340] = {.count = 1}, SHIFT(87, 0),
    [342] = {.count = 1}, SHIFT(88, 0),
    [344] = {.count = 1}, SHIFT(89, 0),
    [346] = {.count = 1}, SHIFT(98, 0),
    [348] = {.count = 1}, SHIFT(99, 0),
    [350] = {.count = 1}, SHIFT(92, 0),
    [352] = {.count = 1}, SHIFT(90, 0),
    [354] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [356] = {.count = 1}, SHIFT(91, 0),
    [358] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [360] = {.count = 1}, SHIFT(93, 0),
    [362] = {.count = 1}, SHIFT(94, 0),
    [364] = {.count = 1}, SHIFT(95, 0),
    [366] = {.count = 1}, SHIFT(96, 0),
    [368] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [370] = {.count = 1}, SHIFT(97, 0),
    [372] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [374] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [376] = {.count = 1}, SHIFT(100, 0),
    [378] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [380] = {.count = 1}, SHIFT(103, 0),
    [382] = {.count = 1}, SHIFT(104, 0),
    [384] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [386] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [388] = {.count = 1}, SHIFT(108, 0),
    [390] = {.count = 1}, SHIFT(110, 0),
    [392] = {.count = 1}, SHIFT(113, 0),
    [394] = {.count = 1}, SHIFT(112, 0),
    [396] = {.count = 1}, SHIFT(111, 0),
    [398] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [400] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [402] = {.count = 1}, SHIFT(114, 0),
    [404] = {.count = 1}, SHIFT(117, 0),
    [406] = {.count = 1}, SHIFT(118, 0),
    [408] = {.count = 1}, SHIFT(119, 0),
    [410] = {.count = 1}, SHIFT(120, 0),
    [412] = {.count = 1}, SHIFT(121, 0),
    [414] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [416] = {.count = 1}, SHIFT(132, 0),
    [418] = {.count = 1}, SHIFT(153, 0),
    [420] = {.count = 1}, SHIFT(154, 0),
    [422] = {.count = 1}, SHIFT(131, 0),
    [424] = {.count = 1}, SHIFT(133, 0),
    [426] = {.count = 1}, SHIFT(134, 0),
    [428] = {.count = 1}, SHIFT(129, 0),
    [430] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [432] = {.count = 1}, SHIFT(122, 0),
    [434] = {.count = 1}, SHIFT(123, 0),
    [436] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [438] = {.count = 1}, SHIFT(124, 0),
    [440] = {.count = 1}, SHIFT(125, 0),
    [442] = {.count = 1}, SHIFT(127, 0),
    [444] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [446] = {.count = 1}, SHIFT(126, 0),
    [448] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [450] = {.count = 1}, SHIFT(128, 0),
    [452] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [454] = {.count = 1}, SHIFT(130, 0),
    [456] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [458] = {.count = 1}, SHIFT(149, 0),
    [460] = {.count = 1}, SHIFT(144, 0),
    [462] = {.count = 1}, SHIFT(145, 0),
    [464] = {.count = 1}, SHIFT(142, 0),
    [466] = {.count = 1}, SHIFT(135, 0),
    [468] = {.count = 1}, SHIFT(136, 0),
    [470] = {.count = 1}, SHIFT(137, 0),
    [472] = {.count = 1}, SHIFT(138, 0),
    [474] = {.count = 1}, SHIFT(140, 0),
    [476] = {.count = 1}, SHIFT(139, 0),
    [478] = {.count = 1}, SHIFT(141, 0),
    [480] = {.count = 1}, SHIFT(143, 0),
    [482] = {.count = 1}, SHIFT(146, 0),
    [484] = {.count = 1}, SHIFT(147, 0),
    [486] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [488] = {.count = 1}, SHIFT(148, 0),
    [490] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [492] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [494] = {.count = 1}, SHIFT(150, 0),
    [496] = {.count = 1}, SHIFT(151, 0),
    [498] = {.count = 1}, SHIFT(152, 0),
    [500] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [502] = {.count = 1}, SHIFT(155, 0),
    [504] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [506] = {.count = 1}, SHIFT(200, 0),
    [508] = {.count = 1}, SHIFT(201, 0),
    [510] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [512] = {.count = 1}, SHIFT(170, 0),
    [514] = {.count = 1}, SHIFT(171, 0),
    [516] = {.count = 1}, SHIFT(165, 0),
    [518] = {.count = 1}, SHIFT(166, 0),
    [520] = {.count = 1}, SHIFT(164, 0),
    [522] = {.count = 1}, SHIFT(167, 0),
    [524] = {.count = 1}, SHIFT(168, 0),
    [526] = {.count = 1}, SHIFT(169, 0),
    [528] = {.count = 1}, SHIFT(199, 0),
    [530] = {.count = 1}, SHIFT(172, 0),
    [532] = {.count = 1}, SHIFT(173, 0),
    [534] = {.count = 1}, SHIFT(174, 0),
    [536] = {.count = 1}, SHIFT(175, 0),
    [538] = {.count = 1}, SHIFT(176, 0),
    [540] = {.count = 1}, SHIFT(177, 0),
    [542] = {.count = 1}, SHIFT(178, 0),
    [544] = {.count = 1}, SHIFT(196, 0),
    [546] = {.count = 1}, SHIFT(190, 0),
    [548] = {.count = 1}, SHIFT(197, 0),
    [550] = {.count = 1}, SHIFT(185, 0),
    [552] = {.count = 1}, SHIFT(186, 0),
    [554] = {.count = 1}, SHIFT(180, 0),
    [556] = {.count = 1}, SHIFT(181, 0),
    [558] = {.count = 1}, SHIFT(179, 0),
    [560] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [562] = {.count = 1}, SHIFT(182, 0),
    [564] = {.count = 1}, SHIFT(183, 0),
    [566] = {.count = 1}, SHIFT(184, 0),
    [568] = {.count = 1}, SHIFT(195, 0),
    [570] = {.count = 1}, SHIFT(187, 0),
    [572] = {.count = 1}, SHIFT(188, 0),
    [574] = {.count = 1}, SHIFT(189, 0),
    [576] = {.count = 1}, SHIFT(191, 0),
    [578] = {.count = 1}, SHIFT(194, 0),
    [580] = {.count = 1}, SHIFT(192, 0),
    [582] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [584] = {.count = 1}, SHIFT(193, 0),
    [586] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [588] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [590] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [592] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [594] = {.count = 1}, SHIFT(198, 0),
    [596] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [598] = {.count = 1}, SHIFT(202, 0),
    [600] = {.count = 1}, SHIFT(203, 0),
    [602] = {.count = 1}, SHIFT(204, 0),
    [604] = {.count = 1}, SHIFT(205, 0),
    [606] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [608] = {.count = 1}, SHIFT(206, 0),
    [610] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [612] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [614] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [616] = {.count = 1}, SHIFT(218, 0),
    [618] = {.count = 1}, SHIFT(213, 0),
    [620] = {.count = 1}, SHIFT(214, 0),
    [622] = {.count = 1}, SHIFT(215, 0),
    [624] = {.count = 1}, SHIFT(216, 0),
    [626] = {.count = 1}, SHIFT(217, 0),
    [628] = {.count = 1}, SHIFT(220, 0),
    [630] = {.count = 1}, SHIFT(221, 0),
    [632] = {.count = 1}, SHIFT(227, 0),
    [634] = {.count = 1}, SHIFT(223, 0),
    [636] = {.count = 1}, SHIFT(222, 0),
    [638] = {.count = 1}, SHIFT(224, 0),
    [640] = {.count = 1}, SHIFT(225, 0),
    [642] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [644] = {.count = 1}, SHIFT(226, 0),
    [646] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [648] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [650] = {.count = 1}, SHIFT(230, 0),
    [652] = {.count = 1}, SHIFT(233, 0),
    [654] = {.count = 1}, SHIFT(234, 0),
    [656] = {.count = 1}, SHIFT(247, 0),
    [658] = {.count = 1}, SHIFT(248, 0),
    [660] = {.count = 1}, SHIFT(235, 0),
    [662] = {.count = 1}, SHIFT(236, 0),
    [664] = {.count = 1}, SHIFT(237, 0),
    [666] = {.count = 1}, SHIFT(244, 0),
    [668] = {.count = 1}, SHIFT(245, 0),
    [670] = {.count = 1}, SHIFT(238, 0),
    [672] = {.count = 1}, SHIFT(239, 0),
    [674] = {.count = 1}, SHIFT(240, 0),
    [676] = {.count = 1}, SHIFT(241, 0),
    [678] = {.count = 1}, SHIFT(242, 0),
    [680] = {.count = 1}, SHIFT(243, 0),
    [682] = {.count = 1}, SHIFT(246, 0),
    [684] = {.count = 1}, SHIFT(249, 0),
    [686] = {.count = 1}, SHIFT(250, 0),
    [688] = {.count = 1}, SHIFT(253, 0),
    [690] = {.count = 1}, SHIFT(254, 0),
    [692] = {.count = 1}, SHIFT(255, 0),
    [694] = {.count = 1}, SHIFT(257, 0),
    [696] = {.count = 1}, SHIFT(258, 0),
    [698] = {.count = 1}, SHIFT(259, 0),
    [700] = {.count = 1}, SHIFT(261, 0),
    [702] = {.count = 1}, SHIFT(271, 0),
    [704] = {.count = 1}, SHIFT(272, 0),
    [706] = {.count = 1}, SHIFT(260, 0),
    [708] = {.count = 1}, SHIFT(267, 0),
    [710] = {.count = 1}, SHIFT(262, 0),
    [712] = {.count = 1}, SHIFT(263, 0),
    [714] = {.count = 1}, SHIFT(264, 0),
    [716] = {.count = 1}, SHIFT(265, 0),
    [718] = {.count = 1}, SHIFT(266, 0),
    [720] = {.count = 1}, SHIFT(268, 0),
    [722] = {.count = 1}, SHIFT(269, 0),
    [724] = {.count = 1}, SHIFT(270, 0),
    [726] = {.count = 1}, SHIFT(273, 0),
    [728] = {.count = 1}, SHIFT(275, 0),
    [730] = {.count = 1}, SHIFT(276, 0),
    [732] = {.count = 1}, SHIFT(277, 0),
    [734] = {.count = 1}, SHIFT(278, 0),
    [736] = {.count = 1}, SHIFT(279, 0),
    [738] = {.count = 1}, SHIFT(280, 0),
    [740] = {.count = 1}, SHIFT(281, 0),
    [742] = {.count = 1}, SHIFT(292, 0),
    [744] = {.count = 1}, SHIFT(287, 0),
    [746] = {.count = 1}, SHIFT(288, 0),
    [748] = {.count = 1}, SHIFT(289, 0),
    [750] = {.count = 1}, SHIFT(290, 0),
    [752] = {.count = 1}, SHIFT(291, 0),
    [754] = {.count = 1}, SHIFT(294, 0),
    [756] = {.count = 1}, SHIFT(295, 0),
    [758] = {.count = 1}, SHIFT(301, 0),
    [760] = {.count = 1}, SHIFT(297, 0),
    [762] = {.count = 1}, SHIFT(296, 0),
    [764] = {.count = 1}, SHIFT(298, 0),
    [766] = {.count = 1}, SHIFT(299, 0),
    [768] = {.count = 1}, SHIFT(300, 0),
    [770] = {.count = 1}, SHIFT(304, 0),
    [772] = {.count = 1}, SHIFT(312, 0),
    [774] = {.count = 1}, SHIFT(307, 0),
    [776] = {.count = 1}, SHIFT(308, 0),
    [778] = {.count = 1}, SHIFT(309, 0),
    [780] = {.count = 1}, SHIFT(310, 0),
    [782] = {.count = 1}, SHIFT(311, 0),
    [784] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [786] = {.count = 1}, SHIFT(315, 0),
    [788] = {.count = 1}, SHIFT(316, 0),
    [790] = {.count = 1}, SHIFT(318, 0),
    [792] = {.count = 1}, SHIFT(319, 0),
    [794] = {.count = 1}, SHIFT(320, 0),
    [796] = {.count = 1}, SHIFT(321, 0),
    [798] = {.count = 1}, SHIFT(322, 0),
    [800] = {.count = 1}, SHIFT(323, 0),
    [802] = {.count = 1}, SHIFT(326, 0),
    [804] = {.count = 1}, SHIFT(327, 0),
    [806] = {.count = 1}, SHIFT(340, 0),
    [808] = {.count = 1}, SHIFT(341, 0),
    [810] = {.count = 1}, SHIFT(328, 0),
    [812] = {.count = 1}, SHIFT(329, 0),
    [814] = {.count = 1}, SHIFT(330, 0),
    [816] = {.count = 1}, SHIFT(337, 0),
    [818] = {.count = 1}, SHIFT(338, 0),
    [820] = {.count = 1}, SHIFT(331, 0),
    [822] = {.count = 1}, SHIFT(332, 0),
    [824] = {.count = 1}, SHIFT(333, 0),
    [826] = {.count = 1}, SHIFT(334, 0),
    [828] = {.count = 1}, SHIFT(335, 0),
    [830] = {.count = 1}, SHIFT(336, 0),
    [832] = {.count = 1}, SHIFT(339, 0),
    [834] = {.count = 1}, SHIFT(342, 0),
    [836] = {.count = 1}, SHIFT(343, 0),
    [838] = {.count = 1}, SHIFT(346, 0),
    [840] = {.count = 1}, SHIFT(347, 0),
    [842] = {.count = 1}, SHIFT(348, 0),
    [844] = {.count = 1}, SHIFT(350, 0),
    [846] = {.count = 1}, SHIFT(351, 0),
    [848] = {.count = 1}, SHIFT(352, 0),
    [850] = {.count = 1}, SHIFT(354, 0),
    [852] = {.count = 1}, SHIFT(364, 0),
    [854] = {.count = 1}, SHIFT(365, 0),
    [856] = {.count = 1}, SHIFT(353, 0),
    [858] = {.count = 1}, SHIFT(360, 0),
    [860] = {.count = 1}, SHIFT(355, 0),
    [862] = {.count = 1}, SHIFT(356, 0),
    [864] = {.count = 1}, SHIFT(357, 0),
    [866] = {.count = 1}, SHIFT(358, 0),
    [868] = {.count = 1}, SHIFT(359, 0),
    [870] = {.count = 1}, SHIFT(361, 0),
    [872] = {.count = 1}, SHIFT(362, 0),
    [874] = {.count = 1}, SHIFT(363, 0),
    [876] = {.count = 1}, SHIFT(366, 0),
    [878] = {.count = 1}, SHIFT(368, 0),
    [880] = {.count = 1}, SHIFT(369, 0),
    [882] = {.count = 1}, SHIFT(370, 0),
    [884] = {.count = 1}, SHIFT(371, 0),
    [886] = {.count = 1}, SHIFT(372, 0),
    [888] = {.count = 1}, SHIFT(373, 0),
    [890] = {.count = 1}, SHIFT(374, 0),
    [892] = {.count = 1}, SHIFT(376, 0),
    [894] = {.count = 1}, SHIFT(386, 0),
    [896] = {.count = 1}, SHIFT(381, 0),
    [898] = {.count = 1}, SHIFT(382, 0),
    [900] = {.count = 1}, SHIFT(383, 0),
    [902] = {.count = 1}, SHIFT(384, 0),
    [904] = {.count = 1}, SHIFT(385, 0),
    [906] = {.count = 1}, SHIFT(388, 0),
    [908] = {.count = 1}, SHIFT(389, 0),
    [910] = {.count = 1}, SHIFT(395, 0),
    [912] = {.count = 1}, SHIFT(391, 0),
    [914] = {.count = 1}, SHIFT(390, 0),
    [916] = {.count = 1}, SHIFT(392, 0),
    [918] = {.count = 1}, SHIFT(393, 0),
    [920] = {.count = 1}, SHIFT(394, 0),
    [922] = {.count = 1}, SHIFT(399, 0),
    [924] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [926] = {.count = 1}, SHIFT(400, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
