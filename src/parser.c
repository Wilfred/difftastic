#include "tree_sitter/parser.h"

#define STATE_COUNT 936
#define SYMBOL_COUNT 102

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
    sym_for_statement,
    sym_begin_statement,
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
    sym_member_access,
    sym__lhs,
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
    anon_sym_for,
    anon_sym_in,
    anon_sym_begin,
    anon_sym_then,
    anon_sym_else,
    anon_sym_elsif,
    anon_sym_super,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_DOT,
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
    [sym_for_statement] = "for_statement",
    [sym_begin_statement] = "begin_statement",
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
    [sym_member_access] = "member_access",
    [sym__lhs] = "_lhs",
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
    [anon_sym_for] = "for",
    [anon_sym_in] = "in",
    [anon_sym_begin] = "begin",
    [anon_sym_then] = "then",
    [anon_sym_else] = "else",
    [anon_sym_elsif] = "elsif",
    [anon_sym_super] = "super",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_DOT] = ".",
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
    [sym_for_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_begin_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [sym_member_access] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__lhs] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_for] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_in] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_begin] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_then] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_else] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_elsif] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_super] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
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
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(77);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(92);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(112);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            if (lookahead == '|')
                ADVANCE(133);
            if (lookahead == '~')
                ADVANCE(134);
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
            ACCEPT_TOKEN(anon_sym_DOT);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'g')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_begin);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_class);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'o')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            ACCEPT_TOKEN(anon_sym_def);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_do);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(82);
            if (lookahead == 'n')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_else);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_elsif);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_end);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_for);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'n')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_in);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(96);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(98);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(99);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(102);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(103);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'u')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(106);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(107);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_self);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
                ADVANCE(109);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(111);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(115);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_then);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(117);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(118);
            if (lookahead == 'l')
                ADVANCE(121);
            if (lookahead == 't')
                ADVANCE(125);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(119);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(120);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(122);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(123);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(124);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(126);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(127);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(129);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(130);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(131);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(132);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 133:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 134:
            ACCEPT_TOKEN(anon_sym_TILDE);
        case 135:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 136:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 139:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
            LEX_ERROR();
        case 141:
            if (lookahead == 'f')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(anon_sym_if);
        case 143:
            if (lookahead == 'n')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if (lookahead == 'l')
                ADVANCE(145);
            if (lookahead == 't')
                ADVANCE(149);
            LEX_ERROR();
        case 145:
            if (lookahead == 'e')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 's')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 's')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            ACCEPT_TOKEN(anon_sym_unless);
        case 149:
            if (lookahead == 'i')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'l')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_until);
        case 152:
            if (lookahead == 'h')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 'i')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'l')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'e')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            ACCEPT_TOKEN(anon_sym_while);
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
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'd')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'o')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            ACCEPT_TOKEN(anon_sym_do);
        case 160:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
            LEX_ERROR();
        case 161:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 162:
            if (lookahead == ':')
                ADVANCE(25);
            LEX_ERROR();
        case 163:
            ACCEPT_TOKEN(anon_sym_LBRACK);
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
                ADVANCE(165);
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
                ADVANCE(166);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == '|')
                ADVANCE(133);
            if (lookahead == '~')
                ADVANCE(134);
            LEX_ERROR();
        case 165:
            if (lookahead == '.')
                ADVANCE(18);
            LEX_ERROR();
        case 166:
            if (lookahead == ']')
                ADVANCE(58);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
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
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(101);
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
                ADVANCE(105);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(170);
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
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'e')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 'n')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'd')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_end);
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
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
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
                ADVANCE(177);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            LEX_ERROR();
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'd')
                ADVANCE(158);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'd')
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
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
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
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
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'i')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'n')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_in);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'd')
                ADVANCE(158);
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
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'd')
                ADVANCE(158);
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
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
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
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(170);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == ']')
                ADVANCE(60);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == ']')
                ADVANCE(60);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(87);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(199);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(200);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(77);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 199:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 200:
            ACCEPT_TOKEN(anon_sym_LT);
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
                ADVANCE(136);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
            LEX_ERROR();
        case 203:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(203);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 't')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'h')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 'e')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 'n')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            ACCEPT_TOKEN(anon_sym_then);
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
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 't')
                ADVANCE(204);
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
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'e')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == 'l')
                ADVANCE(211);
            if (lookahead == 'n')
                ADVANCE(174);
            LEX_ERROR();
        case 211:
            if (lookahead == 's')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 'e')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            ACCEPT_TOKEN(anon_sym_else);
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(215);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(216);
            if (lookahead == 'n')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(217);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(215);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(112);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'e')
                ADVANCE(210);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
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
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'e')
                ADVANCE(210);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
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
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'e')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'l')
                ADVANCE(223);
            if (lookahead == 'n')
                ADVANCE(174);
            LEX_ERROR();
        case 223:
            if (lookahead == 's')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'e')
                ADVANCE(213);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'f')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            ACCEPT_TOKEN(anon_sym_elsif);
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(81);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(112);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(161);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '[')
                ADVANCE(163);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'i')
                ADVANCE(141);
            if (lookahead == 'u')
                ADVANCE(143);
            if (lookahead == 'w')
                ADVANCE(152);
            LEX_ERROR();
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(200);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(162);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
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
                ADVANCE(199);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 235:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
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
                ADVANCE(199);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 236:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(236);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 237:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(199);
            if (lookahead == '=')
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(136);
            LEX_ERROR();
        case 239:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(239);
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
                ADVANCE(136);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(72);
            if (lookahead == 'd')
                ADVANCE(137);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(89);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'm')
                ADVANCE(95);
            if (lookahead == 'n')
                ADVANCE(101);
            if (lookahead == 's')
                ADVANCE(104);
            if (lookahead == 'u')
                ADVANCE(116);
            if (lookahead == 'w')
                ADVANCE(128);
            if (lookahead == '|')
                ADVANCE(133);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 135,
    [1] = 139,
    [2] = 140,
    [3] = 140,
    [4] = 140,
    [5] = 157,
    [6] = 157,
    [7] = 140,
    [8] = 160,
    [9] = 160,
    [10] = 160,
    [11] = 164,
    [12] = 164,
    [13] = 164,
    [14] = 167,
    [15] = 168,
    [16] = 168,
    [17] = 168,
    [18] = 169,
    [19] = 169,
    [20] = 169,
    [21] = 169,
    [22] = 171,
    [23] = 172,
    [24] = 176,
    [25] = 160,
    [26] = 157,
    [27] = 157,
    [28] = 178,
    [29] = 179,
    [30] = 179,
    [31] = 179,
    [32] = 167,
    [33] = 168,
    [34] = 180,
    [35] = 179,
    [36] = 179,
    [37] = 181,
    [38] = 181,
    [39] = 181,
    [40] = 157,
    [41] = 181,
    [42] = 182,
    [43] = 182,
    [44] = 182,
    [45] = 164,
    [46] = 164,
    [47] = 164,
    [48] = 167,
    [49] = 179,
    [50] = 168,
    [51] = 168,
    [52] = 168,
    [53] = 169,
    [54] = 169,
    [55] = 169,
    [56] = 169,
    [57] = 171,
    [58] = 172,
    [59] = 182,
    [60] = 181,
    [61] = 183,
    [62] = 184,
    [63] = 184,
    [64] = 167,
    [65] = 168,
    [66] = 184,
    [67] = 184,
    [68] = 181,
    [69] = 183,
    [70] = 187,
    [71] = 188,
    [72] = 183,
    [73] = 169,
    [74] = 169,
    [75] = 169,
    [76] = 169,
    [77] = 189,
    [78] = 187,
    [79] = 181,
    [80] = 181,
    [81] = 181,
    [82] = 181,
    [83] = 183,
    [84] = 181,
    [85] = 188,
    [86] = 169,
    [87] = 190,
    [88] = 190,
    [89] = 191,
    [90] = 191,
    [91] = 191,
    [92] = 167,
    [93] = 168,
    [94] = 191,
    [95] = 191,
    [96] = 181,
    [97] = 191,
    [98] = 188,
    [99] = 191,
    [100] = 191,
    [101] = 168,
    [102] = 192,
    [103] = 168,
    [104] = 191,
    [105] = 193,
    [106] = 194,
    [107] = 194,
    [108] = 194,
    [109] = 167,
    [110] = 168,
    [111] = 191,
    [112] = 194,
    [113] = 194,
    [114] = 181,
    [115] = 194,
    [116] = 188,
    [117] = 194,
    [118] = 194,
    [119] = 168,
    [120] = 192,
    [121] = 168,
    [122] = 194,
    [123] = 193,
    [124] = 194,
    [125] = 195,
    [126] = 171,
    [127] = 194,
    [128] = 193,
    [129] = 195,
    [130] = 194,
    [131] = 194,
    [132] = 195,
    [133] = 191,
    [134] = 191,
    [135] = 191,
    [136] = 181,
    [137] = 181,
    [138] = 196,
    [139] = 196,
    [140] = 198,
    [141] = 196,
    [142] = 201,
    [143] = 201,
    [144] = 201,
    [145] = 157,
    [146] = 201,
    [147] = 202,
    [148] = 202,
    [149] = 202,
    [150] = 181,
    [151] = 164,
    [152] = 164,
    [153] = 164,
    [154] = 167,
    [155] = 168,
    [156] = 168,
    [157] = 168,
    [158] = 169,
    [159] = 169,
    [160] = 169,
    [161] = 169,
    [162] = 171,
    [163] = 172,
    [164] = 202,
    [165] = 201,
    [166] = 184,
    [167] = 169,
    [168] = 190,
    [169] = 201,
    [170] = 201,
    [171] = 196,
    [172] = 196,
    [173] = 201,
    [174] = 201,
    [175] = 187,
    [176] = 172,
    [177] = 201,
    [178] = 169,
    [179] = 169,
    [180] = 169,
    [181] = 169,
    [182] = 201,
    [183] = 201,
    [184] = 201,
    [185] = 201,
    [186] = 201,
    [187] = 201,
    [188] = 172,
    [189] = 201,
    [190] = 201,
    [191] = 172,
    [192] = 201,
    [193] = 201,
    [194] = 203,
    [195] = 203,
    [196] = 203,
    [197] = 208,
    [198] = 208,
    [199] = 208,
    [200] = 167,
    [201] = 168,
    [202] = 208,
    [203] = 208,
    [204] = 181,
    [205] = 208,
    [206] = 188,
    [207] = 208,
    [208] = 208,
    [209] = 168,
    [210] = 192,
    [211] = 168,
    [212] = 208,
    [213] = 193,
    [214] = 208,
    [215] = 195,
    [216] = 208,
    [217] = 208,
    [218] = 208,
    [219] = 209,
    [220] = 201,
    [221] = 214,
    [222] = 218,
    [223] = 214,
    [224] = 219,
    [225] = 219,
    [226] = 219,
    [227] = 157,
    [228] = 219,
    [229] = 220,
    [230] = 220,
    [231] = 220,
    [232] = 164,
    [233] = 164,
    [234] = 164,
    [235] = 167,
    [236] = 168,
    [237] = 168,
    [238] = 168,
    [239] = 169,
    [240] = 169,
    [241] = 169,
    [242] = 169,
    [243] = 171,
    [244] = 172,
    [245] = 220,
    [246] = 219,
    [247] = 184,
    [248] = 169,
    [249] = 190,
    [250] = 219,
    [251] = 219,
    [252] = 196,
    [253] = 196,
    [254] = 201,
    [255] = 219,
    [256] = 172,
    [257] = 219,
    [258] = 219,
    [259] = 201,
    [260] = 219,
    [261] = 172,
    [262] = 219,
    [263] = 219,
    [264] = 203,
    [265] = 209,
    [266] = 219,
    [267] = 172,
    [268] = 219,
    [269] = 196,
    [270] = 201,
    [271] = 172,
    [272] = 219,
    [273] = 203,
    [274] = 203,
    [275] = 203,
    [276] = 208,
    [277] = 208,
    [278] = 208,
    [279] = 167,
    [280] = 168,
    [281] = 208,
    [282] = 208,
    [283] = 181,
    [284] = 208,
    [285] = 188,
    [286] = 208,
    [287] = 208,
    [288] = 168,
    [289] = 192,
    [290] = 168,
    [291] = 208,
    [292] = 193,
    [293] = 208,
    [294] = 195,
    [295] = 208,
    [296] = 208,
    [297] = 208,
    [298] = 221,
    [299] = 219,
    [300] = 227,
    [301] = 228,
    [302] = 227,
    [303] = 229,
    [304] = 229,
    [305] = 229,
    [306] = 157,
    [307] = 229,
    [308] = 230,
    [309] = 230,
    [310] = 230,
    [311] = 164,
    [312] = 164,
    [313] = 164,
    [314] = 167,
    [315] = 168,
    [316] = 168,
    [317] = 168,
    [318] = 169,
    [319] = 169,
    [320] = 169,
    [321] = 169,
    [322] = 171,
    [323] = 172,
    [324] = 230,
    [325] = 229,
    [326] = 184,
    [327] = 169,
    [328] = 190,
    [329] = 229,
    [330] = 229,
    [331] = 196,
    [332] = 196,
    [333] = 201,
    [334] = 229,
    [335] = 172,
    [336] = 229,
    [337] = 229,
    [338] = 201,
    [339] = 229,
    [340] = 172,
    [341] = 229,
    [342] = 229,
    [343] = 203,
    [344] = 209,
    [345] = 229,
    [346] = 172,
    [347] = 229,
    [348] = 229,
    [349] = 203,
    [350] = 221,
    [351] = 229,
    [352] = 172,
    [353] = 209,
    [354] = 229,
    [355] = 169,
    [356] = 203,
    [357] = 203,
    [358] = 203,
    [359] = 208,
    [360] = 208,
    [361] = 208,
    [362] = 167,
    [363] = 168,
    [364] = 208,
    [365] = 208,
    [366] = 181,
    [367] = 208,
    [368] = 188,
    [369] = 208,
    [370] = 208,
    [371] = 168,
    [372] = 192,
    [373] = 168,
    [374] = 208,
    [375] = 193,
    [376] = 208,
    [377] = 195,
    [378] = 208,
    [379] = 208,
    [380] = 208,
    [381] = 221,
    [382] = 209,
    [383] = 172,
    [384] = 229,
    [385] = 229,
    [386] = 190,
    [387] = 190,
    [388] = 229,
    [389] = 190,
    [390] = 229,
    [391] = 231,
    [392] = 196,
    [393] = 201,
    [394] = 229,
    [395] = 172,
    [396] = 229,
    [397] = 229,
    [398] = 230,
    [399] = 232,
    [400] = 196,
    [401] = 168,
    [402] = 233,
    [403] = 196,
    [404] = 231,
    [405] = 168,
    [406] = 233,
    [407] = 231,
    [408] = 196,
    [409] = 201,
    [410] = 229,
    [411] = 172,
    [412] = 229,
    [413] = 229,
    [414] = 201,
    [415] = 229,
    [416] = 172,
    [417] = 201,
    [418] = 229,
    [419] = 172,
    [420] = 229,
    [421] = 181,
    [422] = 230,
    [423] = 188,
    [424] = 230,
    [425] = 230,
    [426] = 234,
    [427] = 234,
    [428] = 231,
    [429] = 196,
    [430] = 235,
    [431] = 168,
    [432] = 236,
    [433] = 231,
    [434] = 237,
    [435] = 168,
    [436] = 236,
    [437] = 231,
    [438] = 236,
    [439] = 231,
    [440] = 236,
    [441] = 231,
    [442] = 188,
    [443] = 196,
    [444] = 168,
    [445] = 238,
    [446] = 188,
    [447] = 237,
    [448] = 168,
    [449] = 238,
    [450] = 188,
    [451] = 238,
    [452] = 188,
    [453] = 238,
    [454] = 188,
    [455] = 201,
    [456] = 229,
    [457] = 172,
    [458] = 229,
    [459] = 229,
    [460] = 196,
    [461] = 201,
    [462] = 172,
    [463] = 229,
    [464] = 201,
    [465] = 229,
    [466] = 172,
    [467] = 164,
    [468] = 164,
    [469] = 229,
    [470] = 229,
    [471] = 229,
    [472] = 168,
    [473] = 192,
    [474] = 168,
    [475] = 230,
    [476] = 193,
    [477] = 230,
    [478] = 195,
    [479] = 230,
    [480] = 230,
    [481] = 230,
    [482] = 239,
    [483] = 201,
    [484] = 196,
    [485] = 201,
    [486] = 229,
    [487] = 172,
    [488] = 229,
    [489] = 229,
    [490] = 172,
    [491] = 187,
    [492] = 221,
    [493] = 169,
    [494] = 169,
    [495] = 169,
    [496] = 169,
    [497] = 229,
    [498] = 229,
    [499] = 229,
    [500] = 229,
    [501] = 229,
    [502] = 221,
    [503] = 172,
    [504] = 209,
    [505] = 219,
    [506] = 172,
    [507] = 219,
    [508] = 219,
    [509] = 190,
    [510] = 219,
    [511] = 190,
    [512] = 219,
    [513] = 231,
    [514] = 196,
    [515] = 201,
    [516] = 219,
    [517] = 172,
    [518] = 219,
    [519] = 219,
    [520] = 220,
    [521] = 232,
    [522] = 196,
    [523] = 168,
    [524] = 233,
    [525] = 196,
    [526] = 231,
    [527] = 196,
    [528] = 201,
    [529] = 219,
    [530] = 172,
    [531] = 219,
    [532] = 219,
    [533] = 201,
    [534] = 219,
    [535] = 172,
    [536] = 201,
    [537] = 219,
    [538] = 172,
    [539] = 219,
    [540] = 181,
    [541] = 220,
    [542] = 188,
    [543] = 220,
    [544] = 220,
    [545] = 234,
    [546] = 231,
    [547] = 196,
    [548] = 235,
    [549] = 188,
    [550] = 196,
    [551] = 201,
    [552] = 219,
    [553] = 172,
    [554] = 219,
    [555] = 219,
    [556] = 196,
    [557] = 201,
    [558] = 172,
    [559] = 219,
    [560] = 201,
    [561] = 219,
    [562] = 172,
    [563] = 164,
    [564] = 219,
    [565] = 219,
    [566] = 219,
    [567] = 168,
    [568] = 192,
    [569] = 168,
    [570] = 220,
    [571] = 193,
    [572] = 220,
    [573] = 195,
    [574] = 220,
    [575] = 220,
    [576] = 220,
    [577] = 239,
    [578] = 201,
    [579] = 196,
    [580] = 201,
    [581] = 219,
    [582] = 172,
    [583] = 219,
    [584] = 219,
    [585] = 172,
    [586] = 187,
    [587] = 209,
    [588] = 169,
    [589] = 169,
    [590] = 169,
    [591] = 169,
    [592] = 219,
    [593] = 219,
    [594] = 219,
    [595] = 219,
    [596] = 219,
    [597] = 209,
    [598] = 172,
    [599] = 201,
    [600] = 201,
    [601] = 203,
    [602] = 221,
    [603] = 201,
    [604] = 172,
    [605] = 209,
    [606] = 201,
    [607] = 172,
    [608] = 201,
    [609] = 201,
    [610] = 190,
    [611] = 201,
    [612] = 190,
    [613] = 201,
    [614] = 231,
    [615] = 196,
    [616] = 201,
    [617] = 201,
    [618] = 172,
    [619] = 201,
    [620] = 201,
    [621] = 202,
    [622] = 232,
    [623] = 196,
    [624] = 168,
    [625] = 233,
    [626] = 196,
    [627] = 231,
    [628] = 196,
    [629] = 201,
    [630] = 201,
    [631] = 172,
    [632] = 201,
    [633] = 201,
    [634] = 201,
    [635] = 201,
    [636] = 172,
    [637] = 201,
    [638] = 201,
    [639] = 172,
    [640] = 201,
    [641] = 181,
    [642] = 202,
    [643] = 188,
    [644] = 202,
    [645] = 202,
    [646] = 234,
    [647] = 231,
    [648] = 196,
    [649] = 235,
    [650] = 188,
    [651] = 196,
    [652] = 201,
    [653] = 201,
    [654] = 172,
    [655] = 201,
    [656] = 201,
    [657] = 196,
    [658] = 201,
    [659] = 172,
    [660] = 201,
    [661] = 201,
    [662] = 201,
    [663] = 172,
    [664] = 164,
    [665] = 201,
    [666] = 201,
    [667] = 201,
    [668] = 168,
    [669] = 192,
    [670] = 168,
    [671] = 202,
    [672] = 193,
    [673] = 202,
    [674] = 195,
    [675] = 202,
    [676] = 202,
    [677] = 202,
    [678] = 239,
    [679] = 201,
    [680] = 196,
    [681] = 201,
    [682] = 201,
    [683] = 172,
    [684] = 201,
    [685] = 201,
    [686] = 172,
    [687] = 172,
    [688] = 181,
    [689] = 181,
    [690] = 201,
    [691] = 181,
    [692] = 172,
    [693] = 181,
    [694] = 181,
    [695] = 168,
    [696] = 192,
    [697] = 168,
    [698] = 184,
    [699] = 193,
    [700] = 184,
    [701] = 195,
    [702] = 184,
    [703] = 184,
    [704] = 184,
    [705] = 203,
    [706] = 209,
    [707] = 181,
    [708] = 172,
    [709] = 181,
    [710] = 181,
    [711] = 203,
    [712] = 221,
    [713] = 181,
    [714] = 172,
    [715] = 209,
    [716] = 181,
    [717] = 172,
    [718] = 181,
    [719] = 181,
    [720] = 190,
    [721] = 181,
    [722] = 190,
    [723] = 181,
    [724] = 231,
    [725] = 196,
    [726] = 201,
    [727] = 181,
    [728] = 172,
    [729] = 181,
    [730] = 181,
    [731] = 182,
    [732] = 232,
    [733] = 196,
    [734] = 168,
    [735] = 233,
    [736] = 196,
    [737] = 231,
    [738] = 196,
    [739] = 201,
    [740] = 181,
    [741] = 172,
    [742] = 181,
    [743] = 181,
    [744] = 201,
    [745] = 181,
    [746] = 172,
    [747] = 201,
    [748] = 181,
    [749] = 172,
    [750] = 181,
    [751] = 181,
    [752] = 182,
    [753] = 188,
    [754] = 182,
    [755] = 182,
    [756] = 234,
    [757] = 231,
    [758] = 196,
    [759] = 235,
    [760] = 188,
    [761] = 196,
    [762] = 201,
    [763] = 181,
    [764] = 172,
    [765] = 181,
    [766] = 181,
    [767] = 196,
    [768] = 201,
    [769] = 172,
    [770] = 181,
    [771] = 201,
    [772] = 181,
    [773] = 172,
    [774] = 164,
    [775] = 181,
    [776] = 181,
    [777] = 181,
    [778] = 168,
    [779] = 192,
    [780] = 168,
    [781] = 182,
    [782] = 193,
    [783] = 182,
    [784] = 195,
    [785] = 182,
    [786] = 182,
    [787] = 182,
    [788] = 239,
    [789] = 201,
    [790] = 196,
    [791] = 201,
    [792] = 181,
    [793] = 172,
    [794] = 181,
    [795] = 181,
    [796] = 172,
    [797] = 188,
    [798] = 179,
    [799] = 179,
    [800] = 168,
    [801] = 192,
    [802] = 168,
    [803] = 179,
    [804] = 193,
    [805] = 179,
    [806] = 195,
    [807] = 179,
    [808] = 179,
    [809] = 179,
    [810] = 157,
    [811] = 171,
    [812] = 178,
    [813] = 157,
    [814] = 140,
    [815] = 184,
    [816] = 169,
    [817] = 190,
    [818] = 140,
    [819] = 140,
    [820] = 196,
    [821] = 196,
    [822] = 201,
    [823] = 140,
    [824] = 172,
    [825] = 140,
    [826] = 140,
    [827] = 201,
    [828] = 140,
    [829] = 172,
    [830] = 140,
    [831] = 140,
    [832] = 203,
    [833] = 209,
    [834] = 140,
    [835] = 172,
    [836] = 140,
    [837] = 140,
    [838] = 203,
    [839] = 221,
    [840] = 140,
    [841] = 172,
    [842] = 209,
    [843] = 140,
    [844] = 172,
    [845] = 140,
    [846] = 140,
    [847] = 190,
    [848] = 140,
    [849] = 190,
    [850] = 140,
    [851] = 231,
    [852] = 196,
    [853] = 201,
    [854] = 140,
    [855] = 172,
    [856] = 140,
    [857] = 140,
    [858] = 160,
    [859] = 232,
    [860] = 196,
    [861] = 168,
    [862] = 233,
    [863] = 196,
    [864] = 231,
    [865] = 196,
    [866] = 201,
    [867] = 140,
    [868] = 172,
    [869] = 140,
    [870] = 140,
    [871] = 201,
    [872] = 140,
    [873] = 172,
    [874] = 201,
    [875] = 140,
    [876] = 172,
    [877] = 140,
    [878] = 181,
    [879] = 160,
    [880] = 188,
    [881] = 160,
    [882] = 160,
    [883] = 234,
    [884] = 231,
    [885] = 196,
    [886] = 235,
    [887] = 188,
    [888] = 196,
    [889] = 201,
    [890] = 140,
    [891] = 172,
    [892] = 140,
    [893] = 140,
    [894] = 196,
    [895] = 201,
    [896] = 172,
    [897] = 140,
    [898] = 201,
    [899] = 140,
    [900] = 172,
    [901] = 164,
    [902] = 140,
    [903] = 140,
    [904] = 140,
    [905] = 168,
    [906] = 192,
    [907] = 168,
    [908] = 160,
    [909] = 193,
    [910] = 160,
    [911] = 195,
    [912] = 160,
    [913] = 160,
    [914] = 160,
    [915] = 239,
    [916] = 201,
    [917] = 196,
    [918] = 201,
    [919] = 140,
    [920] = 172,
    [921] = 140,
    [922] = 140,
    [923] = 172,
    [924] = 187,
    [925] = 139,
    [926] = 169,
    [927] = 169,
    [928] = 169,
    [929] = 169,
    [930] = 140,
    [931] = 140,
    [932] = 140,
    [933] = 140,
    [934] = 140,
    [935] = 139,
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
        [sym_for_statement] = 6,
        [sym_begin_statement] = 6,
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
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [ts_builtin_sym_end] = 22,
        [anon_sym_undef] = 24,
        [anon_sym_alias] = 26,
        [anon_sym_def] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_class] = 32,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_module] = 36,
        [anon_sym_while] = 38,
        [anon_sym_until] = 40,
        [anon_sym_if] = 42,
        [anon_sym_unless] = 44,
        [anon_sym_for] = 46,
        [anon_sym_begin] = 48,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [sym_identifier] = 52,
        [sym_comment] = 54,
        [sym_symbol] = 14,
        [sym__line_break] = 54,
    },
    [1] = {
        [ts_builtin_sym_end] = 56,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [2] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 60,
        [ts_builtin_sym_end] = 62,
        [anon_sym_while] = 64,
        [anon_sym_until] = 66,
        [anon_sym_if] = 68,
        [anon_sym_unless] = 70,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [3] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [ts_builtin_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [sym_comment] = 54,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [4] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [ts_builtin_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [sym_comment] = 54,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [5] = {
        [anon_sym_do] = 80,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [6] = {
        [anon_sym_do] = 82,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [7] = {
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [ts_builtin_sym_end] = 84,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [8] = {
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [ts_builtin_sym_end] = 86,
        [anon_sym_COLON_COLON] = 88,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_LBRACK] = 90,
        [anon_sym_DOT] = 92,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [9] = {
        [sym__terminator] = 94,
        [aux_sym_program_repeat1] = 94,
        [ts_builtin_sym_end] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_while] = 94,
        [anon_sym_until] = 94,
        [anon_sym_if] = 94,
        [anon_sym_unless] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [10] = {
        [sym__terminator] = 96,
        [aux_sym_program_repeat1] = 96,
        [ts_builtin_sym_end] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_while] = 96,
        [anon_sym_until] = 96,
        [anon_sym_if] = 96,
        [anon_sym_unless] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [11] = {
        [sym__function_name] = 98,
        [anon_sym_PIPE] = 100,
        [anon_sym_STAR] = 100,
        [anon_sym_AMP] = 100,
        [anon_sym_LT] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 100,
        [anon_sym_CARET] = 100,
        [anon_sym_LT_EQ_GT] = 100,
        [anon_sym_EQ_EQ] = 100,
        [anon_sym_EQ_EQ_EQ] = 100,
        [anon_sym_EQ_TILDE] = 100,
        [anon_sym_GT] = 100,
        [anon_sym_GT_EQ] = 100,
        [anon_sym_LT_EQ] = 100,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_SLASH] = 100,
        [anon_sym_PERCENT] = 100,
        [anon_sym_STAR_STAR] = 100,
        [anon_sym_LT_LT] = 100,
        [anon_sym_GT_GT] = 100,
        [anon_sym_TILDE] = 100,
        [anon_sym_PLUS_AT] = 100,
        [anon_sym_DASH_AT] = 100,
        [anon_sym_LBRACK_RBRACK] = 100,
        [anon_sym_LBRACK_RBRACK_EQ] = 100,
        [sym__line_break] = 54,
    },
    [12] = {
        [sym__function_name] = 102,
        [anon_sym_PIPE] = 104,
        [anon_sym_STAR] = 104,
        [anon_sym_AMP] = 104,
        [anon_sym_LT] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 104,
        [anon_sym_CARET] = 104,
        [anon_sym_LT_EQ_GT] = 104,
        [anon_sym_EQ_EQ] = 104,
        [anon_sym_EQ_EQ_EQ] = 104,
        [anon_sym_EQ_TILDE] = 104,
        [anon_sym_GT] = 104,
        [anon_sym_GT_EQ] = 104,
        [anon_sym_LT_EQ] = 104,
        [anon_sym_PLUS] = 104,
        [anon_sym_DASH] = 104,
        [anon_sym_SLASH] = 104,
        [anon_sym_PERCENT] = 104,
        [anon_sym_STAR_STAR] = 104,
        [anon_sym_LT_LT] = 104,
        [anon_sym_GT_GT] = 104,
        [anon_sym_TILDE] = 104,
        [anon_sym_PLUS_AT] = 104,
        [anon_sym_DASH_AT] = 104,
        [anon_sym_LBRACK_RBRACK] = 104,
        [anon_sym_LBRACK_RBRACK_EQ] = 104,
        [sym__line_break] = 54,
    },
    [13] = {
        [sym__function_name] = 106,
        [anon_sym_PIPE] = 108,
        [anon_sym_STAR] = 108,
        [anon_sym_AMP] = 108,
        [anon_sym_LT] = 108,
        [sym_identifier] = 108,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 108,
        [anon_sym_CARET] = 108,
        [anon_sym_LT_EQ_GT] = 108,
        [anon_sym_EQ_EQ] = 108,
        [anon_sym_EQ_EQ_EQ] = 108,
        [anon_sym_EQ_TILDE] = 108,
        [anon_sym_GT] = 108,
        [anon_sym_GT_EQ] = 108,
        [anon_sym_LT_EQ] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_SLASH] = 108,
        [anon_sym_PERCENT] = 108,
        [anon_sym_STAR_STAR] = 108,
        [anon_sym_LT_LT] = 108,
        [anon_sym_GT_GT] = 108,
        [anon_sym_TILDE] = 108,
        [anon_sym_PLUS_AT] = 108,
        [anon_sym_DASH_AT] = 108,
        [anon_sym_LBRACK_RBRACK] = 108,
        [anon_sym_LBRACK_RBRACK_EQ] = 108,
        [sym__line_break] = 54,
    },
    [14] = {
        [sym__statement] = 110,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 134,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [15] = {
        [sym_identifier] = 156,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [16] = {
        [sym_identifier] = 158,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [17] = {
        [sym_identifier] = 160,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [18] = {
        [sym_condition] = 162,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [19] = {
        [sym_condition] = 180,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [20] = {
        [sym_condition] = 182,
        [sym__expression] = 184,
        [sym__argument] = 186,
        [sym__primary] = 188,
        [sym_scope_resolution_expression] = 190,
        [sym_subscript_expression] = 190,
        [sym_member_access] = 190,
        [sym__lhs] = 192,
        [sym__variable] = 190,
        [anon_sym_LPAREN] = 194,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_nil] = 198,
        [anon_sym_self] = 198,
        [sym_identifier] = 198,
        [sym_comment] = 54,
        [sym_symbol] = 186,
        [sym__line_break] = 54,
    },
    [21] = {
        [sym_condition] = 200,
        [sym__expression] = 202,
        [sym__argument] = 204,
        [sym__primary] = 206,
        [sym_scope_resolution_expression] = 208,
        [sym_subscript_expression] = 208,
        [sym_member_access] = 208,
        [sym__lhs] = 210,
        [sym__variable] = 208,
        [anon_sym_LPAREN] = 212,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [sym_identifier] = 216,
        [sym_comment] = 54,
        [sym_symbol] = 204,
        [sym__line_break] = 54,
    },
    [22] = {
        [sym__primary] = 218,
        [sym_scope_resolution_expression] = 220,
        [sym_subscript_expression] = 220,
        [sym_member_access] = 220,
        [sym__lhs] = 222,
        [sym__variable] = 220,
        [anon_sym_LPAREN] = 224,
        [anon_sym_COLON_COLON] = 226,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [23] = {
        [anon_sym_end] = 230,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [24] = {
        [sym__call_arguments] = 232,
        [sym__command] = 234,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym_member_access] = 240,
        [sym__lhs] = 242,
        [sym__variable] = 240,
        [anon_sym_do] = 244,
        [anon_sym_LPAREN] = 246,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_super] = 250,
        [anon_sym_nil] = 252,
        [anon_sym_self] = 252,
        [sym_identifier] = 252,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [25] = {
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [ts_builtin_sym_end] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_while] = 254,
        [anon_sym_until] = 254,
        [anon_sym_if] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [26] = {
        [anon_sym_do] = 256,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [27] = {
        [anon_sym_do] = 258,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [28] = {
        [aux_sym__call_arguments_repeat1] = 260,
        [anon_sym_do] = 258,
        [anon_sym_COMMA] = 262,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [29] = {
        [aux_sym__call_arguments_repeat1] = 86,
        [anon_sym_do] = 86,
        [anon_sym_COMMA] = 86,
        [anon_sym_COLON_COLON] = 264,
        [anon_sym_LBRACK] = 266,
        [anon_sym_DOT] = 268,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [30] = {
        [aux_sym__call_arguments_repeat1] = 94,
        [anon_sym_do] = 94,
        [anon_sym_COMMA] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 96,
        [anon_sym_do] = 96,
        [anon_sym_COMMA] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [32] = {
        [sym__statement] = 270,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 272,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [33] = {
        [sym_identifier] = 274,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [34] = {
        [sym__call_arguments] = 232,
        [sym__command] = 234,
        [sym__argument] = 236,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym_member_access] = 240,
        [sym__lhs] = 242,
        [sym__variable] = 240,
        [anon_sym_LPAREN] = 246,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_super] = 250,
        [anon_sym_nil] = 252,
        [anon_sym_self] = 252,
        [sym_identifier] = 252,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [35] = {
        [aux_sym__call_arguments_repeat1] = 254,
        [anon_sym_do] = 254,
        [anon_sym_COMMA] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [36] = {
        [aux_sym__call_arguments_repeat1] = 276,
        [anon_sym_do] = 276,
        [anon_sym_COMMA] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [37] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_RPAREN] = 282,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [38] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_RPAREN] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [sym_comment] = 54,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [39] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_RPAREN] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [sym_comment] = 54,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [40] = {
        [anon_sym_do] = 292,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [41] = {
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [anon_sym_RPAREN] = 84,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [42] = {
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [anon_sym_RPAREN] = 86,
        [anon_sym_COLON_COLON] = 294,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_LBRACK] = 296,
        [anon_sym_DOT] = 298,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [43] = {
        [sym__terminator] = 94,
        [aux_sym_program_repeat1] = 94,
        [anon_sym_RPAREN] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_while] = 94,
        [anon_sym_until] = 94,
        [anon_sym_if] = 94,
        [anon_sym_unless] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [44] = {
        [sym__terminator] = 96,
        [aux_sym_program_repeat1] = 96,
        [anon_sym_RPAREN] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_while] = 96,
        [anon_sym_until] = 96,
        [anon_sym_if] = 96,
        [anon_sym_unless] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [45] = {
        [sym__function_name] = 300,
        [anon_sym_PIPE] = 302,
        [anon_sym_STAR] = 302,
        [anon_sym_AMP] = 302,
        [anon_sym_LT] = 302,
        [sym_identifier] = 302,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 302,
        [anon_sym_CARET] = 302,
        [anon_sym_LT_EQ_GT] = 302,
        [anon_sym_EQ_EQ] = 302,
        [anon_sym_EQ_EQ_EQ] = 302,
        [anon_sym_EQ_TILDE] = 302,
        [anon_sym_GT] = 302,
        [anon_sym_GT_EQ] = 302,
        [anon_sym_LT_EQ] = 302,
        [anon_sym_PLUS] = 302,
        [anon_sym_DASH] = 302,
        [anon_sym_SLASH] = 302,
        [anon_sym_PERCENT] = 302,
        [anon_sym_STAR_STAR] = 302,
        [anon_sym_LT_LT] = 302,
        [anon_sym_GT_GT] = 302,
        [anon_sym_TILDE] = 302,
        [anon_sym_PLUS_AT] = 302,
        [anon_sym_DASH_AT] = 302,
        [anon_sym_LBRACK_RBRACK] = 302,
        [anon_sym_LBRACK_RBRACK_EQ] = 302,
        [sym__line_break] = 54,
    },
    [46] = {
        [sym__function_name] = 304,
        [anon_sym_PIPE] = 104,
        [anon_sym_STAR] = 104,
        [anon_sym_AMP] = 104,
        [anon_sym_LT] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 104,
        [anon_sym_CARET] = 104,
        [anon_sym_LT_EQ_GT] = 104,
        [anon_sym_EQ_EQ] = 104,
        [anon_sym_EQ_EQ_EQ] = 104,
        [anon_sym_EQ_TILDE] = 104,
        [anon_sym_GT] = 104,
        [anon_sym_GT_EQ] = 104,
        [anon_sym_LT_EQ] = 104,
        [anon_sym_PLUS] = 104,
        [anon_sym_DASH] = 104,
        [anon_sym_SLASH] = 104,
        [anon_sym_PERCENT] = 104,
        [anon_sym_STAR_STAR] = 104,
        [anon_sym_LT_LT] = 104,
        [anon_sym_GT_GT] = 104,
        [anon_sym_TILDE] = 104,
        [anon_sym_PLUS_AT] = 104,
        [anon_sym_DASH_AT] = 104,
        [anon_sym_LBRACK_RBRACK] = 104,
        [anon_sym_LBRACK_RBRACK_EQ] = 104,
        [sym__line_break] = 54,
    },
    [47] = {
        [sym__function_name] = 306,
        [anon_sym_PIPE] = 108,
        [anon_sym_STAR] = 108,
        [anon_sym_AMP] = 108,
        [anon_sym_LT] = 108,
        [sym_identifier] = 108,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 108,
        [anon_sym_CARET] = 108,
        [anon_sym_LT_EQ_GT] = 108,
        [anon_sym_EQ_EQ] = 108,
        [anon_sym_EQ_EQ_EQ] = 108,
        [anon_sym_EQ_TILDE] = 108,
        [anon_sym_GT] = 108,
        [anon_sym_GT_EQ] = 108,
        [anon_sym_LT_EQ] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_SLASH] = 108,
        [anon_sym_PERCENT] = 108,
        [anon_sym_STAR_STAR] = 108,
        [anon_sym_LT_LT] = 108,
        [anon_sym_GT_GT] = 108,
        [anon_sym_TILDE] = 108,
        [anon_sym_PLUS_AT] = 108,
        [anon_sym_DASH_AT] = 108,
        [anon_sym_LBRACK_RBRACK] = 108,
        [anon_sym_LBRACK_RBRACK_EQ] = 108,
        [sym__line_break] = 54,
    },
    [48] = {
        [sym__statement] = 308,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 310,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [49] = {
        [aux_sym__call_arguments_repeat1] = 312,
        [anon_sym_do] = 312,
        [anon_sym_COMMA] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [50] = {
        [sym_identifier] = 314,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [51] = {
        [sym_identifier] = 316,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [52] = {
        [sym_identifier] = 318,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [53] = {
        [sym_condition] = 320,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [54] = {
        [sym_condition] = 322,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [55] = {
        [sym_condition] = 324,
        [sym__expression] = 184,
        [sym__argument] = 186,
        [sym__primary] = 188,
        [sym_scope_resolution_expression] = 190,
        [sym_subscript_expression] = 190,
        [sym_member_access] = 190,
        [sym__lhs] = 192,
        [sym__variable] = 190,
        [anon_sym_LPAREN] = 194,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_nil] = 198,
        [anon_sym_self] = 198,
        [sym_identifier] = 198,
        [sym_comment] = 54,
        [sym_symbol] = 186,
        [sym__line_break] = 54,
    },
    [56] = {
        [sym_condition] = 326,
        [sym__expression] = 202,
        [sym__argument] = 204,
        [sym__primary] = 206,
        [sym_scope_resolution_expression] = 208,
        [sym_subscript_expression] = 208,
        [sym_member_access] = 208,
        [sym__lhs] = 210,
        [sym__variable] = 208,
        [anon_sym_LPAREN] = 212,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [sym_identifier] = 216,
        [sym_comment] = 54,
        [sym_symbol] = 204,
        [sym__line_break] = 54,
    },
    [57] = {
        [sym__primary] = 218,
        [sym_scope_resolution_expression] = 220,
        [sym_subscript_expression] = 220,
        [sym_member_access] = 220,
        [sym__lhs] = 328,
        [sym__variable] = 220,
        [anon_sym_LPAREN] = 224,
        [anon_sym_COLON_COLON] = 226,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [58] = {
        [anon_sym_end] = 330,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [59] = {
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [anon_sym_RPAREN] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_while] = 254,
        [anon_sym_until] = 254,
        [anon_sym_if] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [60] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_RPAREN] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [sym_comment] = 54,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [61] = {
        [anon_sym_COLON_COLON] = 334,
        [anon_sym_LBRACK] = 336,
        [anon_sym_DOT] = 338,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [62] = {
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_in] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [63] = {
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_in] = 340,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [64] = {
        [sym__statement] = 342,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 344,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [65] = {
        [sym_identifier] = 346,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [66] = {
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_in] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [67] = {
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_in] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [68] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 348,
        [anon_sym_RPAREN] = 350,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [69] = {
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [70] = {
        [sym__statement] = 352,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [71] = {
        [anon_sym_RPAREN] = 354,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [72] = {
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [73] = {
        [sym__expression] = 358,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [74] = {
        [sym__expression] = 360,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [75] = {
        [sym__expression] = 362,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [76] = {
        [sym__expression] = 364,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [77] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym_else_block] = 368,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [aux_sym__then_elsif_else_block_repeat1] = 368,
        [ts_builtin_sym_end] = 368,
        [anon_sym_end] = 368,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_RPAREN] = 368,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_else] = 368,
        [anon_sym_elsif] = 368,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 368,
    },
    [78] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
    },
    [79] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_RPAREN] = 370,
        [anon_sym_while] = 370,
        [anon_sym_until] = 370,
        [anon_sym_if] = 370,
        [anon_sym_unless] = 370,
        [sym_comment] = 54,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [80] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_RPAREN] = 372,
        [anon_sym_while] = 372,
        [anon_sym_until] = 372,
        [anon_sym_if] = 372,
        [anon_sym_unless] = 372,
        [sym_comment] = 54,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [81] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_RPAREN] = 374,
        [anon_sym_while] = 374,
        [anon_sym_until] = 374,
        [anon_sym_if] = 374,
        [anon_sym_unless] = 374,
        [sym_comment] = 54,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [82] = {
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_RPAREN] = 376,
        [anon_sym_while] = 376,
        [anon_sym_until] = 376,
        [anon_sym_if] = 376,
        [anon_sym_unless] = 376,
        [sym_comment] = 54,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [83] = {
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [84] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_RPAREN] = 382,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [85] = {
        [anon_sym_RPAREN] = 384,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [86] = {
        [sym__expression] = 386,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [87] = {
        [sym__statement_block] = 388,
        [sym__do_block] = 390,
        [sym__terminator] = 392,
        [anon_sym_do] = 394,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [88] = {
        [sym__statement_block] = 84,
        [sym__do_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_do] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [89] = {
        [sym__statement_block] = 86,
        [sym__do_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_do] = 86,
        [anon_sym_COLON_COLON] = 400,
        [anon_sym_LBRACK] = 402,
        [anon_sym_DOT] = 404,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [90] = {
        [sym__statement_block] = 94,
        [sym__do_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_do] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [91] = {
        [sym__statement_block] = 96,
        [sym__do_block] = 96,
        [sym__terminator] = 96,
        [anon_sym_do] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [92] = {
        [sym__statement] = 406,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 408,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [93] = {
        [sym_identifier] = 410,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [94] = {
        [sym__statement_block] = 254,
        [sym__do_block] = 254,
        [sym__terminator] = 254,
        [anon_sym_do] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [95] = {
        [sym__statement_block] = 276,
        [sym__do_block] = 276,
        [sym__terminator] = 276,
        [anon_sym_do] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [96] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 412,
        [anon_sym_RPAREN] = 414,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [97] = {
        [sym__statement_block] = 312,
        [sym__do_block] = 312,
        [sym__terminator] = 312,
        [anon_sym_do] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [98] = {
        [anon_sym_RPAREN] = 416,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [99] = {
        [sym__statement_block] = 356,
        [sym__do_block] = 356,
        [sym__terminator] = 356,
        [anon_sym_do] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [100] = {
        [sym__statement_block] = 378,
        [sym__do_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_do] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [101] = {
        [sym_identifier] = 418,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [102] = {
        [sym__argument] = 420,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 432,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [103] = {
        [sym_identifier] = 436,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [104] = {
        [sym__statement_block] = 438,
        [sym__do_block] = 438,
        [sym__terminator] = 438,
        [anon_sym_do] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [105] = {
        [aux_sym__call_arguments_repeat1] = 440,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 444,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [106] = {
        [aux_sym__call_arguments_repeat1] = 86,
        [anon_sym_COMMA] = 86,
        [anon_sym_COLON_COLON] = 446,
        [anon_sym_LBRACK] = 448,
        [anon_sym_RBRACK] = 86,
        [anon_sym_DOT] = 450,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [107] = {
        [aux_sym__call_arguments_repeat1] = 94,
        [anon_sym_COMMA] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_RBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [108] = {
        [aux_sym__call_arguments_repeat1] = 96,
        [anon_sym_COMMA] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_RBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [109] = {
        [sym__statement] = 452,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 454,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [110] = {
        [sym_identifier] = 456,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [111] = {
        [sym__statement_block] = 458,
        [sym__do_block] = 458,
        [sym__terminator] = 458,
        [anon_sym_do] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [112] = {
        [aux_sym__call_arguments_repeat1] = 254,
        [anon_sym_COMMA] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_RBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [113] = {
        [aux_sym__call_arguments_repeat1] = 276,
        [anon_sym_COMMA] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_RBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [114] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 460,
        [anon_sym_RPAREN] = 462,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [115] = {
        [aux_sym__call_arguments_repeat1] = 312,
        [anon_sym_COMMA] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_RBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [116] = {
        [anon_sym_RPAREN] = 464,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [117] = {
        [aux_sym__call_arguments_repeat1] = 356,
        [anon_sym_COMMA] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_RBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [118] = {
        [aux_sym__call_arguments_repeat1] = 378,
        [anon_sym_COMMA] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_RBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [119] = {
        [sym_identifier] = 466,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [120] = {
        [sym__argument] = 468,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 470,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [121] = {
        [sym_identifier] = 472,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [122] = {
        [aux_sym__call_arguments_repeat1] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_RBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [123] = {
        [aux_sym__call_arguments_repeat1] = 474,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 476,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [124] = {
        [aux_sym__call_arguments_repeat1] = 458,
        [anon_sym_COMMA] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_RBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [125] = {
        [anon_sym_RBRACK] = 478,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [126] = {
        [sym__argument] = 480,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [127] = {
        [aux_sym__call_arguments_repeat1] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_RBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [128] = {
        [aux_sym__call_arguments_repeat1] = 484,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 486,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [129] = {
        [anon_sym_RBRACK] = 488,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [130] = {
        [aux_sym__call_arguments_repeat1] = 490,
        [anon_sym_COMMA] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_RBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [131] = {
        [aux_sym__call_arguments_repeat1] = 492,
        [anon_sym_COMMA] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_RBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [132] = {
        [anon_sym_RBRACK] = 494,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [133] = {
        [sym__statement_block] = 482,
        [sym__do_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_do] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [134] = {
        [sym__statement_block] = 490,
        [sym__do_block] = 490,
        [sym__terminator] = 490,
        [anon_sym_do] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [135] = {
        [sym__statement_block] = 492,
        [sym__do_block] = 492,
        [sym__terminator] = 492,
        [anon_sym_do] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [136] = {
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [anon_sym_RPAREN] = 496,
        [anon_sym_while] = 496,
        [anon_sym_until] = 496,
        [anon_sym_if] = 496,
        [anon_sym_unless] = 496,
        [sym_comment] = 54,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [137] = {
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [anon_sym_RPAREN] = 498,
        [anon_sym_while] = 498,
        [anon_sym_until] = 498,
        [anon_sym_if] = 498,
        [anon_sym_unless] = 498,
        [sym_comment] = 54,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [138] = {
        [sym__statement] = 500,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 516,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [139] = {
        [sym__statement] = 546,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 548,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [140] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_argument_list] = 368,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym__statement_block] = 368,
        [sym__do_block] = 368,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [sym__terminator] = 368,
        [aux_sym_class_declaration_repeat1] = 368,
        [anon_sym_do] = 368,
        [anon_sym_end] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_STAR] = 368,
        [anon_sym_AMP] = 368,
        [anon_sym_class] = 366,
        [anon_sym_LT] = 368,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 368,
    },
    [141] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [anon_sym_end] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
    },
    [142] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 552,
        [anon_sym_end] = 554,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [143] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [sym_comment] = 54,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [144] = {
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [sym_comment] = 54,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [145] = {
        [anon_sym_do] = 564,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [146] = {
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [anon_sym_end] = 84,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [147] = {
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [anon_sym_end] = 86,
        [anon_sym_COLON_COLON] = 566,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_LBRACK] = 568,
        [anon_sym_DOT] = 570,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [148] = {
        [sym__terminator] = 94,
        [aux_sym_program_repeat1] = 94,
        [anon_sym_end] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_while] = 94,
        [anon_sym_until] = 94,
        [anon_sym_if] = 94,
        [anon_sym_unless] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [149] = {
        [sym__terminator] = 96,
        [aux_sym_program_repeat1] = 96,
        [anon_sym_end] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_while] = 96,
        [anon_sym_until] = 96,
        [anon_sym_if] = 96,
        [anon_sym_unless] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [150] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_RPAREN] = 572,
        [anon_sym_while] = 572,
        [anon_sym_until] = 572,
        [anon_sym_if] = 572,
        [anon_sym_unless] = 572,
        [sym_comment] = 54,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [151] = {
        [sym__function_name] = 574,
        [anon_sym_PIPE] = 576,
        [anon_sym_STAR] = 576,
        [anon_sym_AMP] = 576,
        [anon_sym_LT] = 576,
        [sym_identifier] = 576,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 576,
        [anon_sym_CARET] = 576,
        [anon_sym_LT_EQ_GT] = 576,
        [anon_sym_EQ_EQ] = 576,
        [anon_sym_EQ_EQ_EQ] = 576,
        [anon_sym_EQ_TILDE] = 576,
        [anon_sym_GT] = 576,
        [anon_sym_GT_EQ] = 576,
        [anon_sym_LT_EQ] = 576,
        [anon_sym_PLUS] = 576,
        [anon_sym_DASH] = 576,
        [anon_sym_SLASH] = 576,
        [anon_sym_PERCENT] = 576,
        [anon_sym_STAR_STAR] = 576,
        [anon_sym_LT_LT] = 576,
        [anon_sym_GT_GT] = 576,
        [anon_sym_TILDE] = 576,
        [anon_sym_PLUS_AT] = 576,
        [anon_sym_DASH_AT] = 576,
        [anon_sym_LBRACK_RBRACK] = 576,
        [anon_sym_LBRACK_RBRACK_EQ] = 576,
        [sym__line_break] = 54,
    },
    [152] = {
        [sym__function_name] = 578,
        [anon_sym_PIPE] = 104,
        [anon_sym_STAR] = 104,
        [anon_sym_AMP] = 104,
        [anon_sym_LT] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 104,
        [anon_sym_CARET] = 104,
        [anon_sym_LT_EQ_GT] = 104,
        [anon_sym_EQ_EQ] = 104,
        [anon_sym_EQ_EQ_EQ] = 104,
        [anon_sym_EQ_TILDE] = 104,
        [anon_sym_GT] = 104,
        [anon_sym_GT_EQ] = 104,
        [anon_sym_LT_EQ] = 104,
        [anon_sym_PLUS] = 104,
        [anon_sym_DASH] = 104,
        [anon_sym_SLASH] = 104,
        [anon_sym_PERCENT] = 104,
        [anon_sym_STAR_STAR] = 104,
        [anon_sym_LT_LT] = 104,
        [anon_sym_GT_GT] = 104,
        [anon_sym_TILDE] = 104,
        [anon_sym_PLUS_AT] = 104,
        [anon_sym_DASH_AT] = 104,
        [anon_sym_LBRACK_RBRACK] = 104,
        [anon_sym_LBRACK_RBRACK_EQ] = 104,
        [sym__line_break] = 54,
    },
    [153] = {
        [sym__function_name] = 580,
        [anon_sym_PIPE] = 108,
        [anon_sym_STAR] = 108,
        [anon_sym_AMP] = 108,
        [anon_sym_LT] = 108,
        [sym_identifier] = 108,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 108,
        [anon_sym_CARET] = 108,
        [anon_sym_LT_EQ_GT] = 108,
        [anon_sym_EQ_EQ] = 108,
        [anon_sym_EQ_EQ_EQ] = 108,
        [anon_sym_EQ_TILDE] = 108,
        [anon_sym_GT] = 108,
        [anon_sym_GT_EQ] = 108,
        [anon_sym_LT_EQ] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_SLASH] = 108,
        [anon_sym_PERCENT] = 108,
        [anon_sym_STAR_STAR] = 108,
        [anon_sym_LT_LT] = 108,
        [anon_sym_GT_GT] = 108,
        [anon_sym_TILDE] = 108,
        [anon_sym_PLUS_AT] = 108,
        [anon_sym_DASH_AT] = 108,
        [anon_sym_LBRACK_RBRACK] = 108,
        [anon_sym_LBRACK_RBRACK_EQ] = 108,
        [sym__line_break] = 54,
    },
    [154] = {
        [sym__statement] = 582,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 584,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [155] = {
        [sym_identifier] = 586,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [156] = {
        [sym_identifier] = 588,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [157] = {
        [sym_identifier] = 590,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [158] = {
        [sym_condition] = 592,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [159] = {
        [sym_condition] = 594,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [160] = {
        [sym_condition] = 596,
        [sym__expression] = 184,
        [sym__argument] = 186,
        [sym__primary] = 188,
        [sym_scope_resolution_expression] = 190,
        [sym_subscript_expression] = 190,
        [sym_member_access] = 190,
        [sym__lhs] = 192,
        [sym__variable] = 190,
        [anon_sym_LPAREN] = 194,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_nil] = 198,
        [anon_sym_self] = 198,
        [sym_identifier] = 198,
        [sym_comment] = 54,
        [sym_symbol] = 186,
        [sym__line_break] = 54,
    },
    [161] = {
        [sym_condition] = 598,
        [sym__expression] = 202,
        [sym__argument] = 204,
        [sym__primary] = 206,
        [sym_scope_resolution_expression] = 208,
        [sym_subscript_expression] = 208,
        [sym_member_access] = 208,
        [sym__lhs] = 210,
        [sym__variable] = 208,
        [anon_sym_LPAREN] = 212,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [sym_identifier] = 216,
        [sym_comment] = 54,
        [sym_symbol] = 204,
        [sym__line_break] = 54,
    },
    [162] = {
        [sym__primary] = 218,
        [sym_scope_resolution_expression] = 220,
        [sym_subscript_expression] = 220,
        [sym_member_access] = 220,
        [sym__lhs] = 600,
        [sym__variable] = 220,
        [anon_sym_LPAREN] = 224,
        [anon_sym_COLON_COLON] = 226,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [163] = {
        [anon_sym_end] = 602,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [164] = {
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_while] = 254,
        [anon_sym_until] = 254,
        [anon_sym_if] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [165] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [sym_comment] = 54,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [166] = {
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_in] = 604,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [167] = {
        [sym__expression] = 606,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [168] = {
        [sym__statement_block] = 608,
        [sym__do_block] = 610,
        [sym__terminator] = 612,
        [anon_sym_do] = 614,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [169] = {
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [anon_sym_end] = 496,
        [anon_sym_while] = 496,
        [anon_sym_until] = 496,
        [anon_sym_if] = 496,
        [anon_sym_unless] = 496,
        [sym_comment] = 54,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [170] = {
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [anon_sym_end] = 498,
        [anon_sym_while] = 498,
        [anon_sym_until] = 498,
        [anon_sym_if] = 498,
        [anon_sym_unless] = 498,
        [sym_comment] = 54,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [171] = {
        [sym__statement] = 616,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 618,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [172] = {
        [sym__statement] = 620,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 622,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [173] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 626,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [174] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_end] = 572,
        [anon_sym_while] = 572,
        [anon_sym_until] = 572,
        [anon_sym_if] = 572,
        [anon_sym_unless] = 572,
        [sym_comment] = 54,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [175] = {
        [sym__statement] = 628,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [176] = {
        [anon_sym_end] = 630,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [177] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 632,
        [anon_sym_while] = 632,
        [anon_sym_until] = 632,
        [anon_sym_if] = 632,
        [anon_sym_unless] = 632,
        [sym_comment] = 54,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [178] = {
        [sym__expression] = 634,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_LPAREN] = 524,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [179] = {
        [sym__expression] = 636,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_LPAREN] = 524,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [180] = {
        [sym__expression] = 638,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_LPAREN] = 524,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [181] = {
        [sym__expression] = 640,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_LPAREN] = 524,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [182] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_while] = 370,
        [anon_sym_until] = 370,
        [anon_sym_if] = 370,
        [anon_sym_unless] = 370,
        [sym_comment] = 54,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [183] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_while] = 372,
        [anon_sym_until] = 372,
        [anon_sym_if] = 372,
        [anon_sym_unless] = 372,
        [sym_comment] = 54,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [184] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_while] = 374,
        [anon_sym_until] = 374,
        [anon_sym_if] = 374,
        [anon_sym_unless] = 374,
        [sym_comment] = 54,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [185] = {
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_end] = 376,
        [anon_sym_while] = 376,
        [anon_sym_until] = 376,
        [anon_sym_if] = 376,
        [anon_sym_unless] = 376,
        [sym_comment] = 54,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [186] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [sym_comment] = 54,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [187] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_end] = 382,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [188] = {
        [anon_sym_end] = 384,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [189] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 646,
        [anon_sym_end] = 648,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [190] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_while] = 650,
        [anon_sym_until] = 650,
        [anon_sym_if] = 650,
        [anon_sym_unless] = 650,
        [sym_comment] = 54,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [191] = {
        [anon_sym_end] = 652,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [192] = {
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_end] = 654,
        [anon_sym_while] = 654,
        [anon_sym_until] = 654,
        [anon_sym_if] = 654,
        [anon_sym_unless] = 654,
        [sym_comment] = 54,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [193] = {
        [sym__terminator] = 656,
        [aux_sym_program_repeat1] = 656,
        [anon_sym_end] = 656,
        [anon_sym_while] = 656,
        [anon_sym_until] = 656,
        [anon_sym_if] = 656,
        [anon_sym_unless] = 656,
        [sym_comment] = 54,
        [sym__line_break] = 656,
        [anon_sym_SEMI] = 656,
    },
    [194] = {
        [sym_then_block] = 658,
        [sym__then_else_block] = 660,
        [sym__terminator] = 662,
        [anon_sym_then] = 662,
        [sym_comment] = 54,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 666,
    },
    [195] = {
        [sym_then_block] = 668,
        [sym__then_else_block] = 668,
        [sym__terminator] = 668,
        [anon_sym_then] = 668,
        [sym_comment] = 54,
        [sym__line_break] = 668,
        [anon_sym_SEMI] = 668,
    },
    [196] = {
        [sym_then_block] = 84,
        [sym__then_else_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_then] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [197] = {
        [sym_then_block] = 86,
        [sym__then_else_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_COLON_COLON] = 670,
        [anon_sym_then] = 86,
        [anon_sym_LBRACK] = 672,
        [anon_sym_DOT] = 674,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [198] = {
        [sym_then_block] = 94,
        [sym__then_else_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_then] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [199] = {
        [sym_then_block] = 96,
        [sym__then_else_block] = 96,
        [sym__terminator] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_then] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [200] = {
        [sym__statement] = 676,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 678,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [201] = {
        [sym_identifier] = 680,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [202] = {
        [sym_then_block] = 254,
        [sym__then_else_block] = 254,
        [sym__terminator] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_then] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [203] = {
        [sym_then_block] = 276,
        [sym__then_else_block] = 276,
        [sym__terminator] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_then] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [204] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 682,
        [anon_sym_RPAREN] = 684,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [205] = {
        [sym_then_block] = 312,
        [sym__then_else_block] = 312,
        [sym__terminator] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_then] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [206] = {
        [anon_sym_RPAREN] = 686,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [207] = {
        [sym_then_block] = 356,
        [sym__then_else_block] = 356,
        [sym__terminator] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_then] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [208] = {
        [sym_then_block] = 378,
        [sym__then_else_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_then] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [209] = {
        [sym_identifier] = 688,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [210] = {
        [sym__argument] = 690,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 692,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [211] = {
        [sym_identifier] = 694,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [212] = {
        [sym_then_block] = 438,
        [sym__then_else_block] = 438,
        [sym__terminator] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_then] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [213] = {
        [aux_sym__call_arguments_repeat1] = 696,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 698,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [214] = {
        [sym_then_block] = 458,
        [sym__then_else_block] = 458,
        [sym__terminator] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_then] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [215] = {
        [anon_sym_RBRACK] = 700,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [216] = {
        [sym_then_block] = 482,
        [sym__then_else_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_then] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [217] = {
        [sym_then_block] = 490,
        [sym__then_else_block] = 490,
        [sym__terminator] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_then] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [218] = {
        [sym_then_block] = 492,
        [sym__then_else_block] = 492,
        [sym__terminator] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_then] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [219] = {
        [sym_else_block] = 702,
        [anon_sym_end] = 704,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [220] = {
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [anon_sym_end] = 708,
        [anon_sym_while] = 708,
        [anon_sym_until] = 708,
        [anon_sym_if] = 708,
        [anon_sym_unless] = 708,
        [sym_comment] = 54,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [221] = {
        [sym__statement] = 710,
        [sym__declaration] = 712,
        [sym_method_declaration] = 714,
        [sym_class_declaration] = 714,
        [sym_module_declaration] = 714,
        [sym_while_statement] = 712,
        [sym_until_statement] = 712,
        [sym_if_statement] = 712,
        [sym_unless_statement] = 712,
        [sym_for_statement] = 712,
        [sym_begin_statement] = 712,
        [sym_if_modifier] = 712,
        [sym_unless_modifier] = 712,
        [sym_while_modifier] = 712,
        [sym_until_modifier] = 712,
        [sym_else_block] = 716,
        [sym__call] = 718,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 712,
        [sym__argument] = 720,
        [sym__primary] = 722,
        [sym_scope_resolution_expression] = 724,
        [sym_subscript_expression] = 724,
        [sym_member_access] = 724,
        [sym__lhs] = 726,
        [sym__variable] = 724,
        [anon_sym_end] = 716,
        [anon_sym_undef] = 728,
        [anon_sym_alias] = 730,
        [anon_sym_def] = 732,
        [anon_sym_LPAREN] = 734,
        [anon_sym_class] = 736,
        [anon_sym_COLON_COLON] = 738,
        [anon_sym_module] = 740,
        [anon_sym_while] = 742,
        [anon_sym_until] = 744,
        [anon_sym_if] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_for] = 750,
        [anon_sym_begin] = 752,
        [anon_sym_else] = 716,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 754,
        [anon_sym_self] = 754,
        [sym_identifier] = 754,
        [sym_comment] = 54,
        [sym_symbol] = 720,
        [sym__line_break] = 54,
    },
    [222] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym_then_block] = 368,
        [sym_else_block] = 366,
        [sym__then_else_block] = 368,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [sym__terminator] = 368,
        [anon_sym_end] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_then] = 368,
        [anon_sym_else] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 368,
    },
    [223] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym_else_block] = 366,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [anon_sym_end] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_else] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
    },
    [224] = {
        [sym_else_block] = 756,
        [sym__terminator] = 758,
        [aux_sym_program_repeat1] = 760,
        [anon_sym_end] = 756,
        [anon_sym_while] = 762,
        [anon_sym_until] = 764,
        [anon_sym_if] = 766,
        [anon_sym_unless] = 768,
        [anon_sym_else] = 756,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [225] = {
        [sym_else_block] = 76,
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [anon_sym_else] = 76,
        [sym_comment] = 54,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [226] = {
        [sym_else_block] = 78,
        [sym__terminator] = 78,
        [aux_sym_program_repeat1] = 78,
        [anon_sym_end] = 78,
        [anon_sym_while] = 78,
        [anon_sym_until] = 78,
        [anon_sym_if] = 78,
        [anon_sym_unless] = 78,
        [anon_sym_else] = 78,
        [sym_comment] = 54,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [227] = {
        [anon_sym_do] = 770,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [228] = {
        [sym_else_block] = 84,
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [anon_sym_end] = 84,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_else] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [229] = {
        [sym_else_block] = 86,
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [anon_sym_end] = 86,
        [anon_sym_COLON_COLON] = 772,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_else] = 86,
        [anon_sym_LBRACK] = 774,
        [anon_sym_DOT] = 776,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [230] = {
        [sym_else_block] = 94,
        [sym__terminator] = 94,
        [aux_sym_program_repeat1] = 94,
        [anon_sym_end] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_while] = 94,
        [anon_sym_until] = 94,
        [anon_sym_if] = 94,
        [anon_sym_unless] = 94,
        [anon_sym_else] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [231] = {
        [sym_else_block] = 96,
        [sym__terminator] = 96,
        [aux_sym_program_repeat1] = 96,
        [anon_sym_end] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_while] = 96,
        [anon_sym_until] = 96,
        [anon_sym_if] = 96,
        [anon_sym_unless] = 96,
        [anon_sym_else] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [232] = {
        [sym__function_name] = 778,
        [anon_sym_PIPE] = 780,
        [anon_sym_STAR] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_LT] = 780,
        [sym_identifier] = 780,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 780,
        [anon_sym_CARET] = 780,
        [anon_sym_LT_EQ_GT] = 780,
        [anon_sym_EQ_EQ] = 780,
        [anon_sym_EQ_EQ_EQ] = 780,
        [anon_sym_EQ_TILDE] = 780,
        [anon_sym_GT] = 780,
        [anon_sym_GT_EQ] = 780,
        [anon_sym_LT_EQ] = 780,
        [anon_sym_PLUS] = 780,
        [anon_sym_DASH] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_STAR_STAR] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_TILDE] = 780,
        [anon_sym_PLUS_AT] = 780,
        [anon_sym_DASH_AT] = 780,
        [anon_sym_LBRACK_RBRACK] = 780,
        [anon_sym_LBRACK_RBRACK_EQ] = 780,
        [sym__line_break] = 54,
    },
    [233] = {
        [sym__function_name] = 782,
        [anon_sym_PIPE] = 104,
        [anon_sym_STAR] = 104,
        [anon_sym_AMP] = 104,
        [anon_sym_LT] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 104,
        [anon_sym_CARET] = 104,
        [anon_sym_LT_EQ_GT] = 104,
        [anon_sym_EQ_EQ] = 104,
        [anon_sym_EQ_EQ_EQ] = 104,
        [anon_sym_EQ_TILDE] = 104,
        [anon_sym_GT] = 104,
        [anon_sym_GT_EQ] = 104,
        [anon_sym_LT_EQ] = 104,
        [anon_sym_PLUS] = 104,
        [anon_sym_DASH] = 104,
        [anon_sym_SLASH] = 104,
        [anon_sym_PERCENT] = 104,
        [anon_sym_STAR_STAR] = 104,
        [anon_sym_LT_LT] = 104,
        [anon_sym_GT_GT] = 104,
        [anon_sym_TILDE] = 104,
        [anon_sym_PLUS_AT] = 104,
        [anon_sym_DASH_AT] = 104,
        [anon_sym_LBRACK_RBRACK] = 104,
        [anon_sym_LBRACK_RBRACK_EQ] = 104,
        [sym__line_break] = 54,
    },
    [234] = {
        [sym__function_name] = 784,
        [anon_sym_PIPE] = 108,
        [anon_sym_STAR] = 108,
        [anon_sym_AMP] = 108,
        [anon_sym_LT] = 108,
        [sym_identifier] = 108,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 108,
        [anon_sym_CARET] = 108,
        [anon_sym_LT_EQ_GT] = 108,
        [anon_sym_EQ_EQ] = 108,
        [anon_sym_EQ_EQ_EQ] = 108,
        [anon_sym_EQ_TILDE] = 108,
        [anon_sym_GT] = 108,
        [anon_sym_GT_EQ] = 108,
        [anon_sym_LT_EQ] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_SLASH] = 108,
        [anon_sym_PERCENT] = 108,
        [anon_sym_STAR_STAR] = 108,
        [anon_sym_LT_LT] = 108,
        [anon_sym_GT_GT] = 108,
        [anon_sym_TILDE] = 108,
        [anon_sym_PLUS_AT] = 108,
        [anon_sym_DASH_AT] = 108,
        [anon_sym_LBRACK_RBRACK] = 108,
        [anon_sym_LBRACK_RBRACK_EQ] = 108,
        [sym__line_break] = 54,
    },
    [235] = {
        [sym__statement] = 786,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 788,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [236] = {
        [sym_identifier] = 790,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [237] = {
        [sym_identifier] = 792,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [238] = {
        [sym_identifier] = 794,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [239] = {
        [sym_condition] = 796,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [240] = {
        [sym_condition] = 798,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [241] = {
        [sym_condition] = 800,
        [sym__expression] = 184,
        [sym__argument] = 186,
        [sym__primary] = 188,
        [sym_scope_resolution_expression] = 190,
        [sym_subscript_expression] = 190,
        [sym_member_access] = 190,
        [sym__lhs] = 192,
        [sym__variable] = 190,
        [anon_sym_LPAREN] = 194,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_nil] = 198,
        [anon_sym_self] = 198,
        [sym_identifier] = 198,
        [sym_comment] = 54,
        [sym_symbol] = 186,
        [sym__line_break] = 54,
    },
    [242] = {
        [sym_condition] = 802,
        [sym__expression] = 202,
        [sym__argument] = 204,
        [sym__primary] = 206,
        [sym_scope_resolution_expression] = 208,
        [sym_subscript_expression] = 208,
        [sym_member_access] = 208,
        [sym__lhs] = 210,
        [sym__variable] = 208,
        [anon_sym_LPAREN] = 212,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [sym_identifier] = 216,
        [sym_comment] = 54,
        [sym_symbol] = 204,
        [sym__line_break] = 54,
    },
    [243] = {
        [sym__primary] = 218,
        [sym_scope_resolution_expression] = 220,
        [sym_subscript_expression] = 220,
        [sym_member_access] = 220,
        [sym__lhs] = 804,
        [sym__variable] = 220,
        [anon_sym_LPAREN] = 224,
        [anon_sym_COLON_COLON] = 226,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [244] = {
        [anon_sym_end] = 806,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [245] = {
        [sym_else_block] = 254,
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_while] = 254,
        [anon_sym_until] = 254,
        [anon_sym_if] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_else] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [246] = {
        [sym_else_block] = 332,
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [anon_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [anon_sym_else] = 332,
        [sym_comment] = 54,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [247] = {
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_in] = 808,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [248] = {
        [sym__expression] = 810,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [249] = {
        [sym__statement_block] = 812,
        [sym__do_block] = 814,
        [sym__terminator] = 816,
        [anon_sym_do] = 818,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [250] = {
        [sym_else_block] = 496,
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [anon_sym_end] = 496,
        [anon_sym_while] = 496,
        [anon_sym_until] = 496,
        [anon_sym_if] = 496,
        [anon_sym_unless] = 496,
        [anon_sym_else] = 496,
        [sym_comment] = 54,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [251] = {
        [sym_else_block] = 498,
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [anon_sym_end] = 498,
        [anon_sym_while] = 498,
        [anon_sym_until] = 498,
        [anon_sym_if] = 498,
        [anon_sym_unless] = 498,
        [anon_sym_else] = 498,
        [sym_comment] = 54,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [252] = {
        [sym__statement] = 820,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 822,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [253] = {
        [sym__statement] = 824,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 826,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [254] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 828,
        [anon_sym_end] = 830,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [255] = {
        [sym_else_block] = 572,
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_end] = 572,
        [anon_sym_while] = 572,
        [anon_sym_until] = 572,
        [anon_sym_if] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_else] = 572,
        [sym_comment] = 54,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [256] = {
        [anon_sym_end] = 832,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [257] = {
        [sym_else_block] = 632,
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 632,
        [anon_sym_while] = 632,
        [anon_sym_until] = 632,
        [anon_sym_if] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_else] = 632,
        [sym_comment] = 54,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [258] = {
        [sym_else_block] = 642,
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [anon_sym_else] = 642,
        [sym_comment] = 54,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [259] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 834,
        [anon_sym_end] = 836,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [260] = {
        [sym_else_block] = 650,
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_while] = 650,
        [anon_sym_until] = 650,
        [anon_sym_if] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_else] = 650,
        [sym_comment] = 54,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [261] = {
        [anon_sym_end] = 838,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [262] = {
        [sym_else_block] = 654,
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_end] = 654,
        [anon_sym_while] = 654,
        [anon_sym_until] = 654,
        [anon_sym_if] = 654,
        [anon_sym_unless] = 654,
        [anon_sym_else] = 654,
        [sym_comment] = 54,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [263] = {
        [sym_else_block] = 656,
        [sym__terminator] = 656,
        [aux_sym_program_repeat1] = 656,
        [anon_sym_end] = 656,
        [anon_sym_while] = 656,
        [anon_sym_until] = 656,
        [anon_sym_if] = 656,
        [anon_sym_unless] = 656,
        [anon_sym_else] = 656,
        [sym_comment] = 54,
        [sym__line_break] = 656,
        [anon_sym_SEMI] = 656,
    },
    [264] = {
        [sym_then_block] = 840,
        [sym__then_else_block] = 842,
        [sym__terminator] = 662,
        [anon_sym_then] = 662,
        [sym_comment] = 54,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 666,
    },
    [265] = {
        [sym_else_block] = 844,
        [anon_sym_end] = 846,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [266] = {
        [sym_else_block] = 708,
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [anon_sym_end] = 708,
        [anon_sym_while] = 708,
        [anon_sym_until] = 708,
        [anon_sym_if] = 708,
        [anon_sym_unless] = 708,
        [anon_sym_else] = 708,
        [sym_comment] = 54,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [267] = {
        [anon_sym_end] = 848,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [268] = {
        [sym_else_block] = 850,
        [sym__terminator] = 850,
        [aux_sym_program_repeat1] = 850,
        [anon_sym_end] = 850,
        [anon_sym_while] = 850,
        [anon_sym_until] = 850,
        [anon_sym_if] = 850,
        [anon_sym_unless] = 850,
        [anon_sym_else] = 850,
        [sym_comment] = 54,
        [sym__line_break] = 850,
        [anon_sym_SEMI] = 850,
    },
    [269] = {
        [sym__statement] = 852,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 854,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [270] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 856,
        [anon_sym_end] = 858,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [271] = {
        [anon_sym_end] = 860,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [272] = {
        [sym_else_block] = 862,
        [sym__terminator] = 862,
        [aux_sym_program_repeat1] = 862,
        [anon_sym_end] = 862,
        [anon_sym_while] = 862,
        [anon_sym_until] = 862,
        [anon_sym_if] = 862,
        [anon_sym_unless] = 862,
        [anon_sym_else] = 862,
        [sym_comment] = 54,
        [sym__line_break] = 862,
        [anon_sym_SEMI] = 862,
    },
    [273] = {
        [sym_then_block] = 864,
        [sym__then_elsif_else_block] = 866,
        [sym__terminator] = 868,
        [anon_sym_then] = 868,
        [sym_comment] = 54,
        [sym__line_break] = 870,
        [anon_sym_SEMI] = 872,
    },
    [274] = {
        [sym_then_block] = 668,
        [sym__then_elsif_else_block] = 668,
        [sym__terminator] = 668,
        [anon_sym_then] = 668,
        [sym_comment] = 54,
        [sym__line_break] = 668,
        [anon_sym_SEMI] = 668,
    },
    [275] = {
        [sym_then_block] = 84,
        [sym__then_elsif_else_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_then] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [276] = {
        [sym_then_block] = 86,
        [sym__then_elsif_else_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_COLON_COLON] = 874,
        [anon_sym_then] = 86,
        [anon_sym_LBRACK] = 876,
        [anon_sym_DOT] = 878,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [277] = {
        [sym_then_block] = 94,
        [sym__then_elsif_else_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_then] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [278] = {
        [sym_then_block] = 96,
        [sym__then_elsif_else_block] = 96,
        [sym__terminator] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_then] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [279] = {
        [sym__statement] = 880,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 882,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [280] = {
        [sym_identifier] = 884,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [281] = {
        [sym_then_block] = 254,
        [sym__then_elsif_else_block] = 254,
        [sym__terminator] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_then] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [282] = {
        [sym_then_block] = 276,
        [sym__then_elsif_else_block] = 276,
        [sym__terminator] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_then] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [283] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 886,
        [anon_sym_RPAREN] = 888,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [284] = {
        [sym_then_block] = 312,
        [sym__then_elsif_else_block] = 312,
        [sym__terminator] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_then] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [285] = {
        [anon_sym_RPAREN] = 890,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [286] = {
        [sym_then_block] = 356,
        [sym__then_elsif_else_block] = 356,
        [sym__terminator] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_then] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [287] = {
        [sym_then_block] = 378,
        [sym__then_elsif_else_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_then] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [288] = {
        [sym_identifier] = 892,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [289] = {
        [sym__argument] = 894,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 896,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [290] = {
        [sym_identifier] = 898,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [291] = {
        [sym_then_block] = 438,
        [sym__then_elsif_else_block] = 438,
        [sym__terminator] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_then] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [292] = {
        [aux_sym__call_arguments_repeat1] = 900,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 902,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [293] = {
        [sym_then_block] = 458,
        [sym__then_elsif_else_block] = 458,
        [sym__terminator] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_then] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [294] = {
        [anon_sym_RBRACK] = 904,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [295] = {
        [sym_then_block] = 482,
        [sym__then_elsif_else_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_then] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [296] = {
        [sym_then_block] = 490,
        [sym__then_elsif_else_block] = 490,
        [sym__terminator] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_then] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [297] = {
        [sym_then_block] = 492,
        [sym__then_elsif_else_block] = 492,
        [sym__terminator] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_then] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [298] = {
        [sym_else_block] = 906,
        [aux_sym__then_elsif_else_block_repeat1] = 908,
        [anon_sym_end] = 910,
        [anon_sym_else] = 706,
        [anon_sym_elsif] = 912,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [299] = {
        [sym_else_block] = 914,
        [sym__terminator] = 914,
        [aux_sym_program_repeat1] = 914,
        [anon_sym_end] = 914,
        [anon_sym_while] = 914,
        [anon_sym_until] = 914,
        [anon_sym_if] = 914,
        [anon_sym_unless] = 914,
        [anon_sym_else] = 914,
        [sym_comment] = 54,
        [sym__line_break] = 914,
        [anon_sym_SEMI] = 914,
    },
    [300] = {
        [sym__statement] = 916,
        [sym__declaration] = 918,
        [sym_method_declaration] = 920,
        [sym_class_declaration] = 920,
        [sym_module_declaration] = 920,
        [sym_while_statement] = 918,
        [sym_until_statement] = 918,
        [sym_if_statement] = 918,
        [sym_unless_statement] = 918,
        [sym_for_statement] = 918,
        [sym_begin_statement] = 918,
        [sym_if_modifier] = 918,
        [sym_unless_modifier] = 918,
        [sym_while_modifier] = 918,
        [sym_until_modifier] = 918,
        [sym_else_block] = 716,
        [sym__call] = 922,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 918,
        [sym__argument] = 924,
        [sym__primary] = 926,
        [sym_scope_resolution_expression] = 928,
        [sym_subscript_expression] = 928,
        [sym_member_access] = 928,
        [sym__lhs] = 930,
        [sym__variable] = 928,
        [aux_sym__then_elsif_else_block_repeat1] = 716,
        [anon_sym_end] = 716,
        [anon_sym_undef] = 932,
        [anon_sym_alias] = 934,
        [anon_sym_def] = 936,
        [anon_sym_LPAREN] = 938,
        [anon_sym_class] = 940,
        [anon_sym_COLON_COLON] = 942,
        [anon_sym_module] = 944,
        [anon_sym_while] = 946,
        [anon_sym_until] = 948,
        [anon_sym_if] = 950,
        [anon_sym_unless] = 952,
        [anon_sym_for] = 954,
        [anon_sym_begin] = 956,
        [anon_sym_else] = 716,
        [anon_sym_elsif] = 716,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 958,
        [anon_sym_self] = 958,
        [sym_identifier] = 958,
        [sym_comment] = 54,
        [sym_symbol] = 924,
        [sym__line_break] = 54,
    },
    [301] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym_then_block] = 368,
        [sym_else_block] = 366,
        [sym__then_elsif_else_block] = 368,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [sym__terminator] = 368,
        [aux_sym__then_elsif_else_block_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_then] = 368,
        [anon_sym_else] = 366,
        [anon_sym_elsif] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 368,
    },
    [302] = {
        [sym__statement] = 366,
        [sym__declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_class_declaration] = 366,
        [sym_module_declaration] = 366,
        [sym_while_statement] = 366,
        [sym_until_statement] = 366,
        [sym_if_statement] = 366,
        [sym_unless_statement] = 366,
        [sym_for_statement] = 366,
        [sym_begin_statement] = 366,
        [sym_if_modifier] = 366,
        [sym_unless_modifier] = 366,
        [sym_while_modifier] = 366,
        [sym_until_modifier] = 366,
        [sym_else_block] = 366,
        [sym__call] = 366,
        [sym__command] = 366,
        [sym__function_call] = 366,
        [sym__expression] = 366,
        [sym__argument] = 366,
        [sym__primary] = 366,
        [sym_scope_resolution_expression] = 366,
        [sym_subscript_expression] = 366,
        [sym_member_access] = 366,
        [sym__lhs] = 366,
        [sym__variable] = 366,
        [aux_sym__then_elsif_else_block_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_undef] = 366,
        [anon_sym_alias] = 366,
        [anon_sym_def] = 366,
        [anon_sym_LPAREN] = 366,
        [anon_sym_class] = 366,
        [anon_sym_COLON_COLON] = 366,
        [anon_sym_module] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_for] = 366,
        [anon_sym_begin] = 366,
        [anon_sym_else] = 366,
        [anon_sym_elsif] = 366,
        [anon_sym_super] = 366,
        [anon_sym_nil] = 366,
        [anon_sym_self] = 366,
        [sym_identifier] = 366,
        [sym_comment] = 54,
        [sym_symbol] = 366,
        [sym__line_break] = 54,
    },
    [303] = {
        [sym_else_block] = 756,
        [sym__terminator] = 960,
        [aux_sym_program_repeat1] = 962,
        [aux_sym__then_elsif_else_block_repeat1] = 756,
        [anon_sym_end] = 756,
        [anon_sym_while] = 964,
        [anon_sym_until] = 966,
        [anon_sym_if] = 968,
        [anon_sym_unless] = 970,
        [anon_sym_else] = 756,
        [anon_sym_elsif] = 756,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [304] = {
        [sym_else_block] = 76,
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [aux_sym__then_elsif_else_block_repeat1] = 76,
        [anon_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [anon_sym_else] = 76,
        [anon_sym_elsif] = 76,
        [sym_comment] = 54,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [305] = {
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
        [sym_comment] = 54,
        [sym__line_break] = 78,
        [anon_sym_SEMI] = 78,
    },
    [306] = {
        [anon_sym_do] = 972,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [307] = {
        [sym_else_block] = 84,
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [aux_sym__then_elsif_else_block_repeat1] = 84,
        [anon_sym_end] = 84,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_else] = 84,
        [anon_sym_elsif] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [308] = {
        [sym_else_block] = 86,
        [sym__terminator] = 86,
        [aux_sym_program_repeat1] = 86,
        [aux_sym__then_elsif_else_block_repeat1] = 86,
        [anon_sym_end] = 86,
        [anon_sym_COLON_COLON] = 974,
        [anon_sym_while] = 86,
        [anon_sym_until] = 86,
        [anon_sym_if] = 86,
        [anon_sym_unless] = 86,
        [anon_sym_else] = 86,
        [anon_sym_elsif] = 86,
        [anon_sym_LBRACK] = 976,
        [anon_sym_DOT] = 978,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [309] = {
        [sym_else_block] = 94,
        [sym__terminator] = 94,
        [aux_sym_program_repeat1] = 94,
        [aux_sym__then_elsif_else_block_repeat1] = 94,
        [anon_sym_end] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_while] = 94,
        [anon_sym_until] = 94,
        [anon_sym_if] = 94,
        [anon_sym_unless] = 94,
        [anon_sym_else] = 94,
        [anon_sym_elsif] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [310] = {
        [sym_else_block] = 96,
        [sym__terminator] = 96,
        [aux_sym_program_repeat1] = 96,
        [aux_sym__then_elsif_else_block_repeat1] = 96,
        [anon_sym_end] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_while] = 96,
        [anon_sym_until] = 96,
        [anon_sym_if] = 96,
        [anon_sym_unless] = 96,
        [anon_sym_else] = 96,
        [anon_sym_elsif] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [311] = {
        [sym__function_name] = 980,
        [anon_sym_PIPE] = 982,
        [anon_sym_STAR] = 982,
        [anon_sym_AMP] = 982,
        [anon_sym_LT] = 982,
        [sym_identifier] = 982,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 982,
        [anon_sym_CARET] = 982,
        [anon_sym_LT_EQ_GT] = 982,
        [anon_sym_EQ_EQ] = 982,
        [anon_sym_EQ_EQ_EQ] = 982,
        [anon_sym_EQ_TILDE] = 982,
        [anon_sym_GT] = 982,
        [anon_sym_GT_EQ] = 982,
        [anon_sym_LT_EQ] = 982,
        [anon_sym_PLUS] = 982,
        [anon_sym_DASH] = 982,
        [anon_sym_SLASH] = 982,
        [anon_sym_PERCENT] = 982,
        [anon_sym_STAR_STAR] = 982,
        [anon_sym_LT_LT] = 982,
        [anon_sym_GT_GT] = 982,
        [anon_sym_TILDE] = 982,
        [anon_sym_PLUS_AT] = 982,
        [anon_sym_DASH_AT] = 982,
        [anon_sym_LBRACK_RBRACK] = 982,
        [anon_sym_LBRACK_RBRACK_EQ] = 982,
        [sym__line_break] = 54,
    },
    [312] = {
        [sym__function_name] = 984,
        [anon_sym_PIPE] = 104,
        [anon_sym_STAR] = 104,
        [anon_sym_AMP] = 104,
        [anon_sym_LT] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 104,
        [anon_sym_CARET] = 104,
        [anon_sym_LT_EQ_GT] = 104,
        [anon_sym_EQ_EQ] = 104,
        [anon_sym_EQ_EQ_EQ] = 104,
        [anon_sym_EQ_TILDE] = 104,
        [anon_sym_GT] = 104,
        [anon_sym_GT_EQ] = 104,
        [anon_sym_LT_EQ] = 104,
        [anon_sym_PLUS] = 104,
        [anon_sym_DASH] = 104,
        [anon_sym_SLASH] = 104,
        [anon_sym_PERCENT] = 104,
        [anon_sym_STAR_STAR] = 104,
        [anon_sym_LT_LT] = 104,
        [anon_sym_GT_GT] = 104,
        [anon_sym_TILDE] = 104,
        [anon_sym_PLUS_AT] = 104,
        [anon_sym_DASH_AT] = 104,
        [anon_sym_LBRACK_RBRACK] = 104,
        [anon_sym_LBRACK_RBRACK_EQ] = 104,
        [sym__line_break] = 54,
    },
    [313] = {
        [sym__function_name] = 986,
        [anon_sym_PIPE] = 108,
        [anon_sym_STAR] = 108,
        [anon_sym_AMP] = 108,
        [anon_sym_LT] = 108,
        [sym_identifier] = 108,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 108,
        [anon_sym_CARET] = 108,
        [anon_sym_LT_EQ_GT] = 108,
        [anon_sym_EQ_EQ] = 108,
        [anon_sym_EQ_EQ_EQ] = 108,
        [anon_sym_EQ_TILDE] = 108,
        [anon_sym_GT] = 108,
        [anon_sym_GT_EQ] = 108,
        [anon_sym_LT_EQ] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_SLASH] = 108,
        [anon_sym_PERCENT] = 108,
        [anon_sym_STAR_STAR] = 108,
        [anon_sym_LT_LT] = 108,
        [anon_sym_GT_GT] = 108,
        [anon_sym_TILDE] = 108,
        [anon_sym_PLUS_AT] = 108,
        [anon_sym_DASH_AT] = 108,
        [anon_sym_LBRACK_RBRACK] = 108,
        [anon_sym_LBRACK_RBRACK_EQ] = 108,
        [sym__line_break] = 54,
    },
    [314] = {
        [sym__statement] = 988,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 990,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [315] = {
        [sym_identifier] = 992,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [316] = {
        [sym_identifier] = 994,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [317] = {
        [sym_identifier] = 996,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [318] = {
        [sym_condition] = 998,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [319] = {
        [sym_condition] = 1000,
        [sym__expression] = 164,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [320] = {
        [sym_condition] = 1002,
        [sym__expression] = 184,
        [sym__argument] = 186,
        [sym__primary] = 188,
        [sym_scope_resolution_expression] = 190,
        [sym_subscript_expression] = 190,
        [sym_member_access] = 190,
        [sym__lhs] = 192,
        [sym__variable] = 190,
        [anon_sym_LPAREN] = 194,
        [anon_sym_COLON_COLON] = 196,
        [anon_sym_nil] = 198,
        [anon_sym_self] = 198,
        [sym_identifier] = 198,
        [sym_comment] = 54,
        [sym_symbol] = 186,
        [sym__line_break] = 54,
    },
    [321] = {
        [sym_condition] = 1004,
        [sym__expression] = 202,
        [sym__argument] = 204,
        [sym__primary] = 206,
        [sym_scope_resolution_expression] = 208,
        [sym_subscript_expression] = 208,
        [sym_member_access] = 208,
        [sym__lhs] = 210,
        [sym__variable] = 208,
        [anon_sym_LPAREN] = 212,
        [anon_sym_COLON_COLON] = 214,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [sym_identifier] = 216,
        [sym_comment] = 54,
        [sym_symbol] = 204,
        [sym__line_break] = 54,
    },
    [322] = {
        [sym__primary] = 218,
        [sym_scope_resolution_expression] = 220,
        [sym_subscript_expression] = 220,
        [sym_member_access] = 220,
        [sym__lhs] = 1006,
        [sym__variable] = 220,
        [anon_sym_LPAREN] = 224,
        [anon_sym_COLON_COLON] = 226,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [323] = {
        [anon_sym_end] = 1008,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [324] = {
        [sym_else_block] = 254,
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [aux_sym__then_elsif_else_block_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_while] = 254,
        [anon_sym_until] = 254,
        [anon_sym_if] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_else] = 254,
        [anon_sym_elsif] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [325] = {
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
        [sym_comment] = 54,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [326] = {
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_in] = 1010,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [327] = {
        [sym__expression] = 1012,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [328] = {
        [sym__statement_block] = 1014,
        [sym__do_block] = 1016,
        [sym__terminator] = 1018,
        [anon_sym_do] = 1020,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [329] = {
        [sym_else_block] = 496,
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [aux_sym__then_elsif_else_block_repeat1] = 496,
        [anon_sym_end] = 496,
        [anon_sym_while] = 496,
        [anon_sym_until] = 496,
        [anon_sym_if] = 496,
        [anon_sym_unless] = 496,
        [anon_sym_else] = 496,
        [anon_sym_elsif] = 496,
        [sym_comment] = 54,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [330] = {
        [sym_else_block] = 498,
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [aux_sym__then_elsif_else_block_repeat1] = 498,
        [anon_sym_end] = 498,
        [anon_sym_while] = 498,
        [anon_sym_until] = 498,
        [anon_sym_if] = 498,
        [anon_sym_unless] = 498,
        [anon_sym_else] = 498,
        [anon_sym_elsif] = 498,
        [sym_comment] = 54,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [331] = {
        [sym__statement] = 1022,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1024,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [332] = {
        [sym__statement] = 1026,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1028,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [333] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1030,
        [anon_sym_end] = 1032,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [334] = {
        [sym_else_block] = 572,
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [aux_sym__then_elsif_else_block_repeat1] = 572,
        [anon_sym_end] = 572,
        [anon_sym_while] = 572,
        [anon_sym_until] = 572,
        [anon_sym_if] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_else] = 572,
        [anon_sym_elsif] = 572,
        [sym_comment] = 54,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [335] = {
        [anon_sym_end] = 1034,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [336] = {
        [sym_else_block] = 632,
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [aux_sym__then_elsif_else_block_repeat1] = 632,
        [anon_sym_end] = 632,
        [anon_sym_while] = 632,
        [anon_sym_until] = 632,
        [anon_sym_if] = 632,
        [anon_sym_unless] = 632,
        [anon_sym_else] = 632,
        [anon_sym_elsif] = 632,
        [sym_comment] = 54,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [337] = {
        [sym_else_block] = 642,
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [aux_sym__then_elsif_else_block_repeat1] = 642,
        [anon_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [anon_sym_else] = 642,
        [anon_sym_elsif] = 642,
        [sym_comment] = 54,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [338] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1036,
        [anon_sym_end] = 1038,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [339] = {
        [sym_else_block] = 650,
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [aux_sym__then_elsif_else_block_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_while] = 650,
        [anon_sym_until] = 650,
        [anon_sym_if] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_else] = 650,
        [anon_sym_elsif] = 650,
        [sym_comment] = 54,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [340] = {
        [anon_sym_end] = 1040,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [341] = {
        [sym_else_block] = 654,
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [aux_sym__then_elsif_else_block_repeat1] = 654,
        [anon_sym_end] = 654,
        [anon_sym_while] = 654,
        [anon_sym_until] = 654,
        [anon_sym_if] = 654,
        [anon_sym_unless] = 654,
        [anon_sym_else] = 654,
        [anon_sym_elsif] = 654,
        [sym_comment] = 54,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [342] = {
        [sym_else_block] = 656,
        [sym__terminator] = 656,
        [aux_sym_program_repeat1] = 656,
        [aux_sym__then_elsif_else_block_repeat1] = 656,
        [anon_sym_end] = 656,
        [anon_sym_while] = 656,
        [anon_sym_until] = 656,
        [anon_sym_if] = 656,
        [anon_sym_unless] = 656,
        [anon_sym_else] = 656,
        [anon_sym_elsif] = 656,
        [sym_comment] = 54,
        [sym__line_break] = 656,
        [anon_sym_SEMI] = 656,
    },
    [343] = {
        [sym_then_block] = 1042,
        [sym__then_else_block] = 1044,
        [sym__terminator] = 662,
        [anon_sym_then] = 662,
        [sym_comment] = 54,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 666,
    },
    [344] = {
        [sym_else_block] = 1046,
        [anon_sym_end] = 1048,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [345] = {
        [sym_else_block] = 708,
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [aux_sym__then_elsif_else_block_repeat1] = 708,
        [anon_sym_end] = 708,
        [anon_sym_while] = 708,
        [anon_sym_until] = 708,
        [anon_sym_if] = 708,
        [anon_sym_unless] = 708,
        [anon_sym_else] = 708,
        [anon_sym_elsif] = 708,
        [sym_comment] = 54,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [346] = {
        [anon_sym_end] = 1050,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [347] = {
        [sym_else_block] = 850,
        [sym__terminator] = 850,
        [aux_sym_program_repeat1] = 850,
        [aux_sym__then_elsif_else_block_repeat1] = 850,
        [anon_sym_end] = 850,
        [anon_sym_while] = 850,
        [anon_sym_until] = 850,
        [anon_sym_if] = 850,
        [anon_sym_unless] = 850,
        [anon_sym_else] = 850,
        [anon_sym_elsif] = 850,
        [sym_comment] = 54,
        [sym__line_break] = 850,
        [anon_sym_SEMI] = 850,
    },
    [348] = {
        [sym_else_block] = 862,
        [sym__terminator] = 862,
        [aux_sym_program_repeat1] = 862,
        [aux_sym__then_elsif_else_block_repeat1] = 862,
        [anon_sym_end] = 862,
        [anon_sym_while] = 862,
        [anon_sym_until] = 862,
        [anon_sym_if] = 862,
        [anon_sym_unless] = 862,
        [anon_sym_else] = 862,
        [anon_sym_elsif] = 862,
        [sym_comment] = 54,
        [sym__line_break] = 862,
        [anon_sym_SEMI] = 862,
    },
    [349] = {
        [sym_then_block] = 1052,
        [sym__then_elsif_else_block] = 1054,
        [sym__terminator] = 868,
        [anon_sym_then] = 868,
        [sym_comment] = 54,
        [sym__line_break] = 870,
        [anon_sym_SEMI] = 872,
    },
    [350] = {
        [sym_else_block] = 1056,
        [aux_sym__then_elsif_else_block_repeat1] = 1058,
        [anon_sym_end] = 1060,
        [anon_sym_else] = 706,
        [anon_sym_elsif] = 912,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [351] = {
        [sym_else_block] = 914,
        [sym__terminator] = 914,
        [aux_sym_program_repeat1] = 914,
        [aux_sym__then_elsif_else_block_repeat1] = 914,
        [anon_sym_end] = 914,
        [anon_sym_while] = 914,
        [anon_sym_until] = 914,
        [anon_sym_if] = 914,
        [anon_sym_unless] = 914,
        [anon_sym_else] = 914,
        [anon_sym_elsif] = 914,
        [sym_comment] = 54,
        [sym__line_break] = 914,
        [anon_sym_SEMI] = 914,
    },
    [352] = {
        [anon_sym_end] = 1062,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [353] = {
        [sym_else_block] = 1064,
        [anon_sym_end] = 1062,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [354] = {
        [sym_else_block] = 1066,
        [sym__terminator] = 1066,
        [aux_sym_program_repeat1] = 1066,
        [aux_sym__then_elsif_else_block_repeat1] = 1066,
        [anon_sym_end] = 1066,
        [anon_sym_while] = 1066,
        [anon_sym_until] = 1066,
        [anon_sym_if] = 1066,
        [anon_sym_unless] = 1066,
        [anon_sym_else] = 1066,
        [anon_sym_elsif] = 1066,
        [sym_comment] = 54,
        [sym__line_break] = 1066,
        [anon_sym_SEMI] = 1066,
    },
    [355] = {
        [sym_condition] = 1068,
        [sym__expression] = 1070,
        [sym__argument] = 1072,
        [sym__primary] = 1074,
        [sym_scope_resolution_expression] = 1076,
        [sym_subscript_expression] = 1076,
        [sym_member_access] = 1076,
        [sym__lhs] = 1078,
        [sym__variable] = 1076,
        [anon_sym_LPAREN] = 1080,
        [anon_sym_COLON_COLON] = 1082,
        [anon_sym_nil] = 1084,
        [anon_sym_self] = 1084,
        [sym_identifier] = 1084,
        [sym_comment] = 54,
        [sym_symbol] = 1072,
        [sym__line_break] = 54,
    },
    [356] = {
        [sym_then_block] = 1086,
        [sym__terminator] = 868,
        [anon_sym_then] = 868,
        [sym_comment] = 54,
        [sym__line_break] = 870,
        [anon_sym_SEMI] = 872,
    },
    [357] = {
        [sym_then_block] = 668,
        [sym__terminator] = 668,
        [anon_sym_then] = 668,
        [sym_comment] = 54,
        [sym__line_break] = 668,
        [anon_sym_SEMI] = 668,
    },
    [358] = {
        [sym_then_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_then] = 84,
        [sym_comment] = 54,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [359] = {
        [sym_then_block] = 86,
        [sym__terminator] = 86,
        [anon_sym_COLON_COLON] = 1088,
        [anon_sym_then] = 86,
        [anon_sym_LBRACK] = 1090,
        [anon_sym_DOT] = 1092,
        [sym_comment] = 54,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [360] = {
        [sym_then_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_then] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 54,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [361] = {
        [sym_then_block] = 96,
        [sym__terminator] = 96,
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_then] = 96,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 96,
    },
    [362] = {
        [sym__statement] = 1094,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym_while_statement] = 112,
        [sym_until_statement] = 112,
        [sym_if_statement] = 112,
        [sym_unless_statement] = 112,
        [sym_for_statement] = 112,
        [sym_begin_statement] = 112,
        [sym_if_modifier] = 112,
        [sym_unless_modifier] = 112,
        [sym_while_modifier] = 112,
        [sym_until_modifier] = 112,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym_scope_resolution_expression] = 122,
        [sym_subscript_expression] = 122,
        [sym_member_access] = 122,
        [sym__lhs] = 124,
        [sym__variable] = 122,
        [anon_sym_undef] = 126,
        [anon_sym_alias] = 128,
        [anon_sym_def] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 1096,
        [anon_sym_class] = 136,
        [anon_sym_COLON_COLON] = 138,
        [anon_sym_module] = 140,
        [anon_sym_while] = 142,
        [anon_sym_until] = 144,
        [anon_sym_if] = 146,
        [anon_sym_unless] = 148,
        [anon_sym_for] = 150,
        [anon_sym_begin] = 152,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [sym_identifier] = 154,
        [sym_comment] = 54,
        [sym_symbol] = 118,
        [sym__line_break] = 54,
    },
    [363] = {
        [sym_identifier] = 1098,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [364] = {
        [sym_then_block] = 254,
        [sym__terminator] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_then] = 254,
        [anon_sym_LBRACK] = 254,
        [anon_sym_DOT] = 254,
        [sym_comment] = 54,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [365] = {
        [sym_then_block] = 276,
        [sym__terminator] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_then] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [366] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 1100,
        [anon_sym_RPAREN] = 1102,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [367] = {
        [sym_then_block] = 312,
        [sym__terminator] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_then] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [368] = {
        [anon_sym_RPAREN] = 1104,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [369] = {
        [sym_then_block] = 356,
        [sym__terminator] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_then] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [370] = {
        [sym_then_block] = 378,
        [sym__terminator] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_then] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [371] = {
        [sym_identifier] = 1106,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [372] = {
        [sym__argument] = 1108,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1110,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [373] = {
        [sym_identifier] = 1112,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [374] = {
        [sym_then_block] = 438,
        [sym__terminator] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_then] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [375] = {
        [aux_sym__call_arguments_repeat1] = 1114,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1116,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [376] = {
        [sym_then_block] = 458,
        [sym__terminator] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_then] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [377] = {
        [anon_sym_RBRACK] = 1118,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [378] = {
        [sym_then_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_then] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [379] = {
        [sym_then_block] = 490,
        [sym__terminator] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_then] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [380] = {
        [sym_then_block] = 492,
        [sym__terminator] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_then] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [381] = {
        [sym_else_block] = 1120,
        [aux_sym__then_elsif_else_block_repeat1] = 1122,
        [anon_sym_end] = 1120,
        [anon_sym_else] = 1120,
        [anon_sym_elsif] = 912,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [382] = {
        [sym_else_block] = 1124,
        [anon_sym_end] = 1124,
        [anon_sym_else] = 1124,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [383] = {
        [anon_sym_end] = 1126,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [384] = {
        [sym_else_block] = 1128,
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [aux_sym__then_elsif_else_block_repeat1] = 1128,
        [anon_sym_end] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [anon_sym_else] = 1128,
        [anon_sym_elsif] = 1128,
        [sym_comment] = 54,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [385] = {
        [sym_else_block] = 1130,
        [sym__terminator] = 1130,
        [aux_sym_program_repeat1] = 1130,
        [aux_sym__then_elsif_else_block_repeat1] = 1130,
        [anon_sym_end] = 1130,
        [anon_sym_while] = 1130,
        [anon_sym_until] = 1130,
        [anon_sym_if] = 1130,
        [anon_sym_unless] = 1130,
        [anon_sym_else] = 1130,
        [anon_sym_elsif] = 1130,
        [sym_comment] = 54,
        [sym__line_break] = 1130,
        [anon_sym_SEMI] = 1130,
    },
    [386] = {
        [sym__statement_block] = 1132,
        [sym__do_block] = 1016,
        [sym__terminator] = 1018,
        [anon_sym_do] = 1020,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [387] = {
        [sym__statement_block] = 668,
        [sym__do_block] = 668,
        [sym__terminator] = 668,
        [anon_sym_do] = 668,
        [sym_comment] = 54,
        [sym__line_break] = 668,
        [anon_sym_SEMI] = 668,
    },
    [388] = {
        [sym_else_block] = 1134,
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [aux_sym__then_elsif_else_block_repeat1] = 1134,
        [anon_sym_end] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [anon_sym_else] = 1134,
        [anon_sym_elsif] = 1134,
        [sym_comment] = 54,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [389] = {
        [sym__statement_block] = 1136,
        [sym__do_block] = 1016,
        [sym__terminator] = 1018,
        [anon_sym_do] = 1020,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [390] = {
        [sym_else_block] = 1138,
        [sym__terminator] = 1138,
        [aux_sym_program_repeat1] = 1138,
        [aux_sym__then_elsif_else_block_repeat1] = 1138,
        [anon_sym_end] = 1138,
        [anon_sym_while] = 1138,
        [anon_sym_until] = 1138,
        [anon_sym_if] = 1138,
        [anon_sym_unless] = 1138,
        [anon_sym_else] = 1138,
        [anon_sym_elsif] = 1138,
        [sym_comment] = 54,
        [sym__line_break] = 1138,
        [anon_sym_SEMI] = 1138,
    },
    [391] = {
        [sym__terminator] = 1140,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [392] = {
        [sym__statement] = 1142,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1144,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [393] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1146,
        [anon_sym_end] = 1148,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [394] = {
        [sym_else_block] = 1150,
        [sym__terminator] = 1150,
        [aux_sym_program_repeat1] = 1150,
        [aux_sym__then_elsif_else_block_repeat1] = 1150,
        [anon_sym_end] = 1150,
        [anon_sym_while] = 1150,
        [anon_sym_until] = 1150,
        [anon_sym_if] = 1150,
        [anon_sym_unless] = 1150,
        [anon_sym_else] = 1150,
        [anon_sym_elsif] = 1150,
        [sym_comment] = 54,
        [sym__line_break] = 1150,
        [anon_sym_SEMI] = 1150,
    },
    [395] = {
        [anon_sym_end] = 1152,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [396] = {
        [sym_else_block] = 1154,
        [sym__terminator] = 1154,
        [aux_sym_program_repeat1] = 1154,
        [aux_sym__then_elsif_else_block_repeat1] = 1154,
        [anon_sym_end] = 1154,
        [anon_sym_while] = 1154,
        [anon_sym_until] = 1154,
        [anon_sym_if] = 1154,
        [anon_sym_unless] = 1154,
        [anon_sym_else] = 1154,
        [anon_sym_elsif] = 1154,
        [sym_comment] = 54,
        [sym__line_break] = 1154,
        [anon_sym_SEMI] = 1154,
    },
    [397] = {
        [sym_else_block] = 1156,
        [sym__terminator] = 1156,
        [aux_sym_program_repeat1] = 1156,
        [aux_sym__then_elsif_else_block_repeat1] = 1156,
        [anon_sym_end] = 1156,
        [anon_sym_while] = 1156,
        [anon_sym_until] = 1156,
        [anon_sym_if] = 1156,
        [anon_sym_unless] = 1156,
        [anon_sym_else] = 1156,
        [anon_sym_elsif] = 1156,
        [sym_comment] = 54,
        [sym__line_break] = 1156,
        [anon_sym_SEMI] = 1156,
    },
    [398] = {
        [sym_else_block] = 276,
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [aux_sym__then_elsif_else_block_repeat1] = 276,
        [anon_sym_end] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_while] = 276,
        [anon_sym_until] = 276,
        [anon_sym_if] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_else] = 276,
        [anon_sym_elsif] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [399] = {
        [sym__terminator] = 1158,
        [anon_sym_LT] = 1160,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [400] = {
        [sym__statement] = 1162,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1164,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [401] = {
        [sym_identifier] = 1166,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [402] = {
        [sym__terminator] = 1168,
        [aux_sym_class_declaration_repeat1] = 1170,
        [anon_sym_COLON_COLON] = 1172,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [403] = {
        [sym__statement] = 1174,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1176,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [404] = {
        [sym__terminator] = 1178,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [405] = {
        [sym_identifier] = 1180,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [406] = {
        [sym__terminator] = 1182,
        [aux_sym_class_declaration_repeat1] = 1184,
        [anon_sym_COLON_COLON] = 1172,
        [sym_comment] = 54,
        [sym__line_break] = 1182,
        [anon_sym_SEMI] = 1182,
    },
    [407] = {
        [sym__terminator] = 1186,
        [sym_comment] = 54,
        [sym__line_break] = 1186,
        [anon_sym_SEMI] = 1186,
    },
    [408] = {
        [sym__statement] = 1188,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1190,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [409] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1192,
        [anon_sym_end] = 1194,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [410] = {
        [sym_else_block] = 1196,
        [sym__terminator] = 1196,
        [aux_sym_program_repeat1] = 1196,
        [aux_sym__then_elsif_else_block_repeat1] = 1196,
        [anon_sym_end] = 1196,
        [anon_sym_while] = 1196,
        [anon_sym_until] = 1196,
        [anon_sym_if] = 1196,
        [anon_sym_unless] = 1196,
        [anon_sym_else] = 1196,
        [anon_sym_elsif] = 1196,
        [sym_comment] = 54,
        [sym__line_break] = 1196,
        [anon_sym_SEMI] = 1196,
    },
    [411] = {
        [anon_sym_end] = 1198,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [412] = {
        [sym_else_block] = 1200,
        [sym__terminator] = 1200,
        [aux_sym_program_repeat1] = 1200,
        [aux_sym__then_elsif_else_block_repeat1] = 1200,
        [anon_sym_end] = 1200,
        [anon_sym_while] = 1200,
        [anon_sym_until] = 1200,
        [anon_sym_if] = 1200,
        [anon_sym_unless] = 1200,
        [anon_sym_else] = 1200,
        [anon_sym_elsif] = 1200,
        [sym_comment] = 54,
        [sym__line_break] = 1200,
        [anon_sym_SEMI] = 1200,
    },
    [413] = {
        [sym_else_block] = 1202,
        [sym__terminator] = 1202,
        [aux_sym_program_repeat1] = 1202,
        [aux_sym__then_elsif_else_block_repeat1] = 1202,
        [anon_sym_end] = 1202,
        [anon_sym_while] = 1202,
        [anon_sym_until] = 1202,
        [anon_sym_if] = 1202,
        [anon_sym_unless] = 1202,
        [anon_sym_else] = 1202,
        [anon_sym_elsif] = 1202,
        [sym_comment] = 54,
        [sym__line_break] = 1202,
        [anon_sym_SEMI] = 1202,
    },
    [414] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1204,
        [anon_sym_end] = 1190,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [415] = {
        [sym_else_block] = 1206,
        [sym__terminator] = 1206,
        [aux_sym_program_repeat1] = 1206,
        [aux_sym__then_elsif_else_block_repeat1] = 1206,
        [anon_sym_end] = 1206,
        [anon_sym_while] = 1206,
        [anon_sym_until] = 1206,
        [anon_sym_if] = 1206,
        [anon_sym_unless] = 1206,
        [anon_sym_else] = 1206,
        [anon_sym_elsif] = 1206,
        [sym_comment] = 54,
        [sym__line_break] = 1206,
        [anon_sym_SEMI] = 1206,
    },
    [416] = {
        [anon_sym_end] = 1194,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [417] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1208,
        [anon_sym_end] = 1210,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [418] = {
        [sym_else_block] = 1212,
        [sym__terminator] = 1212,
        [aux_sym_program_repeat1] = 1212,
        [aux_sym__then_elsif_else_block_repeat1] = 1212,
        [anon_sym_end] = 1212,
        [anon_sym_while] = 1212,
        [anon_sym_until] = 1212,
        [anon_sym_if] = 1212,
        [anon_sym_unless] = 1212,
        [anon_sym_else] = 1212,
        [anon_sym_elsif] = 1212,
        [sym_comment] = 54,
        [sym__line_break] = 1212,
        [anon_sym_SEMI] = 1212,
    },
    [419] = {
        [anon_sym_end] = 1176,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [420] = {
        [sym_else_block] = 1214,
        [sym__terminator] = 1214,
        [aux_sym_program_repeat1] = 1214,
        [aux_sym__then_elsif_else_block_repeat1] = 1214,
        [anon_sym_end] = 1214,
        [anon_sym_while] = 1214,
        [anon_sym_until] = 1214,
        [anon_sym_if] = 1214,
        [anon_sym_unless] = 1214,
        [anon_sym_else] = 1214,
        [anon_sym_elsif] = 1214,
        [sym_comment] = 54,
        [sym__line_break] = 1214,
        [anon_sym_SEMI] = 1214,
    },
    [421] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 1216,
        [anon_sym_RPAREN] = 1218,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [422] = {
        [sym_else_block] = 312,
        [sym__terminator] = 312,
        [aux_sym_program_repeat1] = 312,
        [aux_sym__then_elsif_else_block_repeat1] = 312,
        [anon_sym_end] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_while] = 312,
        [anon_sym_until] = 312,
        [anon_sym_if] = 312,
        [anon_sym_unless] = 312,
        [anon_sym_else] = 312,
        [anon_sym_elsif] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [423] = {
        [anon_sym_RPAREN] = 1220,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [424] = {
        [sym_else_block] = 356,
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [aux_sym__then_elsif_else_block_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_else] = 356,
        [anon_sym_elsif] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [425] = {
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
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [426] = {
        [sym_argument_list] = 1222,
        [sym__terminator] = 1224,
        [anon_sym_LPAREN] = 1226,
        [anon_sym_STAR] = 1228,
        [anon_sym_AMP] = 1228,
        [sym_identifier] = 1230,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [427] = {
        [sym_argument_list] = 1232,
        [sym__terminator] = 1232,
        [anon_sym_LPAREN] = 1232,
        [anon_sym_STAR] = 1232,
        [anon_sym_AMP] = 1232,
        [sym_identifier] = 1232,
        [sym_comment] = 54,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [428] = {
        [sym__terminator] = 1234,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [429] = {
        [sym__statement] = 1236,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1238,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [430] = {
        [sym_argument_list] = 1240,
        [anon_sym_RPAREN] = 1234,
        [anon_sym_STAR] = 1242,
        [anon_sym_AMP] = 1242,
        [sym_identifier] = 1244,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [431] = {
        [sym_identifier] = 1246,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [432] = {
        [sym__terminator] = 1248,
        [aux_sym_argument_list_repeat1] = 1250,
        [anon_sym_COMMA] = 1252,
        [sym_comment] = 54,
        [sym__line_break] = 1248,
        [anon_sym_SEMI] = 1248,
    },
    [433] = {
        [sym__terminator] = 1254,
        [sym_comment] = 54,
        [sym__line_break] = 1254,
        [anon_sym_SEMI] = 1254,
    },
    [434] = {
        [anon_sym_STAR] = 1256,
        [anon_sym_AMP] = 1256,
        [sym_identifier] = 1258,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [435] = {
        [sym_identifier] = 1260,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [436] = {
        [sym__terminator] = 1262,
        [aux_sym_argument_list_repeat1] = 1264,
        [anon_sym_COMMA] = 1252,
        [sym_comment] = 54,
        [sym__line_break] = 1262,
        [anon_sym_SEMI] = 1262,
    },
    [437] = {
        [sym__terminator] = 1266,
        [sym_comment] = 54,
        [sym__line_break] = 1266,
        [anon_sym_SEMI] = 1266,
    },
    [438] = {
        [sym__terminator] = 1266,
        [aux_sym_argument_list_repeat1] = 1268,
        [anon_sym_COMMA] = 1252,
        [sym_comment] = 54,
        [sym__line_break] = 1266,
        [anon_sym_SEMI] = 1266,
    },
    [439] = {
        [sym__terminator] = 1270,
        [sym_comment] = 54,
        [sym__line_break] = 1270,
        [anon_sym_SEMI] = 1270,
    },
    [440] = {
        [sym__terminator] = 1254,
        [aux_sym_argument_list_repeat1] = 1272,
        [anon_sym_COMMA] = 1252,
        [sym_comment] = 54,
        [sym__line_break] = 1254,
        [anon_sym_SEMI] = 1254,
    },
    [441] = {
        [sym__terminator] = 1274,
        [sym_comment] = 54,
        [sym__line_break] = 1274,
        [anon_sym_SEMI] = 1274,
    },
    [442] = {
        [anon_sym_RPAREN] = 1276,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [443] = {
        [sym__statement] = 1278,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1280,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [444] = {
        [sym_identifier] = 1282,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [445] = {
        [aux_sym_argument_list_repeat1] = 1284,
        [anon_sym_RPAREN] = 1248,
        [anon_sym_COMMA] = 1286,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [446] = {
        [anon_sym_RPAREN] = 1254,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [447] = {
        [anon_sym_STAR] = 1288,
        [anon_sym_AMP] = 1288,
        [sym_identifier] = 1290,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [448] = {
        [sym_identifier] = 1292,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [449] = {
        [aux_sym_argument_list_repeat1] = 1294,
        [anon_sym_RPAREN] = 1262,
        [anon_sym_COMMA] = 1286,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [450] = {
        [anon_sym_RPAREN] = 1266,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [451] = {
        [aux_sym_argument_list_repeat1] = 1296,
        [anon_sym_RPAREN] = 1266,
        [anon_sym_COMMA] = 1286,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [452] = {
        [anon_sym_RPAREN] = 1270,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [453] = {
        [aux_sym_argument_list_repeat1] = 1298,
        [anon_sym_RPAREN] = 1254,
        [anon_sym_COMMA] = 1286,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [454] = {
        [anon_sym_RPAREN] = 1274,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [455] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1300,
        [anon_sym_end] = 1302,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [456] = {
        [sym_else_block] = 1304,
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [aux_sym__then_elsif_else_block_repeat1] = 1304,
        [anon_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [anon_sym_else] = 1304,
        [anon_sym_elsif] = 1304,
        [sym_comment] = 54,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [457] = {
        [anon_sym_end] = 1306,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [458] = {
        [sym_else_block] = 1308,
        [sym__terminator] = 1308,
        [aux_sym_program_repeat1] = 1308,
        [aux_sym__then_elsif_else_block_repeat1] = 1308,
        [anon_sym_end] = 1308,
        [anon_sym_while] = 1308,
        [anon_sym_until] = 1308,
        [anon_sym_if] = 1308,
        [anon_sym_unless] = 1308,
        [anon_sym_else] = 1308,
        [anon_sym_elsif] = 1308,
        [sym_comment] = 54,
        [sym__line_break] = 1308,
        [anon_sym_SEMI] = 1308,
    },
    [459] = {
        [sym_else_block] = 1310,
        [sym__terminator] = 1310,
        [aux_sym_program_repeat1] = 1310,
        [aux_sym__then_elsif_else_block_repeat1] = 1310,
        [anon_sym_end] = 1310,
        [anon_sym_while] = 1310,
        [anon_sym_until] = 1310,
        [anon_sym_if] = 1310,
        [anon_sym_unless] = 1310,
        [anon_sym_else] = 1310,
        [anon_sym_elsif] = 1310,
        [sym_comment] = 54,
        [sym__line_break] = 1310,
        [anon_sym_SEMI] = 1310,
    },
    [460] = {
        [sym__statement] = 1312,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1302,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [461] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1314,
        [anon_sym_end] = 1306,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [462] = {
        [anon_sym_end] = 1316,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [463] = {
        [sym_else_block] = 1318,
        [sym__terminator] = 1318,
        [aux_sym_program_repeat1] = 1318,
        [aux_sym__then_elsif_else_block_repeat1] = 1318,
        [anon_sym_end] = 1318,
        [anon_sym_while] = 1318,
        [anon_sym_until] = 1318,
        [anon_sym_if] = 1318,
        [anon_sym_unless] = 1318,
        [anon_sym_else] = 1318,
        [anon_sym_elsif] = 1318,
        [sym_comment] = 54,
        [sym__line_break] = 1318,
        [anon_sym_SEMI] = 1318,
    },
    [464] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1320,
        [anon_sym_end] = 1280,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [465] = {
        [sym_else_block] = 1322,
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [aux_sym__then_elsif_else_block_repeat1] = 1322,
        [anon_sym_end] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_else] = 1322,
        [anon_sym_elsif] = 1322,
        [sym_comment] = 54,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [466] = {
        [anon_sym_end] = 1302,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [467] = {
        [sym__function_name] = 1324,
        [anon_sym_PIPE] = 982,
        [anon_sym_STAR] = 982,
        [anon_sym_AMP] = 982,
        [anon_sym_LT] = 982,
        [sym_identifier] = 982,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 982,
        [anon_sym_CARET] = 982,
        [anon_sym_LT_EQ_GT] = 982,
        [anon_sym_EQ_EQ] = 982,
        [anon_sym_EQ_EQ_EQ] = 982,
        [anon_sym_EQ_TILDE] = 982,
        [anon_sym_GT] = 982,
        [anon_sym_GT_EQ] = 982,
        [anon_sym_LT_EQ] = 982,
        [anon_sym_PLUS] = 982,
        [anon_sym_DASH] = 982,
        [anon_sym_SLASH] = 982,
        [anon_sym_PERCENT] = 982,
        [anon_sym_STAR_STAR] = 982,
        [anon_sym_LT_LT] = 982,
        [anon_sym_GT_GT] = 982,
        [anon_sym_TILDE] = 982,
        [anon_sym_PLUS_AT] = 982,
        [anon_sym_DASH_AT] = 982,
        [anon_sym_LBRACK_RBRACK] = 982,
        [anon_sym_LBRACK_RBRACK_EQ] = 982,
        [sym__line_break] = 54,
    },
    [468] = {
        [sym__function_name] = 1232,
        [anon_sym_PIPE] = 1232,
        [anon_sym_STAR] = 1232,
        [anon_sym_AMP] = 1232,
        [anon_sym_LT] = 1232,
        [sym_identifier] = 1232,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 1232,
        [anon_sym_CARET] = 1232,
        [anon_sym_LT_EQ_GT] = 1232,
        [anon_sym_EQ_EQ] = 1232,
        [anon_sym_EQ_EQ_EQ] = 1232,
        [anon_sym_EQ_TILDE] = 1232,
        [anon_sym_GT] = 1232,
        [anon_sym_GT_EQ] = 1232,
        [anon_sym_LT_EQ] = 1232,
        [anon_sym_PLUS] = 1232,
        [anon_sym_DASH] = 1232,
        [anon_sym_SLASH] = 1232,
        [anon_sym_PERCENT] = 1232,
        [anon_sym_STAR_STAR] = 1232,
        [anon_sym_LT_LT] = 1232,
        [anon_sym_GT_GT] = 1232,
        [anon_sym_TILDE] = 1232,
        [anon_sym_PLUS_AT] = 1232,
        [anon_sym_DASH_AT] = 1232,
        [anon_sym_LBRACK_RBRACK] = 1232,
        [anon_sym_LBRACK_RBRACK_EQ] = 1232,
        [sym__line_break] = 54,
    },
    [469] = {
        [sym_else_block] = 1326,
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [aux_sym__then_elsif_else_block_repeat1] = 1326,
        [anon_sym_end] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_else] = 1326,
        [anon_sym_elsif] = 1326,
        [sym_comment] = 54,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [470] = {
        [sym_else_block] = 1232,
        [sym__terminator] = 1232,
        [aux_sym_program_repeat1] = 1232,
        [aux_sym__then_elsif_else_block_repeat1] = 1232,
        [anon_sym_end] = 1232,
        [anon_sym_while] = 1232,
        [anon_sym_until] = 1232,
        [anon_sym_if] = 1232,
        [anon_sym_unless] = 1232,
        [anon_sym_else] = 1232,
        [anon_sym_elsif] = 1232,
        [sym_comment] = 54,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [471] = {
        [sym_else_block] = 1328,
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [aux_sym__then_elsif_else_block_repeat1] = 1328,
        [anon_sym_end] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_else] = 1328,
        [anon_sym_elsif] = 1328,
        [sym_comment] = 54,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [472] = {
        [sym_identifier] = 1330,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [473] = {
        [sym__argument] = 1332,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1334,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [474] = {
        [sym_identifier] = 1336,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [475] = {
        [sym_else_block] = 438,
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [aux_sym__then_elsif_else_block_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_while] = 438,
        [anon_sym_until] = 438,
        [anon_sym_if] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_else] = 438,
        [anon_sym_elsif] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [476] = {
        [aux_sym__call_arguments_repeat1] = 1338,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1340,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [477] = {
        [sym_else_block] = 458,
        [sym__terminator] = 458,
        [aux_sym_program_repeat1] = 458,
        [aux_sym__then_elsif_else_block_repeat1] = 458,
        [anon_sym_end] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_while] = 458,
        [anon_sym_until] = 458,
        [anon_sym_if] = 458,
        [anon_sym_unless] = 458,
        [anon_sym_else] = 458,
        [anon_sym_elsif] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [478] = {
        [anon_sym_RBRACK] = 1342,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [479] = {
        [sym_else_block] = 482,
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [aux_sym__then_elsif_else_block_repeat1] = 482,
        [anon_sym_end] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_while] = 482,
        [anon_sym_until] = 482,
        [anon_sym_if] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_else] = 482,
        [anon_sym_elsif] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [480] = {
        [sym_else_block] = 490,
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [aux_sym__then_elsif_else_block_repeat1] = 490,
        [anon_sym_end] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_while] = 490,
        [anon_sym_until] = 490,
        [anon_sym_if] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_else] = 490,
        [anon_sym_elsif] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [481] = {
        [sym_else_block] = 492,
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [aux_sym__then_elsif_else_block_repeat1] = 492,
        [anon_sym_end] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_while] = 492,
        [anon_sym_until] = 492,
        [anon_sym_if] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_else] = 492,
        [anon_sym_elsif] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [482] = {
        [sym__statement] = 1344,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_PIPE] = 1346,
        [anon_sym_end] = 1324,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [483] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1348,
        [anon_sym_end] = 1350,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [484] = {
        [sym__statement] = 1352,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1350,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [485] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1354,
        [anon_sym_end] = 1356,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [486] = {
        [sym_else_block] = 1358,
        [sym__terminator] = 1358,
        [aux_sym_program_repeat1] = 1358,
        [aux_sym__then_elsif_else_block_repeat1] = 1358,
        [anon_sym_end] = 1358,
        [anon_sym_while] = 1358,
        [anon_sym_until] = 1358,
        [anon_sym_if] = 1358,
        [anon_sym_unless] = 1358,
        [anon_sym_else] = 1358,
        [anon_sym_elsif] = 1358,
        [sym_comment] = 54,
        [sym__line_break] = 1358,
        [anon_sym_SEMI] = 1358,
    },
    [487] = {
        [anon_sym_end] = 1360,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [488] = {
        [sym_else_block] = 1362,
        [sym__terminator] = 1362,
        [aux_sym_program_repeat1] = 1362,
        [aux_sym__then_elsif_else_block_repeat1] = 1362,
        [anon_sym_end] = 1362,
        [anon_sym_while] = 1362,
        [anon_sym_until] = 1362,
        [anon_sym_if] = 1362,
        [anon_sym_unless] = 1362,
        [anon_sym_else] = 1362,
        [anon_sym_elsif] = 1362,
        [sym_comment] = 54,
        [sym__line_break] = 1362,
        [anon_sym_SEMI] = 1362,
    },
    [489] = {
        [sym_else_block] = 1364,
        [sym__terminator] = 1364,
        [aux_sym_program_repeat1] = 1364,
        [aux_sym__then_elsif_else_block_repeat1] = 1364,
        [anon_sym_end] = 1364,
        [anon_sym_while] = 1364,
        [anon_sym_until] = 1364,
        [anon_sym_if] = 1364,
        [anon_sym_unless] = 1364,
        [anon_sym_else] = 1364,
        [anon_sym_elsif] = 1364,
        [sym_comment] = 54,
        [sym__line_break] = 1364,
        [anon_sym_SEMI] = 1364,
    },
    [490] = {
        [anon_sym_end] = 1356,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [491] = {
        [sym__statement] = 1366,
        [sym__declaration] = 918,
        [sym_method_declaration] = 920,
        [sym_class_declaration] = 920,
        [sym_module_declaration] = 920,
        [sym_while_statement] = 918,
        [sym_until_statement] = 918,
        [sym_if_statement] = 918,
        [sym_unless_statement] = 918,
        [sym_for_statement] = 918,
        [sym_begin_statement] = 918,
        [sym_if_modifier] = 918,
        [sym_unless_modifier] = 918,
        [sym_while_modifier] = 918,
        [sym_until_modifier] = 918,
        [sym__call] = 922,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 918,
        [sym__argument] = 924,
        [sym__primary] = 926,
        [sym_scope_resolution_expression] = 928,
        [sym_subscript_expression] = 928,
        [sym_member_access] = 928,
        [sym__lhs] = 930,
        [sym__variable] = 928,
        [anon_sym_undef] = 932,
        [anon_sym_alias] = 934,
        [anon_sym_def] = 936,
        [anon_sym_LPAREN] = 938,
        [anon_sym_class] = 940,
        [anon_sym_COLON_COLON] = 942,
        [anon_sym_module] = 944,
        [anon_sym_while] = 946,
        [anon_sym_until] = 948,
        [anon_sym_if] = 950,
        [anon_sym_unless] = 952,
        [anon_sym_for] = 954,
        [anon_sym_begin] = 956,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 958,
        [anon_sym_self] = 958,
        [sym_identifier] = 958,
        [sym_comment] = 54,
        [sym_symbol] = 924,
        [sym__line_break] = 54,
    },
    [492] = {
        [sym_else_block] = 1368,
        [aux_sym__then_elsif_else_block_repeat1] = 1368,
        [anon_sym_end] = 1368,
        [anon_sym_else] = 1368,
        [anon_sym_elsif] = 1368,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [493] = {
        [sym__expression] = 1370,
        [sym__argument] = 924,
        [sym__primary] = 926,
        [sym_scope_resolution_expression] = 928,
        [sym_subscript_expression] = 928,
        [sym_member_access] = 928,
        [sym__lhs] = 930,
        [sym__variable] = 928,
        [anon_sym_LPAREN] = 938,
        [anon_sym_COLON_COLON] = 942,
        [anon_sym_nil] = 958,
        [anon_sym_self] = 958,
        [sym_identifier] = 958,
        [sym_comment] = 54,
        [sym_symbol] = 924,
        [sym__line_break] = 54,
    },
    [494] = {
        [sym__expression] = 1372,
        [sym__argument] = 924,
        [sym__primary] = 926,
        [sym_scope_resolution_expression] = 928,
        [sym_subscript_expression] = 928,
        [sym_member_access] = 928,
        [sym__lhs] = 930,
        [sym__variable] = 928,
        [anon_sym_LPAREN] = 938,
        [anon_sym_COLON_COLON] = 942,
        [anon_sym_nil] = 958,
        [anon_sym_self] = 958,
        [sym_identifier] = 958,
        [sym_comment] = 54,
        [sym_symbol] = 924,
        [sym__line_break] = 54,
    },
    [495] = {
        [sym__expression] = 1374,
        [sym__argument] = 924,
        [sym__primary] = 926,
        [sym_scope_resolution_expression] = 928,
        [sym_subscript_expression] = 928,
        [sym_member_access] = 928,
        [sym__lhs] = 930,
        [sym__variable] = 928,
        [anon_sym_LPAREN] = 938,
        [anon_sym_COLON_COLON] = 942,
        [anon_sym_nil] = 958,
        [anon_sym_self] = 958,
        [sym_identifier] = 958,
        [sym_comment] = 54,
        [sym_symbol] = 924,
        [sym__line_break] = 54,
    },
    [496] = {
        [sym__expression] = 1376,
        [sym__argument] = 924,
        [sym__primary] = 926,
        [sym_scope_resolution_expression] = 928,
        [sym_subscript_expression] = 928,
        [sym_member_access] = 928,
        [sym__lhs] = 930,
        [sym__variable] = 928,
        [anon_sym_LPAREN] = 938,
        [anon_sym_COLON_COLON] = 942,
        [anon_sym_nil] = 958,
        [anon_sym_self] = 958,
        [sym_identifier] = 958,
        [sym_comment] = 54,
        [sym_symbol] = 924,
        [sym__line_break] = 54,
    },
    [497] = {
        [sym_else_block] = 370,
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [aux_sym__then_elsif_else_block_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_while] = 370,
        [anon_sym_until] = 370,
        [anon_sym_if] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_else] = 370,
        [anon_sym_elsif] = 370,
        [sym_comment] = 54,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [498] = {
        [sym_else_block] = 372,
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [aux_sym__then_elsif_else_block_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_while] = 372,
        [anon_sym_until] = 372,
        [anon_sym_if] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_else] = 372,
        [anon_sym_elsif] = 372,
        [sym_comment] = 54,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [499] = {
        [sym_else_block] = 374,
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [aux_sym__then_elsif_else_block_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_while] = 374,
        [anon_sym_until] = 374,
        [anon_sym_if] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_else] = 374,
        [anon_sym_elsif] = 374,
        [sym_comment] = 54,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [500] = {
        [sym_else_block] = 376,
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [aux_sym__then_elsif_else_block_repeat1] = 376,
        [anon_sym_end] = 376,
        [anon_sym_while] = 376,
        [anon_sym_until] = 376,
        [anon_sym_if] = 376,
        [anon_sym_unless] = 376,
        [anon_sym_else] = 376,
        [anon_sym_elsif] = 376,
        [sym_comment] = 54,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [501] = {
        [sym_else_block] = 382,
        [sym__terminator] = 960,
        [aux_sym_program_repeat1] = 1378,
        [aux_sym__then_elsif_else_block_repeat1] = 382,
        [anon_sym_end] = 382,
        [anon_sym_while] = 964,
        [anon_sym_until] = 966,
        [anon_sym_if] = 968,
        [anon_sym_unless] = 970,
        [anon_sym_else] = 382,
        [anon_sym_elsif] = 382,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [502] = {
        [sym_else_block] = 384,
        [aux_sym__then_elsif_else_block_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_else] = 384,
        [anon_sym_elsif] = 384,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [503] = {
        [anon_sym_end] = 1380,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [504] = {
        [sym_else_block] = 1382,
        [anon_sym_end] = 1380,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [505] = {
        [sym_else_block] = 1066,
        [sym__terminator] = 1066,
        [aux_sym_program_repeat1] = 1066,
        [anon_sym_end] = 1066,
        [anon_sym_while] = 1066,
        [anon_sym_until] = 1066,
        [anon_sym_if] = 1066,
        [anon_sym_unless] = 1066,
        [anon_sym_else] = 1066,
        [sym_comment] = 54,
        [sym__line_break] = 1066,
        [anon_sym_SEMI] = 1066,
    },
    [506] = {
        [anon_sym_end] = 1384,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [507] = {
        [sym_else_block] = 1128,
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [anon_sym_end] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [anon_sym_else] = 1128,
        [sym_comment] = 54,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [508] = {
        [sym_else_block] = 1130,
        [sym__terminator] = 1130,
        [aux_sym_program_repeat1] = 1130,
        [anon_sym_end] = 1130,
        [anon_sym_while] = 1130,
        [anon_sym_until] = 1130,
        [anon_sym_if] = 1130,
        [anon_sym_unless] = 1130,
        [anon_sym_else] = 1130,
        [sym_comment] = 54,
        [sym__line_break] = 1130,
        [anon_sym_SEMI] = 1130,
    },
    [509] = {
        [sym__statement_block] = 1386,
        [sym__do_block] = 814,
        [sym__terminator] = 816,
        [anon_sym_do] = 818,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [510] = {
        [sym_else_block] = 1134,
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [anon_sym_end] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [anon_sym_else] = 1134,
        [sym_comment] = 54,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [511] = {
        [sym__statement_block] = 1388,
        [sym__do_block] = 814,
        [sym__terminator] = 816,
        [anon_sym_do] = 818,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [512] = {
        [sym_else_block] = 1138,
        [sym__terminator] = 1138,
        [aux_sym_program_repeat1] = 1138,
        [anon_sym_end] = 1138,
        [anon_sym_while] = 1138,
        [anon_sym_until] = 1138,
        [anon_sym_if] = 1138,
        [anon_sym_unless] = 1138,
        [anon_sym_else] = 1138,
        [sym_comment] = 54,
        [sym__line_break] = 1138,
        [anon_sym_SEMI] = 1138,
    },
    [513] = {
        [sym__terminator] = 1390,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [514] = {
        [sym__statement] = 1392,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1394,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [515] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1396,
        [anon_sym_end] = 1398,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [516] = {
        [sym_else_block] = 1150,
        [sym__terminator] = 1150,
        [aux_sym_program_repeat1] = 1150,
        [anon_sym_end] = 1150,
        [anon_sym_while] = 1150,
        [anon_sym_until] = 1150,
        [anon_sym_if] = 1150,
        [anon_sym_unless] = 1150,
        [anon_sym_else] = 1150,
        [sym_comment] = 54,
        [sym__line_break] = 1150,
        [anon_sym_SEMI] = 1150,
    },
    [517] = {
        [anon_sym_end] = 1400,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [518] = {
        [sym_else_block] = 1154,
        [sym__terminator] = 1154,
        [aux_sym_program_repeat1] = 1154,
        [anon_sym_end] = 1154,
        [anon_sym_while] = 1154,
        [anon_sym_until] = 1154,
        [anon_sym_if] = 1154,
        [anon_sym_unless] = 1154,
        [anon_sym_else] = 1154,
        [sym_comment] = 54,
        [sym__line_break] = 1154,
        [anon_sym_SEMI] = 1154,
    },
    [519] = {
        [sym_else_block] = 1156,
        [sym__terminator] = 1156,
        [aux_sym_program_repeat1] = 1156,
        [anon_sym_end] = 1156,
        [anon_sym_while] = 1156,
        [anon_sym_until] = 1156,
        [anon_sym_if] = 1156,
        [anon_sym_unless] = 1156,
        [anon_sym_else] = 1156,
        [sym_comment] = 54,
        [sym__line_break] = 1156,
        [anon_sym_SEMI] = 1156,
    },
    [520] = {
        [sym_else_block] = 276,
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [anon_sym_end] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_while] = 276,
        [anon_sym_until] = 276,
        [anon_sym_if] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_else] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [521] = {
        [sym__terminator] = 1402,
        [anon_sym_LT] = 1404,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [522] = {
        [sym__statement] = 1406,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1408,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [523] = {
        [sym_identifier] = 1410,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [524] = {
        [sym__terminator] = 1412,
        [aux_sym_class_declaration_repeat1] = 1414,
        [anon_sym_COLON_COLON] = 1172,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [525] = {
        [sym__statement] = 1416,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1418,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [526] = {
        [sym__terminator] = 1420,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [527] = {
        [sym__statement] = 1422,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1424,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [528] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1426,
        [anon_sym_end] = 1428,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [529] = {
        [sym_else_block] = 1196,
        [sym__terminator] = 1196,
        [aux_sym_program_repeat1] = 1196,
        [anon_sym_end] = 1196,
        [anon_sym_while] = 1196,
        [anon_sym_until] = 1196,
        [anon_sym_if] = 1196,
        [anon_sym_unless] = 1196,
        [anon_sym_else] = 1196,
        [sym_comment] = 54,
        [sym__line_break] = 1196,
        [anon_sym_SEMI] = 1196,
    },
    [530] = {
        [anon_sym_end] = 1430,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [531] = {
        [sym_else_block] = 1200,
        [sym__terminator] = 1200,
        [aux_sym_program_repeat1] = 1200,
        [anon_sym_end] = 1200,
        [anon_sym_while] = 1200,
        [anon_sym_until] = 1200,
        [anon_sym_if] = 1200,
        [anon_sym_unless] = 1200,
        [anon_sym_else] = 1200,
        [sym_comment] = 54,
        [sym__line_break] = 1200,
        [anon_sym_SEMI] = 1200,
    },
    [532] = {
        [sym_else_block] = 1202,
        [sym__terminator] = 1202,
        [aux_sym_program_repeat1] = 1202,
        [anon_sym_end] = 1202,
        [anon_sym_while] = 1202,
        [anon_sym_until] = 1202,
        [anon_sym_if] = 1202,
        [anon_sym_unless] = 1202,
        [anon_sym_else] = 1202,
        [sym_comment] = 54,
        [sym__line_break] = 1202,
        [anon_sym_SEMI] = 1202,
    },
    [533] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1432,
        [anon_sym_end] = 1424,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [534] = {
        [sym_else_block] = 1206,
        [sym__terminator] = 1206,
        [aux_sym_program_repeat1] = 1206,
        [anon_sym_end] = 1206,
        [anon_sym_while] = 1206,
        [anon_sym_until] = 1206,
        [anon_sym_if] = 1206,
        [anon_sym_unless] = 1206,
        [anon_sym_else] = 1206,
        [sym_comment] = 54,
        [sym__line_break] = 1206,
        [anon_sym_SEMI] = 1206,
    },
    [535] = {
        [anon_sym_end] = 1428,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [536] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1434,
        [anon_sym_end] = 1436,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [537] = {
        [sym_else_block] = 1212,
        [sym__terminator] = 1212,
        [aux_sym_program_repeat1] = 1212,
        [anon_sym_end] = 1212,
        [anon_sym_while] = 1212,
        [anon_sym_until] = 1212,
        [anon_sym_if] = 1212,
        [anon_sym_unless] = 1212,
        [anon_sym_else] = 1212,
        [sym_comment] = 54,
        [sym__line_break] = 1212,
        [anon_sym_SEMI] = 1212,
    },
    [538] = {
        [anon_sym_end] = 1418,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [539] = {
        [sym_else_block] = 1214,
        [sym__terminator] = 1214,
        [aux_sym_program_repeat1] = 1214,
        [anon_sym_end] = 1214,
        [anon_sym_while] = 1214,
        [anon_sym_until] = 1214,
        [anon_sym_if] = 1214,
        [anon_sym_unless] = 1214,
        [anon_sym_else] = 1214,
        [sym_comment] = 54,
        [sym__line_break] = 1214,
        [anon_sym_SEMI] = 1214,
    },
    [540] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 1438,
        [anon_sym_RPAREN] = 1440,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [541] = {
        [sym_else_block] = 312,
        [sym__terminator] = 312,
        [aux_sym_program_repeat1] = 312,
        [anon_sym_end] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_while] = 312,
        [anon_sym_until] = 312,
        [anon_sym_if] = 312,
        [anon_sym_unless] = 312,
        [anon_sym_else] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [542] = {
        [anon_sym_RPAREN] = 1442,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [543] = {
        [sym_else_block] = 356,
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_else] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [544] = {
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
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [545] = {
        [sym_argument_list] = 1444,
        [sym__terminator] = 1446,
        [anon_sym_LPAREN] = 1448,
        [anon_sym_STAR] = 1228,
        [anon_sym_AMP] = 1228,
        [sym_identifier] = 1230,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [546] = {
        [sym__terminator] = 1450,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [547] = {
        [sym__statement] = 1452,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1454,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [548] = {
        [sym_argument_list] = 1456,
        [anon_sym_RPAREN] = 1450,
        [anon_sym_STAR] = 1242,
        [anon_sym_AMP] = 1242,
        [sym_identifier] = 1244,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [549] = {
        [anon_sym_RPAREN] = 1458,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [550] = {
        [sym__statement] = 1460,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1462,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [551] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1464,
        [anon_sym_end] = 1466,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [552] = {
        [sym_else_block] = 1304,
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [anon_sym_else] = 1304,
        [sym_comment] = 54,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [553] = {
        [anon_sym_end] = 1468,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [554] = {
        [sym_else_block] = 1308,
        [sym__terminator] = 1308,
        [aux_sym_program_repeat1] = 1308,
        [anon_sym_end] = 1308,
        [anon_sym_while] = 1308,
        [anon_sym_until] = 1308,
        [anon_sym_if] = 1308,
        [anon_sym_unless] = 1308,
        [anon_sym_else] = 1308,
        [sym_comment] = 54,
        [sym__line_break] = 1308,
        [anon_sym_SEMI] = 1308,
    },
    [555] = {
        [sym_else_block] = 1310,
        [sym__terminator] = 1310,
        [aux_sym_program_repeat1] = 1310,
        [anon_sym_end] = 1310,
        [anon_sym_while] = 1310,
        [anon_sym_until] = 1310,
        [anon_sym_if] = 1310,
        [anon_sym_unless] = 1310,
        [anon_sym_else] = 1310,
        [sym_comment] = 54,
        [sym__line_break] = 1310,
        [anon_sym_SEMI] = 1310,
    },
    [556] = {
        [sym__statement] = 1470,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1466,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [557] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1472,
        [anon_sym_end] = 1468,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [558] = {
        [anon_sym_end] = 1474,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [559] = {
        [sym_else_block] = 1318,
        [sym__terminator] = 1318,
        [aux_sym_program_repeat1] = 1318,
        [anon_sym_end] = 1318,
        [anon_sym_while] = 1318,
        [anon_sym_until] = 1318,
        [anon_sym_if] = 1318,
        [anon_sym_unless] = 1318,
        [anon_sym_else] = 1318,
        [sym_comment] = 54,
        [sym__line_break] = 1318,
        [anon_sym_SEMI] = 1318,
    },
    [560] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1476,
        [anon_sym_end] = 1462,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [561] = {
        [sym_else_block] = 1322,
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_end] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_else] = 1322,
        [sym_comment] = 54,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [562] = {
        [anon_sym_end] = 1466,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [563] = {
        [sym__function_name] = 1478,
        [anon_sym_PIPE] = 780,
        [anon_sym_STAR] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_LT] = 780,
        [sym_identifier] = 780,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 780,
        [anon_sym_CARET] = 780,
        [anon_sym_LT_EQ_GT] = 780,
        [anon_sym_EQ_EQ] = 780,
        [anon_sym_EQ_EQ_EQ] = 780,
        [anon_sym_EQ_TILDE] = 780,
        [anon_sym_GT] = 780,
        [anon_sym_GT_EQ] = 780,
        [anon_sym_LT_EQ] = 780,
        [anon_sym_PLUS] = 780,
        [anon_sym_DASH] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_STAR_STAR] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_TILDE] = 780,
        [anon_sym_PLUS_AT] = 780,
        [anon_sym_DASH_AT] = 780,
        [anon_sym_LBRACK_RBRACK] = 780,
        [anon_sym_LBRACK_RBRACK_EQ] = 780,
        [sym__line_break] = 54,
    },
    [564] = {
        [sym_else_block] = 1326,
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_end] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_else] = 1326,
        [sym_comment] = 54,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [565] = {
        [sym_else_block] = 1232,
        [sym__terminator] = 1232,
        [aux_sym_program_repeat1] = 1232,
        [anon_sym_end] = 1232,
        [anon_sym_while] = 1232,
        [anon_sym_until] = 1232,
        [anon_sym_if] = 1232,
        [anon_sym_unless] = 1232,
        [anon_sym_else] = 1232,
        [sym_comment] = 54,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [566] = {
        [sym_else_block] = 1328,
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [anon_sym_end] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_else] = 1328,
        [sym_comment] = 54,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [567] = {
        [sym_identifier] = 1480,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [568] = {
        [sym__argument] = 1482,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1484,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [569] = {
        [sym_identifier] = 1486,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [570] = {
        [sym_else_block] = 438,
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_while] = 438,
        [anon_sym_until] = 438,
        [anon_sym_if] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_else] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [571] = {
        [aux_sym__call_arguments_repeat1] = 1488,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1490,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [572] = {
        [sym_else_block] = 458,
        [sym__terminator] = 458,
        [aux_sym_program_repeat1] = 458,
        [anon_sym_end] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_while] = 458,
        [anon_sym_until] = 458,
        [anon_sym_if] = 458,
        [anon_sym_unless] = 458,
        [anon_sym_else] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [573] = {
        [anon_sym_RBRACK] = 1492,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [574] = {
        [sym_else_block] = 482,
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_end] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_while] = 482,
        [anon_sym_until] = 482,
        [anon_sym_if] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_else] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [575] = {
        [sym_else_block] = 490,
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [anon_sym_end] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_while] = 490,
        [anon_sym_until] = 490,
        [anon_sym_if] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_else] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [576] = {
        [sym_else_block] = 492,
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [anon_sym_end] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_while] = 492,
        [anon_sym_until] = 492,
        [anon_sym_if] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_else] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [577] = {
        [sym__statement] = 1494,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_PIPE] = 1496,
        [anon_sym_end] = 1478,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [578] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1498,
        [anon_sym_end] = 1500,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [579] = {
        [sym__statement] = 1502,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1500,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [580] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1504,
        [anon_sym_end] = 1506,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [581] = {
        [sym_else_block] = 1358,
        [sym__terminator] = 1358,
        [aux_sym_program_repeat1] = 1358,
        [anon_sym_end] = 1358,
        [anon_sym_while] = 1358,
        [anon_sym_until] = 1358,
        [anon_sym_if] = 1358,
        [anon_sym_unless] = 1358,
        [anon_sym_else] = 1358,
        [sym_comment] = 54,
        [sym__line_break] = 1358,
        [anon_sym_SEMI] = 1358,
    },
    [582] = {
        [anon_sym_end] = 1508,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [583] = {
        [sym_else_block] = 1362,
        [sym__terminator] = 1362,
        [aux_sym_program_repeat1] = 1362,
        [anon_sym_end] = 1362,
        [anon_sym_while] = 1362,
        [anon_sym_until] = 1362,
        [anon_sym_if] = 1362,
        [anon_sym_unless] = 1362,
        [anon_sym_else] = 1362,
        [sym_comment] = 54,
        [sym__line_break] = 1362,
        [anon_sym_SEMI] = 1362,
    },
    [584] = {
        [sym_else_block] = 1364,
        [sym__terminator] = 1364,
        [aux_sym_program_repeat1] = 1364,
        [anon_sym_end] = 1364,
        [anon_sym_while] = 1364,
        [anon_sym_until] = 1364,
        [anon_sym_if] = 1364,
        [anon_sym_unless] = 1364,
        [anon_sym_else] = 1364,
        [sym_comment] = 54,
        [sym__line_break] = 1364,
        [anon_sym_SEMI] = 1364,
    },
    [585] = {
        [anon_sym_end] = 1506,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [586] = {
        [sym__statement] = 1510,
        [sym__declaration] = 712,
        [sym_method_declaration] = 714,
        [sym_class_declaration] = 714,
        [sym_module_declaration] = 714,
        [sym_while_statement] = 712,
        [sym_until_statement] = 712,
        [sym_if_statement] = 712,
        [sym_unless_statement] = 712,
        [sym_for_statement] = 712,
        [sym_begin_statement] = 712,
        [sym_if_modifier] = 712,
        [sym_unless_modifier] = 712,
        [sym_while_modifier] = 712,
        [sym_until_modifier] = 712,
        [sym__call] = 718,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 712,
        [sym__argument] = 720,
        [sym__primary] = 722,
        [sym_scope_resolution_expression] = 724,
        [sym_subscript_expression] = 724,
        [sym_member_access] = 724,
        [sym__lhs] = 726,
        [sym__variable] = 724,
        [anon_sym_undef] = 728,
        [anon_sym_alias] = 730,
        [anon_sym_def] = 732,
        [anon_sym_LPAREN] = 734,
        [anon_sym_class] = 736,
        [anon_sym_COLON_COLON] = 738,
        [anon_sym_module] = 740,
        [anon_sym_while] = 742,
        [anon_sym_until] = 744,
        [anon_sym_if] = 746,
        [anon_sym_unless] = 748,
        [anon_sym_for] = 750,
        [anon_sym_begin] = 752,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 754,
        [anon_sym_self] = 754,
        [sym_identifier] = 754,
        [sym_comment] = 54,
        [sym_symbol] = 720,
        [sym__line_break] = 54,
    },
    [587] = {
        [sym_else_block] = 1368,
        [anon_sym_end] = 1368,
        [anon_sym_else] = 1368,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [588] = {
        [sym__expression] = 1512,
        [sym__argument] = 720,
        [sym__primary] = 722,
        [sym_scope_resolution_expression] = 724,
        [sym_subscript_expression] = 724,
        [sym_member_access] = 724,
        [sym__lhs] = 726,
        [sym__variable] = 724,
        [anon_sym_LPAREN] = 734,
        [anon_sym_COLON_COLON] = 738,
        [anon_sym_nil] = 754,
        [anon_sym_self] = 754,
        [sym_identifier] = 754,
        [sym_comment] = 54,
        [sym_symbol] = 720,
        [sym__line_break] = 54,
    },
    [589] = {
        [sym__expression] = 1514,
        [sym__argument] = 720,
        [sym__primary] = 722,
        [sym_scope_resolution_expression] = 724,
        [sym_subscript_expression] = 724,
        [sym_member_access] = 724,
        [sym__lhs] = 726,
        [sym__variable] = 724,
        [anon_sym_LPAREN] = 734,
        [anon_sym_COLON_COLON] = 738,
        [anon_sym_nil] = 754,
        [anon_sym_self] = 754,
        [sym_identifier] = 754,
        [sym_comment] = 54,
        [sym_symbol] = 720,
        [sym__line_break] = 54,
    },
    [590] = {
        [sym__expression] = 1516,
        [sym__argument] = 720,
        [sym__primary] = 722,
        [sym_scope_resolution_expression] = 724,
        [sym_subscript_expression] = 724,
        [sym_member_access] = 724,
        [sym__lhs] = 726,
        [sym__variable] = 724,
        [anon_sym_LPAREN] = 734,
        [anon_sym_COLON_COLON] = 738,
        [anon_sym_nil] = 754,
        [anon_sym_self] = 754,
        [sym_identifier] = 754,
        [sym_comment] = 54,
        [sym_symbol] = 720,
        [sym__line_break] = 54,
    },
    [591] = {
        [sym__expression] = 1518,
        [sym__argument] = 720,
        [sym__primary] = 722,
        [sym_scope_resolution_expression] = 724,
        [sym_subscript_expression] = 724,
        [sym_member_access] = 724,
        [sym__lhs] = 726,
        [sym__variable] = 724,
        [anon_sym_LPAREN] = 734,
        [anon_sym_COLON_COLON] = 738,
        [anon_sym_nil] = 754,
        [anon_sym_self] = 754,
        [sym_identifier] = 754,
        [sym_comment] = 54,
        [sym_symbol] = 720,
        [sym__line_break] = 54,
    },
    [592] = {
        [sym_else_block] = 370,
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_while] = 370,
        [anon_sym_until] = 370,
        [anon_sym_if] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_else] = 370,
        [sym_comment] = 54,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [593] = {
        [sym_else_block] = 372,
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_while] = 372,
        [anon_sym_until] = 372,
        [anon_sym_if] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_else] = 372,
        [sym_comment] = 54,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [594] = {
        [sym_else_block] = 374,
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_while] = 374,
        [anon_sym_until] = 374,
        [anon_sym_if] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_else] = 374,
        [sym_comment] = 54,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [595] = {
        [sym_else_block] = 376,
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_end] = 376,
        [anon_sym_while] = 376,
        [anon_sym_until] = 376,
        [anon_sym_if] = 376,
        [anon_sym_unless] = 376,
        [anon_sym_else] = 376,
        [sym_comment] = 54,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [596] = {
        [sym_else_block] = 382,
        [sym__terminator] = 758,
        [aux_sym_program_repeat1] = 1520,
        [anon_sym_end] = 382,
        [anon_sym_while] = 762,
        [anon_sym_until] = 764,
        [anon_sym_if] = 766,
        [anon_sym_unless] = 768,
        [anon_sym_else] = 382,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [597] = {
        [sym_else_block] = 384,
        [anon_sym_end] = 384,
        [anon_sym_else] = 384,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [598] = {
        [anon_sym_end] = 1522,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [599] = {
        [sym__terminator] = 850,
        [aux_sym_program_repeat1] = 850,
        [anon_sym_end] = 850,
        [anon_sym_while] = 850,
        [anon_sym_until] = 850,
        [anon_sym_if] = 850,
        [anon_sym_unless] = 850,
        [sym_comment] = 54,
        [sym__line_break] = 850,
        [anon_sym_SEMI] = 850,
    },
    [600] = {
        [sym__terminator] = 862,
        [aux_sym_program_repeat1] = 862,
        [anon_sym_end] = 862,
        [anon_sym_while] = 862,
        [anon_sym_until] = 862,
        [anon_sym_if] = 862,
        [anon_sym_unless] = 862,
        [sym_comment] = 54,
        [sym__line_break] = 862,
        [anon_sym_SEMI] = 862,
    },
    [601] = {
        [sym_then_block] = 1524,
        [sym__then_elsif_else_block] = 1526,
        [sym__terminator] = 868,
        [anon_sym_then] = 868,
        [sym_comment] = 54,
        [sym__line_break] = 870,
        [anon_sym_SEMI] = 872,
    },
    [602] = {
        [sym_else_block] = 1528,
        [aux_sym__then_elsif_else_block_repeat1] = 1530,
        [anon_sym_end] = 1532,
        [anon_sym_else] = 706,
        [anon_sym_elsif] = 912,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [603] = {
        [sym__terminator] = 914,
        [aux_sym_program_repeat1] = 914,
        [anon_sym_end] = 914,
        [anon_sym_while] = 914,
        [anon_sym_until] = 914,
        [anon_sym_if] = 914,
        [anon_sym_unless] = 914,
        [sym_comment] = 54,
        [sym__line_break] = 914,
        [anon_sym_SEMI] = 914,
    },
    [604] = {
        [anon_sym_end] = 1534,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [605] = {
        [sym_else_block] = 1536,
        [anon_sym_end] = 1534,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [606] = {
        [sym__terminator] = 1066,
        [aux_sym_program_repeat1] = 1066,
        [anon_sym_end] = 1066,
        [anon_sym_while] = 1066,
        [anon_sym_until] = 1066,
        [anon_sym_if] = 1066,
        [anon_sym_unless] = 1066,
        [sym_comment] = 54,
        [sym__line_break] = 1066,
        [anon_sym_SEMI] = 1066,
    },
    [607] = {
        [anon_sym_end] = 1538,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [608] = {
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [anon_sym_end] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [sym_comment] = 54,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [609] = {
        [sym__terminator] = 1130,
        [aux_sym_program_repeat1] = 1130,
        [anon_sym_end] = 1130,
        [anon_sym_while] = 1130,
        [anon_sym_until] = 1130,
        [anon_sym_if] = 1130,
        [anon_sym_unless] = 1130,
        [sym_comment] = 54,
        [sym__line_break] = 1130,
        [anon_sym_SEMI] = 1130,
    },
    [610] = {
        [sym__statement_block] = 1540,
        [sym__do_block] = 610,
        [sym__terminator] = 612,
        [anon_sym_do] = 614,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [611] = {
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [anon_sym_end] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [sym_comment] = 54,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [612] = {
        [sym__statement_block] = 1542,
        [sym__do_block] = 610,
        [sym__terminator] = 612,
        [anon_sym_do] = 614,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [613] = {
        [sym__terminator] = 1138,
        [aux_sym_program_repeat1] = 1138,
        [anon_sym_end] = 1138,
        [anon_sym_while] = 1138,
        [anon_sym_until] = 1138,
        [anon_sym_if] = 1138,
        [anon_sym_unless] = 1138,
        [sym_comment] = 54,
        [sym__line_break] = 1138,
        [anon_sym_SEMI] = 1138,
    },
    [614] = {
        [sym__terminator] = 1544,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [615] = {
        [sym__statement] = 1546,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1548,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [616] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1550,
        [anon_sym_end] = 1552,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [617] = {
        [sym__terminator] = 1150,
        [aux_sym_program_repeat1] = 1150,
        [anon_sym_end] = 1150,
        [anon_sym_while] = 1150,
        [anon_sym_until] = 1150,
        [anon_sym_if] = 1150,
        [anon_sym_unless] = 1150,
        [sym_comment] = 54,
        [sym__line_break] = 1150,
        [anon_sym_SEMI] = 1150,
    },
    [618] = {
        [anon_sym_end] = 1554,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [619] = {
        [sym__terminator] = 1154,
        [aux_sym_program_repeat1] = 1154,
        [anon_sym_end] = 1154,
        [anon_sym_while] = 1154,
        [anon_sym_until] = 1154,
        [anon_sym_if] = 1154,
        [anon_sym_unless] = 1154,
        [sym_comment] = 54,
        [sym__line_break] = 1154,
        [anon_sym_SEMI] = 1154,
    },
    [620] = {
        [sym__terminator] = 1156,
        [aux_sym_program_repeat1] = 1156,
        [anon_sym_end] = 1156,
        [anon_sym_while] = 1156,
        [anon_sym_until] = 1156,
        [anon_sym_if] = 1156,
        [anon_sym_unless] = 1156,
        [sym_comment] = 54,
        [sym__line_break] = 1156,
        [anon_sym_SEMI] = 1156,
    },
    [621] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [anon_sym_end] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_while] = 276,
        [anon_sym_until] = 276,
        [anon_sym_if] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [622] = {
        [sym__terminator] = 1556,
        [anon_sym_LT] = 1558,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [623] = {
        [sym__statement] = 1560,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1562,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [624] = {
        [sym_identifier] = 1564,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [625] = {
        [sym__terminator] = 1566,
        [aux_sym_class_declaration_repeat1] = 1568,
        [anon_sym_COLON_COLON] = 1172,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [626] = {
        [sym__statement] = 1570,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1572,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [627] = {
        [sym__terminator] = 1574,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [628] = {
        [sym__statement] = 1576,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1578,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [629] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1580,
        [anon_sym_end] = 1582,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [630] = {
        [sym__terminator] = 1196,
        [aux_sym_program_repeat1] = 1196,
        [anon_sym_end] = 1196,
        [anon_sym_while] = 1196,
        [anon_sym_until] = 1196,
        [anon_sym_if] = 1196,
        [anon_sym_unless] = 1196,
        [sym_comment] = 54,
        [sym__line_break] = 1196,
        [anon_sym_SEMI] = 1196,
    },
    [631] = {
        [anon_sym_end] = 1584,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [632] = {
        [sym__terminator] = 1200,
        [aux_sym_program_repeat1] = 1200,
        [anon_sym_end] = 1200,
        [anon_sym_while] = 1200,
        [anon_sym_until] = 1200,
        [anon_sym_if] = 1200,
        [anon_sym_unless] = 1200,
        [sym_comment] = 54,
        [sym__line_break] = 1200,
        [anon_sym_SEMI] = 1200,
    },
    [633] = {
        [sym__terminator] = 1202,
        [aux_sym_program_repeat1] = 1202,
        [anon_sym_end] = 1202,
        [anon_sym_while] = 1202,
        [anon_sym_until] = 1202,
        [anon_sym_if] = 1202,
        [anon_sym_unless] = 1202,
        [sym_comment] = 54,
        [sym__line_break] = 1202,
        [anon_sym_SEMI] = 1202,
    },
    [634] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1586,
        [anon_sym_end] = 1578,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [635] = {
        [sym__terminator] = 1206,
        [aux_sym_program_repeat1] = 1206,
        [anon_sym_end] = 1206,
        [anon_sym_while] = 1206,
        [anon_sym_until] = 1206,
        [anon_sym_if] = 1206,
        [anon_sym_unless] = 1206,
        [sym_comment] = 54,
        [sym__line_break] = 1206,
        [anon_sym_SEMI] = 1206,
    },
    [636] = {
        [anon_sym_end] = 1582,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [637] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1588,
        [anon_sym_end] = 1590,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [638] = {
        [sym__terminator] = 1212,
        [aux_sym_program_repeat1] = 1212,
        [anon_sym_end] = 1212,
        [anon_sym_while] = 1212,
        [anon_sym_until] = 1212,
        [anon_sym_if] = 1212,
        [anon_sym_unless] = 1212,
        [sym_comment] = 54,
        [sym__line_break] = 1212,
        [anon_sym_SEMI] = 1212,
    },
    [639] = {
        [anon_sym_end] = 1572,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [640] = {
        [sym__terminator] = 1214,
        [aux_sym_program_repeat1] = 1214,
        [anon_sym_end] = 1214,
        [anon_sym_while] = 1214,
        [anon_sym_until] = 1214,
        [anon_sym_if] = 1214,
        [anon_sym_unless] = 1214,
        [sym_comment] = 54,
        [sym__line_break] = 1214,
        [anon_sym_SEMI] = 1214,
    },
    [641] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 1592,
        [anon_sym_RPAREN] = 1594,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [642] = {
        [sym__terminator] = 312,
        [aux_sym_program_repeat1] = 312,
        [anon_sym_end] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_while] = 312,
        [anon_sym_until] = 312,
        [anon_sym_if] = 312,
        [anon_sym_unless] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [643] = {
        [anon_sym_RPAREN] = 1596,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [644] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [645] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [646] = {
        [sym_argument_list] = 1598,
        [sym__terminator] = 1600,
        [anon_sym_LPAREN] = 1602,
        [anon_sym_STAR] = 1228,
        [anon_sym_AMP] = 1228,
        [sym_identifier] = 1230,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [647] = {
        [sym__terminator] = 1604,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [648] = {
        [sym__statement] = 1606,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1608,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [649] = {
        [sym_argument_list] = 1610,
        [anon_sym_RPAREN] = 1604,
        [anon_sym_STAR] = 1242,
        [anon_sym_AMP] = 1242,
        [sym_identifier] = 1244,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [650] = {
        [anon_sym_RPAREN] = 1612,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [651] = {
        [sym__statement] = 1614,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1616,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [652] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1618,
        [anon_sym_end] = 1620,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [653] = {
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [sym_comment] = 54,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [654] = {
        [anon_sym_end] = 1622,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [655] = {
        [sym__terminator] = 1308,
        [aux_sym_program_repeat1] = 1308,
        [anon_sym_end] = 1308,
        [anon_sym_while] = 1308,
        [anon_sym_until] = 1308,
        [anon_sym_if] = 1308,
        [anon_sym_unless] = 1308,
        [sym_comment] = 54,
        [sym__line_break] = 1308,
        [anon_sym_SEMI] = 1308,
    },
    [656] = {
        [sym__terminator] = 1310,
        [aux_sym_program_repeat1] = 1310,
        [anon_sym_end] = 1310,
        [anon_sym_while] = 1310,
        [anon_sym_until] = 1310,
        [anon_sym_if] = 1310,
        [anon_sym_unless] = 1310,
        [sym_comment] = 54,
        [sym__line_break] = 1310,
        [anon_sym_SEMI] = 1310,
    },
    [657] = {
        [sym__statement] = 1624,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1620,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [658] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1626,
        [anon_sym_end] = 1622,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [659] = {
        [anon_sym_end] = 1628,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [660] = {
        [sym__terminator] = 1318,
        [aux_sym_program_repeat1] = 1318,
        [anon_sym_end] = 1318,
        [anon_sym_while] = 1318,
        [anon_sym_until] = 1318,
        [anon_sym_if] = 1318,
        [anon_sym_unless] = 1318,
        [sym_comment] = 54,
        [sym__line_break] = 1318,
        [anon_sym_SEMI] = 1318,
    },
    [661] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1630,
        [anon_sym_end] = 1616,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [662] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_end] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_unless] = 1322,
        [sym_comment] = 54,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [663] = {
        [anon_sym_end] = 1620,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [664] = {
        [sym__function_name] = 1632,
        [anon_sym_PIPE] = 576,
        [anon_sym_STAR] = 576,
        [anon_sym_AMP] = 576,
        [anon_sym_LT] = 576,
        [sym_identifier] = 576,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 576,
        [anon_sym_CARET] = 576,
        [anon_sym_LT_EQ_GT] = 576,
        [anon_sym_EQ_EQ] = 576,
        [anon_sym_EQ_EQ_EQ] = 576,
        [anon_sym_EQ_TILDE] = 576,
        [anon_sym_GT] = 576,
        [anon_sym_GT_EQ] = 576,
        [anon_sym_LT_EQ] = 576,
        [anon_sym_PLUS] = 576,
        [anon_sym_DASH] = 576,
        [anon_sym_SLASH] = 576,
        [anon_sym_PERCENT] = 576,
        [anon_sym_STAR_STAR] = 576,
        [anon_sym_LT_LT] = 576,
        [anon_sym_GT_GT] = 576,
        [anon_sym_TILDE] = 576,
        [anon_sym_PLUS_AT] = 576,
        [anon_sym_DASH_AT] = 576,
        [anon_sym_LBRACK_RBRACK] = 576,
        [anon_sym_LBRACK_RBRACK_EQ] = 576,
        [sym__line_break] = 54,
    },
    [665] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_end] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_unless] = 1326,
        [sym_comment] = 54,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [666] = {
        [sym__terminator] = 1232,
        [aux_sym_program_repeat1] = 1232,
        [anon_sym_end] = 1232,
        [anon_sym_while] = 1232,
        [anon_sym_until] = 1232,
        [anon_sym_if] = 1232,
        [anon_sym_unless] = 1232,
        [sym_comment] = 54,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [667] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [anon_sym_end] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_unless] = 1328,
        [sym_comment] = 54,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [668] = {
        [sym_identifier] = 1634,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [669] = {
        [sym__argument] = 1636,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1638,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [670] = {
        [sym_identifier] = 1640,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [671] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_while] = 438,
        [anon_sym_until] = 438,
        [anon_sym_if] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [672] = {
        [aux_sym__call_arguments_repeat1] = 1642,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1644,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [673] = {
        [sym__terminator] = 458,
        [aux_sym_program_repeat1] = 458,
        [anon_sym_end] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_while] = 458,
        [anon_sym_until] = 458,
        [anon_sym_if] = 458,
        [anon_sym_unless] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [674] = {
        [anon_sym_RBRACK] = 1646,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [675] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_end] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_while] = 482,
        [anon_sym_until] = 482,
        [anon_sym_if] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [676] = {
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [anon_sym_end] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_while] = 490,
        [anon_sym_until] = 490,
        [anon_sym_if] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [677] = {
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [anon_sym_end] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_while] = 492,
        [anon_sym_until] = 492,
        [anon_sym_if] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [678] = {
        [sym__statement] = 1648,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_PIPE] = 1650,
        [anon_sym_end] = 1632,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [679] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1652,
        [anon_sym_end] = 1654,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [680] = {
        [sym__statement] = 1656,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1654,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [681] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1658,
        [anon_sym_end] = 1660,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [682] = {
        [sym__terminator] = 1358,
        [aux_sym_program_repeat1] = 1358,
        [anon_sym_end] = 1358,
        [anon_sym_while] = 1358,
        [anon_sym_until] = 1358,
        [anon_sym_if] = 1358,
        [anon_sym_unless] = 1358,
        [sym_comment] = 54,
        [sym__line_break] = 1358,
        [anon_sym_SEMI] = 1358,
    },
    [683] = {
        [anon_sym_end] = 1662,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [684] = {
        [sym__terminator] = 1362,
        [aux_sym_program_repeat1] = 1362,
        [anon_sym_end] = 1362,
        [anon_sym_while] = 1362,
        [anon_sym_until] = 1362,
        [anon_sym_if] = 1362,
        [anon_sym_unless] = 1362,
        [sym_comment] = 54,
        [sym__line_break] = 1362,
        [anon_sym_SEMI] = 1362,
    },
    [685] = {
        [sym__terminator] = 1364,
        [aux_sym_program_repeat1] = 1364,
        [anon_sym_end] = 1364,
        [anon_sym_while] = 1364,
        [anon_sym_until] = 1364,
        [anon_sym_if] = 1364,
        [anon_sym_unless] = 1364,
        [sym_comment] = 54,
        [sym__line_break] = 1364,
        [anon_sym_SEMI] = 1364,
    },
    [686] = {
        [anon_sym_end] = 1660,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [687] = {
        [anon_sym_end] = 1664,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [688] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_RPAREN] = 632,
        [anon_sym_while] = 632,
        [anon_sym_until] = 632,
        [anon_sym_if] = 632,
        [anon_sym_unless] = 632,
        [sym_comment] = 54,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [689] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_RPAREN] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [sym_comment] = 54,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [690] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1666,
        [anon_sym_end] = 1668,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [691] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_RPAREN] = 650,
        [anon_sym_while] = 650,
        [anon_sym_until] = 650,
        [anon_sym_if] = 650,
        [anon_sym_unless] = 650,
        [sym_comment] = 54,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [692] = {
        [anon_sym_end] = 1670,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [693] = {
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_RPAREN] = 654,
        [anon_sym_while] = 654,
        [anon_sym_until] = 654,
        [anon_sym_if] = 654,
        [anon_sym_unless] = 654,
        [sym_comment] = 54,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [694] = {
        [sym__terminator] = 656,
        [aux_sym_program_repeat1] = 656,
        [anon_sym_RPAREN] = 656,
        [anon_sym_while] = 656,
        [anon_sym_until] = 656,
        [anon_sym_if] = 656,
        [anon_sym_unless] = 656,
        [sym_comment] = 54,
        [sym__line_break] = 656,
        [anon_sym_SEMI] = 656,
    },
    [695] = {
        [sym_identifier] = 1672,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [696] = {
        [sym__argument] = 1674,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1676,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [697] = {
        [sym_identifier] = 1678,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [698] = {
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_in] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [699] = {
        [aux_sym__call_arguments_repeat1] = 1680,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1682,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [700] = {
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_in] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [701] = {
        [anon_sym_RBRACK] = 1684,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [702] = {
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_in] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [703] = {
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_in] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [704] = {
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_in] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [705] = {
        [sym_then_block] = 1686,
        [sym__then_else_block] = 1688,
        [sym__terminator] = 662,
        [anon_sym_then] = 662,
        [sym_comment] = 54,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 666,
    },
    [706] = {
        [sym_else_block] = 1690,
        [anon_sym_end] = 1692,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [707] = {
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [anon_sym_RPAREN] = 708,
        [anon_sym_while] = 708,
        [anon_sym_until] = 708,
        [anon_sym_if] = 708,
        [anon_sym_unless] = 708,
        [sym_comment] = 54,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [708] = {
        [anon_sym_end] = 1694,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [709] = {
        [sym__terminator] = 850,
        [aux_sym_program_repeat1] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_while] = 850,
        [anon_sym_until] = 850,
        [anon_sym_if] = 850,
        [anon_sym_unless] = 850,
        [sym_comment] = 54,
        [sym__line_break] = 850,
        [anon_sym_SEMI] = 850,
    },
    [710] = {
        [sym__terminator] = 862,
        [aux_sym_program_repeat1] = 862,
        [anon_sym_RPAREN] = 862,
        [anon_sym_while] = 862,
        [anon_sym_until] = 862,
        [anon_sym_if] = 862,
        [anon_sym_unless] = 862,
        [sym_comment] = 54,
        [sym__line_break] = 862,
        [anon_sym_SEMI] = 862,
    },
    [711] = {
        [sym_then_block] = 1696,
        [sym__then_elsif_else_block] = 1698,
        [sym__terminator] = 868,
        [anon_sym_then] = 868,
        [sym_comment] = 54,
        [sym__line_break] = 870,
        [anon_sym_SEMI] = 872,
    },
    [712] = {
        [sym_else_block] = 1700,
        [aux_sym__then_elsif_else_block_repeat1] = 1702,
        [anon_sym_end] = 1704,
        [anon_sym_else] = 706,
        [anon_sym_elsif] = 912,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [713] = {
        [sym__terminator] = 914,
        [aux_sym_program_repeat1] = 914,
        [anon_sym_RPAREN] = 914,
        [anon_sym_while] = 914,
        [anon_sym_until] = 914,
        [anon_sym_if] = 914,
        [anon_sym_unless] = 914,
        [sym_comment] = 54,
        [sym__line_break] = 914,
        [anon_sym_SEMI] = 914,
    },
    [714] = {
        [anon_sym_end] = 1706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [715] = {
        [sym_else_block] = 1708,
        [anon_sym_end] = 1706,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [716] = {
        [sym__terminator] = 1066,
        [aux_sym_program_repeat1] = 1066,
        [anon_sym_RPAREN] = 1066,
        [anon_sym_while] = 1066,
        [anon_sym_until] = 1066,
        [anon_sym_if] = 1066,
        [anon_sym_unless] = 1066,
        [sym_comment] = 54,
        [sym__line_break] = 1066,
        [anon_sym_SEMI] = 1066,
    },
    [717] = {
        [anon_sym_end] = 1710,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [718] = {
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [anon_sym_RPAREN] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [sym_comment] = 54,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [719] = {
        [sym__terminator] = 1130,
        [aux_sym_program_repeat1] = 1130,
        [anon_sym_RPAREN] = 1130,
        [anon_sym_while] = 1130,
        [anon_sym_until] = 1130,
        [anon_sym_if] = 1130,
        [anon_sym_unless] = 1130,
        [sym_comment] = 54,
        [sym__line_break] = 1130,
        [anon_sym_SEMI] = 1130,
    },
    [720] = {
        [sym__statement_block] = 1712,
        [sym__do_block] = 390,
        [sym__terminator] = 392,
        [anon_sym_do] = 394,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [721] = {
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [anon_sym_RPAREN] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [sym_comment] = 54,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [722] = {
        [sym__statement_block] = 1714,
        [sym__do_block] = 390,
        [sym__terminator] = 392,
        [anon_sym_do] = 394,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [723] = {
        [sym__terminator] = 1138,
        [aux_sym_program_repeat1] = 1138,
        [anon_sym_RPAREN] = 1138,
        [anon_sym_while] = 1138,
        [anon_sym_until] = 1138,
        [anon_sym_if] = 1138,
        [anon_sym_unless] = 1138,
        [sym_comment] = 54,
        [sym__line_break] = 1138,
        [anon_sym_SEMI] = 1138,
    },
    [724] = {
        [sym__terminator] = 1716,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [725] = {
        [sym__statement] = 1718,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1720,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [726] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1722,
        [anon_sym_end] = 1724,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [727] = {
        [sym__terminator] = 1150,
        [aux_sym_program_repeat1] = 1150,
        [anon_sym_RPAREN] = 1150,
        [anon_sym_while] = 1150,
        [anon_sym_until] = 1150,
        [anon_sym_if] = 1150,
        [anon_sym_unless] = 1150,
        [sym_comment] = 54,
        [sym__line_break] = 1150,
        [anon_sym_SEMI] = 1150,
    },
    [728] = {
        [anon_sym_end] = 1726,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [729] = {
        [sym__terminator] = 1154,
        [aux_sym_program_repeat1] = 1154,
        [anon_sym_RPAREN] = 1154,
        [anon_sym_while] = 1154,
        [anon_sym_until] = 1154,
        [anon_sym_if] = 1154,
        [anon_sym_unless] = 1154,
        [sym_comment] = 54,
        [sym__line_break] = 1154,
        [anon_sym_SEMI] = 1154,
    },
    [730] = {
        [sym__terminator] = 1156,
        [aux_sym_program_repeat1] = 1156,
        [anon_sym_RPAREN] = 1156,
        [anon_sym_while] = 1156,
        [anon_sym_until] = 1156,
        [anon_sym_if] = 1156,
        [anon_sym_unless] = 1156,
        [sym_comment] = 54,
        [sym__line_break] = 1156,
        [anon_sym_SEMI] = 1156,
    },
    [731] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [anon_sym_RPAREN] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_while] = 276,
        [anon_sym_until] = 276,
        [anon_sym_if] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [732] = {
        [sym__terminator] = 1728,
        [anon_sym_LT] = 1730,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [733] = {
        [sym__statement] = 1732,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1734,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [734] = {
        [sym_identifier] = 1736,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [735] = {
        [sym__terminator] = 1738,
        [aux_sym_class_declaration_repeat1] = 1740,
        [anon_sym_COLON_COLON] = 1172,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [736] = {
        [sym__statement] = 1742,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1744,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [737] = {
        [sym__terminator] = 1746,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [738] = {
        [sym__statement] = 1748,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1750,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [739] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1752,
        [anon_sym_end] = 1754,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [740] = {
        [sym__terminator] = 1196,
        [aux_sym_program_repeat1] = 1196,
        [anon_sym_RPAREN] = 1196,
        [anon_sym_while] = 1196,
        [anon_sym_until] = 1196,
        [anon_sym_if] = 1196,
        [anon_sym_unless] = 1196,
        [sym_comment] = 54,
        [sym__line_break] = 1196,
        [anon_sym_SEMI] = 1196,
    },
    [741] = {
        [anon_sym_end] = 1756,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [742] = {
        [sym__terminator] = 1200,
        [aux_sym_program_repeat1] = 1200,
        [anon_sym_RPAREN] = 1200,
        [anon_sym_while] = 1200,
        [anon_sym_until] = 1200,
        [anon_sym_if] = 1200,
        [anon_sym_unless] = 1200,
        [sym_comment] = 54,
        [sym__line_break] = 1200,
        [anon_sym_SEMI] = 1200,
    },
    [743] = {
        [sym__terminator] = 1202,
        [aux_sym_program_repeat1] = 1202,
        [anon_sym_RPAREN] = 1202,
        [anon_sym_while] = 1202,
        [anon_sym_until] = 1202,
        [anon_sym_if] = 1202,
        [anon_sym_unless] = 1202,
        [sym_comment] = 54,
        [sym__line_break] = 1202,
        [anon_sym_SEMI] = 1202,
    },
    [744] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1758,
        [anon_sym_end] = 1750,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [745] = {
        [sym__terminator] = 1206,
        [aux_sym_program_repeat1] = 1206,
        [anon_sym_RPAREN] = 1206,
        [anon_sym_while] = 1206,
        [anon_sym_until] = 1206,
        [anon_sym_if] = 1206,
        [anon_sym_unless] = 1206,
        [sym_comment] = 54,
        [sym__line_break] = 1206,
        [anon_sym_SEMI] = 1206,
    },
    [746] = {
        [anon_sym_end] = 1754,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [747] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1760,
        [anon_sym_end] = 1762,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [748] = {
        [sym__terminator] = 1212,
        [aux_sym_program_repeat1] = 1212,
        [anon_sym_RPAREN] = 1212,
        [anon_sym_while] = 1212,
        [anon_sym_until] = 1212,
        [anon_sym_if] = 1212,
        [anon_sym_unless] = 1212,
        [sym_comment] = 54,
        [sym__line_break] = 1212,
        [anon_sym_SEMI] = 1212,
    },
    [749] = {
        [anon_sym_end] = 1744,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [750] = {
        [sym__terminator] = 1214,
        [aux_sym_program_repeat1] = 1214,
        [anon_sym_RPAREN] = 1214,
        [anon_sym_while] = 1214,
        [anon_sym_until] = 1214,
        [anon_sym_if] = 1214,
        [anon_sym_unless] = 1214,
        [sym_comment] = 54,
        [sym__line_break] = 1214,
        [anon_sym_SEMI] = 1214,
    },
    [751] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 1764,
        [anon_sym_RPAREN] = 1766,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [752] = {
        [sym__terminator] = 312,
        [aux_sym_program_repeat1] = 312,
        [anon_sym_RPAREN] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_while] = 312,
        [anon_sym_until] = 312,
        [anon_sym_if] = 312,
        [anon_sym_unless] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [753] = {
        [anon_sym_RPAREN] = 1768,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [754] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_RPAREN] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [755] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_RPAREN] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [756] = {
        [sym_argument_list] = 1770,
        [sym__terminator] = 1772,
        [anon_sym_LPAREN] = 1774,
        [anon_sym_STAR] = 1228,
        [anon_sym_AMP] = 1228,
        [sym_identifier] = 1230,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [757] = {
        [sym__terminator] = 1776,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [758] = {
        [sym__statement] = 1778,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1780,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [759] = {
        [sym_argument_list] = 1782,
        [anon_sym_RPAREN] = 1776,
        [anon_sym_STAR] = 1242,
        [anon_sym_AMP] = 1242,
        [sym_identifier] = 1244,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [760] = {
        [anon_sym_RPAREN] = 1784,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [761] = {
        [sym__statement] = 1786,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1788,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [762] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1790,
        [anon_sym_end] = 1792,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [763] = {
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_RPAREN] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [sym_comment] = 54,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [764] = {
        [anon_sym_end] = 1794,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [765] = {
        [sym__terminator] = 1308,
        [aux_sym_program_repeat1] = 1308,
        [anon_sym_RPAREN] = 1308,
        [anon_sym_while] = 1308,
        [anon_sym_until] = 1308,
        [anon_sym_if] = 1308,
        [anon_sym_unless] = 1308,
        [sym_comment] = 54,
        [sym__line_break] = 1308,
        [anon_sym_SEMI] = 1308,
    },
    [766] = {
        [sym__terminator] = 1310,
        [aux_sym_program_repeat1] = 1310,
        [anon_sym_RPAREN] = 1310,
        [anon_sym_while] = 1310,
        [anon_sym_until] = 1310,
        [anon_sym_if] = 1310,
        [anon_sym_unless] = 1310,
        [sym_comment] = 54,
        [sym__line_break] = 1310,
        [anon_sym_SEMI] = 1310,
    },
    [767] = {
        [sym__statement] = 1796,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1792,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [768] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1798,
        [anon_sym_end] = 1794,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [769] = {
        [anon_sym_end] = 1800,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [770] = {
        [sym__terminator] = 1318,
        [aux_sym_program_repeat1] = 1318,
        [anon_sym_RPAREN] = 1318,
        [anon_sym_while] = 1318,
        [anon_sym_until] = 1318,
        [anon_sym_if] = 1318,
        [anon_sym_unless] = 1318,
        [sym_comment] = 54,
        [sym__line_break] = 1318,
        [anon_sym_SEMI] = 1318,
    },
    [771] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1802,
        [anon_sym_end] = 1788,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [772] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_RPAREN] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_unless] = 1322,
        [sym_comment] = 54,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [773] = {
        [anon_sym_end] = 1792,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [774] = {
        [sym__function_name] = 1804,
        [anon_sym_PIPE] = 302,
        [anon_sym_STAR] = 302,
        [anon_sym_AMP] = 302,
        [anon_sym_LT] = 302,
        [sym_identifier] = 302,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 302,
        [anon_sym_CARET] = 302,
        [anon_sym_LT_EQ_GT] = 302,
        [anon_sym_EQ_EQ] = 302,
        [anon_sym_EQ_EQ_EQ] = 302,
        [anon_sym_EQ_TILDE] = 302,
        [anon_sym_GT] = 302,
        [anon_sym_GT_EQ] = 302,
        [anon_sym_LT_EQ] = 302,
        [anon_sym_PLUS] = 302,
        [anon_sym_DASH] = 302,
        [anon_sym_SLASH] = 302,
        [anon_sym_PERCENT] = 302,
        [anon_sym_STAR_STAR] = 302,
        [anon_sym_LT_LT] = 302,
        [anon_sym_GT_GT] = 302,
        [anon_sym_TILDE] = 302,
        [anon_sym_PLUS_AT] = 302,
        [anon_sym_DASH_AT] = 302,
        [anon_sym_LBRACK_RBRACK] = 302,
        [anon_sym_LBRACK_RBRACK_EQ] = 302,
        [sym__line_break] = 54,
    },
    [775] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_RPAREN] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_unless] = 1326,
        [sym_comment] = 54,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [776] = {
        [sym__terminator] = 1232,
        [aux_sym_program_repeat1] = 1232,
        [anon_sym_RPAREN] = 1232,
        [anon_sym_while] = 1232,
        [anon_sym_until] = 1232,
        [anon_sym_if] = 1232,
        [anon_sym_unless] = 1232,
        [sym_comment] = 54,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [777] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [anon_sym_RPAREN] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_unless] = 1328,
        [sym_comment] = 54,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [778] = {
        [sym_identifier] = 1806,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [779] = {
        [sym__argument] = 1808,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1810,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [780] = {
        [sym_identifier] = 1812,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [781] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_RPAREN] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_while] = 438,
        [anon_sym_until] = 438,
        [anon_sym_if] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [782] = {
        [aux_sym__call_arguments_repeat1] = 1814,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1816,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [783] = {
        [sym__terminator] = 458,
        [aux_sym_program_repeat1] = 458,
        [anon_sym_RPAREN] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_while] = 458,
        [anon_sym_until] = 458,
        [anon_sym_if] = 458,
        [anon_sym_unless] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [784] = {
        [anon_sym_RBRACK] = 1818,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [785] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_RPAREN] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_while] = 482,
        [anon_sym_until] = 482,
        [anon_sym_if] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [786] = {
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [anon_sym_RPAREN] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_while] = 490,
        [anon_sym_until] = 490,
        [anon_sym_if] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [787] = {
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [anon_sym_RPAREN] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_while] = 492,
        [anon_sym_until] = 492,
        [anon_sym_if] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [788] = {
        [sym__statement] = 1820,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_PIPE] = 1822,
        [anon_sym_end] = 1804,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [789] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1824,
        [anon_sym_end] = 1826,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [790] = {
        [sym__statement] = 1828,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1826,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [791] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1830,
        [anon_sym_end] = 1832,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [792] = {
        [sym__terminator] = 1358,
        [aux_sym_program_repeat1] = 1358,
        [anon_sym_RPAREN] = 1358,
        [anon_sym_while] = 1358,
        [anon_sym_until] = 1358,
        [anon_sym_if] = 1358,
        [anon_sym_unless] = 1358,
        [sym_comment] = 54,
        [sym__line_break] = 1358,
        [anon_sym_SEMI] = 1358,
    },
    [793] = {
        [anon_sym_end] = 1834,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [794] = {
        [sym__terminator] = 1362,
        [aux_sym_program_repeat1] = 1362,
        [anon_sym_RPAREN] = 1362,
        [anon_sym_while] = 1362,
        [anon_sym_until] = 1362,
        [anon_sym_if] = 1362,
        [anon_sym_unless] = 1362,
        [sym_comment] = 54,
        [sym__line_break] = 1362,
        [anon_sym_SEMI] = 1362,
    },
    [795] = {
        [sym__terminator] = 1364,
        [aux_sym_program_repeat1] = 1364,
        [anon_sym_RPAREN] = 1364,
        [anon_sym_while] = 1364,
        [anon_sym_until] = 1364,
        [anon_sym_if] = 1364,
        [anon_sym_unless] = 1364,
        [sym_comment] = 54,
        [sym__line_break] = 1364,
        [anon_sym_SEMI] = 1364,
    },
    [796] = {
        [anon_sym_end] = 1832,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [797] = {
        [anon_sym_RPAREN] = 1836,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [798] = {
        [aux_sym__call_arguments_repeat1] = 356,
        [anon_sym_do] = 356,
        [anon_sym_COMMA] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [799] = {
        [aux_sym__call_arguments_repeat1] = 378,
        [anon_sym_do] = 378,
        [anon_sym_COMMA] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [800] = {
        [sym_identifier] = 1838,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [801] = {
        [sym__argument] = 1840,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 1842,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [802] = {
        [sym_identifier] = 1844,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [803] = {
        [aux_sym__call_arguments_repeat1] = 438,
        [anon_sym_do] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [804] = {
        [aux_sym__call_arguments_repeat1] = 1846,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 1848,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [805] = {
        [aux_sym__call_arguments_repeat1] = 458,
        [anon_sym_do] = 458,
        [anon_sym_COMMA] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [806] = {
        [anon_sym_RBRACK] = 1850,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [807] = {
        [aux_sym__call_arguments_repeat1] = 482,
        [anon_sym_do] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [808] = {
        [aux_sym__call_arguments_repeat1] = 490,
        [anon_sym_do] = 490,
        [anon_sym_COMMA] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [809] = {
        [aux_sym__call_arguments_repeat1] = 492,
        [anon_sym_do] = 492,
        [anon_sym_COMMA] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [810] = {
        [anon_sym_do] = 1852,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [811] = {
        [sym__argument] = 1854,
        [sym__primary] = 238,
        [sym_scope_resolution_expression] = 240,
        [sym_subscript_expression] = 240,
        [sym_member_access] = 240,
        [sym__lhs] = 242,
        [sym__variable] = 240,
        [anon_sym_LPAREN] = 246,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_nil] = 252,
        [anon_sym_self] = 252,
        [sym_identifier] = 252,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [812] = {
        [aux_sym__call_arguments_repeat1] = 1856,
        [anon_sym_do] = 486,
        [anon_sym_COMMA] = 262,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [813] = {
        [anon_sym_do] = 488,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [814] = {
        [sym__terminator] = 332,
        [aux_sym_program_repeat1] = 332,
        [ts_builtin_sym_end] = 332,
        [anon_sym_while] = 332,
        [anon_sym_until] = 332,
        [anon_sym_if] = 332,
        [anon_sym_unless] = 332,
        [sym_comment] = 54,
        [sym__line_break] = 332,
        [anon_sym_SEMI] = 332,
    },
    [815] = {
        [anon_sym_COLON_COLON] = 96,
        [anon_sym_in] = 1858,
        [anon_sym_LBRACK] = 96,
        [anon_sym_DOT] = 96,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [816] = {
        [sym__expression] = 1860,
        [sym__argument] = 166,
        [sym__primary] = 168,
        [sym_scope_resolution_expression] = 170,
        [sym_subscript_expression] = 170,
        [sym_member_access] = 170,
        [sym__lhs] = 172,
        [sym__variable] = 170,
        [anon_sym_LPAREN] = 174,
        [anon_sym_COLON_COLON] = 176,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 54,
        [sym_symbol] = 166,
        [sym__line_break] = 54,
    },
    [817] = {
        [sym__statement_block] = 1862,
        [sym__do_block] = 1864,
        [sym__terminator] = 1866,
        [anon_sym_do] = 1868,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [818] = {
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [ts_builtin_sym_end] = 496,
        [anon_sym_while] = 496,
        [anon_sym_until] = 496,
        [anon_sym_if] = 496,
        [anon_sym_unless] = 496,
        [sym_comment] = 54,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [819] = {
        [sym__terminator] = 498,
        [aux_sym_program_repeat1] = 498,
        [ts_builtin_sym_end] = 498,
        [anon_sym_while] = 498,
        [anon_sym_until] = 498,
        [anon_sym_if] = 498,
        [anon_sym_unless] = 498,
        [sym_comment] = 54,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [820] = {
        [sym__statement] = 1870,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1872,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [821] = {
        [sym__statement] = 1874,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1876,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [822] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1878,
        [anon_sym_end] = 1880,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [823] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [ts_builtin_sym_end] = 572,
        [anon_sym_while] = 572,
        [anon_sym_until] = 572,
        [anon_sym_if] = 572,
        [anon_sym_unless] = 572,
        [sym_comment] = 54,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [824] = {
        [anon_sym_end] = 1882,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [825] = {
        [sym__terminator] = 632,
        [aux_sym_program_repeat1] = 632,
        [ts_builtin_sym_end] = 632,
        [anon_sym_while] = 632,
        [anon_sym_until] = 632,
        [anon_sym_if] = 632,
        [anon_sym_unless] = 632,
        [sym_comment] = 54,
        [sym__line_break] = 632,
        [anon_sym_SEMI] = 632,
    },
    [826] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [ts_builtin_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [sym_comment] = 54,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [827] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1884,
        [anon_sym_end] = 1886,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [828] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [ts_builtin_sym_end] = 650,
        [anon_sym_while] = 650,
        [anon_sym_until] = 650,
        [anon_sym_if] = 650,
        [anon_sym_unless] = 650,
        [sym_comment] = 54,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [829] = {
        [anon_sym_end] = 1888,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [830] = {
        [sym__terminator] = 654,
        [aux_sym_program_repeat1] = 654,
        [ts_builtin_sym_end] = 654,
        [anon_sym_while] = 654,
        [anon_sym_until] = 654,
        [anon_sym_if] = 654,
        [anon_sym_unless] = 654,
        [sym_comment] = 54,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [831] = {
        [sym__terminator] = 656,
        [aux_sym_program_repeat1] = 656,
        [ts_builtin_sym_end] = 656,
        [anon_sym_while] = 656,
        [anon_sym_until] = 656,
        [anon_sym_if] = 656,
        [anon_sym_unless] = 656,
        [sym_comment] = 54,
        [sym__line_break] = 656,
        [anon_sym_SEMI] = 656,
    },
    [832] = {
        [sym_then_block] = 1890,
        [sym__then_else_block] = 1892,
        [sym__terminator] = 662,
        [anon_sym_then] = 662,
        [sym_comment] = 54,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 666,
    },
    [833] = {
        [sym_else_block] = 1894,
        [anon_sym_end] = 1896,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [834] = {
        [sym__terminator] = 708,
        [aux_sym_program_repeat1] = 708,
        [ts_builtin_sym_end] = 708,
        [anon_sym_while] = 708,
        [anon_sym_until] = 708,
        [anon_sym_if] = 708,
        [anon_sym_unless] = 708,
        [sym_comment] = 54,
        [sym__line_break] = 708,
        [anon_sym_SEMI] = 708,
    },
    [835] = {
        [anon_sym_end] = 1898,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [836] = {
        [sym__terminator] = 850,
        [aux_sym_program_repeat1] = 850,
        [ts_builtin_sym_end] = 850,
        [anon_sym_while] = 850,
        [anon_sym_until] = 850,
        [anon_sym_if] = 850,
        [anon_sym_unless] = 850,
        [sym_comment] = 54,
        [sym__line_break] = 850,
        [anon_sym_SEMI] = 850,
    },
    [837] = {
        [sym__terminator] = 862,
        [aux_sym_program_repeat1] = 862,
        [ts_builtin_sym_end] = 862,
        [anon_sym_while] = 862,
        [anon_sym_until] = 862,
        [anon_sym_if] = 862,
        [anon_sym_unless] = 862,
        [sym_comment] = 54,
        [sym__line_break] = 862,
        [anon_sym_SEMI] = 862,
    },
    [838] = {
        [sym_then_block] = 1900,
        [sym__then_elsif_else_block] = 1902,
        [sym__terminator] = 868,
        [anon_sym_then] = 868,
        [sym_comment] = 54,
        [sym__line_break] = 870,
        [anon_sym_SEMI] = 872,
    },
    [839] = {
        [sym_else_block] = 1904,
        [aux_sym__then_elsif_else_block_repeat1] = 1906,
        [anon_sym_end] = 1908,
        [anon_sym_else] = 706,
        [anon_sym_elsif] = 912,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [840] = {
        [sym__terminator] = 914,
        [aux_sym_program_repeat1] = 914,
        [ts_builtin_sym_end] = 914,
        [anon_sym_while] = 914,
        [anon_sym_until] = 914,
        [anon_sym_if] = 914,
        [anon_sym_unless] = 914,
        [sym_comment] = 54,
        [sym__line_break] = 914,
        [anon_sym_SEMI] = 914,
    },
    [841] = {
        [anon_sym_end] = 1910,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [842] = {
        [sym_else_block] = 1912,
        [anon_sym_end] = 1910,
        [anon_sym_else] = 706,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [843] = {
        [sym__terminator] = 1066,
        [aux_sym_program_repeat1] = 1066,
        [ts_builtin_sym_end] = 1066,
        [anon_sym_while] = 1066,
        [anon_sym_until] = 1066,
        [anon_sym_if] = 1066,
        [anon_sym_unless] = 1066,
        [sym_comment] = 54,
        [sym__line_break] = 1066,
        [anon_sym_SEMI] = 1066,
    },
    [844] = {
        [anon_sym_end] = 1914,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [845] = {
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [ts_builtin_sym_end] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [sym_comment] = 54,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [846] = {
        [sym__terminator] = 1130,
        [aux_sym_program_repeat1] = 1130,
        [ts_builtin_sym_end] = 1130,
        [anon_sym_while] = 1130,
        [anon_sym_until] = 1130,
        [anon_sym_if] = 1130,
        [anon_sym_unless] = 1130,
        [sym_comment] = 54,
        [sym__line_break] = 1130,
        [anon_sym_SEMI] = 1130,
    },
    [847] = {
        [sym__statement_block] = 1916,
        [sym__do_block] = 1864,
        [sym__terminator] = 1866,
        [anon_sym_do] = 1868,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [848] = {
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [ts_builtin_sym_end] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [sym_comment] = 54,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [849] = {
        [sym__statement_block] = 1918,
        [sym__do_block] = 1864,
        [sym__terminator] = 1866,
        [anon_sym_do] = 1868,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [850] = {
        [sym__terminator] = 1138,
        [aux_sym_program_repeat1] = 1138,
        [ts_builtin_sym_end] = 1138,
        [anon_sym_while] = 1138,
        [anon_sym_until] = 1138,
        [anon_sym_if] = 1138,
        [anon_sym_unless] = 1138,
        [sym_comment] = 54,
        [sym__line_break] = 1138,
        [anon_sym_SEMI] = 1138,
    },
    [851] = {
        [sym__terminator] = 1920,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [852] = {
        [sym__statement] = 1922,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1924,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [853] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1926,
        [anon_sym_end] = 1928,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [854] = {
        [sym__terminator] = 1150,
        [aux_sym_program_repeat1] = 1150,
        [ts_builtin_sym_end] = 1150,
        [anon_sym_while] = 1150,
        [anon_sym_until] = 1150,
        [anon_sym_if] = 1150,
        [anon_sym_unless] = 1150,
        [sym_comment] = 54,
        [sym__line_break] = 1150,
        [anon_sym_SEMI] = 1150,
    },
    [855] = {
        [anon_sym_end] = 1930,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [856] = {
        [sym__terminator] = 1154,
        [aux_sym_program_repeat1] = 1154,
        [ts_builtin_sym_end] = 1154,
        [anon_sym_while] = 1154,
        [anon_sym_until] = 1154,
        [anon_sym_if] = 1154,
        [anon_sym_unless] = 1154,
        [sym_comment] = 54,
        [sym__line_break] = 1154,
        [anon_sym_SEMI] = 1154,
    },
    [857] = {
        [sym__terminator] = 1156,
        [aux_sym_program_repeat1] = 1156,
        [ts_builtin_sym_end] = 1156,
        [anon_sym_while] = 1156,
        [anon_sym_until] = 1156,
        [anon_sym_if] = 1156,
        [anon_sym_unless] = 1156,
        [sym_comment] = 54,
        [sym__line_break] = 1156,
        [anon_sym_SEMI] = 1156,
    },
    [858] = {
        [sym__terminator] = 276,
        [aux_sym_program_repeat1] = 276,
        [ts_builtin_sym_end] = 276,
        [anon_sym_COLON_COLON] = 276,
        [anon_sym_while] = 276,
        [anon_sym_until] = 276,
        [anon_sym_if] = 276,
        [anon_sym_unless] = 276,
        [anon_sym_LBRACK] = 276,
        [anon_sym_DOT] = 276,
        [sym_comment] = 54,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 276,
    },
    [859] = {
        [sym__terminator] = 1932,
        [anon_sym_LT] = 1934,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [860] = {
        [sym__statement] = 1936,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1938,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [861] = {
        [sym_identifier] = 1940,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [862] = {
        [sym__terminator] = 1942,
        [aux_sym_class_declaration_repeat1] = 1944,
        [anon_sym_COLON_COLON] = 1172,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [863] = {
        [sym__statement] = 1946,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1948,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [864] = {
        [sym__terminator] = 1950,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [865] = {
        [sym__statement] = 1952,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1954,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [866] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1956,
        [anon_sym_end] = 1958,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [867] = {
        [sym__terminator] = 1196,
        [aux_sym_program_repeat1] = 1196,
        [ts_builtin_sym_end] = 1196,
        [anon_sym_while] = 1196,
        [anon_sym_until] = 1196,
        [anon_sym_if] = 1196,
        [anon_sym_unless] = 1196,
        [sym_comment] = 54,
        [sym__line_break] = 1196,
        [anon_sym_SEMI] = 1196,
    },
    [868] = {
        [anon_sym_end] = 1960,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [869] = {
        [sym__terminator] = 1200,
        [aux_sym_program_repeat1] = 1200,
        [ts_builtin_sym_end] = 1200,
        [anon_sym_while] = 1200,
        [anon_sym_until] = 1200,
        [anon_sym_if] = 1200,
        [anon_sym_unless] = 1200,
        [sym_comment] = 54,
        [sym__line_break] = 1200,
        [anon_sym_SEMI] = 1200,
    },
    [870] = {
        [sym__terminator] = 1202,
        [aux_sym_program_repeat1] = 1202,
        [ts_builtin_sym_end] = 1202,
        [anon_sym_while] = 1202,
        [anon_sym_until] = 1202,
        [anon_sym_if] = 1202,
        [anon_sym_unless] = 1202,
        [sym_comment] = 54,
        [sym__line_break] = 1202,
        [anon_sym_SEMI] = 1202,
    },
    [871] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1962,
        [anon_sym_end] = 1954,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [872] = {
        [sym__terminator] = 1206,
        [aux_sym_program_repeat1] = 1206,
        [ts_builtin_sym_end] = 1206,
        [anon_sym_while] = 1206,
        [anon_sym_until] = 1206,
        [anon_sym_if] = 1206,
        [anon_sym_unless] = 1206,
        [sym_comment] = 54,
        [sym__line_break] = 1206,
        [anon_sym_SEMI] = 1206,
    },
    [873] = {
        [anon_sym_end] = 1958,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [874] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1964,
        [anon_sym_end] = 1966,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [875] = {
        [sym__terminator] = 1212,
        [aux_sym_program_repeat1] = 1212,
        [ts_builtin_sym_end] = 1212,
        [anon_sym_while] = 1212,
        [anon_sym_until] = 1212,
        [anon_sym_if] = 1212,
        [anon_sym_unless] = 1212,
        [sym_comment] = 54,
        [sym__line_break] = 1212,
        [anon_sym_SEMI] = 1212,
    },
    [876] = {
        [anon_sym_end] = 1948,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [877] = {
        [sym__terminator] = 1214,
        [aux_sym_program_repeat1] = 1214,
        [ts_builtin_sym_end] = 1214,
        [anon_sym_while] = 1214,
        [anon_sym_until] = 1214,
        [anon_sym_if] = 1214,
        [anon_sym_unless] = 1214,
        [sym_comment] = 54,
        [sym__line_break] = 1214,
        [anon_sym_SEMI] = 1214,
    },
    [878] = {
        [sym__terminator] = 278,
        [aux_sym_program_repeat1] = 1968,
        [anon_sym_RPAREN] = 1970,
        [anon_sym_while] = 284,
        [anon_sym_until] = 286,
        [anon_sym_if] = 288,
        [anon_sym_unless] = 290,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [879] = {
        [sym__terminator] = 312,
        [aux_sym_program_repeat1] = 312,
        [ts_builtin_sym_end] = 312,
        [anon_sym_COLON_COLON] = 312,
        [anon_sym_while] = 312,
        [anon_sym_until] = 312,
        [anon_sym_if] = 312,
        [anon_sym_unless] = 312,
        [anon_sym_LBRACK] = 312,
        [anon_sym_DOT] = 312,
        [sym_comment] = 54,
        [sym__line_break] = 312,
        [anon_sym_SEMI] = 312,
    },
    [880] = {
        [anon_sym_RPAREN] = 1972,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [881] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [ts_builtin_sym_end] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_DOT] = 356,
        [sym_comment] = 54,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [882] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [ts_builtin_sym_end] = 378,
        [anon_sym_COLON_COLON] = 378,
        [anon_sym_while] = 378,
        [anon_sym_until] = 378,
        [anon_sym_if] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_LBRACK] = 378,
        [anon_sym_DOT] = 378,
        [sym_comment] = 54,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [883] = {
        [sym_argument_list] = 1974,
        [sym__terminator] = 1976,
        [anon_sym_LPAREN] = 1978,
        [anon_sym_STAR] = 1228,
        [anon_sym_AMP] = 1228,
        [sym_identifier] = 1230,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [884] = {
        [sym__terminator] = 1980,
        [sym_comment] = 54,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 398,
    },
    [885] = {
        [sym__statement] = 1982,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1984,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [886] = {
        [sym_argument_list] = 1986,
        [anon_sym_RPAREN] = 1980,
        [anon_sym_STAR] = 1242,
        [anon_sym_AMP] = 1242,
        [sym_identifier] = 1244,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [887] = {
        [anon_sym_RPAREN] = 1988,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [888] = {
        [sym__statement] = 1990,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1992,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [889] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 1994,
        [anon_sym_end] = 1996,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [890] = {
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [ts_builtin_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [sym_comment] = 54,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [891] = {
        [anon_sym_end] = 1998,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [892] = {
        [sym__terminator] = 1308,
        [aux_sym_program_repeat1] = 1308,
        [ts_builtin_sym_end] = 1308,
        [anon_sym_while] = 1308,
        [anon_sym_until] = 1308,
        [anon_sym_if] = 1308,
        [anon_sym_unless] = 1308,
        [sym_comment] = 54,
        [sym__line_break] = 1308,
        [anon_sym_SEMI] = 1308,
    },
    [893] = {
        [sym__terminator] = 1310,
        [aux_sym_program_repeat1] = 1310,
        [ts_builtin_sym_end] = 1310,
        [anon_sym_while] = 1310,
        [anon_sym_until] = 1310,
        [anon_sym_if] = 1310,
        [anon_sym_unless] = 1310,
        [sym_comment] = 54,
        [sym__line_break] = 1310,
        [anon_sym_SEMI] = 1310,
    },
    [894] = {
        [sym__statement] = 2000,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 1996,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [895] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 2002,
        [anon_sym_end] = 1998,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [896] = {
        [anon_sym_end] = 2004,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [897] = {
        [sym__terminator] = 1318,
        [aux_sym_program_repeat1] = 1318,
        [ts_builtin_sym_end] = 1318,
        [anon_sym_while] = 1318,
        [anon_sym_until] = 1318,
        [anon_sym_if] = 1318,
        [anon_sym_unless] = 1318,
        [sym_comment] = 54,
        [sym__line_break] = 1318,
        [anon_sym_SEMI] = 1318,
    },
    [898] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 2006,
        [anon_sym_end] = 1992,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [899] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [ts_builtin_sym_end] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_unless] = 1322,
        [sym_comment] = 54,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [900] = {
        [anon_sym_end] = 1996,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [901] = {
        [sym__function_name] = 2008,
        [anon_sym_PIPE] = 100,
        [anon_sym_STAR] = 100,
        [anon_sym_AMP] = 100,
        [anon_sym_LT] = 100,
        [sym_identifier] = 100,
        [sym_comment] = 54,
        [anon_sym_DOT_DOT] = 100,
        [anon_sym_CARET] = 100,
        [anon_sym_LT_EQ_GT] = 100,
        [anon_sym_EQ_EQ] = 100,
        [anon_sym_EQ_EQ_EQ] = 100,
        [anon_sym_EQ_TILDE] = 100,
        [anon_sym_GT] = 100,
        [anon_sym_GT_EQ] = 100,
        [anon_sym_LT_EQ] = 100,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_SLASH] = 100,
        [anon_sym_PERCENT] = 100,
        [anon_sym_STAR_STAR] = 100,
        [anon_sym_LT_LT] = 100,
        [anon_sym_GT_GT] = 100,
        [anon_sym_TILDE] = 100,
        [anon_sym_PLUS_AT] = 100,
        [anon_sym_DASH_AT] = 100,
        [anon_sym_LBRACK_RBRACK] = 100,
        [anon_sym_LBRACK_RBRACK_EQ] = 100,
        [sym__line_break] = 54,
    },
    [902] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [ts_builtin_sym_end] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_unless] = 1326,
        [sym_comment] = 54,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [903] = {
        [sym__terminator] = 1232,
        [aux_sym_program_repeat1] = 1232,
        [ts_builtin_sym_end] = 1232,
        [anon_sym_while] = 1232,
        [anon_sym_until] = 1232,
        [anon_sym_if] = 1232,
        [anon_sym_unless] = 1232,
        [sym_comment] = 54,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [904] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [ts_builtin_sym_end] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_unless] = 1328,
        [sym_comment] = 54,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [905] = {
        [sym_identifier] = 2010,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [906] = {
        [sym__argument] = 2012,
        [sym__primary] = 422,
        [sym_scope_resolution_expression] = 424,
        [sym_subscript_expression] = 424,
        [sym_member_access] = 424,
        [sym__lhs] = 426,
        [sym__variable] = 424,
        [anon_sym_LPAREN] = 428,
        [anon_sym_COLON_COLON] = 430,
        [anon_sym_RBRACK] = 2014,
        [anon_sym_nil] = 434,
        [anon_sym_self] = 434,
        [sym_identifier] = 434,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [907] = {
        [sym_identifier] = 2016,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [908] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_COLON_COLON] = 438,
        [anon_sym_while] = 438,
        [anon_sym_until] = 438,
        [anon_sym_if] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_LBRACK] = 438,
        [anon_sym_DOT] = 438,
        [sym_comment] = 54,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [909] = {
        [aux_sym__call_arguments_repeat1] = 2018,
        [anon_sym_COMMA] = 442,
        [anon_sym_RBRACK] = 2020,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [910] = {
        [sym__terminator] = 458,
        [aux_sym_program_repeat1] = 458,
        [ts_builtin_sym_end] = 458,
        [anon_sym_COLON_COLON] = 458,
        [anon_sym_while] = 458,
        [anon_sym_until] = 458,
        [anon_sym_if] = 458,
        [anon_sym_unless] = 458,
        [anon_sym_LBRACK] = 458,
        [anon_sym_DOT] = 458,
        [sym_comment] = 54,
        [sym__line_break] = 458,
        [anon_sym_SEMI] = 458,
    },
    [911] = {
        [anon_sym_RBRACK] = 2022,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [912] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [ts_builtin_sym_end] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_while] = 482,
        [anon_sym_until] = 482,
        [anon_sym_if] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 54,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [913] = {
        [sym__terminator] = 490,
        [aux_sym_program_repeat1] = 490,
        [ts_builtin_sym_end] = 490,
        [anon_sym_COLON_COLON] = 490,
        [anon_sym_while] = 490,
        [anon_sym_until] = 490,
        [anon_sym_if] = 490,
        [anon_sym_unless] = 490,
        [anon_sym_LBRACK] = 490,
        [anon_sym_DOT] = 490,
        [sym_comment] = 54,
        [sym__line_break] = 490,
        [anon_sym_SEMI] = 490,
    },
    [914] = {
        [sym__terminator] = 492,
        [aux_sym_program_repeat1] = 492,
        [ts_builtin_sym_end] = 492,
        [anon_sym_COLON_COLON] = 492,
        [anon_sym_while] = 492,
        [anon_sym_until] = 492,
        [anon_sym_if] = 492,
        [anon_sym_unless] = 492,
        [anon_sym_LBRACK] = 492,
        [anon_sym_DOT] = 492,
        [sym_comment] = 54,
        [sym__line_break] = 492,
        [anon_sym_SEMI] = 492,
    },
    [915] = {
        [sym__statement] = 2024,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_PIPE] = 2026,
        [anon_sym_end] = 2008,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [916] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 2028,
        [anon_sym_end] = 2030,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [917] = {
        [sym__statement] = 2032,
        [sym__declaration] = 502,
        [sym_method_declaration] = 504,
        [sym_class_declaration] = 504,
        [sym_module_declaration] = 504,
        [sym_while_statement] = 502,
        [sym_until_statement] = 502,
        [sym_if_statement] = 502,
        [sym_unless_statement] = 502,
        [sym_for_statement] = 502,
        [sym_begin_statement] = 502,
        [sym_if_modifier] = 502,
        [sym_unless_modifier] = 502,
        [sym_while_modifier] = 502,
        [sym_until_modifier] = 502,
        [sym__call] = 506,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 502,
        [sym__argument] = 508,
        [sym__primary] = 510,
        [sym_scope_resolution_expression] = 512,
        [sym_subscript_expression] = 512,
        [sym_member_access] = 512,
        [sym__lhs] = 514,
        [sym__variable] = 512,
        [anon_sym_end] = 2030,
        [anon_sym_undef] = 518,
        [anon_sym_alias] = 520,
        [anon_sym_def] = 522,
        [anon_sym_LPAREN] = 524,
        [anon_sym_class] = 526,
        [anon_sym_COLON_COLON] = 528,
        [anon_sym_module] = 530,
        [anon_sym_while] = 532,
        [anon_sym_until] = 534,
        [anon_sym_if] = 536,
        [anon_sym_unless] = 538,
        [anon_sym_for] = 540,
        [anon_sym_begin] = 542,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 544,
        [anon_sym_self] = 544,
        [sym_identifier] = 544,
        [sym_comment] = 54,
        [sym_symbol] = 508,
        [sym__line_break] = 54,
    },
    [918] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 2034,
        [anon_sym_end] = 2036,
        [anon_sym_while] = 556,
        [anon_sym_until] = 558,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 562,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [919] = {
        [sym__terminator] = 1358,
        [aux_sym_program_repeat1] = 1358,
        [ts_builtin_sym_end] = 1358,
        [anon_sym_while] = 1358,
        [anon_sym_until] = 1358,
        [anon_sym_if] = 1358,
        [anon_sym_unless] = 1358,
        [sym_comment] = 54,
        [sym__line_break] = 1358,
        [anon_sym_SEMI] = 1358,
    },
    [920] = {
        [anon_sym_end] = 2038,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [921] = {
        [sym__terminator] = 1362,
        [aux_sym_program_repeat1] = 1362,
        [ts_builtin_sym_end] = 1362,
        [anon_sym_while] = 1362,
        [anon_sym_until] = 1362,
        [anon_sym_if] = 1362,
        [anon_sym_unless] = 1362,
        [sym_comment] = 54,
        [sym__line_break] = 1362,
        [anon_sym_SEMI] = 1362,
    },
    [922] = {
        [sym__terminator] = 1364,
        [aux_sym_program_repeat1] = 1364,
        [ts_builtin_sym_end] = 1364,
        [anon_sym_while] = 1364,
        [anon_sym_until] = 1364,
        [anon_sym_if] = 1364,
        [anon_sym_unless] = 1364,
        [sym_comment] = 54,
        [sym__line_break] = 1364,
        [anon_sym_SEMI] = 1364,
    },
    [923] = {
        [anon_sym_end] = 2036,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [924] = {
        [sym__statement] = 2040,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym_for_statement] = 6,
        [sym_begin_statement] = 6,
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
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_undef] = 24,
        [anon_sym_alias] = 26,
        [anon_sym_def] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_class] = 32,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_module] = 36,
        [anon_sym_while] = 38,
        [anon_sym_until] = 40,
        [anon_sym_if] = 42,
        [anon_sym_unless] = 44,
        [anon_sym_for] = 46,
        [anon_sym_begin] = 48,
        [anon_sym_super] = 50,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [sym_identifier] = 52,
        [sym_comment] = 54,
        [sym_symbol] = 14,
        [sym__line_break] = 54,
    },
    [925] = {
        [ts_builtin_sym_end] = 2042,
        [sym_comment] = 54,
        [sym__line_break] = 54,
    },
    [926] = {
        [sym__expression] = 2044,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [sym_identifier] = 52,
        [sym_comment] = 54,
        [sym_symbol] = 14,
        [sym__line_break] = 54,
    },
    [927] = {
        [sym__expression] = 2046,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [sym_identifier] = 52,
        [sym_comment] = 54,
        [sym_symbol] = 14,
        [sym__line_break] = 54,
    },
    [928] = {
        [sym__expression] = 2048,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [sym_identifier] = 52,
        [sym_comment] = 54,
        [sym_symbol] = 14,
        [sym__line_break] = 54,
    },
    [929] = {
        [sym__expression] = 2050,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [sym_identifier] = 52,
        [sym_comment] = 54,
        [sym_symbol] = 14,
        [sym__line_break] = 54,
    },
    [930] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [ts_builtin_sym_end] = 370,
        [anon_sym_while] = 370,
        [anon_sym_until] = 370,
        [anon_sym_if] = 370,
        [anon_sym_unless] = 370,
        [sym_comment] = 54,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [931] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [ts_builtin_sym_end] = 372,
        [anon_sym_while] = 372,
        [anon_sym_until] = 372,
        [anon_sym_if] = 372,
        [anon_sym_unless] = 372,
        [sym_comment] = 54,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [932] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [ts_builtin_sym_end] = 374,
        [anon_sym_while] = 374,
        [anon_sym_until] = 374,
        [anon_sym_if] = 374,
        [anon_sym_unless] = 374,
        [sym_comment] = 54,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [933] = {
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [ts_builtin_sym_end] = 376,
        [anon_sym_while] = 376,
        [anon_sym_until] = 376,
        [anon_sym_if] = 376,
        [anon_sym_unless] = 376,
        [sym_comment] = 54,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [934] = {
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 2052,
        [ts_builtin_sym_end] = 382,
        [anon_sym_while] = 64,
        [anon_sym_until] = 66,
        [anon_sym_if] = 68,
        [anon_sym_unless] = 70,
        [sym_comment] = 54,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 74,
    },
    [935] = {
        [ts_builtin_sym_end] = 384,
        [sym_comment] = 54,
        [sym__line_break] = 54,
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
    [20] = {.count = 1}, SHIFT(10, 0),
    [22] = {.count = 1}, REDUCE(sym_program, 0, 0),
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
    [48] = {.count = 1}, SHIFT(23, 0),
    [50] = {.count = 1}, SHIFT(24, 0),
    [52] = {.count = 1}, SHIFT(25, 0),
    [54] = {.count = 1}, SHIFT_EXTRA(),
    [56] = {.count = 1}, ACCEPT_INPUT(),
    [58] = {.count = 1}, SHIFT(924, 0),
    [60] = {.count = 1}, SHIFT(925, 0),
    [62] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [64] = {.count = 1}, SHIFT(926, 0),
    [66] = {.count = 1}, SHIFT(927, 0),
    [68] = {.count = 1}, SHIFT(928, 0),
    [70] = {.count = 1}, SHIFT(929, 0),
    [72] = {.count = 1}, SHIFT(77, 0),
    [74] = {.count = 1}, SHIFT(78, 0),
    [76] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [78] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [80] = {.count = 1}, SHIFT(915, 0),
    [82] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [84] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [86] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [88] = {.count = 1}, SHIFT(905, 0),
    [90] = {.count = 1}, SHIFT(906, 0),
    [92] = {.count = 1}, SHIFT(907, 0),
    [94] = {.count = 1}, REDUCE(sym__lhs, 1, 0),
    [96] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [98] = {.count = 1}, SHIFT(904, 0),
    [100] = {.count = 1}, SHIFT(903, 0),
    [102] = {.count = 1}, SHIFT(901, 0),
    [104] = {.count = 1}, SHIFT(468, 0),
    [106] = {.count = 1}, SHIFT(883, 0),
    [108] = {.count = 1}, SHIFT(427, 0),
    [110] = {.count = 1}, SHIFT(878, 0),
    [112] = {.count = 1}, SHIFT(38, 0),
    [114] = {.count = 1}, SHIFT(39, 0),
    [116] = {.count = 1}, SHIFT(40, 0),
    [118] = {.count = 1}, SHIFT(41, 0),
    [120] = {.count = 1}, SHIFT(42, 0),
    [122] = {.count = 1}, SHIFT(43, 0),
    [124] = {.count = 1}, SHIFT(44, 0),
    [126] = {.count = 1}, SHIFT(45, 0),
    [128] = {.count = 1}, SHIFT(46, 0),
    [130] = {.count = 1}, SHIFT(47, 0),
    [132] = {.count = 1}, SHIFT(48, 0),
    [134] = {.count = 1}, SHIFT(879, 0),
    [136] = {.count = 1}, SHIFT(50, 0),
    [138] = {.count = 1}, SHIFT(51, 0),
    [140] = {.count = 1}, SHIFT(52, 0),
    [142] = {.count = 1}, SHIFT(53, 0),
    [144] = {.count = 1}, SHIFT(54, 0),
    [146] = {.count = 1}, SHIFT(55, 0),
    [148] = {.count = 1}, SHIFT(56, 0),
    [150] = {.count = 1}, SHIFT(57, 0),
    [152] = {.count = 1}, SHIFT(58, 0),
    [154] = {.count = 1}, SHIFT(59, 0),
    [156] = {.count = 1}, SHIFT(859, 0),
    [158] = {.count = 1}, SHIFT(858, 0),
    [160] = {.count = 1}, SHIFT(851, 0),
    [162] = {.count = 1}, SHIFT(849, 0),
    [164] = {.count = 1}, SHIFT(387, 0),
    [166] = {.count = 1}, SHIFT(88, 0),
    [168] = {.count = 1}, SHIFT(89, 0),
    [170] = {.count = 1}, SHIFT(90, 0),
    [172] = {.count = 1}, SHIFT(91, 0),
    [174] = {.count = 1}, SHIFT(92, 0),
    [176] = {.count = 1}, SHIFT(93, 0),
    [178] = {.count = 1}, SHIFT(94, 0),
    [180] = {.count = 1}, SHIFT(847, 0),
    [182] = {.count = 1}, SHIFT(838, 0),
    [184] = {.count = 1}, SHIFT(274, 0),
    [186] = {.count = 1}, SHIFT(275, 0),
    [188] = {.count = 1}, SHIFT(276, 0),
    [190] = {.count = 1}, SHIFT(277, 0),
    [192] = {.count = 1}, SHIFT(278, 0),
    [194] = {.count = 1}, SHIFT(279, 0),
    [196] = {.count = 1}, SHIFT(280, 0),
    [198] = {.count = 1}, SHIFT(281, 0),
    [200] = {.count = 1}, SHIFT(832, 0),
    [202] = {.count = 1}, SHIFT(195, 0),
    [204] = {.count = 1}, SHIFT(196, 0),
    [206] = {.count = 1}, SHIFT(197, 0),
    [208] = {.count = 1}, SHIFT(198, 0),
    [210] = {.count = 1}, SHIFT(199, 0),
    [212] = {.count = 1}, SHIFT(200, 0),
    [214] = {.count = 1}, SHIFT(201, 0),
    [216] = {.count = 1}, SHIFT(202, 0),
    [218] = {.count = 1}, SHIFT(61, 0),
    [220] = {.count = 1}, SHIFT(62, 0),
    [222] = {.count = 1}, SHIFT(815, 0),
    [224] = {.count = 1}, SHIFT(64, 0),
    [226] = {.count = 1}, SHIFT(65, 0),
    [228] = {.count = 1}, SHIFT(66, 0),
    [230] = {.count = 1}, SHIFT(814, 0),
    [232] = {.count = 1}, SHIFT(26, 0),
    [234] = {.count = 1}, SHIFT(27, 0),
    [236] = {.count = 1}, SHIFT(28, 0),
    [238] = {.count = 1}, SHIFT(29, 0),
    [240] = {.count = 1}, SHIFT(30, 0),
    [242] = {.count = 1}, SHIFT(31, 0),
    [244] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [246] = {.count = 1}, SHIFT(32, 0),
    [248] = {.count = 1}, SHIFT(33, 0),
    [250] = {.count = 1}, SHIFT(34, 0),
    [252] = {.count = 1}, SHIFT(35, 0),
    [254] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [256] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [258] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [260] = {.count = 1}, SHIFT(810, 0),
    [262] = {.count = 1}, SHIFT(811, 0),
    [264] = {.count = 1}, SHIFT(800, 0),
    [266] = {.count = 1}, SHIFT(801, 0),
    [268] = {.count = 1}, SHIFT(802, 0),
    [270] = {.count = 1}, SHIFT(37, 0),
    [272] = {.count = 1}, SHIFT(49, 0),
    [274] = {.count = 1}, SHIFT(36, 0),
    [276] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [278] = {.count = 1}, SHIFT(70, 0),
    [280] = {.count = 1}, SHIFT(797, 0),
    [282] = {.count = 1}, SHIFT(798, 0),
    [284] = {.count = 1}, SHIFT(73, 0),
    [286] = {.count = 1}, SHIFT(74, 0),
    [288] = {.count = 1}, SHIFT(75, 0),
    [290] = {.count = 1}, SHIFT(76, 0),
    [292] = {.count = 1}, SHIFT(788, 0),
    [294] = {.count = 1}, SHIFT(778, 0),
    [296] = {.count = 1}, SHIFT(779, 0),
    [298] = {.count = 1}, SHIFT(780, 0),
    [300] = {.count = 1}, SHIFT(777, 0),
    [302] = {.count = 1}, SHIFT(776, 0),
    [304] = {.count = 1}, SHIFT(774, 0),
    [306] = {.count = 1}, SHIFT(756, 0),
    [308] = {.count = 1}, SHIFT(751, 0),
    [310] = {.count = 1}, SHIFT(752, 0),
    [312] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [314] = {.count = 1}, SHIFT(732, 0),
    [316] = {.count = 1}, SHIFT(731, 0),
    [318] = {.count = 1}, SHIFT(724, 0),
    [320] = {.count = 1}, SHIFT(722, 0),
    [322] = {.count = 1}, SHIFT(720, 0),
    [324] = {.count = 1}, SHIFT(711, 0),
    [326] = {.count = 1}, SHIFT(705, 0),
    [328] = {.count = 1}, SHIFT(63, 0),
    [330] = {.count = 1}, SHIFT(60, 0),
    [332] = {.count = 1}, REDUCE(sym_begin_statement, 2, 0),
    [334] = {.count = 1}, SHIFT(695, 0),
    [336] = {.count = 1}, SHIFT(696, 0),
    [338] = {.count = 1}, SHIFT(697, 0),
    [340] = {.count = 1}, SHIFT(86, 0),
    [342] = {.count = 1}, SHIFT(68, 0),
    [344] = {.count = 1}, SHIFT(69, 0),
    [346] = {.count = 1}, SHIFT(67, 0),
    [348] = {.count = 1}, SHIFT(71, 0),
    [350] = {.count = 1}, SHIFT(72, 0),
    [352] = {.count = 1}, SHIFT(84, 0),
    [354] = {.count = 1}, SHIFT(83, 0),
    [356] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [358] = {.count = 1}, SHIFT(82, 0),
    [360] = {.count = 1}, SHIFT(81, 0),
    [362] = {.count = 1}, SHIFT(80, 0),
    [364] = {.count = 1}, SHIFT(79, 0),
    [366] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [368] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [370] = {.count = 1}, REDUCE(sym_unless_modifier, 3, 0),
    [372] = {.count = 1}, REDUCE(sym_if_modifier, 3, 0),
    [374] = {.count = 1}, REDUCE(sym_until_modifier, 3, 0),
    [376] = {.count = 1}, REDUCE(sym_while_modifier, 3, 0),
    [378] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [380] = {.count = 1}, SHIFT(85, 0),
    [382] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [384] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [386] = {.count = 1}, SHIFT(87, 0),
    [388] = {.count = 1}, SHIFT(136, 0),
    [390] = {.count = 1}, SHIFT(137, 0),
    [392] = {.count = 1}, SHIFT(138, 0),
    [394] = {.count = 1}, SHIFT(139, 0),
    [396] = {.count = 1}, SHIFT(140, 0),
    [398] = {.count = 1}, SHIFT(141, 0),
    [400] = {.count = 1}, SHIFT(101, 0),
    [402] = {.count = 1}, SHIFT(102, 0),
    [404] = {.count = 1}, SHIFT(103, 0),
    [406] = {.count = 1}, SHIFT(96, 0),
    [408] = {.count = 1}, SHIFT(97, 0),
    [410] = {.count = 1}, SHIFT(95, 0),
    [412] = {.count = 1}, SHIFT(98, 0),
    [414] = {.count = 1}, SHIFT(99, 0),
    [416] = {.count = 1}, SHIFT(100, 0),
    [418] = {.count = 1}, SHIFT(135, 0),
    [420] = {.count = 1}, SHIFT(105, 0),
    [422] = {.count = 1}, SHIFT(106, 0),
    [424] = {.count = 1}, SHIFT(107, 0),
    [426] = {.count = 1}, SHIFT(108, 0),
    [428] = {.count = 1}, SHIFT(109, 0),
    [430] = {.count = 1}, SHIFT(110, 0),
    [432] = {.count = 1}, SHIFT(111, 0),
    [434] = {.count = 1}, SHIFT(112, 0),
    [436] = {.count = 1}, SHIFT(104, 0),
    [438] = {.count = 1}, REDUCE(sym_member_access, 3, 0),
    [440] = {.count = 1}, SHIFT(132, 0),
    [442] = {.count = 1}, SHIFT(126, 0),
    [444] = {.count = 1}, SHIFT(133, 0),
    [446] = {.count = 1}, SHIFT(119, 0),
    [448] = {.count = 1}, SHIFT(120, 0),
    [450] = {.count = 1}, SHIFT(121, 0),
    [452] = {.count = 1}, SHIFT(114, 0),
    [454] = {.count = 1}, SHIFT(115, 0),
    [456] = {.count = 1}, SHIFT(113, 0),
    [458] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [460] = {.count = 1}, SHIFT(116, 0),
    [462] = {.count = 1}, SHIFT(117, 0),
    [464] = {.count = 1}, SHIFT(118, 0),
    [466] = {.count = 1}, SHIFT(131, 0),
    [468] = {.count = 1}, SHIFT(123, 0),
    [470] = {.count = 1}, SHIFT(124, 0),
    [472] = {.count = 1}, SHIFT(122, 0),
    [474] = {.count = 1}, SHIFT(125, 0),
    [476] = {.count = 1}, SHIFT(127, 0),
    [478] = {.count = 1}, SHIFT(130, 0),
    [480] = {.count = 1}, SHIFT(128, 0),
    [482] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [484] = {.count = 1}, SHIFT(129, 0),
    [486] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [488] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [490] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [492] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [494] = {.count = 1}, SHIFT(134, 0),
    [496] = {.count = 1}, REDUCE(sym_for_statement, 5, 0),
    [498] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [500] = {.count = 1}, SHIFT(690, 0),
    [502] = {.count = 1}, SHIFT(143, 0),
    [504] = {.count = 1}, SHIFT(144, 0),
    [506] = {.count = 1}, SHIFT(145, 0),
    [508] = {.count = 1}, SHIFT(146, 0),
    [510] = {.count = 1}, SHIFT(147, 0),
    [512] = {.count = 1}, SHIFT(148, 0),
    [514] = {.count = 1}, SHIFT(149, 0),
    [516] = {.count = 1}, SHIFT(691, 0),
    [518] = {.count = 1}, SHIFT(151, 0),
    [520] = {.count = 1}, SHIFT(152, 0),
    [522] = {.count = 1}, SHIFT(153, 0),
    [524] = {.count = 1}, SHIFT(154, 0),
    [526] = {.count = 1}, SHIFT(155, 0),
    [528] = {.count = 1}, SHIFT(156, 0),
    [530] = {.count = 1}, SHIFT(157, 0),
    [532] = {.count = 1}, SHIFT(158, 0),
    [534] = {.count = 1}, SHIFT(159, 0),
    [536] = {.count = 1}, SHIFT(160, 0),
    [538] = {.count = 1}, SHIFT(161, 0),
    [540] = {.count = 1}, SHIFT(162, 0),
    [542] = {.count = 1}, SHIFT(163, 0),
    [544] = {.count = 1}, SHIFT(164, 0),
    [546] = {.count = 1}, SHIFT(142, 0),
    [548] = {.count = 1}, SHIFT(150, 0),
    [550] = {.count = 1}, SHIFT(175, 0),
    [552] = {.count = 1}, SHIFT(687, 0),
    [554] = {.count = 1}, SHIFT(688, 0),
    [556] = {.count = 1}, SHIFT(178, 0),
    [558] = {.count = 1}, SHIFT(179, 0),
    [560] = {.count = 1}, SHIFT(180, 0),
    [562] = {.count = 1}, SHIFT(181, 0),
    [564] = {.count = 1}, SHIFT(678, 0),
    [566] = {.count = 1}, SHIFT(668, 0),
    [568] = {.count = 1}, SHIFT(669, 0),
    [570] = {.count = 1}, SHIFT(670, 0),
    [572] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [574] = {.count = 1}, SHIFT(667, 0),
    [576] = {.count = 1}, SHIFT(666, 0),
    [578] = {.count = 1}, SHIFT(664, 0),
    [580] = {.count = 1}, SHIFT(646, 0),
    [582] = {.count = 1}, SHIFT(641, 0),
    [584] = {.count = 1}, SHIFT(642, 0),
    [586] = {.count = 1}, SHIFT(622, 0),
    [588] = {.count = 1}, SHIFT(621, 0),
    [590] = {.count = 1}, SHIFT(614, 0),
    [592] = {.count = 1}, SHIFT(612, 0),
    [594] = {.count = 1}, SHIFT(610, 0),
    [596] = {.count = 1}, SHIFT(601, 0),
    [598] = {.count = 1}, SHIFT(194, 0),
    [600] = {.count = 1}, SHIFT(166, 0),
    [602] = {.count = 1}, SHIFT(165, 0),
    [604] = {.count = 1}, SHIFT(167, 0),
    [606] = {.count = 1}, SHIFT(168, 0),
    [608] = {.count = 1}, SHIFT(169, 0),
    [610] = {.count = 1}, SHIFT(170, 0),
    [612] = {.count = 1}, SHIFT(171, 0),
    [614] = {.count = 1}, SHIFT(172, 0),
    [616] = {.count = 1}, SHIFT(189, 0),
    [618] = {.count = 1}, SHIFT(190, 0),
    [620] = {.count = 1}, SHIFT(173, 0),
    [622] = {.count = 1}, SHIFT(174, 0),
    [624] = {.count = 1}, SHIFT(176, 0),
    [626] = {.count = 1}, SHIFT(177, 0),
    [628] = {.count = 1}, SHIFT(187, 0),
    [630] = {.count = 1}, SHIFT(186, 0),
    [632] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [634] = {.count = 1}, SHIFT(185, 0),
    [636] = {.count = 1}, SHIFT(184, 0),
    [638] = {.count = 1}, SHIFT(183, 0),
    [640] = {.count = 1}, SHIFT(182, 0),
    [642] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [644] = {.count = 1}, SHIFT(188, 0),
    [646] = {.count = 1}, SHIFT(191, 0),
    [648] = {.count = 1}, SHIFT(192, 0),
    [650] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [652] = {.count = 1}, SHIFT(193, 0),
    [654] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [656] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [658] = {.count = 1}, SHIFT(219, 0),
    [660] = {.count = 1}, SHIFT(220, 0),
    [662] = {.count = 1}, SHIFT(221, 0),
    [664] = {.count = 1}, SHIFT(222, 0),
    [666] = {.count = 1}, SHIFT(223, 0),
    [668] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [670] = {.count = 1}, SHIFT(209, 0),
    [672] = {.count = 1}, SHIFT(210, 0),
    [674] = {.count = 1}, SHIFT(211, 0),
    [676] = {.count = 1}, SHIFT(204, 0),
    [678] = {.count = 1}, SHIFT(205, 0),
    [680] = {.count = 1}, SHIFT(203, 0),
    [682] = {.count = 1}, SHIFT(206, 0),
    [684] = {.count = 1}, SHIFT(207, 0),
    [686] = {.count = 1}, SHIFT(208, 0),
    [688] = {.count = 1}, SHIFT(218, 0),
    [690] = {.count = 1}, SHIFT(213, 0),
    [692] = {.count = 1}, SHIFT(214, 0),
    [694] = {.count = 1}, SHIFT(212, 0),
    [696] = {.count = 1}, SHIFT(215, 0),
    [698] = {.count = 1}, SHIFT(216, 0),
    [700] = {.count = 1}, SHIFT(217, 0),
    [702] = {.count = 1}, SHIFT(598, 0),
    [704] = {.count = 1}, SHIFT(599, 0),
    [706] = {.count = 1}, SHIFT(269, 0),
    [708] = {.count = 1}, REDUCE(sym_unless_statement, 3, 0),
    [710] = {.count = 1}, SHIFT(224, 0),
    [712] = {.count = 1}, SHIFT(225, 0),
    [714] = {.count = 1}, SHIFT(226, 0),
    [716] = {.count = 1}, REDUCE(sym_then_block, 1, 0),
    [718] = {.count = 1}, SHIFT(227, 0),
    [720] = {.count = 1}, SHIFT(228, 0),
    [722] = {.count = 1}, SHIFT(229, 0),
    [724] = {.count = 1}, SHIFT(230, 0),
    [726] = {.count = 1}, SHIFT(231, 0),
    [728] = {.count = 1}, SHIFT(232, 0),
    [730] = {.count = 1}, SHIFT(233, 0),
    [732] = {.count = 1}, SHIFT(234, 0),
    [734] = {.count = 1}, SHIFT(235, 0),
    [736] = {.count = 1}, SHIFT(236, 0),
    [738] = {.count = 1}, SHIFT(237, 0),
    [740] = {.count = 1}, SHIFT(238, 0),
    [742] = {.count = 1}, SHIFT(239, 0),
    [744] = {.count = 1}, SHIFT(240, 0),
    [746] = {.count = 1}, SHIFT(241, 0),
    [748] = {.count = 1}, SHIFT(242, 0),
    [750] = {.count = 1}, SHIFT(243, 0),
    [752] = {.count = 1}, SHIFT(244, 0),
    [754] = {.count = 1}, SHIFT(245, 0),
    [756] = {.count = 1}, REDUCE(sym_then_block, 2, 0),
    [758] = {.count = 1}, SHIFT(586, 0),
    [760] = {.count = 1}, SHIFT(587, 0),
    [762] = {.count = 1}, SHIFT(588, 0),
    [764] = {.count = 1}, SHIFT(589, 0),
    [766] = {.count = 1}, SHIFT(590, 0),
    [768] = {.count = 1}, SHIFT(591, 0),
    [770] = {.count = 1}, SHIFT(577, 0),
    [772] = {.count = 1}, SHIFT(567, 0),
    [774] = {.count = 1}, SHIFT(568, 0),
    [776] = {.count = 1}, SHIFT(569, 0),
    [778] = {.count = 1}, SHIFT(566, 0),
    [780] = {.count = 1}, SHIFT(565, 0),
    [782] = {.count = 1}, SHIFT(563, 0),
    [784] = {.count = 1}, SHIFT(545, 0),
    [786] = {.count = 1}, SHIFT(540, 0),
    [788] = {.count = 1}, SHIFT(541, 0),
    [790] = {.count = 1}, SHIFT(521, 0),
    [792] = {.count = 1}, SHIFT(520, 0),
    [794] = {.count = 1}, SHIFT(513, 0),
    [796] = {.count = 1}, SHIFT(511, 0),
    [798] = {.count = 1}, SHIFT(509, 0),
    [800] = {.count = 1}, SHIFT(273, 0),
    [802] = {.count = 1}, SHIFT(264, 0),
    [804] = {.count = 1}, SHIFT(247, 0),
    [806] = {.count = 1}, SHIFT(246, 0),
    [808] = {.count = 1}, SHIFT(248, 0),
    [810] = {.count = 1}, SHIFT(249, 0),
    [812] = {.count = 1}, SHIFT(250, 0),
    [814] = {.count = 1}, SHIFT(251, 0),
    [816] = {.count = 1}, SHIFT(252, 0),
    [818] = {.count = 1}, SHIFT(253, 0),
    [820] = {.count = 1}, SHIFT(259, 0),
    [822] = {.count = 1}, SHIFT(260, 0),
    [824] = {.count = 1}, SHIFT(254, 0),
    [826] = {.count = 1}, SHIFT(255, 0),
    [828] = {.count = 1}, SHIFT(256, 0),
    [830] = {.count = 1}, SHIFT(257, 0),
    [832] = {.count = 1}, SHIFT(258, 0),
    [834] = {.count = 1}, SHIFT(261, 0),
    [836] = {.count = 1}, SHIFT(262, 0),
    [838] = {.count = 1}, SHIFT(263, 0),
    [840] = {.count = 1}, SHIFT(265, 0),
    [842] = {.count = 1}, SHIFT(266, 0),
    [844] = {.count = 1}, SHIFT(267, 0),
    [846] = {.count = 1}, SHIFT(268, 0),
    [848] = {.count = 1}, SHIFT(272, 0),
    [850] = {.count = 1}, REDUCE(sym__then_else_block, 2, 0),
    [852] = {.count = 1}, SHIFT(270, 0),
    [854] = {.count = 1}, REDUCE(sym_else_block, 1, 0),
    [856] = {.count = 1}, SHIFT(271, 0),
    [858] = {.count = 1}, REDUCE(sym_else_block, 2, 0),
    [860] = {.count = 1}, REDUCE(sym_else_block, 3, 0),
    [862] = {.count = 1}, REDUCE(sym__then_else_block, 3, 0),
    [864] = {.count = 1}, SHIFT(298, 0),
    [866] = {.count = 1}, SHIFT(299, 0),
    [868] = {.count = 1}, SHIFT(300, 0),
    [870] = {.count = 1}, SHIFT(301, 0),
    [872] = {.count = 1}, SHIFT(302, 0),
    [874] = {.count = 1}, SHIFT(288, 0),
    [876] = {.count = 1}, SHIFT(289, 0),
    [878] = {.count = 1}, SHIFT(290, 0),
    [880] = {.count = 1}, SHIFT(283, 0),
    [882] = {.count = 1}, SHIFT(284, 0),
    [884] = {.count = 1}, SHIFT(282, 0),
    [886] = {.count = 1}, SHIFT(285, 0),
    [888] = {.count = 1}, SHIFT(286, 0),
    [890] = {.count = 1}, SHIFT(287, 0),
    [892] = {.count = 1}, SHIFT(297, 0),
    [894] = {.count = 1}, SHIFT(292, 0),
    [896] = {.count = 1}, SHIFT(293, 0),
    [898] = {.count = 1}, SHIFT(291, 0),
    [900] = {.count = 1}, SHIFT(294, 0),
    [902] = {.count = 1}, SHIFT(295, 0),
    [904] = {.count = 1}, SHIFT(296, 0),
    [906] = {.count = 1}, SHIFT(503, 0),
    [908] = {.count = 1}, SHIFT(504, 0),
    [910] = {.count = 1}, SHIFT(505, 0),
    [912] = {.count = 1}, SHIFT(355, 0),
    [914] = {.count = 1}, REDUCE(sym_if_statement, 3, 0),
    [916] = {.count = 1}, SHIFT(303, 0),
    [918] = {.count = 1}, SHIFT(304, 0),
    [920] = {.count = 1}, SHIFT(305, 0),
    [922] = {.count = 1}, SHIFT(306, 0),
    [924] = {.count = 1}, SHIFT(307, 0),
    [926] = {.count = 1}, SHIFT(308, 0),
    [928] = {.count = 1}, SHIFT(309, 0),
    [930] = {.count = 1}, SHIFT(310, 0),
    [932] = {.count = 1}, SHIFT(311, 0),
    [934] = {.count = 1}, SHIFT(312, 0),
    [936] = {.count = 1}, SHIFT(313, 0),
    [938] = {.count = 1}, SHIFT(314, 0),
    [940] = {.count = 1}, SHIFT(315, 0),
    [942] = {.count = 1}, SHIFT(316, 0),
    [944] = {.count = 1}, SHIFT(317, 0),
    [946] = {.count = 1}, SHIFT(318, 0),
    [948] = {.count = 1}, SHIFT(319, 0),
    [950] = {.count = 1}, SHIFT(320, 0),
    [952] = {.count = 1}, SHIFT(321, 0),
    [954] = {.count = 1}, SHIFT(322, 0),
    [956] = {.count = 1}, SHIFT(323, 0),
    [958] = {.count = 1}, SHIFT(324, 0),
    [960] = {.count = 1}, SHIFT(491, 0),
    [962] = {.count = 1}, SHIFT(492, 0),
    [964] = {.count = 1}, SHIFT(493, 0),
    [966] = {.count = 1}, SHIFT(494, 0),
    [968] = {.count = 1}, SHIFT(495, 0),
    [970] = {.count = 1}, SHIFT(496, 0),
    [972] = {.count = 1}, SHIFT(482, 0),
    [974] = {.count = 1}, SHIFT(472, 0),
    [976] = {.count = 1}, SHIFT(473, 0),
    [978] = {.count = 1}, SHIFT(474, 0),
    [980] = {.count = 1}, SHIFT(471, 0),
    [982] = {.count = 1}, SHIFT(470, 0),
    [984] = {.count = 1}, SHIFT(467, 0),
    [986] = {.count = 1}, SHIFT(426, 0),
    [988] = {.count = 1}, SHIFT(421, 0),
    [990] = {.count = 1}, SHIFT(422, 0),
    [992] = {.count = 1}, SHIFT(399, 0),
    [994] = {.count = 1}, SHIFT(398, 0),
    [996] = {.count = 1}, SHIFT(391, 0),
    [998] = {.count = 1}, SHIFT(389, 0),
    [1000] = {.count = 1}, SHIFT(386, 0),
    [1002] = {.count = 1}, SHIFT(349, 0),
    [1004] = {.count = 1}, SHIFT(343, 0),
    [1006] = {.count = 1}, SHIFT(326, 0),
    [1008] = {.count = 1}, SHIFT(325, 0),
    [1010] = {.count = 1}, SHIFT(327, 0),
    [1012] = {.count = 1}, SHIFT(328, 0),
    [1014] = {.count = 1}, SHIFT(329, 0),
    [1016] = {.count = 1}, SHIFT(330, 0),
    [1018] = {.count = 1}, SHIFT(331, 0),
    [1020] = {.count = 1}, SHIFT(332, 0),
    [1022] = {.count = 1}, SHIFT(338, 0),
    [1024] = {.count = 1}, SHIFT(339, 0),
    [1026] = {.count = 1}, SHIFT(333, 0),
    [1028] = {.count = 1}, SHIFT(334, 0),
    [1030] = {.count = 1}, SHIFT(335, 0),
    [1032] = {.count = 1}, SHIFT(336, 0),
    [1034] = {.count = 1}, SHIFT(337, 0),
    [1036] = {.count = 1}, SHIFT(340, 0),
    [1038] = {.count = 1}, SHIFT(341, 0),
    [1040] = {.count = 1}, SHIFT(342, 0),
    [1042] = {.count = 1}, SHIFT(344, 0),
    [1044] = {.count = 1}, SHIFT(345, 0),
    [1046] = {.count = 1}, SHIFT(346, 0),
    [1048] = {.count = 1}, SHIFT(347, 0),
    [1050] = {.count = 1}, SHIFT(348, 0),
    [1052] = {.count = 1}, SHIFT(350, 0),
    [1054] = {.count = 1}, SHIFT(351, 0),
    [1056] = {.count = 1}, SHIFT(352, 0),
    [1058] = {.count = 1}, SHIFT(353, 0),
    [1060] = {.count = 1}, SHIFT(354, 0),
    [1062] = {.count = 1}, SHIFT(384, 0),
    [1064] = {.count = 1}, SHIFT(383, 0),
    [1066] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 2, 0),
    [1068] = {.count = 1}, SHIFT(356, 0),
    [1070] = {.count = 1}, SHIFT(357, 0),
    [1072] = {.count = 1}, SHIFT(358, 0),
    [1074] = {.count = 1}, SHIFT(359, 0),
    [1076] = {.count = 1}, SHIFT(360, 0),
    [1078] = {.count = 1}, SHIFT(361, 0),
    [1080] = {.count = 1}, SHIFT(362, 0),
    [1082] = {.count = 1}, SHIFT(363, 0),
    [1084] = {.count = 1}, SHIFT(364, 0),
    [1086] = {.count = 1}, SHIFT(381, 0),
    [1088] = {.count = 1}, SHIFT(371, 0),
    [1090] = {.count = 1}, SHIFT(372, 0),
    [1092] = {.count = 1}, SHIFT(373, 0),
    [1094] = {.count = 1}, SHIFT(366, 0),
    [1096] = {.count = 1}, SHIFT(367, 0),
    [1098] = {.count = 1}, SHIFT(365, 0),
    [1100] = {.count = 1}, SHIFT(368, 0),
    [1102] = {.count = 1}, SHIFT(369, 0),
    [1104] = {.count = 1}, SHIFT(370, 0),
    [1106] = {.count = 1}, SHIFT(380, 0),
    [1108] = {.count = 1}, SHIFT(375, 0),
    [1110] = {.count = 1}, SHIFT(376, 0),
    [1112] = {.count = 1}, SHIFT(374, 0),
    [1114] = {.count = 1}, SHIFT(377, 0),
    [1116] = {.count = 1}, SHIFT(378, 0),
    [1118] = {.count = 1}, SHIFT(379, 0),
    [1120] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 3, 0),
    [1122] = {.count = 1}, SHIFT(382, 0),
    [1124] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 4, 0),
    [1126] = {.count = 1}, SHIFT(385, 0),
    [1128] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 3, 0),
    [1130] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 4, 0),
    [1132] = {.count = 1}, SHIFT(388, 0),
    [1134] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [1136] = {.count = 1}, SHIFT(390, 0),
    [1138] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [1140] = {.count = 1}, SHIFT(392, 0),
    [1142] = {.count = 1}, SHIFT(393, 0),
    [1144] = {.count = 1}, SHIFT(394, 0),
    [1146] = {.count = 1}, SHIFT(395, 0),
    [1148] = {.count = 1}, SHIFT(396, 0),
    [1150] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [1152] = {.count = 1}, SHIFT(397, 0),
    [1154] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [1156] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [1158] = {.count = 1}, SHIFT(400, 0),
    [1160] = {.count = 1}, SHIFT(401, 0),
    [1162] = {.count = 1}, SHIFT(417, 0),
    [1164] = {.count = 1}, SHIFT(418, 0),
    [1166] = {.count = 1}, SHIFT(402, 0),
    [1168] = {.count = 1}, SHIFT(403, 0),
    [1170] = {.count = 1}, SHIFT(404, 0),
    [1172] = {.count = 1}, SHIFT(405, 0),
    [1174] = {.count = 1}, SHIFT(414, 0),
    [1176] = {.count = 1}, SHIFT(415, 0),
    [1178] = {.count = 1}, SHIFT(408, 0),
    [1180] = {.count = 1}, SHIFT(406, 0),
    [1182] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [1184] = {.count = 1}, SHIFT(407, 0),
    [1186] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [1188] = {.count = 1}, SHIFT(409, 0),
    [1190] = {.count = 1}, SHIFT(410, 0),
    [1192] = {.count = 1}, SHIFT(411, 0),
    [1194] = {.count = 1}, SHIFT(412, 0),
    [1196] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [1198] = {.count = 1}, SHIFT(413, 0),
    [1200] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [1202] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [1204] = {.count = 1}, SHIFT(416, 0),
    [1206] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [1208] = {.count = 1}, SHIFT(419, 0),
    [1210] = {.count = 1}, SHIFT(420, 0),
    [1212] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [1214] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [1216] = {.count = 1}, SHIFT(423, 0),
    [1218] = {.count = 1}, SHIFT(424, 0),
    [1220] = {.count = 1}, SHIFT(425, 0),
    [1222] = {.count = 1}, SHIFT(428, 0),
    [1224] = {.count = 1}, SHIFT(429, 0),
    [1226] = {.count = 1}, SHIFT(430, 0),
    [1228] = {.count = 1}, SHIFT(431, 0),
    [1230] = {.count = 1}, SHIFT(432, 0),
    [1232] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [1234] = {.count = 1}, SHIFT(443, 0),
    [1236] = {.count = 1}, SHIFT(464, 0),
    [1238] = {.count = 1}, SHIFT(465, 0),
    [1240] = {.count = 1}, SHIFT(442, 0),
    [1242] = {.count = 1}, SHIFT(444, 0),
    [1244] = {.count = 1}, SHIFT(445, 0),
    [1246] = {.count = 1}, SHIFT(440, 0),
    [1248] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [1250] = {.count = 1}, SHIFT(433, 0),
    [1252] = {.count = 1}, SHIFT(434, 0),
    [1254] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [1256] = {.count = 1}, SHIFT(435, 0),
    [1258] = {.count = 1}, SHIFT(436, 0),
    [1260] = {.count = 1}, SHIFT(438, 0),
    [1262] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [1264] = {.count = 1}, SHIFT(437, 0),
    [1266] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [1268] = {.count = 1}, SHIFT(439, 0),
    [1270] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [1272] = {.count = 1}, SHIFT(441, 0),
    [1274] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [1276] = {.count = 1}, SHIFT(460, 0),
    [1278] = {.count = 1}, SHIFT(455, 0),
    [1280] = {.count = 1}, SHIFT(456, 0),
    [1282] = {.count = 1}, SHIFT(453, 0),
    [1284] = {.count = 1}, SHIFT(446, 0),
    [1286] = {.count = 1}, SHIFT(447, 0),
    [1288] = {.count = 1}, SHIFT(448, 0),
    [1290] = {.count = 1}, SHIFT(449, 0),
    [1292] = {.count = 1}, SHIFT(451, 0),
    [1294] = {.count = 1}, SHIFT(450, 0),
    [1296] = {.count = 1}, SHIFT(452, 0),
    [1298] = {.count = 1}, SHIFT(454, 0),
    [1300] = {.count = 1}, SHIFT(457, 0),
    [1302] = {.count = 1}, SHIFT(458, 0),
    [1304] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1306] = {.count = 1}, SHIFT(459, 0),
    [1308] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1310] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [1312] = {.count = 1}, SHIFT(461, 0),
    [1314] = {.count = 1}, SHIFT(462, 0),
    [1316] = {.count = 1}, SHIFT(463, 0),
    [1318] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [1320] = {.count = 1}, SHIFT(466, 0),
    [1322] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1324] = {.count = 1}, SHIFT(469, 0),
    [1326] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [1328] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [1330] = {.count = 1}, SHIFT(481, 0),
    [1332] = {.count = 1}, SHIFT(476, 0),
    [1334] = {.count = 1}, SHIFT(477, 0),
    [1336] = {.count = 1}, SHIFT(475, 0),
    [1338] = {.count = 1}, SHIFT(478, 0),
    [1340] = {.count = 1}, SHIFT(479, 0),
    [1342] = {.count = 1}, SHIFT(480, 0),
    [1344] = {.count = 1}, SHIFT(483, 0),
    [1346] = {.count = 1}, SHIFT(484, 0),
    [1348] = {.count = 1}, SHIFT(490, 0),
    [1350] = {.count = 1}, SHIFT(486, 0),
    [1352] = {.count = 1}, SHIFT(485, 0),
    [1354] = {.count = 1}, SHIFT(487, 0),
    [1356] = {.count = 1}, SHIFT(488, 0),
    [1358] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [1360] = {.count = 1}, SHIFT(489, 0),
    [1362] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [1364] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [1366] = {.count = 1}, SHIFT(501, 0),
    [1368] = {.count = 1}, REDUCE(sym_then_block, 3, 0),
    [1370] = {.count = 1}, SHIFT(500, 0),
    [1372] = {.count = 1}, SHIFT(499, 0),
    [1374] = {.count = 1}, SHIFT(498, 0),
    [1376] = {.count = 1}, SHIFT(497, 0),
    [1378] = {.count = 1}, SHIFT(502, 0),
    [1380] = {.count = 1}, SHIFT(507, 0),
    [1382] = {.count = 1}, SHIFT(506, 0),
    [1384] = {.count = 1}, SHIFT(508, 0),
    [1386] = {.count = 1}, SHIFT(510, 0),
    [1388] = {.count = 1}, SHIFT(512, 0),
    [1390] = {.count = 1}, SHIFT(514, 0),
    [1392] = {.count = 1}, SHIFT(515, 0),
    [1394] = {.count = 1}, SHIFT(516, 0),
    [1396] = {.count = 1}, SHIFT(517, 0),
    [1398] = {.count = 1}, SHIFT(518, 0),
    [1400] = {.count = 1}, SHIFT(519, 0),
    [1402] = {.count = 1}, SHIFT(522, 0),
    [1404] = {.count = 1}, SHIFT(523, 0),
    [1406] = {.count = 1}, SHIFT(536, 0),
    [1408] = {.count = 1}, SHIFT(537, 0),
    [1410] = {.count = 1}, SHIFT(524, 0),
    [1412] = {.count = 1}, SHIFT(525, 0),
    [1414] = {.count = 1}, SHIFT(526, 0),
    [1416] = {.count = 1}, SHIFT(533, 0),
    [1418] = {.count = 1}, SHIFT(534, 0),
    [1420] = {.count = 1}, SHIFT(527, 0),
    [1422] = {.count = 1}, SHIFT(528, 0),
    [1424] = {.count = 1}, SHIFT(529, 0),
    [1426] = {.count = 1}, SHIFT(530, 0),
    [1428] = {.count = 1}, SHIFT(531, 0),
    [1430] = {.count = 1}, SHIFT(532, 0),
    [1432] = {.count = 1}, SHIFT(535, 0),
    [1434] = {.count = 1}, SHIFT(538, 0),
    [1436] = {.count = 1}, SHIFT(539, 0),
    [1438] = {.count = 1}, SHIFT(542, 0),
    [1440] = {.count = 1}, SHIFT(543, 0),
    [1442] = {.count = 1}, SHIFT(544, 0),
    [1444] = {.count = 1}, SHIFT(546, 0),
    [1446] = {.count = 1}, SHIFT(547, 0),
    [1448] = {.count = 1}, SHIFT(548, 0),
    [1450] = {.count = 1}, SHIFT(550, 0),
    [1452] = {.count = 1}, SHIFT(560, 0),
    [1454] = {.count = 1}, SHIFT(561, 0),
    [1456] = {.count = 1}, SHIFT(549, 0),
    [1458] = {.count = 1}, SHIFT(556, 0),
    [1460] = {.count = 1}, SHIFT(551, 0),
    [1462] = {.count = 1}, SHIFT(552, 0),
    [1464] = {.count = 1}, SHIFT(553, 0),
    [1466] = {.count = 1}, SHIFT(554, 0),
    [1468] = {.count = 1}, SHIFT(555, 0),
    [1470] = {.count = 1}, SHIFT(557, 0),
    [1472] = {.count = 1}, SHIFT(558, 0),
    [1474] = {.count = 1}, SHIFT(559, 0),
    [1476] = {.count = 1}, SHIFT(562, 0),
    [1478] = {.count = 1}, SHIFT(564, 0),
    [1480] = {.count = 1}, SHIFT(576, 0),
    [1482] = {.count = 1}, SHIFT(571, 0),
    [1484] = {.count = 1}, SHIFT(572, 0),
    [1486] = {.count = 1}, SHIFT(570, 0),
    [1488] = {.count = 1}, SHIFT(573, 0),
    [1490] = {.count = 1}, SHIFT(574, 0),
    [1492] = {.count = 1}, SHIFT(575, 0),
    [1494] = {.count = 1}, SHIFT(578, 0),
    [1496] = {.count = 1}, SHIFT(579, 0),
    [1498] = {.count = 1}, SHIFT(585, 0),
    [1500] = {.count = 1}, SHIFT(581, 0),
    [1502] = {.count = 1}, SHIFT(580, 0),
    [1504] = {.count = 1}, SHIFT(582, 0),
    [1506] = {.count = 1}, SHIFT(583, 0),
    [1508] = {.count = 1}, SHIFT(584, 0),
    [1510] = {.count = 1}, SHIFT(596, 0),
    [1512] = {.count = 1}, SHIFT(595, 0),
    [1514] = {.count = 1}, SHIFT(594, 0),
    [1516] = {.count = 1}, SHIFT(593, 0),
    [1518] = {.count = 1}, SHIFT(592, 0),
    [1520] = {.count = 1}, SHIFT(597, 0),
    [1522] = {.count = 1}, SHIFT(600, 0),
    [1524] = {.count = 1}, SHIFT(602, 0),
    [1526] = {.count = 1}, SHIFT(603, 0),
    [1528] = {.count = 1}, SHIFT(604, 0),
    [1530] = {.count = 1}, SHIFT(605, 0),
    [1532] = {.count = 1}, SHIFT(606, 0),
    [1534] = {.count = 1}, SHIFT(608, 0),
    [1536] = {.count = 1}, SHIFT(607, 0),
    [1538] = {.count = 1}, SHIFT(609, 0),
    [1540] = {.count = 1}, SHIFT(611, 0),
    [1542] = {.count = 1}, SHIFT(613, 0),
    [1544] = {.count = 1}, SHIFT(615, 0),
    [1546] = {.count = 1}, SHIFT(616, 0),
    [1548] = {.count = 1}, SHIFT(617, 0),
    [1550] = {.count = 1}, SHIFT(618, 0),
    [1552] = {.count = 1}, SHIFT(619, 0),
    [1554] = {.count = 1}, SHIFT(620, 0),
    [1556] = {.count = 1}, SHIFT(623, 0),
    [1558] = {.count = 1}, SHIFT(624, 0),
    [1560] = {.count = 1}, SHIFT(637, 0),
    [1562] = {.count = 1}, SHIFT(638, 0),
    [1564] = {.count = 1}, SHIFT(625, 0),
    [1566] = {.count = 1}, SHIFT(626, 0),
    [1568] = {.count = 1}, SHIFT(627, 0),
    [1570] = {.count = 1}, SHIFT(634, 0),
    [1572] = {.count = 1}, SHIFT(635, 0),
    [1574] = {.count = 1}, SHIFT(628, 0),
    [1576] = {.count = 1}, SHIFT(629, 0),
    [1578] = {.count = 1}, SHIFT(630, 0),
    [1580] = {.count = 1}, SHIFT(631, 0),
    [1582] = {.count = 1}, SHIFT(632, 0),
    [1584] = {.count = 1}, SHIFT(633, 0),
    [1586] = {.count = 1}, SHIFT(636, 0),
    [1588] = {.count = 1}, SHIFT(639, 0),
    [1590] = {.count = 1}, SHIFT(640, 0),
    [1592] = {.count = 1}, SHIFT(643, 0),
    [1594] = {.count = 1}, SHIFT(644, 0),
    [1596] = {.count = 1}, SHIFT(645, 0),
    [1598] = {.count = 1}, SHIFT(647, 0),
    [1600] = {.count = 1}, SHIFT(648, 0),
    [1602] = {.count = 1}, SHIFT(649, 0),
    [1604] = {.count = 1}, SHIFT(651, 0),
    [1606] = {.count = 1}, SHIFT(661, 0),
    [1608] = {.count = 1}, SHIFT(662, 0),
    [1610] = {.count = 1}, SHIFT(650, 0),
    [1612] = {.count = 1}, SHIFT(657, 0),
    [1614] = {.count = 1}, SHIFT(652, 0),
    [1616] = {.count = 1}, SHIFT(653, 0),
    [1618] = {.count = 1}, SHIFT(654, 0),
    [1620] = {.count = 1}, SHIFT(655, 0),
    [1622] = {.count = 1}, SHIFT(656, 0),
    [1624] = {.count = 1}, SHIFT(658, 0),
    [1626] = {.count = 1}, SHIFT(659, 0),
    [1628] = {.count = 1}, SHIFT(660, 0),
    [1630] = {.count = 1}, SHIFT(663, 0),
    [1632] = {.count = 1}, SHIFT(665, 0),
    [1634] = {.count = 1}, SHIFT(677, 0),
    [1636] = {.count = 1}, SHIFT(672, 0),
    [1638] = {.count = 1}, SHIFT(673, 0),
    [1640] = {.count = 1}, SHIFT(671, 0),
    [1642] = {.count = 1}, SHIFT(674, 0),
    [1644] = {.count = 1}, SHIFT(675, 0),
    [1646] = {.count = 1}, SHIFT(676, 0),
    [1648] = {.count = 1}, SHIFT(679, 0),
    [1650] = {.count = 1}, SHIFT(680, 0),
    [1652] = {.count = 1}, SHIFT(686, 0),
    [1654] = {.count = 1}, SHIFT(682, 0),
    [1656] = {.count = 1}, SHIFT(681, 0),
    [1658] = {.count = 1}, SHIFT(683, 0),
    [1660] = {.count = 1}, SHIFT(684, 0),
    [1662] = {.count = 1}, SHIFT(685, 0),
    [1664] = {.count = 1}, SHIFT(689, 0),
    [1666] = {.count = 1}, SHIFT(692, 0),
    [1668] = {.count = 1}, SHIFT(693, 0),
    [1670] = {.count = 1}, SHIFT(694, 0),
    [1672] = {.count = 1}, SHIFT(704, 0),
    [1674] = {.count = 1}, SHIFT(699, 0),
    [1676] = {.count = 1}, SHIFT(700, 0),
    [1678] = {.count = 1}, SHIFT(698, 0),
    [1680] = {.count = 1}, SHIFT(701, 0),
    [1682] = {.count = 1}, SHIFT(702, 0),
    [1684] = {.count = 1}, SHIFT(703, 0),
    [1686] = {.count = 1}, SHIFT(706, 0),
    [1688] = {.count = 1}, SHIFT(707, 0),
    [1690] = {.count = 1}, SHIFT(708, 0),
    [1692] = {.count = 1}, SHIFT(709, 0),
    [1694] = {.count = 1}, SHIFT(710, 0),
    [1696] = {.count = 1}, SHIFT(712, 0),
    [1698] = {.count = 1}, SHIFT(713, 0),
    [1700] = {.count = 1}, SHIFT(714, 0),
    [1702] = {.count = 1}, SHIFT(715, 0),
    [1704] = {.count = 1}, SHIFT(716, 0),
    [1706] = {.count = 1}, SHIFT(718, 0),
    [1708] = {.count = 1}, SHIFT(717, 0),
    [1710] = {.count = 1}, SHIFT(719, 0),
    [1712] = {.count = 1}, SHIFT(721, 0),
    [1714] = {.count = 1}, SHIFT(723, 0),
    [1716] = {.count = 1}, SHIFT(725, 0),
    [1718] = {.count = 1}, SHIFT(726, 0),
    [1720] = {.count = 1}, SHIFT(727, 0),
    [1722] = {.count = 1}, SHIFT(728, 0),
    [1724] = {.count = 1}, SHIFT(729, 0),
    [1726] = {.count = 1}, SHIFT(730, 0),
    [1728] = {.count = 1}, SHIFT(733, 0),
    [1730] = {.count = 1}, SHIFT(734, 0),
    [1732] = {.count = 1}, SHIFT(747, 0),
    [1734] = {.count = 1}, SHIFT(748, 0),
    [1736] = {.count = 1}, SHIFT(735, 0),
    [1738] = {.count = 1}, SHIFT(736, 0),
    [1740] = {.count = 1}, SHIFT(737, 0),
    [1742] = {.count = 1}, SHIFT(744, 0),
    [1744] = {.count = 1}, SHIFT(745, 0),
    [1746] = {.count = 1}, SHIFT(738, 0),
    [1748] = {.count = 1}, SHIFT(739, 0),
    [1750] = {.count = 1}, SHIFT(740, 0),
    [1752] = {.count = 1}, SHIFT(741, 0),
    [1754] = {.count = 1}, SHIFT(742, 0),
    [1756] = {.count = 1}, SHIFT(743, 0),
    [1758] = {.count = 1}, SHIFT(746, 0),
    [1760] = {.count = 1}, SHIFT(749, 0),
    [1762] = {.count = 1}, SHIFT(750, 0),
    [1764] = {.count = 1}, SHIFT(753, 0),
    [1766] = {.count = 1}, SHIFT(754, 0),
    [1768] = {.count = 1}, SHIFT(755, 0),
    [1770] = {.count = 1}, SHIFT(757, 0),
    [1772] = {.count = 1}, SHIFT(758, 0),
    [1774] = {.count = 1}, SHIFT(759, 0),
    [1776] = {.count = 1}, SHIFT(761, 0),
    [1778] = {.count = 1}, SHIFT(771, 0),
    [1780] = {.count = 1}, SHIFT(772, 0),
    [1782] = {.count = 1}, SHIFT(760, 0),
    [1784] = {.count = 1}, SHIFT(767, 0),
    [1786] = {.count = 1}, SHIFT(762, 0),
    [1788] = {.count = 1}, SHIFT(763, 0),
    [1790] = {.count = 1}, SHIFT(764, 0),
    [1792] = {.count = 1}, SHIFT(765, 0),
    [1794] = {.count = 1}, SHIFT(766, 0),
    [1796] = {.count = 1}, SHIFT(768, 0),
    [1798] = {.count = 1}, SHIFT(769, 0),
    [1800] = {.count = 1}, SHIFT(770, 0),
    [1802] = {.count = 1}, SHIFT(773, 0),
    [1804] = {.count = 1}, SHIFT(775, 0),
    [1806] = {.count = 1}, SHIFT(787, 0),
    [1808] = {.count = 1}, SHIFT(782, 0),
    [1810] = {.count = 1}, SHIFT(783, 0),
    [1812] = {.count = 1}, SHIFT(781, 0),
    [1814] = {.count = 1}, SHIFT(784, 0),
    [1816] = {.count = 1}, SHIFT(785, 0),
    [1818] = {.count = 1}, SHIFT(786, 0),
    [1820] = {.count = 1}, SHIFT(789, 0),
    [1822] = {.count = 1}, SHIFT(790, 0),
    [1824] = {.count = 1}, SHIFT(796, 0),
    [1826] = {.count = 1}, SHIFT(792, 0),
    [1828] = {.count = 1}, SHIFT(791, 0),
    [1830] = {.count = 1}, SHIFT(793, 0),
    [1832] = {.count = 1}, SHIFT(794, 0),
    [1834] = {.count = 1}, SHIFT(795, 0),
    [1836] = {.count = 1}, SHIFT(799, 0),
    [1838] = {.count = 1}, SHIFT(809, 0),
    [1840] = {.count = 1}, SHIFT(804, 0),
    [1842] = {.count = 1}, SHIFT(805, 0),
    [1844] = {.count = 1}, SHIFT(803, 0),
    [1846] = {.count = 1}, SHIFT(806, 0),
    [1848] = {.count = 1}, SHIFT(807, 0),
    [1850] = {.count = 1}, SHIFT(808, 0),
    [1852] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [1854] = {.count = 1}, SHIFT(812, 0),
    [1856] = {.count = 1}, SHIFT(813, 0),
    [1858] = {.count = 1}, SHIFT(816, 0),
    [1860] = {.count = 1}, SHIFT(817, 0),
    [1862] = {.count = 1}, SHIFT(818, 0),
    [1864] = {.count = 1}, SHIFT(819, 0),
    [1866] = {.count = 1}, SHIFT(820, 0),
    [1868] = {.count = 1}, SHIFT(821, 0),
    [1870] = {.count = 1}, SHIFT(827, 0),
    [1872] = {.count = 1}, SHIFT(828, 0),
    [1874] = {.count = 1}, SHIFT(822, 0),
    [1876] = {.count = 1}, SHIFT(823, 0),
    [1878] = {.count = 1}, SHIFT(824, 0),
    [1880] = {.count = 1}, SHIFT(825, 0),
    [1882] = {.count = 1}, SHIFT(826, 0),
    [1884] = {.count = 1}, SHIFT(829, 0),
    [1886] = {.count = 1}, SHIFT(830, 0),
    [1888] = {.count = 1}, SHIFT(831, 0),
    [1890] = {.count = 1}, SHIFT(833, 0),
    [1892] = {.count = 1}, SHIFT(834, 0),
    [1894] = {.count = 1}, SHIFT(835, 0),
    [1896] = {.count = 1}, SHIFT(836, 0),
    [1898] = {.count = 1}, SHIFT(837, 0),
    [1900] = {.count = 1}, SHIFT(839, 0),
    [1902] = {.count = 1}, SHIFT(840, 0),
    [1904] = {.count = 1}, SHIFT(841, 0),
    [1906] = {.count = 1}, SHIFT(842, 0),
    [1908] = {.count = 1}, SHIFT(843, 0),
    [1910] = {.count = 1}, SHIFT(845, 0),
    [1912] = {.count = 1}, SHIFT(844, 0),
    [1914] = {.count = 1}, SHIFT(846, 0),
    [1916] = {.count = 1}, SHIFT(848, 0),
    [1918] = {.count = 1}, SHIFT(850, 0),
    [1920] = {.count = 1}, SHIFT(852, 0),
    [1922] = {.count = 1}, SHIFT(853, 0),
    [1924] = {.count = 1}, SHIFT(854, 0),
    [1926] = {.count = 1}, SHIFT(855, 0),
    [1928] = {.count = 1}, SHIFT(856, 0),
    [1930] = {.count = 1}, SHIFT(857, 0),
    [1932] = {.count = 1}, SHIFT(860, 0),
    [1934] = {.count = 1}, SHIFT(861, 0),
    [1936] = {.count = 1}, SHIFT(874, 0),
    [1938] = {.count = 1}, SHIFT(875, 0),
    [1940] = {.count = 1}, SHIFT(862, 0),
    [1942] = {.count = 1}, SHIFT(863, 0),
    [1944] = {.count = 1}, SHIFT(864, 0),
    [1946] = {.count = 1}, SHIFT(871, 0),
    [1948] = {.count = 1}, SHIFT(872, 0),
    [1950] = {.count = 1}, SHIFT(865, 0),
    [1952] = {.count = 1}, SHIFT(866, 0),
    [1954] = {.count = 1}, SHIFT(867, 0),
    [1956] = {.count = 1}, SHIFT(868, 0),
    [1958] = {.count = 1}, SHIFT(869, 0),
    [1960] = {.count = 1}, SHIFT(870, 0),
    [1962] = {.count = 1}, SHIFT(873, 0),
    [1964] = {.count = 1}, SHIFT(876, 0),
    [1966] = {.count = 1}, SHIFT(877, 0),
    [1968] = {.count = 1}, SHIFT(880, 0),
    [1970] = {.count = 1}, SHIFT(881, 0),
    [1972] = {.count = 1}, SHIFT(882, 0),
    [1974] = {.count = 1}, SHIFT(884, 0),
    [1976] = {.count = 1}, SHIFT(885, 0),
    [1978] = {.count = 1}, SHIFT(886, 0),
    [1980] = {.count = 1}, SHIFT(888, 0),
    [1982] = {.count = 1}, SHIFT(898, 0),
    [1984] = {.count = 1}, SHIFT(899, 0),
    [1986] = {.count = 1}, SHIFT(887, 0),
    [1988] = {.count = 1}, SHIFT(894, 0),
    [1990] = {.count = 1}, SHIFT(889, 0),
    [1992] = {.count = 1}, SHIFT(890, 0),
    [1994] = {.count = 1}, SHIFT(891, 0),
    [1996] = {.count = 1}, SHIFT(892, 0),
    [1998] = {.count = 1}, SHIFT(893, 0),
    [2000] = {.count = 1}, SHIFT(895, 0),
    [2002] = {.count = 1}, SHIFT(896, 0),
    [2004] = {.count = 1}, SHIFT(897, 0),
    [2006] = {.count = 1}, SHIFT(900, 0),
    [2008] = {.count = 1}, SHIFT(902, 0),
    [2010] = {.count = 1}, SHIFT(914, 0),
    [2012] = {.count = 1}, SHIFT(909, 0),
    [2014] = {.count = 1}, SHIFT(910, 0),
    [2016] = {.count = 1}, SHIFT(908, 0),
    [2018] = {.count = 1}, SHIFT(911, 0),
    [2020] = {.count = 1}, SHIFT(912, 0),
    [2022] = {.count = 1}, SHIFT(913, 0),
    [2024] = {.count = 1}, SHIFT(916, 0),
    [2026] = {.count = 1}, SHIFT(917, 0),
    [2028] = {.count = 1}, SHIFT(923, 0),
    [2030] = {.count = 1}, SHIFT(919, 0),
    [2032] = {.count = 1}, SHIFT(918, 0),
    [2034] = {.count = 1}, SHIFT(920, 0),
    [2036] = {.count = 1}, SHIFT(921, 0),
    [2038] = {.count = 1}, SHIFT(922, 0),
    [2040] = {.count = 1}, SHIFT(934, 0),
    [2042] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [2044] = {.count = 1}, SHIFT(933, 0),
    [2046] = {.count = 1}, SHIFT(932, 0),
    [2048] = {.count = 1}, SHIFT(931, 0),
    [2050] = {.count = 1}, SHIFT(930, 0),
    [2052] = {.count = 1}, SHIFT(935, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
