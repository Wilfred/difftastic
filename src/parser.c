#include "tree_sitter/parser.h"

#define STATE_COUNT 847
#define SYMBOL_COUNT 94

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
    sym_if_modifier,
    sym_unless_modifier,
    sym_while_modifier,
    sym_until_modifier,
    sym_condition,
    sym__statement_block,
    sym__do_block,
    sym_then_block,
    sym_else_block,
    sym__then_else_block,
    sym__then_elsif_else_block,
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
    aux_sym__then_elsif_else_block_repeat1,
    aux_sym__call_arguments_repeat1,
    anon_sym_do,
    anon_sym_PIPE,
    anon_sym_end,
    anon_sym_undef,
    anon_sym_alias,
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
    anon_sym_while,
    anon_sym_until,
    anon_sym_if,
    anon_sym_unless,
    anon_sym_then,
    anon_sym_else,
    anon_sym_elsif,
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
    [sym_if_modifier] = "if_modifier",
    [sym_unless_modifier] = "unless_modifier",
    [sym_while_modifier] = "while_modifier",
    [sym_until_modifier] = "until_modifier",
    [sym_condition] = "condition",
    [sym__statement_block] = "_statement_block",
    [sym__do_block] = "_do_block",
    [sym_then_block] = "then_block",
    [sym_else_block] = "else_block",
    [sym__then_else_block] = "_then_else_block",
    [sym__then_elsif_else_block] = "_then_elsif_else_block",
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
    [aux_sym__then_elsif_else_block_repeat1] = "_then_elsif_else_block_repeat1",
    [aux_sym__call_arguments_repeat1] = "_call_arguments_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_do] = "do",
    [anon_sym_PIPE] = "|",
    [anon_sym_end] = "end",
    [anon_sym_undef] = "undef",
    [anon_sym_alias] = "alias",
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
    [anon_sym_while] = "while",
    [anon_sym_until] = "until",
    [anon_sym_if] = "if",
    [anon_sym_unless] = "unless",
    [anon_sym_then] = "then",
    [anon_sym_else] = "else",
    [anon_sym_elsif] = "elsif",
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
    [sym_if_modifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unless_modifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_while_modifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_until_modifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_condition] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__do_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_then_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_else_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__then_else_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__then_elsif_else_block] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [aux_sym__then_elsif_else_block_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__call_arguments_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_do] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_end] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_undef] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_alias] = {.visible = true, .named = false, .structural = true, .extra = false},
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
    [anon_sym_while] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_until] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_if] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_unless] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_then] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_else] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_elsif] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(103);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(124);
            if (lookahead == '~')
                ADVANCE(125);
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
                ADVANCE(82);
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
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(79);
            if (lookahead == 'i')
                ADVANCE(80);
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
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_elsif);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_end);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(96);
            if (lookahead == 'u')
                ADVANCE(99);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(98);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_self);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
                ADVANCE(100);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(102);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(104);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(105);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_then);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(112);
            if (lookahead == 't')
                ADVANCE(116);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(110);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(111);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(114);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(115);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(117);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(118);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(120);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(121);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(122);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(123);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 124:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 125:
            ACCEPT_TOKEN(anon_sym_TILDE);
        case 126:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
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
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 127:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 129:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 131:
            if (lookahead == 'f')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_if);
        case 133:
            if (lookahead == 'n')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 'l')
                ADVANCE(135);
            if (lookahead == 't')
                ADVANCE(139);
            LEX_ERROR();
        case 135:
            if (lookahead == 'e')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 's')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 's')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            ACCEPT_TOKEN(anon_sym_unless);
        case 139:
            if (lookahead == 'i')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 'l')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_until);
        case 142:
            if (lookahead == 'h')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'i')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if (lookahead == 'l')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'e')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            ACCEPT_TOKEN(anon_sym_while);
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
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'o')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(anon_sym_do);
        case 150:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 151:
            if (lookahead == ':')
                ADVANCE(25);
            LEX_ERROR();
        case 152:
            ACCEPT_TOKEN(anon_sym_LBRACK);
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
                ADVANCE(154);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == '|')
                ADVANCE(124);
            if (lookahead == '~')
                ADVANCE(125);
            LEX_ERROR();
        case 154:
            if (lookahead == ']')
                ADVANCE(58);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
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
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(92);
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
                ADVANCE(96);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(160);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            LEX_ERROR();
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'd')
                ADVANCE(148);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'd')
                ADVANCE(148);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
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
                ADVANCE(127);
            if (lookahead == 't')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            if (lookahead == 'h')
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            if (lookahead == 'e')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 'n')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            ACCEPT_TOKEN(anon_sym_then);
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
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 't')
                ADVANCE(167);
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
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
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
                ADVANCE(127);
            LEX_ERROR();
        case 174:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
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
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(158);
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
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == ']')
                ADVANCE(60);
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
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(158);
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
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'l')
                ADVANCE(182);
            if (lookahead == 'n')
                ADVANCE(185);
            LEX_ERROR();
        case 182:
            if (lookahead == 's')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'e')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            ACCEPT_TOKEN(anon_sym_else);
        case 185:
            if (lookahead == 'd')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_end);
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
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(188);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(190);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(188);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(103);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(181);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
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
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'e')
                ADVANCE(181);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'n')
                ADVANCE(185);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
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
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(195);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
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
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'e')
                ADVANCE(195);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
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
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'l')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(185);
            LEX_ERROR();
        case 202:
            if (lookahead == 's')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 'e')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'f')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            ACCEPT_TOKEN(anon_sym_elsif);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(103);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(201);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 209:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(209);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'e')
                ADVANCE(201);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 211:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(211);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 212:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(212);
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
                ADVANCE(213);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(214);
            if (lookahead == '=')
                ADVANCE(127);
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
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 213:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 214:
            ACCEPT_TOKEN(anon_sym_LT);
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(214);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 218:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(218);
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
                ADVANCE(213);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 219:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(219);
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
                ADVANCE(213);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(213);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
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
                ADVANCE(127);
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
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(124);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 126,
    [1] = 129,
    [2] = 130,
    [3] = 130,
    [4] = 130,
    [5] = 147,
    [6] = 147,
    [7] = 130,
    [8] = 150,
    [9] = 150,
    [10] = 153,
    [11] = 153,
    [12] = 153,
    [13] = 155,
    [14] = 156,
    [15] = 156,
    [16] = 156,
    [17] = 157,
    [18] = 157,
    [19] = 157,
    [20] = 157,
    [21] = 159,
    [22] = 150,
    [23] = 147,
    [24] = 147,
    [25] = 161,
    [26] = 162,
    [27] = 162,
    [28] = 155,
    [29] = 156,
    [30] = 163,
    [31] = 162,
    [32] = 162,
    [33] = 164,
    [34] = 164,
    [35] = 164,
    [36] = 147,
    [37] = 164,
    [38] = 165,
    [39] = 165,
    [40] = 153,
    [41] = 153,
    [42] = 153,
    [43] = 155,
    [44] = 162,
    [45] = 156,
    [46] = 156,
    [47] = 156,
    [48] = 157,
    [49] = 157,
    [50] = 157,
    [51] = 157,
    [52] = 165,
    [53] = 166,
    [54] = 166,
    [55] = 166,
    [56] = 171,
    [57] = 171,
    [58] = 155,
    [59] = 156,
    [60] = 171,
    [61] = 171,
    [62] = 164,
    [63] = 171,
    [64] = 172,
    [65] = 173,
    [66] = 171,
    [67] = 157,
    [68] = 157,
    [69] = 157,
    [70] = 157,
    [71] = 174,
    [72] = 172,
    [73] = 164,
    [74] = 164,
    [75] = 164,
    [76] = 164,
    [77] = 171,
    [78] = 164,
    [79] = 173,
    [80] = 156,
    [81] = 175,
    [82] = 176,
    [83] = 177,
    [84] = 177,
    [85] = 155,
    [86] = 156,
    [87] = 171,
    [88] = 177,
    [89] = 177,
    [90] = 164,
    [91] = 177,
    [92] = 173,
    [93] = 177,
    [94] = 177,
    [95] = 156,
    [96] = 175,
    [97] = 176,
    [98] = 177,
    [99] = 178,
    [100] = 179,
    [101] = 177,
    [102] = 176,
    [103] = 178,
    [104] = 177,
    [105] = 177,
    [106] = 178,
    [107] = 171,
    [108] = 171,
    [109] = 171,
    [110] = 180,
    [111] = 164,
    [112] = 187,
    [113] = 191,
    [114] = 187,
    [115] = 192,
    [116] = 192,
    [117] = 192,
    [118] = 147,
    [119] = 192,
    [120] = 193,
    [121] = 193,
    [122] = 153,
    [123] = 153,
    [124] = 153,
    [125] = 155,
    [126] = 156,
    [127] = 156,
    [128] = 156,
    [129] = 157,
    [130] = 157,
    [131] = 157,
    [132] = 157,
    [133] = 193,
    [134] = 166,
    [135] = 180,
    [136] = 192,
    [137] = 194,
    [138] = 192,
    [139] = 196,
    [140] = 198,
    [141] = 198,
    [142] = 198,
    [143] = 147,
    [144] = 198,
    [145] = 199,
    [146] = 199,
    [147] = 153,
    [148] = 153,
    [149] = 153,
    [150] = 155,
    [151] = 156,
    [152] = 156,
    [153] = 156,
    [154] = 157,
    [155] = 157,
    [156] = 157,
    [157] = 157,
    [158] = 199,
    [159] = 166,
    [160] = 180,
    [161] = 198,
    [162] = 194,
    [163] = 198,
    [164] = 198,
    [165] = 166,
    [166] = 166,
    [167] = 166,
    [168] = 171,
    [169] = 171,
    [170] = 155,
    [171] = 156,
    [172] = 171,
    [173] = 171,
    [174] = 164,
    [175] = 171,
    [176] = 173,
    [177] = 171,
    [178] = 171,
    [179] = 156,
    [180] = 175,
    [181] = 176,
    [182] = 171,
    [183] = 178,
    [184] = 171,
    [185] = 171,
    [186] = 171,
    [187] = 200,
    [188] = 198,
    [189] = 206,
    [190] = 207,
    [191] = 206,
    [192] = 208,
    [193] = 208,
    [194] = 208,
    [195] = 147,
    [196] = 208,
    [197] = 209,
    [198] = 209,
    [199] = 153,
    [200] = 153,
    [201] = 153,
    [202] = 155,
    [203] = 156,
    [204] = 156,
    [205] = 156,
    [206] = 157,
    [207] = 157,
    [208] = 157,
    [209] = 157,
    [210] = 209,
    [211] = 166,
    [212] = 180,
    [213] = 208,
    [214] = 194,
    [215] = 208,
    [216] = 208,
    [217] = 166,
    [218] = 200,
    [219] = 208,
    [220] = 194,
    [221] = 180,
    [222] = 208,
    [223] = 157,
    [224] = 166,
    [225] = 166,
    [226] = 166,
    [227] = 171,
    [228] = 171,
    [229] = 155,
    [230] = 156,
    [231] = 171,
    [232] = 171,
    [233] = 164,
    [234] = 171,
    [235] = 173,
    [236] = 171,
    [237] = 171,
    [238] = 156,
    [239] = 175,
    [240] = 176,
    [241] = 171,
    [242] = 178,
    [243] = 171,
    [244] = 171,
    [245] = 171,
    [246] = 200,
    [247] = 180,
    [248] = 194,
    [249] = 208,
    [250] = 208,
    [251] = 210,
    [252] = 210,
    [253] = 210,
    [254] = 211,
    [255] = 211,
    [256] = 155,
    [257] = 156,
    [258] = 211,
    [259] = 211,
    [260] = 164,
    [261] = 211,
    [262] = 173,
    [263] = 211,
    [264] = 211,
    [265] = 156,
    [266] = 175,
    [267] = 176,
    [268] = 211,
    [269] = 178,
    [270] = 211,
    [271] = 211,
    [272] = 211,
    [273] = 208,
    [274] = 208,
    [275] = 196,
    [276] = 196,
    [277] = 212,
    [278] = 196,
    [279] = 198,
    [280] = 208,
    [281] = 172,
    [282] = 194,
    [283] = 208,
    [284] = 157,
    [285] = 157,
    [286] = 157,
    [287] = 157,
    [288] = 198,
    [289] = 198,
    [290] = 198,
    [291] = 198,
    [292] = 208,
    [293] = 198,
    [294] = 194,
    [295] = 198,
    [296] = 208,
    [297] = 194,
    [298] = 208,
    [299] = 208,
    [300] = 210,
    [301] = 208,
    [302] = 215,
    [303] = 196,
    [304] = 198,
    [305] = 208,
    [306] = 194,
    [307] = 208,
    [308] = 208,
    [309] = 209,
    [310] = 216,
    [311] = 196,
    [312] = 156,
    [313] = 217,
    [314] = 196,
    [315] = 215,
    [316] = 156,
    [317] = 217,
    [318] = 215,
    [319] = 196,
    [320] = 198,
    [321] = 208,
    [322] = 194,
    [323] = 208,
    [324] = 208,
    [325] = 198,
    [326] = 208,
    [327] = 194,
    [328] = 198,
    [329] = 208,
    [330] = 194,
    [331] = 208,
    [332] = 164,
    [333] = 209,
    [334] = 173,
    [335] = 209,
    [336] = 209,
    [337] = 218,
    [338] = 218,
    [339] = 215,
    [340] = 196,
    [341] = 219,
    [342] = 156,
    [343] = 220,
    [344] = 215,
    [345] = 221,
    [346] = 156,
    [347] = 220,
    [348] = 215,
    [349] = 220,
    [350] = 215,
    [351] = 220,
    [352] = 215,
    [353] = 173,
    [354] = 196,
    [355] = 156,
    [356] = 222,
    [357] = 173,
    [358] = 221,
    [359] = 156,
    [360] = 222,
    [361] = 173,
    [362] = 222,
    [363] = 173,
    [364] = 222,
    [365] = 173,
    [366] = 198,
    [367] = 208,
    [368] = 194,
    [369] = 208,
    [370] = 208,
    [371] = 196,
    [372] = 198,
    [373] = 194,
    [374] = 208,
    [375] = 198,
    [376] = 208,
    [377] = 194,
    [378] = 153,
    [379] = 153,
    [380] = 208,
    [381] = 208,
    [382] = 208,
    [383] = 156,
    [384] = 175,
    [385] = 176,
    [386] = 209,
    [387] = 178,
    [388] = 209,
    [389] = 209,
    [390] = 209,
    [391] = 223,
    [392] = 198,
    [393] = 196,
    [394] = 198,
    [395] = 208,
    [396] = 194,
    [397] = 208,
    [398] = 208,
    [399] = 194,
    [400] = 172,
    [401] = 200,
    [402] = 157,
    [403] = 157,
    [404] = 157,
    [405] = 157,
    [406] = 208,
    [407] = 208,
    [408] = 208,
    [409] = 208,
    [410] = 208,
    [411] = 200,
    [412] = 194,
    [413] = 180,
    [414] = 198,
    [415] = 194,
    [416] = 198,
    [417] = 198,
    [418] = 210,
    [419] = 198,
    [420] = 198,
    [421] = 196,
    [422] = 196,
    [423] = 198,
    [424] = 198,
    [425] = 194,
    [426] = 198,
    [427] = 198,
    [428] = 198,
    [429] = 198,
    [430] = 194,
    [431] = 198,
    [432] = 198,
    [433] = 210,
    [434] = 198,
    [435] = 215,
    [436] = 196,
    [437] = 198,
    [438] = 198,
    [439] = 194,
    [440] = 198,
    [441] = 198,
    [442] = 199,
    [443] = 216,
    [444] = 196,
    [445] = 156,
    [446] = 217,
    [447] = 196,
    [448] = 215,
    [449] = 196,
    [450] = 198,
    [451] = 198,
    [452] = 194,
    [453] = 198,
    [454] = 198,
    [455] = 198,
    [456] = 198,
    [457] = 194,
    [458] = 198,
    [459] = 198,
    [460] = 194,
    [461] = 198,
    [462] = 164,
    [463] = 199,
    [464] = 173,
    [465] = 199,
    [466] = 199,
    [467] = 218,
    [468] = 215,
    [469] = 196,
    [470] = 219,
    [471] = 173,
    [472] = 196,
    [473] = 198,
    [474] = 198,
    [475] = 194,
    [476] = 198,
    [477] = 198,
    [478] = 196,
    [479] = 198,
    [480] = 194,
    [481] = 198,
    [482] = 198,
    [483] = 198,
    [484] = 194,
    [485] = 153,
    [486] = 198,
    [487] = 198,
    [488] = 198,
    [489] = 156,
    [490] = 175,
    [491] = 176,
    [492] = 199,
    [493] = 178,
    [494] = 199,
    [495] = 199,
    [496] = 199,
    [497] = 223,
    [498] = 198,
    [499] = 196,
    [500] = 198,
    [501] = 198,
    [502] = 194,
    [503] = 198,
    [504] = 198,
    [505] = 194,
    [506] = 194,
    [507] = 192,
    [508] = 166,
    [509] = 200,
    [510] = 192,
    [511] = 194,
    [512] = 180,
    [513] = 192,
    [514] = 194,
    [515] = 192,
    [516] = 192,
    [517] = 210,
    [518] = 192,
    [519] = 192,
    [520] = 196,
    [521] = 196,
    [522] = 198,
    [523] = 192,
    [524] = 194,
    [525] = 192,
    [526] = 192,
    [527] = 198,
    [528] = 192,
    [529] = 194,
    [530] = 192,
    [531] = 192,
    [532] = 210,
    [533] = 192,
    [534] = 215,
    [535] = 196,
    [536] = 198,
    [537] = 192,
    [538] = 194,
    [539] = 192,
    [540] = 192,
    [541] = 193,
    [542] = 216,
    [543] = 196,
    [544] = 156,
    [545] = 217,
    [546] = 196,
    [547] = 215,
    [548] = 196,
    [549] = 198,
    [550] = 192,
    [551] = 194,
    [552] = 192,
    [553] = 192,
    [554] = 198,
    [555] = 192,
    [556] = 194,
    [557] = 198,
    [558] = 192,
    [559] = 194,
    [560] = 192,
    [561] = 164,
    [562] = 193,
    [563] = 173,
    [564] = 193,
    [565] = 193,
    [566] = 218,
    [567] = 215,
    [568] = 196,
    [569] = 219,
    [570] = 173,
    [571] = 196,
    [572] = 198,
    [573] = 192,
    [574] = 194,
    [575] = 192,
    [576] = 192,
    [577] = 196,
    [578] = 198,
    [579] = 194,
    [580] = 192,
    [581] = 198,
    [582] = 192,
    [583] = 194,
    [584] = 153,
    [585] = 192,
    [586] = 192,
    [587] = 192,
    [588] = 156,
    [589] = 175,
    [590] = 176,
    [591] = 193,
    [592] = 178,
    [593] = 193,
    [594] = 193,
    [595] = 193,
    [596] = 223,
    [597] = 198,
    [598] = 196,
    [599] = 198,
    [600] = 192,
    [601] = 194,
    [602] = 192,
    [603] = 192,
    [604] = 194,
    [605] = 172,
    [606] = 180,
    [607] = 157,
    [608] = 157,
    [609] = 157,
    [610] = 157,
    [611] = 192,
    [612] = 192,
    [613] = 192,
    [614] = 192,
    [615] = 192,
    [616] = 180,
    [617] = 194,
    [618] = 164,
    [619] = 164,
    [620] = 166,
    [621] = 200,
    [622] = 164,
    [623] = 194,
    [624] = 180,
    [625] = 164,
    [626] = 194,
    [627] = 164,
    [628] = 164,
    [629] = 210,
    [630] = 164,
    [631] = 164,
    [632] = 196,
    [633] = 196,
    [634] = 198,
    [635] = 164,
    [636] = 194,
    [637] = 164,
    [638] = 164,
    [639] = 198,
    [640] = 164,
    [641] = 194,
    [642] = 164,
    [643] = 164,
    [644] = 210,
    [645] = 164,
    [646] = 215,
    [647] = 196,
    [648] = 198,
    [649] = 164,
    [650] = 194,
    [651] = 164,
    [652] = 164,
    [653] = 165,
    [654] = 216,
    [655] = 196,
    [656] = 156,
    [657] = 217,
    [658] = 196,
    [659] = 215,
    [660] = 196,
    [661] = 198,
    [662] = 164,
    [663] = 194,
    [664] = 164,
    [665] = 164,
    [666] = 198,
    [667] = 164,
    [668] = 194,
    [669] = 198,
    [670] = 164,
    [671] = 194,
    [672] = 164,
    [673] = 164,
    [674] = 165,
    [675] = 173,
    [676] = 165,
    [677] = 165,
    [678] = 218,
    [679] = 215,
    [680] = 196,
    [681] = 219,
    [682] = 173,
    [683] = 196,
    [684] = 198,
    [685] = 164,
    [686] = 194,
    [687] = 164,
    [688] = 164,
    [689] = 196,
    [690] = 198,
    [691] = 194,
    [692] = 164,
    [693] = 198,
    [694] = 164,
    [695] = 194,
    [696] = 153,
    [697] = 164,
    [698] = 164,
    [699] = 164,
    [700] = 156,
    [701] = 175,
    [702] = 176,
    [703] = 165,
    [704] = 178,
    [705] = 165,
    [706] = 165,
    [707] = 165,
    [708] = 223,
    [709] = 198,
    [710] = 196,
    [711] = 198,
    [712] = 164,
    [713] = 194,
    [714] = 164,
    [715] = 164,
    [716] = 194,
    [717] = 173,
    [718] = 162,
    [719] = 162,
    [720] = 156,
    [721] = 175,
    [722] = 176,
    [723] = 162,
    [724] = 178,
    [725] = 162,
    [726] = 162,
    [727] = 162,
    [728] = 147,
    [729] = 179,
    [730] = 161,
    [731] = 147,
    [732] = 166,
    [733] = 180,
    [734] = 130,
    [735] = 194,
    [736] = 130,
    [737] = 130,
    [738] = 166,
    [739] = 200,
    [740] = 130,
    [741] = 194,
    [742] = 180,
    [743] = 130,
    [744] = 194,
    [745] = 130,
    [746] = 130,
    [747] = 210,
    [748] = 130,
    [749] = 130,
    [750] = 196,
    [751] = 196,
    [752] = 198,
    [753] = 130,
    [754] = 194,
    [755] = 130,
    [756] = 130,
    [757] = 198,
    [758] = 130,
    [759] = 194,
    [760] = 130,
    [761] = 130,
    [762] = 210,
    [763] = 130,
    [764] = 215,
    [765] = 196,
    [766] = 198,
    [767] = 130,
    [768] = 194,
    [769] = 130,
    [770] = 130,
    [771] = 150,
    [772] = 216,
    [773] = 196,
    [774] = 156,
    [775] = 217,
    [776] = 196,
    [777] = 215,
    [778] = 196,
    [779] = 198,
    [780] = 130,
    [781] = 194,
    [782] = 130,
    [783] = 130,
    [784] = 198,
    [785] = 130,
    [786] = 194,
    [787] = 198,
    [788] = 130,
    [789] = 194,
    [790] = 130,
    [791] = 164,
    [792] = 150,
    [793] = 173,
    [794] = 150,
    [795] = 150,
    [796] = 218,
    [797] = 215,
    [798] = 196,
    [799] = 219,
    [800] = 173,
    [801] = 196,
    [802] = 198,
    [803] = 130,
    [804] = 194,
    [805] = 130,
    [806] = 130,
    [807] = 196,
    [808] = 198,
    [809] = 194,
    [810] = 130,
    [811] = 198,
    [812] = 130,
    [813] = 194,
    [814] = 153,
    [815] = 130,
    [816] = 130,
    [817] = 130,
    [818] = 156,
    [819] = 175,
    [820] = 176,
    [821] = 150,
    [822] = 178,
    [823] = 150,
    [824] = 150,
    [825] = 150,
    [826] = 223,
    [827] = 198,
    [828] = 196,
    [829] = 198,
    [830] = 130,
    [831] = 194,
    [832] = 130,
    [833] = 130,
    [834] = 194,
    [835] = 172,
    [836] = 129,
    [837] = 157,
    [838] = 157,
    [839] = 157,
    [840] = 157,
    [841] = 130,
    [842] = 130,
    [843] = 130,
    [844] = 130,
    [845] = 130,
    [846] = 129,
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
        [sym_if_modifier] = 6,
        [sym_unless_modifier] = 6,
        [sym_while_modifier] = 6,
        [sym_until_modifier] = 6,
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
        [anon_sym_while] = 36,
        [anon_sym_until] = 38,
        [anon_sym_if] = 40,
        [anon_sym_unless] = 42,
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
        [anon_sym_while] = 58,
        [anon_sym_until] = 60,
        [anon_sym_if] = 62,
        [anon_sym_unless] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [3] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [ts_builtin_sym_end] = 70,
        [anon_sym_while] = 70,
        [anon_sym_until] = 70,
        [anon_sym_if] = 70,
        [anon_sym_unless] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [4] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [ts_builtin_sym_end] = 72,
        [anon_sym_while] = 72,
        [anon_sym_until] = 72,
        [anon_sym_if] = 72,
        [anon_sym_unless] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [5] = {
        [anon_sym_do] = 74,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [6] = {
        [anon_sym_do] = 76,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [7] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [ts_builtin_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [8] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [ts_builtin_sym_end] = 80,
        [anon_sym_COLON_COLON] = 82,
        [anon_sym_while] = 80,
        [anon_sym_until] = 80,
        [anon_sym_if] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_LBRACK] = 84,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [9] = {
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [ts_builtin_sym_end] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [10] = {
        [sym__function_name] = 88,
        [anon_sym_PIPE] = 90,
        [anon_sym_STAR] = 90,
        [anon_sym_AMP] = 90,
        [anon_sym_LT] = 90,
        [sym_identifier] = 90,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 90,
        [anon_sym_CARET] = 90,
        [anon_sym_LT_EQ_GT] = 90,
        [anon_sym_EQ_EQ] = 90,
        [anon_sym_EQ_EQ_EQ] = 90,
        [anon_sym_EQ_TILDE] = 90,
        [anon_sym_GT] = 90,
        [anon_sym_GT_EQ] = 90,
        [anon_sym_LT_EQ] = 90,
        [anon_sym_PLUS] = 90,
        [anon_sym_DASH] = 90,
        [anon_sym_SLASH] = 90,
        [anon_sym_PERCENT] = 90,
        [anon_sym_STAR_STAR] = 90,
        [anon_sym_LT_LT] = 90,
        [anon_sym_GT_GT] = 90,
        [anon_sym_TILDE] = 90,
        [anon_sym_PLUS_AT] = 90,
        [anon_sym_DASH_AT] = 90,
        [anon_sym_LBRACK_RBRACK] = 90,
        [anon_sym_LBRACK_RBRACK_EQ] = 90,
        [sym__line_break] = 48,
    },
    [11] = {
        [sym__function_name] = 92,
        [anon_sym_PIPE] = 94,
        [anon_sym_STAR] = 94,
        [anon_sym_AMP] = 94,
        [anon_sym_LT] = 94,
        [sym_identifier] = 94,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 94,
        [anon_sym_CARET] = 94,
        [anon_sym_LT_EQ_GT] = 94,
        [anon_sym_EQ_EQ] = 94,
        [anon_sym_EQ_EQ_EQ] = 94,
        [anon_sym_EQ_TILDE] = 94,
        [anon_sym_GT] = 94,
        [anon_sym_GT_EQ] = 94,
        [anon_sym_LT_EQ] = 94,
        [anon_sym_PLUS] = 94,
        [anon_sym_DASH] = 94,
        [anon_sym_SLASH] = 94,
        [anon_sym_PERCENT] = 94,
        [anon_sym_STAR_STAR] = 94,
        [anon_sym_LT_LT] = 94,
        [anon_sym_GT_GT] = 94,
        [anon_sym_TILDE] = 94,
        [anon_sym_PLUS_AT] = 94,
        [anon_sym_DASH_AT] = 94,
        [anon_sym_LBRACK_RBRACK] = 94,
        [anon_sym_LBRACK_RBRACK_EQ] = 94,
        [sym__line_break] = 48,
    },
    [12] = {
        [sym__function_name] = 96,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 98,
        [anon_sym_CARET] = 98,
        [anon_sym_LT_EQ_GT] = 98,
        [anon_sym_EQ_EQ] = 98,
        [anon_sym_EQ_EQ_EQ] = 98,
        [anon_sym_EQ_TILDE] = 98,
        [anon_sym_GT] = 98,
        [anon_sym_GT_EQ] = 98,
        [anon_sym_LT_EQ] = 98,
        [anon_sym_PLUS] = 98,
        [anon_sym_DASH] = 98,
        [anon_sym_SLASH] = 98,
        [anon_sym_PERCENT] = 98,
        [anon_sym_STAR_STAR] = 98,
        [anon_sym_LT_LT] = 98,
        [anon_sym_GT_GT] = 98,
        [anon_sym_TILDE] = 98,
        [anon_sym_PLUS_AT] = 98,
        [anon_sym_DASH_AT] = 98,
        [anon_sym_LBRACK_RBRACK] = 98,
        [anon_sym_LBRACK_RBRACK_EQ] = 98,
        [sym__line_break] = 48,
    },
    [13] = {
        [sym__statement] = 100,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 122,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [14] = {
        [sym_identifier] = 140,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [15] = {
        [sym_identifier] = 142,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [16] = {
        [sym_identifier] = 144,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [17] = {
        [sym_condition] = 146,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [18] = {
        [sym_condition] = 162,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [19] = {
        [sym_condition] = 164,
        [sym__expression] = 166,
        [sym__argument] = 168,
        [sym__primary] = 170,
        [sym_scope_resolution_expression] = 172,
        [sym_subscript_expression] = 172,
        [sym__variable] = 172,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 48,
        [sym_symbol] = 168,
        [sym__line_break] = 48,
    },
    [20] = {
        [sym_condition] = 180,
        [sym__expression] = 182,
        [sym__argument] = 184,
        [sym__primary] = 186,
        [sym_scope_resolution_expression] = 188,
        [sym_subscript_expression] = 188,
        [sym__variable] = 188,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym_symbol] = 184,
        [sym__line_break] = 48,
    },
    [21] = {
        [sym__call_arguments] = 196,
        [sym__command] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym__variable] = 204,
        [anon_sym_do] = 206,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_super] = 212,
        [anon_sym_nil] = 214,
        [anon_sym_self] = 214,
        [sym_identifier] = 214,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [22] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [ts_builtin_sym_end] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_while] = 216,
        [anon_sym_until] = 216,
        [anon_sym_if] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [23] = {
        [anon_sym_do] = 218,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [24] = {
        [anon_sym_do] = 220,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 222,
        [anon_sym_do] = 220,
        [anon_sym_COMMA] = 224,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [26] = {
        [aux_sym__call_arguments_repeat1] = 80,
        [anon_sym_do] = 80,
        [anon_sym_COMMA] = 80,
        [anon_sym_COLON_COLON] = 226,
        [anon_sym_LBRACK] = 228,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 86,
        [anon_sym_do] = 86,
        [anon_sym_COMMA] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [28] = {
        [sym__statement] = 230,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 232,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [29] = {
        [sym_identifier] = 234,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [30] = {
        [sym__call_arguments] = 196,
        [sym__command] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_super] = 212,
        [anon_sym_nil] = 214,
        [anon_sym_self] = 214,
        [sym_identifier] = 214,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 216,
        [anon_sym_do] = 216,
        [anon_sym_COMMA] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [32] = {
        [aux_sym__call_arguments_repeat1] = 236,
        [anon_sym_do] = 236,
        [anon_sym_COMMA] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [33] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 240,
        [anon_sym_RPAREN] = 242,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [34] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_RPAREN] = 70,
        [anon_sym_while] = 70,
        [anon_sym_until] = 70,
        [anon_sym_if] = 70,
        [anon_sym_unless] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [35] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_RPAREN] = 72,
        [anon_sym_while] = 72,
        [anon_sym_until] = 72,
        [anon_sym_if] = 72,
        [anon_sym_unless] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [36] = {
        [anon_sym_do] = 252,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [37] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_RPAREN] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [38] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_RPAREN] = 80,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_while] = 80,
        [anon_sym_until] = 80,
        [anon_sym_if] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_LBRACK] = 256,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [39] = {
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [anon_sym_RPAREN] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [40] = {
        [sym__function_name] = 258,
        [anon_sym_PIPE] = 260,
        [anon_sym_STAR] = 260,
        [anon_sym_AMP] = 260,
        [anon_sym_LT] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 48,
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
        [sym__line_break] = 48,
    },
    [41] = {
        [sym__function_name] = 262,
        [anon_sym_PIPE] = 94,
        [anon_sym_STAR] = 94,
        [anon_sym_AMP] = 94,
        [anon_sym_LT] = 94,
        [sym_identifier] = 94,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 94,
        [anon_sym_CARET] = 94,
        [anon_sym_LT_EQ_GT] = 94,
        [anon_sym_EQ_EQ] = 94,
        [anon_sym_EQ_EQ_EQ] = 94,
        [anon_sym_EQ_TILDE] = 94,
        [anon_sym_GT] = 94,
        [anon_sym_GT_EQ] = 94,
        [anon_sym_LT_EQ] = 94,
        [anon_sym_PLUS] = 94,
        [anon_sym_DASH] = 94,
        [anon_sym_SLASH] = 94,
        [anon_sym_PERCENT] = 94,
        [anon_sym_STAR_STAR] = 94,
        [anon_sym_LT_LT] = 94,
        [anon_sym_GT_GT] = 94,
        [anon_sym_TILDE] = 94,
        [anon_sym_PLUS_AT] = 94,
        [anon_sym_DASH_AT] = 94,
        [anon_sym_LBRACK_RBRACK] = 94,
        [anon_sym_LBRACK_RBRACK_EQ] = 94,
        [sym__line_break] = 48,
    },
    [42] = {
        [sym__function_name] = 264,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 98,
        [anon_sym_CARET] = 98,
        [anon_sym_LT_EQ_GT] = 98,
        [anon_sym_EQ_EQ] = 98,
        [anon_sym_EQ_EQ_EQ] = 98,
        [anon_sym_EQ_TILDE] = 98,
        [anon_sym_GT] = 98,
        [anon_sym_GT_EQ] = 98,
        [anon_sym_LT_EQ] = 98,
        [anon_sym_PLUS] = 98,
        [anon_sym_DASH] = 98,
        [anon_sym_SLASH] = 98,
        [anon_sym_PERCENT] = 98,
        [anon_sym_STAR_STAR] = 98,
        [anon_sym_LT_LT] = 98,
        [anon_sym_GT_GT] = 98,
        [anon_sym_TILDE] = 98,
        [anon_sym_PLUS_AT] = 98,
        [anon_sym_DASH_AT] = 98,
        [anon_sym_LBRACK_RBRACK] = 98,
        [anon_sym_LBRACK_RBRACK_EQ] = 98,
        [sym__line_break] = 48,
    },
    [43] = {
        [sym__statement] = 266,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 268,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [44] = {
        [aux_sym__call_arguments_repeat1] = 270,
        [anon_sym_do] = 270,
        [anon_sym_COMMA] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [45] = {
        [sym_identifier] = 272,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [46] = {
        [sym_identifier] = 274,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [47] = {
        [sym_identifier] = 276,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [48] = {
        [sym_condition] = 278,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [49] = {
        [sym_condition] = 280,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [50] = {
        [sym_condition] = 282,
        [sym__expression] = 166,
        [sym__argument] = 168,
        [sym__primary] = 170,
        [sym_scope_resolution_expression] = 172,
        [sym_subscript_expression] = 172,
        [sym__variable] = 172,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 48,
        [sym_symbol] = 168,
        [sym__line_break] = 48,
    },
    [51] = {
        [sym_condition] = 284,
        [sym__expression] = 182,
        [sym__argument] = 184,
        [sym__primary] = 186,
        [sym_scope_resolution_expression] = 188,
        [sym_subscript_expression] = 188,
        [sym__variable] = 188,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym_symbol] = 184,
        [sym__line_break] = 48,
    },
    [52] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_RPAREN] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_while] = 216,
        [anon_sym_until] = 216,
        [anon_sym_if] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [53] = {
        [sym_then_block] = 286,
        [sym__then_else_block] = 288,
        [sym__terminator] = 290,
        [anon_sym_then] = 290,
        [sym_comment] = 48,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 294,
    },
    [54] = {
        [sym_then_block] = 296,
        [sym__then_else_block] = 296,
        [sym__terminator] = 296,
        [anon_sym_then] = 296,
        [sym_comment] = 48,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [55] = {
        [sym_then_block] = 78,
        [sym__then_else_block] = 78,
        [sym__terminator] = 78,
        [anon_sym_then] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [56] = {
        [sym_then_block] = 80,
        [sym__then_else_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 298,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 300,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [57] = {
        [sym_then_block] = 86,
        [sym__then_else_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_then] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [58] = {
        [sym__statement] = 302,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 304,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [59] = {
        [sym_identifier] = 306,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [60] = {
        [sym_then_block] = 216,
        [sym__then_else_block] = 216,
        [sym__terminator] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_then] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [61] = {
        [sym_then_block] = 236,
        [sym__then_else_block] = 236,
        [sym__terminator] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_then] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [62] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 308,
        [anon_sym_RPAREN] = 310,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [63] = {
        [sym_then_block] = 270,
        [sym__then_else_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_then] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [64] = {
        [sym__statement] = 312,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [65] = {
        [anon_sym_RPAREN] = 314,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [66] = {
        [sym_then_block] = 316,
        [sym__then_else_block] = 316,
        [sym__terminator] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_then] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [67] = {
        [sym__expression] = 318,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 120,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [68] = {
        [sym__expression] = 320,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 120,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [69] = {
        [sym__expression] = 322,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 120,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [70] = {
        [sym__expression] = 324,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_LPAREN] = 120,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [71] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym_else_block] = 328,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [aux_sym__then_elsif_else_block_repeat1] = 328,
        [ts_builtin_sym_end] = 328,
        [anon_sym_end] = 328,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_RPAREN] = 328,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_else] = 328,
        [anon_sym_elsif] = 328,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 328,
    },
    [72] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
    },
    [73] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_RPAREN] = 330,
        [anon_sym_while] = 330,
        [anon_sym_until] = 330,
        [anon_sym_if] = 330,
        [anon_sym_unless] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [74] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_RPAREN] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [sym_comment] = 48,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [75] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_RPAREN] = 334,
        [anon_sym_while] = 334,
        [anon_sym_until] = 334,
        [anon_sym_if] = 334,
        [anon_sym_unless] = 334,
        [sym_comment] = 48,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [76] = {
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_RPAREN] = 336,
        [anon_sym_while] = 336,
        [anon_sym_until] = 336,
        [anon_sym_if] = 336,
        [anon_sym_unless] = 336,
        [sym_comment] = 48,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [77] = {
        [sym_then_block] = 338,
        [sym__then_else_block] = 338,
        [sym__terminator] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_then] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [78] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 340,
        [anon_sym_RPAREN] = 342,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [79] = {
        [anon_sym_RPAREN] = 344,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [80] = {
        [sym_identifier] = 346,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [81] = {
        [sym__argument] = 348,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 358,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [82] = {
        [aux_sym__call_arguments_repeat1] = 362,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 366,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [83] = {
        [aux_sym__call_arguments_repeat1] = 80,
        [anon_sym_COMMA] = 80,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_LBRACK] = 370,
        [anon_sym_RBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [84] = {
        [aux_sym__call_arguments_repeat1] = 86,
        [anon_sym_COMMA] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_LBRACK] = 86,
        [anon_sym_RBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [85] = {
        [sym__statement] = 372,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 374,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [86] = {
        [sym_identifier] = 376,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [87] = {
        [sym_then_block] = 378,
        [sym__then_else_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_then] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [88] = {
        [aux_sym__call_arguments_repeat1] = 216,
        [anon_sym_COMMA] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_LBRACK] = 216,
        [anon_sym_RBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [89] = {
        [aux_sym__call_arguments_repeat1] = 236,
        [anon_sym_COMMA] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_LBRACK] = 236,
        [anon_sym_RBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [90] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_RPAREN] = 382,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [91] = {
        [aux_sym__call_arguments_repeat1] = 270,
        [anon_sym_COMMA] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_RBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [92] = {
        [anon_sym_RPAREN] = 384,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [93] = {
        [aux_sym__call_arguments_repeat1] = 316,
        [anon_sym_COMMA] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_LBRACK] = 316,
        [anon_sym_RBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [94] = {
        [aux_sym__call_arguments_repeat1] = 338,
        [anon_sym_COMMA] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_LBRACK] = 338,
        [anon_sym_RBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [95] = {
        [sym_identifier] = 386,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [96] = {
        [sym__argument] = 388,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 390,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [97] = {
        [aux_sym__call_arguments_repeat1] = 392,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 394,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [98] = {
        [aux_sym__call_arguments_repeat1] = 378,
        [anon_sym_COMMA] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_RBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [99] = {
        [anon_sym_RBRACK] = 396,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [100] = {
        [sym__argument] = 398,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [101] = {
        [aux_sym__call_arguments_repeat1] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [anon_sym_RBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [102] = {
        [aux_sym__call_arguments_repeat1] = 402,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 404,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [103] = {
        [anon_sym_RBRACK] = 406,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [104] = {
        [aux_sym__call_arguments_repeat1] = 408,
        [anon_sym_COMMA] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_LBRACK] = 408,
        [anon_sym_RBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [105] = {
        [aux_sym__call_arguments_repeat1] = 410,
        [anon_sym_COMMA] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [anon_sym_RBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [106] = {
        [anon_sym_RBRACK] = 412,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [107] = {
        [sym_then_block] = 400,
        [sym__then_else_block] = 400,
        [sym__terminator] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_then] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [108] = {
        [sym_then_block] = 408,
        [sym__then_else_block] = 408,
        [sym__terminator] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_then] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [109] = {
        [sym_then_block] = 410,
        [sym__then_else_block] = 410,
        [sym__terminator] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_then] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [110] = {
        [sym_else_block] = 414,
        [anon_sym_end] = 416,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [111] = {
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [anon_sym_RPAREN] = 420,
        [anon_sym_while] = 420,
        [anon_sym_until] = 420,
        [anon_sym_if] = 420,
        [anon_sym_unless] = 420,
        [sym_comment] = 48,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [112] = {
        [sym__statement] = 422,
        [sym__declaration] = 424,
        [sym_method_declaration] = 426,
        [sym_class_declaration] = 426,
        [sym_module_declaration] = 426,
        [sym_while_statement] = 424,
        [sym_until_statement] = 424,
        [sym_if_statement] = 424,
        [sym_unless_statement] = 424,
        [sym_if_modifier] = 424,
        [sym_unless_modifier] = 424,
        [sym_while_modifier] = 424,
        [sym_until_modifier] = 424,
        [sym_else_block] = 428,
        [sym__call] = 430,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 424,
        [sym__argument] = 432,
        [sym__primary] = 434,
        [sym_scope_resolution_expression] = 436,
        [sym_subscript_expression] = 436,
        [sym__variable] = 436,
        [anon_sym_end] = 428,
        [anon_sym_undef] = 438,
        [anon_sym_alias] = 440,
        [anon_sym_def] = 442,
        [anon_sym_LPAREN] = 444,
        [anon_sym_class] = 446,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_module] = 450,
        [anon_sym_while] = 452,
        [anon_sym_until] = 454,
        [anon_sym_if] = 456,
        [anon_sym_unless] = 458,
        [anon_sym_else] = 428,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 460,
        [anon_sym_self] = 460,
        [sym_identifier] = 460,
        [sym_comment] = 48,
        [sym_symbol] = 432,
        [sym__line_break] = 48,
    },
    [113] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym_then_block] = 328,
        [sym_else_block] = 326,
        [sym__then_else_block] = 328,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [sym__terminator] = 328,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_then] = 328,
        [anon_sym_else] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 328,
    },
    [114] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym_else_block] = 326,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_else] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
    },
    [115] = {
        [sym_else_block] = 462,
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 466,
        [anon_sym_end] = 462,
        [anon_sym_while] = 468,
        [anon_sym_until] = 470,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 474,
        [anon_sym_else] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [116] = {
        [sym_else_block] = 70,
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_while] = 70,
        [anon_sym_until] = 70,
        [anon_sym_if] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_else] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [117] = {
        [sym_else_block] = 72,
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_while] = 72,
        [anon_sym_until] = 72,
        [anon_sym_if] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_else] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [118] = {
        [anon_sym_do] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [119] = {
        [sym_else_block] = 78,
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [anon_sym_else] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [120] = {
        [sym_else_block] = 80,
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_COLON_COLON] = 478,
        [anon_sym_while] = 80,
        [anon_sym_until] = 80,
        [anon_sym_if] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_else] = 80,
        [anon_sym_LBRACK] = 480,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [121] = {
        [sym_else_block] = 86,
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [anon_sym_end] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_else] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [122] = {
        [sym__function_name] = 482,
        [anon_sym_PIPE] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_LT] = 484,
        [sym_identifier] = 484,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_LT_EQ_GT] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_EQ_EQ_EQ] = 484,
        [anon_sym_EQ_TILDE] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_STAR_STAR] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_TILDE] = 484,
        [anon_sym_PLUS_AT] = 484,
        [anon_sym_DASH_AT] = 484,
        [anon_sym_LBRACK_RBRACK] = 484,
        [anon_sym_LBRACK_RBRACK_EQ] = 484,
        [sym__line_break] = 48,
    },
    [123] = {
        [sym__function_name] = 486,
        [anon_sym_PIPE] = 94,
        [anon_sym_STAR] = 94,
        [anon_sym_AMP] = 94,
        [anon_sym_LT] = 94,
        [sym_identifier] = 94,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 94,
        [anon_sym_CARET] = 94,
        [anon_sym_LT_EQ_GT] = 94,
        [anon_sym_EQ_EQ] = 94,
        [anon_sym_EQ_EQ_EQ] = 94,
        [anon_sym_EQ_TILDE] = 94,
        [anon_sym_GT] = 94,
        [anon_sym_GT_EQ] = 94,
        [anon_sym_LT_EQ] = 94,
        [anon_sym_PLUS] = 94,
        [anon_sym_DASH] = 94,
        [anon_sym_SLASH] = 94,
        [anon_sym_PERCENT] = 94,
        [anon_sym_STAR_STAR] = 94,
        [anon_sym_LT_LT] = 94,
        [anon_sym_GT_GT] = 94,
        [anon_sym_TILDE] = 94,
        [anon_sym_PLUS_AT] = 94,
        [anon_sym_DASH_AT] = 94,
        [anon_sym_LBRACK_RBRACK] = 94,
        [anon_sym_LBRACK_RBRACK_EQ] = 94,
        [sym__line_break] = 48,
    },
    [124] = {
        [sym__function_name] = 488,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 98,
        [anon_sym_CARET] = 98,
        [anon_sym_LT_EQ_GT] = 98,
        [anon_sym_EQ_EQ] = 98,
        [anon_sym_EQ_EQ_EQ] = 98,
        [anon_sym_EQ_TILDE] = 98,
        [anon_sym_GT] = 98,
        [anon_sym_GT_EQ] = 98,
        [anon_sym_LT_EQ] = 98,
        [anon_sym_PLUS] = 98,
        [anon_sym_DASH] = 98,
        [anon_sym_SLASH] = 98,
        [anon_sym_PERCENT] = 98,
        [anon_sym_STAR_STAR] = 98,
        [anon_sym_LT_LT] = 98,
        [anon_sym_GT_GT] = 98,
        [anon_sym_TILDE] = 98,
        [anon_sym_PLUS_AT] = 98,
        [anon_sym_DASH_AT] = 98,
        [anon_sym_LBRACK_RBRACK] = 98,
        [anon_sym_LBRACK_RBRACK_EQ] = 98,
        [sym__line_break] = 48,
    },
    [125] = {
        [sym__statement] = 490,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 492,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [126] = {
        [sym_identifier] = 494,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [127] = {
        [sym_identifier] = 496,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [128] = {
        [sym_identifier] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [129] = {
        [sym_condition] = 500,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [130] = {
        [sym_condition] = 502,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [131] = {
        [sym_condition] = 504,
        [sym__expression] = 166,
        [sym__argument] = 168,
        [sym__primary] = 170,
        [sym_scope_resolution_expression] = 172,
        [sym_subscript_expression] = 172,
        [sym__variable] = 172,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 48,
        [sym_symbol] = 168,
        [sym__line_break] = 48,
    },
    [132] = {
        [sym_condition] = 506,
        [sym__expression] = 182,
        [sym__argument] = 184,
        [sym__primary] = 186,
        [sym_scope_resolution_expression] = 188,
        [sym_subscript_expression] = 188,
        [sym__variable] = 188,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym_symbol] = 184,
        [sym__line_break] = 48,
    },
    [133] = {
        [sym_else_block] = 216,
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_while] = 216,
        [anon_sym_until] = 216,
        [anon_sym_if] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_else] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [134] = {
        [sym_then_block] = 508,
        [sym__then_else_block] = 510,
        [sym__terminator] = 290,
        [anon_sym_then] = 290,
        [sym_comment] = 48,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 294,
    },
    [135] = {
        [sym_else_block] = 512,
        [anon_sym_end] = 514,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [136] = {
        [sym_else_block] = 420,
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [anon_sym_end] = 420,
        [anon_sym_while] = 420,
        [anon_sym_until] = 420,
        [anon_sym_if] = 420,
        [anon_sym_unless] = 420,
        [anon_sym_else] = 420,
        [sym_comment] = 48,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [137] = {
        [anon_sym_end] = 516,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [138] = {
        [sym_else_block] = 518,
        [sym__terminator] = 518,
        [aux_sym_program_repeat1] = 518,
        [anon_sym_end] = 518,
        [anon_sym_while] = 518,
        [anon_sym_until] = 518,
        [anon_sym_if] = 518,
        [anon_sym_unless] = 518,
        [anon_sym_else] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [139] = {
        [sym__statement] = 520,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 534,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [140] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 562,
        [anon_sym_end] = 564,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [141] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_while] = 70,
        [anon_sym_until] = 70,
        [anon_sym_if] = 70,
        [anon_sym_unless] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [142] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_while] = 72,
        [anon_sym_until] = 72,
        [anon_sym_if] = 72,
        [anon_sym_unless] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [143] = {
        [anon_sym_do] = 574,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [144] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [145] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_COLON_COLON] = 576,
        [anon_sym_while] = 80,
        [anon_sym_until] = 80,
        [anon_sym_if] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_LBRACK] = 578,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [146] = {
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [anon_sym_end] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [147] = {
        [sym__function_name] = 580,
        [anon_sym_PIPE] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_AMP] = 582,
        [anon_sym_LT] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 582,
        [anon_sym_CARET] = 582,
        [anon_sym_LT_EQ_GT] = 582,
        [anon_sym_EQ_EQ] = 582,
        [anon_sym_EQ_EQ_EQ] = 582,
        [anon_sym_EQ_TILDE] = 582,
        [anon_sym_GT] = 582,
        [anon_sym_GT_EQ] = 582,
        [anon_sym_LT_EQ] = 582,
        [anon_sym_PLUS] = 582,
        [anon_sym_DASH] = 582,
        [anon_sym_SLASH] = 582,
        [anon_sym_PERCENT] = 582,
        [anon_sym_STAR_STAR] = 582,
        [anon_sym_LT_LT] = 582,
        [anon_sym_GT_GT] = 582,
        [anon_sym_TILDE] = 582,
        [anon_sym_PLUS_AT] = 582,
        [anon_sym_DASH_AT] = 582,
        [anon_sym_LBRACK_RBRACK] = 582,
        [anon_sym_LBRACK_RBRACK_EQ] = 582,
        [sym__line_break] = 48,
    },
    [148] = {
        [sym__function_name] = 584,
        [anon_sym_PIPE] = 94,
        [anon_sym_STAR] = 94,
        [anon_sym_AMP] = 94,
        [anon_sym_LT] = 94,
        [sym_identifier] = 94,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 94,
        [anon_sym_CARET] = 94,
        [anon_sym_LT_EQ_GT] = 94,
        [anon_sym_EQ_EQ] = 94,
        [anon_sym_EQ_EQ_EQ] = 94,
        [anon_sym_EQ_TILDE] = 94,
        [anon_sym_GT] = 94,
        [anon_sym_GT_EQ] = 94,
        [anon_sym_LT_EQ] = 94,
        [anon_sym_PLUS] = 94,
        [anon_sym_DASH] = 94,
        [anon_sym_SLASH] = 94,
        [anon_sym_PERCENT] = 94,
        [anon_sym_STAR_STAR] = 94,
        [anon_sym_LT_LT] = 94,
        [anon_sym_GT_GT] = 94,
        [anon_sym_TILDE] = 94,
        [anon_sym_PLUS_AT] = 94,
        [anon_sym_DASH_AT] = 94,
        [anon_sym_LBRACK_RBRACK] = 94,
        [anon_sym_LBRACK_RBRACK_EQ] = 94,
        [sym__line_break] = 48,
    },
    [149] = {
        [sym__function_name] = 586,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 98,
        [anon_sym_CARET] = 98,
        [anon_sym_LT_EQ_GT] = 98,
        [anon_sym_EQ_EQ] = 98,
        [anon_sym_EQ_EQ_EQ] = 98,
        [anon_sym_EQ_TILDE] = 98,
        [anon_sym_GT] = 98,
        [anon_sym_GT_EQ] = 98,
        [anon_sym_LT_EQ] = 98,
        [anon_sym_PLUS] = 98,
        [anon_sym_DASH] = 98,
        [anon_sym_SLASH] = 98,
        [anon_sym_PERCENT] = 98,
        [anon_sym_STAR_STAR] = 98,
        [anon_sym_LT_LT] = 98,
        [anon_sym_GT_GT] = 98,
        [anon_sym_TILDE] = 98,
        [anon_sym_PLUS_AT] = 98,
        [anon_sym_DASH_AT] = 98,
        [anon_sym_LBRACK_RBRACK] = 98,
        [anon_sym_LBRACK_RBRACK_EQ] = 98,
        [sym__line_break] = 48,
    },
    [150] = {
        [sym__statement] = 588,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 590,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [151] = {
        [sym_identifier] = 592,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [152] = {
        [sym_identifier] = 594,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [153] = {
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [154] = {
        [sym_condition] = 598,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [155] = {
        [sym_condition] = 600,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [156] = {
        [sym_condition] = 602,
        [sym__expression] = 166,
        [sym__argument] = 168,
        [sym__primary] = 170,
        [sym_scope_resolution_expression] = 172,
        [sym_subscript_expression] = 172,
        [sym__variable] = 172,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 48,
        [sym_symbol] = 168,
        [sym__line_break] = 48,
    },
    [157] = {
        [sym_condition] = 604,
        [sym__expression] = 182,
        [sym__argument] = 184,
        [sym__primary] = 186,
        [sym_scope_resolution_expression] = 188,
        [sym_subscript_expression] = 188,
        [sym__variable] = 188,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym_symbol] = 184,
        [sym__line_break] = 48,
    },
    [158] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_while] = 216,
        [anon_sym_until] = 216,
        [anon_sym_if] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [159] = {
        [sym_then_block] = 606,
        [sym__then_else_block] = 608,
        [sym__terminator] = 290,
        [anon_sym_then] = 290,
        [sym_comment] = 48,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 294,
    },
    [160] = {
        [sym_else_block] = 610,
        [anon_sym_end] = 612,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [161] = {
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [anon_sym_end] = 420,
        [anon_sym_while] = 420,
        [anon_sym_until] = 420,
        [anon_sym_if] = 420,
        [anon_sym_unless] = 420,
        [sym_comment] = 48,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [162] = {
        [anon_sym_end] = 614,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [163] = {
        [sym__terminator] = 518,
        [aux_sym_program_repeat1] = 518,
        [anon_sym_end] = 518,
        [anon_sym_while] = 518,
        [anon_sym_until] = 518,
        [anon_sym_if] = 518,
        [anon_sym_unless] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [164] = {
        [sym__terminator] = 616,
        [aux_sym_program_repeat1] = 616,
        [anon_sym_end] = 616,
        [anon_sym_while] = 616,
        [anon_sym_until] = 616,
        [anon_sym_if] = 616,
        [anon_sym_unless] = 616,
        [sym_comment] = 48,
        [sym__line_break] = 616,
        [anon_sym_SEMI] = 616,
    },
    [165] = {
        [sym_then_block] = 618,
        [sym__then_elsif_else_block] = 620,
        [sym__terminator] = 622,
        [anon_sym_then] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 626,
    },
    [166] = {
        [sym_then_block] = 296,
        [sym__then_elsif_else_block] = 296,
        [sym__terminator] = 296,
        [anon_sym_then] = 296,
        [sym_comment] = 48,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [167] = {
        [sym_then_block] = 78,
        [sym__then_elsif_else_block] = 78,
        [sym__terminator] = 78,
        [anon_sym_then] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [168] = {
        [sym_then_block] = 80,
        [sym__then_elsif_else_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 630,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [169] = {
        [sym_then_block] = 86,
        [sym__then_elsif_else_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_then] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [170] = {
        [sym__statement] = 632,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 634,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [171] = {
        [sym_identifier] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [172] = {
        [sym_then_block] = 216,
        [sym__then_elsif_else_block] = 216,
        [sym__terminator] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_then] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [173] = {
        [sym_then_block] = 236,
        [sym__then_elsif_else_block] = 236,
        [sym__terminator] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_then] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [174] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 638,
        [anon_sym_RPAREN] = 640,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [175] = {
        [sym_then_block] = 270,
        [sym__then_elsif_else_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_then] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [176] = {
        [anon_sym_RPAREN] = 642,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [177] = {
        [sym_then_block] = 316,
        [sym__then_elsif_else_block] = 316,
        [sym__terminator] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_then] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [178] = {
        [sym_then_block] = 338,
        [sym__then_elsif_else_block] = 338,
        [sym__terminator] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_then] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [179] = {
        [sym_identifier] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [180] = {
        [sym__argument] = 646,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 648,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [181] = {
        [aux_sym__call_arguments_repeat1] = 650,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 652,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [182] = {
        [sym_then_block] = 378,
        [sym__then_elsif_else_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_then] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [183] = {
        [anon_sym_RBRACK] = 654,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [184] = {
        [sym_then_block] = 400,
        [sym__then_elsif_else_block] = 400,
        [sym__terminator] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_then] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [185] = {
        [sym_then_block] = 408,
        [sym__then_elsif_else_block] = 408,
        [sym__terminator] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_then] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [186] = {
        [sym_then_block] = 410,
        [sym__then_elsif_else_block] = 410,
        [sym__terminator] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_then] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [187] = {
        [sym_else_block] = 656,
        [aux_sym__then_elsif_else_block_repeat1] = 658,
        [anon_sym_end] = 660,
        [anon_sym_else] = 418,
        [anon_sym_elsif] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [188] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_while] = 664,
        [anon_sym_until] = 664,
        [anon_sym_if] = 664,
        [anon_sym_unless] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [189] = {
        [sym__statement] = 666,
        [sym__declaration] = 668,
        [sym_method_declaration] = 670,
        [sym_class_declaration] = 670,
        [sym_module_declaration] = 670,
        [sym_while_statement] = 668,
        [sym_until_statement] = 668,
        [sym_if_statement] = 668,
        [sym_unless_statement] = 668,
        [sym_if_modifier] = 668,
        [sym_unless_modifier] = 668,
        [sym_while_modifier] = 668,
        [sym_until_modifier] = 668,
        [sym_else_block] = 428,
        [sym__call] = 672,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 668,
        [sym__argument] = 674,
        [sym__primary] = 676,
        [sym_scope_resolution_expression] = 678,
        [sym_subscript_expression] = 678,
        [sym__variable] = 678,
        [aux_sym__then_elsif_else_block_repeat1] = 428,
        [anon_sym_end] = 428,
        [anon_sym_undef] = 680,
        [anon_sym_alias] = 682,
        [anon_sym_def] = 684,
        [anon_sym_LPAREN] = 686,
        [anon_sym_class] = 688,
        [anon_sym_COLON_COLON] = 690,
        [anon_sym_module] = 692,
        [anon_sym_while] = 694,
        [anon_sym_until] = 696,
        [anon_sym_if] = 698,
        [anon_sym_unless] = 700,
        [anon_sym_else] = 428,
        [anon_sym_elsif] = 428,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 702,
        [anon_sym_self] = 702,
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym_symbol] = 674,
        [sym__line_break] = 48,
    },
    [190] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym_then_block] = 328,
        [sym_else_block] = 326,
        [sym__then_elsif_else_block] = 328,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [sym__terminator] = 328,
        [aux_sym__then_elsif_else_block_repeat1] = 326,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_then] = 328,
        [anon_sym_else] = 326,
        [anon_sym_elsif] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 328,
    },
    [191] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym_else_block] = 326,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [aux_sym__then_elsif_else_block_repeat1] = 326,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_else] = 326,
        [anon_sym_elsif] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
    },
    [192] = {
        [sym_else_block] = 462,
        [sym__terminator] = 704,
        [aux_sym_program_repeat1] = 706,
        [aux_sym__then_elsif_else_block_repeat1] = 462,
        [anon_sym_end] = 462,
        [anon_sym_while] = 708,
        [anon_sym_until] = 710,
        [anon_sym_if] = 712,
        [anon_sym_unless] = 714,
        [anon_sym_else] = 462,
        [anon_sym_elsif] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [193] = {
        [sym_else_block] = 70,
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [aux_sym__then_elsif_else_block_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_while] = 70,
        [anon_sym_until] = 70,
        [anon_sym_if] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_else] = 70,
        [anon_sym_elsif] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [194] = {
        [sym_else_block] = 72,
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [aux_sym__then_elsif_else_block_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_while] = 72,
        [anon_sym_until] = 72,
        [anon_sym_if] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_else] = 72,
        [anon_sym_elsif] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [195] = {
        [anon_sym_do] = 716,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [196] = {
        [sym_else_block] = 78,
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [aux_sym__then_elsif_else_block_repeat1] = 78,
        [anon_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [anon_sym_else] = 78,
        [anon_sym_elsif] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [197] = {
        [sym_else_block] = 80,
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [aux_sym__then_elsif_else_block_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_COLON_COLON] = 718,
        [anon_sym_while] = 80,
        [anon_sym_until] = 80,
        [anon_sym_if] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_else] = 80,
        [anon_sym_elsif] = 80,
        [anon_sym_LBRACK] = 720,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [198] = {
        [sym_else_block] = 86,
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [aux_sym__then_elsif_else_block_repeat1] = 86,
        [anon_sym_end] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_else] = 86,
        [anon_sym_elsif] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [199] = {
        [sym__function_name] = 722,
        [anon_sym_PIPE] = 724,
        [anon_sym_STAR] = 724,
        [anon_sym_AMP] = 724,
        [anon_sym_LT] = 724,
        [sym_identifier] = 724,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 724,
        [anon_sym_CARET] = 724,
        [anon_sym_LT_EQ_GT] = 724,
        [anon_sym_EQ_EQ] = 724,
        [anon_sym_EQ_EQ_EQ] = 724,
        [anon_sym_EQ_TILDE] = 724,
        [anon_sym_GT] = 724,
        [anon_sym_GT_EQ] = 724,
        [anon_sym_LT_EQ] = 724,
        [anon_sym_PLUS] = 724,
        [anon_sym_DASH] = 724,
        [anon_sym_SLASH] = 724,
        [anon_sym_PERCENT] = 724,
        [anon_sym_STAR_STAR] = 724,
        [anon_sym_LT_LT] = 724,
        [anon_sym_GT_GT] = 724,
        [anon_sym_TILDE] = 724,
        [anon_sym_PLUS_AT] = 724,
        [anon_sym_DASH_AT] = 724,
        [anon_sym_LBRACK_RBRACK] = 724,
        [anon_sym_LBRACK_RBRACK_EQ] = 724,
        [sym__line_break] = 48,
    },
    [200] = {
        [sym__function_name] = 726,
        [anon_sym_PIPE] = 94,
        [anon_sym_STAR] = 94,
        [anon_sym_AMP] = 94,
        [anon_sym_LT] = 94,
        [sym_identifier] = 94,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 94,
        [anon_sym_CARET] = 94,
        [anon_sym_LT_EQ_GT] = 94,
        [anon_sym_EQ_EQ] = 94,
        [anon_sym_EQ_EQ_EQ] = 94,
        [anon_sym_EQ_TILDE] = 94,
        [anon_sym_GT] = 94,
        [anon_sym_GT_EQ] = 94,
        [anon_sym_LT_EQ] = 94,
        [anon_sym_PLUS] = 94,
        [anon_sym_DASH] = 94,
        [anon_sym_SLASH] = 94,
        [anon_sym_PERCENT] = 94,
        [anon_sym_STAR_STAR] = 94,
        [anon_sym_LT_LT] = 94,
        [anon_sym_GT_GT] = 94,
        [anon_sym_TILDE] = 94,
        [anon_sym_PLUS_AT] = 94,
        [anon_sym_DASH_AT] = 94,
        [anon_sym_LBRACK_RBRACK] = 94,
        [anon_sym_LBRACK_RBRACK_EQ] = 94,
        [sym__line_break] = 48,
    },
    [201] = {
        [sym__function_name] = 728,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 98,
        [anon_sym_CARET] = 98,
        [anon_sym_LT_EQ_GT] = 98,
        [anon_sym_EQ_EQ] = 98,
        [anon_sym_EQ_EQ_EQ] = 98,
        [anon_sym_EQ_TILDE] = 98,
        [anon_sym_GT] = 98,
        [anon_sym_GT_EQ] = 98,
        [anon_sym_LT_EQ] = 98,
        [anon_sym_PLUS] = 98,
        [anon_sym_DASH] = 98,
        [anon_sym_SLASH] = 98,
        [anon_sym_PERCENT] = 98,
        [anon_sym_STAR_STAR] = 98,
        [anon_sym_LT_LT] = 98,
        [anon_sym_GT_GT] = 98,
        [anon_sym_TILDE] = 98,
        [anon_sym_PLUS_AT] = 98,
        [anon_sym_DASH_AT] = 98,
        [anon_sym_LBRACK_RBRACK] = 98,
        [anon_sym_LBRACK_RBRACK_EQ] = 98,
        [sym__line_break] = 48,
    },
    [202] = {
        [sym__statement] = 730,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 732,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [203] = {
        [sym_identifier] = 734,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [204] = {
        [sym_identifier] = 736,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [205] = {
        [sym_identifier] = 738,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [206] = {
        [sym_condition] = 740,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [207] = {
        [sym_condition] = 742,
        [sym__expression] = 148,
        [sym__argument] = 150,
        [sym__primary] = 152,
        [sym_scope_resolution_expression] = 154,
        [sym_subscript_expression] = 154,
        [sym__variable] = 154,
        [anon_sym_LPAREN] = 156,
        [anon_sym_COLON_COLON] = 158,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [sym_identifier] = 160,
        [sym_comment] = 48,
        [sym_symbol] = 150,
        [sym__line_break] = 48,
    },
    [208] = {
        [sym_condition] = 744,
        [sym__expression] = 166,
        [sym__argument] = 168,
        [sym__primary] = 170,
        [sym_scope_resolution_expression] = 172,
        [sym_subscript_expression] = 172,
        [sym__variable] = 172,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 48,
        [sym_symbol] = 168,
        [sym__line_break] = 48,
    },
    [209] = {
        [sym_condition] = 746,
        [sym__expression] = 182,
        [sym__argument] = 184,
        [sym__primary] = 186,
        [sym_scope_resolution_expression] = 188,
        [sym_subscript_expression] = 188,
        [sym__variable] = 188,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 48,
        [sym_symbol] = 184,
        [sym__line_break] = 48,
    },
    [210] = {
        [sym_else_block] = 216,
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [aux_sym__then_elsif_else_block_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_while] = 216,
        [anon_sym_until] = 216,
        [anon_sym_if] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_else] = 216,
        [anon_sym_elsif] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [211] = {
        [sym_then_block] = 748,
        [sym__then_else_block] = 750,
        [sym__terminator] = 290,
        [anon_sym_then] = 290,
        [sym_comment] = 48,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 294,
    },
    [212] = {
        [sym_else_block] = 752,
        [anon_sym_end] = 754,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [213] = {
        [sym_else_block] = 420,
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [aux_sym__then_elsif_else_block_repeat1] = 420,
        [anon_sym_end] = 420,
        [anon_sym_while] = 420,
        [anon_sym_until] = 420,
        [anon_sym_if] = 420,
        [anon_sym_unless] = 420,
        [anon_sym_else] = 420,
        [anon_sym_elsif] = 420,
        [sym_comment] = 48,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [214] = {
        [anon_sym_end] = 756,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [215] = {
        [sym_else_block] = 518,
        [sym__terminator] = 518,
        [aux_sym_program_repeat1] = 518,
        [aux_sym__then_elsif_else_block_repeat1] = 518,
        [anon_sym_end] = 518,
        [anon_sym_while] = 518,
        [anon_sym_until] = 518,
        [anon_sym_if] = 518,
        [anon_sym_unless] = 518,
        [anon_sym_else] = 518,
        [anon_sym_elsif] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [216] = {
        [sym_else_block] = 616,
        [sym__terminator] = 616,
        [aux_sym_program_repeat1] = 616,
        [aux_sym__then_elsif_else_block_repeat1] = 616,
        [anon_sym_end] = 616,
        [anon_sym_while] = 616,
        [anon_sym_until] = 616,
        [anon_sym_if] = 616,
        [anon_sym_unless] = 616,
        [anon_sym_else] = 616,
        [anon_sym_elsif] = 616,
        [sym_comment] = 48,
        [sym__line_break] = 616,
        [anon_sym_SEMI] = 616,
    },
    [217] = {
        [sym_then_block] = 758,
        [sym__then_elsif_else_block] = 760,
        [sym__terminator] = 622,
        [anon_sym_then] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 626,
    },
    [218] = {
        [sym_else_block] = 762,
        [aux_sym__then_elsif_else_block_repeat1] = 764,
        [anon_sym_end] = 766,
        [anon_sym_else] = 418,
        [anon_sym_elsif] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [219] = {
        [sym_else_block] = 664,
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [aux_sym__then_elsif_else_block_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_while] = 664,
        [anon_sym_until] = 664,
        [anon_sym_if] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_else] = 664,
        [anon_sym_elsif] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [220] = {
        [anon_sym_end] = 768,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [221] = {
        [sym_else_block] = 770,
        [anon_sym_end] = 768,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [222] = {
        [sym_else_block] = 772,
        [sym__terminator] = 772,
        [aux_sym_program_repeat1] = 772,
        [aux_sym__then_elsif_else_block_repeat1] = 772,
        [anon_sym_end] = 772,
        [anon_sym_while] = 772,
        [anon_sym_until] = 772,
        [anon_sym_if] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_else] = 772,
        [anon_sym_elsif] = 772,
        [sym_comment] = 48,
        [sym__line_break] = 772,
        [anon_sym_SEMI] = 772,
    },
    [223] = {
        [sym_condition] = 774,
        [sym__expression] = 776,
        [sym__argument] = 778,
        [sym__primary] = 780,
        [sym_scope_resolution_expression] = 782,
        [sym_subscript_expression] = 782,
        [sym__variable] = 782,
        [anon_sym_LPAREN] = 784,
        [anon_sym_COLON_COLON] = 786,
        [anon_sym_nil] = 788,
        [anon_sym_self] = 788,
        [sym_identifier] = 788,
        [sym_comment] = 48,
        [sym_symbol] = 778,
        [sym__line_break] = 48,
    },
    [224] = {
        [sym_then_block] = 790,
        [sym__terminator] = 622,
        [anon_sym_then] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 626,
    },
    [225] = {
        [sym_then_block] = 296,
        [sym__terminator] = 296,
        [anon_sym_then] = 296,
        [sym_comment] = 48,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [226] = {
        [sym_then_block] = 78,
        [sym__terminator] = 78,
        [anon_sym_then] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [227] = {
        [sym_then_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 792,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 794,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [228] = {
        [sym_then_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_then] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [229] = {
        [sym__statement] = 796,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 798,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [230] = {
        [sym_identifier] = 800,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [231] = {
        [sym_then_block] = 216,
        [sym__terminator] = 216,
        [anon_sym_COLON_COLON] = 216,
        [anon_sym_then] = 216,
        [anon_sym_LBRACK] = 216,
        [sym_comment] = 48,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [232] = {
        [sym_then_block] = 236,
        [sym__terminator] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_then] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [233] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 802,
        [anon_sym_RPAREN] = 804,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [234] = {
        [sym_then_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_then] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [235] = {
        [anon_sym_RPAREN] = 806,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [236] = {
        [sym_then_block] = 316,
        [sym__terminator] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_then] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [237] = {
        [sym_then_block] = 338,
        [sym__terminator] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_then] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [238] = {
        [sym_identifier] = 808,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [239] = {
        [sym__argument] = 810,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 812,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [240] = {
        [aux_sym__call_arguments_repeat1] = 814,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 816,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [241] = {
        [sym_then_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_then] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [242] = {
        [anon_sym_RBRACK] = 818,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [243] = {
        [sym_then_block] = 400,
        [sym__terminator] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_then] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [244] = {
        [sym_then_block] = 408,
        [sym__terminator] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_then] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [245] = {
        [sym_then_block] = 410,
        [sym__terminator] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_then] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [246] = {
        [sym_else_block] = 820,
        [aux_sym__then_elsif_else_block_repeat1] = 822,
        [anon_sym_end] = 820,
        [anon_sym_else] = 820,
        [anon_sym_elsif] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [247] = {
        [sym_else_block] = 824,
        [anon_sym_end] = 824,
        [anon_sym_else] = 824,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [248] = {
        [anon_sym_end] = 826,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [249] = {
        [sym_else_block] = 828,
        [sym__terminator] = 828,
        [aux_sym_program_repeat1] = 828,
        [aux_sym__then_elsif_else_block_repeat1] = 828,
        [anon_sym_end] = 828,
        [anon_sym_while] = 828,
        [anon_sym_until] = 828,
        [anon_sym_if] = 828,
        [anon_sym_unless] = 828,
        [anon_sym_else] = 828,
        [anon_sym_elsif] = 828,
        [sym_comment] = 48,
        [sym__line_break] = 828,
        [anon_sym_SEMI] = 828,
    },
    [250] = {
        [sym_else_block] = 830,
        [sym__terminator] = 830,
        [aux_sym_program_repeat1] = 830,
        [aux_sym__then_elsif_else_block_repeat1] = 830,
        [anon_sym_end] = 830,
        [anon_sym_while] = 830,
        [anon_sym_until] = 830,
        [anon_sym_if] = 830,
        [anon_sym_unless] = 830,
        [anon_sym_else] = 830,
        [anon_sym_elsif] = 830,
        [sym_comment] = 48,
        [sym__line_break] = 830,
        [anon_sym_SEMI] = 830,
    },
    [251] = {
        [sym__statement_block] = 832,
        [sym__do_block] = 834,
        [sym__terminator] = 836,
        [anon_sym_do] = 838,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [252] = {
        [sym__statement_block] = 296,
        [sym__do_block] = 296,
        [sym__terminator] = 296,
        [anon_sym_do] = 296,
        [sym_comment] = 48,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [253] = {
        [sym__statement_block] = 78,
        [sym__do_block] = 78,
        [sym__terminator] = 78,
        [anon_sym_do] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [254] = {
        [sym__statement_block] = 80,
        [sym__do_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_do] = 80,
        [anon_sym_COLON_COLON] = 844,
        [anon_sym_LBRACK] = 846,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [255] = {
        [sym__statement_block] = 86,
        [sym__do_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_do] = 86,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_LBRACK] = 86,
        [sym_comment] = 48,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [256] = {
        [sym__statement] = 848,
        [sym__declaration] = 102,
        [sym_method_declaration] = 104,
        [sym_class_declaration] = 104,
        [sym_module_declaration] = 104,
        [sym_while_statement] = 102,
        [sym_until_statement] = 102,
        [sym_if_statement] = 102,
        [sym_unless_statement] = 102,
        [sym_if_modifier] = 102,
        [sym_unless_modifier] = 102,
        [sym_while_modifier] = 102,
        [sym_until_modifier] = 102,
        [sym__call] = 106,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 102,
        [sym__argument] = 108,
        [sym__primary] = 110,
        [sym_scope_resolution_expression] = 112,
        [sym_subscript_expression] = 112,
        [sym__variable] = 112,
        [anon_sym_undef] = 114,
        [anon_sym_alias] = 116,
        [anon_sym_def] = 118,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 850,
        [anon_sym_class] = 124,
        [anon_sym_COLON_COLON] = 126,
        [anon_sym_module] = 128,
        [anon_sym_while] = 130,
        [anon_sym_until] = 132,
        [anon_sym_if] = 134,
        [anon_sym_unless] = 136,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 138,
        [anon_sym_self] = 138,
        [sym_identifier] = 138,
        [sym_comment] = 48,
        [sym_symbol] = 108,
        [sym__line_break] = 48,
    },
    [257] = {
        [sym_identifier] = 852,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [258] = {
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
    [259] = {
        [sym__statement_block] = 236,
        [sym__do_block] = 236,
        [sym__terminator] = 236,
        [anon_sym_do] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [260] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 854,
        [anon_sym_RPAREN] = 856,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [261] = {
        [sym__statement_block] = 270,
        [sym__do_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_do] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [262] = {
        [anon_sym_RPAREN] = 858,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [263] = {
        [sym__statement_block] = 316,
        [sym__do_block] = 316,
        [sym__terminator] = 316,
        [anon_sym_do] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [264] = {
        [sym__statement_block] = 338,
        [sym__do_block] = 338,
        [sym__terminator] = 338,
        [anon_sym_do] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [265] = {
        [sym_identifier] = 860,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [266] = {
        [sym__argument] = 862,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 864,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [267] = {
        [aux_sym__call_arguments_repeat1] = 866,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 868,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [268] = {
        [sym__statement_block] = 378,
        [sym__do_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_do] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [269] = {
        [anon_sym_RBRACK] = 870,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [270] = {
        [sym__statement_block] = 400,
        [sym__do_block] = 400,
        [sym__terminator] = 400,
        [anon_sym_do] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [271] = {
        [sym__statement_block] = 408,
        [sym__do_block] = 408,
        [sym__terminator] = 408,
        [anon_sym_do] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [272] = {
        [sym__statement_block] = 410,
        [sym__do_block] = 410,
        [sym__terminator] = 410,
        [anon_sym_do] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [273] = {
        [sym_else_block] = 872,
        [sym__terminator] = 872,
        [aux_sym_program_repeat1] = 872,
        [aux_sym__then_elsif_else_block_repeat1] = 872,
        [anon_sym_end] = 872,
        [anon_sym_while] = 872,
        [anon_sym_until] = 872,
        [anon_sym_if] = 872,
        [anon_sym_unless] = 872,
        [anon_sym_else] = 872,
        [anon_sym_elsif] = 872,
        [sym_comment] = 48,
        [sym__line_break] = 872,
        [anon_sym_SEMI] = 872,
    },
    [274] = {
        [sym_else_block] = 874,
        [sym__terminator] = 874,
        [aux_sym_program_repeat1] = 874,
        [aux_sym__then_elsif_else_block_repeat1] = 874,
        [anon_sym_end] = 874,
        [anon_sym_while] = 874,
        [anon_sym_until] = 874,
        [anon_sym_if] = 874,
        [anon_sym_unless] = 874,
        [anon_sym_else] = 874,
        [anon_sym_elsif] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 874,
        [anon_sym_SEMI] = 874,
    },
    [275] = {
        [sym__statement] = 876,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 878,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [276] = {
        [sym__statement] = 880,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 882,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [277] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_argument_list] = 328,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym__statement_block] = 328,
        [sym__do_block] = 328,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [sym__terminator] = 328,
        [aux_sym_class_declaration_repeat1] = 328,
        [anon_sym_do] = 328,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_STAR] = 328,
        [anon_sym_AMP] = 328,
        [anon_sym_class] = 326,
        [anon_sym_LT] = 328,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 328,
    },
    [278] = {
        [sym__statement] = 326,
        [sym__declaration] = 326,
        [sym_method_declaration] = 326,
        [sym_class_declaration] = 326,
        [sym_module_declaration] = 326,
        [sym_while_statement] = 326,
        [sym_until_statement] = 326,
        [sym_if_statement] = 326,
        [sym_unless_statement] = 326,
        [sym_if_modifier] = 326,
        [sym_unless_modifier] = 326,
        [sym_while_modifier] = 326,
        [sym_until_modifier] = 326,
        [sym__call] = 326,
        [sym__command] = 326,
        [sym__function_call] = 326,
        [sym__expression] = 326,
        [sym__argument] = 326,
        [sym__primary] = 326,
        [sym_scope_resolution_expression] = 326,
        [sym_subscript_expression] = 326,
        [sym__variable] = 326,
        [anon_sym_end] = 326,
        [anon_sym_undef] = 326,
        [anon_sym_alias] = 326,
        [anon_sym_def] = 326,
        [anon_sym_LPAREN] = 326,
        [anon_sym_class] = 326,
        [anon_sym_COLON_COLON] = 326,
        [anon_sym_module] = 326,
        [anon_sym_while] = 326,
        [anon_sym_until] = 326,
        [anon_sym_if] = 326,
        [anon_sym_unless] = 326,
        [anon_sym_super] = 326,
        [anon_sym_nil] = 326,
        [anon_sym_self] = 326,
        [sym_identifier] = 326,
        [sym_comment] = 48,
        [sym_symbol] = 326,
        [sym__line_break] = 48,
    },
    [279] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 884,
        [anon_sym_end] = 886,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [280] = {
        [sym_else_block] = 888,
        [sym__terminator] = 888,
        [aux_sym_program_repeat1] = 888,
        [aux_sym__then_elsif_else_block_repeat1] = 888,
        [anon_sym_end] = 888,
        [anon_sym_while] = 888,
        [anon_sym_until] = 888,
        [anon_sym_if] = 888,
        [anon_sym_unless] = 888,
        [anon_sym_else] = 888,
        [anon_sym_elsif] = 888,
        [sym_comment] = 48,
        [sym__line_break] = 888,
        [anon_sym_SEMI] = 888,
    },
    [281] = {
        [sym__statement] = 890,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [282] = {
        [anon_sym_end] = 892,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [283] = {
        [sym_else_block] = 894,
        [sym__terminator] = 894,
        [aux_sym_program_repeat1] = 894,
        [aux_sym__then_elsif_else_block_repeat1] = 894,
        [anon_sym_end] = 894,
        [anon_sym_while] = 894,
        [anon_sym_until] = 894,
        [anon_sym_if] = 894,
        [anon_sym_unless] = 894,
        [anon_sym_else] = 894,
        [anon_sym_elsif] = 894,
        [sym_comment] = 48,
        [sym__line_break] = 894,
        [anon_sym_SEMI] = 894,
    },
    [284] = {
        [sym__expression] = 896,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_LPAREN] = 542,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [285] = {
        [sym__expression] = 898,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_LPAREN] = 542,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [286] = {
        [sym__expression] = 900,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_LPAREN] = 542,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [287] = {
        [sym__expression] = 902,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_LPAREN] = 542,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [288] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_end] = 330,
        [anon_sym_while] = 330,
        [anon_sym_until] = 330,
        [anon_sym_if] = 330,
        [anon_sym_unless] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [289] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [sym_comment] = 48,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [290] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_while] = 334,
        [anon_sym_until] = 334,
        [anon_sym_if] = 334,
        [anon_sym_unless] = 334,
        [sym_comment] = 48,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [291] = {
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 336,
        [anon_sym_while] = 336,
        [anon_sym_until] = 336,
        [anon_sym_if] = 336,
        [anon_sym_unless] = 336,
        [sym_comment] = 48,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [292] = {
        [sym_else_block] = 904,
        [sym__terminator] = 904,
        [aux_sym_program_repeat1] = 904,
        [aux_sym__then_elsif_else_block_repeat1] = 904,
        [anon_sym_end] = 904,
        [anon_sym_while] = 904,
        [anon_sym_until] = 904,
        [anon_sym_if] = 904,
        [anon_sym_unless] = 904,
        [anon_sym_else] = 904,
        [anon_sym_elsif] = 904,
        [sym_comment] = 48,
        [sym__line_break] = 904,
        [anon_sym_SEMI] = 904,
    },
    [293] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 906,
        [anon_sym_end] = 342,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [294] = {
        [anon_sym_end] = 344,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [295] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 908,
        [anon_sym_end] = 910,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [296] = {
        [sym_else_block] = 912,
        [sym__terminator] = 912,
        [aux_sym_program_repeat1] = 912,
        [aux_sym__then_elsif_else_block_repeat1] = 912,
        [anon_sym_end] = 912,
        [anon_sym_while] = 912,
        [anon_sym_until] = 912,
        [anon_sym_if] = 912,
        [anon_sym_unless] = 912,
        [anon_sym_else] = 912,
        [anon_sym_elsif] = 912,
        [sym_comment] = 48,
        [sym__line_break] = 912,
        [anon_sym_SEMI] = 912,
    },
    [297] = {
        [anon_sym_end] = 914,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [298] = {
        [sym_else_block] = 916,
        [sym__terminator] = 916,
        [aux_sym_program_repeat1] = 916,
        [aux_sym__then_elsif_else_block_repeat1] = 916,
        [anon_sym_end] = 916,
        [anon_sym_while] = 916,
        [anon_sym_until] = 916,
        [anon_sym_if] = 916,
        [anon_sym_unless] = 916,
        [anon_sym_else] = 916,
        [anon_sym_elsif] = 916,
        [sym_comment] = 48,
        [sym__line_break] = 916,
        [anon_sym_SEMI] = 916,
    },
    [299] = {
        [sym_else_block] = 918,
        [sym__terminator] = 918,
        [aux_sym_program_repeat1] = 918,
        [aux_sym__then_elsif_else_block_repeat1] = 918,
        [anon_sym_end] = 918,
        [anon_sym_while] = 918,
        [anon_sym_until] = 918,
        [anon_sym_if] = 918,
        [anon_sym_unless] = 918,
        [anon_sym_else] = 918,
        [anon_sym_elsif] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 918,
        [anon_sym_SEMI] = 918,
    },
    [300] = {
        [sym__statement_block] = 920,
        [sym__do_block] = 834,
        [sym__terminator] = 836,
        [anon_sym_do] = 838,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [301] = {
        [sym_else_block] = 922,
        [sym__terminator] = 922,
        [aux_sym_program_repeat1] = 922,
        [aux_sym__then_elsif_else_block_repeat1] = 922,
        [anon_sym_end] = 922,
        [anon_sym_while] = 922,
        [anon_sym_until] = 922,
        [anon_sym_if] = 922,
        [anon_sym_unless] = 922,
        [anon_sym_else] = 922,
        [anon_sym_elsif] = 922,
        [sym_comment] = 48,
        [sym__line_break] = 922,
        [anon_sym_SEMI] = 922,
    },
    [302] = {
        [sym__terminator] = 924,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [303] = {
        [sym__statement] = 926,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 928,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [304] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 930,
        [anon_sym_end] = 932,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [305] = {
        [sym_else_block] = 934,
        [sym__terminator] = 934,
        [aux_sym_program_repeat1] = 934,
        [aux_sym__then_elsif_else_block_repeat1] = 934,
        [anon_sym_end] = 934,
        [anon_sym_while] = 934,
        [anon_sym_until] = 934,
        [anon_sym_if] = 934,
        [anon_sym_unless] = 934,
        [anon_sym_else] = 934,
        [anon_sym_elsif] = 934,
        [sym_comment] = 48,
        [sym__line_break] = 934,
        [anon_sym_SEMI] = 934,
    },
    [306] = {
        [anon_sym_end] = 936,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [307] = {
        [sym_else_block] = 938,
        [sym__terminator] = 938,
        [aux_sym_program_repeat1] = 938,
        [aux_sym__then_elsif_else_block_repeat1] = 938,
        [anon_sym_end] = 938,
        [anon_sym_while] = 938,
        [anon_sym_until] = 938,
        [anon_sym_if] = 938,
        [anon_sym_unless] = 938,
        [anon_sym_else] = 938,
        [anon_sym_elsif] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 938,
        [anon_sym_SEMI] = 938,
    },
    [308] = {
        [sym_else_block] = 940,
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 940,
        [aux_sym__then_elsif_else_block_repeat1] = 940,
        [anon_sym_end] = 940,
        [anon_sym_while] = 940,
        [anon_sym_until] = 940,
        [anon_sym_if] = 940,
        [anon_sym_unless] = 940,
        [anon_sym_else] = 940,
        [anon_sym_elsif] = 940,
        [sym_comment] = 48,
        [sym__line_break] = 940,
        [anon_sym_SEMI] = 940,
    },
    [309] = {
        [sym_else_block] = 236,
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [aux_sym__then_elsif_else_block_repeat1] = 236,
        [anon_sym_end] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_while] = 236,
        [anon_sym_until] = 236,
        [anon_sym_if] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_else] = 236,
        [anon_sym_elsif] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [310] = {
        [sym__terminator] = 942,
        [anon_sym_LT] = 944,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [311] = {
        [sym__statement] = 946,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 948,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [312] = {
        [sym_identifier] = 950,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [313] = {
        [sym__terminator] = 952,
        [aux_sym_class_declaration_repeat1] = 954,
        [anon_sym_COLON_COLON] = 956,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [314] = {
        [sym__statement] = 958,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 960,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [315] = {
        [sym__terminator] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [316] = {
        [sym_identifier] = 964,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [317] = {
        [sym__terminator] = 966,
        [aux_sym_class_declaration_repeat1] = 968,
        [anon_sym_COLON_COLON] = 956,
        [sym_comment] = 48,
        [sym__line_break] = 966,
        [anon_sym_SEMI] = 966,
    },
    [318] = {
        [sym__terminator] = 970,
        [sym_comment] = 48,
        [sym__line_break] = 970,
        [anon_sym_SEMI] = 970,
    },
    [319] = {
        [sym__statement] = 972,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 974,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [320] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 976,
        [anon_sym_end] = 978,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [321] = {
        [sym_else_block] = 980,
        [sym__terminator] = 980,
        [aux_sym_program_repeat1] = 980,
        [aux_sym__then_elsif_else_block_repeat1] = 980,
        [anon_sym_end] = 980,
        [anon_sym_while] = 980,
        [anon_sym_until] = 980,
        [anon_sym_if] = 980,
        [anon_sym_unless] = 980,
        [anon_sym_else] = 980,
        [anon_sym_elsif] = 980,
        [sym_comment] = 48,
        [sym__line_break] = 980,
        [anon_sym_SEMI] = 980,
    },
    [322] = {
        [anon_sym_end] = 982,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [323] = {
        [sym_else_block] = 984,
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [aux_sym__then_elsif_else_block_repeat1] = 984,
        [anon_sym_end] = 984,
        [anon_sym_while] = 984,
        [anon_sym_until] = 984,
        [anon_sym_if] = 984,
        [anon_sym_unless] = 984,
        [anon_sym_else] = 984,
        [anon_sym_elsif] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [324] = {
        [sym_else_block] = 986,
        [sym__terminator] = 986,
        [aux_sym_program_repeat1] = 986,
        [aux_sym__then_elsif_else_block_repeat1] = 986,
        [anon_sym_end] = 986,
        [anon_sym_while] = 986,
        [anon_sym_until] = 986,
        [anon_sym_if] = 986,
        [anon_sym_unless] = 986,
        [anon_sym_else] = 986,
        [anon_sym_elsif] = 986,
        [sym_comment] = 48,
        [sym__line_break] = 986,
        [anon_sym_SEMI] = 986,
    },
    [325] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 988,
        [anon_sym_end] = 974,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [326] = {
        [sym_else_block] = 990,
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [aux_sym__then_elsif_else_block_repeat1] = 990,
        [anon_sym_end] = 990,
        [anon_sym_while] = 990,
        [anon_sym_until] = 990,
        [anon_sym_if] = 990,
        [anon_sym_unless] = 990,
        [anon_sym_else] = 990,
        [anon_sym_elsif] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [327] = {
        [anon_sym_end] = 978,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [328] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 992,
        [anon_sym_end] = 994,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [329] = {
        [sym_else_block] = 996,
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [aux_sym__then_elsif_else_block_repeat1] = 996,
        [anon_sym_end] = 996,
        [anon_sym_while] = 996,
        [anon_sym_until] = 996,
        [anon_sym_if] = 996,
        [anon_sym_unless] = 996,
        [anon_sym_else] = 996,
        [anon_sym_elsif] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [330] = {
        [anon_sym_end] = 960,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [331] = {
        [sym_else_block] = 998,
        [sym__terminator] = 998,
        [aux_sym_program_repeat1] = 998,
        [aux_sym__then_elsif_else_block_repeat1] = 998,
        [anon_sym_end] = 998,
        [anon_sym_while] = 998,
        [anon_sym_until] = 998,
        [anon_sym_if] = 998,
        [anon_sym_unless] = 998,
        [anon_sym_else] = 998,
        [anon_sym_elsif] = 998,
        [sym_comment] = 48,
        [sym__line_break] = 998,
        [anon_sym_SEMI] = 998,
    },
    [332] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 1000,
        [anon_sym_RPAREN] = 1002,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [333] = {
        [sym_else_block] = 270,
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [aux_sym__then_elsif_else_block_repeat1] = 270,
        [anon_sym_end] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_else] = 270,
        [anon_sym_elsif] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [334] = {
        [anon_sym_RPAREN] = 1004,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [335] = {
        [sym_else_block] = 316,
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [aux_sym__then_elsif_else_block_repeat1] = 316,
        [anon_sym_end] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_while] = 316,
        [anon_sym_until] = 316,
        [anon_sym_if] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_else] = 316,
        [anon_sym_elsif] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [336] = {
        [sym_else_block] = 338,
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [aux_sym__then_elsif_else_block_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_while] = 338,
        [anon_sym_until] = 338,
        [anon_sym_if] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_else] = 338,
        [anon_sym_elsif] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [337] = {
        [sym_argument_list] = 1006,
        [sym__terminator] = 1008,
        [anon_sym_LPAREN] = 1010,
        [anon_sym_STAR] = 1012,
        [anon_sym_AMP] = 1012,
        [sym_identifier] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [338] = {
        [sym_argument_list] = 1016,
        [sym__terminator] = 1016,
        [anon_sym_LPAREN] = 1016,
        [anon_sym_STAR] = 1016,
        [anon_sym_AMP] = 1016,
        [sym_identifier] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [339] = {
        [sym__terminator] = 1018,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [340] = {
        [sym__statement] = 1020,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1022,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [341] = {
        [sym_argument_list] = 1024,
        [anon_sym_RPAREN] = 1018,
        [anon_sym_STAR] = 1026,
        [anon_sym_AMP] = 1026,
        [sym_identifier] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [342] = {
        [sym_identifier] = 1030,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [343] = {
        [sym__terminator] = 1032,
        [aux_sym_argument_list_repeat1] = 1034,
        [anon_sym_COMMA] = 1036,
        [sym_comment] = 48,
        [sym__line_break] = 1032,
        [anon_sym_SEMI] = 1032,
    },
    [344] = {
        [sym__terminator] = 1038,
        [sym_comment] = 48,
        [sym__line_break] = 1038,
        [anon_sym_SEMI] = 1038,
    },
    [345] = {
        [anon_sym_STAR] = 1040,
        [anon_sym_AMP] = 1040,
        [sym_identifier] = 1042,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [346] = {
        [sym_identifier] = 1044,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [347] = {
        [sym__terminator] = 1046,
        [aux_sym_argument_list_repeat1] = 1048,
        [anon_sym_COMMA] = 1036,
        [sym_comment] = 48,
        [sym__line_break] = 1046,
        [anon_sym_SEMI] = 1046,
    },
    [348] = {
        [sym__terminator] = 1050,
        [sym_comment] = 48,
        [sym__line_break] = 1050,
        [anon_sym_SEMI] = 1050,
    },
    [349] = {
        [sym__terminator] = 1050,
        [aux_sym_argument_list_repeat1] = 1052,
        [anon_sym_COMMA] = 1036,
        [sym_comment] = 48,
        [sym__line_break] = 1050,
        [anon_sym_SEMI] = 1050,
    },
    [350] = {
        [sym__terminator] = 1054,
        [sym_comment] = 48,
        [sym__line_break] = 1054,
        [anon_sym_SEMI] = 1054,
    },
    [351] = {
        [sym__terminator] = 1038,
        [aux_sym_argument_list_repeat1] = 1056,
        [anon_sym_COMMA] = 1036,
        [sym_comment] = 48,
        [sym__line_break] = 1038,
        [anon_sym_SEMI] = 1038,
    },
    [352] = {
        [sym__terminator] = 1058,
        [sym_comment] = 48,
        [sym__line_break] = 1058,
        [anon_sym_SEMI] = 1058,
    },
    [353] = {
        [anon_sym_RPAREN] = 1060,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [354] = {
        [sym__statement] = 1062,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1064,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [355] = {
        [sym_identifier] = 1066,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [356] = {
        [aux_sym_argument_list_repeat1] = 1068,
        [anon_sym_RPAREN] = 1032,
        [anon_sym_COMMA] = 1070,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [357] = {
        [anon_sym_RPAREN] = 1038,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [358] = {
        [anon_sym_STAR] = 1072,
        [anon_sym_AMP] = 1072,
        [sym_identifier] = 1074,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [359] = {
        [sym_identifier] = 1076,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [360] = {
        [aux_sym_argument_list_repeat1] = 1078,
        [anon_sym_RPAREN] = 1046,
        [anon_sym_COMMA] = 1070,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [361] = {
        [anon_sym_RPAREN] = 1050,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [362] = {
        [aux_sym_argument_list_repeat1] = 1080,
        [anon_sym_RPAREN] = 1050,
        [anon_sym_COMMA] = 1070,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [363] = {
        [anon_sym_RPAREN] = 1054,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [364] = {
        [aux_sym_argument_list_repeat1] = 1082,
        [anon_sym_RPAREN] = 1038,
        [anon_sym_COMMA] = 1070,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [365] = {
        [anon_sym_RPAREN] = 1058,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [366] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1084,
        [anon_sym_end] = 1086,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [367] = {
        [sym_else_block] = 1088,
        [sym__terminator] = 1088,
        [aux_sym_program_repeat1] = 1088,
        [aux_sym__then_elsif_else_block_repeat1] = 1088,
        [anon_sym_end] = 1088,
        [anon_sym_while] = 1088,
        [anon_sym_until] = 1088,
        [anon_sym_if] = 1088,
        [anon_sym_unless] = 1088,
        [anon_sym_else] = 1088,
        [anon_sym_elsif] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 1088,
        [anon_sym_SEMI] = 1088,
    },
    [368] = {
        [anon_sym_end] = 1090,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [369] = {
        [sym_else_block] = 1092,
        [sym__terminator] = 1092,
        [aux_sym_program_repeat1] = 1092,
        [aux_sym__then_elsif_else_block_repeat1] = 1092,
        [anon_sym_end] = 1092,
        [anon_sym_while] = 1092,
        [anon_sym_until] = 1092,
        [anon_sym_if] = 1092,
        [anon_sym_unless] = 1092,
        [anon_sym_else] = 1092,
        [anon_sym_elsif] = 1092,
        [sym_comment] = 48,
        [sym__line_break] = 1092,
        [anon_sym_SEMI] = 1092,
    },
    [370] = {
        [sym_else_block] = 1094,
        [sym__terminator] = 1094,
        [aux_sym_program_repeat1] = 1094,
        [aux_sym__then_elsif_else_block_repeat1] = 1094,
        [anon_sym_end] = 1094,
        [anon_sym_while] = 1094,
        [anon_sym_until] = 1094,
        [anon_sym_if] = 1094,
        [anon_sym_unless] = 1094,
        [anon_sym_else] = 1094,
        [anon_sym_elsif] = 1094,
        [sym_comment] = 48,
        [sym__line_break] = 1094,
        [anon_sym_SEMI] = 1094,
    },
    [371] = {
        [sym__statement] = 1096,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1086,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [372] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1098,
        [anon_sym_end] = 1090,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [373] = {
        [anon_sym_end] = 1100,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [374] = {
        [sym_else_block] = 1102,
        [sym__terminator] = 1102,
        [aux_sym_program_repeat1] = 1102,
        [aux_sym__then_elsif_else_block_repeat1] = 1102,
        [anon_sym_end] = 1102,
        [anon_sym_while] = 1102,
        [anon_sym_until] = 1102,
        [anon_sym_if] = 1102,
        [anon_sym_unless] = 1102,
        [anon_sym_else] = 1102,
        [anon_sym_elsif] = 1102,
        [sym_comment] = 48,
        [sym__line_break] = 1102,
        [anon_sym_SEMI] = 1102,
    },
    [375] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1104,
        [anon_sym_end] = 1064,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [376] = {
        [sym_else_block] = 1106,
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [aux_sym__then_elsif_else_block_repeat1] = 1106,
        [anon_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [anon_sym_else] = 1106,
        [anon_sym_elsif] = 1106,
        [sym_comment] = 48,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [377] = {
        [anon_sym_end] = 1086,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [378] = {
        [sym__function_name] = 1108,
        [anon_sym_PIPE] = 724,
        [anon_sym_STAR] = 724,
        [anon_sym_AMP] = 724,
        [anon_sym_LT] = 724,
        [sym_identifier] = 724,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 724,
        [anon_sym_CARET] = 724,
        [anon_sym_LT_EQ_GT] = 724,
        [anon_sym_EQ_EQ] = 724,
        [anon_sym_EQ_EQ_EQ] = 724,
        [anon_sym_EQ_TILDE] = 724,
        [anon_sym_GT] = 724,
        [anon_sym_GT_EQ] = 724,
        [anon_sym_LT_EQ] = 724,
        [anon_sym_PLUS] = 724,
        [anon_sym_DASH] = 724,
        [anon_sym_SLASH] = 724,
        [anon_sym_PERCENT] = 724,
        [anon_sym_STAR_STAR] = 724,
        [anon_sym_LT_LT] = 724,
        [anon_sym_GT_GT] = 724,
        [anon_sym_TILDE] = 724,
        [anon_sym_PLUS_AT] = 724,
        [anon_sym_DASH_AT] = 724,
        [anon_sym_LBRACK_RBRACK] = 724,
        [anon_sym_LBRACK_RBRACK_EQ] = 724,
        [sym__line_break] = 48,
    },
    [379] = {
        [sym__function_name] = 1016,
        [anon_sym_PIPE] = 1016,
        [anon_sym_STAR] = 1016,
        [anon_sym_AMP] = 1016,
        [anon_sym_LT] = 1016,
        [sym_identifier] = 1016,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 1016,
        [anon_sym_CARET] = 1016,
        [anon_sym_LT_EQ_GT] = 1016,
        [anon_sym_EQ_EQ] = 1016,
        [anon_sym_EQ_EQ_EQ] = 1016,
        [anon_sym_EQ_TILDE] = 1016,
        [anon_sym_GT] = 1016,
        [anon_sym_GT_EQ] = 1016,
        [anon_sym_LT_EQ] = 1016,
        [anon_sym_PLUS] = 1016,
        [anon_sym_DASH] = 1016,
        [anon_sym_SLASH] = 1016,
        [anon_sym_PERCENT] = 1016,
        [anon_sym_STAR_STAR] = 1016,
        [anon_sym_LT_LT] = 1016,
        [anon_sym_GT_GT] = 1016,
        [anon_sym_TILDE] = 1016,
        [anon_sym_PLUS_AT] = 1016,
        [anon_sym_DASH_AT] = 1016,
        [anon_sym_LBRACK_RBRACK] = 1016,
        [anon_sym_LBRACK_RBRACK_EQ] = 1016,
        [sym__line_break] = 48,
    },
    [380] = {
        [sym_else_block] = 1110,
        [sym__terminator] = 1110,
        [aux_sym_program_repeat1] = 1110,
        [aux_sym__then_elsif_else_block_repeat1] = 1110,
        [anon_sym_end] = 1110,
        [anon_sym_while] = 1110,
        [anon_sym_until] = 1110,
        [anon_sym_if] = 1110,
        [anon_sym_unless] = 1110,
        [anon_sym_else] = 1110,
        [anon_sym_elsif] = 1110,
        [sym_comment] = 48,
        [sym__line_break] = 1110,
        [anon_sym_SEMI] = 1110,
    },
    [381] = {
        [sym_else_block] = 1016,
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [aux_sym__then_elsif_else_block_repeat1] = 1016,
        [anon_sym_end] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_else] = 1016,
        [anon_sym_elsif] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [382] = {
        [sym_else_block] = 1112,
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [aux_sym__then_elsif_else_block_repeat1] = 1112,
        [anon_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [anon_sym_else] = 1112,
        [anon_sym_elsif] = 1112,
        [sym_comment] = 48,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [383] = {
        [sym_identifier] = 1114,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [384] = {
        [sym__argument] = 1116,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 1118,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [385] = {
        [aux_sym__call_arguments_repeat1] = 1120,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 1122,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [386] = {
        [sym_else_block] = 378,
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [aux_sym__then_elsif_else_block_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_else] = 378,
        [anon_sym_elsif] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [387] = {
        [anon_sym_RBRACK] = 1124,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [388] = {
        [sym_else_block] = 400,
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [aux_sym__then_elsif_else_block_repeat1] = 400,
        [anon_sym_end] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_while] = 400,
        [anon_sym_until] = 400,
        [anon_sym_if] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_else] = 400,
        [anon_sym_elsif] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [389] = {
        [sym_else_block] = 408,
        [sym__terminator] = 408,
        [aux_sym_program_repeat1] = 408,
        [aux_sym__then_elsif_else_block_repeat1] = 408,
        [anon_sym_end] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_while] = 408,
        [anon_sym_until] = 408,
        [anon_sym_if] = 408,
        [anon_sym_unless] = 408,
        [anon_sym_else] = 408,
        [anon_sym_elsif] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [390] = {
        [sym_else_block] = 410,
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [aux_sym__then_elsif_else_block_repeat1] = 410,
        [anon_sym_end] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_while] = 410,
        [anon_sym_until] = 410,
        [anon_sym_if] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_else] = 410,
        [anon_sym_elsif] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [391] = {
        [sym__statement] = 1126,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_PIPE] = 1128,
        [anon_sym_end] = 1108,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [392] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1130,
        [anon_sym_end] = 1132,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [393] = {
        [sym__statement] = 1134,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1132,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [394] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1136,
        [anon_sym_end] = 1138,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [395] = {
        [sym_else_block] = 1140,
        [sym__terminator] = 1140,
        [aux_sym_program_repeat1] = 1140,
        [aux_sym__then_elsif_else_block_repeat1] = 1140,
        [anon_sym_end] = 1140,
        [anon_sym_while] = 1140,
        [anon_sym_until] = 1140,
        [anon_sym_if] = 1140,
        [anon_sym_unless] = 1140,
        [anon_sym_else] = 1140,
        [anon_sym_elsif] = 1140,
        [sym_comment] = 48,
        [sym__line_break] = 1140,
        [anon_sym_SEMI] = 1140,
    },
    [396] = {
        [anon_sym_end] = 1142,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [397] = {
        [sym_else_block] = 1144,
        [sym__terminator] = 1144,
        [aux_sym_program_repeat1] = 1144,
        [aux_sym__then_elsif_else_block_repeat1] = 1144,
        [anon_sym_end] = 1144,
        [anon_sym_while] = 1144,
        [anon_sym_until] = 1144,
        [anon_sym_if] = 1144,
        [anon_sym_unless] = 1144,
        [anon_sym_else] = 1144,
        [anon_sym_elsif] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 1144,
        [anon_sym_SEMI] = 1144,
    },
    [398] = {
        [sym_else_block] = 1146,
        [sym__terminator] = 1146,
        [aux_sym_program_repeat1] = 1146,
        [aux_sym__then_elsif_else_block_repeat1] = 1146,
        [anon_sym_end] = 1146,
        [anon_sym_while] = 1146,
        [anon_sym_until] = 1146,
        [anon_sym_if] = 1146,
        [anon_sym_unless] = 1146,
        [anon_sym_else] = 1146,
        [anon_sym_elsif] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 1146,
        [anon_sym_SEMI] = 1146,
    },
    [399] = {
        [anon_sym_end] = 1138,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [400] = {
        [sym__statement] = 1148,
        [sym__declaration] = 668,
        [sym_method_declaration] = 670,
        [sym_class_declaration] = 670,
        [sym_module_declaration] = 670,
        [sym_while_statement] = 668,
        [sym_until_statement] = 668,
        [sym_if_statement] = 668,
        [sym_unless_statement] = 668,
        [sym_if_modifier] = 668,
        [sym_unless_modifier] = 668,
        [sym_while_modifier] = 668,
        [sym_until_modifier] = 668,
        [sym__call] = 672,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 668,
        [sym__argument] = 674,
        [sym__primary] = 676,
        [sym_scope_resolution_expression] = 678,
        [sym_subscript_expression] = 678,
        [sym__variable] = 678,
        [anon_sym_undef] = 680,
        [anon_sym_alias] = 682,
        [anon_sym_def] = 684,
        [anon_sym_LPAREN] = 686,
        [anon_sym_class] = 688,
        [anon_sym_COLON_COLON] = 690,
        [anon_sym_module] = 692,
        [anon_sym_while] = 694,
        [anon_sym_until] = 696,
        [anon_sym_if] = 698,
        [anon_sym_unless] = 700,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 702,
        [anon_sym_self] = 702,
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym_symbol] = 674,
        [sym__line_break] = 48,
    },
    [401] = {
        [sym_else_block] = 1150,
        [aux_sym__then_elsif_else_block_repeat1] = 1150,
        [anon_sym_end] = 1150,
        [anon_sym_else] = 1150,
        [anon_sym_elsif] = 1150,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [402] = {
        [sym__expression] = 1152,
        [sym__argument] = 674,
        [sym__primary] = 676,
        [sym_scope_resolution_expression] = 678,
        [sym_subscript_expression] = 678,
        [sym__variable] = 678,
        [anon_sym_LPAREN] = 686,
        [anon_sym_COLON_COLON] = 690,
        [anon_sym_nil] = 702,
        [anon_sym_self] = 702,
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym_symbol] = 674,
        [sym__line_break] = 48,
    },
    [403] = {
        [sym__expression] = 1154,
        [sym__argument] = 674,
        [sym__primary] = 676,
        [sym_scope_resolution_expression] = 678,
        [sym_subscript_expression] = 678,
        [sym__variable] = 678,
        [anon_sym_LPAREN] = 686,
        [anon_sym_COLON_COLON] = 690,
        [anon_sym_nil] = 702,
        [anon_sym_self] = 702,
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym_symbol] = 674,
        [sym__line_break] = 48,
    },
    [404] = {
        [sym__expression] = 1156,
        [sym__argument] = 674,
        [sym__primary] = 676,
        [sym_scope_resolution_expression] = 678,
        [sym_subscript_expression] = 678,
        [sym__variable] = 678,
        [anon_sym_LPAREN] = 686,
        [anon_sym_COLON_COLON] = 690,
        [anon_sym_nil] = 702,
        [anon_sym_self] = 702,
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym_symbol] = 674,
        [sym__line_break] = 48,
    },
    [405] = {
        [sym__expression] = 1158,
        [sym__argument] = 674,
        [sym__primary] = 676,
        [sym_scope_resolution_expression] = 678,
        [sym_subscript_expression] = 678,
        [sym__variable] = 678,
        [anon_sym_LPAREN] = 686,
        [anon_sym_COLON_COLON] = 690,
        [anon_sym_nil] = 702,
        [anon_sym_self] = 702,
        [sym_identifier] = 702,
        [sym_comment] = 48,
        [sym_symbol] = 674,
        [sym__line_break] = 48,
    },
    [406] = {
        [sym_else_block] = 330,
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [aux_sym__then_elsif_else_block_repeat1] = 330,
        [anon_sym_end] = 330,
        [anon_sym_while] = 330,
        [anon_sym_until] = 330,
        [anon_sym_if] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_else] = 330,
        [anon_sym_elsif] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [407] = {
        [sym_else_block] = 332,
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [aux_sym__then_elsif_else_block_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_else] = 332,
        [anon_sym_elsif] = 332,
        [sym_comment] = 48,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [408] = {
        [sym_else_block] = 334,
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [aux_sym__then_elsif_else_block_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_while] = 334,
        [anon_sym_until] = 334,
        [anon_sym_if] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_else] = 334,
        [anon_sym_elsif] = 334,
        [sym_comment] = 48,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [409] = {
        [sym_else_block] = 336,
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [aux_sym__then_elsif_else_block_repeat1] = 336,
        [anon_sym_end] = 336,
        [anon_sym_while] = 336,
        [anon_sym_until] = 336,
        [anon_sym_if] = 336,
        [anon_sym_unless] = 336,
        [anon_sym_else] = 336,
        [anon_sym_elsif] = 336,
        [sym_comment] = 48,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [410] = {
        [sym_else_block] = 342,
        [sym__terminator] = 704,
        [aux_sym_program_repeat1] = 1160,
        [aux_sym__then_elsif_else_block_repeat1] = 342,
        [anon_sym_end] = 342,
        [anon_sym_while] = 708,
        [anon_sym_until] = 710,
        [anon_sym_if] = 712,
        [anon_sym_unless] = 714,
        [anon_sym_else] = 342,
        [anon_sym_elsif] = 342,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [411] = {
        [sym_else_block] = 344,
        [aux_sym__then_elsif_else_block_repeat1] = 344,
        [anon_sym_end] = 344,
        [anon_sym_else] = 344,
        [anon_sym_elsif] = 344,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [412] = {
        [anon_sym_end] = 1162,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [413] = {
        [sym_else_block] = 1164,
        [anon_sym_end] = 1162,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [414] = {
        [sym__terminator] = 772,
        [aux_sym_program_repeat1] = 772,
        [anon_sym_end] = 772,
        [anon_sym_while] = 772,
        [anon_sym_until] = 772,
        [anon_sym_if] = 772,
        [anon_sym_unless] = 772,
        [sym_comment] = 48,
        [sym__line_break] = 772,
        [anon_sym_SEMI] = 772,
    },
    [415] = {
        [anon_sym_end] = 1166,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [416] = {
        [sym__terminator] = 828,
        [aux_sym_program_repeat1] = 828,
        [anon_sym_end] = 828,
        [anon_sym_while] = 828,
        [anon_sym_until] = 828,
        [anon_sym_if] = 828,
        [anon_sym_unless] = 828,
        [sym_comment] = 48,
        [sym__line_break] = 828,
        [anon_sym_SEMI] = 828,
    },
    [417] = {
        [sym__terminator] = 830,
        [aux_sym_program_repeat1] = 830,
        [anon_sym_end] = 830,
        [anon_sym_while] = 830,
        [anon_sym_until] = 830,
        [anon_sym_if] = 830,
        [anon_sym_unless] = 830,
        [sym_comment] = 48,
        [sym__line_break] = 830,
        [anon_sym_SEMI] = 830,
    },
    [418] = {
        [sym__statement_block] = 1168,
        [sym__do_block] = 1170,
        [sym__terminator] = 1172,
        [anon_sym_do] = 1174,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [419] = {
        [sym__terminator] = 872,
        [aux_sym_program_repeat1] = 872,
        [anon_sym_end] = 872,
        [anon_sym_while] = 872,
        [anon_sym_until] = 872,
        [anon_sym_if] = 872,
        [anon_sym_unless] = 872,
        [sym_comment] = 48,
        [sym__line_break] = 872,
        [anon_sym_SEMI] = 872,
    },
    [420] = {
        [sym__terminator] = 874,
        [aux_sym_program_repeat1] = 874,
        [anon_sym_end] = 874,
        [anon_sym_while] = 874,
        [anon_sym_until] = 874,
        [anon_sym_if] = 874,
        [anon_sym_unless] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 874,
        [anon_sym_SEMI] = 874,
    },
    [421] = {
        [sym__statement] = 1176,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1178,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [422] = {
        [sym__statement] = 1180,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1182,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [423] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1184,
        [anon_sym_end] = 1186,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [424] = {
        [sym__terminator] = 888,
        [aux_sym_program_repeat1] = 888,
        [anon_sym_end] = 888,
        [anon_sym_while] = 888,
        [anon_sym_until] = 888,
        [anon_sym_if] = 888,
        [anon_sym_unless] = 888,
        [sym_comment] = 48,
        [sym__line_break] = 888,
        [anon_sym_SEMI] = 888,
    },
    [425] = {
        [anon_sym_end] = 1188,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [426] = {
        [sym__terminator] = 894,
        [aux_sym_program_repeat1] = 894,
        [anon_sym_end] = 894,
        [anon_sym_while] = 894,
        [anon_sym_until] = 894,
        [anon_sym_if] = 894,
        [anon_sym_unless] = 894,
        [sym_comment] = 48,
        [sym__line_break] = 894,
        [anon_sym_SEMI] = 894,
    },
    [427] = {
        [sym__terminator] = 904,
        [aux_sym_program_repeat1] = 904,
        [anon_sym_end] = 904,
        [anon_sym_while] = 904,
        [anon_sym_until] = 904,
        [anon_sym_if] = 904,
        [anon_sym_unless] = 904,
        [sym_comment] = 48,
        [sym__line_break] = 904,
        [anon_sym_SEMI] = 904,
    },
    [428] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1190,
        [anon_sym_end] = 1192,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [429] = {
        [sym__terminator] = 912,
        [aux_sym_program_repeat1] = 912,
        [anon_sym_end] = 912,
        [anon_sym_while] = 912,
        [anon_sym_until] = 912,
        [anon_sym_if] = 912,
        [anon_sym_unless] = 912,
        [sym_comment] = 48,
        [sym__line_break] = 912,
        [anon_sym_SEMI] = 912,
    },
    [430] = {
        [anon_sym_end] = 1194,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [431] = {
        [sym__terminator] = 916,
        [aux_sym_program_repeat1] = 916,
        [anon_sym_end] = 916,
        [anon_sym_while] = 916,
        [anon_sym_until] = 916,
        [anon_sym_if] = 916,
        [anon_sym_unless] = 916,
        [sym_comment] = 48,
        [sym__line_break] = 916,
        [anon_sym_SEMI] = 916,
    },
    [432] = {
        [sym__terminator] = 918,
        [aux_sym_program_repeat1] = 918,
        [anon_sym_end] = 918,
        [anon_sym_while] = 918,
        [anon_sym_until] = 918,
        [anon_sym_if] = 918,
        [anon_sym_unless] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 918,
        [anon_sym_SEMI] = 918,
    },
    [433] = {
        [sym__statement_block] = 1196,
        [sym__do_block] = 1170,
        [sym__terminator] = 1172,
        [anon_sym_do] = 1174,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [434] = {
        [sym__terminator] = 922,
        [aux_sym_program_repeat1] = 922,
        [anon_sym_end] = 922,
        [anon_sym_while] = 922,
        [anon_sym_until] = 922,
        [anon_sym_if] = 922,
        [anon_sym_unless] = 922,
        [sym_comment] = 48,
        [sym__line_break] = 922,
        [anon_sym_SEMI] = 922,
    },
    [435] = {
        [sym__terminator] = 1198,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [436] = {
        [sym__statement] = 1200,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1202,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [437] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1204,
        [anon_sym_end] = 1206,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [438] = {
        [sym__terminator] = 934,
        [aux_sym_program_repeat1] = 934,
        [anon_sym_end] = 934,
        [anon_sym_while] = 934,
        [anon_sym_until] = 934,
        [anon_sym_if] = 934,
        [anon_sym_unless] = 934,
        [sym_comment] = 48,
        [sym__line_break] = 934,
        [anon_sym_SEMI] = 934,
    },
    [439] = {
        [anon_sym_end] = 1208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [440] = {
        [sym__terminator] = 938,
        [aux_sym_program_repeat1] = 938,
        [anon_sym_end] = 938,
        [anon_sym_while] = 938,
        [anon_sym_until] = 938,
        [anon_sym_if] = 938,
        [anon_sym_unless] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 938,
        [anon_sym_SEMI] = 938,
    },
    [441] = {
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 940,
        [anon_sym_end] = 940,
        [anon_sym_while] = 940,
        [anon_sym_until] = 940,
        [anon_sym_if] = 940,
        [anon_sym_unless] = 940,
        [sym_comment] = 48,
        [sym__line_break] = 940,
        [anon_sym_SEMI] = 940,
    },
    [442] = {
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [anon_sym_end] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_while] = 236,
        [anon_sym_until] = 236,
        [anon_sym_if] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [443] = {
        [sym__terminator] = 1210,
        [anon_sym_LT] = 1212,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [444] = {
        [sym__statement] = 1214,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1216,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [445] = {
        [sym_identifier] = 1218,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [446] = {
        [sym__terminator] = 1220,
        [aux_sym_class_declaration_repeat1] = 1222,
        [anon_sym_COLON_COLON] = 956,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [447] = {
        [sym__statement] = 1224,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1226,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [448] = {
        [sym__terminator] = 1228,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [449] = {
        [sym__statement] = 1230,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1232,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [450] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1234,
        [anon_sym_end] = 1236,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [451] = {
        [sym__terminator] = 980,
        [aux_sym_program_repeat1] = 980,
        [anon_sym_end] = 980,
        [anon_sym_while] = 980,
        [anon_sym_until] = 980,
        [anon_sym_if] = 980,
        [anon_sym_unless] = 980,
        [sym_comment] = 48,
        [sym__line_break] = 980,
        [anon_sym_SEMI] = 980,
    },
    [452] = {
        [anon_sym_end] = 1238,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [453] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [anon_sym_end] = 984,
        [anon_sym_while] = 984,
        [anon_sym_until] = 984,
        [anon_sym_if] = 984,
        [anon_sym_unless] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [454] = {
        [sym__terminator] = 986,
        [aux_sym_program_repeat1] = 986,
        [anon_sym_end] = 986,
        [anon_sym_while] = 986,
        [anon_sym_until] = 986,
        [anon_sym_if] = 986,
        [anon_sym_unless] = 986,
        [sym_comment] = 48,
        [sym__line_break] = 986,
        [anon_sym_SEMI] = 986,
    },
    [455] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1240,
        [anon_sym_end] = 1232,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [456] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_end] = 990,
        [anon_sym_while] = 990,
        [anon_sym_until] = 990,
        [anon_sym_if] = 990,
        [anon_sym_unless] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [457] = {
        [anon_sym_end] = 1236,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [458] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1242,
        [anon_sym_end] = 1244,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [459] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [anon_sym_end] = 996,
        [anon_sym_while] = 996,
        [anon_sym_until] = 996,
        [anon_sym_if] = 996,
        [anon_sym_unless] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [460] = {
        [anon_sym_end] = 1226,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [461] = {
        [sym__terminator] = 998,
        [aux_sym_program_repeat1] = 998,
        [anon_sym_end] = 998,
        [anon_sym_while] = 998,
        [anon_sym_until] = 998,
        [anon_sym_if] = 998,
        [anon_sym_unless] = 998,
        [sym_comment] = 48,
        [sym__line_break] = 998,
        [anon_sym_SEMI] = 998,
    },
    [462] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 1246,
        [anon_sym_RPAREN] = 1248,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [463] = {
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [anon_sym_end] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [464] = {
        [anon_sym_RPAREN] = 1250,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [465] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_end] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_while] = 316,
        [anon_sym_until] = 316,
        [anon_sym_if] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [466] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_while] = 338,
        [anon_sym_until] = 338,
        [anon_sym_if] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [467] = {
        [sym_argument_list] = 1252,
        [sym__terminator] = 1254,
        [anon_sym_LPAREN] = 1256,
        [anon_sym_STAR] = 1012,
        [anon_sym_AMP] = 1012,
        [sym_identifier] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [468] = {
        [sym__terminator] = 1258,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [469] = {
        [sym__statement] = 1260,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1262,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [470] = {
        [sym_argument_list] = 1264,
        [anon_sym_RPAREN] = 1258,
        [anon_sym_STAR] = 1026,
        [anon_sym_AMP] = 1026,
        [sym_identifier] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [471] = {
        [anon_sym_RPAREN] = 1266,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [472] = {
        [sym__statement] = 1268,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1270,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [473] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1272,
        [anon_sym_end] = 1274,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [474] = {
        [sym__terminator] = 1088,
        [aux_sym_program_repeat1] = 1088,
        [anon_sym_end] = 1088,
        [anon_sym_while] = 1088,
        [anon_sym_until] = 1088,
        [anon_sym_if] = 1088,
        [anon_sym_unless] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 1088,
        [anon_sym_SEMI] = 1088,
    },
    [475] = {
        [anon_sym_end] = 1276,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [476] = {
        [sym__terminator] = 1092,
        [aux_sym_program_repeat1] = 1092,
        [anon_sym_end] = 1092,
        [anon_sym_while] = 1092,
        [anon_sym_until] = 1092,
        [anon_sym_if] = 1092,
        [anon_sym_unless] = 1092,
        [sym_comment] = 48,
        [sym__line_break] = 1092,
        [anon_sym_SEMI] = 1092,
    },
    [477] = {
        [sym__terminator] = 1094,
        [aux_sym_program_repeat1] = 1094,
        [anon_sym_end] = 1094,
        [anon_sym_while] = 1094,
        [anon_sym_until] = 1094,
        [anon_sym_if] = 1094,
        [anon_sym_unless] = 1094,
        [sym_comment] = 48,
        [sym__line_break] = 1094,
        [anon_sym_SEMI] = 1094,
    },
    [478] = {
        [sym__statement] = 1278,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1274,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [479] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1280,
        [anon_sym_end] = 1276,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [480] = {
        [anon_sym_end] = 1282,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [481] = {
        [sym__terminator] = 1102,
        [aux_sym_program_repeat1] = 1102,
        [anon_sym_end] = 1102,
        [anon_sym_while] = 1102,
        [anon_sym_until] = 1102,
        [anon_sym_if] = 1102,
        [anon_sym_unless] = 1102,
        [sym_comment] = 48,
        [sym__line_break] = 1102,
        [anon_sym_SEMI] = 1102,
    },
    [482] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1284,
        [anon_sym_end] = 1270,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [483] = {
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [anon_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [sym_comment] = 48,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [484] = {
        [anon_sym_end] = 1274,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [485] = {
        [sym__function_name] = 1286,
        [anon_sym_PIPE] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_AMP] = 582,
        [anon_sym_LT] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 582,
        [anon_sym_CARET] = 582,
        [anon_sym_LT_EQ_GT] = 582,
        [anon_sym_EQ_EQ] = 582,
        [anon_sym_EQ_EQ_EQ] = 582,
        [anon_sym_EQ_TILDE] = 582,
        [anon_sym_GT] = 582,
        [anon_sym_GT_EQ] = 582,
        [anon_sym_LT_EQ] = 582,
        [anon_sym_PLUS] = 582,
        [anon_sym_DASH] = 582,
        [anon_sym_SLASH] = 582,
        [anon_sym_PERCENT] = 582,
        [anon_sym_STAR_STAR] = 582,
        [anon_sym_LT_LT] = 582,
        [anon_sym_GT_GT] = 582,
        [anon_sym_TILDE] = 582,
        [anon_sym_PLUS_AT] = 582,
        [anon_sym_DASH_AT] = 582,
        [anon_sym_LBRACK_RBRACK] = 582,
        [anon_sym_LBRACK_RBRACK_EQ] = 582,
        [sym__line_break] = 48,
    },
    [486] = {
        [sym__terminator] = 1110,
        [aux_sym_program_repeat1] = 1110,
        [anon_sym_end] = 1110,
        [anon_sym_while] = 1110,
        [anon_sym_until] = 1110,
        [anon_sym_if] = 1110,
        [anon_sym_unless] = 1110,
        [sym_comment] = 48,
        [sym__line_break] = 1110,
        [anon_sym_SEMI] = 1110,
    },
    [487] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [anon_sym_end] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_unless] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [488] = {
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [sym_comment] = 48,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [489] = {
        [sym_identifier] = 1288,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [490] = {
        [sym__argument] = 1290,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 1292,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [491] = {
        [aux_sym__call_arguments_repeat1] = 1294,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 1296,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [492] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [493] = {
        [anon_sym_RBRACK] = 1298,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [494] = {
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [anon_sym_end] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_while] = 400,
        [anon_sym_until] = 400,
        [anon_sym_if] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [495] = {
        [sym__terminator] = 408,
        [aux_sym_program_repeat1] = 408,
        [anon_sym_end] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_while] = 408,
        [anon_sym_until] = 408,
        [anon_sym_if] = 408,
        [anon_sym_unless] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [496] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_end] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_while] = 410,
        [anon_sym_until] = 410,
        [anon_sym_if] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [497] = {
        [sym__statement] = 1300,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_PIPE] = 1302,
        [anon_sym_end] = 1286,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [498] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_end] = 1306,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [499] = {
        [sym__statement] = 1308,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1306,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [500] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1310,
        [anon_sym_end] = 1312,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [501] = {
        [sym__terminator] = 1140,
        [aux_sym_program_repeat1] = 1140,
        [anon_sym_end] = 1140,
        [anon_sym_while] = 1140,
        [anon_sym_until] = 1140,
        [anon_sym_if] = 1140,
        [anon_sym_unless] = 1140,
        [sym_comment] = 48,
        [sym__line_break] = 1140,
        [anon_sym_SEMI] = 1140,
    },
    [502] = {
        [anon_sym_end] = 1314,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [503] = {
        [sym__terminator] = 1144,
        [aux_sym_program_repeat1] = 1144,
        [anon_sym_end] = 1144,
        [anon_sym_while] = 1144,
        [anon_sym_until] = 1144,
        [anon_sym_if] = 1144,
        [anon_sym_unless] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 1144,
        [anon_sym_SEMI] = 1144,
    },
    [504] = {
        [sym__terminator] = 1146,
        [aux_sym_program_repeat1] = 1146,
        [anon_sym_end] = 1146,
        [anon_sym_while] = 1146,
        [anon_sym_until] = 1146,
        [anon_sym_if] = 1146,
        [anon_sym_unless] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 1146,
        [anon_sym_SEMI] = 1146,
    },
    [505] = {
        [anon_sym_end] = 1312,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [506] = {
        [anon_sym_end] = 1316,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [507] = {
        [sym_else_block] = 616,
        [sym__terminator] = 616,
        [aux_sym_program_repeat1] = 616,
        [anon_sym_end] = 616,
        [anon_sym_while] = 616,
        [anon_sym_until] = 616,
        [anon_sym_if] = 616,
        [anon_sym_unless] = 616,
        [anon_sym_else] = 616,
        [sym_comment] = 48,
        [sym__line_break] = 616,
        [anon_sym_SEMI] = 616,
    },
    [508] = {
        [sym_then_block] = 1318,
        [sym__then_elsif_else_block] = 1320,
        [sym__terminator] = 622,
        [anon_sym_then] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 626,
    },
    [509] = {
        [sym_else_block] = 1322,
        [aux_sym__then_elsif_else_block_repeat1] = 1324,
        [anon_sym_end] = 1326,
        [anon_sym_else] = 418,
        [anon_sym_elsif] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [510] = {
        [sym_else_block] = 664,
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_while] = 664,
        [anon_sym_until] = 664,
        [anon_sym_if] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_else] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [511] = {
        [anon_sym_end] = 1328,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [512] = {
        [sym_else_block] = 1330,
        [anon_sym_end] = 1328,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [513] = {
        [sym_else_block] = 772,
        [sym__terminator] = 772,
        [aux_sym_program_repeat1] = 772,
        [anon_sym_end] = 772,
        [anon_sym_while] = 772,
        [anon_sym_until] = 772,
        [anon_sym_if] = 772,
        [anon_sym_unless] = 772,
        [anon_sym_else] = 772,
        [sym_comment] = 48,
        [sym__line_break] = 772,
        [anon_sym_SEMI] = 772,
    },
    [514] = {
        [anon_sym_end] = 1332,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [515] = {
        [sym_else_block] = 828,
        [sym__terminator] = 828,
        [aux_sym_program_repeat1] = 828,
        [anon_sym_end] = 828,
        [anon_sym_while] = 828,
        [anon_sym_until] = 828,
        [anon_sym_if] = 828,
        [anon_sym_unless] = 828,
        [anon_sym_else] = 828,
        [sym_comment] = 48,
        [sym__line_break] = 828,
        [anon_sym_SEMI] = 828,
    },
    [516] = {
        [sym_else_block] = 830,
        [sym__terminator] = 830,
        [aux_sym_program_repeat1] = 830,
        [anon_sym_end] = 830,
        [anon_sym_while] = 830,
        [anon_sym_until] = 830,
        [anon_sym_if] = 830,
        [anon_sym_unless] = 830,
        [anon_sym_else] = 830,
        [sym_comment] = 48,
        [sym__line_break] = 830,
        [anon_sym_SEMI] = 830,
    },
    [517] = {
        [sym__statement_block] = 1334,
        [sym__do_block] = 1336,
        [sym__terminator] = 1338,
        [anon_sym_do] = 1340,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [518] = {
        [sym_else_block] = 872,
        [sym__terminator] = 872,
        [aux_sym_program_repeat1] = 872,
        [anon_sym_end] = 872,
        [anon_sym_while] = 872,
        [anon_sym_until] = 872,
        [anon_sym_if] = 872,
        [anon_sym_unless] = 872,
        [anon_sym_else] = 872,
        [sym_comment] = 48,
        [sym__line_break] = 872,
        [anon_sym_SEMI] = 872,
    },
    [519] = {
        [sym_else_block] = 874,
        [sym__terminator] = 874,
        [aux_sym_program_repeat1] = 874,
        [anon_sym_end] = 874,
        [anon_sym_while] = 874,
        [anon_sym_until] = 874,
        [anon_sym_if] = 874,
        [anon_sym_unless] = 874,
        [anon_sym_else] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 874,
        [anon_sym_SEMI] = 874,
    },
    [520] = {
        [sym__statement] = 1342,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1344,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [521] = {
        [sym__statement] = 1346,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1348,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [522] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1350,
        [anon_sym_end] = 1352,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [523] = {
        [sym_else_block] = 888,
        [sym__terminator] = 888,
        [aux_sym_program_repeat1] = 888,
        [anon_sym_end] = 888,
        [anon_sym_while] = 888,
        [anon_sym_until] = 888,
        [anon_sym_if] = 888,
        [anon_sym_unless] = 888,
        [anon_sym_else] = 888,
        [sym_comment] = 48,
        [sym__line_break] = 888,
        [anon_sym_SEMI] = 888,
    },
    [524] = {
        [anon_sym_end] = 1354,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [525] = {
        [sym_else_block] = 894,
        [sym__terminator] = 894,
        [aux_sym_program_repeat1] = 894,
        [anon_sym_end] = 894,
        [anon_sym_while] = 894,
        [anon_sym_until] = 894,
        [anon_sym_if] = 894,
        [anon_sym_unless] = 894,
        [anon_sym_else] = 894,
        [sym_comment] = 48,
        [sym__line_break] = 894,
        [anon_sym_SEMI] = 894,
    },
    [526] = {
        [sym_else_block] = 904,
        [sym__terminator] = 904,
        [aux_sym_program_repeat1] = 904,
        [anon_sym_end] = 904,
        [anon_sym_while] = 904,
        [anon_sym_until] = 904,
        [anon_sym_if] = 904,
        [anon_sym_unless] = 904,
        [anon_sym_else] = 904,
        [sym_comment] = 48,
        [sym__line_break] = 904,
        [anon_sym_SEMI] = 904,
    },
    [527] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1356,
        [anon_sym_end] = 1358,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [528] = {
        [sym_else_block] = 912,
        [sym__terminator] = 912,
        [aux_sym_program_repeat1] = 912,
        [anon_sym_end] = 912,
        [anon_sym_while] = 912,
        [anon_sym_until] = 912,
        [anon_sym_if] = 912,
        [anon_sym_unless] = 912,
        [anon_sym_else] = 912,
        [sym_comment] = 48,
        [sym__line_break] = 912,
        [anon_sym_SEMI] = 912,
    },
    [529] = {
        [anon_sym_end] = 1360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [530] = {
        [sym_else_block] = 916,
        [sym__terminator] = 916,
        [aux_sym_program_repeat1] = 916,
        [anon_sym_end] = 916,
        [anon_sym_while] = 916,
        [anon_sym_until] = 916,
        [anon_sym_if] = 916,
        [anon_sym_unless] = 916,
        [anon_sym_else] = 916,
        [sym_comment] = 48,
        [sym__line_break] = 916,
        [anon_sym_SEMI] = 916,
    },
    [531] = {
        [sym_else_block] = 918,
        [sym__terminator] = 918,
        [aux_sym_program_repeat1] = 918,
        [anon_sym_end] = 918,
        [anon_sym_while] = 918,
        [anon_sym_until] = 918,
        [anon_sym_if] = 918,
        [anon_sym_unless] = 918,
        [anon_sym_else] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 918,
        [anon_sym_SEMI] = 918,
    },
    [532] = {
        [sym__statement_block] = 1362,
        [sym__do_block] = 1336,
        [sym__terminator] = 1338,
        [anon_sym_do] = 1340,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [533] = {
        [sym_else_block] = 922,
        [sym__terminator] = 922,
        [aux_sym_program_repeat1] = 922,
        [anon_sym_end] = 922,
        [anon_sym_while] = 922,
        [anon_sym_until] = 922,
        [anon_sym_if] = 922,
        [anon_sym_unless] = 922,
        [anon_sym_else] = 922,
        [sym_comment] = 48,
        [sym__line_break] = 922,
        [anon_sym_SEMI] = 922,
    },
    [534] = {
        [sym__terminator] = 1364,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [535] = {
        [sym__statement] = 1366,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1368,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [536] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1370,
        [anon_sym_end] = 1372,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [537] = {
        [sym_else_block] = 934,
        [sym__terminator] = 934,
        [aux_sym_program_repeat1] = 934,
        [anon_sym_end] = 934,
        [anon_sym_while] = 934,
        [anon_sym_until] = 934,
        [anon_sym_if] = 934,
        [anon_sym_unless] = 934,
        [anon_sym_else] = 934,
        [sym_comment] = 48,
        [sym__line_break] = 934,
        [anon_sym_SEMI] = 934,
    },
    [538] = {
        [anon_sym_end] = 1374,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [539] = {
        [sym_else_block] = 938,
        [sym__terminator] = 938,
        [aux_sym_program_repeat1] = 938,
        [anon_sym_end] = 938,
        [anon_sym_while] = 938,
        [anon_sym_until] = 938,
        [anon_sym_if] = 938,
        [anon_sym_unless] = 938,
        [anon_sym_else] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 938,
        [anon_sym_SEMI] = 938,
    },
    [540] = {
        [sym_else_block] = 940,
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 940,
        [anon_sym_end] = 940,
        [anon_sym_while] = 940,
        [anon_sym_until] = 940,
        [anon_sym_if] = 940,
        [anon_sym_unless] = 940,
        [anon_sym_else] = 940,
        [sym_comment] = 48,
        [sym__line_break] = 940,
        [anon_sym_SEMI] = 940,
    },
    [541] = {
        [sym_else_block] = 236,
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [anon_sym_end] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_while] = 236,
        [anon_sym_until] = 236,
        [anon_sym_if] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_else] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [542] = {
        [sym__terminator] = 1376,
        [anon_sym_LT] = 1378,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [543] = {
        [sym__statement] = 1380,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1382,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [544] = {
        [sym_identifier] = 1384,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [545] = {
        [sym__terminator] = 1386,
        [aux_sym_class_declaration_repeat1] = 1388,
        [anon_sym_COLON_COLON] = 956,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [546] = {
        [sym__statement] = 1390,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1392,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [547] = {
        [sym__terminator] = 1394,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [548] = {
        [sym__statement] = 1396,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1398,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [549] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1400,
        [anon_sym_end] = 1402,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [550] = {
        [sym_else_block] = 980,
        [sym__terminator] = 980,
        [aux_sym_program_repeat1] = 980,
        [anon_sym_end] = 980,
        [anon_sym_while] = 980,
        [anon_sym_until] = 980,
        [anon_sym_if] = 980,
        [anon_sym_unless] = 980,
        [anon_sym_else] = 980,
        [sym_comment] = 48,
        [sym__line_break] = 980,
        [anon_sym_SEMI] = 980,
    },
    [551] = {
        [anon_sym_end] = 1404,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [552] = {
        [sym_else_block] = 984,
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [anon_sym_end] = 984,
        [anon_sym_while] = 984,
        [anon_sym_until] = 984,
        [anon_sym_if] = 984,
        [anon_sym_unless] = 984,
        [anon_sym_else] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [553] = {
        [sym_else_block] = 986,
        [sym__terminator] = 986,
        [aux_sym_program_repeat1] = 986,
        [anon_sym_end] = 986,
        [anon_sym_while] = 986,
        [anon_sym_until] = 986,
        [anon_sym_if] = 986,
        [anon_sym_unless] = 986,
        [anon_sym_else] = 986,
        [sym_comment] = 48,
        [sym__line_break] = 986,
        [anon_sym_SEMI] = 986,
    },
    [554] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1406,
        [anon_sym_end] = 1398,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [555] = {
        [sym_else_block] = 990,
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_end] = 990,
        [anon_sym_while] = 990,
        [anon_sym_until] = 990,
        [anon_sym_if] = 990,
        [anon_sym_unless] = 990,
        [anon_sym_else] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [556] = {
        [anon_sym_end] = 1402,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [557] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1408,
        [anon_sym_end] = 1410,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [558] = {
        [sym_else_block] = 996,
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [anon_sym_end] = 996,
        [anon_sym_while] = 996,
        [anon_sym_until] = 996,
        [anon_sym_if] = 996,
        [anon_sym_unless] = 996,
        [anon_sym_else] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [559] = {
        [anon_sym_end] = 1392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [560] = {
        [sym_else_block] = 998,
        [sym__terminator] = 998,
        [aux_sym_program_repeat1] = 998,
        [anon_sym_end] = 998,
        [anon_sym_while] = 998,
        [anon_sym_until] = 998,
        [anon_sym_if] = 998,
        [anon_sym_unless] = 998,
        [anon_sym_else] = 998,
        [sym_comment] = 48,
        [sym__line_break] = 998,
        [anon_sym_SEMI] = 998,
    },
    [561] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 1412,
        [anon_sym_RPAREN] = 1414,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [562] = {
        [sym_else_block] = 270,
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [anon_sym_end] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_else] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [563] = {
        [anon_sym_RPAREN] = 1416,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [564] = {
        [sym_else_block] = 316,
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_end] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_while] = 316,
        [anon_sym_until] = 316,
        [anon_sym_if] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_else] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [565] = {
        [sym_else_block] = 338,
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_while] = 338,
        [anon_sym_until] = 338,
        [anon_sym_if] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_else] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [566] = {
        [sym_argument_list] = 1418,
        [sym__terminator] = 1420,
        [anon_sym_LPAREN] = 1422,
        [anon_sym_STAR] = 1012,
        [anon_sym_AMP] = 1012,
        [sym_identifier] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [567] = {
        [sym__terminator] = 1424,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [568] = {
        [sym__statement] = 1426,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1428,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [569] = {
        [sym_argument_list] = 1430,
        [anon_sym_RPAREN] = 1424,
        [anon_sym_STAR] = 1026,
        [anon_sym_AMP] = 1026,
        [sym_identifier] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [570] = {
        [anon_sym_RPAREN] = 1432,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [571] = {
        [sym__statement] = 1434,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1436,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [572] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1438,
        [anon_sym_end] = 1440,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [573] = {
        [sym_else_block] = 1088,
        [sym__terminator] = 1088,
        [aux_sym_program_repeat1] = 1088,
        [anon_sym_end] = 1088,
        [anon_sym_while] = 1088,
        [anon_sym_until] = 1088,
        [anon_sym_if] = 1088,
        [anon_sym_unless] = 1088,
        [anon_sym_else] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 1088,
        [anon_sym_SEMI] = 1088,
    },
    [574] = {
        [anon_sym_end] = 1442,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [575] = {
        [sym_else_block] = 1092,
        [sym__terminator] = 1092,
        [aux_sym_program_repeat1] = 1092,
        [anon_sym_end] = 1092,
        [anon_sym_while] = 1092,
        [anon_sym_until] = 1092,
        [anon_sym_if] = 1092,
        [anon_sym_unless] = 1092,
        [anon_sym_else] = 1092,
        [sym_comment] = 48,
        [sym__line_break] = 1092,
        [anon_sym_SEMI] = 1092,
    },
    [576] = {
        [sym_else_block] = 1094,
        [sym__terminator] = 1094,
        [aux_sym_program_repeat1] = 1094,
        [anon_sym_end] = 1094,
        [anon_sym_while] = 1094,
        [anon_sym_until] = 1094,
        [anon_sym_if] = 1094,
        [anon_sym_unless] = 1094,
        [anon_sym_else] = 1094,
        [sym_comment] = 48,
        [sym__line_break] = 1094,
        [anon_sym_SEMI] = 1094,
    },
    [577] = {
        [sym__statement] = 1444,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1440,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [578] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1446,
        [anon_sym_end] = 1442,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [579] = {
        [anon_sym_end] = 1448,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [580] = {
        [sym_else_block] = 1102,
        [sym__terminator] = 1102,
        [aux_sym_program_repeat1] = 1102,
        [anon_sym_end] = 1102,
        [anon_sym_while] = 1102,
        [anon_sym_until] = 1102,
        [anon_sym_if] = 1102,
        [anon_sym_unless] = 1102,
        [anon_sym_else] = 1102,
        [sym_comment] = 48,
        [sym__line_break] = 1102,
        [anon_sym_SEMI] = 1102,
    },
    [581] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1450,
        [anon_sym_end] = 1436,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [582] = {
        [sym_else_block] = 1106,
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [anon_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [anon_sym_else] = 1106,
        [sym_comment] = 48,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [583] = {
        [anon_sym_end] = 1440,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [584] = {
        [sym__function_name] = 1452,
        [anon_sym_PIPE] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_LT] = 484,
        [sym_identifier] = 484,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_LT_EQ_GT] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_EQ_EQ_EQ] = 484,
        [anon_sym_EQ_TILDE] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_STAR_STAR] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_TILDE] = 484,
        [anon_sym_PLUS_AT] = 484,
        [anon_sym_DASH_AT] = 484,
        [anon_sym_LBRACK_RBRACK] = 484,
        [anon_sym_LBRACK_RBRACK_EQ] = 484,
        [sym__line_break] = 48,
    },
    [585] = {
        [sym_else_block] = 1110,
        [sym__terminator] = 1110,
        [aux_sym_program_repeat1] = 1110,
        [anon_sym_end] = 1110,
        [anon_sym_while] = 1110,
        [anon_sym_until] = 1110,
        [anon_sym_if] = 1110,
        [anon_sym_unless] = 1110,
        [anon_sym_else] = 1110,
        [sym_comment] = 48,
        [sym__line_break] = 1110,
        [anon_sym_SEMI] = 1110,
    },
    [586] = {
        [sym_else_block] = 1016,
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [anon_sym_end] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_else] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [587] = {
        [sym_else_block] = 1112,
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [anon_sym_else] = 1112,
        [sym_comment] = 48,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [588] = {
        [sym_identifier] = 1454,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [589] = {
        [sym__argument] = 1456,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 1458,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [590] = {
        [aux_sym__call_arguments_repeat1] = 1460,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 1462,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [591] = {
        [sym_else_block] = 378,
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_else] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [592] = {
        [anon_sym_RBRACK] = 1464,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [593] = {
        [sym_else_block] = 400,
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [anon_sym_end] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_while] = 400,
        [anon_sym_until] = 400,
        [anon_sym_if] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_else] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [594] = {
        [sym_else_block] = 408,
        [sym__terminator] = 408,
        [aux_sym_program_repeat1] = 408,
        [anon_sym_end] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_while] = 408,
        [anon_sym_until] = 408,
        [anon_sym_if] = 408,
        [anon_sym_unless] = 408,
        [anon_sym_else] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [595] = {
        [sym_else_block] = 410,
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_end] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_while] = 410,
        [anon_sym_until] = 410,
        [anon_sym_if] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_else] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [596] = {
        [sym__statement] = 1466,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_PIPE] = 1468,
        [anon_sym_end] = 1452,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [597] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1470,
        [anon_sym_end] = 1472,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [598] = {
        [sym__statement] = 1474,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1472,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [599] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1476,
        [anon_sym_end] = 1478,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [600] = {
        [sym_else_block] = 1140,
        [sym__terminator] = 1140,
        [aux_sym_program_repeat1] = 1140,
        [anon_sym_end] = 1140,
        [anon_sym_while] = 1140,
        [anon_sym_until] = 1140,
        [anon_sym_if] = 1140,
        [anon_sym_unless] = 1140,
        [anon_sym_else] = 1140,
        [sym_comment] = 48,
        [sym__line_break] = 1140,
        [anon_sym_SEMI] = 1140,
    },
    [601] = {
        [anon_sym_end] = 1480,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [602] = {
        [sym_else_block] = 1144,
        [sym__terminator] = 1144,
        [aux_sym_program_repeat1] = 1144,
        [anon_sym_end] = 1144,
        [anon_sym_while] = 1144,
        [anon_sym_until] = 1144,
        [anon_sym_if] = 1144,
        [anon_sym_unless] = 1144,
        [anon_sym_else] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 1144,
        [anon_sym_SEMI] = 1144,
    },
    [603] = {
        [sym_else_block] = 1146,
        [sym__terminator] = 1146,
        [aux_sym_program_repeat1] = 1146,
        [anon_sym_end] = 1146,
        [anon_sym_while] = 1146,
        [anon_sym_until] = 1146,
        [anon_sym_if] = 1146,
        [anon_sym_unless] = 1146,
        [anon_sym_else] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 1146,
        [anon_sym_SEMI] = 1146,
    },
    [604] = {
        [anon_sym_end] = 1478,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [605] = {
        [sym__statement] = 1482,
        [sym__declaration] = 424,
        [sym_method_declaration] = 426,
        [sym_class_declaration] = 426,
        [sym_module_declaration] = 426,
        [sym_while_statement] = 424,
        [sym_until_statement] = 424,
        [sym_if_statement] = 424,
        [sym_unless_statement] = 424,
        [sym_if_modifier] = 424,
        [sym_unless_modifier] = 424,
        [sym_while_modifier] = 424,
        [sym_until_modifier] = 424,
        [sym__call] = 430,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 424,
        [sym__argument] = 432,
        [sym__primary] = 434,
        [sym_scope_resolution_expression] = 436,
        [sym_subscript_expression] = 436,
        [sym__variable] = 436,
        [anon_sym_undef] = 438,
        [anon_sym_alias] = 440,
        [anon_sym_def] = 442,
        [anon_sym_LPAREN] = 444,
        [anon_sym_class] = 446,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_module] = 450,
        [anon_sym_while] = 452,
        [anon_sym_until] = 454,
        [anon_sym_if] = 456,
        [anon_sym_unless] = 458,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 460,
        [anon_sym_self] = 460,
        [sym_identifier] = 460,
        [sym_comment] = 48,
        [sym_symbol] = 432,
        [sym__line_break] = 48,
    },
    [606] = {
        [sym_else_block] = 1150,
        [anon_sym_end] = 1150,
        [anon_sym_else] = 1150,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [607] = {
        [sym__expression] = 1484,
        [sym__argument] = 432,
        [sym__primary] = 434,
        [sym_scope_resolution_expression] = 436,
        [sym_subscript_expression] = 436,
        [sym__variable] = 436,
        [anon_sym_LPAREN] = 444,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_nil] = 460,
        [anon_sym_self] = 460,
        [sym_identifier] = 460,
        [sym_comment] = 48,
        [sym_symbol] = 432,
        [sym__line_break] = 48,
    },
    [608] = {
        [sym__expression] = 1486,
        [sym__argument] = 432,
        [sym__primary] = 434,
        [sym_scope_resolution_expression] = 436,
        [sym_subscript_expression] = 436,
        [sym__variable] = 436,
        [anon_sym_LPAREN] = 444,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_nil] = 460,
        [anon_sym_self] = 460,
        [sym_identifier] = 460,
        [sym_comment] = 48,
        [sym_symbol] = 432,
        [sym__line_break] = 48,
    },
    [609] = {
        [sym__expression] = 1488,
        [sym__argument] = 432,
        [sym__primary] = 434,
        [sym_scope_resolution_expression] = 436,
        [sym_subscript_expression] = 436,
        [sym__variable] = 436,
        [anon_sym_LPAREN] = 444,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_nil] = 460,
        [anon_sym_self] = 460,
        [sym_identifier] = 460,
        [sym_comment] = 48,
        [sym_symbol] = 432,
        [sym__line_break] = 48,
    },
    [610] = {
        [sym__expression] = 1490,
        [sym__argument] = 432,
        [sym__primary] = 434,
        [sym_scope_resolution_expression] = 436,
        [sym_subscript_expression] = 436,
        [sym__variable] = 436,
        [anon_sym_LPAREN] = 444,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_nil] = 460,
        [anon_sym_self] = 460,
        [sym_identifier] = 460,
        [sym_comment] = 48,
        [sym_symbol] = 432,
        [sym__line_break] = 48,
    },
    [611] = {
        [sym_else_block] = 330,
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_end] = 330,
        [anon_sym_while] = 330,
        [anon_sym_until] = 330,
        [anon_sym_if] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_else] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [612] = {
        [sym_else_block] = 332,
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_else] = 332,
        [sym_comment] = 48,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [613] = {
        [sym_else_block] = 334,
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_while] = 334,
        [anon_sym_until] = 334,
        [anon_sym_if] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_else] = 334,
        [sym_comment] = 48,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [614] = {
        [sym_else_block] = 336,
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 336,
        [anon_sym_while] = 336,
        [anon_sym_until] = 336,
        [anon_sym_if] = 336,
        [anon_sym_unless] = 336,
        [anon_sym_else] = 336,
        [sym_comment] = 48,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [615] = {
        [sym_else_block] = 342,
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 1492,
        [anon_sym_end] = 342,
        [anon_sym_while] = 468,
        [anon_sym_until] = 470,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 474,
        [anon_sym_else] = 342,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [616] = {
        [sym_else_block] = 344,
        [anon_sym_end] = 344,
        [anon_sym_else] = 344,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [617] = {
        [anon_sym_end] = 1494,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [618] = {
        [sym__terminator] = 518,
        [aux_sym_program_repeat1] = 518,
        [anon_sym_RPAREN] = 518,
        [anon_sym_while] = 518,
        [anon_sym_until] = 518,
        [anon_sym_if] = 518,
        [anon_sym_unless] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [619] = {
        [sym__terminator] = 616,
        [aux_sym_program_repeat1] = 616,
        [anon_sym_RPAREN] = 616,
        [anon_sym_while] = 616,
        [anon_sym_until] = 616,
        [anon_sym_if] = 616,
        [anon_sym_unless] = 616,
        [sym_comment] = 48,
        [sym__line_break] = 616,
        [anon_sym_SEMI] = 616,
    },
    [620] = {
        [sym_then_block] = 1496,
        [sym__then_elsif_else_block] = 1498,
        [sym__terminator] = 622,
        [anon_sym_then] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 626,
    },
    [621] = {
        [sym_else_block] = 1500,
        [aux_sym__then_elsif_else_block_repeat1] = 1502,
        [anon_sym_end] = 1504,
        [anon_sym_else] = 418,
        [anon_sym_elsif] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [622] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_RPAREN] = 664,
        [anon_sym_while] = 664,
        [anon_sym_until] = 664,
        [anon_sym_if] = 664,
        [anon_sym_unless] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [623] = {
        [anon_sym_end] = 1506,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [624] = {
        [sym_else_block] = 1508,
        [anon_sym_end] = 1506,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [625] = {
        [sym__terminator] = 772,
        [aux_sym_program_repeat1] = 772,
        [anon_sym_RPAREN] = 772,
        [anon_sym_while] = 772,
        [anon_sym_until] = 772,
        [anon_sym_if] = 772,
        [anon_sym_unless] = 772,
        [sym_comment] = 48,
        [sym__line_break] = 772,
        [anon_sym_SEMI] = 772,
    },
    [626] = {
        [anon_sym_end] = 1510,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [627] = {
        [sym__terminator] = 828,
        [aux_sym_program_repeat1] = 828,
        [anon_sym_RPAREN] = 828,
        [anon_sym_while] = 828,
        [anon_sym_until] = 828,
        [anon_sym_if] = 828,
        [anon_sym_unless] = 828,
        [sym_comment] = 48,
        [sym__line_break] = 828,
        [anon_sym_SEMI] = 828,
    },
    [628] = {
        [sym__terminator] = 830,
        [aux_sym_program_repeat1] = 830,
        [anon_sym_RPAREN] = 830,
        [anon_sym_while] = 830,
        [anon_sym_until] = 830,
        [anon_sym_if] = 830,
        [anon_sym_unless] = 830,
        [sym_comment] = 48,
        [sym__line_break] = 830,
        [anon_sym_SEMI] = 830,
    },
    [629] = {
        [sym__statement_block] = 1512,
        [sym__do_block] = 1514,
        [sym__terminator] = 1516,
        [anon_sym_do] = 1518,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [630] = {
        [sym__terminator] = 872,
        [aux_sym_program_repeat1] = 872,
        [anon_sym_RPAREN] = 872,
        [anon_sym_while] = 872,
        [anon_sym_until] = 872,
        [anon_sym_if] = 872,
        [anon_sym_unless] = 872,
        [sym_comment] = 48,
        [sym__line_break] = 872,
        [anon_sym_SEMI] = 872,
    },
    [631] = {
        [sym__terminator] = 874,
        [aux_sym_program_repeat1] = 874,
        [anon_sym_RPAREN] = 874,
        [anon_sym_while] = 874,
        [anon_sym_until] = 874,
        [anon_sym_if] = 874,
        [anon_sym_unless] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 874,
        [anon_sym_SEMI] = 874,
    },
    [632] = {
        [sym__statement] = 1520,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1522,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [633] = {
        [sym__statement] = 1524,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1526,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [634] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1528,
        [anon_sym_end] = 1530,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [635] = {
        [sym__terminator] = 888,
        [aux_sym_program_repeat1] = 888,
        [anon_sym_RPAREN] = 888,
        [anon_sym_while] = 888,
        [anon_sym_until] = 888,
        [anon_sym_if] = 888,
        [anon_sym_unless] = 888,
        [sym_comment] = 48,
        [sym__line_break] = 888,
        [anon_sym_SEMI] = 888,
    },
    [636] = {
        [anon_sym_end] = 1532,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [637] = {
        [sym__terminator] = 894,
        [aux_sym_program_repeat1] = 894,
        [anon_sym_RPAREN] = 894,
        [anon_sym_while] = 894,
        [anon_sym_until] = 894,
        [anon_sym_if] = 894,
        [anon_sym_unless] = 894,
        [sym_comment] = 48,
        [sym__line_break] = 894,
        [anon_sym_SEMI] = 894,
    },
    [638] = {
        [sym__terminator] = 904,
        [aux_sym_program_repeat1] = 904,
        [anon_sym_RPAREN] = 904,
        [anon_sym_while] = 904,
        [anon_sym_until] = 904,
        [anon_sym_if] = 904,
        [anon_sym_unless] = 904,
        [sym_comment] = 48,
        [sym__line_break] = 904,
        [anon_sym_SEMI] = 904,
    },
    [639] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1534,
        [anon_sym_end] = 1536,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [640] = {
        [sym__terminator] = 912,
        [aux_sym_program_repeat1] = 912,
        [anon_sym_RPAREN] = 912,
        [anon_sym_while] = 912,
        [anon_sym_until] = 912,
        [anon_sym_if] = 912,
        [anon_sym_unless] = 912,
        [sym_comment] = 48,
        [sym__line_break] = 912,
        [anon_sym_SEMI] = 912,
    },
    [641] = {
        [anon_sym_end] = 1538,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [642] = {
        [sym__terminator] = 916,
        [aux_sym_program_repeat1] = 916,
        [anon_sym_RPAREN] = 916,
        [anon_sym_while] = 916,
        [anon_sym_until] = 916,
        [anon_sym_if] = 916,
        [anon_sym_unless] = 916,
        [sym_comment] = 48,
        [sym__line_break] = 916,
        [anon_sym_SEMI] = 916,
    },
    [643] = {
        [sym__terminator] = 918,
        [aux_sym_program_repeat1] = 918,
        [anon_sym_RPAREN] = 918,
        [anon_sym_while] = 918,
        [anon_sym_until] = 918,
        [anon_sym_if] = 918,
        [anon_sym_unless] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 918,
        [anon_sym_SEMI] = 918,
    },
    [644] = {
        [sym__statement_block] = 1540,
        [sym__do_block] = 1514,
        [sym__terminator] = 1516,
        [anon_sym_do] = 1518,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [645] = {
        [sym__terminator] = 922,
        [aux_sym_program_repeat1] = 922,
        [anon_sym_RPAREN] = 922,
        [anon_sym_while] = 922,
        [anon_sym_until] = 922,
        [anon_sym_if] = 922,
        [anon_sym_unless] = 922,
        [sym_comment] = 48,
        [sym__line_break] = 922,
        [anon_sym_SEMI] = 922,
    },
    [646] = {
        [sym__terminator] = 1542,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [647] = {
        [sym__statement] = 1544,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1546,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [648] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1548,
        [anon_sym_end] = 1550,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [649] = {
        [sym__terminator] = 934,
        [aux_sym_program_repeat1] = 934,
        [anon_sym_RPAREN] = 934,
        [anon_sym_while] = 934,
        [anon_sym_until] = 934,
        [anon_sym_if] = 934,
        [anon_sym_unless] = 934,
        [sym_comment] = 48,
        [sym__line_break] = 934,
        [anon_sym_SEMI] = 934,
    },
    [650] = {
        [anon_sym_end] = 1552,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [651] = {
        [sym__terminator] = 938,
        [aux_sym_program_repeat1] = 938,
        [anon_sym_RPAREN] = 938,
        [anon_sym_while] = 938,
        [anon_sym_until] = 938,
        [anon_sym_if] = 938,
        [anon_sym_unless] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 938,
        [anon_sym_SEMI] = 938,
    },
    [652] = {
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 940,
        [anon_sym_RPAREN] = 940,
        [anon_sym_while] = 940,
        [anon_sym_until] = 940,
        [anon_sym_if] = 940,
        [anon_sym_unless] = 940,
        [sym_comment] = 48,
        [sym__line_break] = 940,
        [anon_sym_SEMI] = 940,
    },
    [653] = {
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [anon_sym_RPAREN] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_while] = 236,
        [anon_sym_until] = 236,
        [anon_sym_if] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [654] = {
        [sym__terminator] = 1554,
        [anon_sym_LT] = 1556,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [655] = {
        [sym__statement] = 1558,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1560,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [656] = {
        [sym_identifier] = 1562,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [657] = {
        [sym__terminator] = 1564,
        [aux_sym_class_declaration_repeat1] = 1566,
        [anon_sym_COLON_COLON] = 956,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [658] = {
        [sym__statement] = 1568,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1570,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [659] = {
        [sym__terminator] = 1572,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [660] = {
        [sym__statement] = 1574,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1576,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [661] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1578,
        [anon_sym_end] = 1580,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [662] = {
        [sym__terminator] = 980,
        [aux_sym_program_repeat1] = 980,
        [anon_sym_RPAREN] = 980,
        [anon_sym_while] = 980,
        [anon_sym_until] = 980,
        [anon_sym_if] = 980,
        [anon_sym_unless] = 980,
        [sym_comment] = 48,
        [sym__line_break] = 980,
        [anon_sym_SEMI] = 980,
    },
    [663] = {
        [anon_sym_end] = 1582,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [664] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [anon_sym_RPAREN] = 984,
        [anon_sym_while] = 984,
        [anon_sym_until] = 984,
        [anon_sym_if] = 984,
        [anon_sym_unless] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [665] = {
        [sym__terminator] = 986,
        [aux_sym_program_repeat1] = 986,
        [anon_sym_RPAREN] = 986,
        [anon_sym_while] = 986,
        [anon_sym_until] = 986,
        [anon_sym_if] = 986,
        [anon_sym_unless] = 986,
        [sym_comment] = 48,
        [sym__line_break] = 986,
        [anon_sym_SEMI] = 986,
    },
    [666] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1584,
        [anon_sym_end] = 1576,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [667] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_RPAREN] = 990,
        [anon_sym_while] = 990,
        [anon_sym_until] = 990,
        [anon_sym_if] = 990,
        [anon_sym_unless] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [668] = {
        [anon_sym_end] = 1580,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [669] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1586,
        [anon_sym_end] = 1588,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [670] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [anon_sym_RPAREN] = 996,
        [anon_sym_while] = 996,
        [anon_sym_until] = 996,
        [anon_sym_if] = 996,
        [anon_sym_unless] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [671] = {
        [anon_sym_end] = 1570,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [672] = {
        [sym__terminator] = 998,
        [aux_sym_program_repeat1] = 998,
        [anon_sym_RPAREN] = 998,
        [anon_sym_while] = 998,
        [anon_sym_until] = 998,
        [anon_sym_if] = 998,
        [anon_sym_unless] = 998,
        [sym_comment] = 48,
        [sym__line_break] = 998,
        [anon_sym_SEMI] = 998,
    },
    [673] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 1590,
        [anon_sym_RPAREN] = 1592,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [674] = {
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [anon_sym_RPAREN] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [675] = {
        [anon_sym_RPAREN] = 1594,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [676] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [anon_sym_RPAREN] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_while] = 316,
        [anon_sym_until] = 316,
        [anon_sym_if] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [677] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_RPAREN] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_while] = 338,
        [anon_sym_until] = 338,
        [anon_sym_if] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [678] = {
        [sym_argument_list] = 1596,
        [sym__terminator] = 1598,
        [anon_sym_LPAREN] = 1600,
        [anon_sym_STAR] = 1012,
        [anon_sym_AMP] = 1012,
        [sym_identifier] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [679] = {
        [sym__terminator] = 1602,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [680] = {
        [sym__statement] = 1604,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1606,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [681] = {
        [sym_argument_list] = 1608,
        [anon_sym_RPAREN] = 1602,
        [anon_sym_STAR] = 1026,
        [anon_sym_AMP] = 1026,
        [sym_identifier] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [682] = {
        [anon_sym_RPAREN] = 1610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [683] = {
        [sym__statement] = 1612,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1614,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [684] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1616,
        [anon_sym_end] = 1618,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [685] = {
        [sym__terminator] = 1088,
        [aux_sym_program_repeat1] = 1088,
        [anon_sym_RPAREN] = 1088,
        [anon_sym_while] = 1088,
        [anon_sym_until] = 1088,
        [anon_sym_if] = 1088,
        [anon_sym_unless] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 1088,
        [anon_sym_SEMI] = 1088,
    },
    [686] = {
        [anon_sym_end] = 1620,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [687] = {
        [sym__terminator] = 1092,
        [aux_sym_program_repeat1] = 1092,
        [anon_sym_RPAREN] = 1092,
        [anon_sym_while] = 1092,
        [anon_sym_until] = 1092,
        [anon_sym_if] = 1092,
        [anon_sym_unless] = 1092,
        [sym_comment] = 48,
        [sym__line_break] = 1092,
        [anon_sym_SEMI] = 1092,
    },
    [688] = {
        [sym__terminator] = 1094,
        [aux_sym_program_repeat1] = 1094,
        [anon_sym_RPAREN] = 1094,
        [anon_sym_while] = 1094,
        [anon_sym_until] = 1094,
        [anon_sym_if] = 1094,
        [anon_sym_unless] = 1094,
        [sym_comment] = 48,
        [sym__line_break] = 1094,
        [anon_sym_SEMI] = 1094,
    },
    [689] = {
        [sym__statement] = 1622,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1618,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [690] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1624,
        [anon_sym_end] = 1620,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [691] = {
        [anon_sym_end] = 1626,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [692] = {
        [sym__terminator] = 1102,
        [aux_sym_program_repeat1] = 1102,
        [anon_sym_RPAREN] = 1102,
        [anon_sym_while] = 1102,
        [anon_sym_until] = 1102,
        [anon_sym_if] = 1102,
        [anon_sym_unless] = 1102,
        [sym_comment] = 48,
        [sym__line_break] = 1102,
        [anon_sym_SEMI] = 1102,
    },
    [693] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1628,
        [anon_sym_end] = 1614,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [694] = {
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [anon_sym_RPAREN] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [sym_comment] = 48,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [695] = {
        [anon_sym_end] = 1618,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [696] = {
        [sym__function_name] = 1630,
        [anon_sym_PIPE] = 260,
        [anon_sym_STAR] = 260,
        [anon_sym_AMP] = 260,
        [anon_sym_LT] = 260,
        [sym_identifier] = 260,
        [sym_comment] = 48,
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
        [sym__line_break] = 48,
    },
    [697] = {
        [sym__terminator] = 1110,
        [aux_sym_program_repeat1] = 1110,
        [anon_sym_RPAREN] = 1110,
        [anon_sym_while] = 1110,
        [anon_sym_until] = 1110,
        [anon_sym_if] = 1110,
        [anon_sym_unless] = 1110,
        [sym_comment] = 48,
        [sym__line_break] = 1110,
        [anon_sym_SEMI] = 1110,
    },
    [698] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [anon_sym_RPAREN] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_unless] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [699] = {
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_RPAREN] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [sym_comment] = 48,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [700] = {
        [sym_identifier] = 1632,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [701] = {
        [sym__argument] = 1634,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 1636,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [702] = {
        [aux_sym__call_arguments_repeat1] = 1638,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 1640,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [703] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_RPAREN] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [704] = {
        [anon_sym_RBRACK] = 1642,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [705] = {
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [anon_sym_RPAREN] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_while] = 400,
        [anon_sym_until] = 400,
        [anon_sym_if] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [706] = {
        [sym__terminator] = 408,
        [aux_sym_program_repeat1] = 408,
        [anon_sym_RPAREN] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_while] = 408,
        [anon_sym_until] = 408,
        [anon_sym_if] = 408,
        [anon_sym_unless] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [707] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [anon_sym_RPAREN] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_while] = 410,
        [anon_sym_until] = 410,
        [anon_sym_if] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [708] = {
        [sym__statement] = 1644,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_PIPE] = 1646,
        [anon_sym_end] = 1630,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [709] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1648,
        [anon_sym_end] = 1650,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [710] = {
        [sym__statement] = 1652,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1650,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [711] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1654,
        [anon_sym_end] = 1656,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [712] = {
        [sym__terminator] = 1140,
        [aux_sym_program_repeat1] = 1140,
        [anon_sym_RPAREN] = 1140,
        [anon_sym_while] = 1140,
        [anon_sym_until] = 1140,
        [anon_sym_if] = 1140,
        [anon_sym_unless] = 1140,
        [sym_comment] = 48,
        [sym__line_break] = 1140,
        [anon_sym_SEMI] = 1140,
    },
    [713] = {
        [anon_sym_end] = 1658,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [714] = {
        [sym__terminator] = 1144,
        [aux_sym_program_repeat1] = 1144,
        [anon_sym_RPAREN] = 1144,
        [anon_sym_while] = 1144,
        [anon_sym_until] = 1144,
        [anon_sym_if] = 1144,
        [anon_sym_unless] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 1144,
        [anon_sym_SEMI] = 1144,
    },
    [715] = {
        [sym__terminator] = 1146,
        [aux_sym_program_repeat1] = 1146,
        [anon_sym_RPAREN] = 1146,
        [anon_sym_while] = 1146,
        [anon_sym_until] = 1146,
        [anon_sym_if] = 1146,
        [anon_sym_unless] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 1146,
        [anon_sym_SEMI] = 1146,
    },
    [716] = {
        [anon_sym_end] = 1656,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [717] = {
        [anon_sym_RPAREN] = 1660,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [718] = {
        [aux_sym__call_arguments_repeat1] = 316,
        [anon_sym_do] = 316,
        [anon_sym_COMMA] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [719] = {
        [aux_sym__call_arguments_repeat1] = 338,
        [anon_sym_do] = 338,
        [anon_sym_COMMA] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [720] = {
        [sym_identifier] = 1662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [721] = {
        [sym__argument] = 1664,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 1666,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [722] = {
        [aux_sym__call_arguments_repeat1] = 1668,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 1670,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [723] = {
        [aux_sym__call_arguments_repeat1] = 378,
        [anon_sym_do] = 378,
        [anon_sym_COMMA] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [724] = {
        [anon_sym_RBRACK] = 1672,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [725] = {
        [aux_sym__call_arguments_repeat1] = 400,
        [anon_sym_do] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [726] = {
        [aux_sym__call_arguments_repeat1] = 408,
        [anon_sym_do] = 408,
        [anon_sym_COMMA] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [727] = {
        [aux_sym__call_arguments_repeat1] = 410,
        [anon_sym_do] = 410,
        [anon_sym_COMMA] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [728] = {
        [anon_sym_do] = 1674,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [729] = {
        [sym__argument] = 1676,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_nil] = 214,
        [anon_sym_self] = 214,
        [sym_identifier] = 214,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [730] = {
        [aux_sym__call_arguments_repeat1] = 1678,
        [anon_sym_do] = 404,
        [anon_sym_COMMA] = 224,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [731] = {
        [anon_sym_do] = 406,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [732] = {
        [sym_then_block] = 1680,
        [sym__then_else_block] = 1682,
        [sym__terminator] = 290,
        [anon_sym_then] = 290,
        [sym_comment] = 48,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 294,
    },
    [733] = {
        [sym_else_block] = 1684,
        [anon_sym_end] = 1686,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [734] = {
        [sym__terminator] = 420,
        [aux_sym_program_repeat1] = 420,
        [ts_builtin_sym_end] = 420,
        [anon_sym_while] = 420,
        [anon_sym_until] = 420,
        [anon_sym_if] = 420,
        [anon_sym_unless] = 420,
        [sym_comment] = 48,
        [sym__line_break] = 420,
        [anon_sym_SEMI] = 420,
    },
    [735] = {
        [anon_sym_end] = 1688,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [736] = {
        [sym__terminator] = 518,
        [aux_sym_program_repeat1] = 518,
        [ts_builtin_sym_end] = 518,
        [anon_sym_while] = 518,
        [anon_sym_until] = 518,
        [anon_sym_if] = 518,
        [anon_sym_unless] = 518,
        [sym_comment] = 48,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [737] = {
        [sym__terminator] = 616,
        [aux_sym_program_repeat1] = 616,
        [ts_builtin_sym_end] = 616,
        [anon_sym_while] = 616,
        [anon_sym_until] = 616,
        [anon_sym_if] = 616,
        [anon_sym_unless] = 616,
        [sym_comment] = 48,
        [sym__line_break] = 616,
        [anon_sym_SEMI] = 616,
    },
    [738] = {
        [sym_then_block] = 1690,
        [sym__then_elsif_else_block] = 1692,
        [sym__terminator] = 622,
        [anon_sym_then] = 622,
        [sym_comment] = 48,
        [sym__line_break] = 624,
        [anon_sym_SEMI] = 626,
    },
    [739] = {
        [sym_else_block] = 1694,
        [aux_sym__then_elsif_else_block_repeat1] = 1696,
        [anon_sym_end] = 1698,
        [anon_sym_else] = 418,
        [anon_sym_elsif] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [740] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [ts_builtin_sym_end] = 664,
        [anon_sym_while] = 664,
        [anon_sym_until] = 664,
        [anon_sym_if] = 664,
        [anon_sym_unless] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [741] = {
        [anon_sym_end] = 1700,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [742] = {
        [sym_else_block] = 1702,
        [anon_sym_end] = 1700,
        [anon_sym_else] = 418,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [743] = {
        [sym__terminator] = 772,
        [aux_sym_program_repeat1] = 772,
        [ts_builtin_sym_end] = 772,
        [anon_sym_while] = 772,
        [anon_sym_until] = 772,
        [anon_sym_if] = 772,
        [anon_sym_unless] = 772,
        [sym_comment] = 48,
        [sym__line_break] = 772,
        [anon_sym_SEMI] = 772,
    },
    [744] = {
        [anon_sym_end] = 1704,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [745] = {
        [sym__terminator] = 828,
        [aux_sym_program_repeat1] = 828,
        [ts_builtin_sym_end] = 828,
        [anon_sym_while] = 828,
        [anon_sym_until] = 828,
        [anon_sym_if] = 828,
        [anon_sym_unless] = 828,
        [sym_comment] = 48,
        [sym__line_break] = 828,
        [anon_sym_SEMI] = 828,
    },
    [746] = {
        [sym__terminator] = 830,
        [aux_sym_program_repeat1] = 830,
        [ts_builtin_sym_end] = 830,
        [anon_sym_while] = 830,
        [anon_sym_until] = 830,
        [anon_sym_if] = 830,
        [anon_sym_unless] = 830,
        [sym_comment] = 48,
        [sym__line_break] = 830,
        [anon_sym_SEMI] = 830,
    },
    [747] = {
        [sym__statement_block] = 1706,
        [sym__do_block] = 1708,
        [sym__terminator] = 1710,
        [anon_sym_do] = 1712,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [748] = {
        [sym__terminator] = 872,
        [aux_sym_program_repeat1] = 872,
        [ts_builtin_sym_end] = 872,
        [anon_sym_while] = 872,
        [anon_sym_until] = 872,
        [anon_sym_if] = 872,
        [anon_sym_unless] = 872,
        [sym_comment] = 48,
        [sym__line_break] = 872,
        [anon_sym_SEMI] = 872,
    },
    [749] = {
        [sym__terminator] = 874,
        [aux_sym_program_repeat1] = 874,
        [ts_builtin_sym_end] = 874,
        [anon_sym_while] = 874,
        [anon_sym_until] = 874,
        [anon_sym_if] = 874,
        [anon_sym_unless] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 874,
        [anon_sym_SEMI] = 874,
    },
    [750] = {
        [sym__statement] = 1714,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1716,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [751] = {
        [sym__statement] = 1718,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1720,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [752] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1722,
        [anon_sym_end] = 1724,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [753] = {
        [sym__terminator] = 888,
        [aux_sym_program_repeat1] = 888,
        [ts_builtin_sym_end] = 888,
        [anon_sym_while] = 888,
        [anon_sym_until] = 888,
        [anon_sym_if] = 888,
        [anon_sym_unless] = 888,
        [sym_comment] = 48,
        [sym__line_break] = 888,
        [anon_sym_SEMI] = 888,
    },
    [754] = {
        [anon_sym_end] = 1726,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [755] = {
        [sym__terminator] = 894,
        [aux_sym_program_repeat1] = 894,
        [ts_builtin_sym_end] = 894,
        [anon_sym_while] = 894,
        [anon_sym_until] = 894,
        [anon_sym_if] = 894,
        [anon_sym_unless] = 894,
        [sym_comment] = 48,
        [sym__line_break] = 894,
        [anon_sym_SEMI] = 894,
    },
    [756] = {
        [sym__terminator] = 904,
        [aux_sym_program_repeat1] = 904,
        [ts_builtin_sym_end] = 904,
        [anon_sym_while] = 904,
        [anon_sym_until] = 904,
        [anon_sym_if] = 904,
        [anon_sym_unless] = 904,
        [sym_comment] = 48,
        [sym__line_break] = 904,
        [anon_sym_SEMI] = 904,
    },
    [757] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1728,
        [anon_sym_end] = 1730,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [758] = {
        [sym__terminator] = 912,
        [aux_sym_program_repeat1] = 912,
        [ts_builtin_sym_end] = 912,
        [anon_sym_while] = 912,
        [anon_sym_until] = 912,
        [anon_sym_if] = 912,
        [anon_sym_unless] = 912,
        [sym_comment] = 48,
        [sym__line_break] = 912,
        [anon_sym_SEMI] = 912,
    },
    [759] = {
        [anon_sym_end] = 1732,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [760] = {
        [sym__terminator] = 916,
        [aux_sym_program_repeat1] = 916,
        [ts_builtin_sym_end] = 916,
        [anon_sym_while] = 916,
        [anon_sym_until] = 916,
        [anon_sym_if] = 916,
        [anon_sym_unless] = 916,
        [sym_comment] = 48,
        [sym__line_break] = 916,
        [anon_sym_SEMI] = 916,
    },
    [761] = {
        [sym__terminator] = 918,
        [aux_sym_program_repeat1] = 918,
        [ts_builtin_sym_end] = 918,
        [anon_sym_while] = 918,
        [anon_sym_until] = 918,
        [anon_sym_if] = 918,
        [anon_sym_unless] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 918,
        [anon_sym_SEMI] = 918,
    },
    [762] = {
        [sym__statement_block] = 1734,
        [sym__do_block] = 1708,
        [sym__terminator] = 1710,
        [anon_sym_do] = 1712,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [763] = {
        [sym__terminator] = 922,
        [aux_sym_program_repeat1] = 922,
        [ts_builtin_sym_end] = 922,
        [anon_sym_while] = 922,
        [anon_sym_until] = 922,
        [anon_sym_if] = 922,
        [anon_sym_unless] = 922,
        [sym_comment] = 48,
        [sym__line_break] = 922,
        [anon_sym_SEMI] = 922,
    },
    [764] = {
        [sym__terminator] = 1736,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [765] = {
        [sym__statement] = 1738,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1740,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [766] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1742,
        [anon_sym_end] = 1744,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [767] = {
        [sym__terminator] = 934,
        [aux_sym_program_repeat1] = 934,
        [ts_builtin_sym_end] = 934,
        [anon_sym_while] = 934,
        [anon_sym_until] = 934,
        [anon_sym_if] = 934,
        [anon_sym_unless] = 934,
        [sym_comment] = 48,
        [sym__line_break] = 934,
        [anon_sym_SEMI] = 934,
    },
    [768] = {
        [anon_sym_end] = 1746,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [769] = {
        [sym__terminator] = 938,
        [aux_sym_program_repeat1] = 938,
        [ts_builtin_sym_end] = 938,
        [anon_sym_while] = 938,
        [anon_sym_until] = 938,
        [anon_sym_if] = 938,
        [anon_sym_unless] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 938,
        [anon_sym_SEMI] = 938,
    },
    [770] = {
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 940,
        [ts_builtin_sym_end] = 940,
        [anon_sym_while] = 940,
        [anon_sym_until] = 940,
        [anon_sym_if] = 940,
        [anon_sym_unless] = 940,
        [sym_comment] = 48,
        [sym__line_break] = 940,
        [anon_sym_SEMI] = 940,
    },
    [771] = {
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_COLON_COLON] = 236,
        [anon_sym_while] = 236,
        [anon_sym_until] = 236,
        [anon_sym_if] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_LBRACK] = 236,
        [sym_comment] = 48,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [772] = {
        [sym__terminator] = 1748,
        [anon_sym_LT] = 1750,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [773] = {
        [sym__statement] = 1752,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1754,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [774] = {
        [sym_identifier] = 1756,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [775] = {
        [sym__terminator] = 1758,
        [aux_sym_class_declaration_repeat1] = 1760,
        [anon_sym_COLON_COLON] = 956,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [776] = {
        [sym__statement] = 1762,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1764,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [777] = {
        [sym__terminator] = 1766,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [778] = {
        [sym__statement] = 1768,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1770,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [779] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1772,
        [anon_sym_end] = 1774,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [780] = {
        [sym__terminator] = 980,
        [aux_sym_program_repeat1] = 980,
        [ts_builtin_sym_end] = 980,
        [anon_sym_while] = 980,
        [anon_sym_until] = 980,
        [anon_sym_if] = 980,
        [anon_sym_unless] = 980,
        [sym_comment] = 48,
        [sym__line_break] = 980,
        [anon_sym_SEMI] = 980,
    },
    [781] = {
        [anon_sym_end] = 1776,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [782] = {
        [sym__terminator] = 984,
        [aux_sym_program_repeat1] = 984,
        [ts_builtin_sym_end] = 984,
        [anon_sym_while] = 984,
        [anon_sym_until] = 984,
        [anon_sym_if] = 984,
        [anon_sym_unless] = 984,
        [sym_comment] = 48,
        [sym__line_break] = 984,
        [anon_sym_SEMI] = 984,
    },
    [783] = {
        [sym__terminator] = 986,
        [aux_sym_program_repeat1] = 986,
        [ts_builtin_sym_end] = 986,
        [anon_sym_while] = 986,
        [anon_sym_until] = 986,
        [anon_sym_if] = 986,
        [anon_sym_unless] = 986,
        [sym_comment] = 48,
        [sym__line_break] = 986,
        [anon_sym_SEMI] = 986,
    },
    [784] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1778,
        [anon_sym_end] = 1770,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [785] = {
        [sym__terminator] = 990,
        [aux_sym_program_repeat1] = 990,
        [ts_builtin_sym_end] = 990,
        [anon_sym_while] = 990,
        [anon_sym_until] = 990,
        [anon_sym_if] = 990,
        [anon_sym_unless] = 990,
        [sym_comment] = 48,
        [sym__line_break] = 990,
        [anon_sym_SEMI] = 990,
    },
    [786] = {
        [anon_sym_end] = 1774,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [787] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1780,
        [anon_sym_end] = 1782,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [788] = {
        [sym__terminator] = 996,
        [aux_sym_program_repeat1] = 996,
        [ts_builtin_sym_end] = 996,
        [anon_sym_while] = 996,
        [anon_sym_until] = 996,
        [anon_sym_if] = 996,
        [anon_sym_unless] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 996,
        [anon_sym_SEMI] = 996,
    },
    [789] = {
        [anon_sym_end] = 1764,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [790] = {
        [sym__terminator] = 998,
        [aux_sym_program_repeat1] = 998,
        [ts_builtin_sym_end] = 998,
        [anon_sym_while] = 998,
        [anon_sym_until] = 998,
        [anon_sym_if] = 998,
        [anon_sym_unless] = 998,
        [sym_comment] = 48,
        [sym__line_break] = 998,
        [anon_sym_SEMI] = 998,
    },
    [791] = {
        [sym__terminator] = 238,
        [aux_sym_program_repeat1] = 1784,
        [anon_sym_RPAREN] = 1786,
        [anon_sym_while] = 244,
        [anon_sym_until] = 246,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 250,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [792] = {
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [ts_builtin_sym_end] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_LBRACK] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [793] = {
        [anon_sym_RPAREN] = 1788,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [794] = {
        [sym__terminator] = 316,
        [aux_sym_program_repeat1] = 316,
        [ts_builtin_sym_end] = 316,
        [anon_sym_COLON_COLON] = 316,
        [anon_sym_while] = 316,
        [anon_sym_until] = 316,
        [anon_sym_if] = 316,
        [anon_sym_unless] = 316,
        [anon_sym_LBRACK] = 316,
        [sym_comment] = 48,
        [sym__line_break] = 316,
        [anon_sym_SEMI] = 316,
    },
    [795] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [ts_builtin_sym_end] = 338,
        [anon_sym_COLON_COLON] = 338,
        [anon_sym_while] = 338,
        [anon_sym_until] = 338,
        [anon_sym_if] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_LBRACK] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [796] = {
        [sym_argument_list] = 1790,
        [sym__terminator] = 1792,
        [anon_sym_LPAREN] = 1794,
        [anon_sym_STAR] = 1012,
        [anon_sym_AMP] = 1012,
        [sym_identifier] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [797] = {
        [sym__terminator] = 1796,
        [sym_comment] = 48,
        [sym__line_break] = 840,
        [anon_sym_SEMI] = 842,
    },
    [798] = {
        [sym__statement] = 1798,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1800,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [799] = {
        [sym_argument_list] = 1802,
        [anon_sym_RPAREN] = 1796,
        [anon_sym_STAR] = 1026,
        [anon_sym_AMP] = 1026,
        [sym_identifier] = 1028,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [800] = {
        [anon_sym_RPAREN] = 1804,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [801] = {
        [sym__statement] = 1806,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1808,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [802] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1810,
        [anon_sym_end] = 1812,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [803] = {
        [sym__terminator] = 1088,
        [aux_sym_program_repeat1] = 1088,
        [ts_builtin_sym_end] = 1088,
        [anon_sym_while] = 1088,
        [anon_sym_until] = 1088,
        [anon_sym_if] = 1088,
        [anon_sym_unless] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 1088,
        [anon_sym_SEMI] = 1088,
    },
    [804] = {
        [anon_sym_end] = 1814,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [805] = {
        [sym__terminator] = 1092,
        [aux_sym_program_repeat1] = 1092,
        [ts_builtin_sym_end] = 1092,
        [anon_sym_while] = 1092,
        [anon_sym_until] = 1092,
        [anon_sym_if] = 1092,
        [anon_sym_unless] = 1092,
        [sym_comment] = 48,
        [sym__line_break] = 1092,
        [anon_sym_SEMI] = 1092,
    },
    [806] = {
        [sym__terminator] = 1094,
        [aux_sym_program_repeat1] = 1094,
        [ts_builtin_sym_end] = 1094,
        [anon_sym_while] = 1094,
        [anon_sym_until] = 1094,
        [anon_sym_if] = 1094,
        [anon_sym_unless] = 1094,
        [sym_comment] = 48,
        [sym__line_break] = 1094,
        [anon_sym_SEMI] = 1094,
    },
    [807] = {
        [sym__statement] = 1816,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1812,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [808] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1818,
        [anon_sym_end] = 1814,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [809] = {
        [anon_sym_end] = 1820,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [810] = {
        [sym__terminator] = 1102,
        [aux_sym_program_repeat1] = 1102,
        [ts_builtin_sym_end] = 1102,
        [anon_sym_while] = 1102,
        [anon_sym_until] = 1102,
        [anon_sym_if] = 1102,
        [anon_sym_unless] = 1102,
        [sym_comment] = 48,
        [sym__line_break] = 1102,
        [anon_sym_SEMI] = 1102,
    },
    [811] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1822,
        [anon_sym_end] = 1808,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [812] = {
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [ts_builtin_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [sym_comment] = 48,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [813] = {
        [anon_sym_end] = 1812,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [814] = {
        [sym__function_name] = 1824,
        [anon_sym_PIPE] = 90,
        [anon_sym_STAR] = 90,
        [anon_sym_AMP] = 90,
        [anon_sym_LT] = 90,
        [sym_identifier] = 90,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 90,
        [anon_sym_CARET] = 90,
        [anon_sym_LT_EQ_GT] = 90,
        [anon_sym_EQ_EQ] = 90,
        [anon_sym_EQ_EQ_EQ] = 90,
        [anon_sym_EQ_TILDE] = 90,
        [anon_sym_GT] = 90,
        [anon_sym_GT_EQ] = 90,
        [anon_sym_LT_EQ] = 90,
        [anon_sym_PLUS] = 90,
        [anon_sym_DASH] = 90,
        [anon_sym_SLASH] = 90,
        [anon_sym_PERCENT] = 90,
        [anon_sym_STAR_STAR] = 90,
        [anon_sym_LT_LT] = 90,
        [anon_sym_GT_GT] = 90,
        [anon_sym_TILDE] = 90,
        [anon_sym_PLUS_AT] = 90,
        [anon_sym_DASH_AT] = 90,
        [anon_sym_LBRACK_RBRACK] = 90,
        [anon_sym_LBRACK_RBRACK_EQ] = 90,
        [sym__line_break] = 48,
    },
    [815] = {
        [sym__terminator] = 1110,
        [aux_sym_program_repeat1] = 1110,
        [ts_builtin_sym_end] = 1110,
        [anon_sym_while] = 1110,
        [anon_sym_until] = 1110,
        [anon_sym_if] = 1110,
        [anon_sym_unless] = 1110,
        [sym_comment] = 48,
        [sym__line_break] = 1110,
        [anon_sym_SEMI] = 1110,
    },
    [816] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [ts_builtin_sym_end] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_unless] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [817] = {
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [ts_builtin_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [sym_comment] = 48,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [818] = {
        [sym_identifier] = 1826,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [819] = {
        [sym__argument] = 1828,
        [sym__primary] = 350,
        [sym_scope_resolution_expression] = 352,
        [sym_subscript_expression] = 352,
        [sym__variable] = 352,
        [anon_sym_LPAREN] = 354,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_RBRACK] = 1830,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [820] = {
        [aux_sym__call_arguments_repeat1] = 1832,
        [anon_sym_COMMA] = 364,
        [anon_sym_RBRACK] = 1834,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [821] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [ts_builtin_sym_end] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_LBRACK] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [822] = {
        [anon_sym_RBRACK] = 1836,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [823] = {
        [sym__terminator] = 400,
        [aux_sym_program_repeat1] = 400,
        [ts_builtin_sym_end] = 400,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_while] = 400,
        [anon_sym_until] = 400,
        [anon_sym_if] = 400,
        [anon_sym_unless] = 400,
        [anon_sym_LBRACK] = 400,
        [sym_comment] = 48,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 400,
    },
    [824] = {
        [sym__terminator] = 408,
        [aux_sym_program_repeat1] = 408,
        [ts_builtin_sym_end] = 408,
        [anon_sym_COLON_COLON] = 408,
        [anon_sym_while] = 408,
        [anon_sym_until] = 408,
        [anon_sym_if] = 408,
        [anon_sym_unless] = 408,
        [anon_sym_LBRACK] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 408,
    },
    [825] = {
        [sym__terminator] = 410,
        [aux_sym_program_repeat1] = 410,
        [ts_builtin_sym_end] = 410,
        [anon_sym_COLON_COLON] = 410,
        [anon_sym_while] = 410,
        [anon_sym_until] = 410,
        [anon_sym_if] = 410,
        [anon_sym_unless] = 410,
        [anon_sym_LBRACK] = 410,
        [sym_comment] = 48,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 410,
    },
    [826] = {
        [sym__statement] = 1838,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_PIPE] = 1840,
        [anon_sym_end] = 1824,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [827] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1842,
        [anon_sym_end] = 1844,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [828] = {
        [sym__statement] = 1846,
        [sym__declaration] = 522,
        [sym_method_declaration] = 524,
        [sym_class_declaration] = 524,
        [sym_module_declaration] = 524,
        [sym_while_statement] = 522,
        [sym_until_statement] = 522,
        [sym_if_statement] = 522,
        [sym_unless_statement] = 522,
        [sym_if_modifier] = 522,
        [sym_unless_modifier] = 522,
        [sym_while_modifier] = 522,
        [sym_until_modifier] = 522,
        [sym__call] = 526,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 522,
        [sym__argument] = 528,
        [sym__primary] = 530,
        [sym_scope_resolution_expression] = 532,
        [sym_subscript_expression] = 532,
        [sym__variable] = 532,
        [anon_sym_end] = 1844,
        [anon_sym_undef] = 536,
        [anon_sym_alias] = 538,
        [anon_sym_def] = 540,
        [anon_sym_LPAREN] = 542,
        [anon_sym_class] = 544,
        [anon_sym_COLON_COLON] = 546,
        [anon_sym_module] = 548,
        [anon_sym_while] = 550,
        [anon_sym_until] = 552,
        [anon_sym_if] = 554,
        [anon_sym_unless] = 556,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 558,
        [anon_sym_self] = 558,
        [sym_identifier] = 558,
        [sym_comment] = 48,
        [sym_symbol] = 528,
        [sym__line_break] = 48,
    },
    [829] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 1848,
        [anon_sym_end] = 1850,
        [anon_sym_while] = 566,
        [anon_sym_until] = 568,
        [anon_sym_if] = 570,
        [anon_sym_unless] = 572,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [830] = {
        [sym__terminator] = 1140,
        [aux_sym_program_repeat1] = 1140,
        [ts_builtin_sym_end] = 1140,
        [anon_sym_while] = 1140,
        [anon_sym_until] = 1140,
        [anon_sym_if] = 1140,
        [anon_sym_unless] = 1140,
        [sym_comment] = 48,
        [sym__line_break] = 1140,
        [anon_sym_SEMI] = 1140,
    },
    [831] = {
        [anon_sym_end] = 1852,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [832] = {
        [sym__terminator] = 1144,
        [aux_sym_program_repeat1] = 1144,
        [ts_builtin_sym_end] = 1144,
        [anon_sym_while] = 1144,
        [anon_sym_until] = 1144,
        [anon_sym_if] = 1144,
        [anon_sym_unless] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 1144,
        [anon_sym_SEMI] = 1144,
    },
    [833] = {
        [sym__terminator] = 1146,
        [aux_sym_program_repeat1] = 1146,
        [ts_builtin_sym_end] = 1146,
        [anon_sym_while] = 1146,
        [anon_sym_until] = 1146,
        [anon_sym_if] = 1146,
        [anon_sym_unless] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 1146,
        [anon_sym_SEMI] = 1146,
    },
    [834] = {
        [anon_sym_end] = 1850,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [835] = {
        [sym__statement] = 1854,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym_if_modifier] = 6,
        [sym_unless_modifier] = 6,
        [sym_while_modifier] = 6,
        [sym_until_modifier] = 6,
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
        [anon_sym_while] = 36,
        [anon_sym_until] = 38,
        [anon_sym_if] = 40,
        [anon_sym_unless] = 42,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [836] = {
        [ts_builtin_sym_end] = 1856,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [837] = {
        [sym__expression] = 1858,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 28,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [838] = {
        [sym__expression] = 1860,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 28,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [839] = {
        [sym__expression] = 1862,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 28,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [840] = {
        [sym__expression] = 1864,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 28,
        [anon_sym_COLON_COLON] = 32,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [841] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_while] = 330,
        [anon_sym_until] = 330,
        [anon_sym_if] = 330,
        [anon_sym_unless] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [842] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [ts_builtin_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [sym_comment] = 48,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [843] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_while] = 334,
        [anon_sym_until] = 334,
        [anon_sym_if] = 334,
        [anon_sym_unless] = 334,
        [sym_comment] = 48,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [844] = {
        [sym__terminator] = 336,
        [aux_sym_program_repeat1] = 336,
        [ts_builtin_sym_end] = 336,
        [anon_sym_while] = 336,
        [anon_sym_until] = 336,
        [anon_sym_if] = 336,
        [anon_sym_unless] = 336,
        [sym_comment] = 48,
        [sym__line_break] = 336,
        [anon_sym_SEMI] = 336,
    },
    [845] = {
        [sym__terminator] = 52,
        [aux_sym_program_repeat1] = 1866,
        [ts_builtin_sym_end] = 342,
        [anon_sym_while] = 58,
        [anon_sym_until] = 60,
        [anon_sym_if] = 62,
        [anon_sym_unless] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 68,
    },
    [846] = {
        [ts_builtin_sym_end] = 344,
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
    [52] = {.count = 1}, SHIFT(835, 0),
    [54] = {.count = 1}, SHIFT(836, 0),
    [56] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [58] = {.count = 1}, SHIFT(837, 0),
    [60] = {.count = 1}, SHIFT(838, 0),
    [62] = {.count = 1}, SHIFT(839, 0),
    [64] = {.count = 1}, SHIFT(840, 0),
    [66] = {.count = 1}, SHIFT(71, 0),
    [68] = {.count = 1}, SHIFT(72, 0),
    [70] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [74] = {.count = 1}, SHIFT(826, 0),
    [76] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [78] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [80] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [82] = {.count = 1}, SHIFT(818, 0),
    [84] = {.count = 1}, SHIFT(819, 0),
    [86] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [88] = {.count = 1}, SHIFT(817, 0),
    [90] = {.count = 1}, SHIFT(816, 0),
    [92] = {.count = 1}, SHIFT(814, 0),
    [94] = {.count = 1}, SHIFT(379, 0),
    [96] = {.count = 1}, SHIFT(796, 0),
    [98] = {.count = 1}, SHIFT(338, 0),
    [100] = {.count = 1}, SHIFT(791, 0),
    [102] = {.count = 1}, SHIFT(34, 0),
    [104] = {.count = 1}, SHIFT(35, 0),
    [106] = {.count = 1}, SHIFT(36, 0),
    [108] = {.count = 1}, SHIFT(37, 0),
    [110] = {.count = 1}, SHIFT(38, 0),
    [112] = {.count = 1}, SHIFT(39, 0),
    [114] = {.count = 1}, SHIFT(40, 0),
    [116] = {.count = 1}, SHIFT(41, 0),
    [118] = {.count = 1}, SHIFT(42, 0),
    [120] = {.count = 1}, SHIFT(43, 0),
    [122] = {.count = 1}, SHIFT(792, 0),
    [124] = {.count = 1}, SHIFT(45, 0),
    [126] = {.count = 1}, SHIFT(46, 0),
    [128] = {.count = 1}, SHIFT(47, 0),
    [130] = {.count = 1}, SHIFT(48, 0),
    [132] = {.count = 1}, SHIFT(49, 0),
    [134] = {.count = 1}, SHIFT(50, 0),
    [136] = {.count = 1}, SHIFT(51, 0),
    [138] = {.count = 1}, SHIFT(52, 0),
    [140] = {.count = 1}, SHIFT(772, 0),
    [142] = {.count = 1}, SHIFT(771, 0),
    [144] = {.count = 1}, SHIFT(764, 0),
    [146] = {.count = 1}, SHIFT(762, 0),
    [148] = {.count = 1}, SHIFT(252, 0),
    [150] = {.count = 1}, SHIFT(253, 0),
    [152] = {.count = 1}, SHIFT(254, 0),
    [154] = {.count = 1}, SHIFT(255, 0),
    [156] = {.count = 1}, SHIFT(256, 0),
    [158] = {.count = 1}, SHIFT(257, 0),
    [160] = {.count = 1}, SHIFT(258, 0),
    [162] = {.count = 1}, SHIFT(747, 0),
    [164] = {.count = 1}, SHIFT(738, 0),
    [166] = {.count = 1}, SHIFT(166, 0),
    [168] = {.count = 1}, SHIFT(167, 0),
    [170] = {.count = 1}, SHIFT(168, 0),
    [172] = {.count = 1}, SHIFT(169, 0),
    [174] = {.count = 1}, SHIFT(170, 0),
    [176] = {.count = 1}, SHIFT(171, 0),
    [178] = {.count = 1}, SHIFT(172, 0),
    [180] = {.count = 1}, SHIFT(732, 0),
    [182] = {.count = 1}, SHIFT(54, 0),
    [184] = {.count = 1}, SHIFT(55, 0),
    [186] = {.count = 1}, SHIFT(56, 0),
    [188] = {.count = 1}, SHIFT(57, 0),
    [190] = {.count = 1}, SHIFT(58, 0),
    [192] = {.count = 1}, SHIFT(59, 0),
    [194] = {.count = 1}, SHIFT(60, 0),
    [196] = {.count = 1}, SHIFT(23, 0),
    [198] = {.count = 1}, SHIFT(24, 0),
    [200] = {.count = 1}, SHIFT(25, 0),
    [202] = {.count = 1}, SHIFT(26, 0),
    [204] = {.count = 1}, SHIFT(27, 0),
    [206] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [208] = {.count = 1}, SHIFT(28, 0),
    [210] = {.count = 1}, SHIFT(29, 0),
    [212] = {.count = 1}, SHIFT(30, 0),
    [214] = {.count = 1}, SHIFT(31, 0),
    [216] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [218] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [220] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [222] = {.count = 1}, SHIFT(728, 0),
    [224] = {.count = 1}, SHIFT(729, 0),
    [226] = {.count = 1}, SHIFT(720, 0),
    [228] = {.count = 1}, SHIFT(721, 0),
    [230] = {.count = 1}, SHIFT(33, 0),
    [232] = {.count = 1}, SHIFT(44, 0),
    [234] = {.count = 1}, SHIFT(32, 0),
    [236] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [238] = {.count = 1}, SHIFT(64, 0),
    [240] = {.count = 1}, SHIFT(717, 0),
    [242] = {.count = 1}, SHIFT(718, 0),
    [244] = {.count = 1}, SHIFT(67, 0),
    [246] = {.count = 1}, SHIFT(68, 0),
    [248] = {.count = 1}, SHIFT(69, 0),
    [250] = {.count = 1}, SHIFT(70, 0),
    [252] = {.count = 1}, SHIFT(708, 0),
    [254] = {.count = 1}, SHIFT(700, 0),
    [256] = {.count = 1}, SHIFT(701, 0),
    [258] = {.count = 1}, SHIFT(699, 0),
    [260] = {.count = 1}, SHIFT(698, 0),
    [262] = {.count = 1}, SHIFT(696, 0),
    [264] = {.count = 1}, SHIFT(678, 0),
    [266] = {.count = 1}, SHIFT(673, 0),
    [268] = {.count = 1}, SHIFT(674, 0),
    [270] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [272] = {.count = 1}, SHIFT(654, 0),
    [274] = {.count = 1}, SHIFT(653, 0),
    [276] = {.count = 1}, SHIFT(646, 0),
    [278] = {.count = 1}, SHIFT(644, 0),
    [280] = {.count = 1}, SHIFT(629, 0),
    [282] = {.count = 1}, SHIFT(620, 0),
    [284] = {.count = 1}, SHIFT(53, 0),
    [286] = {.count = 1}, SHIFT(110, 0),
    [288] = {.count = 1}, SHIFT(111, 0),
    [290] = {.count = 1}, SHIFT(112, 0),
    [292] = {.count = 1}, SHIFT(113, 0),
    [294] = {.count = 1}, SHIFT(114, 0),
    [296] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [298] = {.count = 1}, SHIFT(80, 0),
    [300] = {.count = 1}, SHIFT(81, 0),
    [302] = {.count = 1}, SHIFT(62, 0),
    [304] = {.count = 1}, SHIFT(63, 0),
    [306] = {.count = 1}, SHIFT(61, 0),
    [308] = {.count = 1}, SHIFT(65, 0),
    [310] = {.count = 1}, SHIFT(66, 0),
    [312] = {.count = 1}, SHIFT(78, 0),
    [314] = {.count = 1}, SHIFT(77, 0),
    [316] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [318] = {.count = 1}, SHIFT(76, 0),
    [320] = {.count = 1}, SHIFT(75, 0),
    [322] = {.count = 1}, SHIFT(74, 0),
    [324] = {.count = 1}, SHIFT(73, 0),
    [326] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [328] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [330] = {.count = 1}, REDUCE(sym_unless_modifier, 3, 0),
    [332] = {.count = 1}, REDUCE(sym_if_modifier, 3, 0),
    [334] = {.count = 1}, REDUCE(sym_until_modifier, 3, 0),
    [336] = {.count = 1}, REDUCE(sym_while_modifier, 3, 0),
    [338] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [340] = {.count = 1}, SHIFT(79, 0),
    [342] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [344] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [346] = {.count = 1}, SHIFT(109, 0),
    [348] = {.count = 1}, SHIFT(82, 0),
    [350] = {.count = 1}, SHIFT(83, 0),
    [352] = {.count = 1}, SHIFT(84, 0),
    [354] = {.count = 1}, SHIFT(85, 0),
    [356] = {.count = 1}, SHIFT(86, 0),
    [358] = {.count = 1}, SHIFT(87, 0),
    [360] = {.count = 1}, SHIFT(88, 0),
    [362] = {.count = 1}, SHIFT(106, 0),
    [364] = {.count = 1}, SHIFT(100, 0),
    [366] = {.count = 1}, SHIFT(107, 0),
    [368] = {.count = 1}, SHIFT(95, 0),
    [370] = {.count = 1}, SHIFT(96, 0),
    [372] = {.count = 1}, SHIFT(90, 0),
    [374] = {.count = 1}, SHIFT(91, 0),
    [376] = {.count = 1}, SHIFT(89, 0),
    [378] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [380] = {.count = 1}, SHIFT(92, 0),
    [382] = {.count = 1}, SHIFT(93, 0),
    [384] = {.count = 1}, SHIFT(94, 0),
    [386] = {.count = 1}, SHIFT(105, 0),
    [388] = {.count = 1}, SHIFT(97, 0),
    [390] = {.count = 1}, SHIFT(98, 0),
    [392] = {.count = 1}, SHIFT(99, 0),
    [394] = {.count = 1}, SHIFT(101, 0),
    [396] = {.count = 1}, SHIFT(104, 0),
    [398] = {.count = 1}, SHIFT(102, 0),
    [400] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [402] = {.count = 1}, SHIFT(103, 0),
    [404] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [406] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [408] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [410] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [412] = {.count = 1}, SHIFT(108, 0),
    [414] = {.count = 1}, SHIFT(617, 0),
    [416] = {.count = 1}, SHIFT(618, 0),
    [418] = {.count = 1}, SHIFT(139, 0),
    [420] = {.count = 1}, REDUCE(sym_unless_statement, 3, 0),
    [422] = {.count = 1}, SHIFT(115, 0),
    [424] = {.count = 1}, SHIFT(116, 0),
    [426] = {.count = 1}, SHIFT(117, 0),
    [428] = {.count = 1}, REDUCE(sym_then_block, 1, 0),
    [430] = {.count = 1}, SHIFT(118, 0),
    [432] = {.count = 1}, SHIFT(119, 0),
    [434] = {.count = 1}, SHIFT(120, 0),
    [436] = {.count = 1}, SHIFT(121, 0),
    [438] = {.count = 1}, SHIFT(122, 0),
    [440] = {.count = 1}, SHIFT(123, 0),
    [442] = {.count = 1}, SHIFT(124, 0),
    [444] = {.count = 1}, SHIFT(125, 0),
    [446] = {.count = 1}, SHIFT(126, 0),
    [448] = {.count = 1}, SHIFT(127, 0),
    [450] = {.count = 1}, SHIFT(128, 0),
    [452] = {.count = 1}, SHIFT(129, 0),
    [454] = {.count = 1}, SHIFT(130, 0),
    [456] = {.count = 1}, SHIFT(131, 0),
    [458] = {.count = 1}, SHIFT(132, 0),
    [460] = {.count = 1}, SHIFT(133, 0),
    [462] = {.count = 1}, REDUCE(sym_then_block, 2, 0),
    [464] = {.count = 1}, SHIFT(605, 0),
    [466] = {.count = 1}, SHIFT(606, 0),
    [468] = {.count = 1}, SHIFT(607, 0),
    [470] = {.count = 1}, SHIFT(608, 0),
    [472] = {.count = 1}, SHIFT(609, 0),
    [474] = {.count = 1}, SHIFT(610, 0),
    [476] = {.count = 1}, SHIFT(596, 0),
    [478] = {.count = 1}, SHIFT(588, 0),
    [480] = {.count = 1}, SHIFT(589, 0),
    [482] = {.count = 1}, SHIFT(587, 0),
    [484] = {.count = 1}, SHIFT(586, 0),
    [486] = {.count = 1}, SHIFT(584, 0),
    [488] = {.count = 1}, SHIFT(566, 0),
    [490] = {.count = 1}, SHIFT(561, 0),
    [492] = {.count = 1}, SHIFT(562, 0),
    [494] = {.count = 1}, SHIFT(542, 0),
    [496] = {.count = 1}, SHIFT(541, 0),
    [498] = {.count = 1}, SHIFT(534, 0),
    [500] = {.count = 1}, SHIFT(532, 0),
    [502] = {.count = 1}, SHIFT(517, 0),
    [504] = {.count = 1}, SHIFT(508, 0),
    [506] = {.count = 1}, SHIFT(134, 0),
    [508] = {.count = 1}, SHIFT(135, 0),
    [510] = {.count = 1}, SHIFT(136, 0),
    [512] = {.count = 1}, SHIFT(137, 0),
    [514] = {.count = 1}, SHIFT(138, 0),
    [516] = {.count = 1}, SHIFT(507, 0),
    [518] = {.count = 1}, REDUCE(sym__then_else_block, 2, 0),
    [520] = {.count = 1}, SHIFT(140, 0),
    [522] = {.count = 1}, SHIFT(141, 0),
    [524] = {.count = 1}, SHIFT(142, 0),
    [526] = {.count = 1}, SHIFT(143, 0),
    [528] = {.count = 1}, SHIFT(144, 0),
    [530] = {.count = 1}, SHIFT(145, 0),
    [532] = {.count = 1}, SHIFT(146, 0),
    [534] = {.count = 1}, REDUCE(sym_else_block, 1, 0),
    [536] = {.count = 1}, SHIFT(147, 0),
    [538] = {.count = 1}, SHIFT(148, 0),
    [540] = {.count = 1}, SHIFT(149, 0),
    [542] = {.count = 1}, SHIFT(150, 0),
    [544] = {.count = 1}, SHIFT(151, 0),
    [546] = {.count = 1}, SHIFT(152, 0),
    [548] = {.count = 1}, SHIFT(153, 0),
    [550] = {.count = 1}, SHIFT(154, 0),
    [552] = {.count = 1}, SHIFT(155, 0),
    [554] = {.count = 1}, SHIFT(156, 0),
    [556] = {.count = 1}, SHIFT(157, 0),
    [558] = {.count = 1}, SHIFT(158, 0),
    [560] = {.count = 1}, SHIFT(281, 0),
    [562] = {.count = 1}, SHIFT(506, 0),
    [564] = {.count = 1}, REDUCE(sym_else_block, 2, 0),
    [566] = {.count = 1}, SHIFT(284, 0),
    [568] = {.count = 1}, SHIFT(285, 0),
    [570] = {.count = 1}, SHIFT(286, 0),
    [572] = {.count = 1}, SHIFT(287, 0),
    [574] = {.count = 1}, SHIFT(497, 0),
    [576] = {.count = 1}, SHIFT(489, 0),
    [578] = {.count = 1}, SHIFT(490, 0),
    [580] = {.count = 1}, SHIFT(488, 0),
    [582] = {.count = 1}, SHIFT(487, 0),
    [584] = {.count = 1}, SHIFT(485, 0),
    [586] = {.count = 1}, SHIFT(467, 0),
    [588] = {.count = 1}, SHIFT(462, 0),
    [590] = {.count = 1}, SHIFT(463, 0),
    [592] = {.count = 1}, SHIFT(443, 0),
    [594] = {.count = 1}, SHIFT(442, 0),
    [596] = {.count = 1}, SHIFT(435, 0),
    [598] = {.count = 1}, SHIFT(433, 0),
    [600] = {.count = 1}, SHIFT(418, 0),
    [602] = {.count = 1}, SHIFT(165, 0),
    [604] = {.count = 1}, SHIFT(159, 0),
    [606] = {.count = 1}, SHIFT(160, 0),
    [608] = {.count = 1}, SHIFT(161, 0),
    [610] = {.count = 1}, SHIFT(162, 0),
    [612] = {.count = 1}, SHIFT(163, 0),
    [614] = {.count = 1}, SHIFT(164, 0),
    [616] = {.count = 1}, REDUCE(sym__then_else_block, 3, 0),
    [618] = {.count = 1}, SHIFT(187, 0),
    [620] = {.count = 1}, SHIFT(188, 0),
    [622] = {.count = 1}, SHIFT(189, 0),
    [624] = {.count = 1}, SHIFT(190, 0),
    [626] = {.count = 1}, SHIFT(191, 0),
    [628] = {.count = 1}, SHIFT(179, 0),
    [630] = {.count = 1}, SHIFT(180, 0),
    [632] = {.count = 1}, SHIFT(174, 0),
    [634] = {.count = 1}, SHIFT(175, 0),
    [636] = {.count = 1}, SHIFT(173, 0),
    [638] = {.count = 1}, SHIFT(176, 0),
    [640] = {.count = 1}, SHIFT(177, 0),
    [642] = {.count = 1}, SHIFT(178, 0),
    [644] = {.count = 1}, SHIFT(186, 0),
    [646] = {.count = 1}, SHIFT(181, 0),
    [648] = {.count = 1}, SHIFT(182, 0),
    [650] = {.count = 1}, SHIFT(183, 0),
    [652] = {.count = 1}, SHIFT(184, 0),
    [654] = {.count = 1}, SHIFT(185, 0),
    [656] = {.count = 1}, SHIFT(412, 0),
    [658] = {.count = 1}, SHIFT(413, 0),
    [660] = {.count = 1}, SHIFT(414, 0),
    [662] = {.count = 1}, SHIFT(223, 0),
    [664] = {.count = 1}, REDUCE(sym_if_statement, 3, 0),
    [666] = {.count = 1}, SHIFT(192, 0),
    [668] = {.count = 1}, SHIFT(193, 0),
    [670] = {.count = 1}, SHIFT(194, 0),
    [672] = {.count = 1}, SHIFT(195, 0),
    [674] = {.count = 1}, SHIFT(196, 0),
    [676] = {.count = 1}, SHIFT(197, 0),
    [678] = {.count = 1}, SHIFT(198, 0),
    [680] = {.count = 1}, SHIFT(199, 0),
    [682] = {.count = 1}, SHIFT(200, 0),
    [684] = {.count = 1}, SHIFT(201, 0),
    [686] = {.count = 1}, SHIFT(202, 0),
    [688] = {.count = 1}, SHIFT(203, 0),
    [690] = {.count = 1}, SHIFT(204, 0),
    [692] = {.count = 1}, SHIFT(205, 0),
    [694] = {.count = 1}, SHIFT(206, 0),
    [696] = {.count = 1}, SHIFT(207, 0),
    [698] = {.count = 1}, SHIFT(208, 0),
    [700] = {.count = 1}, SHIFT(209, 0),
    [702] = {.count = 1}, SHIFT(210, 0),
    [704] = {.count = 1}, SHIFT(400, 0),
    [706] = {.count = 1}, SHIFT(401, 0),
    [708] = {.count = 1}, SHIFT(402, 0),
    [710] = {.count = 1}, SHIFT(403, 0),
    [712] = {.count = 1}, SHIFT(404, 0),
    [714] = {.count = 1}, SHIFT(405, 0),
    [716] = {.count = 1}, SHIFT(391, 0),
    [718] = {.count = 1}, SHIFT(383, 0),
    [720] = {.count = 1}, SHIFT(384, 0),
    [722] = {.count = 1}, SHIFT(382, 0),
    [724] = {.count = 1}, SHIFT(381, 0),
    [726] = {.count = 1}, SHIFT(378, 0),
    [728] = {.count = 1}, SHIFT(337, 0),
    [730] = {.count = 1}, SHIFT(332, 0),
    [732] = {.count = 1}, SHIFT(333, 0),
    [734] = {.count = 1}, SHIFT(310, 0),
    [736] = {.count = 1}, SHIFT(309, 0),
    [738] = {.count = 1}, SHIFT(302, 0),
    [740] = {.count = 1}, SHIFT(300, 0),
    [742] = {.count = 1}, SHIFT(251, 0),
    [744] = {.count = 1}, SHIFT(217, 0),
    [746] = {.count = 1}, SHIFT(211, 0),
    [748] = {.count = 1}, SHIFT(212, 0),
    [750] = {.count = 1}, SHIFT(213, 0),
    [752] = {.count = 1}, SHIFT(214, 0),
    [754] = {.count = 1}, SHIFT(215, 0),
    [756] = {.count = 1}, SHIFT(216, 0),
    [758] = {.count = 1}, SHIFT(218, 0),
    [760] = {.count = 1}, SHIFT(219, 0),
    [762] = {.count = 1}, SHIFT(220, 0),
    [764] = {.count = 1}, SHIFT(221, 0),
    [766] = {.count = 1}, SHIFT(222, 0),
    [768] = {.count = 1}, SHIFT(249, 0),
    [770] = {.count = 1}, SHIFT(248, 0),
    [772] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 2, 0),
    [774] = {.count = 1}, SHIFT(224, 0),
    [776] = {.count = 1}, SHIFT(225, 0),
    [778] = {.count = 1}, SHIFT(226, 0),
    [780] = {.count = 1}, SHIFT(227, 0),
    [782] = {.count = 1}, SHIFT(228, 0),
    [784] = {.count = 1}, SHIFT(229, 0),
    [786] = {.count = 1}, SHIFT(230, 0),
    [788] = {.count = 1}, SHIFT(231, 0),
    [790] = {.count = 1}, SHIFT(246, 0),
    [792] = {.count = 1}, SHIFT(238, 0),
    [794] = {.count = 1}, SHIFT(239, 0),
    [796] = {.count = 1}, SHIFT(233, 0),
    [798] = {.count = 1}, SHIFT(234, 0),
    [800] = {.count = 1}, SHIFT(232, 0),
    [802] = {.count = 1}, SHIFT(235, 0),
    [804] = {.count = 1}, SHIFT(236, 0),
    [806] = {.count = 1}, SHIFT(237, 0),
    [808] = {.count = 1}, SHIFT(245, 0),
    [810] = {.count = 1}, SHIFT(240, 0),
    [812] = {.count = 1}, SHIFT(241, 0),
    [814] = {.count = 1}, SHIFT(242, 0),
    [816] = {.count = 1}, SHIFT(243, 0),
    [818] = {.count = 1}, SHIFT(244, 0),
    [820] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 3, 0),
    [822] = {.count = 1}, SHIFT(247, 0),
    [824] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 4, 0),
    [826] = {.count = 1}, SHIFT(250, 0),
    [828] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 3, 0),
    [830] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 4, 0),
    [832] = {.count = 1}, SHIFT(273, 0),
    [834] = {.count = 1}, SHIFT(274, 0),
    [836] = {.count = 1}, SHIFT(275, 0),
    [838] = {.count = 1}, SHIFT(276, 0),
    [840] = {.count = 1}, SHIFT(277, 0),
    [842] = {.count = 1}, SHIFT(278, 0),
    [844] = {.count = 1}, SHIFT(265, 0),
    [846] = {.count = 1}, SHIFT(266, 0),
    [848] = {.count = 1}, SHIFT(260, 0),
    [850] = {.count = 1}, SHIFT(261, 0),
    [852] = {.count = 1}, SHIFT(259, 0),
    [854] = {.count = 1}, SHIFT(262, 0),
    [856] = {.count = 1}, SHIFT(263, 0),
    [858] = {.count = 1}, SHIFT(264, 0),
    [860] = {.count = 1}, SHIFT(272, 0),
    [862] = {.count = 1}, SHIFT(267, 0),
    [864] = {.count = 1}, SHIFT(268, 0),
    [866] = {.count = 1}, SHIFT(269, 0),
    [868] = {.count = 1}, SHIFT(270, 0),
    [870] = {.count = 1}, SHIFT(271, 0),
    [872] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [874] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [876] = {.count = 1}, SHIFT(295, 0),
    [878] = {.count = 1}, SHIFT(296, 0),
    [880] = {.count = 1}, SHIFT(279, 0),
    [882] = {.count = 1}, SHIFT(280, 0),
    [884] = {.count = 1}, SHIFT(282, 0),
    [886] = {.count = 1}, SHIFT(283, 0),
    [888] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [890] = {.count = 1}, SHIFT(293, 0),
    [892] = {.count = 1}, SHIFT(292, 0),
    [894] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [896] = {.count = 1}, SHIFT(291, 0),
    [898] = {.count = 1}, SHIFT(290, 0),
    [900] = {.count = 1}, SHIFT(289, 0),
    [902] = {.count = 1}, SHIFT(288, 0),
    [904] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [906] = {.count = 1}, SHIFT(294, 0),
    [908] = {.count = 1}, SHIFT(297, 0),
    [910] = {.count = 1}, SHIFT(298, 0),
    [912] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [914] = {.count = 1}, SHIFT(299, 0),
    [916] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [918] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [920] = {.count = 1}, SHIFT(301, 0),
    [922] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [924] = {.count = 1}, SHIFT(303, 0),
    [926] = {.count = 1}, SHIFT(304, 0),
    [928] = {.count = 1}, SHIFT(305, 0),
    [930] = {.count = 1}, SHIFT(306, 0),
    [932] = {.count = 1}, SHIFT(307, 0),
    [934] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [936] = {.count = 1}, SHIFT(308, 0),
    [938] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [940] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [942] = {.count = 1}, SHIFT(311, 0),
    [944] = {.count = 1}, SHIFT(312, 0),
    [946] = {.count = 1}, SHIFT(328, 0),
    [948] = {.count = 1}, SHIFT(329, 0),
    [950] = {.count = 1}, SHIFT(313, 0),
    [952] = {.count = 1}, SHIFT(314, 0),
    [954] = {.count = 1}, SHIFT(315, 0),
    [956] = {.count = 1}, SHIFT(316, 0),
    [958] = {.count = 1}, SHIFT(325, 0),
    [960] = {.count = 1}, SHIFT(326, 0),
    [962] = {.count = 1}, SHIFT(319, 0),
    [964] = {.count = 1}, SHIFT(317, 0),
    [966] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [968] = {.count = 1}, SHIFT(318, 0),
    [970] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [972] = {.count = 1}, SHIFT(320, 0),
    [974] = {.count = 1}, SHIFT(321, 0),
    [976] = {.count = 1}, SHIFT(322, 0),
    [978] = {.count = 1}, SHIFT(323, 0),
    [980] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [982] = {.count = 1}, SHIFT(324, 0),
    [984] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [986] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [988] = {.count = 1}, SHIFT(327, 0),
    [990] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [992] = {.count = 1}, SHIFT(330, 0),
    [994] = {.count = 1}, SHIFT(331, 0),
    [996] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [998] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [1000] = {.count = 1}, SHIFT(334, 0),
    [1002] = {.count = 1}, SHIFT(335, 0),
    [1004] = {.count = 1}, SHIFT(336, 0),
    [1006] = {.count = 1}, SHIFT(339, 0),
    [1008] = {.count = 1}, SHIFT(340, 0),
    [1010] = {.count = 1}, SHIFT(341, 0),
    [1012] = {.count = 1}, SHIFT(342, 0),
    [1014] = {.count = 1}, SHIFT(343, 0),
    [1016] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [1018] = {.count = 1}, SHIFT(354, 0),
    [1020] = {.count = 1}, SHIFT(375, 0),
    [1022] = {.count = 1}, SHIFT(376, 0),
    [1024] = {.count = 1}, SHIFT(353, 0),
    [1026] = {.count = 1}, SHIFT(355, 0),
    [1028] = {.count = 1}, SHIFT(356, 0),
    [1030] = {.count = 1}, SHIFT(351, 0),
    [1032] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [1034] = {.count = 1}, SHIFT(344, 0),
    [1036] = {.count = 1}, SHIFT(345, 0),
    [1038] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [1040] = {.count = 1}, SHIFT(346, 0),
    [1042] = {.count = 1}, SHIFT(347, 0),
    [1044] = {.count = 1}, SHIFT(349, 0),
    [1046] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [1048] = {.count = 1}, SHIFT(348, 0),
    [1050] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [1052] = {.count = 1}, SHIFT(350, 0),
    [1054] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [1056] = {.count = 1}, SHIFT(352, 0),
    [1058] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [1060] = {.count = 1}, SHIFT(371, 0),
    [1062] = {.count = 1}, SHIFT(366, 0),
    [1064] = {.count = 1}, SHIFT(367, 0),
    [1066] = {.count = 1}, SHIFT(364, 0),
    [1068] = {.count = 1}, SHIFT(357, 0),
    [1070] = {.count = 1}, SHIFT(358, 0),
    [1072] = {.count = 1}, SHIFT(359, 0),
    [1074] = {.count = 1}, SHIFT(360, 0),
    [1076] = {.count = 1}, SHIFT(362, 0),
    [1078] = {.count = 1}, SHIFT(361, 0),
    [1080] = {.count = 1}, SHIFT(363, 0),
    [1082] = {.count = 1}, SHIFT(365, 0),
    [1084] = {.count = 1}, SHIFT(368, 0),
    [1086] = {.count = 1}, SHIFT(369, 0),
    [1088] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1090] = {.count = 1}, SHIFT(370, 0),
    [1092] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1094] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [1096] = {.count = 1}, SHIFT(372, 0),
    [1098] = {.count = 1}, SHIFT(373, 0),
    [1100] = {.count = 1}, SHIFT(374, 0),
    [1102] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [1104] = {.count = 1}, SHIFT(377, 0),
    [1106] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1108] = {.count = 1}, SHIFT(380, 0),
    [1110] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [1112] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [1114] = {.count = 1}, SHIFT(390, 0),
    [1116] = {.count = 1}, SHIFT(385, 0),
    [1118] = {.count = 1}, SHIFT(386, 0),
    [1120] = {.count = 1}, SHIFT(387, 0),
    [1122] = {.count = 1}, SHIFT(388, 0),
    [1124] = {.count = 1}, SHIFT(389, 0),
    [1126] = {.count = 1}, SHIFT(392, 0),
    [1128] = {.count = 1}, SHIFT(393, 0),
    [1130] = {.count = 1}, SHIFT(399, 0),
    [1132] = {.count = 1}, SHIFT(395, 0),
    [1134] = {.count = 1}, SHIFT(394, 0),
    [1136] = {.count = 1}, SHIFT(396, 0),
    [1138] = {.count = 1}, SHIFT(397, 0),
    [1140] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [1142] = {.count = 1}, SHIFT(398, 0),
    [1144] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [1146] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [1148] = {.count = 1}, SHIFT(410, 0),
    [1150] = {.count = 1}, REDUCE(sym_then_block, 3, 0),
    [1152] = {.count = 1}, SHIFT(409, 0),
    [1154] = {.count = 1}, SHIFT(408, 0),
    [1156] = {.count = 1}, SHIFT(407, 0),
    [1158] = {.count = 1}, SHIFT(406, 0),
    [1160] = {.count = 1}, SHIFT(411, 0),
    [1162] = {.count = 1}, SHIFT(416, 0),
    [1164] = {.count = 1}, SHIFT(415, 0),
    [1166] = {.count = 1}, SHIFT(417, 0),
    [1168] = {.count = 1}, SHIFT(419, 0),
    [1170] = {.count = 1}, SHIFT(420, 0),
    [1172] = {.count = 1}, SHIFT(421, 0),
    [1174] = {.count = 1}, SHIFT(422, 0),
    [1176] = {.count = 1}, SHIFT(428, 0),
    [1178] = {.count = 1}, SHIFT(429, 0),
    [1180] = {.count = 1}, SHIFT(423, 0),
    [1182] = {.count = 1}, SHIFT(424, 0),
    [1184] = {.count = 1}, SHIFT(425, 0),
    [1186] = {.count = 1}, SHIFT(426, 0),
    [1188] = {.count = 1}, SHIFT(427, 0),
    [1190] = {.count = 1}, SHIFT(430, 0),
    [1192] = {.count = 1}, SHIFT(431, 0),
    [1194] = {.count = 1}, SHIFT(432, 0),
    [1196] = {.count = 1}, SHIFT(434, 0),
    [1198] = {.count = 1}, SHIFT(436, 0),
    [1200] = {.count = 1}, SHIFT(437, 0),
    [1202] = {.count = 1}, SHIFT(438, 0),
    [1204] = {.count = 1}, SHIFT(439, 0),
    [1206] = {.count = 1}, SHIFT(440, 0),
    [1208] = {.count = 1}, SHIFT(441, 0),
    [1210] = {.count = 1}, SHIFT(444, 0),
    [1212] = {.count = 1}, SHIFT(445, 0),
    [1214] = {.count = 1}, SHIFT(458, 0),
    [1216] = {.count = 1}, SHIFT(459, 0),
    [1218] = {.count = 1}, SHIFT(446, 0),
    [1220] = {.count = 1}, SHIFT(447, 0),
    [1222] = {.count = 1}, SHIFT(448, 0),
    [1224] = {.count = 1}, SHIFT(455, 0),
    [1226] = {.count = 1}, SHIFT(456, 0),
    [1228] = {.count = 1}, SHIFT(449, 0),
    [1230] = {.count = 1}, SHIFT(450, 0),
    [1232] = {.count = 1}, SHIFT(451, 0),
    [1234] = {.count = 1}, SHIFT(452, 0),
    [1236] = {.count = 1}, SHIFT(453, 0),
    [1238] = {.count = 1}, SHIFT(454, 0),
    [1240] = {.count = 1}, SHIFT(457, 0),
    [1242] = {.count = 1}, SHIFT(460, 0),
    [1244] = {.count = 1}, SHIFT(461, 0),
    [1246] = {.count = 1}, SHIFT(464, 0),
    [1248] = {.count = 1}, SHIFT(465, 0),
    [1250] = {.count = 1}, SHIFT(466, 0),
    [1252] = {.count = 1}, SHIFT(468, 0),
    [1254] = {.count = 1}, SHIFT(469, 0),
    [1256] = {.count = 1}, SHIFT(470, 0),
    [1258] = {.count = 1}, SHIFT(472, 0),
    [1260] = {.count = 1}, SHIFT(482, 0),
    [1262] = {.count = 1}, SHIFT(483, 0),
    [1264] = {.count = 1}, SHIFT(471, 0),
    [1266] = {.count = 1}, SHIFT(478, 0),
    [1268] = {.count = 1}, SHIFT(473, 0),
    [1270] = {.count = 1}, SHIFT(474, 0),
    [1272] = {.count = 1}, SHIFT(475, 0),
    [1274] = {.count = 1}, SHIFT(476, 0),
    [1276] = {.count = 1}, SHIFT(477, 0),
    [1278] = {.count = 1}, SHIFT(479, 0),
    [1280] = {.count = 1}, SHIFT(480, 0),
    [1282] = {.count = 1}, SHIFT(481, 0),
    [1284] = {.count = 1}, SHIFT(484, 0),
    [1286] = {.count = 1}, SHIFT(486, 0),
    [1288] = {.count = 1}, SHIFT(496, 0),
    [1290] = {.count = 1}, SHIFT(491, 0),
    [1292] = {.count = 1}, SHIFT(492, 0),
    [1294] = {.count = 1}, SHIFT(493, 0),
    [1296] = {.count = 1}, SHIFT(494, 0),
    [1298] = {.count = 1}, SHIFT(495, 0),
    [1300] = {.count = 1}, SHIFT(498, 0),
    [1302] = {.count = 1}, SHIFT(499, 0),
    [1304] = {.count = 1}, SHIFT(505, 0),
    [1306] = {.count = 1}, SHIFT(501, 0),
    [1308] = {.count = 1}, SHIFT(500, 0),
    [1310] = {.count = 1}, SHIFT(502, 0),
    [1312] = {.count = 1}, SHIFT(503, 0),
    [1314] = {.count = 1}, SHIFT(504, 0),
    [1316] = {.count = 1}, REDUCE(sym_else_block, 3, 0),
    [1318] = {.count = 1}, SHIFT(509, 0),
    [1320] = {.count = 1}, SHIFT(510, 0),
    [1322] = {.count = 1}, SHIFT(511, 0),
    [1324] = {.count = 1}, SHIFT(512, 0),
    [1326] = {.count = 1}, SHIFT(513, 0),
    [1328] = {.count = 1}, SHIFT(515, 0),
    [1330] = {.count = 1}, SHIFT(514, 0),
    [1332] = {.count = 1}, SHIFT(516, 0),
    [1334] = {.count = 1}, SHIFT(518, 0),
    [1336] = {.count = 1}, SHIFT(519, 0),
    [1338] = {.count = 1}, SHIFT(520, 0),
    [1340] = {.count = 1}, SHIFT(521, 0),
    [1342] = {.count = 1}, SHIFT(527, 0),
    [1344] = {.count = 1}, SHIFT(528, 0),
    [1346] = {.count = 1}, SHIFT(522, 0),
    [1348] = {.count = 1}, SHIFT(523, 0),
    [1350] = {.count = 1}, SHIFT(524, 0),
    [1352] = {.count = 1}, SHIFT(525, 0),
    [1354] = {.count = 1}, SHIFT(526, 0),
    [1356] = {.count = 1}, SHIFT(529, 0),
    [1358] = {.count = 1}, SHIFT(530, 0),
    [1360] = {.count = 1}, SHIFT(531, 0),
    [1362] = {.count = 1}, SHIFT(533, 0),
    [1364] = {.count = 1}, SHIFT(535, 0),
    [1366] = {.count = 1}, SHIFT(536, 0),
    [1368] = {.count = 1}, SHIFT(537, 0),
    [1370] = {.count = 1}, SHIFT(538, 0),
    [1372] = {.count = 1}, SHIFT(539, 0),
    [1374] = {.count = 1}, SHIFT(540, 0),
    [1376] = {.count = 1}, SHIFT(543, 0),
    [1378] = {.count = 1}, SHIFT(544, 0),
    [1380] = {.count = 1}, SHIFT(557, 0),
    [1382] = {.count = 1}, SHIFT(558, 0),
    [1384] = {.count = 1}, SHIFT(545, 0),
    [1386] = {.count = 1}, SHIFT(546, 0),
    [1388] = {.count = 1}, SHIFT(547, 0),
    [1390] = {.count = 1}, SHIFT(554, 0),
    [1392] = {.count = 1}, SHIFT(555, 0),
    [1394] = {.count = 1}, SHIFT(548, 0),
    [1396] = {.count = 1}, SHIFT(549, 0),
    [1398] = {.count = 1}, SHIFT(550, 0),
    [1400] = {.count = 1}, SHIFT(551, 0),
    [1402] = {.count = 1}, SHIFT(552, 0),
    [1404] = {.count = 1}, SHIFT(553, 0),
    [1406] = {.count = 1}, SHIFT(556, 0),
    [1408] = {.count = 1}, SHIFT(559, 0),
    [1410] = {.count = 1}, SHIFT(560, 0),
    [1412] = {.count = 1}, SHIFT(563, 0),
    [1414] = {.count = 1}, SHIFT(564, 0),
    [1416] = {.count = 1}, SHIFT(565, 0),
    [1418] = {.count = 1}, SHIFT(567, 0),
    [1420] = {.count = 1}, SHIFT(568, 0),
    [1422] = {.count = 1}, SHIFT(569, 0),
    [1424] = {.count = 1}, SHIFT(571, 0),
    [1426] = {.count = 1}, SHIFT(581, 0),
    [1428] = {.count = 1}, SHIFT(582, 0),
    [1430] = {.count = 1}, SHIFT(570, 0),
    [1432] = {.count = 1}, SHIFT(577, 0),
    [1434] = {.count = 1}, SHIFT(572, 0),
    [1436] = {.count = 1}, SHIFT(573, 0),
    [1438] = {.count = 1}, SHIFT(574, 0),
    [1440] = {.count = 1}, SHIFT(575, 0),
    [1442] = {.count = 1}, SHIFT(576, 0),
    [1444] = {.count = 1}, SHIFT(578, 0),
    [1446] = {.count = 1}, SHIFT(579, 0),
    [1448] = {.count = 1}, SHIFT(580, 0),
    [1450] = {.count = 1}, SHIFT(583, 0),
    [1452] = {.count = 1}, SHIFT(585, 0),
    [1454] = {.count = 1}, SHIFT(595, 0),
    [1456] = {.count = 1}, SHIFT(590, 0),
    [1458] = {.count = 1}, SHIFT(591, 0),
    [1460] = {.count = 1}, SHIFT(592, 0),
    [1462] = {.count = 1}, SHIFT(593, 0),
    [1464] = {.count = 1}, SHIFT(594, 0),
    [1466] = {.count = 1}, SHIFT(597, 0),
    [1468] = {.count = 1}, SHIFT(598, 0),
    [1470] = {.count = 1}, SHIFT(604, 0),
    [1472] = {.count = 1}, SHIFT(600, 0),
    [1474] = {.count = 1}, SHIFT(599, 0),
    [1476] = {.count = 1}, SHIFT(601, 0),
    [1478] = {.count = 1}, SHIFT(602, 0),
    [1480] = {.count = 1}, SHIFT(603, 0),
    [1482] = {.count = 1}, SHIFT(615, 0),
    [1484] = {.count = 1}, SHIFT(614, 0),
    [1486] = {.count = 1}, SHIFT(613, 0),
    [1488] = {.count = 1}, SHIFT(612, 0),
    [1490] = {.count = 1}, SHIFT(611, 0),
    [1492] = {.count = 1}, SHIFT(616, 0),
    [1494] = {.count = 1}, SHIFT(619, 0),
    [1496] = {.count = 1}, SHIFT(621, 0),
    [1498] = {.count = 1}, SHIFT(622, 0),
    [1500] = {.count = 1}, SHIFT(623, 0),
    [1502] = {.count = 1}, SHIFT(624, 0),
    [1504] = {.count = 1}, SHIFT(625, 0),
    [1506] = {.count = 1}, SHIFT(627, 0),
    [1508] = {.count = 1}, SHIFT(626, 0),
    [1510] = {.count = 1}, SHIFT(628, 0),
    [1512] = {.count = 1}, SHIFT(630, 0),
    [1514] = {.count = 1}, SHIFT(631, 0),
    [1516] = {.count = 1}, SHIFT(632, 0),
    [1518] = {.count = 1}, SHIFT(633, 0),
    [1520] = {.count = 1}, SHIFT(639, 0),
    [1522] = {.count = 1}, SHIFT(640, 0),
    [1524] = {.count = 1}, SHIFT(634, 0),
    [1526] = {.count = 1}, SHIFT(635, 0),
    [1528] = {.count = 1}, SHIFT(636, 0),
    [1530] = {.count = 1}, SHIFT(637, 0),
    [1532] = {.count = 1}, SHIFT(638, 0),
    [1534] = {.count = 1}, SHIFT(641, 0),
    [1536] = {.count = 1}, SHIFT(642, 0),
    [1538] = {.count = 1}, SHIFT(643, 0),
    [1540] = {.count = 1}, SHIFT(645, 0),
    [1542] = {.count = 1}, SHIFT(647, 0),
    [1544] = {.count = 1}, SHIFT(648, 0),
    [1546] = {.count = 1}, SHIFT(649, 0),
    [1548] = {.count = 1}, SHIFT(650, 0),
    [1550] = {.count = 1}, SHIFT(651, 0),
    [1552] = {.count = 1}, SHIFT(652, 0),
    [1554] = {.count = 1}, SHIFT(655, 0),
    [1556] = {.count = 1}, SHIFT(656, 0),
    [1558] = {.count = 1}, SHIFT(669, 0),
    [1560] = {.count = 1}, SHIFT(670, 0),
    [1562] = {.count = 1}, SHIFT(657, 0),
    [1564] = {.count = 1}, SHIFT(658, 0),
    [1566] = {.count = 1}, SHIFT(659, 0),
    [1568] = {.count = 1}, SHIFT(666, 0),
    [1570] = {.count = 1}, SHIFT(667, 0),
    [1572] = {.count = 1}, SHIFT(660, 0),
    [1574] = {.count = 1}, SHIFT(661, 0),
    [1576] = {.count = 1}, SHIFT(662, 0),
    [1578] = {.count = 1}, SHIFT(663, 0),
    [1580] = {.count = 1}, SHIFT(664, 0),
    [1582] = {.count = 1}, SHIFT(665, 0),
    [1584] = {.count = 1}, SHIFT(668, 0),
    [1586] = {.count = 1}, SHIFT(671, 0),
    [1588] = {.count = 1}, SHIFT(672, 0),
    [1590] = {.count = 1}, SHIFT(675, 0),
    [1592] = {.count = 1}, SHIFT(676, 0),
    [1594] = {.count = 1}, SHIFT(677, 0),
    [1596] = {.count = 1}, SHIFT(679, 0),
    [1598] = {.count = 1}, SHIFT(680, 0),
    [1600] = {.count = 1}, SHIFT(681, 0),
    [1602] = {.count = 1}, SHIFT(683, 0),
    [1604] = {.count = 1}, SHIFT(693, 0),
    [1606] = {.count = 1}, SHIFT(694, 0),
    [1608] = {.count = 1}, SHIFT(682, 0),
    [1610] = {.count = 1}, SHIFT(689, 0),
    [1612] = {.count = 1}, SHIFT(684, 0),
    [1614] = {.count = 1}, SHIFT(685, 0),
    [1616] = {.count = 1}, SHIFT(686, 0),
    [1618] = {.count = 1}, SHIFT(687, 0),
    [1620] = {.count = 1}, SHIFT(688, 0),
    [1622] = {.count = 1}, SHIFT(690, 0),
    [1624] = {.count = 1}, SHIFT(691, 0),
    [1626] = {.count = 1}, SHIFT(692, 0),
    [1628] = {.count = 1}, SHIFT(695, 0),
    [1630] = {.count = 1}, SHIFT(697, 0),
    [1632] = {.count = 1}, SHIFT(707, 0),
    [1634] = {.count = 1}, SHIFT(702, 0),
    [1636] = {.count = 1}, SHIFT(703, 0),
    [1638] = {.count = 1}, SHIFT(704, 0),
    [1640] = {.count = 1}, SHIFT(705, 0),
    [1642] = {.count = 1}, SHIFT(706, 0),
    [1644] = {.count = 1}, SHIFT(709, 0),
    [1646] = {.count = 1}, SHIFT(710, 0),
    [1648] = {.count = 1}, SHIFT(716, 0),
    [1650] = {.count = 1}, SHIFT(712, 0),
    [1652] = {.count = 1}, SHIFT(711, 0),
    [1654] = {.count = 1}, SHIFT(713, 0),
    [1656] = {.count = 1}, SHIFT(714, 0),
    [1658] = {.count = 1}, SHIFT(715, 0),
    [1660] = {.count = 1}, SHIFT(719, 0),
    [1662] = {.count = 1}, SHIFT(727, 0),
    [1664] = {.count = 1}, SHIFT(722, 0),
    [1666] = {.count = 1}, SHIFT(723, 0),
    [1668] = {.count = 1}, SHIFT(724, 0),
    [1670] = {.count = 1}, SHIFT(725, 0),
    [1672] = {.count = 1}, SHIFT(726, 0),
    [1674] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [1676] = {.count = 1}, SHIFT(730, 0),
    [1678] = {.count = 1}, SHIFT(731, 0),
    [1680] = {.count = 1}, SHIFT(733, 0),
    [1682] = {.count = 1}, SHIFT(734, 0),
    [1684] = {.count = 1}, SHIFT(735, 0),
    [1686] = {.count = 1}, SHIFT(736, 0),
    [1688] = {.count = 1}, SHIFT(737, 0),
    [1690] = {.count = 1}, SHIFT(739, 0),
    [1692] = {.count = 1}, SHIFT(740, 0),
    [1694] = {.count = 1}, SHIFT(741, 0),
    [1696] = {.count = 1}, SHIFT(742, 0),
    [1698] = {.count = 1}, SHIFT(743, 0),
    [1700] = {.count = 1}, SHIFT(745, 0),
    [1702] = {.count = 1}, SHIFT(744, 0),
    [1704] = {.count = 1}, SHIFT(746, 0),
    [1706] = {.count = 1}, SHIFT(748, 0),
    [1708] = {.count = 1}, SHIFT(749, 0),
    [1710] = {.count = 1}, SHIFT(750, 0),
    [1712] = {.count = 1}, SHIFT(751, 0),
    [1714] = {.count = 1}, SHIFT(757, 0),
    [1716] = {.count = 1}, SHIFT(758, 0),
    [1718] = {.count = 1}, SHIFT(752, 0),
    [1720] = {.count = 1}, SHIFT(753, 0),
    [1722] = {.count = 1}, SHIFT(754, 0),
    [1724] = {.count = 1}, SHIFT(755, 0),
    [1726] = {.count = 1}, SHIFT(756, 0),
    [1728] = {.count = 1}, SHIFT(759, 0),
    [1730] = {.count = 1}, SHIFT(760, 0),
    [1732] = {.count = 1}, SHIFT(761, 0),
    [1734] = {.count = 1}, SHIFT(763, 0),
    [1736] = {.count = 1}, SHIFT(765, 0),
    [1738] = {.count = 1}, SHIFT(766, 0),
    [1740] = {.count = 1}, SHIFT(767, 0),
    [1742] = {.count = 1}, SHIFT(768, 0),
    [1744] = {.count = 1}, SHIFT(769, 0),
    [1746] = {.count = 1}, SHIFT(770, 0),
    [1748] = {.count = 1}, SHIFT(773, 0),
    [1750] = {.count = 1}, SHIFT(774, 0),
    [1752] = {.count = 1}, SHIFT(787, 0),
    [1754] = {.count = 1}, SHIFT(788, 0),
    [1756] = {.count = 1}, SHIFT(775, 0),
    [1758] = {.count = 1}, SHIFT(776, 0),
    [1760] = {.count = 1}, SHIFT(777, 0),
    [1762] = {.count = 1}, SHIFT(784, 0),
    [1764] = {.count = 1}, SHIFT(785, 0),
    [1766] = {.count = 1}, SHIFT(778, 0),
    [1768] = {.count = 1}, SHIFT(779, 0),
    [1770] = {.count = 1}, SHIFT(780, 0),
    [1772] = {.count = 1}, SHIFT(781, 0),
    [1774] = {.count = 1}, SHIFT(782, 0),
    [1776] = {.count = 1}, SHIFT(783, 0),
    [1778] = {.count = 1}, SHIFT(786, 0),
    [1780] = {.count = 1}, SHIFT(789, 0),
    [1782] = {.count = 1}, SHIFT(790, 0),
    [1784] = {.count = 1}, SHIFT(793, 0),
    [1786] = {.count = 1}, SHIFT(794, 0),
    [1788] = {.count = 1}, SHIFT(795, 0),
    [1790] = {.count = 1}, SHIFT(797, 0),
    [1792] = {.count = 1}, SHIFT(798, 0),
    [1794] = {.count = 1}, SHIFT(799, 0),
    [1796] = {.count = 1}, SHIFT(801, 0),
    [1798] = {.count = 1}, SHIFT(811, 0),
    [1800] = {.count = 1}, SHIFT(812, 0),
    [1802] = {.count = 1}, SHIFT(800, 0),
    [1804] = {.count = 1}, SHIFT(807, 0),
    [1806] = {.count = 1}, SHIFT(802, 0),
    [1808] = {.count = 1}, SHIFT(803, 0),
    [1810] = {.count = 1}, SHIFT(804, 0),
    [1812] = {.count = 1}, SHIFT(805, 0),
    [1814] = {.count = 1}, SHIFT(806, 0),
    [1816] = {.count = 1}, SHIFT(808, 0),
    [1818] = {.count = 1}, SHIFT(809, 0),
    [1820] = {.count = 1}, SHIFT(810, 0),
    [1822] = {.count = 1}, SHIFT(813, 0),
    [1824] = {.count = 1}, SHIFT(815, 0),
    [1826] = {.count = 1}, SHIFT(825, 0),
    [1828] = {.count = 1}, SHIFT(820, 0),
    [1830] = {.count = 1}, SHIFT(821, 0),
    [1832] = {.count = 1}, SHIFT(822, 0),
    [1834] = {.count = 1}, SHIFT(823, 0),
    [1836] = {.count = 1}, SHIFT(824, 0),
    [1838] = {.count = 1}, SHIFT(827, 0),
    [1840] = {.count = 1}, SHIFT(828, 0),
    [1842] = {.count = 1}, SHIFT(834, 0),
    [1844] = {.count = 1}, SHIFT(830, 0),
    [1846] = {.count = 1}, SHIFT(829, 0),
    [1848] = {.count = 1}, SHIFT(831, 0),
    [1850] = {.count = 1}, SHIFT(832, 0),
    [1852] = {.count = 1}, SHIFT(833, 0),
    [1854] = {.count = 1}, SHIFT(845, 0),
    [1856] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [1858] = {.count = 1}, SHIFT(844, 0),
    [1860] = {.count = 1}, SHIFT(843, 0),
    [1862] = {.count = 1}, SHIFT(842, 0),
    [1864] = {.count = 1}, SHIFT(841, 0),
    [1866] = {.count = 1}, SHIFT(846, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
