#include "tree_sitter/parser.h"

#define STATE_COUNT 500
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
    sym_unless_statement,
    sym_condition,
    sym__statement_block,
    sym__do_block,
    sym__then_block,
    sym__else_block,
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
    [sym_unless_statement] = "unless_statement",
    [sym_condition] = "condition",
    [sym__statement_block] = "_statement_block",
    [sym__do_block] = "_do_block",
    [sym__then_block] = "_then_block",
    [sym__else_block] = "_else_block",
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
    [sym_unless_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_condition] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__do_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__then_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__else_block] = {.visible = false, .named = false, .structural = true, .extra = false},
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
                ADVANCE(126);
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
                ADVANCE(126);
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
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(166);
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
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
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
                ADVANCE(126);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(200);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 200:
            if (lookahead == 'l')
                ADVANCE(201);
            if (lookahead == 'n')
                ADVANCE(172);
            LEX_ERROR();
        case 201:
            if (lookahead == 's')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'e')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            ACCEPT_TOKEN(anon_sym_else);
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
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
                ADVANCE(126);
            if (lookahead == 'e')
                ADVANCE(166);
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
        case 205:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(205);
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
            if (lookahead == 'e')
                ADVANCE(206);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
            LEX_ERROR();
        case 206:
            if (lookahead == 'l')
                ADVANCE(201);
            LEX_ERROR();
        case 207:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(207);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(206);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'u')
                ADVANCE(131);
            if (lookahead == 'w')
                ADVANCE(140);
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
    [15] = 151,
    [16] = 155,
    [17] = 156,
    [18] = 156,
    [19] = 156,
    [20] = 157,
    [21] = 148,
    [22] = 145,
    [23] = 145,
    [24] = 159,
    [25] = 160,
    [26] = 160,
    [27] = 155,
    [28] = 156,
    [29] = 161,
    [30] = 160,
    [31] = 160,
    [32] = 162,
    [33] = 162,
    [34] = 162,
    [35] = 145,
    [36] = 162,
    [37] = 163,
    [38] = 163,
    [39] = 151,
    [40] = 151,
    [41] = 153,
    [42] = 153,
    [43] = 153,
    [44] = 151,
    [45] = 155,
    [46] = 160,
    [47] = 156,
    [48] = 156,
    [49] = 156,
    [50] = 163,
    [51] = 164,
    [52] = 165,
    [53] = 167,
    [54] = 165,
    [55] = 170,
    [56] = 170,
    [57] = 170,
    [58] = 145,
    [59] = 170,
    [60] = 174,
    [61] = 174,
    [62] = 162,
    [63] = 151,
    [64] = 151,
    [65] = 153,
    [66] = 153,
    [67] = 153,
    [68] = 151,
    [69] = 155,
    [70] = 156,
    [71] = 156,
    [72] = 156,
    [73] = 174,
    [74] = 164,
    [75] = 165,
    [76] = 170,
    [77] = 170,
    [78] = 175,
    [79] = 176,
    [80] = 170,
    [81] = 153,
    [82] = 177,
    [83] = 175,
    [84] = 170,
    [85] = 170,
    [86] = 170,
    [87] = 176,
    [88] = 174,
    [89] = 178,
    [90] = 165,
    [91] = 156,
    [92] = 179,
    [93] = 165,
    [94] = 164,
    [95] = 156,
    [96] = 179,
    [97] = 164,
    [98] = 165,
    [99] = 170,
    [100] = 170,
    [101] = 176,
    [102] = 170,
    [103] = 170,
    [104] = 170,
    [105] = 170,
    [106] = 176,
    [107] = 170,
    [108] = 170,
    [109] = 176,
    [110] = 170,
    [111] = 162,
    [112] = 174,
    [113] = 175,
    [114] = 180,
    [115] = 153,
    [116] = 174,
    [117] = 162,
    [118] = 174,
    [119] = 162,
    [120] = 180,
    [121] = 181,
    [122] = 181,
    [123] = 164,
    [124] = 165,
    [125] = 182,
    [126] = 156,
    [127] = 183,
    [128] = 164,
    [129] = 184,
    [130] = 156,
    [131] = 183,
    [132] = 164,
    [133] = 183,
    [134] = 164,
    [135] = 183,
    [136] = 164,
    [137] = 180,
    [138] = 165,
    [139] = 156,
    [140] = 185,
    [141] = 180,
    [142] = 184,
    [143] = 156,
    [144] = 185,
    [145] = 180,
    [146] = 185,
    [147] = 180,
    [148] = 185,
    [149] = 180,
    [150] = 170,
    [151] = 170,
    [152] = 176,
    [153] = 170,
    [154] = 170,
    [155] = 165,
    [156] = 170,
    [157] = 176,
    [158] = 170,
    [159] = 170,
    [160] = 170,
    [161] = 176,
    [162] = 186,
    [163] = 186,
    [164] = 186,
    [165] = 187,
    [166] = 187,
    [167] = 155,
    [168] = 156,
    [169] = 187,
    [170] = 187,
    [171] = 162,
    [172] = 187,
    [173] = 180,
    [174] = 187,
    [175] = 187,
    [176] = 156,
    [177] = 188,
    [178] = 189,
    [179] = 190,
    [180] = 190,
    [181] = 155,
    [182] = 156,
    [183] = 187,
    [184] = 190,
    [185] = 190,
    [186] = 162,
    [187] = 190,
    [188] = 180,
    [189] = 190,
    [190] = 190,
    [191] = 156,
    [192] = 188,
    [193] = 189,
    [194] = 190,
    [195] = 191,
    [196] = 192,
    [197] = 190,
    [198] = 189,
    [199] = 191,
    [200] = 190,
    [201] = 190,
    [202] = 191,
    [203] = 187,
    [204] = 187,
    [205] = 187,
    [206] = 170,
    [207] = 170,
    [208] = 165,
    [209] = 165,
    [210] = 170,
    [211] = 170,
    [212] = 176,
    [213] = 170,
    [214] = 170,
    [215] = 170,
    [216] = 170,
    [217] = 176,
    [218] = 170,
    [219] = 170,
    [220] = 193,
    [221] = 193,
    [222] = 193,
    [223] = 198,
    [224] = 198,
    [225] = 155,
    [226] = 156,
    [227] = 198,
    [228] = 198,
    [229] = 162,
    [230] = 198,
    [231] = 180,
    [232] = 198,
    [233] = 198,
    [234] = 156,
    [235] = 188,
    [236] = 189,
    [237] = 198,
    [238] = 191,
    [239] = 198,
    [240] = 198,
    [241] = 198,
    [242] = 199,
    [243] = 165,
    [244] = 170,
    [245] = 199,
    [246] = 176,
    [247] = 199,
    [248] = 199,
    [249] = 170,
    [250] = 165,
    [251] = 170,
    [252] = 170,
    [253] = 176,
    [254] = 170,
    [255] = 170,
    [256] = 186,
    [257] = 170,
    [258] = 151,
    [259] = 151,
    [260] = 170,
    [261] = 170,
    [262] = 156,
    [263] = 188,
    [264] = 189,
    [265] = 174,
    [266] = 191,
    [267] = 174,
    [268] = 174,
    [269] = 174,
    [270] = 204,
    [271] = 170,
    [272] = 165,
    [273] = 170,
    [274] = 170,
    [275] = 176,
    [276] = 170,
    [277] = 170,
    [278] = 176,
    [279] = 176,
    [280] = 162,
    [281] = 162,
    [282] = 163,
    [283] = 178,
    [284] = 165,
    [285] = 156,
    [286] = 179,
    [287] = 165,
    [288] = 164,
    [289] = 165,
    [290] = 170,
    [291] = 162,
    [292] = 176,
    [293] = 162,
    [294] = 162,
    [295] = 170,
    [296] = 162,
    [297] = 176,
    [298] = 170,
    [299] = 162,
    [300] = 176,
    [301] = 162,
    [302] = 162,
    [303] = 163,
    [304] = 180,
    [305] = 163,
    [306] = 163,
    [307] = 181,
    [308] = 164,
    [309] = 165,
    [310] = 182,
    [311] = 180,
    [312] = 165,
    [313] = 170,
    [314] = 162,
    [315] = 176,
    [316] = 162,
    [317] = 162,
    [318] = 165,
    [319] = 170,
    [320] = 176,
    [321] = 162,
    [322] = 170,
    [323] = 162,
    [324] = 176,
    [325] = 186,
    [326] = 162,
    [327] = 162,
    [328] = 165,
    [329] = 165,
    [330] = 170,
    [331] = 162,
    [332] = 176,
    [333] = 162,
    [334] = 162,
    [335] = 170,
    [336] = 162,
    [337] = 176,
    [338] = 162,
    [339] = 162,
    [340] = 193,
    [341] = 205,
    [342] = 165,
    [343] = 170,
    [344] = 205,
    [345] = 176,
    [346] = 205,
    [347] = 205,
    [348] = 162,
    [349] = 165,
    [350] = 170,
    [351] = 162,
    [352] = 176,
    [353] = 162,
    [354] = 162,
    [355] = 186,
    [356] = 162,
    [357] = 151,
    [358] = 162,
    [359] = 162,
    [360] = 156,
    [361] = 188,
    [362] = 189,
    [363] = 163,
    [364] = 191,
    [365] = 163,
    [366] = 163,
    [367] = 163,
    [368] = 204,
    [369] = 170,
    [370] = 165,
    [371] = 170,
    [372] = 162,
    [373] = 176,
    [374] = 162,
    [375] = 162,
    [376] = 176,
    [377] = 180,
    [378] = 160,
    [379] = 160,
    [380] = 156,
    [381] = 188,
    [382] = 189,
    [383] = 160,
    [384] = 191,
    [385] = 160,
    [386] = 160,
    [387] = 160,
    [388] = 145,
    [389] = 192,
    [390] = 159,
    [391] = 145,
    [392] = 164,
    [393] = 165,
    [394] = 170,
    [395] = 128,
    [396] = 176,
    [397] = 128,
    [398] = 128,
    [399] = 148,
    [400] = 178,
    [401] = 165,
    [402] = 156,
    [403] = 179,
    [404] = 165,
    [405] = 164,
    [406] = 165,
    [407] = 170,
    [408] = 128,
    [409] = 176,
    [410] = 128,
    [411] = 128,
    [412] = 170,
    [413] = 128,
    [414] = 176,
    [415] = 170,
    [416] = 128,
    [417] = 176,
    [418] = 128,
    [419] = 162,
    [420] = 148,
    [421] = 180,
    [422] = 148,
    [423] = 148,
    [424] = 181,
    [425] = 164,
    [426] = 165,
    [427] = 182,
    [428] = 180,
    [429] = 165,
    [430] = 170,
    [431] = 128,
    [432] = 176,
    [433] = 128,
    [434] = 128,
    [435] = 165,
    [436] = 170,
    [437] = 176,
    [438] = 128,
    [439] = 170,
    [440] = 128,
    [441] = 176,
    [442] = 186,
    [443] = 128,
    [444] = 128,
    [445] = 165,
    [446] = 165,
    [447] = 170,
    [448] = 128,
    [449] = 176,
    [450] = 128,
    [451] = 128,
    [452] = 170,
    [453] = 128,
    [454] = 176,
    [455] = 128,
    [456] = 128,
    [457] = 193,
    [458] = 207,
    [459] = 165,
    [460] = 170,
    [461] = 207,
    [462] = 176,
    [463] = 207,
    [464] = 207,
    [465] = 128,
    [466] = 165,
    [467] = 170,
    [468] = 128,
    [469] = 176,
    [470] = 128,
    [471] = 128,
    [472] = 186,
    [473] = 128,
    [474] = 151,
    [475] = 128,
    [476] = 128,
    [477] = 128,
    [478] = 156,
    [479] = 188,
    [480] = 189,
    [481] = 148,
    [482] = 191,
    [483] = 148,
    [484] = 148,
    [485] = 148,
    [486] = 204,
    [487] = 170,
    [488] = 165,
    [489] = 170,
    [490] = 128,
    [491] = 176,
    [492] = 128,
    [493] = 128,
    [494] = 176,
    [495] = 175,
    [496] = 127,
    [497] = 153,
    [498] = 128,
    [499] = 127,
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
        [anon_sym_while] = 26,
        [anon_sym_unless] = 28,
        [anon_sym_until] = 30,
        [anon_sym_def] = 32,
        [anon_sym_LPAREN] = 34,
        [anon_sym_class] = 36,
        [anon_sym_COLON_COLON] = 38,
        [anon_sym_module] = 40,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 44,
        [anon_sym_self] = 44,
        [sym_identifier] = 44,
        [sym_comment] = 46,
        [sym_symbol] = 14,
        [sym__line_break] = 46,
    },
    [1] = {
        [ts_builtin_sym_end] = 48,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [2] = {
        [sym__terminator] = 50,
        [aux_sym_program_repeat1] = 52,
        [ts_builtin_sym_end] = 54,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [3] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [ts_builtin_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 46,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [4] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 46,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [5] = {
        [anon_sym_do] = 66,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [6] = {
        [anon_sym_do] = 68,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [7] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [ts_builtin_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [sym_comment] = 46,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [8] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [ts_builtin_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_COLON_COLON] = 74,
        [anon_sym_LBRACK] = 76,
        [sym_comment] = 46,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [9] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [ts_builtin_sym_end] = 78,
        [anon_sym_if] = 78,
        [anon_sym_while] = 78,
        [anon_sym_unless] = 78,
        [anon_sym_until] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [10] = {
        [sym__function_name] = 80,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 46,
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
        [sym__line_break] = 46,
    },
    [11] = {
        [sym__function_name] = 84,
        [anon_sym_PIPE] = 86,
        [anon_sym_STAR] = 86,
        [anon_sym_AMP] = 86,
        [anon_sym_LT] = 86,
        [sym_identifier] = 86,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 86,
        [anon_sym_CARET] = 86,
        [anon_sym_LT_EQ_GT] = 86,
        [anon_sym_EQ_EQ] = 86,
        [anon_sym_EQ_EQ_EQ] = 86,
        [anon_sym_EQ_TILDE] = 86,
        [anon_sym_GT] = 86,
        [anon_sym_GT_EQ] = 86,
        [anon_sym_LT_EQ] = 86,
        [anon_sym_PLUS] = 86,
        [anon_sym_DASH] = 86,
        [anon_sym_SLASH] = 86,
        [anon_sym_PERCENT] = 86,
        [anon_sym_STAR_STAR] = 86,
        [anon_sym_LT_LT] = 86,
        [anon_sym_GT_GT] = 86,
        [anon_sym_TILDE] = 86,
        [anon_sym_PLUS_AT] = 86,
        [anon_sym_DASH_AT] = 86,
        [anon_sym_LBRACK_RBRACK] = 86,
        [anon_sym_LBRACK_RBRACK_EQ] = 86,
        [sym__line_break] = 46,
    },
    [12] = {
        [sym_condition] = 88,
        [sym__expression] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym_scope_resolution_expression] = 96,
        [sym_subscript_expression] = 96,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 98,
        [anon_sym_COLON_COLON] = 100,
        [anon_sym_nil] = 102,
        [anon_sym_self] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 46,
        [sym_symbol] = 92,
        [sym__line_break] = 46,
    },
    [13] = {
        [sym_condition] = 104,
        [sym__expression] = 106,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 114,
        [anon_sym_COLON_COLON] = 116,
        [anon_sym_nil] = 118,
        [anon_sym_self] = 118,
        [sym_identifier] = 118,
        [sym_comment] = 46,
        [sym_symbol] = 108,
        [sym__line_break] = 46,
    },
    [14] = {
        [sym_condition] = 120,
        [sym__expression] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym_scope_resolution_expression] = 96,
        [sym_subscript_expression] = 96,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 98,
        [anon_sym_COLON_COLON] = 100,
        [anon_sym_nil] = 102,
        [anon_sym_self] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 46,
        [sym_symbol] = 92,
        [sym__line_break] = 46,
    },
    [15] = {
        [sym__function_name] = 122,
        [anon_sym_PIPE] = 124,
        [anon_sym_STAR] = 124,
        [anon_sym_AMP] = 124,
        [anon_sym_LT] = 124,
        [sym_identifier] = 124,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 124,
        [anon_sym_CARET] = 124,
        [anon_sym_LT_EQ_GT] = 124,
        [anon_sym_EQ_EQ] = 124,
        [anon_sym_EQ_EQ_EQ] = 124,
        [anon_sym_EQ_TILDE] = 124,
        [anon_sym_GT] = 124,
        [anon_sym_GT_EQ] = 124,
        [anon_sym_LT_EQ] = 124,
        [anon_sym_PLUS] = 124,
        [anon_sym_DASH] = 124,
        [anon_sym_SLASH] = 124,
        [anon_sym_PERCENT] = 124,
        [anon_sym_STAR_STAR] = 124,
        [anon_sym_LT_LT] = 124,
        [anon_sym_GT_GT] = 124,
        [anon_sym_TILDE] = 124,
        [anon_sym_PLUS_AT] = 124,
        [anon_sym_DASH_AT] = 124,
        [anon_sym_LBRACK_RBRACK] = 124,
        [anon_sym_LBRACK_RBRACK_EQ] = 124,
        [sym__line_break] = 46,
    },
    [16] = {
        [sym__statement] = 126,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 154,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [17] = {
        [sym_identifier] = 164,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [18] = {
        [sym_identifier] = 166,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [19] = {
        [sym_identifier] = 168,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [20] = {
        [sym__call_arguments] = 170,
        [sym__command] = 172,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym_scope_resolution_expression] = 178,
        [sym_subscript_expression] = 178,
        [sym__variable] = 178,
        [anon_sym_do] = 180,
        [anon_sym_LPAREN] = 182,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_super] = 186,
        [anon_sym_nil] = 188,
        [anon_sym_self] = 188,
        [sym_identifier] = 188,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [21] = {
        [sym__terminator] = 190,
        [aux_sym_program_repeat1] = 190,
        [ts_builtin_sym_end] = 190,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [22] = {
        [anon_sym_do] = 192,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [23] = {
        [anon_sym_do] = 194,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [24] = {
        [aux_sym__call_arguments_repeat1] = 196,
        [anon_sym_do] = 194,
        [anon_sym_COMMA] = 198,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 72,
        [anon_sym_do] = 72,
        [anon_sym_COMMA] = 72,
        [anon_sym_COLON_COLON] = 200,
        [anon_sym_LBRACK] = 202,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [26] = {
        [aux_sym__call_arguments_repeat1] = 78,
        [anon_sym_do] = 78,
        [anon_sym_COMMA] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [27] = {
        [sym__statement] = 204,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 206,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [28] = {
        [sym_identifier] = 208,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [29] = {
        [sym__call_arguments] = 170,
        [sym__command] = 172,
        [sym__argument] = 174,
        [sym__primary] = 176,
        [sym_scope_resolution_expression] = 178,
        [sym_subscript_expression] = 178,
        [sym__variable] = 178,
        [anon_sym_LPAREN] = 182,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_super] = 186,
        [anon_sym_nil] = 188,
        [anon_sym_self] = 188,
        [sym_identifier] = 188,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [30] = {
        [aux_sym__call_arguments_repeat1] = 190,
        [anon_sym_do] = 190,
        [anon_sym_COMMA] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 210,
        [anon_sym_do] = 210,
        [anon_sym_COMMA] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [32] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 214,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 218,
        [sym_comment] = 46,
        [sym__line_break] = 58,
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
        [sym_comment] = 46,
        [sym__line_break] = 62,
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
        [sym_comment] = 46,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [35] = {
        [anon_sym_do] = 220,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [36] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_RPAREN] = 70,
        [sym_comment] = 46,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [37] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_RPAREN] = 72,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_LBRACK] = 224,
        [sym_comment] = 46,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [38] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_if] = 78,
        [anon_sym_while] = 78,
        [anon_sym_unless] = 78,
        [anon_sym_until] = 78,
        [anon_sym_RPAREN] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [39] = {
        [sym__function_name] = 226,
        [anon_sym_PIPE] = 228,
        [anon_sym_STAR] = 228,
        [anon_sym_AMP] = 228,
        [anon_sym_LT] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 228,
        [anon_sym_CARET] = 228,
        [anon_sym_LT_EQ_GT] = 228,
        [anon_sym_EQ_EQ] = 228,
        [anon_sym_EQ_EQ_EQ] = 228,
        [anon_sym_EQ_TILDE] = 228,
        [anon_sym_GT] = 228,
        [anon_sym_GT_EQ] = 228,
        [anon_sym_LT_EQ] = 228,
        [anon_sym_PLUS] = 228,
        [anon_sym_DASH] = 228,
        [anon_sym_SLASH] = 228,
        [anon_sym_PERCENT] = 228,
        [anon_sym_STAR_STAR] = 228,
        [anon_sym_LT_LT] = 228,
        [anon_sym_GT_GT] = 228,
        [anon_sym_TILDE] = 228,
        [anon_sym_PLUS_AT] = 228,
        [anon_sym_DASH_AT] = 228,
        [anon_sym_LBRACK_RBRACK] = 228,
        [anon_sym_LBRACK_RBRACK_EQ] = 228,
        [sym__line_break] = 46,
    },
    [40] = {
        [sym__function_name] = 230,
        [anon_sym_PIPE] = 86,
        [anon_sym_STAR] = 86,
        [anon_sym_AMP] = 86,
        [anon_sym_LT] = 86,
        [sym_identifier] = 86,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 86,
        [anon_sym_CARET] = 86,
        [anon_sym_LT_EQ_GT] = 86,
        [anon_sym_EQ_EQ] = 86,
        [anon_sym_EQ_EQ_EQ] = 86,
        [anon_sym_EQ_TILDE] = 86,
        [anon_sym_GT] = 86,
        [anon_sym_GT_EQ] = 86,
        [anon_sym_LT_EQ] = 86,
        [anon_sym_PLUS] = 86,
        [anon_sym_DASH] = 86,
        [anon_sym_SLASH] = 86,
        [anon_sym_PERCENT] = 86,
        [anon_sym_STAR_STAR] = 86,
        [anon_sym_LT_LT] = 86,
        [anon_sym_GT_GT] = 86,
        [anon_sym_TILDE] = 86,
        [anon_sym_PLUS_AT] = 86,
        [anon_sym_DASH_AT] = 86,
        [anon_sym_LBRACK_RBRACK] = 86,
        [anon_sym_LBRACK_RBRACK_EQ] = 86,
        [sym__line_break] = 46,
    },
    [41] = {
        [sym_condition] = 232,
        [sym__expression] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym_scope_resolution_expression] = 96,
        [sym_subscript_expression] = 96,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 98,
        [anon_sym_COLON_COLON] = 100,
        [anon_sym_nil] = 102,
        [anon_sym_self] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 46,
        [sym_symbol] = 92,
        [sym__line_break] = 46,
    },
    [42] = {
        [sym_condition] = 234,
        [sym__expression] = 106,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 114,
        [anon_sym_COLON_COLON] = 116,
        [anon_sym_nil] = 118,
        [anon_sym_self] = 118,
        [sym_identifier] = 118,
        [sym_comment] = 46,
        [sym_symbol] = 108,
        [sym__line_break] = 46,
    },
    [43] = {
        [sym_condition] = 236,
        [sym__expression] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym_scope_resolution_expression] = 96,
        [sym_subscript_expression] = 96,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 98,
        [anon_sym_COLON_COLON] = 100,
        [anon_sym_nil] = 102,
        [anon_sym_self] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 46,
        [sym_symbol] = 92,
        [sym__line_break] = 46,
    },
    [44] = {
        [sym__function_name] = 238,
        [anon_sym_PIPE] = 124,
        [anon_sym_STAR] = 124,
        [anon_sym_AMP] = 124,
        [anon_sym_LT] = 124,
        [sym_identifier] = 124,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 124,
        [anon_sym_CARET] = 124,
        [anon_sym_LT_EQ_GT] = 124,
        [anon_sym_EQ_EQ] = 124,
        [anon_sym_EQ_EQ_EQ] = 124,
        [anon_sym_EQ_TILDE] = 124,
        [anon_sym_GT] = 124,
        [anon_sym_GT_EQ] = 124,
        [anon_sym_LT_EQ] = 124,
        [anon_sym_PLUS] = 124,
        [anon_sym_DASH] = 124,
        [anon_sym_SLASH] = 124,
        [anon_sym_PERCENT] = 124,
        [anon_sym_STAR_STAR] = 124,
        [anon_sym_LT_LT] = 124,
        [anon_sym_GT_GT] = 124,
        [anon_sym_TILDE] = 124,
        [anon_sym_PLUS_AT] = 124,
        [anon_sym_DASH_AT] = 124,
        [anon_sym_LBRACK_RBRACK] = 124,
        [anon_sym_LBRACK_RBRACK_EQ] = 124,
        [sym__line_break] = 46,
    },
    [45] = {
        [sym__statement] = 240,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 242,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [46] = {
        [aux_sym__call_arguments_repeat1] = 244,
        [anon_sym_do] = 244,
        [anon_sym_COMMA] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [47] = {
        [sym_identifier] = 246,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [48] = {
        [sym_identifier] = 248,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [49] = {
        [sym_identifier] = 250,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [50] = {
        [sym__terminator] = 190,
        [aux_sym_program_repeat1] = 190,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_RPAREN] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [51] = {
        [sym__terminator] = 252,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [52] = {
        [sym__statement] = 258,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [53] = {
        [sym__statement] = 296,
        [sym__declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_argument_list] = 298,
        [sym_class_declaration] = 296,
        [sym_module_declaration] = 296,
        [sym_while_statement] = 296,
        [sym_until_statement] = 296,
        [sym_unless_statement] = 296,
        [sym__statement_block] = 298,
        [sym__do_block] = 298,
        [sym__then_block] = 298,
        [sym__call] = 296,
        [sym__command] = 296,
        [sym__function_call] = 296,
        [sym__expression] = 296,
        [sym__argument] = 296,
        [sym__primary] = 296,
        [sym_scope_resolution_expression] = 296,
        [sym_subscript_expression] = 296,
        [sym__variable] = 296,
        [sym__terminator] = 298,
        [aux_sym_class_declaration_repeat1] = 298,
        [anon_sym_do] = 298,
        [anon_sym_end] = 296,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [anon_sym_def] = 296,
        [anon_sym_LPAREN] = 296,
        [anon_sym_STAR] = 298,
        [anon_sym_AMP] = 298,
        [anon_sym_class] = 296,
        [anon_sym_LT] = 298,
        [anon_sym_COLON_COLON] = 296,
        [anon_sym_module] = 296,
        [anon_sym_then] = 298,
        [anon_sym_super] = 296,
        [anon_sym_nil] = 296,
        [anon_sym_self] = 296,
        [sym_identifier] = 296,
        [sym_comment] = 46,
        [sym_symbol] = 296,
        [sym__line_break] = 46,
        [anon_sym_SEMI] = 298,
    },
    [54] = {
        [sym__statement] = 296,
        [sym__declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_class_declaration] = 296,
        [sym_module_declaration] = 296,
        [sym_while_statement] = 296,
        [sym_until_statement] = 296,
        [sym_unless_statement] = 296,
        [sym__call] = 296,
        [sym__command] = 296,
        [sym__function_call] = 296,
        [sym__expression] = 296,
        [sym__argument] = 296,
        [sym__primary] = 296,
        [sym_scope_resolution_expression] = 296,
        [sym_subscript_expression] = 296,
        [sym__variable] = 296,
        [anon_sym_end] = 296,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [anon_sym_def] = 296,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 296,
        [anon_sym_COLON_COLON] = 296,
        [anon_sym_module] = 296,
        [anon_sym_super] = 296,
        [anon_sym_nil] = 296,
        [anon_sym_self] = 296,
        [sym_identifier] = 296,
        [sym_comment] = 46,
        [sym_symbol] = 296,
        [sym__line_break] = 46,
    },
    [55] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 302,
        [anon_sym_end] = 304,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [56] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 46,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [57] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 46,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [58] = {
        [anon_sym_do] = 308,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [59] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [sym_comment] = 46,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [60] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_COLON_COLON] = 310,
        [anon_sym_LBRACK] = 312,
        [sym_comment] = 46,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [61] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_end] = 78,
        [anon_sym_if] = 78,
        [anon_sym_while] = 78,
        [anon_sym_unless] = 78,
        [anon_sym_until] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [62] = {
        [sym__terminator] = 314,
        [aux_sym_program_repeat1] = 314,
        [anon_sym_if] = 314,
        [anon_sym_while] = 314,
        [anon_sym_unless] = 314,
        [anon_sym_until] = 314,
        [anon_sym_RPAREN] = 314,
        [sym_comment] = 46,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [63] = {
        [sym__function_name] = 316,
        [anon_sym_PIPE] = 318,
        [anon_sym_STAR] = 318,
        [anon_sym_AMP] = 318,
        [anon_sym_LT] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 318,
        [anon_sym_CARET] = 318,
        [anon_sym_LT_EQ_GT] = 318,
        [anon_sym_EQ_EQ] = 318,
        [anon_sym_EQ_EQ_EQ] = 318,
        [anon_sym_EQ_TILDE] = 318,
        [anon_sym_GT] = 318,
        [anon_sym_GT_EQ] = 318,
        [anon_sym_LT_EQ] = 318,
        [anon_sym_PLUS] = 318,
        [anon_sym_DASH] = 318,
        [anon_sym_SLASH] = 318,
        [anon_sym_PERCENT] = 318,
        [anon_sym_STAR_STAR] = 318,
        [anon_sym_LT_LT] = 318,
        [anon_sym_GT_GT] = 318,
        [anon_sym_TILDE] = 318,
        [anon_sym_PLUS_AT] = 318,
        [anon_sym_DASH_AT] = 318,
        [anon_sym_LBRACK_RBRACK] = 318,
        [anon_sym_LBRACK_RBRACK_EQ] = 318,
        [sym__line_break] = 46,
    },
    [64] = {
        [sym__function_name] = 320,
        [anon_sym_PIPE] = 86,
        [anon_sym_STAR] = 86,
        [anon_sym_AMP] = 86,
        [anon_sym_LT] = 86,
        [sym_identifier] = 86,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 86,
        [anon_sym_CARET] = 86,
        [anon_sym_LT_EQ_GT] = 86,
        [anon_sym_EQ_EQ] = 86,
        [anon_sym_EQ_EQ_EQ] = 86,
        [anon_sym_EQ_TILDE] = 86,
        [anon_sym_GT] = 86,
        [anon_sym_GT_EQ] = 86,
        [anon_sym_LT_EQ] = 86,
        [anon_sym_PLUS] = 86,
        [anon_sym_DASH] = 86,
        [anon_sym_SLASH] = 86,
        [anon_sym_PERCENT] = 86,
        [anon_sym_STAR_STAR] = 86,
        [anon_sym_LT_LT] = 86,
        [anon_sym_GT_GT] = 86,
        [anon_sym_TILDE] = 86,
        [anon_sym_PLUS_AT] = 86,
        [anon_sym_DASH_AT] = 86,
        [anon_sym_LBRACK_RBRACK] = 86,
        [anon_sym_LBRACK_RBRACK_EQ] = 86,
        [sym__line_break] = 46,
    },
    [65] = {
        [sym_condition] = 322,
        [sym__expression] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym_scope_resolution_expression] = 96,
        [sym_subscript_expression] = 96,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 98,
        [anon_sym_COLON_COLON] = 100,
        [anon_sym_nil] = 102,
        [anon_sym_self] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 46,
        [sym_symbol] = 92,
        [sym__line_break] = 46,
    },
    [66] = {
        [sym_condition] = 324,
        [sym__expression] = 106,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 114,
        [anon_sym_COLON_COLON] = 116,
        [anon_sym_nil] = 118,
        [anon_sym_self] = 118,
        [sym_identifier] = 118,
        [sym_comment] = 46,
        [sym_symbol] = 108,
        [sym__line_break] = 46,
    },
    [67] = {
        [sym_condition] = 326,
        [sym__expression] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym_scope_resolution_expression] = 96,
        [sym_subscript_expression] = 96,
        [sym__variable] = 96,
        [anon_sym_LPAREN] = 98,
        [anon_sym_COLON_COLON] = 100,
        [anon_sym_nil] = 102,
        [anon_sym_self] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 46,
        [sym_symbol] = 92,
        [sym__line_break] = 46,
    },
    [68] = {
        [sym__function_name] = 328,
        [anon_sym_PIPE] = 124,
        [anon_sym_STAR] = 124,
        [anon_sym_AMP] = 124,
        [anon_sym_LT] = 124,
        [sym_identifier] = 124,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 124,
        [anon_sym_CARET] = 124,
        [anon_sym_LT_EQ_GT] = 124,
        [anon_sym_EQ_EQ] = 124,
        [anon_sym_EQ_EQ_EQ] = 124,
        [anon_sym_EQ_TILDE] = 124,
        [anon_sym_GT] = 124,
        [anon_sym_GT_EQ] = 124,
        [anon_sym_LT_EQ] = 124,
        [anon_sym_PLUS] = 124,
        [anon_sym_DASH] = 124,
        [anon_sym_SLASH] = 124,
        [anon_sym_PERCENT] = 124,
        [anon_sym_STAR_STAR] = 124,
        [anon_sym_LT_LT] = 124,
        [anon_sym_GT_GT] = 124,
        [anon_sym_TILDE] = 124,
        [anon_sym_PLUS_AT] = 124,
        [anon_sym_DASH_AT] = 124,
        [anon_sym_LBRACK_RBRACK] = 124,
        [anon_sym_LBRACK_RBRACK_EQ] = 124,
        [sym__line_break] = 46,
    },
    [69] = {
        [sym__statement] = 330,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 332,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [70] = {
        [sym_identifier] = 334,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [71] = {
        [sym_identifier] = 336,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [72] = {
        [sym_identifier] = 338,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [73] = {
        [sym__terminator] = 190,
        [aux_sym_program_repeat1] = 190,
        [anon_sym_end] = 190,
        [anon_sym_if] = 190,
        [anon_sym_while] = 190,
        [anon_sym_unless] = 190,
        [anon_sym_until] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [74] = {
        [sym__terminator] = 340,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [75] = {
        [sym__statement] = 342,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 344,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [76] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_end] = 348,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [77] = {
        [sym__terminator] = 314,
        [aux_sym_program_repeat1] = 314,
        [anon_sym_end] = 314,
        [anon_sym_if] = 314,
        [anon_sym_while] = 314,
        [anon_sym_unless] = 314,
        [anon_sym_until] = 314,
        [sym_comment] = 46,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [78] = {
        [sym__statement] = 350,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [79] = {
        [anon_sym_end] = 352,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [80] = {
        [sym__terminator] = 354,
        [aux_sym_program_repeat1] = 354,
        [anon_sym_end] = 354,
        [anon_sym_if] = 354,
        [anon_sym_while] = 354,
        [anon_sym_unless] = 354,
        [anon_sym_until] = 354,
        [sym_comment] = 46,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [81] = {
        [sym__expression] = 356,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_LPAREN] = 286,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [82] = {
        [sym__statement] = 296,
        [sym__declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_class_declaration] = 296,
        [sym_module_declaration] = 296,
        [sym_while_statement] = 296,
        [sym_until_statement] = 296,
        [sym_unless_statement] = 296,
        [sym__call] = 296,
        [sym__command] = 296,
        [sym__function_call] = 296,
        [sym__expression] = 296,
        [sym__argument] = 296,
        [sym__primary] = 296,
        [sym_scope_resolution_expression] = 296,
        [sym_subscript_expression] = 296,
        [sym__variable] = 296,
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [ts_builtin_sym_end] = 298,
        [anon_sym_end] = 298,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 296,
        [anon_sym_if] = 298,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [anon_sym_def] = 296,
        [anon_sym_LPAREN] = 296,
        [anon_sym_RPAREN] = 298,
        [anon_sym_class] = 296,
        [anon_sym_COLON_COLON] = 296,
        [anon_sym_module] = 296,
        [anon_sym_super] = 296,
        [anon_sym_nil] = 296,
        [anon_sym_self] = 296,
        [sym_identifier] = 296,
        [sym_comment] = 46,
        [sym_symbol] = 296,
        [sym__line_break] = 46,
        [anon_sym_SEMI] = 298,
    },
    [83] = {
        [sym__statement] = 296,
        [sym__declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_class_declaration] = 296,
        [sym_module_declaration] = 296,
        [sym_while_statement] = 296,
        [sym_until_statement] = 296,
        [sym_unless_statement] = 296,
        [sym__call] = 296,
        [sym__command] = 296,
        [sym__function_call] = 296,
        [sym__expression] = 296,
        [sym__argument] = 296,
        [sym__primary] = 296,
        [sym_scope_resolution_expression] = 296,
        [sym_subscript_expression] = 296,
        [sym__variable] = 296,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [anon_sym_def] = 296,
        [anon_sym_LPAREN] = 296,
        [anon_sym_class] = 296,
        [anon_sym_COLON_COLON] = 296,
        [anon_sym_module] = 296,
        [anon_sym_super] = 296,
        [anon_sym_nil] = 296,
        [anon_sym_self] = 296,
        [sym_identifier] = 296,
        [sym_comment] = 46,
        [sym_symbol] = 296,
        [sym__line_break] = 46,
    },
    [84] = {
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_end] = 358,
        [anon_sym_if] = 358,
        [anon_sym_while] = 358,
        [anon_sym_unless] = 358,
        [anon_sym_until] = 358,
        [sym_comment] = 46,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [85] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [sym_comment] = 46,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [86] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_end] = 364,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [87] = {
        [anon_sym_end] = 366,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [88] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [anon_sym_end] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [89] = {
        [sym__terminator] = 368,
        [anon_sym_LT] = 370,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [90] = {
        [sym__statement] = 372,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 374,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [91] = {
        [sym_identifier] = 376,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [92] = {
        [sym__terminator] = 378,
        [aux_sym_class_declaration_repeat1] = 380,
        [anon_sym_COLON_COLON] = 382,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [93] = {
        [sym__statement] = 384,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 386,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [94] = {
        [sym__terminator] = 388,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [95] = {
        [sym_identifier] = 390,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [96] = {
        [sym__terminator] = 392,
        [aux_sym_class_declaration_repeat1] = 394,
        [anon_sym_COLON_COLON] = 382,
        [sym_comment] = 46,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [97] = {
        [sym__terminator] = 396,
        [sym_comment] = 46,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [98] = {
        [sym__statement] = 398,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 400,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [99] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 402,
        [anon_sym_end] = 404,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [100] = {
        [sym__terminator] = 406,
        [aux_sym_program_repeat1] = 406,
        [anon_sym_end] = 406,
        [anon_sym_if] = 406,
        [anon_sym_while] = 406,
        [anon_sym_unless] = 406,
        [anon_sym_until] = 406,
        [sym_comment] = 46,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [101] = {
        [anon_sym_end] = 408,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [102] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_end] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [sym_comment] = 46,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [103] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_end] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [sym_comment] = 46,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [104] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 414,
        [anon_sym_end] = 400,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [105] = {
        [sym__terminator] = 416,
        [aux_sym_program_repeat1] = 416,
        [anon_sym_end] = 416,
        [anon_sym_if] = 416,
        [anon_sym_while] = 416,
        [anon_sym_unless] = 416,
        [anon_sym_until] = 416,
        [sym_comment] = 46,
        [sym__line_break] = 416,
        [anon_sym_SEMI] = 416,
    },
    [106] = {
        [anon_sym_end] = 404,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [107] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 418,
        [anon_sym_end] = 420,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [108] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [anon_sym_end] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [sym_comment] = 46,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [109] = {
        [anon_sym_end] = 386,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [110] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [sym_comment] = 46,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [111] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 426,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 428,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [112] = {
        [sym__terminator] = 244,
        [aux_sym_program_repeat1] = 244,
        [anon_sym_end] = 244,
        [anon_sym_if] = 244,
        [anon_sym_while] = 244,
        [anon_sym_unless] = 244,
        [anon_sym_until] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [113] = {
        [sym__statement] = 430,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [114] = {
        [anon_sym_RPAREN] = 432,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [115] = {
        [sym__expression] = 434,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_LPAREN] = 152,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [116] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [117] = {
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_if] = 358,
        [anon_sym_while] = 358,
        [anon_sym_unless] = 358,
        [anon_sym_until] = 358,
        [anon_sym_RPAREN] = 358,
        [sym_comment] = 46,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [118] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [119] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 440,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 364,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [120] = {
        [anon_sym_RPAREN] = 366,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [121] = {
        [sym_argument_list] = 442,
        [sym__terminator] = 444,
        [anon_sym_LPAREN] = 446,
        [anon_sym_STAR] = 448,
        [anon_sym_AMP] = 448,
        [sym_identifier] = 450,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [122] = {
        [sym_argument_list] = 452,
        [sym__terminator] = 452,
        [anon_sym_LPAREN] = 452,
        [anon_sym_STAR] = 452,
        [anon_sym_AMP] = 452,
        [sym_identifier] = 452,
        [sym_comment] = 46,
        [sym__line_break] = 452,
        [anon_sym_SEMI] = 452,
    },
    [123] = {
        [sym__terminator] = 454,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [124] = {
        [sym__statement] = 456,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 458,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [125] = {
        [sym_argument_list] = 460,
        [anon_sym_RPAREN] = 454,
        [anon_sym_STAR] = 462,
        [anon_sym_AMP] = 462,
        [sym_identifier] = 464,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [126] = {
        [sym_identifier] = 466,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [127] = {
        [sym__terminator] = 468,
        [aux_sym_argument_list_repeat1] = 470,
        [anon_sym_COMMA] = 472,
        [sym_comment] = 46,
        [sym__line_break] = 468,
        [anon_sym_SEMI] = 468,
    },
    [128] = {
        [sym__terminator] = 474,
        [sym_comment] = 46,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [129] = {
        [anon_sym_STAR] = 476,
        [anon_sym_AMP] = 476,
        [sym_identifier] = 478,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [130] = {
        [sym_identifier] = 480,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [131] = {
        [sym__terminator] = 482,
        [aux_sym_argument_list_repeat1] = 484,
        [anon_sym_COMMA] = 472,
        [sym_comment] = 46,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [132] = {
        [sym__terminator] = 486,
        [sym_comment] = 46,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [133] = {
        [sym__terminator] = 486,
        [aux_sym_argument_list_repeat1] = 488,
        [anon_sym_COMMA] = 472,
        [sym_comment] = 46,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [134] = {
        [sym__terminator] = 490,
        [sym_comment] = 46,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [135] = {
        [sym__terminator] = 474,
        [aux_sym_argument_list_repeat1] = 492,
        [anon_sym_COMMA] = 472,
        [sym_comment] = 46,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [136] = {
        [sym__terminator] = 494,
        [sym_comment] = 46,
        [sym__line_break] = 494,
        [anon_sym_SEMI] = 494,
    },
    [137] = {
        [anon_sym_RPAREN] = 496,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [138] = {
        [sym__statement] = 498,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 500,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [139] = {
        [sym_identifier] = 502,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [140] = {
        [aux_sym_argument_list_repeat1] = 504,
        [anon_sym_RPAREN] = 468,
        [anon_sym_COMMA] = 506,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [141] = {
        [anon_sym_RPAREN] = 474,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [142] = {
        [anon_sym_STAR] = 508,
        [anon_sym_AMP] = 508,
        [sym_identifier] = 510,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [143] = {
        [sym_identifier] = 512,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [144] = {
        [aux_sym_argument_list_repeat1] = 514,
        [anon_sym_RPAREN] = 482,
        [anon_sym_COMMA] = 506,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [145] = {
        [anon_sym_RPAREN] = 486,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [146] = {
        [aux_sym_argument_list_repeat1] = 516,
        [anon_sym_RPAREN] = 486,
        [anon_sym_COMMA] = 506,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [147] = {
        [anon_sym_RPAREN] = 490,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [148] = {
        [aux_sym_argument_list_repeat1] = 518,
        [anon_sym_RPAREN] = 474,
        [anon_sym_COMMA] = 506,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [149] = {
        [anon_sym_RPAREN] = 494,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [150] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 520,
        [anon_sym_end] = 522,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [151] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_end] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [sym_comment] = 46,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [152] = {
        [anon_sym_end] = 526,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [153] = {
        [sym__terminator] = 528,
        [aux_sym_program_repeat1] = 528,
        [anon_sym_end] = 528,
        [anon_sym_if] = 528,
        [anon_sym_while] = 528,
        [anon_sym_unless] = 528,
        [anon_sym_until] = 528,
        [sym_comment] = 46,
        [sym__line_break] = 528,
        [anon_sym_SEMI] = 528,
    },
    [154] = {
        [sym__terminator] = 530,
        [aux_sym_program_repeat1] = 530,
        [anon_sym_end] = 530,
        [anon_sym_if] = 530,
        [anon_sym_while] = 530,
        [anon_sym_unless] = 530,
        [anon_sym_until] = 530,
        [sym_comment] = 46,
        [sym__line_break] = 530,
        [anon_sym_SEMI] = 530,
    },
    [155] = {
        [sym__statement] = 532,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 522,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [156] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 534,
        [anon_sym_end] = 526,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [157] = {
        [anon_sym_end] = 536,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [158] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 538,
        [anon_sym_end] = 538,
        [anon_sym_if] = 538,
        [anon_sym_while] = 538,
        [anon_sym_unless] = 538,
        [anon_sym_until] = 538,
        [sym_comment] = 46,
        [sym__line_break] = 538,
        [anon_sym_SEMI] = 538,
    },
    [159] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 540,
        [anon_sym_end] = 500,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [160] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [anon_sym_end] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [sym_comment] = 46,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [161] = {
        [anon_sym_end] = 522,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [162] = {
        [sym__statement_block] = 544,
        [sym__do_block] = 546,
        [sym__terminator] = 548,
        [anon_sym_do] = 550,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [163] = {
        [sym__statement_block] = 552,
        [sym__do_block] = 552,
        [sym__terminator] = 552,
        [anon_sym_do] = 552,
        [sym_comment] = 46,
        [sym__line_break] = 552,
        [anon_sym_SEMI] = 552,
    },
    [164] = {
        [sym__statement_block] = 70,
        [sym__do_block] = 70,
        [sym__terminator] = 70,
        [anon_sym_do] = 70,
        [sym_comment] = 46,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [165] = {
        [sym__statement_block] = 72,
        [sym__do_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_do] = 72,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_LBRACK] = 556,
        [sym_comment] = 46,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [166] = {
        [sym__statement_block] = 78,
        [sym__do_block] = 78,
        [sym__terminator] = 78,
        [anon_sym_do] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [167] = {
        [sym__statement] = 558,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 560,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [168] = {
        [sym_identifier] = 562,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [169] = {
        [sym__statement_block] = 190,
        [sym__do_block] = 190,
        [sym__terminator] = 190,
        [anon_sym_do] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [170] = {
        [sym__statement_block] = 210,
        [sym__do_block] = 210,
        [sym__terminator] = 210,
        [anon_sym_do] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [171] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 566,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [172] = {
        [sym__statement_block] = 244,
        [sym__do_block] = 244,
        [sym__terminator] = 244,
        [anon_sym_do] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [173] = {
        [anon_sym_RPAREN] = 568,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [174] = {
        [sym__statement_block] = 436,
        [sym__do_block] = 436,
        [sym__terminator] = 436,
        [anon_sym_do] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [175] = {
        [sym__statement_block] = 438,
        [sym__do_block] = 438,
        [sym__terminator] = 438,
        [anon_sym_do] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [176] = {
        [sym_identifier] = 570,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [177] = {
        [sym__argument] = 572,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 582,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [178] = {
        [aux_sym__call_arguments_repeat1] = 586,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 590,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [179] = {
        [aux_sym__call_arguments_repeat1] = 72,
        [anon_sym_COMMA] = 72,
        [anon_sym_COLON_COLON] = 592,
        [anon_sym_LBRACK] = 594,
        [anon_sym_RBRACK] = 72,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [180] = {
        [aux_sym__call_arguments_repeat1] = 78,
        [anon_sym_COMMA] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_LBRACK] = 78,
        [anon_sym_RBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [181] = {
        [sym__statement] = 596,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 598,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [182] = {
        [sym_identifier] = 600,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [183] = {
        [sym__statement_block] = 602,
        [sym__do_block] = 602,
        [sym__terminator] = 602,
        [anon_sym_do] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [184] = {
        [aux_sym__call_arguments_repeat1] = 190,
        [anon_sym_COMMA] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_LBRACK] = 190,
        [anon_sym_RBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [185] = {
        [aux_sym__call_arguments_repeat1] = 210,
        [anon_sym_COMMA] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [anon_sym_RBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [186] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 606,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [187] = {
        [aux_sym__call_arguments_repeat1] = 244,
        [anon_sym_COMMA] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 244,
        [anon_sym_RBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [188] = {
        [anon_sym_RPAREN] = 608,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [189] = {
        [aux_sym__call_arguments_repeat1] = 436,
        [anon_sym_COMMA] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 436,
        [anon_sym_RBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [190] = {
        [aux_sym__call_arguments_repeat1] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_RBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [191] = {
        [sym_identifier] = 610,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [192] = {
        [sym__argument] = 612,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 614,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [193] = {
        [aux_sym__call_arguments_repeat1] = 616,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 618,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [194] = {
        [aux_sym__call_arguments_repeat1] = 602,
        [anon_sym_COMMA] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [anon_sym_RBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [195] = {
        [anon_sym_RBRACK] = 620,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [196] = {
        [sym__argument] = 622,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [197] = {
        [aux_sym__call_arguments_repeat1] = 624,
        [anon_sym_COMMA] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_RBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [198] = {
        [aux_sym__call_arguments_repeat1] = 626,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 628,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [199] = {
        [anon_sym_RBRACK] = 630,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [200] = {
        [aux_sym__call_arguments_repeat1] = 632,
        [anon_sym_COMMA] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_LBRACK] = 632,
        [anon_sym_RBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [201] = {
        [aux_sym__call_arguments_repeat1] = 634,
        [anon_sym_COMMA] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_LBRACK] = 634,
        [anon_sym_RBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [202] = {
        [anon_sym_RBRACK] = 636,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [203] = {
        [sym__statement_block] = 624,
        [sym__do_block] = 624,
        [sym__terminator] = 624,
        [anon_sym_do] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_LBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [204] = {
        [sym__statement_block] = 632,
        [sym__do_block] = 632,
        [sym__terminator] = 632,
        [anon_sym_do] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_LBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [205] = {
        [sym__statement_block] = 634,
        [sym__do_block] = 634,
        [sym__terminator] = 634,
        [anon_sym_do] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_LBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [206] = {
        [sym__terminator] = 638,
        [aux_sym_program_repeat1] = 638,
        [anon_sym_end] = 638,
        [anon_sym_if] = 638,
        [anon_sym_while] = 638,
        [anon_sym_unless] = 638,
        [anon_sym_until] = 638,
        [sym_comment] = 46,
        [sym__line_break] = 638,
        [anon_sym_SEMI] = 638,
    },
    [207] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_end] = 640,
        [anon_sym_if] = 640,
        [anon_sym_while] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_until] = 640,
        [sym_comment] = 46,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [208] = {
        [sym__statement] = 642,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 644,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [209] = {
        [sym__statement] = 646,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 648,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [210] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 652,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [211] = {
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_end] = 654,
        [anon_sym_if] = 654,
        [anon_sym_while] = 654,
        [anon_sym_unless] = 654,
        [anon_sym_until] = 654,
        [sym_comment] = 46,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [212] = {
        [anon_sym_end] = 656,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [213] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [sym_comment] = 46,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [214] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_end] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [sym_comment] = 46,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [215] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 662,
        [anon_sym_end] = 664,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [216] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [sym_comment] = 46,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [217] = {
        [anon_sym_end] = 668,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [218] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_end] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [sym_comment] = 46,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [219] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [anon_sym_end] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [sym_comment] = 46,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [220] = {
        [sym__then_block] = 674,
        [sym__terminator] = 676,
        [anon_sym_then] = 676,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [221] = {
        [sym__then_block] = 552,
        [sym__terminator] = 552,
        [anon_sym_then] = 552,
        [sym_comment] = 46,
        [sym__line_break] = 552,
        [anon_sym_SEMI] = 552,
    },
    [222] = {
        [sym__then_block] = 70,
        [sym__terminator] = 70,
        [anon_sym_then] = 70,
        [sym_comment] = 46,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [223] = {
        [sym__then_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_COLON_COLON] = 678,
        [anon_sym_then] = 72,
        [anon_sym_LBRACK] = 680,
        [sym_comment] = 46,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [224] = {
        [sym__then_block] = 78,
        [sym__terminator] = 78,
        [anon_sym_COLON_COLON] = 78,
        [anon_sym_then] = 78,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 46,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [225] = {
        [sym__statement] = 682,
        [sym__declaration] = 128,
        [sym_method_declaration] = 130,
        [sym_class_declaration] = 130,
        [sym_module_declaration] = 130,
        [sym_while_statement] = 128,
        [sym_until_statement] = 128,
        [sym_unless_statement] = 128,
        [sym__call] = 132,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 128,
        [sym__argument] = 134,
        [sym__primary] = 136,
        [sym_scope_resolution_expression] = 138,
        [sym_subscript_expression] = 138,
        [sym__variable] = 138,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 142,
        [anon_sym_while] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_until] = 148,
        [anon_sym_def] = 150,
        [anon_sym_LPAREN] = 152,
        [anon_sym_RPAREN] = 684,
        [anon_sym_class] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_module] = 160,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 162,
        [anon_sym_self] = 162,
        [sym_identifier] = 162,
        [sym_comment] = 46,
        [sym_symbol] = 134,
        [sym__line_break] = 46,
    },
    [226] = {
        [sym_identifier] = 686,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [227] = {
        [sym__then_block] = 190,
        [sym__terminator] = 190,
        [anon_sym_COLON_COLON] = 190,
        [anon_sym_then] = 190,
        [anon_sym_LBRACK] = 190,
        [sym_comment] = 46,
        [sym__line_break] = 190,
        [anon_sym_SEMI] = 190,
    },
    [228] = {
        [sym__then_block] = 210,
        [sym__terminator] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_then] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [229] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 688,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 690,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [230] = {
        [sym__then_block] = 244,
        [sym__terminator] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_then] = 244,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [231] = {
        [anon_sym_RPAREN] = 692,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [232] = {
        [sym__then_block] = 436,
        [sym__terminator] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_then] = 436,
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [233] = {
        [sym__then_block] = 438,
        [sym__terminator] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_then] = 438,
        [anon_sym_LBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [234] = {
        [sym_identifier] = 694,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [235] = {
        [sym__argument] = 696,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 698,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [236] = {
        [aux_sym__call_arguments_repeat1] = 700,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 702,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [237] = {
        [sym__then_block] = 602,
        [sym__terminator] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_then] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [238] = {
        [anon_sym_RBRACK] = 704,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [239] = {
        [sym__then_block] = 624,
        [sym__terminator] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_then] = 624,
        [anon_sym_LBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [240] = {
        [sym__then_block] = 632,
        [sym__terminator] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_then] = 632,
        [anon_sym_LBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [241] = {
        [sym__then_block] = 634,
        [sym__terminator] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_then] = 634,
        [anon_sym_LBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [242] = {
        [sym__else_block] = 706,
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [anon_sym_end] = 708,
        [anon_sym_if] = 708,
        [anon_sym_while] = 708,
        [anon_sym_unless] = 708,
        [anon_sym_until] = 708,
        [anon_sym_else] = 710,
        [sym_comment] = 46,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [243] = {
        [sym__statement] = 712,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 714,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [244] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 716,
        [anon_sym_end] = 718,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [245] = {
        [sym__else_block] = 720,
        [sym__terminator] = 720,
        [aux_sym_program_repeat1] = 720,
        [anon_sym_end] = 720,
        [anon_sym_if] = 720,
        [anon_sym_while] = 720,
        [anon_sym_unless] = 720,
        [anon_sym_until] = 720,
        [anon_sym_else] = 720,
        [sym_comment] = 46,
        [sym__line_break] = 720,
        [anon_sym_SEMI] = 720,
    },
    [246] = {
        [anon_sym_end] = 722,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [247] = {
        [sym__else_block] = 724,
        [sym__terminator] = 724,
        [aux_sym_program_repeat1] = 724,
        [anon_sym_end] = 724,
        [anon_sym_if] = 724,
        [anon_sym_while] = 724,
        [anon_sym_unless] = 724,
        [anon_sym_until] = 724,
        [anon_sym_else] = 724,
        [sym_comment] = 46,
        [sym__line_break] = 724,
        [anon_sym_SEMI] = 724,
    },
    [248] = {
        [sym__else_block] = 726,
        [sym__terminator] = 726,
        [aux_sym_program_repeat1] = 726,
        [anon_sym_end] = 726,
        [anon_sym_if] = 726,
        [anon_sym_while] = 726,
        [anon_sym_unless] = 726,
        [anon_sym_until] = 726,
        [anon_sym_else] = 726,
        [sym_comment] = 46,
        [sym__line_break] = 726,
        [anon_sym_SEMI] = 726,
    },
    [249] = {
        [sym__terminator] = 728,
        [aux_sym_program_repeat1] = 728,
        [anon_sym_end] = 728,
        [anon_sym_if] = 728,
        [anon_sym_while] = 728,
        [anon_sym_unless] = 728,
        [anon_sym_until] = 728,
        [sym_comment] = 46,
        [sym__line_break] = 728,
        [anon_sym_SEMI] = 728,
    },
    [250] = {
        [sym__statement] = 730,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 732,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [251] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 734,
        [anon_sym_end] = 736,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [252] = {
        [sym__terminator] = 738,
        [aux_sym_program_repeat1] = 738,
        [anon_sym_end] = 738,
        [anon_sym_if] = 738,
        [anon_sym_while] = 738,
        [anon_sym_unless] = 738,
        [anon_sym_until] = 738,
        [sym_comment] = 46,
        [sym__line_break] = 738,
        [anon_sym_SEMI] = 738,
    },
    [253] = {
        [anon_sym_end] = 740,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [254] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_end] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [sym_comment] = 46,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [255] = {
        [sym__terminator] = 744,
        [aux_sym_program_repeat1] = 744,
        [anon_sym_end] = 744,
        [anon_sym_if] = 744,
        [anon_sym_while] = 744,
        [anon_sym_unless] = 744,
        [anon_sym_until] = 744,
        [sym_comment] = 46,
        [sym__line_break] = 744,
        [anon_sym_SEMI] = 744,
    },
    [256] = {
        [sym__statement_block] = 746,
        [sym__do_block] = 546,
        [sym__terminator] = 548,
        [anon_sym_do] = 550,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [257] = {
        [sym__terminator] = 748,
        [aux_sym_program_repeat1] = 748,
        [anon_sym_end] = 748,
        [anon_sym_if] = 748,
        [anon_sym_while] = 748,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 748,
        [sym_comment] = 46,
        [sym__line_break] = 748,
        [anon_sym_SEMI] = 748,
    },
    [258] = {
        [sym__function_name] = 356,
        [anon_sym_PIPE] = 318,
        [anon_sym_STAR] = 318,
        [anon_sym_AMP] = 318,
        [anon_sym_LT] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 318,
        [anon_sym_CARET] = 318,
        [anon_sym_LT_EQ_GT] = 318,
        [anon_sym_EQ_EQ] = 318,
        [anon_sym_EQ_EQ_EQ] = 318,
        [anon_sym_EQ_TILDE] = 318,
        [anon_sym_GT] = 318,
        [anon_sym_GT_EQ] = 318,
        [anon_sym_LT_EQ] = 318,
        [anon_sym_PLUS] = 318,
        [anon_sym_DASH] = 318,
        [anon_sym_SLASH] = 318,
        [anon_sym_PERCENT] = 318,
        [anon_sym_STAR_STAR] = 318,
        [anon_sym_LT_LT] = 318,
        [anon_sym_GT_GT] = 318,
        [anon_sym_TILDE] = 318,
        [anon_sym_PLUS_AT] = 318,
        [anon_sym_DASH_AT] = 318,
        [anon_sym_LBRACK_RBRACK] = 318,
        [anon_sym_LBRACK_RBRACK_EQ] = 318,
        [sym__line_break] = 46,
    },
    [259] = {
        [sym__function_name] = 452,
        [anon_sym_PIPE] = 452,
        [anon_sym_STAR] = 452,
        [anon_sym_AMP] = 452,
        [anon_sym_LT] = 452,
        [sym_identifier] = 452,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 452,
        [anon_sym_CARET] = 452,
        [anon_sym_LT_EQ_GT] = 452,
        [anon_sym_EQ_EQ] = 452,
        [anon_sym_EQ_EQ_EQ] = 452,
        [anon_sym_EQ_TILDE] = 452,
        [anon_sym_GT] = 452,
        [anon_sym_GT_EQ] = 452,
        [anon_sym_LT_EQ] = 452,
        [anon_sym_PLUS] = 452,
        [anon_sym_DASH] = 452,
        [anon_sym_SLASH] = 452,
        [anon_sym_PERCENT] = 452,
        [anon_sym_STAR_STAR] = 452,
        [anon_sym_LT_LT] = 452,
        [anon_sym_GT_GT] = 452,
        [anon_sym_TILDE] = 452,
        [anon_sym_PLUS_AT] = 452,
        [anon_sym_DASH_AT] = 452,
        [anon_sym_LBRACK_RBRACK] = 452,
        [anon_sym_LBRACK_RBRACK_EQ] = 452,
        [sym__line_break] = 46,
    },
    [260] = {
        [sym__terminator] = 452,
        [aux_sym_program_repeat1] = 452,
        [anon_sym_end] = 452,
        [anon_sym_if] = 452,
        [anon_sym_while] = 452,
        [anon_sym_unless] = 452,
        [anon_sym_until] = 452,
        [sym_comment] = 46,
        [sym__line_break] = 452,
        [anon_sym_SEMI] = 452,
    },
    [261] = {
        [sym__terminator] = 750,
        [aux_sym_program_repeat1] = 750,
        [anon_sym_end] = 750,
        [anon_sym_if] = 750,
        [anon_sym_while] = 750,
        [anon_sym_unless] = 750,
        [anon_sym_until] = 750,
        [sym_comment] = 46,
        [sym__line_break] = 750,
        [anon_sym_SEMI] = 750,
    },
    [262] = {
        [sym_identifier] = 752,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [263] = {
        [sym__argument] = 754,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 756,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [264] = {
        [aux_sym__call_arguments_repeat1] = 758,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 760,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [265] = {
        [sym__terminator] = 602,
        [aux_sym_program_repeat1] = 602,
        [anon_sym_end] = 602,
        [anon_sym_if] = 602,
        [anon_sym_while] = 602,
        [anon_sym_unless] = 602,
        [anon_sym_until] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [266] = {
        [anon_sym_RBRACK] = 762,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [267] = {
        [sym__terminator] = 624,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 624,
        [anon_sym_if] = 624,
        [anon_sym_while] = 624,
        [anon_sym_unless] = 624,
        [anon_sym_until] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_LBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [268] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 632,
        [anon_sym_if] = 632,
        [anon_sym_while] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_until] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_LBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [269] = {
        [sym__terminator] = 634,
        [aux_sym_program_repeat1] = 634,
        [anon_sym_end] = 634,
        [anon_sym_if] = 634,
        [anon_sym_while] = 634,
        [anon_sym_unless] = 634,
        [anon_sym_until] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_LBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [270] = {
        [sym__statement] = 764,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_PIPE] = 766,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [271] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 768,
        [anon_sym_end] = 770,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [272] = {
        [sym__statement] = 772,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 770,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [273] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 774,
        [anon_sym_end] = 776,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [274] = {
        [sym__terminator] = 778,
        [aux_sym_program_repeat1] = 778,
        [anon_sym_end] = 778,
        [anon_sym_if] = 778,
        [anon_sym_while] = 778,
        [anon_sym_unless] = 778,
        [anon_sym_until] = 778,
        [sym_comment] = 46,
        [sym__line_break] = 778,
        [anon_sym_SEMI] = 778,
    },
    [275] = {
        [anon_sym_end] = 780,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [276] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [anon_sym_end] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [sym_comment] = 46,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [277] = {
        [sym__terminator] = 784,
        [aux_sym_program_repeat1] = 784,
        [anon_sym_end] = 784,
        [anon_sym_if] = 784,
        [anon_sym_while] = 784,
        [anon_sym_unless] = 784,
        [anon_sym_until] = 784,
        [sym_comment] = 46,
        [sym__line_break] = 784,
        [anon_sym_SEMI] = 784,
    },
    [278] = {
        [anon_sym_end] = 776,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [279] = {
        [anon_sym_end] = 786,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [280] = {
        [sym__terminator] = 354,
        [aux_sym_program_repeat1] = 354,
        [anon_sym_if] = 354,
        [anon_sym_while] = 354,
        [anon_sym_unless] = 354,
        [anon_sym_until] = 354,
        [anon_sym_RPAREN] = 354,
        [sym_comment] = 46,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [281] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [anon_sym_RPAREN] = 360,
        [sym_comment] = 46,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [282] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_RPAREN] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [283] = {
        [sym__terminator] = 788,
        [anon_sym_LT] = 790,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [284] = {
        [sym__statement] = 792,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 794,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [285] = {
        [sym_identifier] = 796,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [286] = {
        [sym__terminator] = 798,
        [aux_sym_class_declaration_repeat1] = 800,
        [anon_sym_COLON_COLON] = 382,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [287] = {
        [sym__statement] = 802,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 804,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [288] = {
        [sym__terminator] = 806,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [289] = {
        [sym__statement] = 808,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 810,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [290] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 812,
        [anon_sym_end] = 814,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [291] = {
        [sym__terminator] = 406,
        [aux_sym_program_repeat1] = 406,
        [anon_sym_if] = 406,
        [anon_sym_while] = 406,
        [anon_sym_unless] = 406,
        [anon_sym_until] = 406,
        [anon_sym_RPAREN] = 406,
        [sym_comment] = 46,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [292] = {
        [anon_sym_end] = 816,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [293] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [anon_sym_RPAREN] = 410,
        [sym_comment] = 46,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [294] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [anon_sym_RPAREN] = 412,
        [sym_comment] = 46,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [295] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 818,
        [anon_sym_end] = 810,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [296] = {
        [sym__terminator] = 416,
        [aux_sym_program_repeat1] = 416,
        [anon_sym_if] = 416,
        [anon_sym_while] = 416,
        [anon_sym_unless] = 416,
        [anon_sym_until] = 416,
        [anon_sym_RPAREN] = 416,
        [sym_comment] = 46,
        [sym__line_break] = 416,
        [anon_sym_SEMI] = 416,
    },
    [297] = {
        [anon_sym_end] = 814,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [298] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 820,
        [anon_sym_end] = 822,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [299] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [anon_sym_RPAREN] = 422,
        [sym_comment] = 46,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [300] = {
        [anon_sym_end] = 804,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [301] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [anon_sym_RPAREN] = 424,
        [sym_comment] = 46,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [302] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 824,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 826,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [303] = {
        [sym__terminator] = 244,
        [aux_sym_program_repeat1] = 244,
        [anon_sym_if] = 244,
        [anon_sym_while] = 244,
        [anon_sym_unless] = 244,
        [anon_sym_until] = 244,
        [anon_sym_RPAREN] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [304] = {
        [anon_sym_RPAREN] = 828,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [305] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_RPAREN] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [306] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [anon_sym_RPAREN] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [307] = {
        [sym_argument_list] = 830,
        [sym__terminator] = 832,
        [anon_sym_LPAREN] = 834,
        [anon_sym_STAR] = 448,
        [anon_sym_AMP] = 448,
        [sym_identifier] = 450,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [308] = {
        [sym__terminator] = 836,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [309] = {
        [sym__statement] = 838,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 840,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [310] = {
        [sym_argument_list] = 842,
        [anon_sym_RPAREN] = 836,
        [anon_sym_STAR] = 462,
        [anon_sym_AMP] = 462,
        [sym_identifier] = 464,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [311] = {
        [anon_sym_RPAREN] = 844,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [312] = {
        [sym__statement] = 846,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 848,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [313] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 850,
        [anon_sym_end] = 852,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [314] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [anon_sym_RPAREN] = 524,
        [sym_comment] = 46,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [315] = {
        [anon_sym_end] = 854,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [316] = {
        [sym__terminator] = 528,
        [aux_sym_program_repeat1] = 528,
        [anon_sym_if] = 528,
        [anon_sym_while] = 528,
        [anon_sym_unless] = 528,
        [anon_sym_until] = 528,
        [anon_sym_RPAREN] = 528,
        [sym_comment] = 46,
        [sym__line_break] = 528,
        [anon_sym_SEMI] = 528,
    },
    [317] = {
        [sym__terminator] = 530,
        [aux_sym_program_repeat1] = 530,
        [anon_sym_if] = 530,
        [anon_sym_while] = 530,
        [anon_sym_unless] = 530,
        [anon_sym_until] = 530,
        [anon_sym_RPAREN] = 530,
        [sym_comment] = 46,
        [sym__line_break] = 530,
        [anon_sym_SEMI] = 530,
    },
    [318] = {
        [sym__statement] = 856,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 852,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [319] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 858,
        [anon_sym_end] = 854,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [320] = {
        [anon_sym_end] = 860,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [321] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 538,
        [anon_sym_if] = 538,
        [anon_sym_while] = 538,
        [anon_sym_unless] = 538,
        [anon_sym_until] = 538,
        [anon_sym_RPAREN] = 538,
        [sym_comment] = 46,
        [sym__line_break] = 538,
        [anon_sym_SEMI] = 538,
    },
    [322] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 862,
        [anon_sym_end] = 848,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [323] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [anon_sym_RPAREN] = 542,
        [sym_comment] = 46,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [324] = {
        [anon_sym_end] = 852,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [325] = {
        [sym__statement_block] = 864,
        [sym__do_block] = 866,
        [sym__terminator] = 868,
        [anon_sym_do] = 870,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [326] = {
        [sym__terminator] = 638,
        [aux_sym_program_repeat1] = 638,
        [anon_sym_if] = 638,
        [anon_sym_while] = 638,
        [anon_sym_unless] = 638,
        [anon_sym_until] = 638,
        [anon_sym_RPAREN] = 638,
        [sym_comment] = 46,
        [sym__line_break] = 638,
        [anon_sym_SEMI] = 638,
    },
    [327] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_if] = 640,
        [anon_sym_while] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_until] = 640,
        [anon_sym_RPAREN] = 640,
        [sym_comment] = 46,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [328] = {
        [sym__statement] = 872,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 874,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [329] = {
        [sym__statement] = 876,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 878,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [330] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 880,
        [anon_sym_end] = 882,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [331] = {
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_if] = 654,
        [anon_sym_while] = 654,
        [anon_sym_unless] = 654,
        [anon_sym_until] = 654,
        [anon_sym_RPAREN] = 654,
        [sym_comment] = 46,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [332] = {
        [anon_sym_end] = 884,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [333] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_RPAREN] = 658,
        [sym_comment] = 46,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [334] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [anon_sym_RPAREN] = 660,
        [sym_comment] = 46,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [335] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 886,
        [anon_sym_end] = 888,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [336] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [anon_sym_RPAREN] = 666,
        [sym_comment] = 46,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [337] = {
        [anon_sym_end] = 890,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [338] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [anon_sym_RPAREN] = 670,
        [sym_comment] = 46,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [339] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [anon_sym_RPAREN] = 672,
        [sym_comment] = 46,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [340] = {
        [sym__then_block] = 892,
        [sym__terminator] = 894,
        [anon_sym_then] = 894,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [341] = {
        [sym__else_block] = 896,
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [anon_sym_if] = 708,
        [anon_sym_while] = 708,
        [anon_sym_unless] = 708,
        [anon_sym_until] = 708,
        [anon_sym_RPAREN] = 708,
        [anon_sym_else] = 898,
        [sym_comment] = 46,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [342] = {
        [sym__statement] = 900,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 902,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [343] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 904,
        [anon_sym_end] = 906,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [344] = {
        [sym__else_block] = 720,
        [sym__terminator] = 720,
        [aux_sym_program_repeat1] = 720,
        [anon_sym_if] = 720,
        [anon_sym_while] = 720,
        [anon_sym_unless] = 720,
        [anon_sym_until] = 720,
        [anon_sym_RPAREN] = 720,
        [anon_sym_else] = 720,
        [sym_comment] = 46,
        [sym__line_break] = 720,
        [anon_sym_SEMI] = 720,
    },
    [345] = {
        [anon_sym_end] = 908,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [346] = {
        [sym__else_block] = 724,
        [sym__terminator] = 724,
        [aux_sym_program_repeat1] = 724,
        [anon_sym_if] = 724,
        [anon_sym_while] = 724,
        [anon_sym_unless] = 724,
        [anon_sym_until] = 724,
        [anon_sym_RPAREN] = 724,
        [anon_sym_else] = 724,
        [sym_comment] = 46,
        [sym__line_break] = 724,
        [anon_sym_SEMI] = 724,
    },
    [347] = {
        [sym__else_block] = 726,
        [sym__terminator] = 726,
        [aux_sym_program_repeat1] = 726,
        [anon_sym_if] = 726,
        [anon_sym_while] = 726,
        [anon_sym_unless] = 726,
        [anon_sym_until] = 726,
        [anon_sym_RPAREN] = 726,
        [anon_sym_else] = 726,
        [sym_comment] = 46,
        [sym__line_break] = 726,
        [anon_sym_SEMI] = 726,
    },
    [348] = {
        [sym__terminator] = 728,
        [aux_sym_program_repeat1] = 728,
        [anon_sym_if] = 728,
        [anon_sym_while] = 728,
        [anon_sym_unless] = 728,
        [anon_sym_until] = 728,
        [anon_sym_RPAREN] = 728,
        [sym_comment] = 46,
        [sym__line_break] = 728,
        [anon_sym_SEMI] = 728,
    },
    [349] = {
        [sym__statement] = 910,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 912,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [350] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 914,
        [anon_sym_end] = 916,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [351] = {
        [sym__terminator] = 738,
        [aux_sym_program_repeat1] = 738,
        [anon_sym_if] = 738,
        [anon_sym_while] = 738,
        [anon_sym_unless] = 738,
        [anon_sym_until] = 738,
        [anon_sym_RPAREN] = 738,
        [sym_comment] = 46,
        [sym__line_break] = 738,
        [anon_sym_SEMI] = 738,
    },
    [352] = {
        [anon_sym_end] = 918,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [353] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [anon_sym_RPAREN] = 742,
        [sym_comment] = 46,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [354] = {
        [sym__terminator] = 744,
        [aux_sym_program_repeat1] = 744,
        [anon_sym_if] = 744,
        [anon_sym_while] = 744,
        [anon_sym_unless] = 744,
        [anon_sym_until] = 744,
        [anon_sym_RPAREN] = 744,
        [sym_comment] = 46,
        [sym__line_break] = 744,
        [anon_sym_SEMI] = 744,
    },
    [355] = {
        [sym__statement_block] = 920,
        [sym__do_block] = 866,
        [sym__terminator] = 868,
        [anon_sym_do] = 870,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [356] = {
        [sym__terminator] = 748,
        [aux_sym_program_repeat1] = 748,
        [anon_sym_if] = 748,
        [anon_sym_while] = 748,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 748,
        [anon_sym_RPAREN] = 748,
        [sym_comment] = 46,
        [sym__line_break] = 748,
        [anon_sym_SEMI] = 748,
    },
    [357] = {
        [sym__function_name] = 434,
        [anon_sym_PIPE] = 228,
        [anon_sym_STAR] = 228,
        [anon_sym_AMP] = 228,
        [anon_sym_LT] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 46,
        [anon_sym_DOT_DOT] = 228,
        [anon_sym_CARET] = 228,
        [anon_sym_LT_EQ_GT] = 228,
        [anon_sym_EQ_EQ] = 228,
        [anon_sym_EQ_EQ_EQ] = 228,
        [anon_sym_EQ_TILDE] = 228,
        [anon_sym_GT] = 228,
        [anon_sym_GT_EQ] = 228,
        [anon_sym_LT_EQ] = 228,
        [anon_sym_PLUS] = 228,
        [anon_sym_DASH] = 228,
        [anon_sym_SLASH] = 228,
        [anon_sym_PERCENT] = 228,
        [anon_sym_STAR_STAR] = 228,
        [anon_sym_LT_LT] = 228,
        [anon_sym_GT_GT] = 228,
        [anon_sym_TILDE] = 228,
        [anon_sym_PLUS_AT] = 228,
        [anon_sym_DASH_AT] = 228,
        [anon_sym_LBRACK_RBRACK] = 228,
        [anon_sym_LBRACK_RBRACK_EQ] = 228,
        [sym__line_break] = 46,
    },
    [358] = {
        [sym__terminator] = 452,
        [aux_sym_program_repeat1] = 452,
        [anon_sym_if] = 452,
        [anon_sym_while] = 452,
        [anon_sym_unless] = 452,
        [anon_sym_until] = 452,
        [anon_sym_RPAREN] = 452,
        [sym_comment] = 46,
        [sym__line_break] = 452,
        [anon_sym_SEMI] = 452,
    },
    [359] = {
        [sym__terminator] = 750,
        [aux_sym_program_repeat1] = 750,
        [anon_sym_if] = 750,
        [anon_sym_while] = 750,
        [anon_sym_unless] = 750,
        [anon_sym_until] = 750,
        [anon_sym_RPAREN] = 750,
        [sym_comment] = 46,
        [sym__line_break] = 750,
        [anon_sym_SEMI] = 750,
    },
    [360] = {
        [sym_identifier] = 922,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [361] = {
        [sym__argument] = 924,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 926,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [362] = {
        [aux_sym__call_arguments_repeat1] = 928,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 930,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [363] = {
        [sym__terminator] = 602,
        [aux_sym_program_repeat1] = 602,
        [anon_sym_if] = 602,
        [anon_sym_while] = 602,
        [anon_sym_unless] = 602,
        [anon_sym_until] = 602,
        [anon_sym_RPAREN] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [364] = {
        [anon_sym_RBRACK] = 932,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [365] = {
        [sym__terminator] = 624,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_if] = 624,
        [anon_sym_while] = 624,
        [anon_sym_unless] = 624,
        [anon_sym_until] = 624,
        [anon_sym_RPAREN] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_LBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [366] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_if] = 632,
        [anon_sym_while] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_until] = 632,
        [anon_sym_RPAREN] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_LBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [367] = {
        [sym__terminator] = 634,
        [aux_sym_program_repeat1] = 634,
        [anon_sym_if] = 634,
        [anon_sym_while] = 634,
        [anon_sym_unless] = 634,
        [anon_sym_until] = 634,
        [anon_sym_RPAREN] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_LBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [368] = {
        [sym__statement] = 934,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_PIPE] = 936,
        [anon_sym_end] = 434,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [369] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 938,
        [anon_sym_end] = 940,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [370] = {
        [sym__statement] = 942,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 940,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [371] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 944,
        [anon_sym_end] = 946,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [372] = {
        [sym__terminator] = 778,
        [aux_sym_program_repeat1] = 778,
        [anon_sym_if] = 778,
        [anon_sym_while] = 778,
        [anon_sym_unless] = 778,
        [anon_sym_until] = 778,
        [anon_sym_RPAREN] = 778,
        [sym_comment] = 46,
        [sym__line_break] = 778,
        [anon_sym_SEMI] = 778,
    },
    [373] = {
        [anon_sym_end] = 948,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [374] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [anon_sym_RPAREN] = 782,
        [sym_comment] = 46,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [375] = {
        [sym__terminator] = 784,
        [aux_sym_program_repeat1] = 784,
        [anon_sym_if] = 784,
        [anon_sym_while] = 784,
        [anon_sym_unless] = 784,
        [anon_sym_until] = 784,
        [anon_sym_RPAREN] = 784,
        [sym_comment] = 46,
        [sym__line_break] = 784,
        [anon_sym_SEMI] = 784,
    },
    [376] = {
        [anon_sym_end] = 946,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [377] = {
        [anon_sym_RPAREN] = 950,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [378] = {
        [aux_sym__call_arguments_repeat1] = 436,
        [anon_sym_do] = 436,
        [anon_sym_COMMA] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [379] = {
        [aux_sym__call_arguments_repeat1] = 438,
        [anon_sym_do] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [380] = {
        [sym_identifier] = 952,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [381] = {
        [sym__argument] = 954,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 956,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [382] = {
        [aux_sym__call_arguments_repeat1] = 958,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 960,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [383] = {
        [aux_sym__call_arguments_repeat1] = 602,
        [anon_sym_do] = 602,
        [anon_sym_COMMA] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [384] = {
        [anon_sym_RBRACK] = 962,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [385] = {
        [aux_sym__call_arguments_repeat1] = 624,
        [anon_sym_do] = 624,
        [anon_sym_COMMA] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_LBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [386] = {
        [aux_sym__call_arguments_repeat1] = 632,
        [anon_sym_do] = 632,
        [anon_sym_COMMA] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_LBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [387] = {
        [aux_sym__call_arguments_repeat1] = 634,
        [anon_sym_do] = 634,
        [anon_sym_COMMA] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_LBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [388] = {
        [anon_sym_do] = 964,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [389] = {
        [sym__argument] = 966,
        [sym__primary] = 176,
        [sym_scope_resolution_expression] = 178,
        [sym_subscript_expression] = 178,
        [sym__variable] = 178,
        [anon_sym_LPAREN] = 182,
        [anon_sym_COLON_COLON] = 184,
        [anon_sym_nil] = 188,
        [anon_sym_self] = 188,
        [sym_identifier] = 188,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [390] = {
        [aux_sym__call_arguments_repeat1] = 968,
        [anon_sym_do] = 628,
        [anon_sym_COMMA] = 198,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [391] = {
        [anon_sym_do] = 630,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [392] = {
        [sym__terminator] = 970,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [393] = {
        [sym__statement] = 972,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 974,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [394] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 976,
        [anon_sym_end] = 978,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [395] = {
        [sym__terminator] = 314,
        [aux_sym_program_repeat1] = 314,
        [ts_builtin_sym_end] = 314,
        [anon_sym_if] = 314,
        [anon_sym_while] = 314,
        [anon_sym_unless] = 314,
        [anon_sym_until] = 314,
        [sym_comment] = 46,
        [sym__line_break] = 314,
        [anon_sym_SEMI] = 314,
    },
    [396] = {
        [anon_sym_end] = 980,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [397] = {
        [sym__terminator] = 354,
        [aux_sym_program_repeat1] = 354,
        [ts_builtin_sym_end] = 354,
        [anon_sym_if] = 354,
        [anon_sym_while] = 354,
        [anon_sym_unless] = 354,
        [anon_sym_until] = 354,
        [sym_comment] = 46,
        [sym__line_break] = 354,
        [anon_sym_SEMI] = 354,
    },
    [398] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [ts_builtin_sym_end] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [sym_comment] = 46,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [399] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [ts_builtin_sym_end] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 46,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [400] = {
        [sym__terminator] = 982,
        [anon_sym_LT] = 984,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [401] = {
        [sym__statement] = 986,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 988,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [402] = {
        [sym_identifier] = 990,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [403] = {
        [sym__terminator] = 992,
        [aux_sym_class_declaration_repeat1] = 994,
        [anon_sym_COLON_COLON] = 382,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [404] = {
        [sym__statement] = 996,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 998,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [405] = {
        [sym__terminator] = 1000,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [406] = {
        [sym__statement] = 1002,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1004,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [407] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1006,
        [anon_sym_end] = 1008,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [408] = {
        [sym__terminator] = 406,
        [aux_sym_program_repeat1] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_if] = 406,
        [anon_sym_while] = 406,
        [anon_sym_unless] = 406,
        [anon_sym_until] = 406,
        [sym_comment] = 46,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [409] = {
        [anon_sym_end] = 1010,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [410] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [ts_builtin_sym_end] = 410,
        [anon_sym_if] = 410,
        [anon_sym_while] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_until] = 410,
        [sym_comment] = 46,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [411] = {
        [sym__terminator] = 412,
        [aux_sym_program_repeat1] = 412,
        [ts_builtin_sym_end] = 412,
        [anon_sym_if] = 412,
        [anon_sym_while] = 412,
        [anon_sym_unless] = 412,
        [anon_sym_until] = 412,
        [sym_comment] = 46,
        [sym__line_break] = 412,
        [anon_sym_SEMI] = 412,
    },
    [412] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1012,
        [anon_sym_end] = 1004,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [413] = {
        [sym__terminator] = 416,
        [aux_sym_program_repeat1] = 416,
        [ts_builtin_sym_end] = 416,
        [anon_sym_if] = 416,
        [anon_sym_while] = 416,
        [anon_sym_unless] = 416,
        [anon_sym_until] = 416,
        [sym_comment] = 46,
        [sym__line_break] = 416,
        [anon_sym_SEMI] = 416,
    },
    [414] = {
        [anon_sym_end] = 1008,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [415] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1014,
        [anon_sym_end] = 1016,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [416] = {
        [sym__terminator] = 422,
        [aux_sym_program_repeat1] = 422,
        [ts_builtin_sym_end] = 422,
        [anon_sym_if] = 422,
        [anon_sym_while] = 422,
        [anon_sym_unless] = 422,
        [anon_sym_until] = 422,
        [sym_comment] = 46,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [417] = {
        [anon_sym_end] = 998,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [418] = {
        [sym__terminator] = 424,
        [aux_sym_program_repeat1] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_if] = 424,
        [anon_sym_while] = 424,
        [anon_sym_unless] = 424,
        [anon_sym_until] = 424,
        [sym_comment] = 46,
        [sym__line_break] = 424,
        [anon_sym_SEMI] = 424,
    },
    [419] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 1018,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 1020,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [420] = {
        [sym__terminator] = 244,
        [aux_sym_program_repeat1] = 244,
        [ts_builtin_sym_end] = 244,
        [anon_sym_if] = 244,
        [anon_sym_while] = 244,
        [anon_sym_unless] = 244,
        [anon_sym_until] = 244,
        [anon_sym_COLON_COLON] = 244,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 46,
        [sym__line_break] = 244,
        [anon_sym_SEMI] = 244,
    },
    [421] = {
        [anon_sym_RPAREN] = 1022,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [422] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [ts_builtin_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 46,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [423] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [sym_comment] = 46,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [424] = {
        [sym_argument_list] = 1024,
        [sym__terminator] = 1026,
        [anon_sym_LPAREN] = 1028,
        [anon_sym_STAR] = 448,
        [anon_sym_AMP] = 448,
        [sym_identifier] = 450,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [425] = {
        [sym__terminator] = 1030,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [426] = {
        [sym__statement] = 1032,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1034,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [427] = {
        [sym_argument_list] = 1036,
        [anon_sym_RPAREN] = 1030,
        [anon_sym_STAR] = 462,
        [anon_sym_AMP] = 462,
        [sym_identifier] = 464,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [428] = {
        [anon_sym_RPAREN] = 1038,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [429] = {
        [sym__statement] = 1040,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1042,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [430] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1044,
        [anon_sym_end] = 1046,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [431] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [ts_builtin_sym_end] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [sym_comment] = 46,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [432] = {
        [anon_sym_end] = 1048,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [433] = {
        [sym__terminator] = 528,
        [aux_sym_program_repeat1] = 528,
        [ts_builtin_sym_end] = 528,
        [anon_sym_if] = 528,
        [anon_sym_while] = 528,
        [anon_sym_unless] = 528,
        [anon_sym_until] = 528,
        [sym_comment] = 46,
        [sym__line_break] = 528,
        [anon_sym_SEMI] = 528,
    },
    [434] = {
        [sym__terminator] = 530,
        [aux_sym_program_repeat1] = 530,
        [ts_builtin_sym_end] = 530,
        [anon_sym_if] = 530,
        [anon_sym_while] = 530,
        [anon_sym_unless] = 530,
        [anon_sym_until] = 530,
        [sym_comment] = 46,
        [sym__line_break] = 530,
        [anon_sym_SEMI] = 530,
    },
    [435] = {
        [sym__statement] = 1050,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1046,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [436] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1052,
        [anon_sym_end] = 1048,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [437] = {
        [anon_sym_end] = 1054,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [438] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 538,
        [ts_builtin_sym_end] = 538,
        [anon_sym_if] = 538,
        [anon_sym_while] = 538,
        [anon_sym_unless] = 538,
        [anon_sym_until] = 538,
        [sym_comment] = 46,
        [sym__line_break] = 538,
        [anon_sym_SEMI] = 538,
    },
    [439] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1056,
        [anon_sym_end] = 1042,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [440] = {
        [sym__terminator] = 542,
        [aux_sym_program_repeat1] = 542,
        [ts_builtin_sym_end] = 542,
        [anon_sym_if] = 542,
        [anon_sym_while] = 542,
        [anon_sym_unless] = 542,
        [anon_sym_until] = 542,
        [sym_comment] = 46,
        [sym__line_break] = 542,
        [anon_sym_SEMI] = 542,
    },
    [441] = {
        [anon_sym_end] = 1046,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [442] = {
        [sym__statement_block] = 1058,
        [sym__do_block] = 1060,
        [sym__terminator] = 1062,
        [anon_sym_do] = 1064,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [443] = {
        [sym__terminator] = 638,
        [aux_sym_program_repeat1] = 638,
        [ts_builtin_sym_end] = 638,
        [anon_sym_if] = 638,
        [anon_sym_while] = 638,
        [anon_sym_unless] = 638,
        [anon_sym_until] = 638,
        [sym_comment] = 46,
        [sym__line_break] = 638,
        [anon_sym_SEMI] = 638,
    },
    [444] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [ts_builtin_sym_end] = 640,
        [anon_sym_if] = 640,
        [anon_sym_while] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_until] = 640,
        [sym_comment] = 46,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [445] = {
        [sym__statement] = 1066,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1068,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [446] = {
        [sym__statement] = 1070,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1072,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [447] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1074,
        [anon_sym_end] = 1076,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [448] = {
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [ts_builtin_sym_end] = 654,
        [anon_sym_if] = 654,
        [anon_sym_while] = 654,
        [anon_sym_unless] = 654,
        [anon_sym_until] = 654,
        [sym_comment] = 46,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [449] = {
        [anon_sym_end] = 1078,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [450] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [ts_builtin_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [sym_comment] = 46,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [451] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [ts_builtin_sym_end] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [sym_comment] = 46,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [452] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1080,
        [anon_sym_end] = 1082,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [453] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [ts_builtin_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [sym_comment] = 46,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [454] = {
        [anon_sym_end] = 1084,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [455] = {
        [sym__terminator] = 670,
        [aux_sym_program_repeat1] = 670,
        [ts_builtin_sym_end] = 670,
        [anon_sym_if] = 670,
        [anon_sym_while] = 670,
        [anon_sym_unless] = 670,
        [anon_sym_until] = 670,
        [sym_comment] = 46,
        [sym__line_break] = 670,
        [anon_sym_SEMI] = 670,
    },
    [456] = {
        [sym__terminator] = 672,
        [aux_sym_program_repeat1] = 672,
        [ts_builtin_sym_end] = 672,
        [anon_sym_if] = 672,
        [anon_sym_while] = 672,
        [anon_sym_unless] = 672,
        [anon_sym_until] = 672,
        [sym_comment] = 46,
        [sym__line_break] = 672,
        [anon_sym_SEMI] = 672,
    },
    [457] = {
        [sym__then_block] = 1086,
        [sym__terminator] = 1088,
        [anon_sym_then] = 1088,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [458] = {
        [sym__else_block] = 1090,
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [ts_builtin_sym_end] = 708,
        [anon_sym_if] = 708,
        [anon_sym_while] = 708,
        [anon_sym_unless] = 708,
        [anon_sym_until] = 708,
        [anon_sym_else] = 1092,
        [sym_comment] = 46,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [459] = {
        [sym__statement] = 1094,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1096,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [460] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1098,
        [anon_sym_end] = 1100,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [461] = {
        [sym__else_block] = 720,
        [sym__terminator] = 720,
        [aux_sym_program_repeat1] = 720,
        [ts_builtin_sym_end] = 720,
        [anon_sym_if] = 720,
        [anon_sym_while] = 720,
        [anon_sym_unless] = 720,
        [anon_sym_until] = 720,
        [anon_sym_else] = 720,
        [sym_comment] = 46,
        [sym__line_break] = 720,
        [anon_sym_SEMI] = 720,
    },
    [462] = {
        [anon_sym_end] = 1102,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [463] = {
        [sym__else_block] = 724,
        [sym__terminator] = 724,
        [aux_sym_program_repeat1] = 724,
        [ts_builtin_sym_end] = 724,
        [anon_sym_if] = 724,
        [anon_sym_while] = 724,
        [anon_sym_unless] = 724,
        [anon_sym_until] = 724,
        [anon_sym_else] = 724,
        [sym_comment] = 46,
        [sym__line_break] = 724,
        [anon_sym_SEMI] = 724,
    },
    [464] = {
        [sym__else_block] = 726,
        [sym__terminator] = 726,
        [aux_sym_program_repeat1] = 726,
        [ts_builtin_sym_end] = 726,
        [anon_sym_if] = 726,
        [anon_sym_while] = 726,
        [anon_sym_unless] = 726,
        [anon_sym_until] = 726,
        [anon_sym_else] = 726,
        [sym_comment] = 46,
        [sym__line_break] = 726,
        [anon_sym_SEMI] = 726,
    },
    [465] = {
        [sym__terminator] = 728,
        [aux_sym_program_repeat1] = 728,
        [ts_builtin_sym_end] = 728,
        [anon_sym_if] = 728,
        [anon_sym_while] = 728,
        [anon_sym_unless] = 728,
        [anon_sym_until] = 728,
        [sym_comment] = 46,
        [sym__line_break] = 728,
        [anon_sym_SEMI] = 728,
    },
    [466] = {
        [sym__statement] = 1104,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1106,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [467] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1108,
        [anon_sym_end] = 1110,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [468] = {
        [sym__terminator] = 738,
        [aux_sym_program_repeat1] = 738,
        [ts_builtin_sym_end] = 738,
        [anon_sym_if] = 738,
        [anon_sym_while] = 738,
        [anon_sym_unless] = 738,
        [anon_sym_until] = 738,
        [sym_comment] = 46,
        [sym__line_break] = 738,
        [anon_sym_SEMI] = 738,
    },
    [469] = {
        [anon_sym_end] = 1112,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [470] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [ts_builtin_sym_end] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [sym_comment] = 46,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [471] = {
        [sym__terminator] = 744,
        [aux_sym_program_repeat1] = 744,
        [ts_builtin_sym_end] = 744,
        [anon_sym_if] = 744,
        [anon_sym_while] = 744,
        [anon_sym_unless] = 744,
        [anon_sym_until] = 744,
        [sym_comment] = 46,
        [sym__line_break] = 744,
        [anon_sym_SEMI] = 744,
    },
    [472] = {
        [sym__statement_block] = 1114,
        [sym__do_block] = 1060,
        [sym__terminator] = 1062,
        [anon_sym_do] = 1064,
        [sym_comment] = 46,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 256,
    },
    [473] = {
        [sym__terminator] = 748,
        [aux_sym_program_repeat1] = 748,
        [ts_builtin_sym_end] = 748,
        [anon_sym_if] = 748,
        [anon_sym_while] = 748,
        [anon_sym_unless] = 748,
        [anon_sym_until] = 748,
        [sym_comment] = 46,
        [sym__line_break] = 748,
        [anon_sym_SEMI] = 748,
    },
    [474] = {
        [sym__function_name] = 1116,
        [anon_sym_PIPE] = 82,
        [anon_sym_STAR] = 82,
        [anon_sym_AMP] = 82,
        [anon_sym_LT] = 82,
        [sym_identifier] = 82,
        [sym_comment] = 46,
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
        [sym__line_break] = 46,
    },
    [475] = {
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [ts_builtin_sym_end] = 358,
        [anon_sym_if] = 358,
        [anon_sym_while] = 358,
        [anon_sym_unless] = 358,
        [anon_sym_until] = 358,
        [sym_comment] = 46,
        [sym__line_break] = 358,
        [anon_sym_SEMI] = 358,
    },
    [476] = {
        [sym__terminator] = 452,
        [aux_sym_program_repeat1] = 452,
        [ts_builtin_sym_end] = 452,
        [anon_sym_if] = 452,
        [anon_sym_while] = 452,
        [anon_sym_unless] = 452,
        [anon_sym_until] = 452,
        [sym_comment] = 46,
        [sym__line_break] = 452,
        [anon_sym_SEMI] = 452,
    },
    [477] = {
        [sym__terminator] = 750,
        [aux_sym_program_repeat1] = 750,
        [ts_builtin_sym_end] = 750,
        [anon_sym_if] = 750,
        [anon_sym_while] = 750,
        [anon_sym_unless] = 750,
        [anon_sym_until] = 750,
        [sym_comment] = 46,
        [sym__line_break] = 750,
        [anon_sym_SEMI] = 750,
    },
    [478] = {
        [sym_identifier] = 1118,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [479] = {
        [sym__argument] = 1120,
        [sym__primary] = 574,
        [sym_scope_resolution_expression] = 576,
        [sym_subscript_expression] = 576,
        [sym__variable] = 576,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_RBRACK] = 1122,
        [anon_sym_nil] = 584,
        [anon_sym_self] = 584,
        [sym_identifier] = 584,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [480] = {
        [aux_sym__call_arguments_repeat1] = 1124,
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACK] = 1126,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [481] = {
        [sym__terminator] = 602,
        [aux_sym_program_repeat1] = 602,
        [ts_builtin_sym_end] = 602,
        [anon_sym_if] = 602,
        [anon_sym_while] = 602,
        [anon_sym_unless] = 602,
        [anon_sym_until] = 602,
        [anon_sym_COLON_COLON] = 602,
        [anon_sym_LBRACK] = 602,
        [sym_comment] = 46,
        [sym__line_break] = 602,
        [anon_sym_SEMI] = 602,
    },
    [482] = {
        [anon_sym_RBRACK] = 1128,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [483] = {
        [sym__terminator] = 624,
        [aux_sym_program_repeat1] = 624,
        [ts_builtin_sym_end] = 624,
        [anon_sym_if] = 624,
        [anon_sym_while] = 624,
        [anon_sym_unless] = 624,
        [anon_sym_until] = 624,
        [anon_sym_COLON_COLON] = 624,
        [anon_sym_LBRACK] = 624,
        [sym_comment] = 46,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 624,
    },
    [484] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [ts_builtin_sym_end] = 632,
        [anon_sym_if] = 632,
        [anon_sym_while] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_until] = 632,
        [anon_sym_COLON_COLON] = 632,
        [anon_sym_LBRACK] = 632,
        [sym_comment] = 46,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [485] = {
        [sym__terminator] = 634,
        [aux_sym_program_repeat1] = 634,
        [ts_builtin_sym_end] = 634,
        [anon_sym_if] = 634,
        [anon_sym_while] = 634,
        [anon_sym_unless] = 634,
        [anon_sym_until] = 634,
        [anon_sym_COLON_COLON] = 634,
        [anon_sym_LBRACK] = 634,
        [sym_comment] = 46,
        [sym__line_break] = 634,
        [anon_sym_SEMI] = 634,
    },
    [486] = {
        [sym__statement] = 1130,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_PIPE] = 1132,
        [anon_sym_end] = 1116,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [487] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1134,
        [anon_sym_end] = 1136,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [488] = {
        [sym__statement] = 1138,
        [sym__declaration] = 260,
        [sym_method_declaration] = 262,
        [sym_class_declaration] = 262,
        [sym_module_declaration] = 262,
        [sym_while_statement] = 260,
        [sym_until_statement] = 260,
        [sym_unless_statement] = 260,
        [sym__call] = 264,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 260,
        [sym__argument] = 266,
        [sym__primary] = 268,
        [sym_scope_resolution_expression] = 270,
        [sym_subscript_expression] = 270,
        [sym__variable] = 270,
        [anon_sym_end] = 1136,
        [anon_sym_undef] = 274,
        [anon_sym_alias] = 276,
        [anon_sym_while] = 278,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 282,
        [anon_sym_def] = 284,
        [anon_sym_LPAREN] = 286,
        [anon_sym_class] = 288,
        [anon_sym_COLON_COLON] = 290,
        [anon_sym_module] = 292,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 294,
        [anon_sym_self] = 294,
        [sym_identifier] = 294,
        [sym_comment] = 46,
        [sym_symbol] = 266,
        [sym__line_break] = 46,
    },
    [489] = {
        [sym__terminator] = 300,
        [aux_sym_program_repeat1] = 1140,
        [anon_sym_end] = 1142,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [490] = {
        [sym__terminator] = 778,
        [aux_sym_program_repeat1] = 778,
        [ts_builtin_sym_end] = 778,
        [anon_sym_if] = 778,
        [anon_sym_while] = 778,
        [anon_sym_unless] = 778,
        [anon_sym_until] = 778,
        [sym_comment] = 46,
        [sym__line_break] = 778,
        [anon_sym_SEMI] = 778,
    },
    [491] = {
        [anon_sym_end] = 1144,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [492] = {
        [sym__terminator] = 782,
        [aux_sym_program_repeat1] = 782,
        [ts_builtin_sym_end] = 782,
        [anon_sym_if] = 782,
        [anon_sym_while] = 782,
        [anon_sym_unless] = 782,
        [anon_sym_until] = 782,
        [sym_comment] = 46,
        [sym__line_break] = 782,
        [anon_sym_SEMI] = 782,
    },
    [493] = {
        [sym__terminator] = 784,
        [aux_sym_program_repeat1] = 784,
        [ts_builtin_sym_end] = 784,
        [anon_sym_if] = 784,
        [anon_sym_while] = 784,
        [anon_sym_unless] = 784,
        [anon_sym_until] = 784,
        [sym_comment] = 46,
        [sym__line_break] = 784,
        [anon_sym_SEMI] = 784,
    },
    [494] = {
        [anon_sym_end] = 1142,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [495] = {
        [sym__statement] = 1146,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
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
        [anon_sym_while] = 26,
        [anon_sym_unless] = 28,
        [anon_sym_until] = 30,
        [anon_sym_def] = 32,
        [anon_sym_LPAREN] = 34,
        [anon_sym_class] = 36,
        [anon_sym_COLON_COLON] = 38,
        [anon_sym_module] = 40,
        [anon_sym_super] = 42,
        [anon_sym_nil] = 44,
        [anon_sym_self] = 44,
        [sym_identifier] = 44,
        [sym_comment] = 46,
        [sym_symbol] = 14,
        [sym__line_break] = 46,
    },
    [496] = {
        [ts_builtin_sym_end] = 1148,
        [sym_comment] = 46,
        [sym__line_break] = 46,
    },
    [497] = {
        [sym__expression] = 1116,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 34,
        [anon_sym_COLON_COLON] = 38,
        [anon_sym_nil] = 44,
        [anon_sym_self] = 44,
        [sym_identifier] = 44,
        [sym_comment] = 46,
        [sym_symbol] = 14,
        [sym__line_break] = 46,
    },
    [498] = {
        [sym__terminator] = 50,
        [aux_sym_program_repeat1] = 1150,
        [ts_builtin_sym_end] = 364,
        [anon_sym_if] = 56,
        [anon_sym_while] = 56,
        [anon_sym_unless] = 56,
        [anon_sym_until] = 56,
        [sym_comment] = 46,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 60,
    },
    [499] = {
        [ts_builtin_sym_end] = 366,
        [sym_comment] = 46,
        [sym__line_break] = 46,
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
    [46] = {.count = 1}, SHIFT_EXTRA(),
    [48] = {.count = 1}, ACCEPT_INPUT(),
    [50] = {.count = 1}, SHIFT(495, 0),
    [52] = {.count = 1}, SHIFT(496, 0),
    [54] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [56] = {.count = 1}, SHIFT(497, 0),
    [58] = {.count = 1}, SHIFT(82, 0),
    [60] = {.count = 1}, SHIFT(83, 0),
    [62] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [66] = {.count = 1}, SHIFT(486, 0),
    [68] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [74] = {.count = 1}, SHIFT(478, 0),
    [76] = {.count = 1}, SHIFT(479, 0),
    [78] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [80] = {.count = 1}, SHIFT(477, 0),
    [82] = {.count = 1}, SHIFT(476, 0),
    [84] = {.count = 1}, SHIFT(474, 0),
    [86] = {.count = 1}, SHIFT(259, 0),
    [88] = {.count = 1}, SHIFT(472, 0),
    [90] = {.count = 1}, SHIFT(163, 0),
    [92] = {.count = 1}, SHIFT(164, 0),
    [94] = {.count = 1}, SHIFT(165, 0),
    [96] = {.count = 1}, SHIFT(166, 0),
    [98] = {.count = 1}, SHIFT(167, 0),
    [100] = {.count = 1}, SHIFT(168, 0),
    [102] = {.count = 1}, SHIFT(169, 0),
    [104] = {.count = 1}, SHIFT(457, 0),
    [106] = {.count = 1}, SHIFT(221, 0),
    [108] = {.count = 1}, SHIFT(222, 0),
    [110] = {.count = 1}, SHIFT(223, 0),
    [112] = {.count = 1}, SHIFT(224, 0),
    [114] = {.count = 1}, SHIFT(225, 0),
    [116] = {.count = 1}, SHIFT(226, 0),
    [118] = {.count = 1}, SHIFT(227, 0),
    [120] = {.count = 1}, SHIFT(442, 0),
    [122] = {.count = 1}, SHIFT(424, 0),
    [124] = {.count = 1}, SHIFT(122, 0),
    [126] = {.count = 1}, SHIFT(419, 0),
    [128] = {.count = 1}, SHIFT(33, 0),
    [130] = {.count = 1}, SHIFT(34, 0),
    [132] = {.count = 1}, SHIFT(35, 0),
    [134] = {.count = 1}, SHIFT(36, 0),
    [136] = {.count = 1}, SHIFT(37, 0),
    [138] = {.count = 1}, SHIFT(38, 0),
    [140] = {.count = 1}, SHIFT(39, 0),
    [142] = {.count = 1}, SHIFT(40, 0),
    [144] = {.count = 1}, SHIFT(41, 0),
    [146] = {.count = 1}, SHIFT(42, 0),
    [148] = {.count = 1}, SHIFT(43, 0),
    [150] = {.count = 1}, SHIFT(44, 0),
    [152] = {.count = 1}, SHIFT(45, 0),
    [154] = {.count = 1}, SHIFT(420, 0),
    [156] = {.count = 1}, SHIFT(47, 0),
    [158] = {.count = 1}, SHIFT(48, 0),
    [160] = {.count = 1}, SHIFT(49, 0),
    [162] = {.count = 1}, SHIFT(50, 0),
    [164] = {.count = 1}, SHIFT(400, 0),
    [166] = {.count = 1}, SHIFT(399, 0),
    [168] = {.count = 1}, SHIFT(392, 0),
    [170] = {.count = 1}, SHIFT(22, 0),
    [172] = {.count = 1}, SHIFT(23, 0),
    [174] = {.count = 1}, SHIFT(24, 0),
    [176] = {.count = 1}, SHIFT(25, 0),
    [178] = {.count = 1}, SHIFT(26, 0),
    [180] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [182] = {.count = 1}, SHIFT(27, 0),
    [184] = {.count = 1}, SHIFT(28, 0),
    [186] = {.count = 1}, SHIFT(29, 0),
    [188] = {.count = 1}, SHIFT(30, 0),
    [190] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [192] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [194] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [196] = {.count = 1}, SHIFT(388, 0),
    [198] = {.count = 1}, SHIFT(389, 0),
    [200] = {.count = 1}, SHIFT(380, 0),
    [202] = {.count = 1}, SHIFT(381, 0),
    [204] = {.count = 1}, SHIFT(32, 0),
    [206] = {.count = 1}, SHIFT(46, 0),
    [208] = {.count = 1}, SHIFT(31, 0),
    [210] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [212] = {.count = 1}, SHIFT(113, 0),
    [214] = {.count = 1}, SHIFT(377, 0),
    [216] = {.count = 1}, SHIFT(115, 0),
    [218] = {.count = 1}, SHIFT(378, 0),
    [220] = {.count = 1}, SHIFT(368, 0),
    [222] = {.count = 1}, SHIFT(360, 0),
    [224] = {.count = 1}, SHIFT(361, 0),
    [226] = {.count = 1}, SHIFT(359, 0),
    [228] = {.count = 1}, SHIFT(358, 0),
    [230] = {.count = 1}, SHIFT(357, 0),
    [232] = {.count = 1}, SHIFT(355, 0),
    [234] = {.count = 1}, SHIFT(340, 0),
    [236] = {.count = 1}, SHIFT(325, 0),
    [238] = {.count = 1}, SHIFT(307, 0),
    [240] = {.count = 1}, SHIFT(302, 0),
    [242] = {.count = 1}, SHIFT(303, 0),
    [244] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [246] = {.count = 1}, SHIFT(283, 0),
    [248] = {.count = 1}, SHIFT(282, 0),
    [250] = {.count = 1}, SHIFT(51, 0),
    [252] = {.count = 1}, SHIFT(52, 0),
    [254] = {.count = 1}, SHIFT(53, 0),
    [256] = {.count = 1}, SHIFT(54, 0),
    [258] = {.count = 1}, SHIFT(55, 0),
    [260] = {.count = 1}, SHIFT(56, 0),
    [262] = {.count = 1}, SHIFT(57, 0),
    [264] = {.count = 1}, SHIFT(58, 0),
    [266] = {.count = 1}, SHIFT(59, 0),
    [268] = {.count = 1}, SHIFT(60, 0),
    [270] = {.count = 1}, SHIFT(61, 0),
    [272] = {.count = 1}, SHIFT(62, 0),
    [274] = {.count = 1}, SHIFT(63, 0),
    [276] = {.count = 1}, SHIFT(64, 0),
    [278] = {.count = 1}, SHIFT(65, 0),
    [280] = {.count = 1}, SHIFT(66, 0),
    [282] = {.count = 1}, SHIFT(67, 0),
    [284] = {.count = 1}, SHIFT(68, 0),
    [286] = {.count = 1}, SHIFT(69, 0),
    [288] = {.count = 1}, SHIFT(70, 0),
    [290] = {.count = 1}, SHIFT(71, 0),
    [292] = {.count = 1}, SHIFT(72, 0),
    [294] = {.count = 1}, SHIFT(73, 0),
    [296] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [298] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [300] = {.count = 1}, SHIFT(78, 0),
    [302] = {.count = 1}, SHIFT(279, 0),
    [304] = {.count = 1}, SHIFT(280, 0),
    [306] = {.count = 1}, SHIFT(81, 0),
    [308] = {.count = 1}, SHIFT(270, 0),
    [310] = {.count = 1}, SHIFT(262, 0),
    [312] = {.count = 1}, SHIFT(263, 0),
    [314] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [316] = {.count = 1}, SHIFT(261, 0),
    [318] = {.count = 1}, SHIFT(260, 0),
    [320] = {.count = 1}, SHIFT(258, 0),
    [322] = {.count = 1}, SHIFT(256, 0),
    [324] = {.count = 1}, SHIFT(220, 0),
    [326] = {.count = 1}, SHIFT(162, 0),
    [328] = {.count = 1}, SHIFT(121, 0),
    [330] = {.count = 1}, SHIFT(111, 0),
    [332] = {.count = 1}, SHIFT(112, 0),
    [334] = {.count = 1}, SHIFT(89, 0),
    [336] = {.count = 1}, SHIFT(88, 0),
    [338] = {.count = 1}, SHIFT(74, 0),
    [340] = {.count = 1}, SHIFT(75, 0),
    [342] = {.count = 1}, SHIFT(76, 0),
    [344] = {.count = 1}, SHIFT(77, 0),
    [346] = {.count = 1}, SHIFT(79, 0),
    [348] = {.count = 1}, SHIFT(80, 0),
    [350] = {.count = 1}, SHIFT(86, 0),
    [352] = {.count = 1}, SHIFT(85, 0),
    [354] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [356] = {.count = 1}, SHIFT(84, 0),
    [358] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [360] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [362] = {.count = 1}, SHIFT(87, 0),
    [364] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [366] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [368] = {.count = 1}, SHIFT(90, 0),
    [370] = {.count = 1}, SHIFT(91, 0),
    [372] = {.count = 1}, SHIFT(107, 0),
    [374] = {.count = 1}, SHIFT(108, 0),
    [376] = {.count = 1}, SHIFT(92, 0),
    [378] = {.count = 1}, SHIFT(93, 0),
    [380] = {.count = 1}, SHIFT(94, 0),
    [382] = {.count = 1}, SHIFT(95, 0),
    [384] = {.count = 1}, SHIFT(104, 0),
    [386] = {.count = 1}, SHIFT(105, 0),
    [388] = {.count = 1}, SHIFT(98, 0),
    [390] = {.count = 1}, SHIFT(96, 0),
    [392] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [394] = {.count = 1}, SHIFT(97, 0),
    [396] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [398] = {.count = 1}, SHIFT(99, 0),
    [400] = {.count = 1}, SHIFT(100, 0),
    [402] = {.count = 1}, SHIFT(101, 0),
    [404] = {.count = 1}, SHIFT(102, 0),
    [406] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [408] = {.count = 1}, SHIFT(103, 0),
    [410] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [412] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [414] = {.count = 1}, SHIFT(106, 0),
    [416] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [418] = {.count = 1}, SHIFT(109, 0),
    [420] = {.count = 1}, SHIFT(110, 0),
    [422] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [424] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [426] = {.count = 1}, SHIFT(114, 0),
    [428] = {.count = 1}, SHIFT(116, 0),
    [430] = {.count = 1}, SHIFT(119, 0),
    [432] = {.count = 1}, SHIFT(118, 0),
    [434] = {.count = 1}, SHIFT(117, 0),
    [436] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [438] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [440] = {.count = 1}, SHIFT(120, 0),
    [442] = {.count = 1}, SHIFT(123, 0),
    [444] = {.count = 1}, SHIFT(124, 0),
    [446] = {.count = 1}, SHIFT(125, 0),
    [448] = {.count = 1}, SHIFT(126, 0),
    [450] = {.count = 1}, SHIFT(127, 0),
    [452] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [454] = {.count = 1}, SHIFT(138, 0),
    [456] = {.count = 1}, SHIFT(159, 0),
    [458] = {.count = 1}, SHIFT(160, 0),
    [460] = {.count = 1}, SHIFT(137, 0),
    [462] = {.count = 1}, SHIFT(139, 0),
    [464] = {.count = 1}, SHIFT(140, 0),
    [466] = {.count = 1}, SHIFT(135, 0),
    [468] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [470] = {.count = 1}, SHIFT(128, 0),
    [472] = {.count = 1}, SHIFT(129, 0),
    [474] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [476] = {.count = 1}, SHIFT(130, 0),
    [478] = {.count = 1}, SHIFT(131, 0),
    [480] = {.count = 1}, SHIFT(133, 0),
    [482] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [484] = {.count = 1}, SHIFT(132, 0),
    [486] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [488] = {.count = 1}, SHIFT(134, 0),
    [490] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [492] = {.count = 1}, SHIFT(136, 0),
    [494] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [496] = {.count = 1}, SHIFT(155, 0),
    [498] = {.count = 1}, SHIFT(150, 0),
    [500] = {.count = 1}, SHIFT(151, 0),
    [502] = {.count = 1}, SHIFT(148, 0),
    [504] = {.count = 1}, SHIFT(141, 0),
    [506] = {.count = 1}, SHIFT(142, 0),
    [508] = {.count = 1}, SHIFT(143, 0),
    [510] = {.count = 1}, SHIFT(144, 0),
    [512] = {.count = 1}, SHIFT(146, 0),
    [514] = {.count = 1}, SHIFT(145, 0),
    [516] = {.count = 1}, SHIFT(147, 0),
    [518] = {.count = 1}, SHIFT(149, 0),
    [520] = {.count = 1}, SHIFT(152, 0),
    [522] = {.count = 1}, SHIFT(153, 0),
    [524] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [526] = {.count = 1}, SHIFT(154, 0),
    [528] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [530] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [532] = {.count = 1}, SHIFT(156, 0),
    [534] = {.count = 1}, SHIFT(157, 0),
    [536] = {.count = 1}, SHIFT(158, 0),
    [538] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [540] = {.count = 1}, SHIFT(161, 0),
    [542] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [544] = {.count = 1}, SHIFT(206, 0),
    [546] = {.count = 1}, SHIFT(207, 0),
    [548] = {.count = 1}, SHIFT(208, 0),
    [550] = {.count = 1}, SHIFT(209, 0),
    [552] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [554] = {.count = 1}, SHIFT(176, 0),
    [556] = {.count = 1}, SHIFT(177, 0),
    [558] = {.count = 1}, SHIFT(171, 0),
    [560] = {.count = 1}, SHIFT(172, 0),
    [562] = {.count = 1}, SHIFT(170, 0),
    [564] = {.count = 1}, SHIFT(173, 0),
    [566] = {.count = 1}, SHIFT(174, 0),
    [568] = {.count = 1}, SHIFT(175, 0),
    [570] = {.count = 1}, SHIFT(205, 0),
    [572] = {.count = 1}, SHIFT(178, 0),
    [574] = {.count = 1}, SHIFT(179, 0),
    [576] = {.count = 1}, SHIFT(180, 0),
    [578] = {.count = 1}, SHIFT(181, 0),
    [580] = {.count = 1}, SHIFT(182, 0),
    [582] = {.count = 1}, SHIFT(183, 0),
    [584] = {.count = 1}, SHIFT(184, 0),
    [586] = {.count = 1}, SHIFT(202, 0),
    [588] = {.count = 1}, SHIFT(196, 0),
    [590] = {.count = 1}, SHIFT(203, 0),
    [592] = {.count = 1}, SHIFT(191, 0),
    [594] = {.count = 1}, SHIFT(192, 0),
    [596] = {.count = 1}, SHIFT(186, 0),
    [598] = {.count = 1}, SHIFT(187, 0),
    [600] = {.count = 1}, SHIFT(185, 0),
    [602] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [604] = {.count = 1}, SHIFT(188, 0),
    [606] = {.count = 1}, SHIFT(189, 0),
    [608] = {.count = 1}, SHIFT(190, 0),
    [610] = {.count = 1}, SHIFT(201, 0),
    [612] = {.count = 1}, SHIFT(193, 0),
    [614] = {.count = 1}, SHIFT(194, 0),
    [616] = {.count = 1}, SHIFT(195, 0),
    [618] = {.count = 1}, SHIFT(197, 0),
    [620] = {.count = 1}, SHIFT(200, 0),
    [622] = {.count = 1}, SHIFT(198, 0),
    [624] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [626] = {.count = 1}, SHIFT(199, 0),
    [628] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [630] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [632] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [634] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [636] = {.count = 1}, SHIFT(204, 0),
    [638] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [640] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [642] = {.count = 1}, SHIFT(215, 0),
    [644] = {.count = 1}, SHIFT(216, 0),
    [646] = {.count = 1}, SHIFT(210, 0),
    [648] = {.count = 1}, SHIFT(211, 0),
    [650] = {.count = 1}, SHIFT(212, 0),
    [652] = {.count = 1}, SHIFT(213, 0),
    [654] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [656] = {.count = 1}, SHIFT(214, 0),
    [658] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [660] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [662] = {.count = 1}, SHIFT(217, 0),
    [664] = {.count = 1}, SHIFT(218, 0),
    [666] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [668] = {.count = 1}, SHIFT(219, 0),
    [670] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [672] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [674] = {.count = 1}, SHIFT(242, 0),
    [676] = {.count = 1}, SHIFT(243, 0),
    [678] = {.count = 1}, SHIFT(234, 0),
    [680] = {.count = 1}, SHIFT(235, 0),
    [682] = {.count = 1}, SHIFT(229, 0),
    [684] = {.count = 1}, SHIFT(230, 0),
    [686] = {.count = 1}, SHIFT(228, 0),
    [688] = {.count = 1}, SHIFT(231, 0),
    [690] = {.count = 1}, SHIFT(232, 0),
    [692] = {.count = 1}, SHIFT(233, 0),
    [694] = {.count = 1}, SHIFT(241, 0),
    [696] = {.count = 1}, SHIFT(236, 0),
    [698] = {.count = 1}, SHIFT(237, 0),
    [700] = {.count = 1}, SHIFT(238, 0),
    [702] = {.count = 1}, SHIFT(239, 0),
    [704] = {.count = 1}, SHIFT(240, 0),
    [706] = {.count = 1}, SHIFT(249, 0),
    [708] = {.count = 1}, REDUCE(sym_unless_statement, 3, 0),
    [710] = {.count = 1}, SHIFT(250, 0),
    [712] = {.count = 1}, SHIFT(244, 0),
    [714] = {.count = 1}, SHIFT(245, 0),
    [716] = {.count = 1}, SHIFT(246, 0),
    [718] = {.count = 1}, SHIFT(247, 0),
    [720] = {.count = 1}, REDUCE(sym__then_block, 2, 0),
    [722] = {.count = 1}, SHIFT(248, 0),
    [724] = {.count = 1}, REDUCE(sym__then_block, 3, 0),
    [726] = {.count = 1}, REDUCE(sym__then_block, 4, 0),
    [728] = {.count = 1}, REDUCE(sym_unless_statement, 4, 0),
    [730] = {.count = 1}, SHIFT(251, 0),
    [732] = {.count = 1}, SHIFT(252, 0),
    [734] = {.count = 1}, SHIFT(253, 0),
    [736] = {.count = 1}, SHIFT(254, 0),
    [738] = {.count = 1}, REDUCE(sym__else_block, 2, 0),
    [740] = {.count = 1}, SHIFT(255, 0),
    [742] = {.count = 1}, REDUCE(sym__else_block, 3, 0),
    [744] = {.count = 1}, REDUCE(sym__else_block, 4, 0),
    [746] = {.count = 1}, SHIFT(257, 0),
    [748] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [750] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [752] = {.count = 1}, SHIFT(269, 0),
    [754] = {.count = 1}, SHIFT(264, 0),
    [756] = {.count = 1}, SHIFT(265, 0),
    [758] = {.count = 1}, SHIFT(266, 0),
    [760] = {.count = 1}, SHIFT(267, 0),
    [762] = {.count = 1}, SHIFT(268, 0),
    [764] = {.count = 1}, SHIFT(271, 0),
    [766] = {.count = 1}, SHIFT(272, 0),
    [768] = {.count = 1}, SHIFT(278, 0),
    [770] = {.count = 1}, SHIFT(274, 0),
    [772] = {.count = 1}, SHIFT(273, 0),
    [774] = {.count = 1}, SHIFT(275, 0),
    [776] = {.count = 1}, SHIFT(276, 0),
    [778] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [780] = {.count = 1}, SHIFT(277, 0),
    [782] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [784] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [786] = {.count = 1}, SHIFT(281, 0),
    [788] = {.count = 1}, SHIFT(284, 0),
    [790] = {.count = 1}, SHIFT(285, 0),
    [792] = {.count = 1}, SHIFT(298, 0),
    [794] = {.count = 1}, SHIFT(299, 0),
    [796] = {.count = 1}, SHIFT(286, 0),
    [798] = {.count = 1}, SHIFT(287, 0),
    [800] = {.count = 1}, SHIFT(288, 0),
    [802] = {.count = 1}, SHIFT(295, 0),
    [804] = {.count = 1}, SHIFT(296, 0),
    [806] = {.count = 1}, SHIFT(289, 0),
    [808] = {.count = 1}, SHIFT(290, 0),
    [810] = {.count = 1}, SHIFT(291, 0),
    [812] = {.count = 1}, SHIFT(292, 0),
    [814] = {.count = 1}, SHIFT(293, 0),
    [816] = {.count = 1}, SHIFT(294, 0),
    [818] = {.count = 1}, SHIFT(297, 0),
    [820] = {.count = 1}, SHIFT(300, 0),
    [822] = {.count = 1}, SHIFT(301, 0),
    [824] = {.count = 1}, SHIFT(304, 0),
    [826] = {.count = 1}, SHIFT(305, 0),
    [828] = {.count = 1}, SHIFT(306, 0),
    [830] = {.count = 1}, SHIFT(308, 0),
    [832] = {.count = 1}, SHIFT(309, 0),
    [834] = {.count = 1}, SHIFT(310, 0),
    [836] = {.count = 1}, SHIFT(312, 0),
    [838] = {.count = 1}, SHIFT(322, 0),
    [840] = {.count = 1}, SHIFT(323, 0),
    [842] = {.count = 1}, SHIFT(311, 0),
    [844] = {.count = 1}, SHIFT(318, 0),
    [846] = {.count = 1}, SHIFT(313, 0),
    [848] = {.count = 1}, SHIFT(314, 0),
    [850] = {.count = 1}, SHIFT(315, 0),
    [852] = {.count = 1}, SHIFT(316, 0),
    [854] = {.count = 1}, SHIFT(317, 0),
    [856] = {.count = 1}, SHIFT(319, 0),
    [858] = {.count = 1}, SHIFT(320, 0),
    [860] = {.count = 1}, SHIFT(321, 0),
    [862] = {.count = 1}, SHIFT(324, 0),
    [864] = {.count = 1}, SHIFT(326, 0),
    [866] = {.count = 1}, SHIFT(327, 0),
    [868] = {.count = 1}, SHIFT(328, 0),
    [870] = {.count = 1}, SHIFT(329, 0),
    [872] = {.count = 1}, SHIFT(335, 0),
    [874] = {.count = 1}, SHIFT(336, 0),
    [876] = {.count = 1}, SHIFT(330, 0),
    [878] = {.count = 1}, SHIFT(331, 0),
    [880] = {.count = 1}, SHIFT(332, 0),
    [882] = {.count = 1}, SHIFT(333, 0),
    [884] = {.count = 1}, SHIFT(334, 0),
    [886] = {.count = 1}, SHIFT(337, 0),
    [888] = {.count = 1}, SHIFT(338, 0),
    [890] = {.count = 1}, SHIFT(339, 0),
    [892] = {.count = 1}, SHIFT(341, 0),
    [894] = {.count = 1}, SHIFT(342, 0),
    [896] = {.count = 1}, SHIFT(348, 0),
    [898] = {.count = 1}, SHIFT(349, 0),
    [900] = {.count = 1}, SHIFT(343, 0),
    [902] = {.count = 1}, SHIFT(344, 0),
    [904] = {.count = 1}, SHIFT(345, 0),
    [906] = {.count = 1}, SHIFT(346, 0),
    [908] = {.count = 1}, SHIFT(347, 0),
    [910] = {.count = 1}, SHIFT(350, 0),
    [912] = {.count = 1}, SHIFT(351, 0),
    [914] = {.count = 1}, SHIFT(352, 0),
    [916] = {.count = 1}, SHIFT(353, 0),
    [918] = {.count = 1}, SHIFT(354, 0),
    [920] = {.count = 1}, SHIFT(356, 0),
    [922] = {.count = 1}, SHIFT(367, 0),
    [924] = {.count = 1}, SHIFT(362, 0),
    [926] = {.count = 1}, SHIFT(363, 0),
    [928] = {.count = 1}, SHIFT(364, 0),
    [930] = {.count = 1}, SHIFT(365, 0),
    [932] = {.count = 1}, SHIFT(366, 0),
    [934] = {.count = 1}, SHIFT(369, 0),
    [936] = {.count = 1}, SHIFT(370, 0),
    [938] = {.count = 1}, SHIFT(376, 0),
    [940] = {.count = 1}, SHIFT(372, 0),
    [942] = {.count = 1}, SHIFT(371, 0),
    [944] = {.count = 1}, SHIFT(373, 0),
    [946] = {.count = 1}, SHIFT(374, 0),
    [948] = {.count = 1}, SHIFT(375, 0),
    [950] = {.count = 1}, SHIFT(379, 0),
    [952] = {.count = 1}, SHIFT(387, 0),
    [954] = {.count = 1}, SHIFT(382, 0),
    [956] = {.count = 1}, SHIFT(383, 0),
    [958] = {.count = 1}, SHIFT(384, 0),
    [960] = {.count = 1}, SHIFT(385, 0),
    [962] = {.count = 1}, SHIFT(386, 0),
    [964] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [966] = {.count = 1}, SHIFT(390, 0),
    [968] = {.count = 1}, SHIFT(391, 0),
    [970] = {.count = 1}, SHIFT(393, 0),
    [972] = {.count = 1}, SHIFT(394, 0),
    [974] = {.count = 1}, SHIFT(395, 0),
    [976] = {.count = 1}, SHIFT(396, 0),
    [978] = {.count = 1}, SHIFT(397, 0),
    [980] = {.count = 1}, SHIFT(398, 0),
    [982] = {.count = 1}, SHIFT(401, 0),
    [984] = {.count = 1}, SHIFT(402, 0),
    [986] = {.count = 1}, SHIFT(415, 0),
    [988] = {.count = 1}, SHIFT(416, 0),
    [990] = {.count = 1}, SHIFT(403, 0),
    [992] = {.count = 1}, SHIFT(404, 0),
    [994] = {.count = 1}, SHIFT(405, 0),
    [996] = {.count = 1}, SHIFT(412, 0),
    [998] = {.count = 1}, SHIFT(413, 0),
    [1000] = {.count = 1}, SHIFT(406, 0),
    [1002] = {.count = 1}, SHIFT(407, 0),
    [1004] = {.count = 1}, SHIFT(408, 0),
    [1006] = {.count = 1}, SHIFT(409, 0),
    [1008] = {.count = 1}, SHIFT(410, 0),
    [1010] = {.count = 1}, SHIFT(411, 0),
    [1012] = {.count = 1}, SHIFT(414, 0),
    [1014] = {.count = 1}, SHIFT(417, 0),
    [1016] = {.count = 1}, SHIFT(418, 0),
    [1018] = {.count = 1}, SHIFT(421, 0),
    [1020] = {.count = 1}, SHIFT(422, 0),
    [1022] = {.count = 1}, SHIFT(423, 0),
    [1024] = {.count = 1}, SHIFT(425, 0),
    [1026] = {.count = 1}, SHIFT(426, 0),
    [1028] = {.count = 1}, SHIFT(427, 0),
    [1030] = {.count = 1}, SHIFT(429, 0),
    [1032] = {.count = 1}, SHIFT(439, 0),
    [1034] = {.count = 1}, SHIFT(440, 0),
    [1036] = {.count = 1}, SHIFT(428, 0),
    [1038] = {.count = 1}, SHIFT(435, 0),
    [1040] = {.count = 1}, SHIFT(430, 0),
    [1042] = {.count = 1}, SHIFT(431, 0),
    [1044] = {.count = 1}, SHIFT(432, 0),
    [1046] = {.count = 1}, SHIFT(433, 0),
    [1048] = {.count = 1}, SHIFT(434, 0),
    [1050] = {.count = 1}, SHIFT(436, 0),
    [1052] = {.count = 1}, SHIFT(437, 0),
    [1054] = {.count = 1}, SHIFT(438, 0),
    [1056] = {.count = 1}, SHIFT(441, 0),
    [1058] = {.count = 1}, SHIFT(443, 0),
    [1060] = {.count = 1}, SHIFT(444, 0),
    [1062] = {.count = 1}, SHIFT(445, 0),
    [1064] = {.count = 1}, SHIFT(446, 0),
    [1066] = {.count = 1}, SHIFT(452, 0),
    [1068] = {.count = 1}, SHIFT(453, 0),
    [1070] = {.count = 1}, SHIFT(447, 0),
    [1072] = {.count = 1}, SHIFT(448, 0),
    [1074] = {.count = 1}, SHIFT(449, 0),
    [1076] = {.count = 1}, SHIFT(450, 0),
    [1078] = {.count = 1}, SHIFT(451, 0),
    [1080] = {.count = 1}, SHIFT(454, 0),
    [1082] = {.count = 1}, SHIFT(455, 0),
    [1084] = {.count = 1}, SHIFT(456, 0),
    [1086] = {.count = 1}, SHIFT(458, 0),
    [1088] = {.count = 1}, SHIFT(459, 0),
    [1090] = {.count = 1}, SHIFT(465, 0),
    [1092] = {.count = 1}, SHIFT(466, 0),
    [1094] = {.count = 1}, SHIFT(460, 0),
    [1096] = {.count = 1}, SHIFT(461, 0),
    [1098] = {.count = 1}, SHIFT(462, 0),
    [1100] = {.count = 1}, SHIFT(463, 0),
    [1102] = {.count = 1}, SHIFT(464, 0),
    [1104] = {.count = 1}, SHIFT(467, 0),
    [1106] = {.count = 1}, SHIFT(468, 0),
    [1108] = {.count = 1}, SHIFT(469, 0),
    [1110] = {.count = 1}, SHIFT(470, 0),
    [1112] = {.count = 1}, SHIFT(471, 0),
    [1114] = {.count = 1}, SHIFT(473, 0),
    [1116] = {.count = 1}, SHIFT(475, 0),
    [1118] = {.count = 1}, SHIFT(485, 0),
    [1120] = {.count = 1}, SHIFT(480, 0),
    [1122] = {.count = 1}, SHIFT(481, 0),
    [1124] = {.count = 1}, SHIFT(482, 0),
    [1126] = {.count = 1}, SHIFT(483, 0),
    [1128] = {.count = 1}, SHIFT(484, 0),
    [1130] = {.count = 1}, SHIFT(487, 0),
    [1132] = {.count = 1}, SHIFT(488, 0),
    [1134] = {.count = 1}, SHIFT(494, 0),
    [1136] = {.count = 1}, SHIFT(490, 0),
    [1138] = {.count = 1}, SHIFT(489, 0),
    [1140] = {.count = 1}, SHIFT(491, 0),
    [1142] = {.count = 1}, SHIFT(492, 0),
    [1144] = {.count = 1}, SHIFT(493, 0),
    [1146] = {.count = 1}, SHIFT(498, 0),
    [1148] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [1150] = {.count = 1}, SHIFT(499, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
